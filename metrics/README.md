# Metrics

## Prerequisites

### Python Dependencies

```bash
python3 -m pip install -r requirements.txt
```

### Program Dependencies

1. C and C++ Code Counter: [Install Instructions](https://github.com/sarnold/cccc)

## Usage (Docker)

```bash
# build
cd metrics
docker build -t metrics .

# run
cd ../new_compiled_benchmarks/em_output_O0/d_wasm2c
docker run -v $(pwd):/input_files metrics python3 calculate_program_metrics.py -f aes.c
```

Example output:

```json
{
  "aes.c": {
    "Lines of code": 64,
    "Halstead complexity difficulty measure": 23.330479452054796,
    "McCabe cyclomatic complexity": 5,
    "Kafura's information flow": 0
  }
}
```

## Usage (without Docker, requires manual installation of dependencies)

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
