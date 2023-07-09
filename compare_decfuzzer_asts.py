#!/usr/bin/env python3
import logging
import sys
import os
import collections
import signal
import json

from clang.cindex import *
from structures.tree import *
from tree_comparators.similar_nodes import node_quantity_compare
from tree_comparators.dynamic_ted import tree_edit_distance
from tree_comparators.largest_forest import LargestForest

logging.basicConfig(level=logging.DEBUG,
                    format='%(name)s-%(levelname)s: %(message)s')
log = logging.getLogger("compare_decfuzzer_asts.py")


TIMEOUT = 10


with open("lib/timeout_util.py", "r") as fd:
    exec(fd.read())


def get_unit_tree(filename, ast_f):
    if "wasm" in ast_f:
        func_name = f"w2c_{filename}_func_1_0"
    else:
        func_name = "func_1"
    log.debug(f'++ Loading: {ast_f}')
    unit = TranslationUnit.from_ast_file(ast_f)
    trees = create_ast_tree(unit, [func_name])
    if len(trees) == 0:
        print(f'-- No trees for {ast_f}')
        exit(1)
        return None
    return trees[func_name]


def get_nqc(orig_tree, cmp_tree, name):
    signal.alarm(TIMEOUT)
    ret = -1
    try:
        ret = node_quantity_compare(orig_tree, cmp_tree)
    except TimeOutException as ex:
        log.warning(f"timeout: {TIMEOUT} nqc @ {name}")
    signal.alarm(0)
    return ret


def get_ted(orig_tree, cmp_tree, name):
    signal.alarm(TIMEOUT)
    ret = -1
    try:
        ret =  tree_edit_distance(orig_tree, cmp_tree)
    except TimeOutException as ex:
        log.warning(f"timeout: {TIMEOUT} ted @ {name}")
    signal.alarm(0)
    return ret


def process(base_dir, filename):
    orig_ast   =  base_dir + f'orig/{filename}.ast'
    wasm2c_ast =  base_dir + f'd_wasm2c/{filename}.wasm2c.ast'
    r2_ast =  base_dir + f'd_r2/{filename}_new.ast'
    retdec_ast =  base_dir + f'd_retdec/{filename}_new.ast'

    if not os.path.exists(orig_ast) or \
        not os.path.exists(wasm2c_ast) or \
        not os.path.exists(r2_ast) or \
        not os.path.exists(retdec_ast):
        return {}
    
    orig_tree =  get_unit_tree(filename, orig_ast)
    wasm2c_tree = get_unit_tree(filename, wasm2c_ast)
    r2_tree = get_unit_tree(filename, r2_ast)
    retdec_tree = get_unit_tree(filename, retdec_ast)

    results = {"wasm2c": {}, "r2-ghidra": {}, "retdec": {}}
    results["wasm2c"]["nqc"] = get_nqc(orig_tree, wasm2c_tree, f"wasm2c-{filename}")
    results["wasm2c"]["ted"] = get_ted(orig_tree, wasm2c_tree, f"wasm2c-{filename}")

    results["r2-ghidra"]["nqc"] = get_nqc(orig_tree, r2_tree, f"r2-ghidra-{filename}")
    results["r2-ghidra"]["ted"] = get_ted(orig_tree, r2_tree, f"r2-ghidra-{filename}")

    results["retdec"]["nqc"] = get_nqc(orig_tree, retdec_tree, f"retdec-{filename}")
    results["retdec"]["ted"] = get_ted(orig_tree, retdec_tree, f"retdec-{filename}")

    return results



def main():
    # Load in previous data
    if os.path.exists("decfuzzer_ast_results.json"):
        with open("decfuzzer_ast_results.json", "r") as fd:
            results = json.load(fd)
    else:
        results = {}

    for ast in os.listdir("../DecFuzzer/asts/orig/"):
        filename = ast.replace(".ast", "")
        if filename in results:
            continue

        log.info(f'==== Handling {filename}')

        results[filename] = process("../DecFuzzer/asts/", filename)

        with open("decfuzzer_ast_results.json", "w") as outfile:
            json.dump(results, outfile)

        log.info(f'==== Done {filename}')
        log.info(f'===========================\n\n')


if __name__ == '__main__':
    main()
