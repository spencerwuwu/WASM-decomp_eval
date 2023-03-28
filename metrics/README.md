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
docker build -t metrics .

# run
docker run metrics python3 calculate_program_metrics.py example_source_code.c

# run (interactive):
docker run -it metrics /bin/bash
python3 calculate_program_metrics.py example_source_code.c
```

Example output:

```json
{
  "Lines of code": 9,
  "Halstead complexity difficulty measure": 8.272727272727273,
  "McCabe cyclomatic complexity": 2,
  "Kafura's information flow": 0
}
```

## Usage (without Docker, requires manual installation of dependencies)

```bash
python3 calculate_program_metrics.py example_source_code.c
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
