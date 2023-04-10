#!/usr/bin/env python3
import logging
import sys
from clang.cindex import *

logging.basicConfig(level=logging.INFO)
log = logging.getLogger("compare_ast.py")

CLIBS = [
        "strcmp",
        "malloc",
        "free",
        "calloc",
        "printf",
        "strcmp",

        "gettimeofday",
        "rtclock",
        "print_array",
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
    print('Translation unit:', translation_unit.spelling)
    file_prefix = str
    function_trees = {}

    for top_node in translation_unit.cursor.get_children():
        # Remove included functions
        node_location = top_node.location.file
        if node_location is not None and\
                translation_unit.spelling not in str(node_location):
            continue

        node_kind = top_node.type.kind
        if node_kind == TypeKind.RECORD or\
                node_kind == TypeKind.TYPEDEF or\
                node_kind == TypeKind.FUNCTIONNOPROTO:
            continue
        
        if node_kind != TypeKind.FUNCTIONPROTO:
            continue
        if check_only_def(top_node):
            continue

        # Remoe __wasm* and CLIBS
        func_name = top_node.displayname.split("(")[0]
        if func_name.startswith("__wasm"):
            continue
        for clib in CLIBS:
            if func_name in clib:
                continue

        node = dfs_build_tree(top_node)
        function_trees[func_name] = node
        print(func_name)
    return function_trees


def _map_symbol_to_w2c2(symbols, tree_dict, filename):
    for symbol in symbols:
        target = "%s_%s" % (filename, symbol)
        if target not in tree_dict:
            log.error("Cannot find %s in ast!" % target)
        dfs_print_tree(tree_dict[target])
    # TODO
    return None



def _map_symbol_to_wasm2c(symbols, tree_dict, filename):
    # TODO
    return None

    

def map_roots_to_symbol(symbols, tree_dict, filename, type="w2c2"):
    if type == "w2c2":
        return _map_symbol_to_w2c2(symbols, tree_dict, filename)
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
        matched = False
        for clib in CLIBS:
            if clib in symbol:
                matched = True
                break
        if matched:
            continue
        symbols.append(symbol)
    return symbols


def main():
    base_dir = "new_compiled_benchmarks/em_output_O0/"
    symbol_file = base_dir + "symbols/aes.wasm.symbols"
    orig_ast   =  base_dir + "ast_x86/aes.ast"
    w2c2_ast   =  base_dir + "ast_w2c2/aes.ast"
    wasm2c_ast =  base_dir + "ast_wasm2c/aes.ast"
    filename = "aes"

    symbols = read_symbol_file(symbol_file)
    

    orig_t_unit = TranslationUnit.from_ast_file(orig_ast)
    orig_tree_dict = create_ast_tree(orig_t_unit)

    # for root in orig_tree_dict.values():
    #     dfs_print_tree(root)
    #     print()

    w2c2_t_unit = TranslationUnit.from_ast_file(w2c2_ast)
    w2c2_tree_dict = create_ast_tree(w2c2_t_unit)

    print("============= +++++++ =============")
    print(symbols)
    # for root in decom_trees.values():
    #     dfs_print_tree(root)
    #     print()
    map_roots_to_symbol(symbols, w2c2_tree_dict, filename, "w2c2")



if __name__ == '__main__':
    main()
