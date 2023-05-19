#!/usr/bin/env python3
import logging
import sys
import os
from clang.cindex import *

logging.basicConfig(level=logging.DEBUG,
                    format='%(name)s-%(levelname)s: %(message)s')
log = logging.getLogger("map_symbols.py")

CLIBS = [
        "strcmp",
        "malloc",
        "free",
        "calloc",
        "printf",
        "strcmp",
        "fwrite",
        "fputc",

        "gettimeofday",
        "rtclock",
        "print_array",
        "init_array",
        "submain",
        ]


class TreeNode():
    def __init__(self, cursor=None):
        if cursor is None:
            self.translation_unit = None 
            self.cursor_kind = None
        else:
            self.cursor_kind = cursor.kind
            self.translation_unit = cursor.translation_unit
        self.cursor = cursor
        self.parent = None
        self.children = []
    
    def get_children(self):
        return self.children


def dfs_print_tree(node, cur_level=0):
    print(" " * cur_level + "|-", node.cursor_kind, node.cursor.displayname)
    for child in node.get_children():
        dfs_print_tree(child, cur_level+1)


def dfs_build_tree(cursor, cur_level=0):
    # Remove parameters for function
    if cursor.kind == CursorKind.PARM_DECL:
        return None
    # print(" " * cur_level + "|-", cursor.kind, cursor.spelling, cursor.displayname)

    cur_node = TreeNode(cursor)

    if len(list(cursor.get_children())) == 0:
        return cur_node

    for child in cursor.get_children():
        child_node = dfs_build_tree(child, cur_level+1)
        if child_node is None:
            continue
        child_node.parent = cur_node
        cur_node.children.append(child_node)
    return cur_node


def check_only_def(cursor):
    arg_len = len(list(cursor.get_arguments()))
    children_len = len(list(cursor.get_children()))
    if arg_len == children_len:
        return True
    return False


def create_ast_tree(translation_unit):
    file_prefix = str
    function_trees = {}

    for top_node in translation_unit.cursor.get_children():
        # Remove included functions
        # node_location = top_node.location.file
        # if node_location is not None and\
        #         translation_unit.spelling not in str(node_location):
        #     continue
        
        if top_node.type.kind != TypeKind.FUNCTIONPROTO:
            continue
        if check_only_def(top_node):
            continue

        # Remoe __wasm* and CLIBS
        func_name = top_node.displayname.split("(")[0]
        if func_name.startswith("__wasm"):
            continue
        if func_name.startswith("i32_"):
            continue
        if func_name.startswith("i64_"):
            continue
        for clib in CLIBS:
            if func_name in clib:
                continue

        # print(func_name)
        node = dfs_build_tree(top_node)
        function_trees[func_name] = node
    return function_trees


def find_first_callee(node):
    ret = None
    if node.cursor_kind == CursorKind.CALL_EXPR:
        return node.cursor.displayname
    for child in node.get_children():
        ret = find_first_callee(child)
        if ret is not None:
            break
    return ret


def _map_symbol_to_orig(symbols, tree_dict, filename):
    symbol_map = []
    for target in symbols:
        if target not in tree_dict:
            log.error(f'Cannot find {target} in orig/{filename}')
        else:
            symbol_map.append(target)
    log.debug(f'-- Symbols: {str(symbol_map)}')
    return symbol_map


def _map_symbol_to_w2c2(symbols, tree_dict, filename):
    symbol_map = []
    for symbol in symbols:
        if "_" in filename:
            filename = filename.replace("_", "")
        if "-" in filename:
            filename = filename.replace("-", "")
        target = "%s_%s" % (filename, symbol)
        if target not in tree_dict:
            if target not in tree_dict:
                target = "%s_%s" % (filename, symbol.replace("_", "X5"))
                log.error(f'Cannot find {target} in d_w2c2/{filename}')
                continue
        next_callee = find_first_callee(tree_dict[target])
        log.debug("  %s -> %s" % (symbol, next_callee))
        symbol_map.append((symbol, next_callee))
    return symbol_map


