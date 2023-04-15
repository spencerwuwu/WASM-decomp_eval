#include "w2c2_base.h"

#include "atax.h"

void f7(ataxInstance*i) {
L0:;
}

void f8(ataxInstance*i) {
L0:;
}

void f9(ataxInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
F64 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2;
F64 sd0,sd1,sd2;
si0=l1;
si1=0U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L1;
}
si0=l1;
sd0=(F64)(I32)(si0);
l4=sd0;
si0=0U;
l5=si0;
L2:;
{
si0=l3;
si1=l5;
l5=si1;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si1=l5;
sd1=(F64)(I32)(si1);
sd2=l4;
sd1/=sd2;
sd2=1;
sd1+=sd2;
f64_store(i->env__memory,(U64)si0,sd1);
si0=l5;
si1=1U;
si0+=si1;
l6=si0;
l5=si0;
si0=l6;
si1=l1;
si0=si0 != si1;
if(si0){
goto L2;
}
}
L1:;
si0=l0;
si1=1U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L3;
}
si0=l0;
si1=5U;
si0*=si1;
sd0=(F64)(I32)(si0);
l4=sd0;
si0=l1;
si1=1U;
si0=(U32)((I32)si0<(I32)si1);
l7=si0;
si0=0U;
l5=si0;
L4:;
{
si0=l5;
l6=si0;
si0=0U;
l5=si0;
si0=l7;
if(si0){
goto L5;
}
L6:;
{
si0=l2;
si1=l6;
si2=16800U;
si1*=si2;
si0+=si1;
si1=l5;
l5=si1;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si1=l5;
si2=l6;
si1+=si2;
si2=l1;
si1=I32_REM_S(si1,si2);
sd1=(F64)(I32)(si1);
sd2=l4;
sd1/=sd2;
f64_store(i->env__memory,(U64)si0,sd1);
si0=l5;
si1=1U;
si0+=si1;
l3=si0;
l5=si0;
si0=l3;
si1=l1;
si0=si0 != si1;
if(si0){
goto L6;
}
}
L5:;
si0=l6;
si1=1U;
si0+=si1;
l6=si0;
l5=si0;
si0=l6;
si1=l0;
si0=si0 != si1;
if(si0){
goto L4;
}
}
L3:;
L0:;
}

void f10(ataxInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2,si3;
F64 sd1;
si0=(*i->env_____stack_pointer);
si1=48U;
si0-=si1;
l2=si0;
(*i->env_____stack_pointer)=si0;
si0=(*i->env_____memory_base);
l3=si0;
si1=42U;
si0+=si1;
si1=22U;
si2=1U;
si3=(*i->GOTX2Emem__stderr);
si3=i32_load(i->env__memory,(U64)si3);
l4=si3;
si0=env__fwrite(i,si0,si1,si2,si3);
si0=l2;
si1=l3;
si2=0U;
si1+=si2;
i32_store(i->env__memory,(U64)si0+32U,si1);
si0=l4;
si1=l3;
si2=2U;
si1+=si2;
si2=l2;
si3=32U;
si2+=si3;
si0=env__fiprintf(i,si0,si1,si2);
si0=l0;
si1=1U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L1;
}
si0=0U;
l3=si0;
L2:;
{
si0=l3;
l3=si0;
si1=20U;
si0=REM_U(si0,si1);
if(si0){
goto L3;
}
si0=10U;
si1=l4;
si0=env__fputc(i,si0,si1);
L3:;
si0=l2;
si1=l1;
si2=l3;
si3=3U;
si2<<=(si3&31);
si1+=si2;
sd1=f64_load(i->env__memory,(U64)si1);
f64_store(i->env__memory,(U64)si0+16U,sd1);
si0=l4;
si1=(*i->env_____memory_base);
si2=17U;
si1+=si2;
si2=l2;
si3=16U;
si2+=si3;
si0=env_____small_fprintf(i,si0,si1,si2);
si0=l3;
si1=1U;
si0+=si1;
l5=si0;
l3=si0;
si0=l5;
si1=l0;
si0=si0 != si1;
if(si0){
goto L2;
}
}
L1:;
si0=l2;
si1=(*i->env_____memory_base);
l3=si1;
si2=0U;
si1+=si2;
i32_store(i->env__memory,(U64)si0,si1);
si0=l4;
si1=l3;
si2=25U;
si1+=si2;
si2=l2;
si0=env__fiprintf(i,si0,si1,si2);
si0=l3;
si1=65U;
si0+=si1;
si1=22U;
si2=1U;
si3=l4;
si0=env__fwrite(i,si0,si1,si2,si3);
si0=l2;
si1=48U;
si0+=si1;
(*i->env_____stack_pointer)=si0;
L0:;
}

