#!/usr/bin/env python3
import os
import shutil
import subprocess
import sys
import tempfile
from pathlib import Path

GHIDRA_INSTALL = Path(os.getenv("GHIDRA_INSTALL_PATH", "/home/decompiler_user/ghidra"))
GHIDRA_HEADLESS = GHIDRA_INSTALL / 'support' / 'analyzeHeadless'

GHIDRA_APP_PROPERTIES = GHIDRA_INSTALL / 'Ghidra' / 'application.properties'


def do_decompile(binary, c_file, project_dir, parent_dir):
    print("Decompiling  ", binary)
    decompile_command = [
        f"{GHIDRA_HEADLESS}",
        project_dir.name,
        "temp",
        "-import",
        binary,
        "-scriptPath",
        f"{parent_dir}",
        "-postScript",
        f"{parent_dir}/DecompilerExplorer.java",
        c_file
    ]

    decomp = subprocess.run(decompile_command, capture_output=True)
    if decomp.returncode != 0 or not os.path.exists(c_file):
        print(f'{decomp.stdout.decode()}\n{decomp.stderr.decode()}')


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

    with tempfile.TemporaryDirectory() as tempdir:
        project_dir = tempfile.TemporaryDirectory(dir=tempdir)
        parent_dir = Path(__file__).resolve().parent

        for o in os.listdir(in_dir):
            binary = in_dir + "/" + o
            c_file = out_dir + "/" + o.replace(".o", ".c")
            if not os.path.exists(c_file):
                do_decompile(binary, c_file, project_dir, parent_dir)



if __name__ == '__main__':
    main()
