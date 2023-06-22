#!/usr/bin/env python3

import argparse
import logging
from pathlib import Path
import sys
import re
import json

# According to https://en.cppreference.com/w/c/language/cast,
# We use cast operator to track the explicit type conversion, that is, type casting
# Syntax: ( type-name ) expression


# add program_runner dir to import runner libraries
helpers_path = Path(__file__).absolute().parent / "helpers"
sys.path.append(str(helpers_path))

import function_parser
from data_type import data_types


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

    print(json.dumps(metrics))


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
    casts = 0
    for line in text.splitlines():
        line = line.strip()
        if line.startswith("/*") or line.startswith("//"):
            continue
        if line.endswith("*/"):
            continue
        if len(line) > 0:
            # snowman only: detect "*_cast", for example, "reinterpret_cast"
            casts += len(re.findall('(?=(_cast))', line))
            # I found that a typical type casting (if not all) happens with an innermost bracket,
            # so I slightly modified the following code to implement finding contents between innermost bracket(s)
            # https://www.geeksforgeeks.org/python-extract-substrings-between-brackets/
            substrings = []
            split_str = line.split("(")
            for s in split_str[1:]:
                split_s = s.split(")")
                if len(split_s) > 1:
                    substrings.append(split_s[0])
            # then check if they are data types
            #print(substrings)
            for i in substrings:
                #print(i, end=" -> ")
                single_str = i.replace("*", "")
                single_str = single_str.strip()
                #print('>', single_str, '<')
                if single_str in data_types:
                    casts += 1
                    #print("confirm", single_str)

    return casts


if __name__ == "__main__":
    main()
