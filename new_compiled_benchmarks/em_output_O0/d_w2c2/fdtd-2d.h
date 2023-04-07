#ifndef fdtd2d_H
#define fdtd2d_H

#include "w2c2_base.h"

typedef struct fdtd2dInstance {
wasmMemory*env__memory;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
U32*GOTX2Emem__stderr;
} fdtd2dInstance;

U32 env__strcmp(struct fdtd2dInstance*,U32,U32);

void env__free(struct fdtd2dInstance*,U32);

U32 env__fprintf(struct fdtd2dInstance*,U32,U32,U32);

U32 env__polybench_alloc_data(struct fdtd2dInstance*,U32,U32,U32);

void f4(fdtd2dInstance*);

void f5(fdtd2dInstance*);

U32 f6(fdtd2dInstance*,U32,U32);

void f7(fdtd2dInstance*,U32,U32,U32,U32,U32,U32,U32);

void f8(fdtd2dInstance*,U32,U32,U32,U32,U32,U32,U32);

void f9(fdtd2dInstance*,U32,U32,U32,U32,U32);

U32 f10(fdtd2dInstance*,U64,U32);

void fdtd2d____wasm_call_ctors(fdtd2dInstance*i);

void fdtd2d____wasm_apply_data_relocs(fdtd2dInstance*i);

U32 fdtd2d_submain(fdtd2dInstance*i,U32 l0,U32 l1);

void fdtd2dInstantiate(fdtd2dInstance* instance, void* resolve(const char* module, const char* name));

void fdtd2dFreeInstance(fdtd2dInstance* instance);

#endif /* fdtd2d_H */

