#!/usr/bin/env bash

set -e
set -x

rm -rf /tmp/chstone_src
mkdir /tmp/chstone_src
find ~/cs699_webassembly/emscripten_compile | grep '.c$' | xargs -I {} cp {} /tmp/chstone_src/
cd /tmp/chstone_src
docker run -v $(pwd):/input_files metrics python3 calculate_program_metrics.py -d . > ~/cs699_webassembly/metrics/results/original_src.json

for i in 0 1 2; do
    cd ~/cs699_webassembly/new_compiled_benchmarks/em_output_O${i}/d_wasm2c;
    docker run -v $(pwd):/input_files metrics python3 calculate_program_metrics.py -d . > ~/cs699_webassembly/metrics/results/em_output_O${i}-d_wasm2c.json

    cd ~/cs699_webassembly/new_compiled_benchmarks/em_output_O${i}/d_w2c2;
    docker run -v $(pwd):/input_files metrics python3 calculate_program_metrics.py -d . > ~/cs699_webassembly/metrics/results/em_output_O${i}-d_w2c2.json
done

