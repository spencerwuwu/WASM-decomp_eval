#!/usr/bin/env python3
import os
import shutil
import subprocess
from src import generator, modifier, replacer, Config


base = "/home/weicheng/Documents/CS699_WASM/CS699_webassembly/new_compiled_benchmarks/em_output_O2"
binary_path = f"{base}/x86"
wasm_symbol_path = f"{base}/d_wasm2c_symbols/"

def decompile_object(proj):
    # Find the func_names required
    func_names = []
    with open(f"{wasm_symbol_path}/{proj}.map", "r") as fd:
        for line in fd.read().split("\n"):
            if len(line) == 0:
                continue
            func_names.append(line.split(":")[0])
    
    # Decompile the object file
    b_file = f"{binary_path}/{proj}.o"
    out_file = f"workdir/{proj}_retdec.c"
    generator.decompile_single_ff(b_file, out_file)
    cmd = f"cp workdir/{proj}_retdec.c {base}/d_retdec/" 
    status, output = subprocess.getstatusoutput(cmd)

    # Extract functions and rewrite to d_retdec_new
    # Read in text file
    with open(out_file, "r") as fd:
        text = fd.read()

    text = modifier.RetDec_modifier_before(text)
    # Collect undefined asm functions
    cmd = ' grep -o "__asm_[_a-zA-Z0-9]\\+(" ' + out_file
    sta, out = subprocess.getstatusoutput(cmd)
    symbols = []
    for l in out.split("\n"):
        if l and l.replace("(", "") not in symbols:
            symbols.append(l.replace("(", ""))

    func_decls = ""
    for s in symbols:
        func_decls += f"int64_t {s}(int64_t, ...);\n"

    # Borrow h file from ghidra
    new_code = """
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
//#include <stdlib.h>
#include <string.h>

#include <polybench.h>
#include "retdec_base.h"
    """
    new_code += f"#include \"{proj}.h\"\n"

    for func_name in func_names:
        # TODO: tiny hack
        if func_name == "abs":
            func_name = "_abs"
        #print(f"Searching {func_name} in {proj}")
        if func_name not in text:
            print(f"Missing {func_name} in {proj}")
            continue
        m = replacer.find_fun_pos_with_name(text, func_name)
        cur_func = text[m[0]:m[1]]
        cur_decl = cur_func.split('{',1)[0].replace("\n", " ");
        new_code += cur_func
        new_code += "\n"
        func_decls += f"{cur_decl};\n"

    with open(f"{base}/d_retdec_new/{proj}.c", "w") as fd:
        fd.write(new_code)

    with open(f"{base}/d_retdec_new/{proj}.h", "w") as fd:
        fd.write(func_decls)

    # Try recompile
    cmd = f"clang -c {base}/d_retdec_new/{proj}.c -I{Config.poly_absolute_path} -o /dev/null -Wno-"
    status, output = generator.compile_single_file(f"{base}/d_retdec_new/{proj}.c", f" -g -c -I{Config.poly_absolute_path} -o /dev/null", False)
    if status != 0:
        new_code = generator.add_extra_declarations(new_code, output, [])
        with open(f"{base}/d_retdec_new/{proj}.h", "a") as fd:
            fd.write(new_code)


Config.set_decompiler("retdec")
for f in os.listdir(wasm_symbol_path):
    proj = f.replace(".map", "")
    decompile_object(proj)