void f11(ataxInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5) {
U32 l6=0;
U32 l7=0;
U32 l8=0;
F64 l9=0;
U32 l10=0;
U32 l11=0;
U32 l12=0;
U32 si0,si1,si2,si3;
U64 sj1;
F64 sd0,sd1,sd2;
si0=l1;
si1=1U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L1;
}
si0=l4;
si1=0U;
si2=l1;
si3=3U;
si2<<=(si3&31);
si0=env__memset(i,si0,si1,si2);
L1:;
si0=l0;
si1=1U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L2;
}
si0=l1;
si1=1U;
si0=(U32)((I32)si0<(I32)si1);
l6=si0;
si0=0U;
l7=si0;
L3:;
{
si0=l5;
si1=l7;
l7=si1;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l8=si0;
sj1=0ULL;
i64_store(i->env__memory,(U64)si0,sj1);
si0=l6;
if(si0){
goto L4;
}
si0=l8;
sd0=f64_load(i->env__memory,(U64)si0);
l9=sd0;
si0=0U;
l10=si0;
L5:;
{
si0=l8;
si1=l2;
si2=l7;
si3=16800U;
si2*=si3;
si1+=si2;
si2=l10;
l10=si2;
si3=3U;
si2<<=(si3&31);
l11=si2;
si1+=si2;
sd1=f64_load(i->env__memory,(U64)si1);
si2=l3;
si3=l11;
si2+=si3;
sd2=f64_load(i->env__memory,(U64)si2);
sd1*=sd2;
sd2=l9;
sd1+=sd2;
l9=sd1;
f64_store(i->env__memory,(U64)si0,sd1);
sd0=l9;
l9=sd0;
si0=l10;
si1=1U;
si0+=si1;
l11=si0;
l10=si0;
si0=l11;
si1=l1;
si0=si0 != si1;
if(si0){
goto L5;
}
}
L4:;
si0=0U;
l10=si0;
si0=l1;
si1=0U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L6;
}
L7:;
{
si0=l4;
si1=l10;
l10=si1;
si2=3U;
si1<<=(si2&31);
l11=si1;
si0+=si1;
l12=si0;
si1=l2;
si2=l7;
si3=16800U;
si2*=si3;
si1+=si2;
si2=l11;
si1+=si2;
sd1=f64_load(i->env__memory,(U64)si1);
si2=l8;
sd2=f64_load(i->env__memory,(U64)si2);
sd1*=sd2;
si2=l12;
sd2=f64_load(i->env__memory,(U64)si2);
sd1+=sd2;
f64_store(i->env__memory,(U64)si0,sd1);
si0=l10;
si1=1U;
si0+=si1;
l11=si0;
l10=si0;
si0=l11;
si1=l1;
si0=si0 != si1;
if(si0){
goto L7;
}
}
L6:;
si0=l7;
si1=1U;
si0+=si1;
l8=si0;
l7=si0;
si0=l8;
si1=l0;
si0=si0 != si1;
if(si0){
goto L3;
}
}
L2:;
L0:;
}

