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

U32 env__strcmp(struct correlationInstance*,U32,U32);

void env__free(struct correlationInstance*,U32);

U32 env__fprintf(struct correlationInstance*,U32,U32,U32);

U32 env__polybench_alloc_data(struct correlationInstance*,U32,U32,U32);

void f4(correlationInstance*);

void f5(correlationInstance*);

void f6(correlationInstance*,U32,U32,F64,U32,U32,U32,U32);

U32 f7(correlationInstance*,U32,U32);

void f8(correlationInstance*,U32,U32,U32,U32);

void f9(correlationInstance*,U32,U32);

U32 f10(correlationInstance*,U64,U32);

void correlation____wasm_call_ctors(correlationInstance*i);

void correlation____wasm_apply_data_relocs(correlationInstance*i);

void correlation_kernel_correlation(correlationInstance*i,U32 l0,U32 l1,F64 l2,U32 l3,U32 l4,U32 l5,U32 l6);

U32 correlation_submain(correlationInstance*i,U32 l0,U32 l1);

void correlationInstantiate(correlationInstance* instance, void* resolve(const char* module, const char* name));

void correlationFreeInstance(correlationInstance* instance);

#endif /* correlation_H */

