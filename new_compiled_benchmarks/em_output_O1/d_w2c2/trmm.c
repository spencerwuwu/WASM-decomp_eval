#include "w2c2_base.h"

#include "trmm.h"

void f6(trmmInstance*i) {
L0:;
}

void f7(trmmInstance*i) {
L0:;
}

U32 f8(trmmInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
F64 l11=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1;
F64 sd0,sd1,sd2;
si0=(*i->env_____stack_pointer);
si1=48U;
si0-=si1;
l2=si0;
(*i->env_____stack_pointer)=si0;
sj0=1000000ULL;
si1=8U;
si0=f9(i,sj0,si1);
l3=si0;
sj0=1200000ULL;
si1=8U;
si0=f9(i,sj0,si1);
l4=si0;
si0=0U;
l5=si0;
L1:;
{
si0=0U;
l6=si0;
si0=l5;
l5=si0;
si0=!(si0);
if(si0){
goto L2;
}
L3:;
{
si0=l3;
si1=l5;
si2=8000U;
si1*=si2;
si0+=si1;
si1=l6;
l6=si1;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si1=l6;
si2=l5;
si1+=si2;
si2=1000U;
si1=REM_U(si1,si2);
sd1=(F64)(I32)(si1);
sd2=1000;
sd1/=sd2;
f64_store(i->env__memory,(U64)si0,sd1);
si0=l6;
si1=1U;
si0+=si1;
l7=si0;
l6=si0;
si0=l7;
si1=l5;
si0=si0 != si1;
if(si0){
goto L3;
}
}
L2:;
si0=l3;
si1=l5;
si2=8000U;
si1*=si2;
si0+=si1;
si1=l5;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj1=4607182418800017408ULL;
i64_store(i->env__memory,(U64)si0,sj1);
si0=l5;
si1=1200U;
si0+=si1;
l8=si0;
si0=0U;
l6=si0;
L4:;
{
si0=l4;
si1=l5;
si2=9600U;
si1*=si2;
si0+=si1;
si1=l6;
l6=si1;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si1=l8;
si2=l6;
si1-=si2;
si2=1200U;
si1=REM_U(si1,si2);
sd1=(F64)(I32)(si1);
sd2=1200;
sd1/=sd2;
f64_store(i->env__memory,(U64)si0,sd1);
si0=l6;
si1=1U;
si0+=si1;
l7=si0;
l6=si0;
si0=l7;
si1=1200U;
si0=si0 != si1;
if(si0){
goto L4;
}
}
si0=l5;
si1=1U;
si0+=si1;
l6=si0;
l5=si0;
si0=l6;
si1=1000U;
si0=si0 != si1;
if(si0){
goto L1;
}
}
si0=0U;
l5=si0;
L5:;
{
si0=l5;
l7=si0;
si0=0U;
l5=si0;
L6:;
{
si0=l5;
l9=si0;
si0=l7;
si1=998U;
si0=si0 > si1;
if(si0){
goto L7;
}
si0=l4;
si1=l7;
si2=9600U;
si1*=si2;
si0+=si1;
si1=l9;
si2=3U;
si1<<=(si2&31);
l8=si1;
si0+=si1;
l10=si0;
sd0=f64_load(i->env__memory,(U64)si0);
l11=sd0;
si0=l7;
l6=si0;
L8:;
{
si0=l10;
si1=l3;
si2=l6;
si3=1U;
si2+=si3;
l5=si2;
si3=8000U;
si2*=si3;
si1+=si2;
si2=l7;
si3=3U;
si2<<=(si3&31);
si1+=si2;
sd1=f64_load(i->env__memory,(U64)si1);
si2=l4;
si3=l5;
si4=9600U;
si3*=si4;
si2+=si3;
si3=l8;
si2+=si3;
sd2=f64_load(i->env__memory,(U64)si2);
sd1*=sd2;
sd2=l11;
sd1+=sd2;
l11=sd1;
f64_store(i->env__memory,(U64)si0,sd1);
sd0=l11;
l11=sd0;
si0=l5;
l6=si0;
si0=l5;
si1=999U;
si0=si0 != si1;
if(si0){
goto L8;
}
}
L7:;
si0=l4;
si1=l7;
si2=9600U;
si1*=si2;
si0+=si1;
si1=l9;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l5=si0;
si1=l5;
sd1=f64_load(i->env__memory,(U64)si1);
sd2=1.5;
sd1*=sd2;
f64_store(i->env__memory,(U64)si0,sd1);
si0=l9;
si1=1U;
si0+=si1;
l6=si0;
l5=si0;
si0=l6;
si1=1200U;
si0=si0 != si1;
if(si0){
goto L6;
}
}
si0=l7;
si1=1U;
si0+=si1;
l6=si0;
l5=si0;
si0=l6;
si1=1000U;
si0=si0 != si1;
if(si0){
goto L5;
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
l5=si0;
si1=42U;
si0+=si1;
si1=22U;
si2=1U;
si3=(*i->GOTX2Emem__stderr);
si3=i32_load(i->env__memory,(U64)si3);
l8=si3;
si0=env__fwrite(i,si0,si1,si2,si3);
si0=l2;
si1=l5;
si2=15U;
si1+=si2;
i32_store(i->env__memory,(U64)si0+32U,si1);
si0=l8;
si1=l5;
si2=0U;
si1+=si2;
si2=l2;
si3=32U;
si2+=si3;
si0=env__fiprintf(i,si0,si1,si2);
si0=0U;
l5=si0;
L10:;
{
si0=l5;
l7=si0;
si1=1000U;
si0*=si1;
l10=si0;
si0=0U;
l5=si0;
L11:;
{
si0=l5;
l5=si0;
si1=l10;
si0+=si1;
si1=20U;
si0=REM_U(si0,si1);
if(si0){
goto L12;
}
si0=10U;
si1=l8;
si0=env__fputc(i,si0,si1);
L12:;
si0=l2;
si1=l4;
si2=l7;
si3=9600U;
si2*=si3;
si1+=si2;
si2=l5;
si3=3U;
si2<<=(si3&31);
si1+=si2;
sd1=f64_load(i->env__memory,(U64)si1);
f64_store(i->env__memory,(U64)si0+16U,sd1);
si0=l8;
si1=(*i->env_____memory_base);
si2=17U;
si1+=si2;
si2=l2;
si3=16U;
si2+=si3;
si0=env_____small_fprintf(i,si0,si1,si2);
si0=l5;
si1=1U;
si0+=si1;
l6=si0;
l5=si0;
si0=l6;
si1=1200U;
si0=si0 != si1;
if(si0){
goto L11;
}
}
si0=l7;
si1=1U;
si0+=si1;
l6=si0;
l5=si0;
si0=l6;
si1=1000U;
si0=si0 != si1;
if(si0){
goto L10;
}
}
si0=l2;
si1=(*i->env_____memory_base);
l5=si1;
si2=15U;
si1+=si2;
i32_store(i->env__memory,(U64)si0,si1);
si0=l8;
si1=l5;
si2=25U;
si1+=si2;
si2=l2;
si0=env__fiprintf(i,si0,si1,si2);
si0=l5;
si1=65U;
si0+=si1;
si1=22U;
si2=1U;
si3=l8;
si0=env__fwrite(i,si0,si1,si2,si3);
L9:;
si0=l3;
env__free(i,si0);
si0=l4;
env__free(i,si0);
si0=l2;
si1=48U;
si0+=si1;
(*i->env_____stack_pointer)=si0;
si0=0U;
L0:;
return si0;
}

U32 f9(trmmInstance*i,U64 l0,U32 l1) {
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
0x62,0x65,0x67,0x69,0x6e,0x20,0x64,0x75,0x6d,0x70,0x3a,0x20,0x25,0x73,0x0,0x42,0x0,0x25,0x30,0x2e,0x32,0x6c,0x66,0x20,0x0,0xa,0x65,0x6e,0x64,0x20,0x20,0x20,0x64,0x75,0x6d,0x70,0x3a,0x20,0x25,0x73,0xa,0x0,0x3d,0x3d,0x42,0x45,0x47,0x49,0x4e,0x20,0x44,0x55,0x4d,0x50,0x5f,0x41,0x52,0x52,0x41,0x59,0x53,0x3d,0x3d,0xa,0x0,0x3d,0x3d,0x45,0x4e,0x44,0x20,0x20,0x20,0x44,0x55,0x4d,0x50,0x5f,0x41,0x52,0x52,0x41,0x59,0x53,0x3d,0x3d,0xa,0x0,
};

static void trmmInitImports(trmmInstance* i, void* resolve(const char* module, const char* name)) {
if (resolve == NULL) { return; }
i->env__memory=(wasmMemory*)resolve("env", "memory");
i->env_____stack_pointer=(U32*)resolve("env", "__stack_pointer");
i->env_____memory_base=(U32*)resolve("env", "__memory_base");
i->env_____table_base=(U32*)resolve("env", "__table_base");
i->GOTX2Emem__stderr=(U32*)resolve("GOT.mem", "stderr");
}

void trmm____wasm_call_ctors(trmmInstance*i){
f6(i);
}

void trmm____wasm_apply_data_relocs(trmmInstance*i){
f7(i);
}

U32 trmm_submain(trmmInstance*i,U32 l0,U32 l1){
return f8(i,l0,l1);
}

void trmmInstantiate(trmmInstance* i, void* resolve(const char* module, const char* name)) {
trmmInitImports(i, resolve);
}

void trmmFreeInstance(trmmInstance* i) {
}

