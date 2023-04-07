#ifndef PL2mm_H
#define PL2mm_H

#include "w2c2_base.h"

typedef struct PL2mmInstance {
wasmMemory*env__memory;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
U32*GOTX2Emem__stderr;
} PL2mmInstance;

U32 env__fwrite(struct PL2mmInstance*,U32,U32,U32,U32);

U32 env__fiprintf(struct PL2mmInstance*,U32,U32,U32);

U32 env__fputc(struct PL2mmInstance*,U32,U32);

U32 env_____small_fprintf(struct PL2mmInstance*,U32,U32,U32);

void env__free(struct PL2mmInstance*,U32);

U32 env__polybench_alloc_data(struct PL2mmInstance*,U32,U32,U32);

void f6(PL2mmInstance*);

void f7(PL2mmInstance*);

U32 f8(PL2mmInstance*,U32,U32);

U32 f9(PL2mmInstance*,U64,U32);

void PL2mm____wasm_call_ctors(PL2mmInstance*i);

void PL2mm____wasm_apply_data_relocs(PL2mmInstance*i);

U32 PL2mm_submain(PL2mmInstance*i,U32 l0,U32 l1);

void PL2mmInstantiate(PL2mmInstance* instance, void* resolve(const char* module, const char* name));

void PL2mmFreeInstance(PL2mmInstance* instance);

#endif /* PL2mm_H */