def _map_symbol_to_wasm2c(symbols, tree_dict, filename):
    symbol_map = []
    for symbol in symbols:
        if "_" in filename:
            filename = filename.replace("_", "__")
        if "-" in filename:
            filename = filename.replace("-", "0x2D")
        target = "w2c_%s_%s_0" % (filename, symbol)
        if target not in tree_dict:
            # imported symbols don't have sufix 0
            target = "w2c_%s_%s" % (filename, symbol)
            if target not in tree_dict:
                log.error(f'Cannot find {target} in d_wasm2c/{filename}')
                continue
        symbol_map.append((symbol, target))
        log.debug("  %s -> %s" % (symbol, target))
    return symbol_map

    

def map_roots_to_symbol(symbols, tree_dict, filename, type="w2c2"):
    if type == "w2c2":
        return _map_symbol_to_w2c2(symbols, tree_dict, filename)
    if type == "orig":
        return _map_symbol_to_orig(symbols, tree_dict, filename)
    else:
        return _map_symbol_to_wasm2c(symbols, tree_dict, filename)




def read_symbol_file(symbol_file):
    with open(symbol_file, "r") as fd:
        lines = fd.read().split("\n")
    symbols = []
    for line in lines:
        if len(line) == 0:
            continue
        symbol = line.split(":")[-1]
        if symbol.startswith("__wasm"):
            continue
        if "$" in symbol:
            continue
        matched = False
        for clib in CLIBS:
            if clib in symbol:
                matched = True
                break
        if matched:
            continue
        symbols.append(symbol)
    return symbols


def write_symbol_map_to_file(out_f, symbol_map):
    with open(out_f, "w") as fd:
        for a, b in symbol_map:
            fd.write(f'{a}:{b}\n')



def process(base_dir, filename):
    symbol_file = base_dir + f'symbols/{filename}.wasm.symbols'
    orig_ast   =  base_dir + f'ast_x86/{filename}.ast'
    w2c2_ast   =  base_dir + f'ast_w2c2/{filename}.ast'
    wasm2c_ast =  base_dir + f'ast_wasm2c/{filename}.ast'

    w2c2_symbol_dir = base_dir + "d_w2c2_symbols/"
    wasm2c_symbol_dir = base_dir + "d_wasm2c_symbols/"

    if not os.path.exists(w2c2_symbol_dir):
        os.makedirs(w2c2_symbol_dir)

    if not os.path.exists(wasm2c_symbol_dir):
        os.makedirs(wasm2c_symbol_dir)

    symbols = read_symbol_file(symbol_file)
    

    log.info(f'++ Loading: {orig_ast}')
    orig_t_unit = TranslationUnit.from_ast_file(orig_ast)
    orig_tree_dict = create_ast_tree(orig_t_unit)
    orig_symbols = map_roots_to_symbol(symbols, orig_tree_dict, filename, "orig")

    # for root in orig_tree_dict.values():
    #     dfs_print_tree(root)
    #     print()

    log.info(f'++ Loading: {w2c2_ast}')
    w2c2_t_unit = TranslationUnit.from_ast_file(w2c2_ast)
    w2c2_tree_dict = create_ast_tree(w2c2_t_unit)

    w2c2_symbol_map = map_roots_to_symbol(orig_symbols, w2c2_tree_dict, filename, "w2c2")

    write_symbol_map_to_file(f'{w2c2_symbol_dir}/{filename}.map', w2c2_symbol_map)

    log.info(f'++ Loading: {wasm2c_ast}')
    wasm2c_t_unit = TranslationUnit.from_ast_file(wasm2c_ast)
    wasm2c_tree_dict = create_ast_tree(wasm2c_t_unit)

    wasm2c_symbol_map = map_roots_to_symbol(orig_symbols, wasm2c_tree_dict, filename, "wasm2c")
    write_symbol_map_to_file(f'{wasm2c_symbol_dir}/{filename}.map', wasm2c_symbol_map)



def main():
    WASM_DIRS = ["em_output_O0", "em_output_O1", "em_output_O2"]
    for wasm_dir in WASM_DIRS:
        base_dir = f'new_compiled_benchmarks/{wasm_dir}/'
        for target in os.listdir(f'{base_dir}/ast_x86'):
            filename = target.replace(".ast", "")
            log.info(f'Handling {wasm_dir} {filename}')
            process(base_dir, filename)
            log.info(f'Done {wasm_dir} {filename}')
            log.info(f'===========================\n\n')


if __name__ == '__main__':
    main()
