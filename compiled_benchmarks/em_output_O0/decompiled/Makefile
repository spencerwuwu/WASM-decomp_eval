CC = gcc
CFLAGS = -Wall
LIB = ../../../lib
WASM_RT_IMPL = ../../../lib/wasm-rt-impl.c
POLYBENCHC = ../../../emscripten_compile/polybench-c-4.2.1-beta/utilities/polybench.c

test: test.c atax.c $(WASM_RT_IMPL)
	$(CC) -I $(LIB) $^ -o $@

%.o: %.c
	$(CC) -I $(LIB) -c $^

.PHONY: clean

clean:
	rm -f *.o
