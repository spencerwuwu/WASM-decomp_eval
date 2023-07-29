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
    keyword = "McCabe cyclomatic complexity"
    keyword = "Lines of code"
    if filename not in data:
        return -5
    if function not in data[filename][keyword]:
        return -5
    return data[filename][keyword][function]
    


DECOMPILERS = ["w2c2", "wasm2c", "ghidra", "retdec"]
OPT_LEVELS = [0, 1, 2]

def main():
    func_cnt = 0
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

        for func in functions:
            for decom in DECOMPILERS:
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
                if loc < 0:
                    discard = True
                    break
            if not discard:
                union_functions.append(func)

        func_cnt += len(union_functions)

        new_entries.append({
                           "opt": opt,
                           "filename": filename,
                           "functions": union_functions,
        })

    with open("readability_entries.json", "w") as fd:
        json.dump(new_entries, fd, indent=4)
    print(func_cnt)

if __name__ == "__main__":
    main()

