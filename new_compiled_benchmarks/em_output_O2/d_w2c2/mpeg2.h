#ifndef mpeg2_H
#define mpeg2_H

#include "w2c2_base.h"

typedef struct mpeg2Instance {
wasmMemory*env__memory;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*GOTX2Emem__inRdbfr;
U32*GOTX2Emem__ld_Rdbfr;
U32*GOTX2Emem__ld_Rdptr;
U32*GOTX2Emem__System_Stream_Flag;
U32*GOTX2Emem__ld_Rdmax;
U32*GOTX2Emem__ld_Bfr;
U32*GOTX2Emem__ld_Incnt;
U32*GOTX2Emem__MVtab0;
U32*GOTX2Emem__MVtab1;
U32*GOTX2Emem__MVtab2;
U32*GOTX2Emem__evalue;
U32*GOTX2Emem__inPMV;
U32*GOTX2Emem__startTimer;
U32*GOTX2Emem__endTimer;
U32 g16;
U32 g17;
U32 g18;
U32 g19;
U32 g20;
U32 g21;
U32 g22;
U32 g23;
U32 g24;
U32 g25;
U32 g26;
U32 g27;
U32 g28;
U32 g29;
U32 g30;
U32 g31;
U32 g32;
U32 g33;
} mpeg2Instance;

U32 env__memcpy(struct mpeg2Instance*,U32,U32,U32);

U32 env__gettimeofday(struct mpeg2Instance*,U32,U32);

U32 env__iprintf(struct mpeg2Instance*,U32,U32);

U32 env_____small_printf(struct mpeg2Instance*,U32,U32);

void f4(mpeg2Instance*);

void f5(mpeg2Instance*);

U32 f6(mpeg2Instance*,U32,U32,U32);

void f7(mpeg2Instance*);

U32 f8(mpeg2Instance*,U32);

U32 f9(mpeg2Instance*);

U32 f10(mpeg2Instance*,U32);

void f11(mpeg2Instance*,U32);

U32 f12(mpeg2Instance*);

U32 f13(mpeg2Instance*);

void f14(mpeg2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f15(mpeg2Instance*,U32,U32,U32,U32,U32,U32,U32);

void f16(mpeg2Instance*);

U32 f17(mpeg2Instance*);

void mpeg2____wasm_call_ctors(mpeg2Instance*i);

void mpeg2____wasm_apply_data_relocs(mpeg2Instance*i);

U32 mpeg2_read(mpeg2Instance*i,U32 l0,U32 l1,U32 l2);

void mpeg2_Fill_Buffer(mpeg2Instance*i);

U32 mpeg2_Show_Bits(mpeg2Instance*i,U32 l0);

U32 mpeg2_Get_Bits1(mpeg2Instance*i);

U32 mpeg2_Get_Bits(mpeg2Instance*i,U32 l0);

void mpeg2_Flush_Buffer(mpeg2Instance*i,U32 l0);

U32 mpeg2_Get_motion_code(mpeg2Instance*i);

U32 mpeg2_Get_dmvector(mpeg2Instance*i);

void mpeg2_motion_vectors(mpeg2Instance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6,U32 l7,U32 l8,U32 l9);

void mpeg2_motion_vector(mpeg2Instance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6);

void mpeg2_Initialize_Buffer(mpeg2Instance*i);

U32 mpeg2_submain(mpeg2Instance*i);

void mpeg2Instantiate(mpeg2Instance* instance, void* resolve(const char* module, const char* name));

void mpeg2FreeInstance(mpeg2Instance* instance);

#endif /* mpeg2_H */

