#ifndef PL3mm_H
#define PL3mm_H

#include "w2c2_base.h"

typedef struct PL3mmInstance {
wasmMemory*env__memory;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*GOTX2Emem__stderr;
} PL3mmInstance;

U32 env__fwrite(struct PL3mmInstance*,U32,U32,U32,U32);

U32 env__fiprintf(struct PL3mmInstance*,U32,U32,U32);

U32 env__fputc(struct PL3mmInstance*,U32,U32);

U32 env_____small_fprintf(struct PL3mmInstance*,U32,U32,U32);

void env__free(struct PL3mmInstance*,U32);

U32 env__polybench_alloc_data(struct PL3mmInstance*,U32,U32,U32);

void f6(PL3mmInstance*);

void f7(PL3mmInstance*);

void f8(PL3mmInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f9(PL3mmInstance*,U32,U32,U32);

void f10(PL3mmInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

U32 f11(PL3mmInstance*,U32,U32);

U32 f12(PL3mmInstance*,U64,U32);

void PL3mm____wasm_call_ctors(PL3mmInstance*i);

void PL3mm____wasm_apply_data_relocs(PL3mmInstance*i);

void PL3mm_init_array(PL3mmInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6,U32 l7,U32 l8);

void PL3mm_print_array(PL3mmInstance*i,U32 l0,U32 l1,U32 l2);

void PL3mm_kernel_3mm(PL3mmInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6,U32 l7,U32 l8,U32 l9,U32 l10,U32 l11);

U32 PL3mm_submain(PL3mmInstance*i,U32 l0,U32 l1);

void PL3mmInstantiate(PL3mmInstance* instance, void* resolve(const char* module, const char* name));

void PL3mmFreeInstance(PL3mmInstance* instance);

#endif /* PL3mm_H */

