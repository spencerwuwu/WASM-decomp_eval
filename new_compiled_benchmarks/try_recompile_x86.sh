#!/bin/bash

DIR=$1

all_pass=1

LD_FLAGS="-I ../emscripten_compile/polybench-c-4.2.1-beta/utilities/ -I ./chstone_specials"

for cfile in "$DIR/"*.c; do

	if [[ $cfile == *"d_ghidra_new/df"*.c ]]; then continue; fi
	if [[ $cfile == *"d_ghidra_new/gsm.c" ]]; then continue; fi
	if [[ $cfile == *"d_ghidra_new/mpeg2.c" ]]; then continue; fi
	if [[ $cfile == "em_output_O1/d_ghidra_new/aes.c" ]]; then continue; fi
	if [[ $cfile == "em_output_O1/d_ghidra_new/bf.c" ]]; then continue; fi
	if [[ $cfile == "em_output_O2/d_ghidra_new/adpcm.c" ]]; then continue; fi
	if [[ $cfile == "em_output_O2/d_ghidra_new/aes.c" ]]; then continue; fi
	if [[ $cfile == "em_output_O2/d_ghidra_new/atax.c" ]]; then continue; fi
	if [[ $cfile == "em_output_O2/d_ghidra_new/covariance.c" ]]; then continue; fi
	if [[ $cfile == "em_output_O2/d_ghidra_new/deriche.c" ]]; then continue; fi
	if [[ $cfile == "em_output_O2/d_ghidra_new/durbin.c" ]]; then continue; fi
	if [[ $cfile == "em_output_O2/d_ghidra_new/fdtd-2d.c" ]]; then continue; fi
	if [[ $cfile == "em_output_O2/d_ghidra_new/gemm.c" ]]; then continue; fi
	if [[ $cfile == "em_output_O2/d_ghidra_new/gemver.c" ]]; then continue; fi
	if [[ $cfile == "em_output_O2/d_ghidra_new/heat-3d.c" ]]; then continue; fi
	if [[ $cfile == "em_output_O2/d_ghidra_new/gramschmidt.c" ]]; then continue; fi
	if [[ $cfile == "em_output_O2/d_ghidra_new/jacobi-1d.c" ]]; then continue; fi
	if [[ $cfile == "em_output_O2/d_ghidra_new/jacobi-2d.c" ]]; then continue; fi
	if [[ $cfile == "em_output_O2/d_ghidra_new/syr2k.c" ]]; then continue; fi
	if [[ $cfile == "em_output_O2/d_ghidra_new/syrk.c" ]]; then continue; fi

	## retdec
	if [[ $cfile == "em_output_O0/d_retdec_new/bf.c" ]]; then continue; fi
	if [[ $cfile == "em_output_O0/d_retdec_new/gsm.c" ]]; then continue; fi
	if [[ $cfile == "em_output_O1/d_retdec_new/atax.c" ]]; then continue; fi
	if [[ $cfile == "em_output_O1/d_retdec_new/cholesky.c" ]]; then continue; fi
	if [[ $cfile == "em_output_O1/d_retdec_new/durbin.c" ]]; then continue; fi
	if [[ $cfile == "em_output_O1/d_retdec_new/gramschmidt.c" ]]; then continue; fi
	if [[ $cfile == "em_output_O1/d_retdec_new/mpeg2.c" ]]; then continue; fi
	if [[ $cfile == "em_output_O2/d_retdec_new/cholesky.c" ]]; then continue; fi
	if [[ $cfile == "em_output_O2/d_retdec_new/durbin.c" ]]; then continue; fi
	if [[ $cfile == "em_output_O2/d_retdec_new/gramschmidt.c" ]]; then continue; fi
	if [[ $cfile == "em_output_O2/d_retdec_new/mpeg2.c" ]]; then continue; fi
	
	clang -c $cfile $LD_FLAGS -o /dev/null -Wno- -g -Wno-error=int-conversion 
	#gcc -fno-stack-protector -no-pie -O0 -w -m32 -c $cfile $LD_FLAGS -o /dev/null
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
