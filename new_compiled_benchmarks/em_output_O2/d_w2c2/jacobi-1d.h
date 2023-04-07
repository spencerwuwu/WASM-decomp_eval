#ifndef jacobi1d_H
#define jacobi1d_H

#include "w2c2_base.h"

typedef struct jacobi1dInstance {
wasmMemory*env__memory;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*GOTX2Emem__stderr;
} jacobi1dInstance;

U32 env__fwrite(struct jacobi1dInstance*,U32,U32,U32,U32);

U32 env__fiprintf(struct jacobi1dInstance*,U32,U32,U32);

U32 env__fputc(struct jacobi1dInstance*,U32,U32);

U32 env_____small_fprintf(struct jacobi1dInstance*,U32,U32,U32);

void env__free(struct jacobi1dInstance*,U32);

U32 env__polybench_alloc_data(struct jacobi1dInstance*,U32,U32,U32);

void f6(jacobi1dInstance*);

void f7(jacobi1dInstance*);

U32 f8(jacobi1dInstance*,U32,U32);

U32 f9(jacobi1dInstance*,U64,U32);

void jacobi1d____wasm_call_ctors(jacobi1dInstance*i);

void jacobi1d____wasm_apply_data_relocs(jacobi1dInstance*i);

U32 jacobi1d_submain(jacobi1dInstance*i,U32 l0,U32 l1);

void jacobi1dInstantiate(jacobi1dInstance* instance, void* resolve(const char* module, const char* name));

void jacobi1dFreeInstance(jacobi1dInstance* instance);

#endif /* jacobi1d_H */

