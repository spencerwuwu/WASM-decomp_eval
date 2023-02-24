CC = gcc
CFLAGS = -Wall
LIB = ../../../lib
WASM_RT_IMPL = ../../../lib/wasm-rt-impl.c
POLYBENCHC = ../../../emscripten_compile/polybench-c-4.2.1-beta/utilities/polybench.c

2mm: test.c 2mm.c $(WASM_RT_IMPL)
	$(CC) $^ -o $@

%.o: %.c
	$(CC) -I $(LIB) -c $^

.PHONY: clean

clean:
	rm -f *.o
