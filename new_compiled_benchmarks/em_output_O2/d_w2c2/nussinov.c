#include "w2c2_base.h"

#include "nussinov.h"

void f6(nussinovInstance*i) {
L0:;
}

void f7(nussinovInstance*i) {
L0:;
}

U32 f8(nussinovInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U32 l12=0;
U32 l13=0;
U32 l14=0;
U32 l15=0;
U32 l16=0;
U32 l17=0;
U32 l18=0;
U32 l19=0;
U32 l20=0;
U32 l21=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0;
si0=(*i->env_____stack_pointer);
si1=48U;
si0-=si1;
l9=si0;
(*i->env_____stack_pointer)=si0;
sj0=2500ULL;
si1=1U;
si0=f9(i,sj0,si1);
l10=si0;
sj0=6250000ULL;
si1=4U;
si0=f9(i,sj0,si1);
l11=si0;
L1:;
{
si0=l2;
si1=l10;
si0+=si1;
l4=si0;
si1=l2;
si2=5U;
si1+=si2;
l3=si1;
si2=3U;
si1&=si2;
i32_store8(i->env__memory,(U64)si0+4U,si1);
si0=l10;
si1=l2;
si2=3U;
si1+=si2;
l5=si1;
si0+=si1;
si1=l2;
si2=3U;
si1&=si2;
i32_store8(i->env__memory,(U64)si0,si1);
si0=l10;
si1=l2;
si2=2U;
si1+=si2;
l7=si1;
si0+=si1;
si1=l5;
si2=3U;
si1&=si2;
i32_store8(i->env__memory,(U64)si0,si1);
si0=l10;
si1=l2;
si2=1U;
si1+=si2;
l2=si1;
si0+=si1;
si1=l7;
si2=3U;
si1&=si2;
i32_store8(i->env__memory,(U64)si0,si1);
si0=l4;
si1=l2;
si2=3U;
si1&=si2;
i32_store8(i->env__memory,(U64)si0,si1);
si0=l3;
l2=si0;
si1=2500U;
si0=si0 != si1;
if(si0){
goto L1;
}
}
si0=l11;
si1=0U;
si2=25000000U;
si0=env__memset(i,si0,si1,si2);
l13=si0;
si0=2499U;
l2=si0;
L2:;
{
si0=l2;
l8=si0;
si1=2498U;
si0=si0 <= si1;
if(si0){
si0=l13;
si1=l8;
si2=10000U;
si1*=si2;
si0+=si1;
l16=si0;
si1=l8;
si2=1U;
si1+=si2;
l14=si1;
si2=2U;
si1<<=(si2&31);
si0+=si1;
l19=si0;
si0=l13;
si1=l14;
si2=10000U;
si1*=si2;
si0+=si1;
l20=si0;
si1=l8;
si2=2U;
si1<<=(si2&31);
l2=si1;
si0+=si1;
si0=i32_load(i->env__memory,(U64)si0);
l17=si0;
si0=l2;
si1=l16;
si0+=si1;
si0=i32_load(i->env__memory,(U64)si0);
l3=si0;
si0=l8;
si1=2U;
si0+=si1;
l18=si0;
si0=l8;
si1=l10;
si0+=si1;
l21=si0;
si0=0U;
l15=si0;
si0=l14;
l6=si0;
L4:;
{
si0=l17;
l2=si0;
si0=l16;
si1=l6;
si2=2U;
si1<<=(si2&31);
l12=si1;
si0+=si1;
l4=si0;
si1=l4;
si1=i32_load(i->env__memory,(U64)si1);
l5=si1;
si2=l3;
si3=l3;
si4=l5;
si3=(U32)((I32)si3<(I32)si4);
si1=si3?si1:si2;
l3=si1;
si2=l12;
si3=l20;
si2+=si3;
si2=i32_load(i->env__memory,(U64)si2);
l17=si2;
si3=l3;
si4=l17;
si3=(U32)((I32)si3>(I32)si4);
si1=si3?si1:si2;
l3=si1;
i32_store(i->env__memory,(U64)si0,si1);
si0=l6;
si1=1U;
si0-=si1;
si1=l8;
si0=si0 > si1;
if(si0){
si0=l2;
si1=l6;
si2=l10;
si1+=si2;
si1=i32_load8_s(i->env__memory,(U64)si1);
si2=l21;
si2=i32_load8_s(i->env__memory,(U64)si2);
si1+=si2;
si2=3U;
si1=si1 == si2;
si0+=si1;
l2=si0;
}
L5:;
si0=l4;
si1=l3;
si2=l2;
si3=l2;
si4=l3;
si3=(U32)((I32)si3<(I32)si4);
si1=si3?si1:si2;
l3=si1;
i32_store(i->env__memory,(U64)si0,si1);
si0=l6;
si1=l14;
si0=si0 <= si1;
if(si0){
goto L6;
}
si0=l15;
si1=1U;
si0&=si1;
if(si0){
si0=l4;
si1=l3;
si2=l13;
si3=l18;
si4=10000U;
si3*=si4;
si2+=si3;
si3=l12;
si2+=si3;
si2=i32_load(i->env__memory,(U64)si2);
si3=l19;
si3=i32_load(i->env__memory,(U64)si3);
si2+=si3;
l2=si2;
si3=l2;
si4=l3;
si3=(U32)((I32)si3<(I32)si4);
si1=si3?si1:si2;
l3=si1;
i32_store(i->env__memory,(U64)si0,si1);
si0=l18;
}else{
si0=l14;
}
L7:;
l2=si0;
si0=l15;
si1=1U;
si0=si0 == si1;
if(si0){
goto L6;
}
L8:;
{
si0=l4;
si1=l3;
si2=l2;
si3=10000U;
si2*=si3;
si3=l13;
si2+=si3;
si3=l12;
si2+=si3;
l5=si2;
si3=10000U;
si2+=si3;
si2=i32_load(i->env__memory,(U64)si2);
si3=l16;
si4=l2;
si5=2U;
si4<<=(si5&31);
si3+=si4;
l7=si3;
si3=i32_load(i->env__memory,(U64)si3);
si2+=si3;
l11=si2;
si3=l3;
si4=l11;
si3=(U32)((I32)si3>(I32)si4);
si1=si3?si1:si2;
l3=si1;
i32_store(i->env__memory,(U64)si0,si1);
si0=l4;
si1=l3;
si2=l5;
si3=20000U;
si2+=si3;
si2=i32_load(i->env__memory,(U64)si2);
si3=l7;
si3=i32_load(i->env__memory,(U64)si3+4U);
si2+=si3;
l5=si2;
si3=l3;
si4=l5;
si3=(U32)((I32)si3>(I32)si4);
si1=si3?si1:si2;
l3=si1;
i32_store(i->env__memory,(U64)si0,si1);
si0=l2;
si1=2U;
si0+=si1;
l2=si0;
si1=l6;
si0=si0 != si1;
if(si0){
goto L8;
}
}
L6:;
si0=l15;
si1=1U;
si0+=si1;
l15=si0;
si0=l6;
si1=1U;
si0+=si1;
l6=si0;
si1=2500U;
si0=si0 != si1;
if(si0){
goto L4;
}
}
}
L3:;
si0=l8;
si1=1U;
si0-=si1;
l2=si0;
si0=l8;
if(si0){
goto L2;
}
}
si0=l0;
si1=43U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L9;
}
si0=l1;
si0=i32_load(i->env__memory,(U64)si0);
si0=i32_load8_u(i->env__memory,(U64)si0);
if(si0){
goto L9;
}
si0=(*i->env_____memory_base);
l2=si0;
si1=42U;
si0+=si1;
si1=22U;
si2=1U;
si3=(*i->GOTX2Emem__stderr);
si3=i32_load(i->env__memory,(U64)si3);
l7=si3;
si0=env__fwrite(i,si0,si1,si2,si3);
si0=l9;
si1=l2;
si2=15U;
si1+=si2;
i32_store(i->env__memory,(U64)si0+32U,si1);
si0=l7;
si1=l2;
si2=l9;
si3=32U;
si2+=si3;
si0=env__fiprintf(i,si0,si1,si2);
si0=0U;
l11=si0;
si0=2499U;
l6=si0;
si0=2500U;
l5=si0;
si0=2500U;
l12=si0;
si0=0U;
l4=si0;
L10:;
{
si0=l11;
l2=si0;
si0=l4;
l3=si0;
L11:;
{
si0=l2;
si1=20U;
si0=I32_REM_S(si0,si1);
si0=!(si0);
if(si0){
si0=10U;
si1=l7;
si0=env__fputc(i,si0,si1);
}
L12:;
si0=l9;
si1=l13;
si2=l4;
si3=10000U;
si2*=si3;
si1+=si2;
si2=l3;
si3=2U;
si2<<=(si3&31);
si1+=si2;
si1=i32_load(i->env__memory,(U64)si1);
i32_store(i->env__memory,(U64)si0+16U,si1);
si0=l7;
si1=(*i->env_____memory_base);
si2=21U;
si1+=si2;
si2=l9;
si3=16U;
si2+=si3;
si0=env__fiprintf(i,si0,si1,si2);
si0=l3;
si1=1U;
si0+=si1;
l3=si0;
si0=l2;
si1=1U;
si0+=si1;
l2=si0;
si1=l5;
si0=si0 != si1;
if(si0){
goto L11;
}
}
si0=l5;
si1=l6;
si0+=si1;
l5=si0;
si0=l6;
si1=1U;
si0-=si1;
l6=si0;
si0=l11;
si1=l12;
si0+=si1;
l11=si0;
si0=l12;
si1=1U;
si0-=si1;
l12=si0;
si0=l4;
si1=1U;
si0+=si1;
l4=si0;
si1=2500U;
si0=si0 != si1;
if(si0){
goto L10;
}
}
si0=l9;
si1=(*i->env_____memory_base);
l2=si1;
si2=15U;
si1+=si2;
i32_store(i->env__memory,(U64)si0,si1);
si0=l7;
si1=l2;
si2=25U;
si1+=si2;
si2=l9;
si0=env__fiprintf(i,si0,si1,si2);
si0=l2;
si1=65U;
si0+=si1;
si1=22U;
si2=1U;
si3=l7;
si0=env__fwrite(i,si0,si1,si2,si3);
L9:;
si0=l10;
env__free(i,si0);
si0=l13;
env__free(i,si0);
si0=l9;
si1=48U;
si0+=si1;
(*i->env_____stack_pointer)=si0;
si0=0U;
L0:;
return si0;
}

