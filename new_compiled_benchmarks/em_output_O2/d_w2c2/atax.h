#ifndef atax_H
#define atax_H

#include "w2c2_base.h"

typedef struct ataxInstance {
wasmMemory*env__memory;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*GOTX2Emem__stderr;
} ataxInstance;

U32 env__fwrite(struct ataxInstance*,U32,U32,U32,U32);

U32 env__fiprintf(struct ataxInstance*,U32,U32,U32);

U32 env__fputc(struct ataxInstance*,U32,U32);

U32 env_____small_fprintf(struct ataxInstance*,U32,U32,U32);

U32 env__memset(struct ataxInstance*,U32,U32,U32);

void env__free(struct ataxInstance*,U32);

U32 env__polybench_alloc_data(struct ataxInstance*,U32,U32,U32);

void f7(ataxInstance*);

void f8(ataxInstance*);

void f9(ataxInstance*,U32,U32,U32,U32);

void f10(ataxInstance*,U32,U32);

void f11(ataxInstance*,U32,U32,U32,U32,U32,U32);

U32 f12(ataxInstance*,U32,U32);

U32 f13(ataxInstance*,U64,U32);

void atax____wasm_call_ctors(ataxInstance*i);

void atax____wasm_apply_data_relocs(ataxInstance*i);

void atax_init_array(ataxInstance*i,U32 l0,U32 l1,U32 l2,U32 l3);

void atax_print_array(ataxInstance*i,U32 l0,U32 l1);

void atax_kernel_atax(ataxInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5);

U32 atax_submain(ataxInstance*i,U32 l0,U32 l1);

void ataxInstantiate(ataxInstance* instance, void* resolve(const char* module, const char* name));

void ataxFreeInstance(ataxInstance* instance);

#endif /* atax_H */

