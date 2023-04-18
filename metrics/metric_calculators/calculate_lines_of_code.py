#!/usr/bin/env python3

import argparse
import logging
from pathlib import Path
import sys

# add program_runner dir to import runner libraries
program_runners_path = Path(__file__).absolute().parent.parent / "program_runners"
sys.path.append(str(program_runners_path))

import cccc_runner


def main():
    args = parse_arguments()

    if args.verbose:
        configure_logger(logging.DEBUG)
    else:
        configure_logger(logging.INFO)

    output = cccc_runner.run(args.PROGRAM_SOURCE_CODE_FILE)

    procedures = output.find("procedural_detail")

    metrics = {}
    for p in procedures:
        signature = p.find("name").text
        name = signature[: signature.find("(")]

        metrics[name] = int(p.find("lines_of_code").attrib["value"])

    print(metrics)


def parse_arguments():
    parser = argparse.ArgumentParser()
    parser.description = (
        "Reads PROGRAM_SOURCE_CODE_FILE and outputs the number of lines in the file"
    )
    parser.add_argument(
        "PROGRAM_SOURCE_CODE_FILE",
        help="A file containing the source code to be analyzed",
    )
    parser.add_argument(
        "-v",
        "--verbose",
        action="store_true",
        help="Enables printing of debug statements",
    )
    arguments = parser.parse_args()
    return arguments


def get_number_of_lines(source_code_file):
    file_lines = Path(source_code_file).read_text().splitlines()
    return len(file_lines)


def configure_logger(log_level):
    logging.basicConfig(
        format="[%(asctime)s.%(msecs)03d %(levelname)s]: %(message)s",
        datefmt="%H:%M:%S",
        level=log_level,
    )


if __name__ == "__main__":
    main()
