#!/usr/bin/env python3
import os
import shutil
import subprocess
import sys
import tempfile
from pathlib import Path


SNOWMAN_INSTALL = Path(os.getenv("SNOWMAN_INSTALL_PATH", "/home/decompiler_user/install/bin"))
SNOWMAN_NOCODE = SNOWMAN_INSTALL / 'nocode'


def write_file(c_file, content):
    with open(c_file, "a") as fd:
        fd.write(content + "\n")


def do_decompile(binary, c_file):
    print("Decompiling  ", binary)
    decomp = subprocess.run([SNOWMAN_NOCODE, binary], stdout=subprocess.PIPE, stderr=subprocess.PIPE)
    if decomp.returncode != 0:
        print(f'{decomp.stdout.decode()}\n{decomp.stderr.decode()}')

    write_file(c_file, decomp.stdout.decode())


def main():
    if len(sys.argv) != 3:
        print("./*.py in_dir out_dir")
        exit(1)

    in_dir = sys.argv[1]
    if not os.path.exists(in_dir):
        print("Cannot find %s" % in_dir)
        exit(1)

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
