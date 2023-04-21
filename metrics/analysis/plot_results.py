from pathlib import Path
import json
import statistics
import logging

import matplotlib.pyplot as plt
import numpy as np

# DECOMPILERS = ["wasm2c", "w2c2", "angr", "ghidra", "snowman"]
DECOMPILERS = ["wasm2c"]
OPTIMIZATION_LEVELS = [0, 1, 2]
METRICS = [
    "Lines of code",
    "Halstead complexity difficulty measure",
    "McCabe cyclomatic complexity",
    "Maximum nesting depth",
]


def main():
    configure_logger(logging.INFO)

    # results_dir = Path(__file__).absolute().parent.parent / "results"
    results_dir = Path(__file__).absolute().parent.parent / "results/tidied4"

    data = {"original_src": json.loads((results_dir / "original_src.json").read_text())}
    for level in OPTIMIZATION_LEVELS:
        for decompiler in DECOMPILERS:
            data[f"o{level}_{decompiler}"] = json.loads(
                (results_dir / f"em_output_O{level}-d_{decompiler}.json").read_text()
            )

    for metric in METRICS:
        # plot_metric_averages(metric, data)
        plot_average_metric_changes(metric, data)


def plot_metric_averages(metric, data):
    plot_data = dict()

    for dataset in data.keys():
        average, pstdev = get_metric_statistics_for_dataset(metric, dataset, data)
        plot_data[dataset] = {"average": average, "pstdev": pstdev}

    bar_width = 0.25
    fig = plt.subplots()

    w2c2_averages = [
        plot_data["o0_w2c2"]["average"],
        plot_data["o1_w2c2"]["average"],
        plot_data["o2_w2c2"]["average"],
    ]
    wasm2c_averages = [
        plot_data["o0_wasm2c"]["average"],
        plot_data["o1_wasm2c"]["average"],
        plot_data["o2_wasm2c"]["average"],
    ]

    br1 = np.arange(len(w2c2_averages))
    br2 = [x + bar_width for x in br1]

    plt.bar(br1, w2c2_averages, color="b", width=bar_width, label="w2c2")
    plt.bar(br2, wasm2c_averages, color="g", width=bar_width, label="wasm2c")

    plt.title(f"Average {metric}", fontweight="bold", fontsize=15)
    plt.xlabel("Optimization level", fontweight="bold", fontsize=10)
    plt.ylabel(metric, fontweight="bold", fontsize=10)
    plt.xticks(
        [r + bar_width for r in range(len(w2c2_averages))], ["-O0", "-O1", "-O2"]
    )

    plt.axhline(
        y=plot_data["original_src"]["average"],
        linewidth=1,
        color="r",
        linestyle="--",
        label="original",
    )

    plt.legend()
    plt.savefig(f"plots/average_{metric.replace(' ', '_').lower()}.png")


