#!/usr/bin/env python3

import argparse
import logging
from pathlib import Path
import sys
import json

# add halstead dir to import halstead module
halstead_path = Path(__file__).absolute().parent / "halstead_helpers"
sys.path.append(str(halstead_path))

import halstead


def main():
    args = parse_arguments()

    if args.verbose:
        configure_logger(logging.DEBUG)
    else:
        configure_logger(logging.INFO)

    result = halstead.manageFile(args.PROGRAM_SOURCE_CODE_FILE)
    # print(json.dumps(result, indent=2))
    print(result["difficulty"])


def parse_arguments():
    parser = argparse.ArgumentParser()
    parser.description = (
        "Reads PROGRAM_SOURCE_CODE_FILE and outputs the "
        + "Halstead Complexity difficulty measure of the program"
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


if __name__ == "__main__":
    main()
