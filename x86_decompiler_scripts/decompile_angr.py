#!/usr/bin/env python3
import os
import shutil
import subprocess
import sys
import tempfile
from pathlib import Path

import angr
from angr.analyses import CFGFast, Decompiler
from angr.knowledge_plugins import Function

import warnings
warnings.filterwarnings('ignore')


def write_file(c_file, content):
    with open(c_file, "a") as fd:
        fd.write(content + "\n")

def do_decompile(binary, c_file):
    print("Decompiling  ", binary)

    p = angr.Project(binary, auto_load_libs=False, load_debug_info=False)
    cfg: CFGFast = p.analyses.CFGFast(
        normalize=True,
        resolve_indirect_jumps=True,
        data_references=True,
    )
    p.analyses.CompleteCallingConventions(
        cfg=cfg.model, recover_variables=True, analyze_callsites=True
    )

    funcs_to_decompile: List[Function] = [
        func
        for func in cfg.functions.values()
        if not func.is_plt and not func.is_simprocedure and not func.alignment
    ]

    for func in funcs_to_decompile:
        try:
            decompiler: Decompiler = p.analyses.Decompiler(func, cfg=cfg.model)

            if decompiler.codegen is None:
                #print(f"// No decompilation output for function {func.name}\n")
                write_file(c_file, f"// No decompilation output for function {func.name}\n")
                continue
            #print(decompiler.codegen.text)
            write_file(c_file, decompiler.codegen.text)
        except Exception as e:
            print(f"Exception thrown decompiling function {func.name}: {e}")


def main():
    if len(sys.argv) != 3:
        print("./*.py in_dir out_dir")
        exit(1)

    in_dir = sys.argv[1]
    if not os.path.exists(in_dir):
        print("Cannot find %s" % in_dir)

    out_dir = sys.argv[2]
    if not os.path.exists(out_dir):
        os.makedirs(out_dir)

    for o in os.listdir(in_dir):
        binary = in_dir + "/" + o
        c_file = out_dir + "/" + o.replace(".o", ".c")
        if not os.path.exists(c_file):
            do_decompile(binary, c_file)



if __name__ == '__main__':
    main()