def plot_average_metric_changes(metric, data):
    plot_data = get_average_metric_changes(metric, data)
    # print(json.dumps(plot_data, indent=2))

    bar_width = 0.15
    fig = plt.subplots()

    averages = dict()
    for decompiler in DECOMPILERS:
        averages[decompiler] = []
        for level in OPTIMIZATION_LEVELS:
            averages[decompiler].append(plot_data[f"o{level}_{decompiler}"]["average"])

    margins_from_average = dict()
    for decompiler in DECOMPILERS:
        lower_margins = []
        for level in OPTIMIZATION_LEVELS:
            lower_margin = (
                plot_data[f"o{level}_{decompiler}"]["average"]
                - plot_data[f"o{level}_{decompiler}"]["min"]
            )
            lower_margins.append(lower_margin)
        higher_margins = []
        for level in OPTIMIZATION_LEVELS:
            higer_margin = (
                plot_data[f"o{level}_{decompiler}"]["max"]
                - plot_data[f"o{level}_{decompiler}"]["average"]
            )
            higher_margins.append(higer_margin)
        margins_from_average[decompiler] = [lower_margins, higher_margins]

    br_base = np.arange(len(OPTIMIZATION_LEVELS))
    br = dict()
    for i, decompiler in enumerate(DECOMPILERS):
        br[decompiler] = [x + (i + 1) * bar_width for x in br_base]

    labels = dict()
    for decompiler in DECOMPILERS:
        wasm_decompilers = {"wasm2c", "w2c2"}
        if decompiler in wasm_decompilers:
            labels[decompiler] = f"{decompiler} (wasm decompiler)"
        else:
            labels[decompiler] = f"{decompiler} (x86 decompiler)"

    for decompiler in DECOMPILERS:
        plt.bar(
            br[decompiler],
            averages[decompiler],
            # yerr=margins_from_average[decompiler],
            # capsize=2,
            # color="b",
            width=bar_width,
            label=labels[decompiler],
        )

    plt.title(
        f"Average change from original code\nfor metric: '{metric}'",
        fontweight="bold",
        fontsize=15,
    )
    plt.xlabel("Optimization level", fontweight="bold", fontsize=10)
    plt.ylabel(f"{metric}\ndelta", fontweight="bold", fontsize=10)
    # plt.xticks(
    #     [r + 3 * bar_width for r in range(len(OPTIMIZATION_LEVELS))],
    #     ["-O0", "-O1", "-O2"],
    # )
    plt.xticks(
        [r + 1 * bar_width for r in range(len(OPTIMIZATION_LEVELS))],
        ["-O0", "-O1", "-O2"],
    )

    plt.legend()
    plt.savefig(f"plots/average_delta_{metric.replace(' ', '_').lower()}.png")


def get_average_metric_changes(metric, data):
    average_metric_changes = dict()
    original_dataset = "original_src"
    for dataset in data.keys():
        if dataset == "original_src":
            continue
        decompiled_dataset = dataset
        logging.info(
            f"Calculating '{metric}' deltas between {original_dataset} and {decompiled_dataset}"
        )

        metric_deltas = []
        # num_skipped = 0
        for program in data[original_dataset]:
            if program not in data[decompiled_dataset]:
                # logging.warning(
                #     f"Skipping {program} since it's only in original_src dataset"
                # )
                # num_skipped += 1
                continue
            for func in data[original_dataset][program]:
                if func not in data[decompiled_dataset][program]:
                    # num_skipped += 1
                    continue

                # print(decompiled_dataset)
                # print(data[decompiled_dataset][program])
                metric_delta = (
                    data[decompiled_dataset][program][func][metric]
                    - data[original_dataset][program][func][metric]
                )
                metric_deltas.append(metric_delta)

                if metric_delta < 0:
                    logging.info(
                        f"Negative delta for {decompiled_dataset}, {program}, {metric}: {metric_delta}"
                    )
                    pass
        # logging.warning(
        #     f"{num_skipped} of {len(data[original_dataset])} functions in original_src dataset skipped"
        # )

        average = statistics.mean(metric_deltas)
        pstdev = statistics.pstdev(metric_deltas)
        mn = min(metric_deltas)
        mx = max(metric_deltas)

        average_metric_changes[dataset] = {
            "average": average,
            "pstdev": pstdev,
            "min": mn,
            "max": mx,
        }

    return average_metric_changes


def get_metric_statistics_for_dataset(metric, dataset, data):
    dataset_metrics = data[dataset]
    metric_values = []
    for file_, file_metrics in dataset_metrics.items():
        metric_values.append(file_metrics[metric])

    average = statistics.mean(metric_values)
    pstdev = statistics.pstdev(metric_values)  # population standard deviation

    return average, pstdev


def configure_logger(log_level):
    logging.basicConfig(
        format="[%(asctime)s.%(msecs)03d %(levelname)s]: %(message)s",
        datefmt="%H:%M:%S",
        level=log_level,
    )


if __name__ == "__main__":
    main()
