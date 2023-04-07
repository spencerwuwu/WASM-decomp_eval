#ifndef mips_H
#define mips_H

#include "w2c2_base.h"

typedef struct mipsInstance {
wasmMemory*env__memory;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
U32*GOTX2Emem__startTimer;
U32*GOTX2Emem__main_result;
U32*GOTX2Emem__A;
U32*GOTX2Emem__imem;
U32*GOTX2Emem__outData;
U32*GOTX2Emem__endTimer;
U32 g9;
U32 g10;
U32 g11;
U32 g12;
U32 g13;
U32 g14;
} mipsInstance;

U32 env__printf(struct mipsInstance*,U32,U32);

U32 env__gettimeofday(struct mipsInstance*,U32,U32);

void f2(mipsInstance*);

void f3(mipsInstance*);

U32 f4(mipsInstance*);

F64 f5(mipsInstance*);

void mips____wasm_call_ctors(mipsInstance*i);

void mips____wasm_apply_data_relocs(mipsInstance*i);

U32 mips_submain(mipsInstance*i);

void mipsInstantiate(mipsInstance* instance, void* resolve(const char* module, const char* name));

void mipsFreeInstance(mipsInstance* instance);

#endif /* mips_H */

