#!/usr/bin/env python3
import logging
import sys
import os
import signal
import json

from clang.cindex import *
from structures.tree import *
from tree_comparators.similar_nodes import node_quantity_compare
from tree_comparators.dynamic_ted import tree_edit_distance
from tree_comparators.largest_forest import LargestForest

logging.basicConfig(level=logging.DEBUG,
                    format='%(name)s-%(levelname)s: %(message)s')
log = logging.getLogger("compare_asts.py")


TIMEOUT = 10


with open("lib/timeout_util.py", "r") as fd:
    exec(fd.read())


def read_orig_symbol(symbol_map_f):
    symbols = []
    with open(symbol_map_f, "r") as fd:
        for line in fd.read().split("\n"):
            if len(line) == 0:
                continue
            a, b = line.split(":")
            symbols.append(a)
    return symbols



def process(base_dir, filename, opt_level):
    orig_ast   =  base_dir + f'ast_x86/{filename}.ast'
    r2_ast   =  base_dir + f'ast_ghidra_new/{filename}.ast'
    retdec_ast =  base_dir + f'ast_retdec_new/{filename}.ast'
    any_symbol_f = base_dir + f'd_wasm2c_symbols/{filename}.map'

    if not os.path.exists(r2_ast) or not os.path.exists(retdec_ast):
        return {}

    orig_symbols = read_orig_symbol(any_symbol_f)
    

    log.debug(f'++ Loading: {orig_ast}')
    orig_t_unit = TranslationUnit.from_ast_file(orig_ast)
    orig_tree_dict = create_ast_tree(orig_t_unit, orig_symbols)

    # for root in orig_tree_dict.values():
    #     dfs_print_tree(root)
    #     print()

    log.debug(f'++ Loading: {r2_ast}')
    r2_t_unit = TranslationUnit.from_ast_file(r2_ast)
    r2_tree_dict = create_ast_tree(r2_t_unit, orig_symbols)


    log.debug(f'++ Loading: {retdec_ast}')
    retdec_t_unit = TranslationUnit.from_ast_file(retdec_ast)
    retdec_tree_dict = create_ast_tree(retdec_t_unit, orig_symbols)

    results = {}

    for sym in orig_symbols:
        if sym not in r2_tree_dict or sym not in retdec_tree_dict:
            continue
        results[sym] = {"r2-ghidra": {}, "retdec": {}}

        # node_quantity_compare
        signal.alarm(TIMEOUT)
        try:
            r2_s = node_quantity_compare(orig_tree_dict[sym], r2_tree_dict[sym])
        except TimeOutException as ex:
            log.warning(f"timeout: {TIMEOUT} nqc @ r2-{filename}-{opt_level}")
            r2_s = -1
        signal.alarm(0)
        results[sym]["r2-ghidra"]["nqc"] = r2_s

        signal.alarm(TIMEOUT)
        try:
            retdec_s = node_quantity_compare(orig_tree_dict[sym], retdec_tree_dict[sym])
        except TimeOutException as ex:
            log.warning(f"timeout: {TIMEOUT} nqc @ retdec-{filename}-{opt_level}")
            retdec_s = -1
        signal.alarm(0)
        results[sym]["retdec"]["nqc"] = retdec_s

        log.debug('nqc:    {:30s}  {:.4f}, {:.4f}'.format(sym, r2_s, retdec_s))

        # Tree edit distance
        signal.alarm(TIMEOUT)
        try:
            r2_dist = tree_edit_distance(orig_tree_dict[sym], r2_tree_dict[sym])
        except TimeOutException as ex:
            log.warning(f"timeout: {TIMEOUT} ted @ r2-{filename}-{opt_level}")
            r2_dist = -1
        signal.alarm(0)
        results[sym]["r2-ghidra"]["ted"] = r2_dist

        signal.alarm(TIMEOUT)
        try:
            retdec_dist = tree_edit_distance(orig_tree_dict[sym], retdec_tree_dict[sym])
        except TimeOutException as ex:
            log.warning(f"timeout: {TIMEOUT} ted @ retdec-{filename}-{opt_level}")
            retdec_dist = -1
        signal.alarm(0)
        results[sym]["retdec"]["ted"] = retdec_dist

        log.debug(f'ted:    {sym:30s}  {r2_dist:.4f}, {retdec_dist:.4f}')

        # # LargestForest
        # r2_s = LargestForest(orig_tree_dict[sym], r2_tree_dict[r2_sym])
        # r2_similarity = r2_s.count_similarity()
        # retdec_s = LargestForest(orig_tree_dict[sym], retdec_tree_dict[retdec_sym])
        # retdec_similarity = retdec_s.count_similarity()

        # log.debug(f'LargestForest:    {sym:30s}  {r2_similarity:.4f}, {retdec_similarity:.4f}')

    return results



def main():
    # Load in previous data
    if os.path.exists("r2-retdec_ast_results.json"):
        with open("r2-retdec_ast_results.json", "r") as fd:
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
            with open("r2-retdec_ast_results.json", "w") as outfile:
                json.dump(results, outfile)

            log.info(f'==== Done O{opt_level} {filename}')
            log.info(f'===========================\n\n')


if __name__ == '__main__':
    main()
