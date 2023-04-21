from pathlib import Path
import json

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

    tidied_dir = get_tidied_dir()
    tidied_dir.mkdir(exist_ok=True)
    tidied_file_path = tidied_dir / results_file_path.name
    tidied_file_path.write_text(json.dumps(tidied_data, indent=2))


def recursively_sort_dict(d):
    for k, v in d.items():
        if isinstance(v, dict):
            d[k] = recursively_sort_dict(d[k])

    sorted_d = {k: d[k] for k in sorted(d)}
    return sorted_d


def get_results_dir():
    return Path(__file__).parent.parent / "results"


def get_tidied_dir():
    return get_results_dir() / "tidied"


if __name__ == "__main__":
    main()
