#!/usr/bin/env python3
import logging
import sys
import os
import collections
import json

from clang.cindex import *
from structures.tree import *
from tree_comparators.similar_nodes import node_quantity_compare
from tree_comparators.dynamic_ted import tree_edit_distance
from tree_comparators.largest_forest import LargestForest

logging.basicConfig(level=logging.DEBUG,
                    format='%(name)s-%(levelname)s: %(message)s')
log = logging.getLogger("compare_asts.py")


TIMEOUT = 60


with open("lib/timeout_util.py", "r") as fd:
    exec(fd.read())


def read_symbol_map(symbol_map_f):
    symbol_map = {}
    with open(symbol_map_f, "r") as fd:
        for line in fd.read().split("\n"):
            if len(line) == 0:
                continue
            a, b = line.split(":")
            symbol_map[a] = b
    return symbol_map



def process(base_dir, filename, opt_level):
    orig_ast   =  base_dir + f'ast_x86/{filename}.ast'
    w2c2_ast   =  base_dir + f'ast_w2c2/{filename}.ast'
    wasm2c_ast =  base_dir + f'ast_wasm2c/{filename}.ast'
    w2c2_symbol_f = base_dir + f'd_w2c2_symbols/{filename}.map'
    wasm2c_symbol_f = base_dir + f'd_wasm2c_symbols/{filename}.map'

    w2c2_symbol_map = read_symbol_map(w2c2_symbol_f)
    wasm2c_symbol_map = read_symbol_map(wasm2c_symbol_f)
    

    log.debug(f'++ Loading: {orig_ast}')
    orig_t_unit = TranslationUnit.from_ast_file(orig_ast)
    orig_symbols = collections.Counter(w2c2_symbol_map.keys()) &\
            collections.Counter(wasm2c_symbol_map.keys())
    orig_tree_dict = create_ast_tree(orig_t_unit, orig_symbols)

    # for root in orig_tree_dict.values():
    #     dfs_print_tree(root)
    #     print()

    log.debug(f'++ Loading: {w2c2_ast}')
    w2c2_t_unit = TranslationUnit.from_ast_file(w2c2_ast)
    w2c2_tree_dict = create_ast_tree(w2c2_t_unit, w2c2_symbol_map.values())


    log.debug(f'++ Loading: {wasm2c_ast}')
    wasm2c_t_unit = TranslationUnit.from_ast_file(wasm2c_ast)
    wasm2c_tree_dict = create_ast_tree(wasm2c_t_unit, wasm2c_symbol_map.values())

    results = {}

    for sym in orig_symbols:
        results[sym] = {"w2c2": {}, "wasm2c": {}}

        w2c2_sym = w2c2_symbol_map[sym]
        wasm2c_sym = wasm2c_symbol_map[sym]

        # node_quantity_compare
        signal.alarm(TIMEOUT)
        try:
            w2c2_s = node_quantity_compare(orig_tree_dict[sym], w2c2_tree_dict[w2c2_sym])
        except TimeOutException as ex:
            log.warning(f"timeout: {TIMEOUT} nqc @ w2c2-{filename}-{opt_level}")
            w2c2_s = 0
        signal.alarm(0)
        results[sym]["w2c2"]["nqc"] = w2c2_s

        signal.alarm(TIMEOUT)
        try:
            wasm2c_s = node_quantity_compare(orig_tree_dict[sym], wasm2c_tree_dict[wasm2c_sym])
        except TimeOutException as ex:
            log.warning(f"timeout: {TIMEOUT} nqc @ wasm2c-{filename}-{opt_level}")
            wasm2c_s = 0
        signal.alarm(0)
        results[sym]["wasm2c"]["nqc"] = wasm2c_s

        log.debug('nqc:    {:30s}  {:.4f}, {:.4f}'.format(sym, w2c2_s, wasm2c_s))

        # Tree edit distance
        signal.alarm(TIMEOUT)
        try:
            w2c2_dist = tree_edit_distance(orig_tree_dict[sym], w2c2_tree_dict[w2c2_sym])
        except TimeOutException as ex:
            log.warning(f"timeout: {TIMEOUT} ted @ w2c2-{filename}-{opt_level}")
            w2c2_dist = 0
        signal.alarm(0)
        results[sym]["w2c2"]["ted"] = w2c2_dist

        signal.alarm(TIMEOUT)
        try:
            wasm2c_dist = tree_edit_distance(orig_tree_dict[sym], wasm2c_tree_dict[wasm2c_sym])
        except TimeOutException as ex:
            log.warning(f"timeout: {TIMEOUT} ted @ wasm2c-{filename}-{opt_level}")
            wasm2c_dist = 0
        signal.alarm(0)
        results[sym]["wasm2c"]["ted"] = wasm2c_dist

        log.debug(f'ted:    {sym:30s}  {w2c2_dist:.4f}, {wasm2c_dist:.4f}')

        # # LargestForest
        # w2c2_s = LargestForest(orig_tree_dict[sym], w2c2_tree_dict[w2c2_sym])
        # w2c2_similarity = w2c2_s.count_similarity()
        # wasm2c_s = LargestForest(orig_tree_dict[sym], wasm2c_tree_dict[wasm2c_sym])
        # wasm2c_similarity = wasm2c_s.count_similarity()

        # log.debug(f'LargestForest:    {sym:30s}  {w2c2_similarity:.4f}, {wasm2c_similarity:.4f}')

    return results



def main():
    # Load in previous data
    if os.path.exists("ast_results.json"):
        with open("ast_results.json", "r") as fd:
            results = json.load(fd)
    else:
        results = []
    seen = []
    for data in results:
        seen.append((data["opt"], data["filename"]))

    # opt_level = 0
    # base_dir = f'new_compiled_benchmarks/em_output_O{opt_level}/'
    # filename = "bf"
    # if (opt_level, filename) not in seen:
    #     data = process(base_dir, filename, opt_level)
    #     seen.append((opt_level, filename))
    #     results.append({"opt": opt_level, "filename": filename, "results": data})
    #     # Dump current data
    #     with open("ast_results.json", "w") as outfile:
    #         json.dump(results, outfile)
    # exit(0)

    OPT_LEVELS = [0, 1, 2]

    for opt_level in OPT_LEVELS:
        base_dir = f'new_compiled_benchmarks/em_output_O{opt_level}/'
        for target in os.listdir(f'{base_dir}/ast_x86'):
            filename = target.replace(".ast", "")

            if (opt_level, filename) in seen:
                continue

            log.info(f'==== Handling O{opt_level} {filename}')
            data = process(base_dir, filename, opt_level)

            seen.append((opt_level, filename))
            results.append({"opt": opt_level, "filename": filename, "results": data})
            # Dump current data
            with open("ast_results.json", "w") as outfile:
                json.dump(results, outfile)

            log.info(f'==== Done O{opt_level} {filename}')
            log.info(f'===========================\n\n')


if __name__ == '__main__':
    main()
