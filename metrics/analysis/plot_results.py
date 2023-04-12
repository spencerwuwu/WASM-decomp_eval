from pathlib import Path
import json
import statistics

import matplotlib.pyplot as plt
import numpy as np


def main():
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

    plot_loc(data)


def plot_loc(data):
    plot_data = dict()

    for dataset in data.keys():
        average, pstdev = get_attribute_statistics_for_dataset(
            "Lines of code", dataset, data
        )
        plot_data[dataset] = {"average": average, "pstdev": pstdev}

    # print(json.dumps(plot_data, indent=2))

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

    plt.title("Average LoC", fontweight="bold", fontsize=15)
    plt.xlabel("Optimization level", fontweight="bold", fontsize=10)
    plt.ylabel("Lines of Code", fontweight="bold", fontsize=10)
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
    plt.show()


def get_attribute_statistics_for_dataset(attribute, dataset, data):
    dataset_metrics = data[dataset]
    attribute_values = []
    for file_, file_metrics in dataset_metrics.items():
        attribute_values.append(file_metrics[attribute])

    average = statistics.mean(attribute_values)
    pstdev = statistics.pstdev(attribute_values)  # population standard deviation

    return average, pstdev


if __name__ == "__main__":
    main()
