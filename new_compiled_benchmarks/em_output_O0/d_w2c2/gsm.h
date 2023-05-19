#ifndef gsm_H
#define gsm_H

#include "w2c2_base.h"

typedef struct gsmInstance {
wasmMemory*env__memory;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
U32*GOTX2Emem__bitoff;
U32*GOTX2Emem__startTimer;
U32*GOTX2Emem__inData;
U32*GOTX2Emem__outData;
U32*GOTX2Emem__outLARc;
U32*GOTX2Emem__endTimer;
U32 g9;
U32 g10;
U32 g11;
U32 g12;
U32 g13;
U32 g14;
} gsmInstance;

U32 env__printf(struct gsmInstance*,U32,U32);

U32 env__gettimeofday(struct gsmInstance*,U32,U32);

void f2(gsmInstance*);

void f3(gsmInstance*);

U32 f4(gsmInstance*,U32,U32);

U32 f5(gsmInstance*,U32,U32);

U32 f6(gsmInstance*,U32,U32);

U32 f7(gsmInstance*,U32);

U32 f8(gsmInstance*,U32);

U32 f9(gsmInstance*,U32,U32);

void f10(gsmInstance*,U32,U32);

void f11(gsmInstance*,U32,U32);

void f12(gsmInstance*,U32);

void f13(gsmInstance*,U32);

void f14(gsmInstance*,U32,U32);

U32 f15(gsmInstance*);

F64 f16(gsmInstance*);

void gsm____wasm_call_ctors(gsmInstance*i);

void gsm____wasm_apply_data_relocs(gsmInstance*i);

U32 gsm_gsm_add(gsmInstance*i,U32 l0,U32 l1);

U32 gsm_gsm_mult(gsmInstance*i,U32 l0,U32 l1);

U32 gsm_gsm_mult_r(gsmInstance*i,U32 l0,U32 l1);

U32 gsm_gsm_abs(gsmInstance*i,U32 l0);

U32 gsm_gsm_norm(gsmInstance*i,U32 l0);

U32 gsm_gsm_div(gsmInstance*i,U32 l0,U32 l1);

void gsm_Autocorrelation(gsmInstance*i,U32 l0,U32 l1);

void gsm_Reflection_coefficients(gsmInstance*i,U32 l0,U32 l1);

void gsm_Transformation_to_Log_Area_Ratios(gsmInstance*i,U32 l0);

void gsm_Quantization_and_coding(gsmInstance*i,U32 l0);

void gsm_Gsm_LPC_Analysis(gsmInstance*i,U32 l0,U32 l1);

U32 gsm_submain(gsmInstance*i);

void gsmInstantiate(gsmInstance* instance, void* resolve(const char* module, const char* name));

void gsmFreeInstance(gsmInstance* instance);

#endif /* gsm_H */

