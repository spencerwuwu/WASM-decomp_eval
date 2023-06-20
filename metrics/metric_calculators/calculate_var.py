#!/usr/bin/env python3

import argparse
import logging
from pathlib import Path
import sys
import os
import subprocess

# add program_runner dir to import runner libraries
helpers_path = Path(__file__).absolute().parent / "helpers"
sys.path.append(str(helpers_path))

import function_parser

tempFilePath = '/tmp/funcToBeEvaluated.c'


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
        metrics[func_name] = getFunctionStat(function_body)

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


def getFunctionStat(text):
    if os.path.isfile(tempFilePath):
        os.chmod(tempFilePath, 0o777)
        os.remove(tempFilePath)
    f = open(tempFilePath, mode='w', encoding='utf-8')
    f.write(text)
    f.close()
    #print(text[:100], end='>>>\n')
    res = subprocess.run(['ctags', '--kinds-C++=l', '-o', '-', tempFilePath], stdout=subprocess.PIPE).stdout.decode('utf-8')
    #print(res[:100], end='!!!!\n----\n')
    if res:
        variables = len(res.split(os.linesep)) - 1   # remove title
    else:
        variables = 0

    return variables


if __name__ == "__main__":
    main()
