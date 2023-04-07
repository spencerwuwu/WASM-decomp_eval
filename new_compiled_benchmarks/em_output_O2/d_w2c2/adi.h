#ifndef adi_H
#define adi_H

#include "w2c2_base.h"

typedef struct adiInstance {
wasmMemory*env__memory;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*GOTX2Emem__stderr;
} adiInstance;

U32 env__fwrite(struct adiInstance*,U32,U32,U32,U32);

U32 env__fiprintf(struct adiInstance*,U32,U32,U32);

U32 env__fputc(struct adiInstance*,U32,U32);

U32 env_____small_fprintf(struct adiInstance*,U32,U32,U32);

void env__free(struct adiInstance*,U32);

U32 env__polybench_alloc_data(struct adiInstance*,U32,U32,U32);

void f6(adiInstance*);

void f7(adiInstance*);

U32 f8(adiInstance*,U32,U32);

U32 f9(adiInstance*,U64,U32);

void adi____wasm_call_ctors(adiInstance*i);

void adi____wasm_apply_data_relocs(adiInstance*i);

U32 adi_submain(adiInstance*i,U32 l0,U32 l1);

void adiInstantiate(adiInstance* instance, void* resolve(const char* module, const char* name));

void adiFreeInstance(adiInstance* instance);

#endif /* adi_H */

