#!/usr/bin/env python3

import argparse
import logging
from pathlib import Path
import sys

# add program_runner dir to import runner libraries
helpers_path = Path(__file__).absolute().parent / "helpers"
sys.path.append(str(helpers_path))

import function_parser


def main():
    args = parse_arguments()

    if args.verbose:
        configure_logger(logging.DEBUG)
    else:
        configure_logger(logging.INFO)

    metrics = {}

    file = open(args.PROGRAM_SOURCE_CODE_FILE, "r")
    file_text = file.read()

    for func_name in function_parser.parseFunctionNames(args.PROGRAM_SOURCE_CODE_FILE):
        function_body = function_parser.parseFunctionBody(file_text, func_name)
        if function_body is None:
            continue
        metrics[func_name] = getFunctionLOC(function_body)

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


def configure_logger(log_level):
    logging.basicConfig(
        format="[%(asctime)s.%(msecs)03d %(levelname)s]: %(message)s",
        datefmt="%H:%M:%S",
        level=log_level,
    )


def getFunctionLOC(text):
    lines_of_code = 0
    for line in text.splitlines():
        line = line.strip()
        if line.startswith("/*") or line.startswith("//"):
            continue
        if line.endswith("*/") or len(line) > 0:
            lines_of_code += 1
    return lines_of_code


if __name__ == "__main__":
    main()
