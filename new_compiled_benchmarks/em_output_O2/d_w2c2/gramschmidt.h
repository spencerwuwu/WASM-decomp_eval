#ifndef gramschmidt_H
#define gramschmidt_H

#include "w2c2_base.h"

typedef struct gramschmidtInstance {
wasmMemory*env__memory;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*GOTX2Emem__stderr;
} gramschmidtInstance;

U32 env__memset(struct gramschmidtInstance*,U32,U32,U32);

U32 env__fwrite(struct gramschmidtInstance*,U32,U32,U32,U32);

U32 env__fiprintf(struct gramschmidtInstance*,U32,U32,U32);

U32 env__fputc(struct gramschmidtInstance*,U32,U32);

U32 env_____small_fprintf(struct gramschmidtInstance*,U32,U32,U32);

void env__free(struct gramschmidtInstance*,U32);

U32 env__polybench_alloc_data(struct gramschmidtInstance*,U32,U32,U32);

void f7(gramschmidtInstance*);

void f8(gramschmidtInstance*);

U32 f9(gramschmidtInstance*,U32,U32);

U32 f10(gramschmidtInstance*,U64,U32);

void gramschmidt____wasm_call_ctors(gramschmidtInstance*i);

void gramschmidt____wasm_apply_data_relocs(gramschmidtInstance*i);

U32 gramschmidt_submain(gramschmidtInstance*i,U32 l0,U32 l1);

void gramschmidtInstantiate(gramschmidtInstance* instance, void* resolve(const char* module, const char* name));

void gramschmidtFreeInstance(gramschmidtInstance* instance);

#endif /* gramschmidt_H */

