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

U32 env__fwrite(struct trmmInstance*,U32,U32,U32,U32);

U32 env__fiprintf(struct trmmInstance*,U32,U32,U32);

U32 env__fputc(struct trmmInstance*,U32,U32);

U32 env_____small_fprintf(struct trmmInstance*,U32,U32,U32);

void env__free(struct trmmInstance*,U32);

U32 env__polybench_alloc_data(struct trmmInstance*,U32,U32,U32);

void f6(trmmInstance*);

void f7(trmmInstance*);

U32 f8(trmmInstance*,U32,U32);

U32 f9(trmmInstance*,U64,U32);

void trmm____wasm_call_ctors(trmmInstance*i);

void trmm____wasm_apply_data_relocs(trmmInstance*i);

U32 trmm_submain(trmmInstance*i,U32 l0,U32 l1);

void trmmInstantiate(trmmInstance* instance, void* resolve(const char* module, const char* name));

void trmmFreeInstance(trmmInstance* instance);

#endif /* trmm_H */

