#!/usr/bin/env python3
import os
import shutil
import subprocess
from src import generator, replacer, Config


base = "/home/weicheng/Documents/CS699_WASM/CS699_webassembly/new_compiled_benchmarks/em_output_O0"
binary_path = f"{base}/x86"
wasm_symbol_path = f"{base}/d_wasm2c_symbols/"

def decompile_object(target):
    # Find the func_names required
    func_names = []
    with open(f"{wasm_symbol_path}/{target}.map", "r") as fd:
        for line in fd.read().split("\n"):
            if len(line) == 0:
                continue
            func_names.append(line.split(":")[0])
    
    # Decompile the object file
    b_file = f"{binary_path}/{target}.o"
    if Config.R2_test:
        out_file = f"tests/{target}_r22.c"
        fnames = ",".join(f for f in func_names)
        #generator.decompile_single_ff(b_file, out_file, fnames)
    elif Config.RetDec_test:
        out_file = f"tests/{target}_retdec.c"
        #generator.decompile_single_ff(b_file, out_file)
    else:
        return 

    # Recompile
    generator.recompile_ff(out_file, 
                           func_names=func_names,
                           keep_func_decl_unchanged=1,
                           try_second_time=1)


# Config.set_decompiler("retdec")
# decompile_object("adi")

Config.set_decompiler("r2")
#decompile_object("adi")


with open("../new_compiled_benchmarks/em_output_O0/d_ghidra/adi.c", "r") as fd:
    text = fd.read()
m = replacer.find_fun_pos_with_name(text, "kernel_adi")
main_func = text[m[0]:m[1]]
print(main_func)
