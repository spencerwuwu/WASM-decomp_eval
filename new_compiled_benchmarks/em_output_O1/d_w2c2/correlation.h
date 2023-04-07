#ifndef correlation_H
#define correlation_H

#include "w2c2_base.h"

typedef struct correlationInstance {
wasmMemory*env__memory;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
U32*GOTX2Emem__stderr;
} correlationInstance;

U32 env__fwrite(struct correlationInstance*,U32,U32,U32,U32);

U32 env__fiprintf(struct correlationInstance*,U32,U32,U32);

U32 env__fputc(struct correlationInstance*,U32,U32);

U32 env_____small_fprintf(struct correlationInstance*,U32,U32,U32);

void env__free(struct correlationInstance*,U32);

U32 env__polybench_alloc_data(struct correlationInstance*,U32,U32,U32);

void f6(correlationInstance*);

void f7(correlationInstance*);

U32 f8(correlationInstance*,U32,U32);

U32 f9(correlationInstance*,U64,U32);

void correlation____wasm_call_ctors(correlationInstance*i);

void correlation____wasm_apply_data_relocs(correlationInstance*i);

U32 correlation_submain(correlationInstance*i,U32 l0,U32 l1);

void correlationInstantiate(correlationInstance* instance, void* resolve(const char* module, const char* name));

void correlationFreeInstance(correlationInstance* instance);

#endif /* correlation_H */

