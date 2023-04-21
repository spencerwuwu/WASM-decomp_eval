from pathlib import Path
import json
from copy import deepcopy
import os
import subprocess

OPTIMIZATION_LEVELS = [0, 1, 2]
DECOMPILERS = ["wasm2c", "w2c2", "angr", "ghidra", "snowman"]
METRICS = [
    "Lines of code",
    "Halstead complexity difficulty measure",
    "McCabe cyclomatic complexity",
    "Maximum nesting depth",
]


def main():
    results_dir = get_results_dir()

    change_hierarchy(results_dir / "original_src.json")

    for optimization_level in OPTIMIZATION_LEVELS:
        for decompiler in DECOMPILERS:
            results_file_path = results_dir / Path(
                f"em_output_O{optimization_level}-d_{decompiler}.json"
            )
            change_hierarchy(results_file_path)

    tidied1_dir = get_tidied_dir(1)
    adapt_original_to_decompiled(tidied1_dir / "original_src.json")

    copy_over_decompiled_results()

    convert_wasm2c_and_w2c2_func_names()
    convert_angr_and_ghidra_func_names()

    delete_extra()


# make tidied json file have the hierarchy
# file --> functions --> metrics
def change_hierarchy(results_file_path):
    results_data = json.loads(results_file_path.read_text())
    tidied_data = dict()

    for file_ in results_data.keys():
        tidied_data[file_] = dict()

        # There is a bug in metric_generation program so that for some functions, some metrics are not generated
        # for now we'll filter the data to only look at functions we have all of the metrics for.
        common_functions = None
        for metric_name in results_data[file_].keys():
            metric_functions = results_data[file_][metric_name].keys()
            if common_functions is None:
                common_functions = set(metric_functions)
                continue
            common_functions &= set(metric_functions)  # set intersection

        for function in common_functions:
            tidied_data[file_][function] = dict()
            for metric in METRICS:
                tidied_data[file_][function][metric] = results_data[file_][metric][
                    function
                ]

    tidied_data = recursively_sort_dict(tidied_data)

    tidied_dir = get_tidied_dir(1)
    tidied_dir.mkdir(exist_ok=True)
    tidied_file_path = tidied_dir / results_file_path.name
    tidied_file_path.write_text(json.dumps(tidied_data, indent=2))


def adapt_original_to_decompiled(tidied1_original_src):
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

    d = json.loads(tidied1_original_src.read_text())
    new_d = dict()
    for k, v in d.items():
        if k in remove_list:
            continue
        new_d[k] = v

    d = new_d

    tidied2_dir = get_tidied_dir(2)
    tidied2_dir.mkdir(exist_ok=True)
    tidied_file_path = tidied2_dir / tidied1_original_src.name
    tidied_file_path.write_text(json.dumps(d, indent=2))

    tidied2_original_src = tidied2_dir / "original_src.json"
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

    new_d = deepcopy(d)
    for k, v in d.items():
        # if k not in new_d.keys():
        #     new_d[k] = deepcopy(v)
        if k in move_map.keys():
            for func, metrics in d[k].items():
                if func in new_d[move_map[k]]:
                    print("CONFLICT")
                new_d[move_map[k]][func] = metrics

    d = new_d

    remove_list = move_map.keys()
    new_d = dict()
    for k, v in d.items():
        if k in remove_list:
            continue
        new_d[k] = v
    d = new_d

    d = recursively_sort_dict(d)

    tidied3_dir = get_tidied_dir(3)
    tidied3_dir.mkdir(exist_ok=True)
    tidied_file_path = tidied3_dir / tidied1_original_src.name
    tidied_file_path.write_text(json.dumps(d, indent=2))


def convert_wasm2c_and_w2c2_func_names():
    for decompiler in ["wasm2c", "w2c2"]:
        tidied3_dir = get_tidied_dir(3)

        for optimization_level in [0, 1, 2]:
            json_file_path = (
                tidied3_dir / f"em_output_O{optimization_level}-d_{decompiler}.json"
            )

            d = json.loads(json_file_path.read_text())

            new_d = dict()
            for file_ in d.keys():
                new_d[file_] = dict()

                file_no_ext = file_.replace(".c", "")
                function_map_file_path = (
                    get_results_dir().parent.parent
                    / f"new_compiled_benchmarks/em_output_O{optimization_level}/d_{decompiler}_symbols/{file_no_ext}.map"
                )
                func_map = dict()
                for line in function_map_file_path.read_text().splitlines():
                    orig_func, wasm2c_func = line.split(":")
                    func_map[wasm2c_func] = orig_func

                for func in d[file_].keys():
                    if func in func_map.keys():
                        mapped_function = func_map[func]
                        new_d[file_][mapped_function] = d[file_][func]

            d = new_d

            d = recursively_sort_dict(d)

            tidied4_dir = get_tidied_dir(4)
            tidied4_dir.mkdir(exist_ok=True)
            tidied_file_path = tidied4_dir / json_file_path.name
            tidied_file_path.write_text(json.dumps(d, indent=2))

            subprocess.run(
                f"cp {get_tidied_dir(3) / 'original_src.json'} {tidied4_dir}",
                shell=True,
            )


