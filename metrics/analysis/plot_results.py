from pathlib import Path
import json
import statistics
import logging

import matplotlib.pyplot as plt
import numpy as np


def main():
    configure_logger(logging.INFO)

    results_dir = Path(__file__).absolute().parent.parent / "results"

    data = {
        "original_src": json.loads((results_dir / "original_src.json").read_text()),
        "o0_w2c2": json.loads((results_dir / "em_output_O0-d_w2c2.json").read_text()),
        "o0_wasm2c": json.loads(
            (results_dir / "em_output_O0-d_wasm2c.json").read_text()
        ),
        "o1_w2c2": json.loads((results_dir / "em_output_O1-d_w2c2.json").read_text()),
        "o1_wasm2c": json.loads(
            (results_dir / "em_output_O1-d_wasm2c.json").read_text()
        ),
        "o2_w2c2": json.loads((results_dir / "em_output_O2-d_w2c2.json").read_text()),
        "o2_wasm2c": json.loads(
            (results_dir / "em_output_O2-d_wasm2c.json").read_text()
        ),
    }

    for metric in [
        "Lines of code",
        "Halstead complexity difficulty measure",
        "McCabe cyclomatic complexity",
        "Maximum nesting depth",
    ]:
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
    plt.savefig(f"average_{metric.replace(' ', '_').lower()}.png")


def plot_average_metric_changes(metric, data):
    plot_data = get_average_metric_changes(metric, data)
    print(json.dumps(plot_data, indent=2))

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
    w2c2_margins_from_average = [
        [
            plot_data["o0_w2c2"]["average"] - plot_data["o0_w2c2"]["min"],
            plot_data["o1_w2c2"]["average"] - plot_data["o1_w2c2"]["min"],
            plot_data["o2_w2c2"]["average"] - plot_data["o2_w2c2"]["min"],
        ],
        [
            plot_data["o0_w2c2"]["max"] - plot_data["o0_w2c2"]["average"],
            plot_data["o1_w2c2"]["max"] - plot_data["o1_w2c2"]["average"],
            plot_data["o2_w2c2"]["max"] - plot_data["o2_w2c2"]["average"],
        ],
    ]
    wasm2c_margins_from_average = [
        [
            plot_data["o0_wasm2c"]["average"] - plot_data["o0_wasm2c"]["min"],
            plot_data["o1_wasm2c"]["average"] - plot_data["o1_wasm2c"]["min"],
            plot_data["o2_wasm2c"]["average"] - plot_data["o2_wasm2c"]["min"],
        ],
        [
            plot_data["o0_wasm2c"]["max"] - plot_data["o0_wasm2c"]["average"],
            plot_data["o1_wasm2c"]["max"] - plot_data["o1_wasm2c"]["average"],
            plot_data["o2_wasm2c"]["max"] - plot_data["o2_wasm2c"]["average"],
        ],
    ]

    br1 = np.arange(len(w2c2_averages))
    br2 = [x + bar_width for x in br1]

    plt.bar(
        br1,
        w2c2_averages,
        yerr=w2c2_margins_from_average,
        capsize=10,
        color="b",
        width=bar_width,
        label="w2c2",
    )
    plt.bar(
        br2,
        wasm2c_averages,
        yerr=wasm2c_margins_from_average,
        capsize=10,
        color="g",
        width=bar_width,
        label="wasm2c",
    )

    plt.title(
        f"Average change from original code\nfor metric '{metric}'",
        fontweight="bold",
        fontsize=15,
    )
    plt.xlabel("Optimization level", fontweight="bold", fontsize=10)
    plt.ylabel(metric, fontweight="bold", fontsize=10)
    plt.xticks(
        [r + bar_width for r in range(len(w2c2_averages))], ["-O0", "-O1", "-O2"]
    )

    plt.legend()
    plt.savefig(f"average_delta_{metric.replace(' ', '_').lower()}.png")


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
        for program in data[original_dataset]:
            if program not in data[decompiled_dataset]:
                # logging.warning(
                #     f"Skipping {program} since it's only in original_src dataset"
                # )
                continue

            metric_delta = (
                data[decompiled_dataset][program][metric]
                - data[original_dataset][program][metric]
            )
            metric_deltas.append(metric_delta)

            if metric_delta < 0:
                logging.info(
                    f"Negative delta for {decompiled_dataset}, {program}, {metric}: {metric_delta}"
                )

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
