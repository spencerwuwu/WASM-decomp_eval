#include "w2c2_base.h"

#include "deriche.h"

void f8(dericheInstance*i) {
L0:;
}

void f9(dericheInstance*i) {
L0:;
}

void f10(dericheInstance*i,U32 l0,U32 l1,F32 l2,U32 l3,U32 l4,U32 l5,U32 l6) {
F32 l7=0;
F32 l8=0;
F32 l9=0;
F32 l10=0;
F32 l11=0;
F32 l12=0;
F32 l13=0;
F32 l14=0;
F32 l15=0;
U32 l16=0;
U32 l17=0;
U32 l18=0;
F32 l19=0;
U32 l20=0;
U32 l21=0;
U32 si0,si1,si2,si3,si4,si5;
F32 sf0,sf1,sf2,sf3,sf4,sf5;
sf0=1;
sf1=l2;
sf1=-(sf1);
l7=sf1;
sf1=env__expf(i,sf1);
l8=sf1;
sf0-=sf1;
l9=sf0;
sf1=l9;
sf0*=sf1;
sf1=l2;
sf2=l2;
sf1+=sf2;
l9=sf1;
sf2=l8;
sf1*=sf2;
sf2=1;
sf1+=sf2;
sf2=l9;
sf2=env__expf(i,sf2);
sf1-=sf2;
sf0/=sf1;
l10=sf0;
sf0=-(sf0);
l11=sf0;
sf0=l2;
sf1=1;
sf0+=sf1;
l12=sf0;
sf0=l2;
sf1=-1;
sf0+=sf1;
sf1=l8;
sf2=l10;
sf1*=sf2;
l13=sf1;
sf0*=sf1;
l14=sf0;
sf0=l2;
sf1=-2;
sf0*=sf1;
sf0=env__expf(i,sf0);
l15=sf0;
sf0=-(sf0);
l2=sf0;
sf0=l7;
sf0=env__exp2f(i,sf0);
l8=sf0;
si0=l0;
si1=1U;
si0=(U32)((I32)si0<(I32)si1);
l16=si0;
if(si0){
goto L1;
}
si0=0U;
l17=si0;
L2:;
{
si0=l17;
l18=si0;
si0=0U;
l17=si0;
sf0=0;
l7=sf0;
sf0=0;
l9=sf0;
sf0=0;
l19=sf0;
si0=l1;
si1=0U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L3;
}
L4:;
{
si0=l5;
si1=l18;
si2=8640U;
si1*=si2;
l20=si1;
si0+=si1;
si1=l17;
l17=si1;
si2=2U;
si1<<=(si2&31);
l21=si1;
si0+=si1;
sf1=l2;
sf2=l19;
sf1*=sf2;
sf2=l8;
sf3=l9;
l19=sf3;
sf2*=sf3;
sf3=l10;
si4=l3;
si5=l20;
si4+=si5;
si5=l21;
si4+=si5;
l20=si4;
sf4=f32_load(i->env__memory,(U64)si4);
sf3*=sf4;
sf4=l14;
sf5=l7;
sf4*=sf5;
sf3+=sf4;
sf2+=sf3;
sf1+=sf2;
l9=sf1;
f32_store(i->env__memory,(U64)si0,sf1);
si0=l17;
si1=1U;
si0+=si1;
l21=si0;
l17=si0;
si0=l20;
sf0=f32_load(i->env__memory,(U64)si0);
l7=sf0;
sf0=l9;
l9=sf0;
sf0=l19;
l19=sf0;
si0=l21;
si1=l1;
si0=si0 != si1;
if(si0){
goto L4;
}
}
L3:;
si0=l18;
si1=1U;
si0+=si1;
l20=si0;
l17=si0;
si0=l20;
si1=l0;
si0=si0 != si1;
if(si0){
goto L2;
}
}
L1:;
sf0=l15;
sf1=l11;
sf0*=sf1;
l15=sf0;
sf0=l12;
sf1=l13;
sf0*=sf1;
l12=sf0;
si0=l16;
if(si0){
goto L5;
}
si0=0U;
l17=si0;
L6:;
{
si0=l17;
l16=si0;
si0=l1;
l17=si0;
sf0=0;
l7=sf0;
sf0=0;
l9=sf0;
sf0=0;
l19=sf0;
sf0=0;
l11=sf0;
si0=l1;
si1=0U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L7;
}
L8:;
{
si0=l6;
si1=l16;
si2=8640U;
si1*=si2;
l20=si1;
si0+=si1;
si1=l17;
l21=si1;
si2=-1U;
si1+=si2;
l17=si1;
si2=2U;
si1<<=(si2&31);
l18=si1;
si0+=si1;
sf1=l2;
sf2=l11;
sf1*=sf2;
sf2=l8;
sf3=l19;
l11=sf3;
sf2*=sf3;
sf3=l12;
sf4=l7;
l19=sf4;
sf3*=sf4;
sf4=l15;
sf5=l9;
sf4*=sf5;
sf3+=sf4;
sf2+=sf3;
sf1+=sf2;
l13=sf1;
f32_store(i->env__memory,(U64)si0,sf1);
si0=l17;
l17=si0;
si0=l3;
si1=l20;
si0+=si1;
si1=l18;
si0+=si1;
sf0=f32_load(i->env__memory,(U64)si0);
l7=sf0;
sf0=l19;
l9=sf0;
sf0=l13;
l19=sf0;
sf0=l11;
l11=sf0;
si0=l21;
si1=1U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L8;
}
}
L7:;
si0=l16;
si1=1U;
si0+=si1;
l20=si0;
l17=si0;
si0=l20;
si1=l0;
si0=si0 != si1;
if(si0){
goto L6;
}
}
L5:;
si0=l0;
si1=1U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L9;
}
si0=0U;
l17=si0;
L10:;
{
si0=l17;
l21=si0;
si0=0U;
l3=si0;
si0=l1;
si1=0U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L11;
}
L12:;
{
si0=l4;
si1=l21;
si2=8640U;
si1*=si2;
l17=si1;
si0+=si1;
si1=l3;
l20=si1;
si2=2U;
si1<<=(si2&31);
l3=si1;
si0+=si1;
si1=l5;
si2=l17;
si1+=si2;
si2=l3;
si1+=si2;
sf1=f32_load(i->env__memory,(U64)si1);
si2=l6;
si3=l17;
si2+=si3;
si3=l3;
si2+=si3;
sf2=f32_load(i->env__memory,(U64)si2);
sf1+=sf2;
f32_store(i->env__memory,(U64)si0,sf1);
si0=l20;
si1=1U;
si0+=si1;
l17=si0;
l3=si0;
si0=l17;
si1=l1;
si0=si0 != si1;
if(si0){
goto L12;
}
}
L11:;
si0=l21;
si1=1U;
si0+=si1;
l3=si0;
l17=si0;
si0=l3;
si1=l0;
si0=si0 != si1;
if(si0){
goto L10;
}
}
L9:;
si0=l1;
si1=1U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L13;
}
si0=0U;
l17=si0;
L14:;
{
si0=l17;
l21=si0;
si0=0U;
l17=si0;
sf0=0;
l7=sf0;
sf0=0;
l9=sf0;
sf0=0;
l19=sf0;
si0=l0;
si1=0U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L15;
}
L16:;
{
si0=l5;
si1=l17;
l17=si1;
si2=8640U;
si1*=si2;
l3=si1;
si0+=si1;
si1=l21;
si2=2U;
si1<<=(si2&31);
l20=si1;
si0+=si1;
sf1=l2;
sf2=l19;
sf1*=sf2;
sf2=l8;
sf3=l9;
l19=sf3;
sf2*=sf3;
sf3=l10;
si4=l4;
si5=l3;
si4+=si5;
si5=l20;
si4+=si5;
l3=si4;
sf4=f32_load(i->env__memory,(U64)si4);
sf3*=sf4;
sf4=l14;
sf5=l7;
sf4*=sf5;
sf3+=sf4;
sf2+=sf3;
sf1+=sf2;
l9=sf1;
f32_store(i->env__memory,(U64)si0,sf1);
si0=l17;
si1=1U;
si0+=si1;
l20=si0;
l17=si0;
si0=l3;
sf0=f32_load(i->env__memory,(U64)si0);
l7=sf0;
sf0=l9;
l9=sf0;
sf0=l19;
l19=sf0;
si0=l20;
si1=l0;
si0=si0 != si1;
if(si0){
goto L16;
}
}
L15:;
si0=l21;
si1=1U;
si0+=si1;
l3=si0;
l17=si0;
si0=l3;
si1=l1;
si0=si0 != si1;
if(si0){
goto L14;
}
}
L13:;
si0=l1;
si1=1U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L17;
}
si0=0U;
l17=si0;
L18:;
{
si0=l17;
l18=si0;
si0=l0;
l17=si0;
sf0=0;
l7=sf0;
sf0=0;
l9=sf0;
sf0=0;
l19=sf0;
sf0=0;
l11=sf0;
si0=l0;
si1=0U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L19;
}
L20:;
{
si0=l6;
si1=l17;
l3=si1;
si2=-1U;
si1+=si2;
l17=si1;
si2=8640U;
si1*=si2;
l20=si1;
si0+=si1;
si1=l18;
si2=2U;
si1<<=(si2&31);
l21=si1;
si0+=si1;
sf1=l2;
sf2=l11;
sf1*=sf2;
sf2=l8;
sf3=l19;
l11=sf3;
sf2*=sf3;
sf3=l12;
sf4=l7;
l19=sf4;
sf3*=sf4;
sf4=l15;
sf5=l9;
sf4*=sf5;
sf3+=sf4;
sf2+=sf3;
sf1+=sf2;
l10=sf1;
f32_store(i->env__memory,(U64)si0,sf1);
si0=l17;
l17=si0;
si0=l4;
si1=l20;
si0+=si1;
si1=l21;
si0+=si1;
sf0=f32_load(i->env__memory,(U64)si0);
l7=sf0;
sf0=l19;
l9=sf0;
sf0=l10;
l19=sf0;
sf0=l11;
l11=sf0;
si0=l3;
si1=1U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L20;
}
}
L19:;
si0=l18;
si1=1U;
si0+=si1;
l3=si0;
l17=si0;
si0=l3;
si1=l1;
si0=si0 != si1;
if(si0){
goto L18;
}
}
L17:;
si0=l0;
si1=1U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L21;
}
si0=l1;
si1=1U;
si0=(U32)((I32)si0<(I32)si1);
l18=si0;
si0=0U;
l17=si0;
L22:;
{
si0=l17;
l21=si0;
si0=0U;
l3=si0;
si0=l18;
if(si0){
goto L23;
}
L24:;
{
si0=l4;
si1=l21;
si2=8640U;
si1*=si2;
l17=si1;
si0+=si1;
si1=l3;
l20=si1;
si2=2U;
si1<<=(si2&31);
l3=si1;
si0+=si1;
si1=l5;
si2=l17;
si1+=si2;
si2=l3;
si1+=si2;
sf1=f32_load(i->env__memory,(U64)si1);
si2=l6;
si3=l17;
si2+=si3;
si3=l3;
si2+=si3;
sf2=f32_load(i->env__memory,(U64)si2);
sf1+=sf2;
f32_store(i->env__memory,(U64)si0,sf1);
si0=l20;
si1=1U;
si0+=si1;
l17=si0;
l3=si0;
si0=l17;
si1=l1;
si0=si0 != si1;
if(si0){
goto L24;
}
}
L23:;
si0=l21;
si1=1U;
si0+=si1;
l3=si0;
l17=si0;
si0=l3;
si1=l0;
si0=si0 != si1;
if(si0){
goto L22;
}
}
L21:;
L0:;
}