def convert_angr_and_ghidra_func_names():
    for decompiler in ["angr", "ghidra"]:
        tidied3_dir = get_tidied_dir(3)

        for optimization_level in [0, 1, 2]:
            json_file_path = (
                tidied3_dir / f"em_output_O{optimization_level}-d_{decompiler}.json"
            )

            d = json.loads(json_file_path.read_text())

            new_d = dict()
            for file_ in d.keys():
                new_d[file_] = dict()

                file_no_ext = file_.replace(".c", "")
                # function_map_file_path = (
                #     get_results_dir().parent.parent
                #     / f"new_compiled_benchmarks/em_output_O{optimization_level}/d_{decompiler}_symbols/{file_no_ext}.map"
                # )
                # func_map = dict()
                # for line in function_map_file_path.read_text().splitlines():
                #     orig_func, wasm2c_func = line.split(":")
                #     func_map[wasm2c_func] = orig_func

                for func in d[file_].keys():
                    # if func in func_map.keys():
                    # mapped_function = func_map[func]
                    mapped_function = func
                    new_d[file_][mapped_function] = d[file_][func]

            d = new_d

            d = recursively_sort_dict(d)

            tidied4_dir = get_tidied_dir(4)
            tidied4_dir.mkdir(exist_ok=True)
            tidied_file_path = tidied4_dir / json_file_path.name
            tidied_file_path.write_text(json.dumps(d, indent=2))

            subprocess.run(
                f"cp {get_tidied_dir(3) / 'original_src.json'} {tidied4_dir}",
                shell=True,
            )


def delete_extra():
    for decompiler in ["wasm2c", "w2c2", "angr"]:
        tidied4_dir = get_tidied_dir(4)

        original_d = json.loads((tidied4_dir / "original_src.json").read_text())
        decompiled_programs = set()
        for optimization_level in [0, 1, 2]:
            json_file_path = (
                tidied4_dir / f"em_output_O{optimization_level}-d_{decompiler}.json"
            )

            d = json.loads(json_file_path.read_text())
            keys = list(d.keys())
            for k in keys:
                decompiled_programs.add(k)
                if k not in original_d:
                    del d[k]

            tidied5_dir = get_tidied_dir(5)
            tidied5_dir.mkdir(exist_ok=True)
            tidied_file_path = tidied5_dir / json_file_path.name
            tidied_file_path.write_text(json.dumps(d, indent=2))

        # json_file_path = tidied4_dir / f"original_src.json"
        # d = json.loads(json_file_path.read_text())
        # keys = list(d.keys())
        # for k in keys:
        #     if k not in decompiled_programs:
        #         del d[k]

        d = recursively_sort_dict(d)

        tidied5_dir = get_tidied_dir(5)
        tidied5_dir.mkdir(exist_ok=True)
        tidied_file_path = tidied5_dir / json_file_path.name
        tidied_file_path.write_text(json.dumps(d, indent=2))


def copy_over_decompiled_results():
    tidied3_dir = get_tidied_dir(3)
    tidied1_dir = get_tidied_dir(1)

    for f in os.listdir(tidied1_dir):
        if "em_output" in f:
            src = tidied1_dir / f
            dst = tidied3_dir / f
            subprocess.run(f"cp {src} {dst}", shell=True)


def recursively_sort_dict(d):
    for k, v in d.items():
        if isinstance(v, dict):
            d[k] = recursively_sort_dict(d[k])

    sorted_d = {k: d[k] for k in sorted(d)}
    return sorted_d


def get_results_dir():
    return Path(__file__).parent.parent / "results"


def get_tidied_dir(n):
    return get_results_dir() / f"tidied{n}"


if __name__ == "__main__":
    main()
