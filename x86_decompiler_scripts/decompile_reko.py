#!/usr/bin/env python3
import os
import shutil
import subprocess
import sys
import tempfile
from pathlib import Path



REKO_INSTALL = Path(os.getenv("REKO_INSTALL_PATH", "/home/decompiler_user/reko"))
REKO_DECOMPILE = REKO_INSTALL / 'reko'


def write_file(c_file, content):
    with open(c_file, "a") as fd:
        fd.write(content + "\n")


def do_decompile(binary, c_file):
    with tempfile.TemporaryDirectory() as tempdir:
        filename = binary.split("/")[-1]
        temp_path = os.path.join(tempdir, filename)
        shutil.copy2(binary, temp_path)
        print(temp_path)

        decomp = subprocess.run([REKO_DECOMPILE, "decompile", temp_path], stdout=subprocess.PIPE, stderr=subprocess.PIPE)
        if decomp.returncode != 0:
            print(f'{decomp.stdout.decode()}\n{decomp.stderr.decode()}')

        print(os.listdir(tempdir))
        outputs = Path(temp_path + ".reko")
        seen = set()
        for source in outputs.glob('*text*.c'):
            print(source)
            with open(source, 'rb') as f:
                seen.add(source)
                write_file(c_file, f.read())
        for source in outputs.glob('*.c'):
            print(source)
            if source in seen:
                continue
            with open(source, 'rb') as f:
                write_file(c_file, f.read())



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
            print("Decompiling  ", binary)
            do_decompile(binary, c_file)
        exit(0)



if __name__ == '__main__':
    main()
