from pathlib import Path
import json
from copy import deepcopy
import os
import subprocess
import logging

OPTIMIZATION_LEVELS = [0, 1, 2]
DECOMPILERS = ["wasm2c", "w2c2", "angr", "ghidra", "snowman"]
METRICS = [
    "Lines of code",
    "Halstead complexity difficulty measure",
    "McCabe cyclomatic complexity",
    "Maximum nesting depth",
]


def main():
    configure_logger(logging.INFO)

    data_path = get_results_dir() / "original_src.json"
    data = json.loads(data_path.read_text())

    # tidied_01
    tidied_01_dir = get_results_dir() / "tidied_01"
    data = filter_to_only_keep_functions_we_have_all_of_the_metrics_for(data)
    data = change_json_hierarchy(data)
    save_data(data, tidied_01_dir / "original_src.json")

    for optimization_level in OPTIMIZATION_LEVELS:
        for decompiler in DECOMPILERS:
            data_path = (
                get_results_dir()
                / f"em_output_O{optimization_level}-d_{decompiler}.json"
            )
            data = json.loads(data_path.read_text())
            data = filter_to_only_keep_functions_we_have_all_of_the_metrics_for(data)
            data = change_json_hierarchy(data)
            save_data(data, tidied_01_dir / f"{data_path.name}")

    # tidied_02
    data_path = tidied_01_dir / "original_src.json"
    data = json.loads(data_path.read_text())
    data = filter_out_files_only_in_original_src(data)
    tidied_02_dir = get_results_dir() / "tidied_02"
    save_data(data, tidied_02_dir / f"{data_path.name}")

    # tidied_03
    data_path = tidied_02_dir / "original_src.json"
    data = json.loads(data_path.read_text())
    data = merge_files_in_original_data_to_one_to_fit_decompiled_data(data)
    tidied_03_dir = get_results_dir() / "tidied_03"
    save_data(data, tidied_03_dir / f"{data_path.name}")
    copy_decompiled_results(tidied_01_dir, tidied_03_dir)

    # tidied_04
    tidied_04_dir = get_results_dir() / "tidied_04"
    for optimization_level in OPTIMIZATION_LEVELS:
        for decompiler in DECOMPILERS:
            if decompiler == "snowman":
                # We couldn't find a way to convert function names to the original ones for snowman,
                # it seems like snowman splits some functions, or at least it's hard to figure out the
                # mapping for this decompiler.
                continue
            data_path = (
                tidied_03_dir / f"em_output_O{optimization_level}-d_{decompiler}.json"
            )
            data = json.loads(data_path.read_text())
            data = convert_func_names(data, decompiler, optimization_level)
            save_data(data, tidied_04_dir / f"{data_path.name}")
    subprocess.run(
        f"cp {tidied_03_dir / 'original_src.json'} {tidied_04_dir}",
        shell=True,
    )


# There is a bug in metric_generation program so that for some functions, some metrics are not generated
# for now we'll filter the data to only look at functions we have all of the metrics for.
def filter_to_only_keep_functions_we_have_all_of_the_metrics_for(data):
    filtered_data = dict()

    for file_ in data.keys():
        filtered_data[file_] = dict()

        common_functions = None
        for metric in data[file_].keys():
            metric_functions = data[file_][metric].keys()
            if common_functions is None:
                common_functions = set(metric_functions)
                continue
            common_functions &= set(metric_functions)  # set intersection

        for metric in data[file_].keys():
            filtered_data[file_][metric] = dict()
            for function in common_functions:
                filtered_data[file_][metric][function] = data[file_][metric][function]

    return filtered_data


# make changed_data have the hierarchy
# file --> functions --> metrics
# instead of
# file --> metrics --> functions
def change_json_hierarchy(data):
    changed_data = dict()

    for file_ in data.keys():
        changed_data[file_] = dict()
        functions = data[file_][METRICS[0]].keys()

        for function in functions:
            changed_data[file_][function] = dict()
            for metric in METRICS:
                changed_data[file_][function][metric] = data[file_][metric][function]

    return changed_data


