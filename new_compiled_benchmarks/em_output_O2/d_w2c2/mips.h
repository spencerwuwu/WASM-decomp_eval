#ifndef mips_H
#define mips_H

#include "w2c2_base.h"

typedef struct mipsInstance {
wasmMemory*env__memory;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*GOTX2Emem__startTimer;
U32*GOTX2Emem__A;
U32*GOTX2Emem__imem;
U32*GOTX2Emem__main_result;
U32*GOTX2Emem__endTimer;
U32 g7;
U32 g8;
U32 g9;
U32 g10;
U32 g11;
U32 g12;
} mipsInstance;

U32 env__gettimeofday(struct mipsInstance*,U32,U32);

U32 env__iprintf(struct mipsInstance*,U32,U32);

U32 env__memset(struct mipsInstance*,U32,U32,U32);

U32 env__memcpy(struct mipsInstance*,U32,U32,U32);

U32 env_____small_printf(struct mipsInstance*,U32,U32);

void f5(mipsInstance*);

void f6(mipsInstance*);

U32 f7(mipsInstance*);

void mips____wasm_call_ctors(mipsInstance*i);

void mips____wasm_apply_data_relocs(mipsInstance*i);

U32 mips_submain(mipsInstance*i);

void mipsInstantiate(mipsInstance* instance, void* resolve(const char* module, const char* name));

void mipsFreeInstance(mipsInstance* instance);

#endif /* mips_H */

