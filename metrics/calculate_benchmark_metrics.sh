#!/usr/bin/env bash

set -e
set -x

rm -rf /tmp/chstone_src
mkdir /tmp/chstone_src
find ~/cs699_webassembly/emscripten_compile | grep '.c$' | xargs -I {} cp {} /tmp/chstone_src/
cd /tmp/chstone_src
docker run -v $(pwd):/input_files metrics python3 calculate_program_metrics.py -d . > ~/cs699_webassembly/metrics/results/original_src.json

for optimization_level in 0 1 2; do
    for decompiler in wasm2c w2c2 angr ghidra snowman; do
        cd ~/cs699_webassembly/new_compiled_benchmarks/em_output_O${optimization_level}/d_${decompiler};
        docker run -v $(pwd):/input_files metrics python3 calculate_program_metrics.py -d . > ~/cs699_webassembly/metrics/results/em_output_O${optimization_level}-d_${decompiler}.json
    done
done