U32 f9(nussinovInstance*i,U64 l0,U32 l1) {
U32 si0,si1,si2;
U64 sj0,sj1,sj2;
sj0=l0;
si0=(U32)(sj0);
sj1=l0;
sj2=32ULL;
sj1>>=(sj2&63);
si1=(U32)(sj1);
si2=l1;
si0=env__polybench_alloc_data(i,si0,si1,si2);
L0:;
return si0;
}

const U8 d0[]={
0x62,0x65,0x67,0x69,0x6e,0x20,0x64,0x75,0x6d,0x70,0x3a,0x20,0x25,0x73,0x0,0x74,0x61,0x62,0x6c,0x65,0x0,0x25,0x64,0x20,0x0,0xa,0x65,0x6e,0x64,0x20,0x20,0x20,0x64,0x75,0x6d,0x70,0x3a,0x20,0x25,0x73,0xa,0x0,0x3d,0x3d,0x42,0x45,0x47,0x49,0x4e,0x20,0x44,0x55,0x4d,0x50,0x5f,0x41,0x52,0x52,0x41,0x59,0x53,0x3d,0x3d,0xa,0x0,0x3d,0x3d,0x45,0x4e,0x44,0x20,0x20,0x20,0x44,0x55,0x4d,0x50,0x5f,0x41,0x52,0x52,0x41,0x59,0x53,0x3d,0x3d,0xa,0x0,
};

static void nussinovInitImports(nussinovInstance* i, void* resolve(const char* module, const char* name)) {
if (resolve == NULL) { return; }
i->env__memory=(wasmMemory*)resolve("env", "memory");
i->env_____stack_pointer=(U32*)resolve("env", "__stack_pointer");
i->env_____memory_base=(U32*)resolve("env", "__memory_base");
i->GOTX2Emem__stderr=(U32*)resolve("GOT.mem", "stderr");
}

void nussinov____wasm_call_ctors(nussinovInstance*i){
f6(i);
}

void nussinov____wasm_apply_data_relocs(nussinovInstance*i){
f7(i);
}

U32 nussinov_submain(nussinovInstance*i,U32 l0,U32 l1){
return f8(i,l0,l1);
}

void nussinovInstantiate(nussinovInstance* i, void* resolve(const char* module, const char* name)) {
nussinovInitImports(i, resolve);
}

void nussinovFreeInstance(nussinovInstance* i) {
}

