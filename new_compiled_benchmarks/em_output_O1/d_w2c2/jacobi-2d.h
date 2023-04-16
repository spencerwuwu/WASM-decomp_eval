#ifndef jacobi2d_H
#define jacobi2d_H

#include "w2c2_base.h"

typedef struct jacobi2dInstance {
wasmMemory*env__memory;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
U32*GOTX2Emem__stderr;
} jacobi2dInstance;

U32 env__fwrite(struct jacobi2dInstance*,U32,U32,U32,U32);

U32 env__fiprintf(struct jacobi2dInstance*,U32,U32,U32);

U32 env__fputc(struct jacobi2dInstance*,U32,U32);

U32 env_____small_fprintf(struct jacobi2dInstance*,U32,U32,U32);

void env__free(struct jacobi2dInstance*,U32);

U32 env__polybench_alloc_data(struct jacobi2dInstance*,U32,U32,U32);

void f6(jacobi2dInstance*);

void f7(jacobi2dInstance*);

void f8(jacobi2dInstance*,U32,U32,U32,U32);

U32 f9(jacobi2dInstance*,U32,U32);

U32 f10(jacobi2dInstance*,U64,U32);

void jacobi2d____wasm_call_ctors(jacobi2dInstance*i);

void jacobi2d____wasm_apply_data_relocs(jacobi2dInstance*i);

void jacobi2d_kernel_jacobi_2d(jacobi2dInstance*i,U32 l0,U32 l1,U32 l2,U32 l3);

U32 jacobi2d_submain(jacobi2dInstance*i,U32 l0,U32 l1);

void jacobi2dInstantiate(jacobi2dInstance* instance, void* resolve(const char* module, const char* name));

void jacobi2dFreeInstance(jacobi2dInstance* instance);

#endif /* jacobi2d_H */

