#ifndef CH2mm_H
#define CH2mm_H

#include "w2c2_base.h"

typedef struct CH2mmInstance {
wasmMemory*env__memory;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
U32*GOTX2Emem__stderr;
} CH2mmInstance;

U32 env__strcmp(struct CH2mmInstance*,U32,U32);

void env__free(struct CH2mmInstance*,U32);

U32 env__fprintf(struct CH2mmInstance*,U32,U32,U32);

U32 env__polybench_alloc_data(struct CH2mmInstance*,U32,U32,U32);

void f4(CH2mmInstance*);

void f5(CH2mmInstance*);

U32 f6(CH2mmInstance*,U32,U32);

void f7(CH2mmInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f8(CH2mmInstance*,U32,U32,U32,U32,F64,F64,U32,U32,U32,U32,U32);

void f9(CH2mmInstance*,U32,U32,U32);

U32 f10(CH2mmInstance*,U64,U32);

void CH2mm____wasm_call_ctors(CH2mmInstance*i);

void CH2mm____wasm_apply_data_relocs(CH2mmInstance*i);

U32 CH2mm_submain(CH2mmInstance*i,U32 l0,U32 l1);

void CH2mmInstantiate(CH2mmInstance* instance, void* resolve(const char* module, const char* name));

void CH2mmFreeInstance(CH2mmInstance* instance);

#endif /* CH2mm_H */

