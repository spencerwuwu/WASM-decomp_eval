#!/usr/bin/env python3

import argparse
import logging

# from pycparser import c_ast, c_parser, parse_file


def main():
    args = parse_arguments()

    if args.verbose:
        configure_logger(logging.DEBUG)
    else:
        configure_logger(logging.INFO)

    logging.warning("Program not implemented yet, output is a mock")
    print("(1,2,3)")
    # abc = calculate_abc_metric(args.PROGRAM_SOURCE_CODE_FILE)
    # print(abc)


def parse_arguments():
    parser = argparse.ArgumentParser()
    parser.description = (
        "Reads PROGRAM_SOURCE_CODE_FILE and outputs the "
        + "ABC Software Metric of the program"
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


# def calculate_abc_metric(src_file):
#    ast = parse_file(src_file, use_cpp=True, cpp_path="gcc")


def configure_logger(log_level):
    logging.basicConfig(
        format="[%(asctime)s.%(msecs)03d %(levelname)s]: %(message)s",
        datefmt="%H:%M:%S",
        level=log_level,
    )


if __name__ == "__main__":
    main()
