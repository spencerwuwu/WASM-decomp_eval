#!/usr/bin/env bash

set -e
set -x

# rm -rf /tmp/chstone_src
# mkdir /tmp/chstone_src
# find ~/cs699_webassembly/emscripten_compile | grep '.c$' | xargs -I {} cp {} /tmp/chstone_src/
# cd /tmp/chstone_src
# docker run -v $(pwd):/input_files metrics python3 calculate_program_metrics.py -d . > ~/cs699_webassembly/metrics/results/original_src.json


#for decompiler in result_r2 result_retdec; do
#    for case in error result; do
#        cd ~/PycharmProjects/test/DecFuzzer/${decompiler}/${case};
#        python3 ~/PycharmProjects/test/cs699_webassembly/metrics/calculate_program_metrics.py -d . > ~/PycharmProjects/test/cs699_webassembly/metrics/results/dec_${decompiler}_${case}.json
#    done
#done


cd ~/PycharmProjects/test/DecFuzzer-master/seed_all;
python3 ~/PycharmProjects/test/cs699_webassembly/metrics/calculate_program_metrics.py -d . > ~/PycharmProjects/test/cs699_webassembly/metrics/results/dec_seed_all.json

cd ~/PycharmProjects/test/DecFuzzer-master/storage/d_r2;
python3 ~/PycharmProjects/test/cs699_webassembly/metrics/calculate_program_metrics.py -d . > ~/PycharmProjects/test/cs699_webassembly/metrics/results/dec_r2.json

cd ~/PycharmProjects/test/DecFuzzer-master/storage/d_retdec;
python3 ~/PycharmProjects/test/cs699_webassembly/metrics/calculate_program_metrics.py -d . > ~/PycharmProjects/test/cs699_webassembly/metrics/results/dec_retdec.json


cd ~/PycharmProjects/test/cs699_webassembly/new_compiled_benchmarks/pbc_chs_src;
python3 ~/PycharmProjects/test/cs699_webassembly/metrics/calculate_program_metrics.py -d . > ~/PycharmProjects/test/cs699_webassembly/metrics/results/em_output_src.json

for optimization_level in 0 1 2; do
    for decompiler in ghidra_new retdec_new angr snowman w2c2; do
        cd ~/PycharmProjects/test/cs699_webassembly/new_compiled_benchmarks/em_output_O${optimization_level}/d_${decompiler};
        python3 ~/PycharmProjects/test/cs699_webassembly/metrics/calculate_program_metrics.py -d . > ~/PycharmProjects/test/cs699_webassembly/metrics/results/em_output_O${optimization_level}-d_${decompiler}.json
    done
done

for optimization_level in 0 1 2; do
    for decompiler in wasm2c; do
        cd ~/PycharmProjects/test/cs699_webassembly/new_compiled_benchmarks/em_output_O${optimization_level}/d_${decompiler};
        python3 ~/PycharmProjects/test/cs699_webassembly/metrics/calculate_program_metrics.py -d . > ~/PycharmProjects/test/cs699_webassembly/metrics/results/em_output_O${optimization_level}-d_${decompiler}.json
    done
done