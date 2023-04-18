#!/usr/bin/env python3

import argparse
import logging
from pathlib import Path
import subprocess
import json
import os


def main():
    in_docker = os.getenv("IN_DOCKER") == "True"
    args = parse_arguments()

    if args.verbose:
        configure_logger(logging.DEBUG)
    else:
        configure_logger(logging.INFO)

    source_code_paths = []

    if in_docker:
        docker_input_files_dir = Path("/input_files")
        docker_input_files_dir.mkdir(exist_ok=True)

    if args.file:
        if in_docker:
            source_code_path = docker_input_files_dir / args.file
        else:
            source_code_path = Path(args.file).expanduser().absolute()
        source_code_paths.append(source_code_path)

    if args.directory:
        if in_docker:
            dir_ = docker_input_files_dir
        else:
            dir_ = Path(args.directory).expanduser().absolute()
        for file_ in os.listdir(dir_):
            file_path = dir_ / file_
            if file_path.suffix == ".c":
                source_code_paths.append(file_path)

    source_code_paths.sort()
    metrics = dict()
    for sc_path in source_code_paths:
        logging.info(f"Calculating metrics for {sc_path.name}")
        metrics[sc_path.name] = calculate_program_metrics(sc_path)
    print(json.dumps(metrics, indent=2))


def parse_arguments():
    parser = argparse.ArgumentParser()
    parser.description = (
        "Reads PROGRAM_SOURCE_CODE_FILE and outputs a "
        + "JSON string containing various metrics of the program. "
        + "NOTE: If you're running the program in docker, -d "
        + "must be your current working directory "
        + "(or the directory of -f)."
    )
    parser.add_argument(
        "-f",
        "--file",
        help="Calculates metrics on a single C source code file.",
    )
    parser.add_argument(
        "-d", "--directory", help="Calculates metrics on all .c files in directory"
    )
    parser.add_argument(
        "-v",
        "--verbose",
        action="store_true",
        help="Enables printing of debug statements",
    )
    arguments = parser.parse_args()

    if arguments.file is None and arguments.directory is None:
        raise RuntimeError(
            "File or directory must be specified (with -f or -d flag). See -h flag for usage instructions"
        )
    if arguments.file and arguments.directory:
        raise RuntimeError(
            "The flag -f can not be used in conjunction with the flag -d"
        )

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

    maximum_nesting_depth = json.loads(
        run_metric_program(
            f"python3 calculate_maximum_nesting_depth.py {src_path}"
        ).replace("'", '"')
    )

    metrics = {
        "Lines of code": loc,
        "Halstead complexity difficulty measure": halstead_complexity_difficulty_measure,
        "McCabe cyclomatic complexity": mccabe_cyclomatic_complexity,
        "Kafura's information flow": kafuras_information_flow,
        "Maximum nesting depth": maximum_nesting_depth,
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
