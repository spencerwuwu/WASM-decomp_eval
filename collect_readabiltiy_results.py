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


def get_values(data, filename, function):
    keywords = {
        "Lines of code": -5,
        "Halstead complexity difficulty measure": -5,
        "McCabe cyclomatic complexity": -5,
        "Maximum nesting depth": -5,
        "# goto": -5,
        "# cast": -5,
        "# var": -5,
        "# dead code": -5
    }
    if filename not in data:
        return keywords
    for keyword in keywords:
        if function in data[filename][keyword]:
            keywords[keyword] = data[filename][keyword][function]
    return keywords


def get_new_dead_results(new_dead_data, opt, filename, func, decom):
    for entry in new_dead_data:
        if opt == entry["opt"] and filename == entry["filename"]:
            return int(list(entry["results"][func][decom].values())[0])
    return -1



DECOMPILERS = ["w2c2", "wasm2c", "ghidra", "retdec", "wasm-decompile"]
OPT_LEVELS = [0, 1, 2]

def main():
    # First, load common functions from readability_entries.json
    with open("readability_entries.json", "r") as fd:
        entries = json.load(fd)

    cur_data = {}
    for decompiler in DECOMPILERS:
        cur_data[decompiler] = {}
        for opt in OPT_LEVELS:
            if decompiler in ["wasm2c", "w2c2", "wasm-decompile"]:
                f = f"metrics/results/new/em_output_O{opt}-d_{decompiler}.json"
            else:
                f = f"metrics/results/new/em_output_O{opt}-d_{decompiler}_new.json"
            with open(f, "r") as fd:
                cur_data[decompiler][opt] = json.load(fd)
    extra_data = {"wasm2c": {}}
    for opt in OPT_LEVELS:
        f = f"metrics/results/new/O{opt}_wasm2c_mnd.json"
        with open(f, "r") as fd:
            extra_data["wasm2c"][opt] = json.load(fd)

    f = "metrics/results/new/new_all_dead.json"
    with open(f, "r") as fd:
        new_dead_data = json.load(fd)

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


        results = {}
        for decom in DECOMPILERS:
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
                stored_data = get_values(cur_data[decom][opt], filename+".c", symbol)
                if decom == "wasm2c":
                    stored_data["Maximum nesting depth"] = extra_data[decom][opt][filename+".c"]["Maximum nesting depth"][symbol]
                stored_data["# dead code"] = get_new_dead_results(new_dead_data, opt, filename, func, decom)
                results[func][decom] = stored_data
        all_results.append({
            "opt": opt,
            "filename": filename,
            "results": results
        })
        with open("all_readability_results.json", "w") as fd:
            json.dump(all_results, fd, indent=4)




if __name__ == "__main__":
    main()

