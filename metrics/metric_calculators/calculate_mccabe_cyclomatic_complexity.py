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

    project_summary = output.find("project_summary")
    complexity = project_summary.find("McCabes_cyclomatic_complexity").attrib["value"]

    print(str(complexity))


def parse_arguments():
    parser = argparse.ArgumentParser()
    parser.description = (
        "Reads PROGRAM_SOURCE_CODE_FILE and outputs the "
        + "McCabe Cyclomatic Complexity of the program"
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
