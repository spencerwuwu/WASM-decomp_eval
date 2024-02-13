#!/usr/bin/env python3
import os
import shutil
import subprocess
from src import generator, modifier, replacer, Config

Config.set_decompiler("wasm-decompile")

BASE = "/home/weicheng/Wasm/cs699_webassembly/new_compiled_benchmarks/"

SKIPS = [
    #[1, "mpeg2"],
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
    new_code = """
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
//#include <stdlib.h>
#include <string.h>
#include <math.h>

#include <polybench.h>
//#include "wasm-decompile_base.h"
#define eqz(x) ((x) == 0)
#define ubyte uint8_t
#define byte int8_t
#define byte_ptr int8_t*
#define ubyte_ptr uint8_t*
int64_t f64_convert_i64_s(float);
int32_t f64_convert_i32_s(float);
uint64_t i64_extend_i32_u(int);
int64_t i64_extend_i32_s(int);
int32_t f32_convert_i32_s(float);
uint32_t f32_convert_i32_u(float);
int64_t f32_convert_i64_s(float);
uint64_t f32_convert_i64_u(float);
int i32_wrap_i64(int64_t);
int select__if(int,int,int);

    """
    text = new_code + text

    #with open(f"workdir/{proj}_new.c", "w") as fd:
    target_f = f"{base_dir}/d_wasm-decompile_new/{proj}.c"
    with open(target_f, "w") as fd:
        fd.write(text)

    status, output = generator.compile_single_file(target_f, f" -g -c -I{Config.poly_absolute_path} -o /dev/null")
    if status != 0:
        if "error: expected \';\' after" not in output:
            print(output)
            exit(0)
        semicolon_pos = []
        for line in output.split("\n"):
            if "error: expected \';\' after" in line:
                loc = int(line.split(":")[1])
                semicolon_pos.append(loc)
        with open(target_f, "r") as fd:
            content = fd.read().split("\n")
        idx = 0
        with open(target_f, "w") as fd:
            while idx < len(content):
                fd.write(content[idx])
                idx += 1
                if idx in semicolon_pos:
                    fd.write(";")
                fd.write("\n")
    else:
        return
    status, output = generator.compile_single_file(target_f, f" -g -c -I{Config.poly_absolute_path} -o /dev/null")
    if status != 0:
        print(output)
        exit(0)



def main():
    #for opt_level in [0, 1, 2]:
    for opt_level in [ 1, 2]:
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
