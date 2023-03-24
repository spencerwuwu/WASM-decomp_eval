# Metrics

## Prerequisites

### Python Dependencies

```bash
python3 -m pip install -r requirements.txt
```

### Program Dependencies

1. C and C++ Code Counter: [Install Instructions](https://github.com/sarnold/cccc)

## Usage

```bash
python3 calculate_program_metrics.py example_source_code.c
```

Example output:

```json
{
    "Lines of code": 7,
    "ABC software metric": "(1,2,3)",
    "Maximum nesting depth": 1,
    "Halstead complexity difficulty measure": 5.27,
    "McCabe cyclomatic complexity": 4,
    "Kafura's information flow": 4238
}
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
-   [ ] Figure out how to parse C code (maybe using [pycparser](https://github.com/eliben/pycparser))
-   [ ] Implement calculate_abc_software_metric.py
-   [ ] Implement calculate_halstead_complexity_difficulty_measure.py
-   [ ] Implement calculate_kafuras_information_flow.py
-   [ ] Implement calculate_lines_of_code.py
-   [ ] Implement calculate_maximum_nesting_depth.py
-   [x] Implement calculate_mccabe_cyclomatic_complexity.py
