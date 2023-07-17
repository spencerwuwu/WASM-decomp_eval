#!/bin/bash -e

pushd emscripten_compile/
for opt in 0 1 2;do
    python3 premake_asts.py $opt
done
popd

pushd new_compiled_benchmarks/
    python3 premake_asts.py
    ./try_recompile_x86_n_asts.sh
popd


