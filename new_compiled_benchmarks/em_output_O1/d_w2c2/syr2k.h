#ifndef syr2k_H
#define syr2k_H

#include "w2c2_base.h"

typedef struct syr2kInstance {
wasmMemory*env__memory;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
U32*GOTX2Emem__stderr;
} syr2kInstance;

U32 env__fwrite(struct syr2kInstance*,U32,U32,U32,U32);

U32 env__fiprintf(struct syr2kInstance*,U32,U32,U32);

U32 env__fputc(struct syr2kInstance*,U32,U32);

U32 env_____small_fprintf(struct syr2kInstance*,U32,U32,U32);

void env__free(struct syr2kInstance*,U32);

U32 env__polybench_alloc_data(struct syr2kInstance*,U32,U32,U32);

void f6(syr2kInstance*);

void f7(syr2kInstance*);

U32 f8(syr2kInstance*,U32,U32);

U32 f9(syr2kInstance*,U64,U32);

void syr2k____wasm_call_ctors(syr2kInstance*i);

void syr2k____wasm_apply_data_relocs(syr2kInstance*i);

U32 syr2k_submain(syr2kInstance*i,U32 l0,U32 l1);

void syr2kInstantiate(syr2kInstance* instance, void* resolve(const char* module, const char* name));

void syr2kFreeInstance(syr2kInstance* instance);

#endif /* syr2k_H */

