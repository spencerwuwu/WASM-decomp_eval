#!/bin/bash

DIR=$1

all_pass=1

LD_FLAGS="-I ../emscripten_compile/polybench-c-4.2.1-beta/utilities/ -I ./chstone_specials"

for cfile in "$DIR/"*.c; do
	if [[ $cfile == "em_output_O0/d_ghidra_new//dfadd.c" ]]; then continue; fi
	if [[ $cfile == "em_output_O0/d_ghidra_new//dfsin.c" ]]; then continue; fi
	if [[ $cfile == "em_output_O0/d_ghidra_new//gsm.c" ]]; then continue; fi
	if [[ $cfile == "em_output_O0/d_ghidra_new//mpeg2.c" ]]; then continue; fi
	#clang -c $cfile -I../emscripten_compile/polybench-c-4.2.1-beta/utilities/ -o /dev/null -Wno-
	gcc -fno-stack-protector -no-pie -O0 -w -m32 -c $cfile $LD_FLAGS -o /dev/null
	status=$?
	if [[ $status != "0" ]]; then
		echo "+++" 
		echo "++ Failed to compile $cfile"
		echo "+++" 
		all_pass=0
		exit 1
	fi
done

if [[ $all_pass == 1 ]]; then
	echo "" 
	echo "++ All passed!"
fi
