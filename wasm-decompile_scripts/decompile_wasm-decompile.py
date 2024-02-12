#!/usr/bin/env python3
import os
import shutil
import subprocess
from src import generator, modifier, replacer, Config

Config.set_decompiler("wasm-decompile")

BASE = "/home/weicheng/Wasm/cs699_webassembly/new_compiled_benchmarks/"

SKIPS = [
]


def decompile_wasm(proj, base_dir):
    binary_path = f"{base_dir}/wasm"
    wasm_symbol_path = f"{base_dir}/d_wasm2c_symbols/"
    # Find the func_names required
    func_names = []
    with open(f"{wasm_symbol_path}/{proj}.map", "r") as fd:
        for line in fd.read().split("\n"):
            if len(line) == 0:
                continue
            func_names.append(line.split(":")[0])

    # Decompile the object file
    wasm_file = f"{binary_path}/{proj}.wasm"
    out_file = f"workdir/{proj}_wasm-decompile.c"
    generator.decompile_single_file(wasm_file, out_file)
    cmd = f"cp {out_file} {base_dir}/d_wasm-decompile/" 
    status, output = subprocess.getstatusoutput(cmd)

    # Extract functions and rewrite to d_wasm-decompile_new
    # Read in text file
    with open(out_file, "r") as fd:
        text = fd.read()
    text = modifier.WasmDecompile_modifier_all(text)
#    new_code = """
##include <stdbool.h>
##include <stdint.h>
##include <stdio.h>
#//#include <stdlib.h>
##include <string.h>
#
##include <polybench.h>
##include "wasm-decompile_base.h"
#    """
#    text = new_code + text

    #with open(f"workdir/{proj}_new.c", "w") as fd:
    with open(f"{base_dir}/d_wasm-decompile_new/{proj}.c", "w") as fd:
        fd.write(text)


def main():
    for opt_level in [0, 1, 2]:
        print("Opt level: ", opt_level)
        base_dir = f"{BASE}/em_output_O{opt_level}"
        binary_path = f"{base_dir}/wasm"
        wasm_symbol_path = f"{base_dir}/d_wasm2c_symbols/"
        if not os.path.exists(f"{base_dir}/d_wasm-decompile"):
            os.makedirs(f"{base_dir}/d_wasm-decompile")
        if not os.path.exists(f"{base_dir}/d_wasm-decompile_new"):
            os.makedirs(f"{base_dir}/d_wasm-decompile_new")
        for f in os.listdir(wasm_symbol_path):
            proj = f.replace(".map", "")
            do_skip = False
            for skip in SKIPS:
                if opt_level == skip[0] and proj == skip[1]:
                    do_skip = True
                    break
            if do_skip:
                continue
            decompile_wasm(proj, base_dir)

main()
