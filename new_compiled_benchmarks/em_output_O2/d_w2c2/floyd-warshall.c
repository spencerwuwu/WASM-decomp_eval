#include "w2c2_base.h"

#include "floyd-warshall.h"

void f5(floydwarshallInstance*i) {
L0:;
}

void f6(floydwarshallInstance*i) {
L0:;
}

void f7(floydwarshallInstance*i,U32 l0,U32 l1) {
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
U32 si0,si1,si2,si3,si4;
si0=l0;
si1=0U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
si0=l0;
si1=-2U;
si0&=si1;
l10=si0;
si0=l0;
si1=1U;
si0&=si1;
l11=si0;
L2:;
{
si0=0U;
l6=si0;
L3:;
{
si0=l1;
si1=l6;
si2=11200U;
si1*=si2;
si0+=si1;
l7=si0;
si1=l5;
si2=2U;
si1<<=(si2&31);
si0+=si1;
l8=si0;
si0=0U;
l3=si0;
si0=0U;
l9=si0;
si0=l0;
si1=1U;
si0=si0 != si1;
if(si0){
L5:;
{
si0=l7;
si1=l3;
si2=2U;
si1<<=(si2&31);
l2=si1;
si0+=si1;
l4=si0;
si1=l4;
si1=i32_load(i->env__memory,(U64)si1);
l4=si1;
si2=l1;
si3=l5;
si4=11200U;
si3*=si4;
si2+=si3;
l12=si2;
si3=l2;
si2+=si3;
si2=i32_load(i->env__memory,(U64)si2);
si3=l8;
si3=i32_load(i->env__memory,(U64)si3);
si2+=si3;
l13=si2;
si3=l4;
si4=l13;
si3=(U32)((I32)si3<(I32)si4);
si1=si3?si1:si2;
i32_store(i->env__memory,(U64)si0,si1);
si0=l7;
si1=l2;
si2=4U;
si1|=si2;
l2=si1;
si0+=si1;
l4=si0;
si1=l4;
si1=i32_load(i->env__memory,(U64)si1);
l4=si1;
si2=l2;
si3=l12;
si2+=si3;
si2=i32_load(i->env__memory,(U64)si2);
si3=l8;
si3=i32_load(i->env__memory,(U64)si3);
si2+=si3;
l2=si2;
si3=l2;
si4=l4;
si3=(U32)((I32)si3>(I32)si4);
si1=si3?si1:si2;
i32_store(i->env__memory,(U64)si0,si1);
si0=l3;
si1=2U;
si0+=si1;
l3=si0;
si0=l9;
si1=2U;
si0+=si1;
l9=si0;
si1=l10;
si0=si0 != si1;
if(si0){
goto L5;
}
}
}
L4:;
si0=l11;
if(si0){
si0=l7;
si1=l3;
si2=2U;
si1<<=(si2&31);
l3=si1;
si0+=si1;
l2=si0;
si1=l2;
si1=i32_load(i->env__memory,(U64)si1);
l2=si1;
si2=l1;
si3=l5;
si4=11200U;
si3*=si4;
si2+=si3;
si3=l3;
si2+=si3;
si2=i32_load(i->env__memory,(U64)si2);
si3=l8;
si3=i32_load(i->env__memory,(U64)si3);
si2+=si3;
l3=si2;
si3=l2;
si4=l3;
si3=(U32)((I32)si3<(I32)si4);
si1=si3?si1:si2;
i32_store(i->env__memory,(U64)si0,si1);
}
L6:;
si0=l6;
si1=1U;
si0+=si1;
l6=si0;
si1=l0;
si0=si0 != si1;
if(si0){
goto L3;
}
}
si0=l5;
si1=1U;
si0+=si1;
l5=si0;
si1=l0;
si0=si0 != si1;
if(si0){
goto L2;
}
}
}
L1:;
L0:;
}

