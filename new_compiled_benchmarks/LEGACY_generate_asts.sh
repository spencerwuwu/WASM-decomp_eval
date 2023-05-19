#!/bin/bash

# Legacy: seems to have version issue with python clang binding

WASM_DIRS=(em_output_O0 em_output_O1 em_output_O2)

all_pass=1

for WASMDIR in "${WASM_DIRS[@]}"; do
	for cfile in "$WASMDIR/d_w2c2/"*.c; do
		clang -emit-ast $cfile -I decompiler_lib/ -Wno-
		status=$?
		if [[ $status != "0" ]]; then
			echo "+++" 
			echo "++ Failed to generate ast $cfile"
			echo "+++" 
			all_pass=0
		fi
	done
	mkdir -p $WASMDIR/ast_w2c2/
	mv *.ast $WASMDIR/ast_w2c2/

	for cfile in "$WASMDIR/d_wasm2c/"*.c; do
		clang -emit-ast $cfile -I decompiler_lib/ -Wno-
		status=$?
		if [[ $status != "0" ]]; then
			echo "+++"
			echo "++ Failed to compile $cfile"
			echo "+++"
			all_pass=0
		fi
	done
	mkdir -p $WASMDIR/ast_wasm2c/
	mv *.ast $WASMDIR/ast_wasm2c/
done

if [[ $all_pass == 1 ]]; then
	echo "" 
	echo "++ All passed!"
fi

