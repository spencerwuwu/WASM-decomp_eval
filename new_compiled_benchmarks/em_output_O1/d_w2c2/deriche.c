#include "w2c2_base.h"

#include "deriche.h"

void f6(dericheInstance*i) {
L0:;
}

void f7(dericheInstance*i) {
L0:;
}

U32 f8(dericheInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
F32 l11=0;
F32 l12=0;
F32 l13=0;
U32 l14=0;
F32 l15=0;
F32 l16=0;
U32 si0,si1,si2,si3,si4;
U64 sj0;
F32 sf0,sf1,sf2,sf3,sf4,sf5;
F64 sd1;
si0=(*i->env_____stack_pointer);
si1=48U;
si0-=si1;
l2=si0;
(*i->env_____stack_pointer)=si0;
sj0=8847360ULL;
si1=4U;
si0=f9(i,sj0,si1);
l3=si0;
sj0=8847360ULL;
si1=4U;
si0=f9(i,sj0,si1);
l4=si0;
sj0=8847360ULL;
si1=4U;
si0=f9(i,sj0,si1);
l5=si0;
sj0=8847360ULL;
si1=4U;
si0=f9(i,sj0,si1);
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
si0=0U;
l7=si0;
L3:;
{
si0=l7;
l9=si0;
si0=0U;
l7=si0;
sf0=0;
l11=sf0;
sf0=0;
l12=sf0;
sf0=0;
l13=sf0;
L4:;
{
si0=l5;
si1=l9;
si2=8640U;
si1*=si2;
l10=si1;
si0+=si1;
si1=l7;
l7=si1;
si2=2U;
si1<<=(si2&31);
l8=si1;
si0+=si1;
sf1=l13;
sf2=-0.606530666;
sf1*=sf2;
sf2=l12;
l13=sf2;
sf3=0.840896428;
sf2*=sf3;
si3=l3;
si4=l10;
si3+=si4;
si4=l8;
si3+=si4;
l10=si3;
sf3=f32_load(i->env__memory,(U64)si3);
sf4=-0.188681662;
sf3*=sf4;
sf4=l11;
sf5=0.110209078;
sf4*=sf5;
sf3+=sf4;
sf2+=sf3;
sf1+=sf2;
l12=sf1;
f32_store(i->env__memory,(U64)si0,sf1);
si0=l7;
si1=1U;
si0+=si1;
l8=si0;
l7=si0;
si0=l10;
sf0=f32_load(i->env__memory,(U64)si0);
l11=sf0;
sf0=l12;
l12=sf0;
sf0=l13;
l13=sf0;
si0=l8;
si1=2160U;
si0=si0 != si1;
if(si0){
goto L4;
}
}
si0=l9;
si1=1U;
si0+=si1;
l10=si0;
l7=si0;
si0=l10;
si1=4096U;
si0=si0 != si1;
if(si0){
goto L3;
}
}
si0=0U;
l7=si0;
L5:;
{
si0=l7;
l14=si0;
si0=2159U;
l10=si0;
sf0=0;
l11=sf0;
sf0=0;
l12=sf0;
sf0=0;
l13=sf0;
sf0=0;
l15=sf0;
L6:;
{
si0=l6;
si1=l14;
si2=8640U;
si1*=si2;
l8=si1;
si0+=si1;
si1=l10;
l7=si1;
si2=2U;
si1<<=(si2&31);
l9=si1;
si0+=si1;
sf1=l15;
sf2=-0.606530666;
sf1*=sf2;
sf2=l13;
l15=sf2;
sf3=0.840896428;
sf2*=sf3;
sf3=l11;
l13=sf3;
sf4=-0.183681786;
sf3*=sf4;
sf4=l12;
sf5=0.114441216;
sf4*=sf5;
sf3+=sf4;
sf2+=sf3;
sf1+=sf2;
l16=sf1;
f32_store(i->env__memory,(U64)si0,sf1);
si0=l7;
si1=-1U;
si0+=si1;
l10=si0;
si0=l3;
si1=l8;
si0+=si1;
si1=l9;
si0+=si1;
sf0=f32_load(i->env__memory,(U64)si0);
l11=sf0;
sf0=l13;
l12=sf0;
sf0=l16;
l13=sf0;
sf0=l15;
l15=sf0;
si0=l7;
if(si0){
goto L6;
}
}
si0=l14;
si1=1U;
si0+=si1;
l10=si0;
l7=si0;
si0=l10;
si1=4096U;
si0=si0 != si1;
if(si0){
goto L5;
}
}
si0=0U;
l7=si0;
L7:;
{
si0=l7;
l9=si0;
si0=0U;
l10=si0;
L8:;
{
si0=l4;
si1=l9;
si2=8640U;
si1*=si2;
l7=si1;
si0+=si1;
si1=l10;
l8=si1;
si2=2U;
si1<<=(si2&31);
l10=si1;
si0+=si1;
si1=l5;
si2=l7;
si1+=si2;
si2=l10;
si1+=si2;
sf1=f32_load(i->env__memory,(U64)si1);
si2=l6;
si3=l7;
si2+=si3;
si3=l10;
si2+=si3;
sf2=f32_load(i->env__memory,(U64)si2);
sf1+=sf2;
f32_store(i->env__memory,(U64)si0,sf1);
si0=l8;
si1=1U;
si0+=si1;
l7=si0;
l10=si0;
si0=l7;
si1=2160U;
si0=si0 != si1;
if(si0){
goto L8;
}
}
si0=l9;
si1=1U;
si0+=si1;
l10=si0;
l7=si0;
si0=l10;
si1=4096U;
si0=si0 != si1;
if(si0){
goto L7;
}
}
si0=0U;
l7=si0;
L9:;
{
si0=l7;
l9=si0;
si0=0U;
l7=si0;
sf0=0;
l11=sf0;
sf0=0;
l12=sf0;
sf0=0;
l13=sf0;
L10:;
{
si0=l5;
si1=l7;
l7=si1;
si2=8640U;
si1*=si2;
l10=si1;
si0+=si1;
si1=l9;
si2=2U;
si1<<=(si2&31);
l8=si1;
si0+=si1;
sf1=l13;
sf2=-0.606530666;
sf1*=sf2;
sf2=l12;
l13=sf2;
sf3=0.840896428;
sf2*=sf3;
si3=l4;
si4=l10;
si3+=si4;
si4=l8;
si3+=si4;
l10=si3;
sf3=f32_load(i->env__memory,(U64)si3);
sf4=-0.188681662;
sf3*=sf4;
sf4=l11;
sf5=0.110209078;
sf4*=sf5;
sf3+=sf4;
sf2+=sf3;
sf1+=sf2;
l12=sf1;
f32_store(i->env__memory,(U64)si0,sf1);
si0=l7;
si1=1U;
si0+=si1;
l8=si0;
l7=si0;
si0=l10;
sf0=f32_load(i->env__memory,(U64)si0);
l11=sf0;
sf0=l12;
l12=sf0;
sf0=l13;
l13=sf0;
si0=l8;
si1=4096U;
si0=si0 != si1;
if(si0){
goto L10;
}
}
si0=l9;
si1=1U;
si0+=si1;
l10=si0;
l7=si0;
si0=l10;
si1=2160U;
si0=si0 != si1;
if(si0){
goto L9;
}
}
si0=0U;
l7=si0;
L11:;
{
si0=l7;
l14=si0;
si0=4095U;
l10=si0;
sf0=0;
l11=sf0;
sf0=0;
l12=sf0;
sf0=0;
l13=sf0;
sf0=0;
l15=sf0;
L12:;
{
si0=l6;
si1=l10;
l7=si1;
si2=8640U;
si1*=si2;
l8=si1;
si0+=si1;
si1=l14;
si2=2U;
si1<<=(si2&31);
l9=si1;
si0+=si1;
sf1=l15;
sf2=-0.606530666;
sf1*=sf2;
sf2=l13;
l15=sf2;
sf3=0.840896428;
sf2*=sf3;
sf3=l11;
l13=sf3;
sf4=-0.183681786;
sf3*=sf4;
sf4=l12;
sf5=0.114441216;
sf4*=sf5;
sf3+=sf4;
sf2+=sf3;
sf1+=sf2;
l16=sf1;
f32_store(i->env__memory,(U64)si0,sf1);
si0=l7;
si1=-1U;
si0+=si1;
l10=si0;
si0=l4;
si1=l8;
si0+=si1;
si1=l9;
si0+=si1;
sf0=f32_load(i->env__memory,(U64)si0);
l11=sf0;
sf0=l13;
l12=sf0;
sf0=l16;
l13=sf0;
sf0=l15;
l15=sf0;
si0=l7;
if(si0){
goto L12;
}
}
si0=l14;
si1=1U;
si0+=si1;
l10=si0;
l7=si0;
si0=l10;
si1=2160U;
si0=si0 != si1;
if(si0){
goto L11;
}
}
si0=0U;
l7=si0;
L13:;
{
si0=l7;
l9=si0;
si0=0U;
l10=si0;
L14:;
{
si0=l4;
si1=l9;
si2=8640U;
si1*=si2;
l7=si1;
si0+=si1;
si1=l10;
l8=si1;
si2=2U;
si1<<=(si2&31);
l10=si1;
si0+=si1;
si1=l5;
si2=l7;
si1+=si2;
si2=l10;
si1+=si2;
sf1=f32_load(i->env__memory,(U64)si1);
si2=l6;
si3=l7;
si2+=si3;
si3=l10;
si2+=si3;
sf2=f32_load(i->env__memory,(U64)si2);
sf1+=sf2;
f32_store(i->env__memory,(U64)si0,sf1);
si0=l8;
si1=1U;
si0+=si1;
l7=si0;
l10=si0;
si0=l7;
si1=2160U;
si0=si0 != si1;
if(si0){
goto L14;
}
}
si0=l9;
si1=1U;
si0+=si1;
l10=si0;
l7=si0;
si0=l10;
si1=4096U;
si0=si0 != si1;
if(si0){
goto L13;
}
}
si0=l0;
si1=43U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L15;
}
si0=l1;
si0=i32_load(i->env__memory,(U64)si0);
si0=i32_load8_u(i->env__memory,(U64)si0);
if(si0){
goto L15;
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
L16:;
{
si0=l7;
l8=si0;
si1=2160U;
si0*=si1;
l14=si0;
si0=0U;
l7=si0;
L17:;
{
si0=l7;
l7=si0;
si1=l14;
si0+=si1;
si1=20U;
si0=REM_U(si0,si1);
if(si0){
goto L18;
}
si0=10U;
si1=l9;
si0=env__fputc(i,si0,si1);
L18:;
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
goto L17;
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
goto L16;
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
L15:;
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

U32 f9(dericheInstance*i,U64 l0,U32 l1) {
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
f6(i);
}

void deriche____wasm_apply_data_relocs(dericheInstance*i){
f7(i);
}

U32 deriche_submain(dericheInstance*i,U32 l0,U32 l1){
return f8(i,l0,l1);
}

void dericheInstantiate(dericheInstance* i, void* resolve(const char* module, const char* name)) {
dericheInitImports(i, resolve);
}

void dericheFreeInstance(dericheInstance* i) {
}

