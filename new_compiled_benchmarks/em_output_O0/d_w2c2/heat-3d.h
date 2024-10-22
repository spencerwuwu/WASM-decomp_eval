#ifndef heat3d_H
#define heat3d_H

#include "w2c2_base.h"

typedef struct heat3dInstance {
wasmMemory*env__memory;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
U32*GOTX2Emem__stderr;
} heat3dInstance;

U32 env__strcmp(struct heat3dInstance*,U32,U32);

void env__free(struct heat3dInstance*,U32);

U32 env__fprintf(struct heat3dInstance*,U32,U32,U32);

U32 env__polybench_alloc_data(struct heat3dInstance*,U32,U32,U32);

void f4(heat3dInstance*);

void f5(heat3dInstance*);

void f6(heat3dInstance*,U32,U32,U32,U32);

U32 f7(heat3dInstance*,U32,U32);

void f8(heat3dInstance*,U32,U32,U32);

void f9(heat3dInstance*,U32,U32);

U32 f10(heat3dInstance*,U64,U32);

void heat3d____wasm_call_ctors(heat3dInstance*i);

void heat3d____wasm_apply_data_relocs(heat3dInstance*i);

void heat3d_kernel_heat_3d(heat3dInstance*i,U32 l0,U32 l1,U32 l2,U32 l3);

U32 heat3d_submain(heat3dInstance*i,U32 l0,U32 l1);

void heat3dInstantiate(heat3dInstance* instance, void* resolve(const char* module, const char* name));

void heat3dFreeInstance(heat3dInstance* instance);

#endif /* heat3d_H */

