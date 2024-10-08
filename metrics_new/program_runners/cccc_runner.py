from pathlib import Path
import os
import subprocess

import xml.etree.ElementTree as ET

output_dir = Path(__file__).absolute().parent.parent / "output" / "cccc"


def run(source_code_file):
    command = f"cccc {source_code_file} --outdir={output_dir}"

    output_dir.mkdir(parents=True, exist_ok=True)

    # remove old output files
    for file in os.scandir(output_dir):
        # throws error if subdirectories exist
        os.remove(file.path)

    # cccc subprocess
    subprocess.run(
        command,
        shell=True,
        capture_output=False,
        stdout=subprocess.DEVNULL,
        stderr=subprocess.STDOUT,
        check=True,
    )

    return getOutput()


def getOutput():
    tree = ET.parse(output_dir / "anonymous.xml")
    root = tree.getroot()
    return root
