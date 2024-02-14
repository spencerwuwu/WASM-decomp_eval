#!/bin/bash

LD_FLAGS="-I ../emscripten_compile/polybench-c-4.2.1-beta/utilities/ -I ./chstone_specials"

all_pass=1

DIRS=("em_output_O0/d_wasm-decompile_new")

for d in "${DIRS[@]}"; do
	for cfile in "$d/"*.c; do
		clang -c $cfile $LD_FLAGS -o /dev/null -Wno- -g -Wno-error=int-conversion -fno-stack-protector 2> /dev/null
		status=$?
		if [[ $status != "0" ]]; then
			echo "+++" 
			echo "++ Failed to compile $cfile"
			echo "+++" 
			all_pass=0
			exit 1
		fi
		./single_premake.py $cfile "${LD_FLAGS} -Wno- -g -Wno-error=int-conversion -fno-stack-protector"
	done
done

if [[ $all_pass == 1 ]]; then
	echo "" 
	echo "++ All passed!"
fi