U32 f8(floydwarshallInstance*i,U32 l0,U32 l1) {
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
U32 si0,si1,si2,si3,si4;
U64 sj0;
si0=(*i->env_____stack_pointer);
si1=48U;
si0-=si1;
l5=si0;
(*i->env_____stack_pointer)=si0;
sj0=7840000ULL;
si1=4U;
si0=f9(i,sj0,si1);
l7=si0;
L1:;
{
si0=0U;
l2=si0;
L2:;
{
si0=l7;
si1=l3;
si2=11200U;
si1*=si2;
si0+=si1;
si1=l2;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l2;
si2=l3;
si1*=si2;
si2=7U;
si1=REM_U(si1,si2);
si2=1U;
si1+=si2;
si2=999U;
si3=l2;
si4=l3;
si3+=si4;
l4=si3;
si4=11U;
si3=REM_U(si3,si4);
si1=si3?si1:si2;
si2=999U;
si3=l4;
si4=7U;
si3=REM_U(si3,si4);
si1=si3?si1:si2;
si2=999U;
si3=l4;
si4=13U;
si3=REM_U(si3,si4);
si1=si3?si1:si2;
i32_store(i->env__memory,(U64)si0,si1);
si0=l2;
si1=1U;
si0+=si1;
l2=si0;
si1=2800U;
si0=si0 != si1;
if(si0){
goto L2;
}
}
si0=l3;
si1=1U;
si0+=si1;
l3=si0;
si1=2800U;
si0=si0 != si1;
if(si0){
goto L1;
}
}
L3:;
{
si0=0U;
l10=si0;
L4:;
{
si0=l7;
si1=l10;
si2=11200U;
si1*=si2;
si0+=si1;
l4=si0;
si1=l8;
si2=2U;
si1<<=(si2&31);
si0+=si1;
l9=si0;
si0=0U;
l2=si0;
L5:;
{
si0=l4;
si1=l2;
si2=2U;
si1<<=(si2&31);
l3=si1;
si0+=si1;
l6=si0;
si1=l6;
si1=i32_load(i->env__memory,(U64)si1);
l6=si1;
si2=l7;
si3=l8;
si4=11200U;
si3*=si4;
si2+=si3;
l11=si2;
si3=l3;
si2+=si3;
si2=i32_load(i->env__memory,(U64)si2);
si3=l9;
si3=i32_load(i->env__memory,(U64)si3);
si2+=si3;
l12=si2;
si3=l6;
si4=l12;
si3=(U32)((I32)si3<(I32)si4);
si1=si3?si1:si2;
i32_store(i->env__memory,(U64)si0,si1);
si0=l4;
si1=l3;
si2=4U;
si1|=si2;
l3=si1;
si0+=si1;
l6=si0;
si1=l6;
si1=i32_load(i->env__memory,(U64)si1);
l6=si1;
si2=l3;
si3=l11;
si2+=si3;
si2=i32_load(i->env__memory,(U64)si2);
si3=l9;
si3=i32_load(i->env__memory,(U64)si3);
si2+=si3;
l3=si2;
si3=l3;
si4=l6;
si3=(U32)((I32)si3>(I32)si4);
si1=si3?si1:si2;
i32_store(i->env__memory,(U64)si0,si1);
si0=l2;
si1=2U;
si0+=si1;
l2=si0;
si1=2800U;
si0=si0 != si1;
if(si0){
goto L5;
}
}
si0=l10;
si1=1U;
si0+=si1;
l10=si0;
si1=2800U;
si0=si0 != si1;
if(si0){
goto L4;
}
}
si0=l8;
si1=1U;
si0+=si1;
l8=si0;
si1=2800U;
si0=si0 != si1;
if(si0){
goto L3;
}
}
si0=l0;
si1=43U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L6;
}
si0=l1;
si0=i32_load(i->env__memory,(U64)si0);
si0=i32_load8_u(i->env__memory,(U64)si0);
if(si0){
goto L6;
}
si0=(*i->env_____memory_base);
l2=si0;
si1=41U;
si0+=si1;
si1=22U;
si2=1U;
si3=(*i->GOTX2Emem__stderr);
si3=i32_load(i->env__memory,(U64)si3);
l4=si3;
si0=env__fwrite(i,si0,si1,si2,si3);
si0=l5;
si1=l2;
si2=15U;
si1+=si2;
i32_store(i->env__memory,(U64)si0+32U,si1);
si0=l4;
si1=l2;
si2=l5;
si3=32U;
si2+=si3;
si0=env__fiprintf(i,si0,si1,si2);
si0=0U;
l3=si0;
L7:;
{
si0=l3;
si1=2800U;
si0*=si1;
l9=si0;
si0=0U;
l2=si0;
L8:;
{
si0=l2;
si1=l9;
si0+=si1;
si1=20U;
si0=REM_U(si0,si1);
si0=!(si0);
if(si0){
si0=10U;
si1=l4;
si0=env__fputc(i,si0,si1);
}
L9:;
si0=l5;
si1=l7;
si2=l3;
si3=11200U;
si2*=si3;
si1+=si2;
si2=l2;
si3=2U;
si2<<=(si3&31);
si1+=si2;
si1=i32_load(i->env__memory,(U64)si1);
i32_store(i->env__memory,(U64)si0+16U,si1);
si0=l4;
si1=(*i->env_____memory_base);
si2=20U;
si1+=si2;
si2=l5;
si3=16U;
si2+=si3;
si0=env__fiprintf(i,si0,si1,si2);
si0=l2;
si1=1U;
si0+=si1;
l2=si0;
si1=2800U;
si0=si0 != si1;
if(si0){
goto L8;
}
}
si0=l3;
si1=1U;
si0+=si1;
l3=si0;
si1=2800U;
si0=si0 != si1;
if(si0){
goto L7;
}
}
si0=l5;
si1=(*i->env_____memory_base);
l2=si1;
si2=15U;
si1+=si2;
i32_store(i->env__memory,(U64)si0,si1);
si0=l4;
si1=l2;
si2=24U;
si1+=si2;
si2=l5;
si0=env__fiprintf(i,si0,si1,si2);
si0=l2;
si1=-64U;
si0-=si1;
si1=22U;
si2=1U;
si3=l4;
si0=env__fwrite(i,si0,si1,si2,si3);
L6:;
si0=l7;
env__free(i,si0);
si0=l5;
si1=48U;
si0+=si1;
(*i->env_____stack_pointer)=si0;
si0=0U;
L0:;
return si0;
}

