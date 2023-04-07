#ifndef symm_H
#define symm_H

#include "w2c2_base.h"

typedef struct symmInstance {
wasmMemory*env__memory;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
U32*GOTX2Emem__stderr;
} symmInstance;

U32 env__strcmp(struct symmInstance*,U32,U32);

void env__free(struct symmInstance*,U32);

U32 env__fprintf(struct symmInstance*,U32,U32,U32);

U32 env__polybench_alloc_data(struct symmInstance*,U32,U32,U32);

void f4(symmInstance*);

void f5(symmInstance*);

U32 f6(symmInstance*,U32,U32);

void f7(symmInstance*,U32,U32,U32,U32,U32,U32,U32);

void f8(symmInstance*,U32,U32,F64,F64,U32,U32,U32);

void f9(symmInstance*,U32,U32,U32);

U32 f10(symmInstance*,U64,U32);

void symm____wasm_call_ctors(symmInstance*i);

void symm____wasm_apply_data_relocs(symmInstance*i);

U32 symm_submain(symmInstance*i,U32 l0,U32 l1);

void symmInstantiate(symmInstance* instance, void* resolve(const char* module, const char* name));

void symmFreeInstance(symmInstance* instance);

#endif /* symm_H */