# Some files are only in original_src.json which we remove here.
def filter_out_files_only_in_original_src(data):
    remove_list = [
        "2mm.c",
        "3mm.c",
        "Nussinov.orig.c",
        "chenidct.c",
        "decode.c",
        "huffman.c",
        "jfif_read.c",
        "jpeg2bmp.c",
        "main.c",
        "marker.c",
        "mips.c",
        "polybench_type1.c",
        "polybench_type2.c",
        "polybench_type3.c",
        "softfloat.c",
        "template-for-new-benchmark.c",
    ]

    filtered_data = dict()
    for k, v in data.items():
        if k in remove_list:
            continue
        filtered_data[k] = v

    return filtered_data


# Some files have been merged into one for the decompiled json files so we
# adapt original_src.json to that as well
def merge_files_in_original_data_to_one_to_fit_decompiled_data(data):
    move_map = {
        "aes_dec.c": "aes.c",
        "aes_enc.c": "aes.c",
        "aes_func.c": "aes.c",
        "aes_key.c": "aes.c",
        "bf_cfb64.c": "bf.c",
        "bf_enc.c": "bf.c",
        "bf_skey.c": "bf.c",
        "getbits.c": "mpeg2.c",
        "getvlc.c": "mpeg2.c",
        "lpc.c": "gsm.c",
        "motion.c": "mpeg2.c",
        "sha.c": "sha_driver.c",
    }

    d = data
    new_d = deepcopy(data)
    for k, v in d.items():
        if k in move_map.keys():
            for func, metrics in d[k].items():
                if func in new_d[move_map[k]]:
                    logging.warning(
                        "CONFLICT of functions with the same name when merging files"
                    )
                new_d[move_map[k]][func] = metrics

    d = new_d

    remove_list = move_map.keys()
    new_d = dict()
    for k, v in d.items():
        if k in remove_list:
            continue
        new_d[k] = v

    return new_d


def copy_decompiled_results(src_dir, dst_dir):
    for f in os.listdir(src_dir):
        if "em_output" in f:
            src = src_dir / f
            dst = dst_dir / f
            subprocess.run(f"cp {src} {dst}", shell=True)


# For some decompilers the decompiled functions have different names than the original ones
# here we map them back to the original function names
def convert_func_names(data, decompiler, optimization_level):
    new_data = dict()
    for file_ in data.keys():
        new_data[file_] = dict()

        func_map = get_func_map(data, file_, decompiler, optimization_level)

        for func in data[file_].keys():
            if func in func_map.keys():
                mapped_function = func_map[func]
                new_data[file_][mapped_function] = data[file_][func]

    return new_data


def get_func_map(data, file_, decompiler, optimization_level):
    func_map = dict()
    if decompiler in {"wasm2c", "w2c2"}:
        # for these decompilers we have prepared function mapping files
        file_no_ext = file_.replace(".c", "")
        function_map_file_path = (
            get_results_dir().parent.parent
            / f"new_compiled_benchmarks/em_output_O{optimization_level}/d_{decompiler}_symbols/{file_no_ext}.map"
        )
        for line in function_map_file_path.read_text().splitlines():
            orig_func, decompiler_func = line.split(":")
            func_map[decompiler_func] = orig_func
    elif decompiler in {"angr", "ghidra"}:
        # for these decompilers there is a 1-to-1 mapping on the functions
        functions = data[file_].keys()
        for function in functions:
            func_map[function] = function
    else:
        raise RuntimeError(f"No function mapping procedure defined for {decompiler}")
    return func_map


def save_data(data, path):
    data = recursively_sort_dict(data)
    path.parent.mkdir(exist_ok=True)
    path.write_text(json.dumps(data, indent=2))


def recursively_sort_dict(d):
    for k, v in d.items():
        if isinstance(v, dict):
            d[k] = recursively_sort_dict(d[k])

    sorted_d = {k: d[k] for k in sorted(d)}
    return sorted_d


def get_results_dir():
    return Path(__file__).parent.parent / "results"


def configure_logger(log_level):
    logging.basicConfig(
        format="[%(asctime)s.%(msecs)03d %(levelname)s]: %(message)s",
        datefmt="%H:%M:%S",
        level=log_level,
    )


if __name__ == "__main__":
    main()
