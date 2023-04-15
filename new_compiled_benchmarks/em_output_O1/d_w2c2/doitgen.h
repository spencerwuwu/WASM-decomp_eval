#ifndef doitgen_H
#define doitgen_H

#include "w2c2_base.h"

typedef struct doitgenInstance {
wasmMemory*env__memory;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
U32*GOTX2Emem__stderr;
} doitgenInstance;

U32 env__fwrite(struct doitgenInstance*,U32,U32,U32,U32);

U32 env__fiprintf(struct doitgenInstance*,U32,U32,U32);

U32 env__fputc(struct doitgenInstance*,U32,U32);

U32 env_____small_fprintf(struct doitgenInstance*,U32,U32,U32);

void env__free(struct doitgenInstance*,U32);

U32 env__polybench_alloc_data(struct doitgenInstance*,U32,U32,U32);

void f6(doitgenInstance*);

void f7(doitgenInstance*);

void f8(doitgenInstance*,U32,U32,U32,U32,U32,U32);

U32 f9(doitgenInstance*,U32,U32);

U32 f10(doitgenInstance*,U64,U32);

void doitgen____wasm_call_ctors(doitgenInstance*i);

void doitgen____wasm_apply_data_relocs(doitgenInstance*i);

void doitgen_kernel_doitgen(doitgenInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5);

U32 doitgen_submain(doitgenInstance*i,U32 l0,U32 l1);

void doitgenInstantiate(doitgenInstance* instance, void* resolve(const char* module, const char* name));

void doitgenFreeInstance(doitgenInstance* instance);

#endif /* doitgen_H */

