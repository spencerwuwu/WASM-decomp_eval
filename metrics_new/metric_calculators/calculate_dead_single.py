#!/usr/bin/env python3

import argparse
import logging
from pathlib import Path
import sys
import subprocess
import os
import json

# According to https://en.cppreference.com/w/c/language/cast,
# We use cast operator to track the explicit type conversion, that is, type casting
# Syntax: ( type-name ) expression


# add program_runner dir to import runner libraries
helpers_path = Path(__file__).absolute().parent / "helpers"
sys.path.append(str(helpers_path))

import function_parser
from cppchecker_checklist import checklist

tempFilePath = '/tmp/funcToBeEvaluated.c'


TIMEOUT = 60

def main():
    args = parse_arguments()

    if args.verbose:
        configure_logger(logging.DEBUG)
    else:
        configure_logger(logging.INFO)

    metrics = {}

    file = open(args.PROGRAM_SOURCE_CODE_FILE, "r")
    file_text = file.read()

    # for func_name in function_parser.parseFunctionNames(args.PROGRAM_SOURCE_CODE_FILE):
    for per_func in function_parser.parseFunctionNamesAndBody(args.PROGRAM_SOURCE_CODE_FILE):
        function_body = per_func[1]
        func_name = per_func[0]
        if args.FUNC != 'NotRequired' and (func_name != args.FUNC):
            continue
        # function_body = function_parser.parseFunctionBody(file_text, func_name)
        if function_body is None:
            continue
        print(getFunctionStat(function_body))
        return

    print(-1)


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
        "FUNC",
        help="function target",
    )
    parser.add_argument(
        "-v",
        "--verbose",
        action="store_true",
        help="Enables printing of debug statements",
    )
    parser.add_argument(
        "-p",
        "--program",
        action="store_true",
        help="Enables detection on the whole program",
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
    dead = 0
    try:
        res = subprocess.run(['cppcheck', '--enable=style', '--language=c', tempFilePath], stderr=subprocess.PIPE,
                             stdout=subprocess.PIPE, timeout=TIMEOUT).stderr.decode('utf-8')
    except subprocess.TimeoutExpired:
        #logging.warning('CPPCHECK timeout, dead stat cannot be obtained')
        res = ""
        dead = -1
    if res:
        res = res.split(os.linesep)
        for i in res:
            for j in checklist:
                if "[" + j + "]" in i:
                    dead += 1

    return dead


if __name__ == "__main__":
    main()