U32 f11(dericheInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 si0,si1,si2,si3,si4,si5,si6;
U64 sj0;
F32 sf1,sf2;
F64 sd1;
si0=(*i->env_____stack_pointer);
si1=48U;
si0-=si1;
l2=si0;
(*i->env_____stack_pointer)=si0;
sj0=8847360ULL;
si1=4U;
si0=f12(i,sj0,si1);
l3=si0;
sj0=8847360ULL;
si1=4U;
si0=f12(i,sj0,si1);
l4=si0;
sj0=8847360ULL;
si1=4U;
si0=f12(i,sj0,si1);
l5=si0;
sj0=8847360ULL;
si1=4U;
si0=f12(i,sj0,si1);
l6=si0;
si0=0U;
l7=si0;
L1:;
{
si0=l7;
l8=si0;
si1=313U;
si0*=si1;
l9=si0;
si0=0U;
l7=si0;
L2:;
{
si0=l3;
si1=l8;
si2=8640U;
si1*=si2;
si0+=si1;
si1=l7;
l7=si1;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l7;
si2=991U;
si1*=si2;
si2=l9;
si1+=si2;
si2=65535U;
si1&=si2;
sf1=(F32)(I32)(si1);
sf2=65535;
sf1/=sf2;
f32_store(i->env__memory,(U64)si0,sf1);
si0=l7;
si1=1U;
si0+=si1;
l10=si0;
l7=si0;
si0=l10;
si1=2160U;
si0=si0 != si1;
if(si0){
goto L2;
}
}
si0=l8;
si1=1U;
si0+=si1;
l10=si0;
l7=si0;
si0=l10;
si1=4096U;
si0=si0 != si1;
if(si0){
goto L1;
}
}
si0=4096U;
si1=2160U;
sf2=0.25;
si3=l3;
si4=l4;
si5=l5;
si6=l6;
f10(i,si0,si1,sf2,si3,si4,si5,si6);
si0=l0;
si1=43U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L3;
}
si0=l1;
si0=i32_load(i->env__memory,(U64)si0);
si0=i32_load8_u(i->env__memory,(U64)si0);
if(si0){
goto L3;
}
si0=(*i->env_____memory_base);
l7=si0;
si1=46U;
si0+=si1;
si1=22U;
si2=1U;
si3=(*i->GOTX2Emem__stderr);
si3=i32_load(i->env__memory,(U64)si3);
l9=si3;
si0=env__fwrite(i,si0,si1,si2,si3);
si0=l2;
si1=l7;
si2=0U;
si1+=si2;
i32_store(i->env__memory,(U64)si0+32U,si1);
si0=l9;
si1=l7;
si2=7U;
si1+=si2;
si2=l2;
si3=32U;
si2+=si3;
si0=env__fiprintf(i,si0,si1,si2);
si0=0U;
l7=si0;
L4:;
{
si0=l7;
l8=si0;
si1=2160U;
si0*=si1;
l0=si0;
si0=0U;
l7=si0;
L5:;
{
si0=l7;
l7=si0;
si1=l0;
si0+=si1;
si1=20U;
si0=REM_U(si0,si1);
if(si0){
goto L6;
}
si0=10U;
si1=l9;
si0=env__fputc(i,si0,si1);
L6:;
si0=l2;
si1=l4;
si2=l8;
si3=8640U;
si2*=si3;
si1+=si2;
si2=l7;
si3=2U;
si2<<=(si3&31);
si1+=si2;
sf1=f32_load(i->env__memory,(U64)si1);
sd1=(F64)(sf1);
f64_store(i->env__memory,(U64)si0+16U,sd1);
si0=l9;
si1=(*i->env_____memory_base);
si2=22U;
si1+=si2;
si2=l2;
si3=16U;
si2+=si3;
si0=env_____small_fprintf(i,si0,si1,si2);
si0=l7;
si1=1U;
si0+=si1;
l10=si0;
l7=si0;
si0=l10;
si1=2160U;
si0=si0 != si1;
if(si0){
goto L5;
}
}
si0=l8;
si1=1U;
si0+=si1;
l10=si0;
l7=si0;
si0=l10;
si1=4096U;
si0=si0 != si1;
if(si0){
goto L4;
}
}
si0=l2;
si1=(*i->env_____memory_base);
l7=si1;
si2=0U;
si1+=si2;
i32_store(i->env__memory,(U64)si0,si1);
si0=l9;
si1=l7;
si2=29U;
si1+=si2;
si2=l2;
si0=env__fiprintf(i,si0,si1,si2);
si0=l7;
si1=69U;
si0+=si1;
si1=22U;
si2=1U;
si3=l9;
si0=env__fwrite(i,si0,si1,si2,si3);
L3:;
si0=l3;
env__free(i,si0);
si0=l4;
env__free(i,si0);
si0=l5;
env__free(i,si0);
si0=l6;
env__free(i,si0);
si0=l2;
si1=48U;
si0+=si1;
(*i->env_____stack_pointer)=si0;
si0=0U;
L0:;
return si0;
}

