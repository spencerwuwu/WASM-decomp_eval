#!/usr/bin/env python3

import argparse
import logging
from pathlib import Path
import subprocess
import json
import os


def main():
    args = parse_arguments()

    if args.verbose:
        configure_logger(logging.DEBUG)
    else:
        configure_logger(logging.INFO)

    if os.environ["IN_DOCKER"] == "True":
        input_files_dir = Path("/input_files")
        input_files_dir.mkdir(exist_ok=True)

        program_source_code_path = input_files_dir / args.PROGRAM_SOURCE_CODE_FILE
    else:
        program_source_code_path = Path(args.PROGRAM_SOURCE_CODE_FILE).absolute()

    if not program_source_code_path.exists():
        raise RuntimeError(f"File {program_source_code_path} not found")

    print(program_source_code_path)

    metrics = calculate_program_metrics(program_source_code_path)
    print(json.dumps(metrics, indent=2))


def parse_arguments():
    parser = argparse.ArgumentParser()
    parser.description = (
        "Reads PROGRAM_SOURCE_CODE_FILE and outputs a "
        + "JSON string containing various metrics of the program"
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


def calculate_program_metrics(src_path):
    loc = int(run_metric_program(f"python3 calculate_lines_of_code.py {src_path}"))
    halstead_complexity_difficulty_measure = float(
        run_metric_program(
            f"python3 calculate_halstead_complexity_difficulty_measure.py {src_path}"
        )
    )
    mccabe_cyclomatic_complexity = int(
        run_metric_program(
            f"python3 calculate_mccabe_cyclomatic_complexity.py {src_path}"
        )
    )
    kafuras_information_flow = int(
        run_metric_program(f"python3 calculate_kafuras_information_flow.py {src_path}")
    )

    metrics = {
        "Lines of code": loc,
        "Halstead complexity difficulty measure": halstead_complexity_difficulty_measure,
        "McCabe cyclomatic complexity": mccabe_cyclomatic_complexity,
        "Kafura's information flow": kafuras_information_flow,
    }
    return metrics


def run_metric_program(command):
    metric_calculators_dir = Path(__file__).absolute().parent / "metric_calculators"

    try:
        results = (
            subprocess.run(
                command,
                shell=True,
                capture_output=True,
                cwd=metric_calculators_dir,
                check=True,
            )
            .stdout.decode()
            .rstrip()
        )
    except subprocess.CalledProcessError as e:
        logging.error(e)
        logging.error(f"stdout:\n{e.stdout.decode()}")
        logging.error(f"stderr:\n{e.stderr.decode()}")
        raise
    return results


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
