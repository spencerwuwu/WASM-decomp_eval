# Metrics

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