U32 f12(dericheInstance*i,U64 l0,U32 l1) {
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
0x69,0x6d,0x67,0x4f,0x75,0x74,0x0,0x62,0x65,0x67,0x69,0x6e,0x20,0x64,0x75,0x6d,0x70,0x3a,0x20,0x25,0x73,0x0,0x25,0x30,0x2e,0x32,0x66,0x20,0x0,0xa,0x65,0x6e,0x64,0x20,0x20,0x20,0x64,0x75,0x6d,0x70,0x3a,0x20,0x25,0x73,0xa,0x0,0x3d,0x3d,0x42,0x45,0x47,0x49,0x4e,0x20,0x44,0x55,0x4d,0x50,0x5f,0x41,0x52,0x52,0x41,0x59,0x53,0x3d,0x3d,0xa,0x0,0x3d,0x3d,0x45,0x4e,0x44,0x20,0x20,0x20,0x44,0x55,0x4d,0x50,0x5f,0x41,0x52,0x52,0x41,0x59,0x53,0x3d,0x3d,0xa,0x0,
};

static void dericheInitImports(dericheInstance* i, void* resolve(const char* module, const char* name)) {
if (resolve == NULL) { return; }
i->env__memory=(wasmMemory*)resolve("env", "memory");
i->env_____stack_pointer=(U32*)resolve("env", "__stack_pointer");
i->env_____memory_base=(U32*)resolve("env", "__memory_base");
i->env_____table_base=(U32*)resolve("env", "__table_base");
i->GOTX2Emem__stderr=(U32*)resolve("GOT.mem", "stderr");
}

void deriche____wasm_call_ctors(dericheInstance*i){
f8(i);
}

void deriche____wasm_apply_data_relocs(dericheInstance*i){
f9(i);
}

void deriche_kernel_deriche(dericheInstance*i,U32 l0,U32 l1,F32 l2,U32 l3,U32 l4,U32 l5,U32 l6){
f10(i,l0,l1,l2,l3,l4,l5,l6);
}

U32 deriche_submain(dericheInstance*i,U32 l0,U32 l1){
return f11(i,l0,l1);
}

void dericheInstantiate(dericheInstance* i, void* resolve(const char* module, const char* name)) {
dericheInitImports(i, resolve);
}

void dericheFreeInstance(dericheInstance* i) {
}

