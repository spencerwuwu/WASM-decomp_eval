#!/usr/bin/env python3
import logging
import sys
import os
import collections

from clang.cindex import *
from structures.tree import *
from tree_comparators.similar_nodes import node_quantity_compare

logging.basicConfig(level=logging.DEBUG,
                    format='%(name)s-%(levelname)s: %(message)s')
log = logging.getLogger("compare_asts.py")



def read_symbol_map(symbol_map_f):
    symbol_map = {}
    with open(symbol_map_f, "r") as fd:
        for line in fd.read().split("\n"):
            if len(line) == 0:
                continue
            a, b = line.split(":")
            symbol_map[a] = b
    return symbol_map



def process(base_dir, filename):
    orig_ast   =  base_dir + f'ast_x86/{filename}.ast'
    w2c2_ast   =  base_dir + f'ast_w2c2/{filename}.ast'
    wasm2c_ast =  base_dir + f'ast_wasm2c/{filename}.ast'
    w2c2_symbol_f = base_dir + f'd_w2c2_symbols/{filename}.map'
    wasm2c_symbol_f = base_dir + f'd_wasm2c_symbols/{filename}.map'

    w2c2_symbol_map = read_symbol_map(w2c2_symbol_f)
    wasm2c_symbol_map = read_symbol_map(wasm2c_symbol_f)
    

    log.info(f'++ Loading: {orig_ast}')
    orig_t_unit = TranslationUnit.from_ast_file(orig_ast)
    orig_symbols = collections.Counter(w2c2_symbol_map.keys()) &\
            collections.Counter(wasm2c_symbol_map.keys())
    orig_tree_dict = create_ast_tree(orig_t_unit, orig_symbols)

    # for root in orig_tree_dict.values():
    #     dfs_print_tree(root)
    #     print()

    log.info(f'++ Loading: {w2c2_ast}')
    w2c2_t_unit = TranslationUnit.from_ast_file(w2c2_ast)
    w2c2_tree_dict = create_ast_tree(w2c2_t_unit, w2c2_symbol_map.values())


    log.info(f'++ Loading: {wasm2c_ast}')
    wasm2c_t_unit = TranslationUnit.from_ast_file(wasm2c_ast)
    wasm2c_tree_dict = create_ast_tree(wasm2c_t_unit, wasm2c_symbol_map.values())

    for sym in orig_symbols:
        w2c2_sym = w2c2_symbol_map[sym]
        wasm2c_sym = wasm2c_symbol_map[sym]
        w2c2_s = node_quantity_compare(orig_tree_dict[sym], w2c2_tree_dict[w2c2_sym])
        wasm2c_s = node_quantity_compare(orig_tree_dict[sym], wasm2c_tree_dict[wasm2c_sym])
        log.debug('SIM:    {:30s}  {:.4f}, {:.4f}'.format(sym, w2c2_s, wasm2c_s))
    exit(0)




def main():
    wasm_dir = "em_output_O0"
    base_dir = f'new_compiled_benchmarks/{wasm_dir}/'
    filename = "bf"
    process(base_dir, filename)
    exit(0)

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
