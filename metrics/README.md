# Metrics

#### New raw data

DecFuzzer: `results/new/dec_*.json` (`seed_all` is source file)

PBC and CHS: `results/new/em_output_*.json` (`src` is source file)

#### Data Process Scripts

DecFuzzer: `plot.py`

PBC and CHS: `plot_bench.py` (hardcoded function mapping info so the file is a little bit big)

The script contains some simple comments and should be self-explained. 

Generally, each script will generate a CSV file containing statistics (the file will be overwritten each time the script is executed). 

Each script also includes a simple plot generation code snippet at the end of it. 

----
----
# Previous Contents

## Prerequisites

### Python Dependencies

```bash
python3 -m pip install -r requirements.txt
```

### Program Dependencies

1. C and C++ Code Counter: [Install Instructions](https://github.com/sarnold/cccc)

## Metrics calculator usage (Docker)

```bash
# build
cd metrics
docker build -t metrics .

# run
cd ../new_compiled_benchmarks/em_output_O0/d_wasm2c
docker run -v $(pwd):/input_files metrics python3 calculate_program_metrics.py -f aes.c
```

## Plotting the results

```bash
cd analysis
python3 tidy_results.py
python3 plot_results.py
xdg-open plots
```

## Metrics calculator (without Docker, requires manual installation of dependencies)

```bash
python3 calculate_program_metrics.py example_source_code.c -h
```

## Code formatting

[black](https://github.com/psf/black)

## Other

```bash
# preprocessing:
gcc -E example_source_code.c > example_source_code_preprocessed.c
```

TODO:
-   [x] Implement calculate_lines_of_code.py
-   [x] Implement calculate_halstead_complexity_difficulty_measure.py
-   [x] Implement calculate_kafuras_information_flow.py
-   [x] Implement calculate_mccabe_cyclomatic_complexity.py
