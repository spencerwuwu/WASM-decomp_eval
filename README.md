# CS699_DeWasm

### 1. Benchmark compilation: C -> Wasm with Emscripten
Precompiled files available in compiled_benchmarks/em_output_OX (OX is the optimization levels, currently support O0, O1, O2, and O3)
#### Compile using the script
- Make sure your Emscripten version is 3.1.31  
- Download em_compile folder
- Open `em_compile.py`. Your desired optimization level is the value of `opt_level` (may update the argument version later). 
If you want to add extra Emscripten flags, modify `em_flags`.
- Execute `em_compile.py`. 
#### Appendix A: A small tool that allows you to run Wasm locally on your browser
- In 'small-tools' folder, copy `run-wasm-compatible-SimpleHTTPServer.py` and `test.html` to the folder containing Wasm and their JS loaders. 
Execute the python file, then you should be able to run Wasm by visiting `localhost:8000/test.html`. 
Remember to modify `test.html` to change the program you want to execute.

