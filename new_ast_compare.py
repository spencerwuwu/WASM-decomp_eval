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

TIMEOUT = 60

def read_symbol_map(symbol_map_f):
    symbol_map = {}
    with open(symbol_map_f, "r") as fd:
        for line in fd.read().split("\n"):
            if len(line) == 0:
                continue
            a, b = line.split(":")
            symbol_map[a] = b
    return symbol_map

def parseFunctionNamesAndBody(filepath):
    index = Index.create()
    try:
        file = index.parse(
            filepath,
            args=["-Inew_compiled_benchmarks/decompiler_lib/"]
        )

        function_pairs = {}

        for func in file.cursor.get_children():
            children = list(func.get_children())
            if len(children) == 0:
                continue
            statement_body = children[-1]
            if (
                func.kind == CursorKind.FUNCTION_DECL
                and statement_body.kind == CursorKind.COMPOUND_STMT
            ):
                start = func.extent.start.line
                #print(func.extent.start)
                end = func.extent.end.line
                function_pairs[func.mangled_name] = func

        return function_pairs
    except:
        return {}


def get_ncq_ted(orig_tree, function_body, timeout_msg=""):
    new_tree = dfs_build_tree(function_body)
    #dfs_print_tree(new_tree)
    ncq = node_quantity_compare(orig_tree, new_tree)
    ted = tree_edit_distance(orig_tree, new_tree)
    return ncq, ted



#DECOMPILERS = ["w2c2", "wasm2c", "ghidra", "retdec"]
DECOMPILERS = ["w2c2", "wasm2c", "ghidra", "retdec", "wasm-decompile"]
#OPT_LEVELS = [0, 1, 2]
OPT_LEVELS = [0]

def main():
    # First, load common functions from readability_entries.json
    with open("readability_entries.json", "r") as fd:
        entries = json.load(fd)

    all_results = []
    for entry in entries:
        opt = entry["opt"]
        filename = entry["filename"]
        functions = entry["functions"]

        base_dir = f'new_compiled_benchmarks/em_output_O{opt}/'
        w2c2_symbol_f = base_dir + f'd_w2c2_symbols/{filename}.map'
        wasm2c_symbol_f = base_dir + f'd_wasm2c_symbols/{filename}.map'
        w2c2_symbol_map = read_symbol_map(w2c2_symbol_f)
        wasm2c_symbol_map = read_symbol_map(wasm2c_symbol_f)


        # First, load the original tree
        orig_ast = base_dir + f'ast_x86/{filename}.ast'
        log.debug(f'++ Loading: {orig_ast}')
        orig_t_unit = TranslationUnit.from_ast_file(orig_ast)
        orig_trees = create_ast_tree(orig_t_unit, functions)

        results = {}
        for decom in DECOMPILERS:
            if decom == "wasm2c" or decom == "w2c2":
                decom_file = f"{base_dir}/d_{decom}/{filename}.c"
            else:
                decom_file = f"{base_dir}/d_{decom}_new/{filename}.c"
            log.debug(f'++ handling: {decom_file}')
            func_body_pairs = parseFunctionNamesAndBody(decom_file)

            for func in functions:
                if func not in results:
                    results[func] = {}

                if decom == "wasm2c":
                    symbol = wasm2c_symbol_map[func]
                elif decom == "w2c2":
                    symbol = w2c2_symbol_map[func]
                else:
                    symbol = func
                    # Special cases
                    if "abs" in symbol and decom == "retdec":
                        symbol = symbol.replace("abs", "_abs")
                # Should not happen
                if symbol not in func_body_pairs:
                    print("Missing function", opt, decom, filename, symbol)
                    exit(1)
                msg = f"{opt} {decom} {filename} {func}"
                nqc, ted = get_ncq_ted(orig_trees[func], func_body_pairs[symbol])
                log.debug(':    {:30s}  {:.4f}, {:.4f}'.format(func, nqc, ted))
                if decom not in results[func]:
                    results[func][decom] = {"nqc": nqc, "ted": ted}
        all_results.append({
            "opt": opt,
            "filename": filename,
            "results": results
        })
        with open("all_ast_results.json", "w") as fd:
            json.dump(all_results, fd, indent=4)





if __name__ == "__main__":
    main()

