#ifndef seidel2d_H
#define seidel2d_H

#include "w2c2_base.h"

typedef struct seidel2dInstance {
wasmMemory*env__memory;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
U32*GOTX2Emem__stderr;
} seidel2dInstance;

U32 env__strcmp(struct seidel2dInstance*,U32,U32);

void env__free(struct seidel2dInstance*,U32);

U32 env__fprintf(struct seidel2dInstance*,U32,U32,U32);

U32 env__polybench_alloc_data(struct seidel2dInstance*,U32,U32,U32);

void f4(seidel2dInstance*);

void f5(seidel2dInstance*);

void f6(seidel2dInstance*,U32,U32,U32);

U32 f7(seidel2dInstance*,U32,U32);

void f8(seidel2dInstance*,U32,U32);

void f9(seidel2dInstance*,U32,U32);

U32 f10(seidel2dInstance*,U64,U32);

void seidel2d____wasm_call_ctors(seidel2dInstance*i);

void seidel2d____wasm_apply_data_relocs(seidel2dInstance*i);

void seidel2d_kernel_seidel_2d(seidel2dInstance*i,U32 l0,U32 l1,U32 l2);

U32 seidel2d_submain(seidel2dInstance*i,U32 l0,U32 l1);

void seidel2dInstantiate(seidel2dInstance* instance, void* resolve(const char* module, const char* name));

void seidel2dFreeInstance(seidel2dInstance* instance);

#endif /* seidel2d_H */

