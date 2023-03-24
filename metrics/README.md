# Metrics

## Prerequisites

```bash
python3 -m pip install -r requirements.txt
```

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
- [x] Implement calculate_lines_of_code.py
- [ ] Figure out how to parse C code (maybe using [pycparser](https://github.com/eliben/pycparser))
- [ ] Implement (or add already implemented project for-) calculate_abc_software_metric.py
- [ ] Implement (or add already implemented project for-) calculate_halstead_complexity_difficulty_measure.py
- [ ] Implement (or add already implemented project for-) calculate_kafuras_information_flow.py
- [ ] Implement (or add already implemented project for-) calculate_lines_of_code.py
- [ ] Implement (or add already implemented project for-) calculate_maximum_nesting_depth.py
- [ ] Implement (or add already implemented project for-) calculate_mccabe_cyclomatic_complexity.py
