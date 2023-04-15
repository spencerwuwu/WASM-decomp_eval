#ifndef trmm_H
#define trmm_H

#include "w2c2_base.h"

typedef struct trmmInstance {
wasmMemory*env__memory;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
U32*GOTX2Emem__stderr;
} trmmInstance;

U32 env__strcmp(struct trmmInstance*,U32,U32);

void env__free(struct trmmInstance*,U32);

U32 env__fprintf(struct trmmInstance*,U32,U32,U32);

U32 env__polybench_alloc_data(struct trmmInstance*,U32,U32,U32);

void f4(trmmInstance*);

void f5(trmmInstance*);

void f6(trmmInstance*,U32,U32,F64,U32,U32);

U32 f7(trmmInstance*,U32,U32);

void f8(trmmInstance*,U32,U32,U32,U32,U32);

void f9(trmmInstance*,U32,U32,U32);

U32 f10(trmmInstance*,U64,U32);

void trmm____wasm_call_ctors(trmmInstance*i);

void trmm____wasm_apply_data_relocs(trmmInstance*i);

void trmm_kernel_trmm(trmmInstance*i,U32 l0,U32 l1,F64 l2,U32 l3,U32 l4);

U32 trmm_submain(trmmInstance*i,U32 l0,U32 l1);

void trmmInstantiate(trmmInstance* instance, void* resolve(const char* module, const char* name));

void trmmFreeInstance(trmmInstance* instance);

#endif /* trmm_H */

