#ifndef bicg_H
#define bicg_H

#include "w2c2_base.h"

typedef struct bicgInstance {
wasmMemory*env__memory;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
U32*GOTX2Emem__stderr;
} bicgInstance;

U32 env__strcmp(struct bicgInstance*,U32,U32);

void env__free(struct bicgInstance*,U32);

U32 env__fprintf(struct bicgInstance*,U32,U32,U32);

U32 env__polybench_alloc_data(struct bicgInstance*,U32,U32,U32);

void f4(bicgInstance*);

void f5(bicgInstance*);

void f6(bicgInstance*,U32,U32,U32,U32,U32,U32,U32);

U32 f7(bicgInstance*,U32,U32);

void f8(bicgInstance*,U32,U32,U32,U32,U32);

void f9(bicgInstance*,U32,U32,U32,U32);

U32 f10(bicgInstance*,U64,U32);

void bicg____wasm_call_ctors(bicgInstance*i);

void bicg____wasm_apply_data_relocs(bicgInstance*i);

void bicg_kernel_bicg(bicgInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6);

U32 bicg_submain(bicgInstance*i,U32 l0,U32 l1);

void bicgInstantiate(bicgInstance* instance, void* resolve(const char* module, const char* name));

void bicgFreeInstance(bicgInstance* instance);

#endif /* bicg_H */

