#ifndef atax_H
#define atax_H

#include "w2c2_base.h"

typedef struct ataxInstance {
wasmMemory*env__memory;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
U32*GOTX2Emem__stderr;
} ataxInstance;

U32 env__strcmp(struct ataxInstance*,U32,U32);

void env__free(struct ataxInstance*,U32);

U32 env__fprintf(struct ataxInstance*,U32,U32,U32);

U32 env__polybench_alloc_data(struct ataxInstance*,U32,U32,U32);

void f4(ataxInstance*);

void f5(ataxInstance*);

U32 f6(ataxInstance*,U32,U32);

void f7(ataxInstance*,U32,U32,U32,U32);

void f8(ataxInstance*,U32,U32,U32,U32,U32,U32);

void f9(ataxInstance*,U32,U32);

U32 f10(ataxInstance*,U64,U32);

void atax____wasm_call_ctors(ataxInstance*i);

void atax____wasm_apply_data_relocs(ataxInstance*i);

U32 atax_submain(ataxInstance*i,U32 l0,U32 l1);

void ataxInstantiate(ataxInstance* instance, void* resolve(const char* module, const char* name));

void ataxFreeInstance(ataxInstance* instance);

#endif /* atax_H */

