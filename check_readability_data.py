#!/usr/bin/env python3
import logging
import sys
import os
import collections
import json

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


def get_loc(data, filename, function):
    keyword = "Maximum nesting depth"
    keyword = "Lines of code"
    keyword = "McCabe cyclomatic complexity"
    if filename not in data:
        return -5
    if function not in data[filename][keyword]:
        return -5
    return data[filename][keyword][function]
    


DECOMPILERS = ["w2c2", "wasm2c", "ghidra", "retdec"]
OPT_LEVELS = [0, 1, 2]

def main():
    func_cnt = 0
    # First, load symbols of WASM decompilers with ast_results.json
    with open("ast_results.json", "r") as fd:
        wasm_ast_results = json.load(fd)


    cur_data = {}
    for decompiler in DECOMPILERS:
        cur_data[decompiler] = {}
        for opt in OPT_LEVELS:
            if decompiler == "wasm2c" or decompiler == "w2c2":
                f = f"metrics/results/new/em_output_O{opt}-d_{decompiler}.json"
            else:
                f = f"metrics/results/new/em_output_O{opt}-d_{decompiler}_new.json"
            with open(f, "r") as fd:
                cur_data[decompiler][opt] = json.load(fd)
    
    new_entries = []
    for data in wasm_ast_results:
        opt = data["opt"]
        filename = data["filename"]
        functions = list(data["results"].keys())
        func_cnt += len(functions)

        base_dir = f'new_compiled_benchmarks/em_output_O{opt}/'
        w2c2_symbol_f = base_dir + f'd_w2c2_symbols/{filename}.map'
        wasm2c_symbol_f = base_dir + f'd_wasm2c_symbols/{filename}.map'
        w2c2_symbol_map = read_symbol_map(w2c2_symbol_f)
        wasm2c_symbol_map = read_symbol_map(wasm2c_symbol_f)


        locs = {}
        for decom in DECOMPILERS:
            locs[decom] = {}
            for func in functions:
                if decom == "wasm2c":
                    symbol = wasm2c_symbol_map[func]
                elif decom == "w2c2":
                    symbol = w2c2_symbol_map[func]
                else:
                    symbol = func
                    # Special cases
                    if "abs" in symbol and decom == "retdec":
                        symbol = symbol.replace("abs", "_abs")
                loc = get_loc(cur_data[decom][opt], filename+".c", symbol)
                locs[decom][func] = loc


        new_entries.append({
                           "opt": opt,
                           "filename": filename,
                            "functions": locs,
        })

    with open("readability_entries.json", "w") as fd:
        json.dump(new_entries, fd, indent=4)
    print(func_cnt)

if __name__ == "__main__":
    main()

