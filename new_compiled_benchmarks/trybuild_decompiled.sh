#!/bin/bash

WASM_DIRS=(em_output_O0 em_output_O1 em_output_O2)

all_pass=1

for WASMDIR in "${WASM_DIRS[@]}"; do
	for cfile in "$WASMDIR/d_w2c2/"*.c; do
		clang -c $cfile -I decompiler_lib/ -o /dev/null -Wno-
		status=$?
		if [[ $status != "0" ]]; then
			echo "+++" 
			echo "++ Failed to compile $cfile"
			echo "+++" 
			all_pass=0
		fi
	done
	for cfile in "$WASMDIR/d_wasm2c/"*.c; do
		clang -c $cfile -I decompiler_lib/ -o /dev/null -Wno-
		status=$?
		if [[ $status != "0" ]]; then
			echo "+++"
			echo "++ Failed to compile $cfile"
			echo "+++"
			all_pass=0
		fi
	done
done

if [[ $all_pass == 1 ]]; then
	echo "" 
	echo "++ All passed!"
fi
