#ifndef gemver_H
#define gemver_H

#include "w2c2_base.h"

typedef struct gemverInstance {
wasmMemory*env__memory;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
U32*GOTX2Emem__stderr;
} gemverInstance;

U32 env__fwrite(struct gemverInstance*,U32,U32,U32,U32);

U32 env__fiprintf(struct gemverInstance*,U32,U32,U32);

U32 env__fputc(struct gemverInstance*,U32,U32);

U32 env_____small_fprintf(struct gemverInstance*,U32,U32,U32);

void env__free(struct gemverInstance*,U32);

U32 env__polybench_alloc_data(struct gemverInstance*,U32,U32,U32);

void f6(gemverInstance*);

void f7(gemverInstance*);

void f8(gemverInstance*,U32,F64,F64,U32,U32,U32,U32,U32,U32,U32,U32,U32);

U32 f9(gemverInstance*,U32,U32);

U32 f10(gemverInstance*,U64,U32);

void gemver____wasm_call_ctors(gemverInstance*i);

void gemver____wasm_apply_data_relocs(gemverInstance*i);

void gemver_kernel_gemver(gemverInstance*i,U32 l0,F64 l1,F64 l2,U32 l3,U32 l4,U32 l5,U32 l6,U32 l7,U32 l8,U32 l9,U32 l10,U32 l11);

U32 gemver_submain(gemverInstance*i,U32 l0,U32 l1);

void gemverInstantiate(gemverInstance* instance, void* resolve(const char* module, const char* name));

void gemverFreeInstance(gemverInstance* instance);

#endif /* gemver_H */

