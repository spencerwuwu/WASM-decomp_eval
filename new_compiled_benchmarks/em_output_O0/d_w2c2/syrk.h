#ifndef syrk_H
#define syrk_H

#include "w2c2_base.h"

typedef struct syrkInstance {
wasmMemory*env__memory;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
U32*GOTX2Emem__stderr;
} syrkInstance;

U32 env__strcmp(struct syrkInstance*,U32,U32);

void env__free(struct syrkInstance*,U32);

U32 env__fprintf(struct syrkInstance*,U32,U32,U32);

U32 env__polybench_alloc_data(struct syrkInstance*,U32,U32,U32);

void f4(syrkInstance*);

void f5(syrkInstance*);

U32 f6(syrkInstance*,U32,U32);

void f7(syrkInstance*,U32,U32,U32,U32,U32,U32);

void f8(syrkInstance*,U32,U32,F64,F64,U32,U32);

void f9(syrkInstance*,U32,U32);

U32 f10(syrkInstance*,U64,U32);

void syrk____wasm_call_ctors(syrkInstance*i);

void syrk____wasm_apply_data_relocs(syrkInstance*i);

U32 syrk_submain(syrkInstance*i,U32 l0,U32 l1);

void syrkInstantiate(syrkInstance* instance, void* resolve(const char* module, const char* name));

void syrkFreeInstance(syrkInstance* instance);

#endif /* syrk_H */

