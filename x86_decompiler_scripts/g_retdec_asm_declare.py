#!/usr/bin/env python3
import os
import shutil
import subprocess

cmd = ' grep -o "__asm_[_a-zA-Z0-9]\+(" adi_retdec.c'
sta, out = subprocess.getstatusoutput(cmd)

symbols = []
for l in out.split("\n"):
    if l and l.replace("(", "") not in symbols:
        symbols.append(l.replace("(", ""))

for s in symbols:
    print(f"int64_t {s}(int64_t, ...);")