U32 f9(floydwarshallInstance*i,U64 l0,U32 l1) {
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
0x62,0x65,0x67,0x69,0x6e,0x20,0x64,0x75,0x6d,0x70,0x3a,0x20,0x25,0x73,0x0,0x70,0x61,0x74,0x68,0x0,0x25,0x64,0x20,0x0,0xa,0x65,0x6e,0x64,0x20,0x20,0x20,0x64,0x75,0x6d,0x70,0x3a,0x20,0x25,0x73,0xa,0x0,0x3d,0x3d,0x42,0x45,0x47,0x49,0x4e,0x20,0x44,0x55,0x4d,0x50,0x5f,0x41,0x52,0x52,0x41,0x59,0x53,0x3d,0x3d,0xa,0x0,0x3d,0x3d,0x45,0x4e,0x44,0x20,0x20,0x20,0x44,0x55,0x4d,0x50,0x5f,0x41,0x52,0x52,0x41,0x59,0x53,0x3d,0x3d,0xa,0x0,
};

static void floydwarshallInitImports(floydwarshallInstance* i, void* resolve(const char* module, const char* name)) {
if (resolve == NULL) { return; }
i->env__memory=(wasmMemory*)resolve("env", "memory");
i->env_____stack_pointer=(U32*)resolve("env", "__stack_pointer");
i->env_____memory_base=(U32*)resolve("env", "__memory_base");
i->GOTX2Emem__stderr=(U32*)resolve("GOT.mem", "stderr");
}

void floydwarshall____wasm_call_ctors(floydwarshallInstance*i){
f5(i);
}

void floydwarshall____wasm_apply_data_relocs(floydwarshallInstance*i){
f6(i);
}

void floydwarshall_kernel_floyd_warshall(floydwarshallInstance*i,U32 l0,U32 l1){
f7(i,l0,l1);
}

U32 floydwarshall_submain(floydwarshallInstance*i,U32 l0,U32 l1){
return f8(i,l0,l1);
}

void floydwarshallInstantiate(floydwarshallInstance* i, void* resolve(const char* module, const char* name)) {
floydwarshallInitImports(i, resolve);
}

void floydwarshallFreeInstance(floydwarshallInstance* i) {
}