U32 f12(ataxInstance*i,U32 l0,U32 l1) {
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
U32 l12=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1;
F64 sd0,sd1,sd2;
sj0=3990000ULL;
si1=8U;
si0=f13(i,sj0,si1);
l2=si0;
sj0=2100ULL;
si1=8U;
si0=f13(i,sj0,si1);
l3=si0;
sj0=2100ULL;
si1=8U;
si0=f13(i,sj0,si1);
l4=si0;
sj0=1900ULL;
si1=8U;
si0=f13(i,sj0,si1);
l5=si0;
si0=0U;
l6=si0;
L1:;
{
si0=l3;
si1=l6;
l6=si1;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si1=l6;
sd1=(F64)(I32)(si1);
sd2=2100;
sd1/=sd2;
sd2=1;
sd1+=sd2;
f64_store(i->env__memory,(U64)si0,sd1);
si0=l6;
si1=1U;
si0+=si1;
l7=si0;
l6=si0;
si0=l7;
si1=2100U;
si0=si0 != si1;
if(si0){
goto L1;
}
}
si0=0U;
l6=si0;
L2:;
{
si0=l6;
l7=si0;
si0=0U;
l6=si0;
L3:;
{
si0=l2;
si1=l7;
si2=16800U;
si1*=si2;
si0+=si1;
si1=l6;
l6=si1;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si1=l6;
si2=l7;
si1+=si2;
si2=2100U;
si1=REM_U(si1,si2);
sd1=(F64)(I32)(si1);
sd2=9500;
sd1/=sd2;
f64_store(i->env__memory,(U64)si0,sd1);
si0=l6;
si1=1U;
si0+=si1;
l8=si0;
l6=si0;
si0=l8;
si1=2100U;
si0=si0 != si1;
if(si0){
goto L3;
}
}
si0=l7;
si1=1U;
si0+=si1;
l7=si0;
l6=si0;
si0=l7;
si1=1900U;
si0=si0 != si1;
if(si0){
goto L2;
}
}
si0=l4;
si1=0U;
si2=16800U;
si0=env__memset(i,si0,si1,si2);
l9=si0;
si0=0U;
l6=si0;
L4:;
{
si0=l5;
si1=l6;
l10=si1;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l6=si0;
sj1=0ULL;
i64_store(i->env__memory,(U64)si0,sj1);
sd0=0;
l11=sd0;
si0=0U;
l7=si0;
L5:;
{
si0=l6;
si1=l2;
si2=l10;
si3=16800U;
si2*=si3;
si1+=si2;
l8=si1;
si2=l7;
l7=si2;
si3=3U;
si2<<=(si3&31);
l4=si2;
si1+=si2;
sd1=f64_load(i->env__memory,(U64)si1);
si2=l3;
si3=l4;
si2+=si3;
sd2=f64_load(i->env__memory,(U64)si2);
sd1*=sd2;
sd2=l11;
sd1+=sd2;
l11=sd1;
f64_store(i->env__memory,(U64)si0,sd1);
sd0=l11;
l11=sd0;
si0=l7;
si1=1U;
si0+=si1;
l4=si0;
l7=si0;
si0=l4;
si1=2100U;
si0=si0 != si1;
if(si0){
goto L5;
}
}
si0=0U;
l7=si0;
L6:;
{
si0=l9;
si1=l7;
l7=si1;
si2=3U;
si1<<=(si2&31);
l4=si1;
si0+=si1;
l12=si0;
si1=l8;
si2=l4;
si1+=si2;
sd1=f64_load(i->env__memory,(U64)si1);
si2=l6;
sd2=f64_load(i->env__memory,(U64)si2);
sd1*=sd2;
si2=l12;
sd2=f64_load(i->env__memory,(U64)si2);
sd1+=sd2;
f64_store(i->env__memory,(U64)si0,sd1);
si0=l7;
si1=1U;
si0+=si1;
l4=si0;
l7=si0;
si0=l4;
si1=2100U;
si0=si0 != si1;
if(si0){
goto L6;
}
}
si0=l10;
si1=1U;
si0+=si1;
l7=si0;
l6=si0;
si0=l7;
si1=1900U;
si0=si0 != si1;
if(si0){
goto L4;
}
}
si0=l0;
si1=43U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L7;
}
si0=l1;
si0=i32_load(i->env__memory,(U64)si0);
si0=i32_load8_u(i->env__memory,(U64)si0);
if(si0){
goto L7;
}
si0=2100U;
si1=l9;
f10(i,si0,si1);
L7:;
si0=l2;
env__free(i,si0);
si0=l3;
env__free(i,si0);
si0=l9;
env__free(i,si0);
si0=l5;
env__free(i,si0);
si0=0U;
L0:;
return si0;
}

U32 f13(ataxInstance*i,U64 l0,U32 l1) {
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
0x79,0x0,0x62,0x65,0x67,0x69,0x6e,0x20,0x64,0x75,0x6d,0x70,0x3a,0x20,0x25,0x73,0x0,0x25,0x30,0x2e,0x32,0x6c,0x66,0x20,0x0,0xa,0x65,0x6e,0x64,0x20,0x20,0x20,0x64,0x75,0x6d,0x70,0x3a,0x20,0x25,0x73,0xa,0x0,0x3d,0x3d,0x42,0x45,0x47,0x49,0x4e,0x20,0x44,0x55,0x4d,0x50,0x5f,0x41,0x52,0x52,0x41,0x59,0x53,0x3d,0x3d,0xa,0x0,0x3d,0x3d,0x45,0x4e,0x44,0x20,0x20,0x20,0x44,0x55,0x4d,0x50,0x5f,0x41,0x52,0x52,0x41,0x59,0x53,0x3d,0x3d,0xa,0x0,
};

static void ataxInitImports(ataxInstance* i, void* resolve(const char* module, const char* name)) {
if (resolve == NULL) { return; }
i->env__memory=(wasmMemory*)resolve("env", "memory");
i->env_____stack_pointer=(U32*)resolve("env", "__stack_pointer");
i->env_____memory_base=(U32*)resolve("env", "__memory_base");
i->env_____table_base=(U32*)resolve("env", "__table_base");
i->GOTX2Emem__stderr=(U32*)resolve("GOT.mem", "stderr");
}

void atax____wasm_call_ctors(ataxInstance*i){
f7(i);
}

void atax____wasm_apply_data_relocs(ataxInstance*i){
f8(i);
}

void atax_init_array(ataxInstance*i,U32 l0,U32 l1,U32 l2,U32 l3){
f9(i,l0,l1,l2,l3);
}

void atax_print_array(ataxInstance*i,U32 l0,U32 l1){
f10(i,l0,l1);
}

void atax_kernel_atax(ataxInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5){
f11(i,l0,l1,l2,l3,l4,l5);
}

U32 atax_submain(ataxInstance*i,U32 l0,U32 l1){
return f12(i,l0,l1);
}

void ataxInstantiate(ataxInstance* i, void* resolve(const char* module, const char* name)) {
ataxInitImports(i, resolve);
}

void ataxFreeInstance(ataxInstance* i) {
}

