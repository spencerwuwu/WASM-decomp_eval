#!/usr/bin/env python3

import logging
from pathlib import Path
import subprocess
import json
import os

logging.basicConfig(level=logging.DEBUG,
                    format='%(name)s-%(levelname)s: %(message)s')
log = logging.getLogger("re-deadcode.py")


def read_symbol_map(symbol_map_f):
    symbol_map = {}
    with open(symbol_map_f, "r") as fd:
        for line in fd.read().split("\n"):
            if len(line) == 0:
                continue
            a, b = line.split(":")
            symbol_map[a] = b
    return symbol_map


def run_metric_program(command):
    try:
        results = (
            subprocess.run(
                command,
                shell=True,
                capture_output=True,
                check=True,
            )
            .stdout.decode()
            .rstrip()
            .replace("'", '"')
        )
    except subprocess.CalledProcessError as e:
        logging.error(e)
        logging.error(f"stdout:\n{e.stdout.decode()}")
        logging.error(f"stderr:\n{e.stderr.decode()}")
        raise
    return results


DECOMPILERS = ["w2c2", "wasm2c", "ghidra", "retdec"]

with open("../readability_entries.json", "r") as f:
    entries = json.load(f)

all_results = []
for entry in entries:
    opt = entry["opt"]
    filename = entry["filename"]
    functions = entry["functions"]

    base_dir = f'../new_compiled_benchmarks/em_output_O{opt}/'
    w2c2_symbol_f = base_dir + f'd_w2c2_symbols/{filename}.map'
    wasm2c_symbol_f = base_dir + f'd_wasm2c_symbols/{filename}.map'
    w2c2_symbol_map = read_symbol_map(w2c2_symbol_f)
    wasm2c_symbol_map = read_symbol_map(wasm2c_symbol_f)

    results = {}
    for decom in DECOMPILERS:
        if decom == "wasm2c" or decom == "w2c2":
            decom_file = f"{base_dir}/d_{decom}/{filename}.c"
        else:
            decom_file = f"{base_dir}/d_{decom}_new/{filename}.c"
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
            log.debug(f'++ handling: {decom_file} {symbol}')
            cmd = f"python3 metric_calculators/calculate_dead_single.py {decom_file} {symbol}"
            value = run_metric_program(cmd)
            if decom not in results[func]:
                results[func][decom] = {"# dead code": value}
        all_results.append({
            "opt": opt,
            "filename": filename,
            "results": results
        })
        out_file = "../metrics/results/new/new_all_dead.json"
        with open(out_file, "w") as fd:
            json.dump(all_results, fd, indent=4)


