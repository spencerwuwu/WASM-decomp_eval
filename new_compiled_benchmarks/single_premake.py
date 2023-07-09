#!/usr/bin/env python3
import sys
import os
from clang.cindex import TranslationUnit

if len(sys.argv) < 3:
    print("Usage: single_premake.py <source_file> <args>")
    sys.exit(1)

c_file = sys.argv[1]
args = sys.argv[2]

if not os.path.exists(c_file):
    exit(0)

out_f = c_file.replace("/d_", "/ast_")[:-2] + ".ast"
out_dir = out_f[:out_f.rfind("/")]

if not os.path.exists(out_dir):
    os.makedirs(out_dir)


t_unit = TranslationUnit.from_source(c_file, args.split())
t_unit.save(out_f)
print("Generated:", out_f)
