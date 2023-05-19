# CS699_DeWasm

## AST similarity progress
### Workflow
- Parse symbol file 
    - (filter functions to match onces)
- Parse pre-generated ast files to Nodes
    - (slightly filter out functions to build node)
- Map symbol to corresponding function in asts
    - Orig file: Current approach does not include all functions seen in symbol file (TODO)
    - w2c2/wasm: Map name -> Check if only one function call in these function -> map these functions to original symbol (Currently at w2c2)

- Compare tree smilarities.

## Requirements
Lastest version of emcc and w2c2, wabt.   
Otherwise, things may not work.

- emcc (Emscripten gcc/clang-like replacement + linker emulating GNU ld) 3.1.34 (57b21b8fdcbe3ebb523178b79465254668eab408)
- wabt e8c7e0dfb4e04544727d11fb987839f1dbf616f2
- w2c2 63969fbbe6bc3c38dd9be7c1130bac6533651836

### 1. Benchmark compilation: C -> Wasm with Emscripten
Precompiled files available in `compiled_benchmarks/em_output_OX` (OX is the optimization level, currently support O0, O1, O2, and O3)
#### Compile using the script
- Open `em_compile.py`. Your desired optimization level is the value of `opt_level` (may update the argument version later). 
If you want to add extra Emscripten flags, modify `em_flags`.
- Execute `em_compile.py`. 
#### Appendix A: A small tool that allows you to run Wasm locally on your browser
- In the `small-tools` folder, copy `run-wasm-compatible-SimpleHTTPServer.py` and `test.html` to the folder containing Wasm and their JS loaders. 
Execute the python file, then you should be able to run Wasm by visiting `localhost:8000/test.html` in the browser. 
Remember to modify `test.html` to change the program you want to execute.

## Install clang python binding
```
$ sudo apt-get install libclang-dev
$ pip3 install libclang
# (Maybe not) Then edit cindex.py to the correct libclang version under /lib/x86_64-linux-gnu/
```
