# WASM-decomp_eval

SecureComm'24 Artifact for `Is This the Same Code? A Comprehensive Study of Decompilation Techniques for WebAssembly Binaries`.

Instructions and updates will be publicly availabel at [WASM-decomp_eval](https://github.com/spencerwuwu/WASM-decomp_eval).

Recursively clone the repo to get [WASM-DecFuzzer](https://github.com/spencerwuwu/WASM-DecFuzzer.git) as well.

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
