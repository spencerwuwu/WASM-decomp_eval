#include "w2c2_base.h"

#include "bicg.h"

void bicg_f6(bicgInstance*i) {
bicg_f37(i);
L0:;
}

U32 bicg_f7(bicgInstance*i,U32 l0,U32 l1) {
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
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1;
F64 sd1,sd2;
si0=i->g0;
si1=96U;
si0-=si1;
l2=si0;
i->g0=si0;
sj0=159900ULL;
si1=8U;
si0=bicg_f12(i,sj0,si1);
l3=si0;
sj0=390ULL;
si1=8U;
si0=bicg_f12(i,sj0,si1);
l4=si0;
sj0=410ULL;
si1=8U;
si0=bicg_f12(i,sj0,si1);
l5=si0;
sj0=390ULL;
si1=8U;
si0=bicg_f12(i,sj0,si1);
l6=si0;
sj0=410ULL;
si1=8U;
si0=bicg_f12(i,sj0,si1);
l7=si0;
si0=0U;
l8=si0;
L1:;
{
si0=l6;
si1=l8;
l8=si1;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si1=l8;
sd1=(F64)(I32)(si1);
sd2=390;
sd1/=sd2;
f64_store(&i->m0,(U64)si0,sd1);
si0=l8;
si1=1U;
si0+=si1;
l9=si0;
l8=si0;
si0=l9;
si1=390U;
si0=si0 != si1;
if(si0){
goto L1;
}
}
si0=0U;
l8=si0;
L2:;
{
si0=l7;
si1=l8;
l9=si1;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si1=l9;
sd1=(F64)(I32)(si1);
sd2=410;
sd1/=sd2;
f64_store(&i->m0,(U64)si0,sd1);
si0=0U;
l10=si0;
L3:;
{
si0=l3;
si1=l9;
si2=3120U;
si1*=si2;
si0+=si1;
si1=l10;
l8=si1;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si1=l8;
si2=1U;
si1+=si2;
l8=si1;
si2=l9;
si1*=si2;
si2=410U;
si1=REM_U(si1,si2);
sd1=(F64)(I32)(si1);
sd2=410;
sd1/=sd2;
f64_store(&i->m0,(U64)si0,sd1);
si0=l8;
l10=si0;
si0=l8;
si1=390U;
si0=si0 != si1;
if(si0){
goto L3;
}
}
si0=l9;
si1=1U;
si0+=si1;
l9=si0;
l8=si0;
si0=l9;
si1=410U;
si0=si0 != si1;
if(si0){
goto L2;
}
}
bicg_f9(i);
si0=l4;
si1=0U;
si2=3120U;
si0=bicg_f13(i,si0,si1,si2);
l11=si0;
si0=0U;
l8=si0;
L4:;
{
si0=l5;
si1=l8;
l12=si1;
si2=3U;
si1<<=(si2&31);
l8=si1;
si0+=si1;
l9=si0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=l7;
si1=l8;
si0+=si1;
l13=si0;
si0=0U;
l8=si0;
L5:;
{
si0=l11;
si1=l8;
l10=si1;
si2=3U;
si1<<=(si2&31);
l8=si1;
si0+=si1;
l4=si0;
si1=l13;
sd1=f64_load(&i->m0,(U64)si1);
si2=l3;
si3=l12;
si4=3120U;
si3*=si4;
si2+=si3;
si3=l8;
si2+=si3;
l14=si2;
sd2=f64_load(&i->m0,(U64)si2);
sd1*=sd2;
si2=l4;
sd2=f64_load(&i->m0,(U64)si2);
sd1+=sd2;
f64_store(&i->m0,(U64)si0,sd1);
si0=l9;
si1=l14;
sd1=f64_load(&i->m0,(U64)si1);
si2=l6;
si3=l8;
si2+=si3;
sd2=f64_load(&i->m0,(U64)si2);
sd1*=sd2;
si2=l9;
sd2=f64_load(&i->m0,(U64)si2);
sd1+=sd2;
f64_store(&i->m0,(U64)si0,sd1);
si0=l10;
si1=1U;
si0+=si1;
l10=si0;
l8=si0;
si0=l10;
si1=390U;
si0=si0 != si1;
if(si0){
goto L5;
}
}
si0=l12;
si1=1U;
si0+=si1;
l9=si0;
l8=si0;
si0=l9;
si1=410U;
si0=si0 != si1;
if(si0){
goto L4;
}
}
bicg_f10(i);
bicg_f11(i);
si0=l0;
si1=43U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L6;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si0=i32_load8_u(&i->m0,(U64)si0);
if(si0){
goto L6;
}
si0=1162U;
si1=22U;
si2=1U;
si3=0U;
si3=i32_load(&i->m0,(U64)si3+1208U);
l8=si3;
si0=bicg_f30(i,si0,si1,si2,si3);
si0=l2;
si1=1066U;
i32_store(&i->m0,(U64)si0+80U,si1);
si0=l8;
si1=1053U;
si2=l2;
si3=80U;
si2+=si3;
si0=bicg_f16(i,si0,si1,si2);
si0=0U;
l9=si0;
L7:;
{
si0=l9;
l9=si0;
si1=20U;
si0=REM_U(si0,si1);
if(si0){
goto L8;
}
si0=10U;
si1=l8;
si0=bicg_f22(i,si0,si1);
L8:;
si0=l2;
si1=l11;
si2=l9;
si3=3U;
si2<<=(si3&31);
si1+=si2;
sd1=f64_load(&i->m0,(U64)si1);
f64_store(&i->m0,(U64)si0+64U,sd1);
si0=l8;
si1=1130U;
si2=l2;
si3=64U;
si2+=si3;
si0=bicg_f17(i,si0,si1,si2);
si0=l9;
si1=1U;
si0+=si1;
l10=si0;
l9=si0;
si0=l10;
si1=390U;
si0=si0 != si1;
if(si0){
goto L7;
}
}
si0=l2;
si1=1066U;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l8;
si1=1138U;
si2=l2;
si3=48U;
si2+=si3;
si0=bicg_f16(i,si0,si1,si2);
si0=l2;
si1=1068U;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l8;
si1=1053U;
si2=l2;
si3=32U;
si2+=si3;
si0=bicg_f16(i,si0,si1,si2);
si0=0U;
l9=si0;
L9:;
{
si0=l9;
l9=si0;
si1=20U;
si0=REM_U(si0,si1);
if(si0){
goto L10;
}
si0=10U;
si1=l8;
si0=bicg_f22(i,si0,si1);
L10:;
si0=l2;
si1=l5;
si2=l9;
si3=3U;
si2<<=(si3&31);
si1+=si2;
sd1=f64_load(&i->m0,(U64)si1);
f64_store(&i->m0,(U64)si0+16U,sd1);
si0=l8;
si1=1130U;
si2=l2;
si3=16U;
si2+=si3;
si0=bicg_f17(i,si0,si1,si2);
si0=l9;
si1=1U;
si0+=si1;
l10=si0;
l9=si0;
si0=l10;
si1=410U;
si0=si0 != si1;
if(si0){
goto L9;
}
}
si0=l2;
si1=1068U;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si1=1138U;
si2=l2;
si0=bicg_f16(i,si0,si1,si2);
si0=1185U;
si1=22U;
si2=1U;
si3=l8;
si0=bicg_f30(i,si0,si1,si2,si3);
L6:;
si0=l3;
bicg_f66(i,si0);
si0=l11;
bicg_f66(i,si0);
si0=l5;
bicg_f66(i,si0);
si0=l6;
bicg_f66(i,si0);
si0=l7;
bicg_f66(i,si0);
si0=l2;
si1=96U;
si0+=si1;
i->g0=si0;
si0=0U;
L0:;
return si0;
}

U32 bicg_f8(bicgInstance*i,U32 l0,U32 l1) {
U32 si0,si1;
si0=l0;
si1=l1;
si0=bicg_f7(i,si0,si1);
si0=0U;
L0:;
return si0;
}

void bicg_f9(bicgInstance*i) {
U32 l0=0;
U32 l1=0;
U32 si0,si1,si2;
U64 sj2;
F64 sd1,sd2;
si0=i->g0;
si1=32U;
si0-=si1;
l0=si0;
i->g0=si0;
si0=l0;
si1=16U;
si0+=si1;
si1=0U;
si0=bicg_f15(i,si0,si1);
l1=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=1078U;
si1=l0;
si0=bicg_f32(i,si0,si1);
L1:;
si0=0U;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+24U);
sd1=(F64)(I32)(si1);
sd2=9.9999999999999995e-07;
sd1*=sd2;
si2=l0;
sj2=i64_load(&i->m0,(U64)si2+16U);
sd2=(F64)(I64)(sj2);
sd1+=sd2;
f64_store(&i->m0,(U64)si0+2000U,sd1);
si0=l0;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

void bicg_f10(bicgInstance*i) {
U32 l0=0;
U32 l1=0;
U32 si0,si1,si2;
U64 sj2;
F64 sd1,sd2;
si0=i->g0;
si1=32U;
si0-=si1;
l0=si0;
i->g0=si0;
si0=l0;
si1=16U;
si0+=si1;
si1=0U;
si0=bicg_f15(i,si0,si1);
l1=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=1078U;
si1=l0;
si0=bicg_f32(i,si0,si1);
L1:;
si0=0U;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+24U);
sd1=(F64)(I32)(si1);
sd2=9.9999999999999995e-07;
sd1*=sd2;
si2=l0;
sj2=i64_load(&i->m0,(U64)si2+16U);
sd2=(F64)(I64)(sj2);
sd1+=sd2;
f64_store(&i->m0,(U64)si0+2008U,sd1);
si0=l0;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

void bicg_f11(bicgInstance*i) {
U32 l0=0;
U32 si0,si1,si2;
F64 sd1,sd2;
si0=i->g0;
si1=16U;
si0-=si1;
l0=si0;
i->g0=si0;
si0=l0;
si1=0U;
sd1=f64_load(&i->m0,(U64)si1+2008U);
si2=0U;
sd2=f64_load(&i->m0,(U64)si2+2000U);
sd1-=sd2;
f64_store(&i->m0,(U64)si0,sd1);
si0=1155U;
si1=l0;
si0=bicg_f33(i,si0,si1);
si0=l0;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

U32 bicg_f12(bicgInstance*i,U64 l0,U32 l1) {
U32 si0,si1;
U64 sj0;
sj0=l0;
si0=(U32)(sj0);
si1=l1;
si0*=si1;
si0=bicg_f65(i,si0);
L0:;
return si0;
}

U32 bicg_f13(bicgInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U64 l6=0;
U32 si0,si1,si2;
U64 sj0,sj1;
si0=l2;
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=l1;
i32_store8(&i->m0,(U64)si0,si1);
si0=l2;
si1=l0;
si0+=si1;
l3=si0;
si1=-1U;
si0+=si1;
si1=l1;
i32_store8(&i->m0,(U64)si0,si1);
si0=l2;
si1=3U;
si0=si0 < si1;
if(si0){
goto L1;
}
si0=l0;
si1=l1;
i32_store8(&i->m0,(U64)si0+2U,si1);
si0=l0;
si1=l1;
i32_store8(&i->m0,(U64)si0+1U,si1);
si0=l3;
si1=-3U;
si0+=si1;
si1=l1;
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si1=-2U;
si0+=si1;
si1=l1;
i32_store8(&i->m0,(U64)si0,si1);
si0=l2;
si1=7U;
si0=si0 < si1;
if(si0){
goto L1;
}
si0=l0;
si1=l1;
i32_store8(&i->m0,(U64)si0+3U,si1);
si0=l3;
si1=-4U;
si0+=si1;
si1=l1;
i32_store8(&i->m0,(U64)si0,si1);
si0=l2;
si1=9U;
si0=si0 < si1;
if(si0){
goto L1;
}
si0=l0;
si1=0U;
si2=l0;
si1-=si2;
si2=3U;
si1&=si2;
l4=si1;
si0+=si1;
l3=si0;
si1=l1;
si2=255U;
si1&=si2;
si2=16843009U;
si1*=si2;
l1=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l2;
si2=l4;
si1-=si2;
si2=-4U;
si1&=si2;
l4=si1;
si0+=si1;
l2=si0;
si1=-4U;
si0+=si1;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=9U;
si0=si0 < si1;
if(si0){
goto L1;
}
si0=l3;
si1=l1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=l1;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=-8U;
si0+=si1;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=-12U;
si0+=si1;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=25U;
si0=si0 < si1;
if(si0){
goto L1;
}
si0=l3;
si1=l1;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l3;
si1=l1;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l3;
si1=l1;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l3;
si1=l1;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=-16U;
si0+=si1;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=-20U;
si0+=si1;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=-24U;
si0+=si1;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=-28U;
si0+=si1;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l3;
si2=4U;
si1&=si2;
si2=24U;
si1|=si2;
l5=si1;
si0-=si1;
l2=si0;
si1=32U;
si0=si0 < si1;
if(si0){
goto L1;
}
si0=l1;
sj0=(U64)(si0);
sj1=4294967297ULL;
sj0*=sj1;
l6=sj0;
si0=l3;
si1=l5;
si0+=si1;
l1=si0;
L2:;
{
si0=l1;
sj1=l6;
i64_store(&i->m0,(U64)si0+24U,sj1);
si0=l1;
sj1=l6;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l1;
sj1=l6;
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=l1;
sj1=l6;
i64_store(&i->m0,(U64)si0,sj1);
si0=l1;
si1=32U;
si0+=si1;
l1=si0;
si0=l2;
si1=-32U;
si0+=si1;
l2=si0;
si1=31U;
si0=si0 > si1;
if(si0){
goto L2;
}
}
L1:;
si0=l0;
L0:;
return si0;
}

U32 bicg_f14(bicgInstance*i) {
U32 si0;
si0=2016U;
L0:;
return si0;
}

U32 bicg_f15(bicgInstance*i,U32 l0,U32 l1) {
F64 l2=0;
F64 l3=0;
U64 l4=0;
U32 l5=0;
U32 si0,si1;
U64 sj0,sj1,sj2;
F64 sd0,sd1;
sd0=(*i->env_emscriptenX5FdateX5Fnow)(i);
l2=sd0;
sd1=1000;
sd0/=sd1;
l3=sd0;
sd0=fabs(sd0);
sd1=9.2233720368547758e+18;
si0=sd0 < sd1;
si0=!(si0);
if(si0){
goto L2;
}
sd0=l3;
sj0=I64_TRUNC_S_F64(sd0);
l4=sj0;
goto L1;
L2:;
sj0=-9223372036854775808ULL;
l4=sj0;
L1:;
si0=l0;
sj1=l4;
i64_store(&i->m0,(U64)si0,sj1);
sd0=l2;
sj1=l4;
sj2=1000ULL;
sj1*=sj2;
sd1=(F64)(I64)(sj1);
sd0-=sd1;
sd1=1000;
sd0*=sd1;
l2=sd0;
sd0=fabs(sd0);
sd1=2147483648;
si0=sd0 < sd1;
si0=!(si0);
if(si0){
goto L4;
}
sd0=l2;
si0=I32_TRUNC_S_F64(sd0);
l5=si0;
goto L3;
L4:;
si0=-2147483648U;
l5=si0;
L3:;
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=0U;
L0:;
return si0;
}

U32 bicg_f16(bicgInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 si0,si1,si2;
si0=i->g0;
si1=16U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l3;
si1=l2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l0;
si1=l1;
si2=l2;
si0=bicg_f60(i,si0,si1,si2);
l2=si0;
si0=l3;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l2;
L0:;
return si0;
}

U32 bicg_f17(bicgInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 si0,si1,si2;
si0=i->g0;
si1=16U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l3;
si1=l2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l0;
si1=l1;
si2=l2;
si0=bicg_f61(i,si0,si1,si2);
l2=si0;
si0=l3;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l2;
L0:;
return si0;
}

U32 bicg_f18(bicgInstance*i,U32 l0) {
U32 si0;
si0=1U;
L0:;
return si0;
}

void bicg_f19(bicgInstance*i,U32 l0) {
L0:;
}

U32 bicg_f20(bicgInstance*i,U32 l0) {
U32 l1=0;
U32 si0,si1,si2;
U64 sj1;
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+72U);
l1=si1;
si2=-1U;
si1+=si2;
si2=l1;
si1|=si2;
i32_store(&i->m0,(U64)si0+72U,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si1=8U;
si0&=si1;
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=l1;
si2=32U;
si1|=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=-1U;
goto L0;
L1:;
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+44U);
l1=si1;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l0;
si1=l1;
si2=l0;
si2=i32_load(&i->m0,(U64)si2+48U);
si1+=si2;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=0U;
L0:;
return si0;
}

U32 bicg_f21(bicgInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2,si3;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=l1;
i32_store8(&i->m0,(U64)si0+15U,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+16U);
l3=si0;
if(si0){
goto L2;
}
si0=-1U;
l3=si0;
si0=l0;
si0=bicg_f20(i,si0);
if(si0){
goto L1;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+16U);
l3=si0;
L2:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
l4=si0;
si1=l3;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+80U);
si1=l1;
si2=255U;
si1&=si2;
l3=si1;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l0;
si1=l4;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l4;
si1=l1;
i32_store8(&i->m0,(U64)si0,si1);
goto L1;
L3:;
si0=-1U;
l3=si0;
si0=l0;
si1=l2;
si2=15U;
si1+=si2;
si2=1U;
si3=l0;
si3=i32_load(&i->m0,(U64)si3+36U);
si0=TF(i->t0,si3,U32 (*)(bicgInstance*,U32,U32,U32))(i,si0,si1,si2);
si1=1U;
si0=si0 != si1;
if(si0){
goto L1;
}
si0=l2;
si0=i32_load8_u(&i->m0,(U64)si0+15U);
l3=si0;
L1:;
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l3;
L0:;
return si0;
}

U32 bicg_f22(bicgInstance*i,U32 l0,U32 l1) {
U32 si0,si1;
si0=l0;
si1=l1;
si0=bicg_f23(i,si0,si1);
L0:;
return si0;
}

U32 bicg_f23(bicgInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 si0,si1,si2;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+76U);
l2=si0;
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L2;
}
si0=l2;
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
si1=-1073741825U;
si0&=si1;
si1=bicg_f36(i);
si1=i32_load(&i->m0,(U64)si1+24U);
si0=si0 != si1;
if(si0){
goto L1;
}
L2:;
si0=l0;
si1=255U;
si0&=si1;
l2=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+80U);
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
l3=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+16U);
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l1;
si1=l3;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l3;
si1=l0;
i32_store8(&i->m0,(U64)si0,si1);
si0=l2;
goto L0;
L3:;
si0=l1;
si1=l2;
si0=bicg_f21(i,si0,si1);
goto L0;
L1:;
si0=l0;
si1=l1;
si0=bicg_f24(i,si0,si1);
L0:;
return si0;
}

U32 bicg_f24(bicgInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2;
si0=l1;
si1=76U;
si0+=si1;
l2=si0;
si0=bicg_f25(i,si0);
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
si0=bicg_f18(i,si0);
L1:;
si0=l0;
si1=255U;
si0&=si1;
l3=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+80U);
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
l4=si0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+16U);
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l1;
si1=l4;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l4;
si1=l0;
i32_store8(&i->m0,(U64)si0,si1);
goto L2;
L3:;
si0=l1;
si1=l3;
si0=bicg_f21(i,si0,si1);
l3=si0;
L2:;
si0=l2;
si0=bicg_f26(i,si0);
si1=1073741824U;
si0&=si1;
si0=!(si0);
if(si0){
goto L4;
}
si0=l2;
bicg_f27(i,si0);
L4:;
si0=l3;
L0:;
return si0;
}

U32 bicg_f25(bicgInstance*i,U32 l0) {
U32 l1=0;
U32 si0,si1,si2,si3;
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
l1=si1;
si2=1073741823U;
si3=l1;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
L0:;
return si0;
}

U32 bicg_f26(bicgInstance*i,U32 l0) {
U32 l1=0;
U32 si0,si1;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l1=si0;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
L0:;
return si0;
}

void bicg_f27(bicgInstance*i,U32 l0) {
U32 si0,si1;
si0=l0;
si1=1U;
si0=bicg_f31(i,si0,si1);
L0:;
}

U32 bicg_f28(bicgInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2;
si0=l2;
si1=512U;
si0=si0 < si1;
if(si0){
goto L1;
}
si0=l0;
si1=l1;
si2=l2;
(*i->env_emscriptenX5FmemcpyX5Fbig)(i,si0,si1,si2);
si0=l0;
goto L0;
L1:;
si0=l0;
si1=l2;
si0+=si1;
l3=si0;
si0=l1;
si1=l0;
si0^=si1;
si1=3U;
si0&=si1;
if(si0){
goto L3;
}
si0=l0;
si1=3U;
si0&=si1;
if(si0){
goto L5;
}
si0=l0;
l2=si0;
goto L4;
L5:;
si0=l2;
if(si0){
goto L6;
}
si0=l0;
l2=si0;
goto L4;
L6:;
si0=l0;
l2=si0;
L7:;
{
si0=l2;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
si0=l2;
si1=1U;
si0+=si1;
l2=si0;
si1=3U;
si0&=si1;
si0=!(si0);
if(si0){
goto L4;
}
si0=l2;
si1=l3;
si0=si0 < si1;
if(si0){
goto L7;
}
}
L4:;
si0=l3;
si1=-4U;
si0&=si1;
l4=si0;
si1=64U;
si0=si0 < si1;
if(si0){
goto L8;
}
si0=l2;
si1=l4;
si2=-64U;
si1+=si2;
l5=si1;
si0=si0 > si1;
if(si0){
goto L8;
}
L9:;
{
si0=l2;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+4U);
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l2;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+8U);
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l2;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+12U);
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+16U);
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+20U);
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l2;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+24U);
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l2;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+28U);
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l2;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+32U);
i32_store(&i->m0,(U64)si0+32U,si1);
si0=l2;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+36U);
i32_store(&i->m0,(U64)si0+36U,si1);
si0=l2;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+40U);
i32_store(&i->m0,(U64)si0+40U,si1);
si0=l2;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+44U);
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l2;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+48U);
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l2;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+52U);
i32_store(&i->m0,(U64)si0+52U,si1);
si0=l2;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+56U);
i32_store(&i->m0,(U64)si0+56U,si1);
si0=l2;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+60U);
i32_store(&i->m0,(U64)si0+60U,si1);
si0=l1;
si1=64U;
si0+=si1;
l1=si0;
si0=l2;
si1=64U;
si0+=si1;
l2=si0;
si1=l5;
si0=si0 <= si1;
if(si0){
goto L9;
}
}
L8:;
si0=l2;
si1=l4;
si0=si0 >= si1;
if(si0){
goto L2;
}
L10:;
{
si0=l2;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=4U;
si0+=si1;
l1=si0;
si0=l2;
si1=4U;
si0+=si1;
l2=si0;
si1=l4;
si0=si0 < si1;
if(si0){
goto L10;
}
goto L2;
}
UNREACHABLE;
L3:;
si0=l3;
si1=4U;
si0=si0 >= si1;
if(si0){
goto L11;
}
si0=l0;
l2=si0;
goto L2;
L11:;
si0=l3;
si1=-4U;
si0+=si1;
l4=si0;
si1=l0;
si0=si0 >= si1;
if(si0){
goto L12;
}
si0=l0;
l2=si0;
goto L2;
L12:;
si0=l0;
l2=si0;
L13:;
{
si0=l2;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
si0=l2;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+1U);
i32_store8(&i->m0,(U64)si0+1U,si1);
si0=l2;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+2U);
i32_store8(&i->m0,(U64)si0+2U,si1);
si0=l2;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1+3U);
i32_store8(&i->m0,(U64)si0+3U,si1);
si0=l1;
si1=4U;
si0+=si1;
l1=si0;
si0=l2;
si1=4U;
si0+=si1;
l2=si0;
si1=l4;
si0=si0 <= si1;
if(si0){
goto L13;
}
}
L2:;
si0=l2;
si1=l3;
si0=si0 >= si1;
if(si0){
goto L14;
}
L15:;
{
si0=l2;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
si0=l2;
si1=1U;
si0+=si1;
l2=si0;
si1=l3;
si0=si0 != si1;
if(si0){
goto L15;
}
}
L14:;
si0=l0;
L0:;
return si0;
}

U32 bicg_f29(bicgInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2,si3;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+16U);
l3=si0;
if(si0){
goto L2;
}
si0=0U;
l4=si0;
si0=l2;
si0=bicg_f20(i,si0);
if(si0){
goto L1;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+16U);
l3=si0;
L2:;
si0=l3;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+20U);
l5=si1;
si0-=si1;
si1=l1;
si0=si0 >= si1;
if(si0){
goto L3;
}
si0=l2;
si1=l0;
si2=l1;
si3=l2;
si3=i32_load(&i->m0,(U64)si3+36U);
si0=TF(i->t0,si3,U32 (*)(bicgInstance*,U32,U32,U32))(i,si0,si1,si2);
goto L0;
L3:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+80U);
si1=0U;
si0=(U32)((I32)si0>=(I32)si1);
if(si0){
goto L5;
}
si0=0U;
l3=si0;
goto L4;
L5:;
si0=l1;
l4=si0;
L6:;
{
si0=l4;
l3=si0;
if(si0){
goto L7;
}
si0=0U;
l3=si0;
goto L4;
L7:;
si0=l0;
si1=l3;
si2=-1U;
si1+=si2;
l4=si1;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=10U;
si0=si0 != si1;
if(si0){
goto L6;
}
}
si0=l2;
si1=l0;
si2=l3;
si3=l2;
si3=i32_load(&i->m0,(U64)si3+36U);
si0=TF(i->t0,si3,U32 (*)(bicgInstance*,U32,U32,U32))(i,si0,si1,si2);
l4=si0;
si1=l3;
si0=si0 < si1;
if(si0){
goto L1;
}
si0=l0;
si1=l3;
si0+=si1;
l0=si0;
si0=l1;
si1=l3;
si0-=si1;
l1=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+20U);
l5=si0;
L4:;
si0=l5;
si1=l0;
si2=l1;
si0=bicg_f28(i,si0,si1,si2);
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+20U);
si2=l1;
si1+=si2;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l3;
si1=l1;
si0+=si1;
l4=si0;
L1:;
si0=l4;
L0:;
return si0;
}

U32 bicg_f30(bicgInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2;
si0=l2;
si1=l1;
si0*=si1;
l4=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+76U);
si1=-1U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L2;
}
si0=l0;
si1=l4;
si2=l3;
si0=bicg_f29(i,si0,si1,si2);
l0=si0;
goto L1;
L2:;
si0=l3;
si0=bicg_f18(i,si0);
l5=si0;
si0=l0;
si1=l4;
si2=l3;
si0=bicg_f29(i,si0,si1,si2);
l0=si0;
si0=l5;
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
bicg_f19(i,si0);
L1:;
si0=l0;
si1=l4;
si0=si0 != si1;
if(si0){
goto L3;
}
si0=l2;
si1=0U;
si2=l1;
si0=si2?si0:si1;
goto L0;
L3:;
si0=l0;
si1=l1;
si0=DIV_U(si0,si1);
L0:;
return si0;
}

U32 bicg_f31(bicgInstance*i,U32 l0,U32 l1) {
U32 si0;
si0=0U;
L0:;
return si0;
}

U32 bicg_f32(bicgInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 si0,si1,si2;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=1840U;
si1=l0;
si2=l1;
si0=bicg_f60(i,si0,si1,si2);
l1=si0;
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l1;
L0:;
return si0;
}

U32 bicg_f33(bicgInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 si0,si1,si2;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=1840U;
si1=l0;
si2=l1;
si0=bicg_f61(i,si0,si1,si2);
l1=si0;
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l1;
L0:;
return si0;
}

U32 bicg_f34(bicgInstance*i) {
U32 si0;
si0=42U;
L0:;
return si0;
}

U32 bicg_f35(bicgInstance*i) {
U32 si0;
si0=bicg_f34(i);
L0:;
return si0;
}

U32 bicg_f36(bicgInstance*i) {
U32 si0;
si0=2076U;
L0:;
return si0;
}

void bicg_f37(bicgInstance*i) {
U32 si0,si1;
si0=0U;
si1=2052U;
i32_store(&i->m0,(U64)si0+2172U,si1);
si0=0U;
si1=bicg_f35(i);
i32_store(&i->m0,(U64)si0+2100U,si1);
L0:;
}

U32 bicg_f38(bicgInstance*i,U32 l0) {
U32 si0;
si0=l0;
L0:;
return si0;
}

U32 bicg_f39(bicgInstance*i,U32 l0) {
U32 si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+60U);
si0=bicg_f38(i,si0);
si0=(*i->wasiX5FsnapshotX5Fpreview1_fdX5Fclose)(i,si0);
L0:;
return si0;
}

U32 bicg_f40(bicgInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l3;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+28U);
l4=si1;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
l5=si0;
si0=l3;
si1=l2;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l3;
si1=l1;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l3;
si1=l5;
si2=l4;
si1-=si2;
l1=si1;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l1;
si1=l2;
si0+=si1;
l6=si0;
si0=l3;
si1=16U;
si0+=si1;
l4=si0;
si0=2U;
l7=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+60U);
si1=l3;
si2=16U;
si1+=si2;
si2=2U;
si3=l3;
si4=12U;
si3+=si4;
si0=(*i->wasiX5FsnapshotX5Fpreview1_fdX5Fwrite)(i,si0,si1,si2,si3);
si0=bicg_f62(i,si0);
si0=!(si0);
if(si0){
goto L5;
}
si0=l4;
l5=si0;
goto L4;
L5:;
L6:;
{
si0=l6;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+12U);
l1=si1;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l1;
si1=-1U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L7;
}
si0=l4;
l5=si0;
goto L2;
L7:;
si0=l4;
si1=l1;
si2=l4;
si2=i32_load(&i->m0,(U64)si2+4U);
l8=si2;
si1=si1 > si2;
l9=si1;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l5=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
si2=l1;
si3=l8;
si4=0U;
si5=l9;
si3=si5?si3:si4;
si2-=si3;
l8=si2;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=12U;
si2=4U;
si3=l9;
si1=si3?si1:si2;
si0+=si1;
l4=si0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1);
si2=l8;
si1-=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=l1;
si0-=si1;
l6=si0;
si0=l5;
l4=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+60U);
si1=l5;
si2=l7;
si3=l9;
si2-=si3;
l7=si2;
si3=l3;
si4=12U;
si3+=si4;
si0=(*i->wasiX5FsnapshotX5Fpreview1_fdX5Fwrite)(i,si0,si1,si2,si3);
si0=bicg_f62(i,si0);
si0=!(si0);
if(si0){
goto L6;
}
}
L4:;
si0=l6;
si1=-1U;
si0=si0 != si1;
if(si0){
goto L2;
}
L3:;
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+44U);
l1=si1;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+20U,si1);
si0=l0;
si1=l1;
si2=l0;
si2=i32_load(&i->m0,(U64)si2+48U);
si1+=si2;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
l1=si0;
goto L1;
L2:;
si0=0U;
l1=si0;
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
si2=32U;
si1|=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=2U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l2;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+4U);
si0-=si1;
l1=si0;
L1:;
si0=l3;
si1=32U;
si0+=si1;
i->g0=si0;
si0=l1;
L0:;
return si0;
}

U64 bicg_f41(bicgInstance*i,U32 l0,U64 l1,U32 l2) {
U32 l3=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1;
si0=i->g0;
si1=16U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l0;
sj1=l1;
si2=l2;
si3=255U;
si2&=si3;
si3=l3;
si4=8U;
si3+=si4;
si0=bicg_f76(i,si0,sj1,si2,si3);
si0=bicg_f62(i,si0);
l2=si0;
si0=l3;
sj0=i64_load(&i->m0,(U64)si0+8U);
l1=sj0;
si0=l3;
si1=16U;
si0+=si1;
i->g0=si0;
sj0=-1ULL;
sj1=l1;
si2=l2;
sj0=si2?sj0:sj1;
L0:;
return sj0;
}

U64 bicg_f42(bicgInstance*i,U32 l0,U64 l1,U32 l2) {
U32 si0,si2;
U64 sj0,sj1;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+60U);
sj1=l1;
si2=l2;
sj0=bicg_f41(i,si0,sj1,si2);
L0:;
return sj0;
}

U32 bicg_f43(bicgInstance*i,U32 l0) {
U32 si0;
si0=0U;
L0:;
return si0;
}

U64 bicg_f44(bicgInstance*i,U32 l0,U64 l1,U32 l2) {
U64 sj0;
sj0=0ULL;
L0:;
return sj0;
}

U32 bicg_f45(bicgInstance*i,U32 l0) {
U32 si0,si1;
si0=l0;
si1=-48U;
si0+=si1;
si1=10U;
si0=si0 < si1;
L0:;
return si0;
}

U32 bicg_f46(bicgInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2;
si0=l2;
si1=0U;
si0=si0 != si1;
l3=si0;
si0=l0;
si1=3U;
si0&=si1;
si0=!(si0);
if(si0){
goto L3;
}
si0=l2;
si0=!(si0);
if(si0){
goto L3;
}
si0=l1;
si1=255U;
si0&=si1;
l4=si0;
L4:;
{
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=l4;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
si1=0U;
si0=si0 != si1;
l3=si0;
si0=l0;
si1=1U;
si0+=si1;
l0=si0;
si1=3U;
si0&=si1;
si0=!(si0);
if(si0){
goto L3;
}
si0=l2;
if(si0){
goto L4;
}
}
L3:;
si0=l3;
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=l1;
si2=255U;
si1&=si2;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l2;
si1=4U;
si0=si0 < si1;
if(si0){
goto L5;
}
si0=l1;
si1=255U;
si0&=si1;
si1=16843009U;
si0*=si1;
l4=si0;
L6:;
{
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l4;
si0^=si1;
l3=si0;
si1=-1U;
si0^=si1;
si1=l3;
si2=-16843009U;
si1+=si2;
si0&=si1;
si1=-2139062144U;
si0&=si1;
if(si0){
goto L2;
}
si0=l0;
si1=4U;
si0+=si1;
l0=si0;
si0=l2;
si1=-4U;
si0+=si1;
l2=si0;
si1=3U;
si0=si0 > si1;
if(si0){
goto L6;
}
}
L5:;
si0=l2;
si0=!(si0);
if(si0){
goto L1;
}
L2:;
si0=l1;
si1=255U;
si0&=si1;
l3=si0;
L7:;
{
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=l3;
si0=si0 != si1;
if(si0){
goto L8;
}
si0=l0;
goto L0;
L8:;
si0=l0;
si1=1U;
si0+=si1;
l0=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L7;
}
}
L1:;
si0=0U;
L0:;
return si0;
}

U32 bicg_f47(bicgInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 si0,si1,si2;
si0=l0;
si1=0U;
si2=l1;
si0=bicg_f46(i,si0,si1,si2);
l2=si0;
si1=l0;
si0-=si1;
si1=l1;
si2=l2;
si0=si2?si0:si1;
L0:;
return si0;
}

F64 bicg_f48(bicgInstance*i,F64 l0,U32 l1) {
U64 l2=0;
U32 l3=0;
U32 si0,si1,si2;
U64 sj0,sj1;
F64 sd0,sd1;
sd0=l0;
sj0=i64_reinterpret_f64(sd0);
l2=sj0;
sj1=52ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
si1=2047U;
si0&=si1;
l3=si0;
si1=2047U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l3;
if(si0){
goto L2;
}
sd0=l0;
sd1=0;
si0=sd0 != sd1;
if(si0){
goto L4;
}
si0=0U;
l3=si0;
goto L3;
L4:;
sd0=l0;
sd1=1.8446744073709552e+19;
sd0*=sd1;
si1=l1;
sd0=bicg_f48(i,sd0,si1);
l0=sd0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0);
si1=-64U;
si0+=si1;
l3=si0;
L3:;
si0=l1;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
sd0=l0;
goto L0;
L2:;
si0=l1;
si1=l3;
si2=-1022U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
sj0=l2;
sj1=-9218868437227405313ULL;
sj0&=sj1;
sj1=4602678819172646912ULL;
sj0|=sj1;
sd0=f64_reinterpret_i64(sj0);
l0=sd0;
L1:;
sd0=l0;
L0:;
return sd0;
}

U32 bicg_f49(bicgInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 si0,si1,si2,si3,si4,si5,si6;
U64 sj1;
si0=i->g0;
si1=208U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l5;
si1=l2;
i32_store(&i->m0,(U64)si0+204U,si1);
si0=0U;
l6=si0;
si0=l5;
si1=160U;
si0+=si1;
si1=0U;
si2=40U;
si0=bicg_f13(i,si0,si1,si2);
si0=l5;
si1=l5;
si1=i32_load(&i->m0,(U64)si1+204U);
i32_store(&i->m0,(U64)si0+200U,si1);
si0=0U;
si1=l1;
si2=l5;
si3=200U;
si2+=si3;
si3=l5;
si4=80U;
si3+=si4;
si4=l5;
si5=160U;
si4+=si5;
si5=l3;
si6=l4;
si0=bicg_f50(i,si0,si1,si2,si3,si4,si5,si6);
si1=0U;
si0=(U32)((I32)si0>=(I32)si1);
if(si0){
goto L2;
}
si0=-1U;
l4=si0;
goto L1;
L2:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+76U);
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L3;
}
si0=l0;
si0=bicg_f18(i,si0);
l6=si0;
L3:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+72U);
si1=0U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L4;
}
si0=l0;
si1=l7;
si2=-33U;
si1&=si2;
i32_store(&i->m0,(U64)si0,si1);
L4:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+48U);
if(si0){
goto L8;
}
si0=l0;
si1=80U;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+44U);
l8=si0;
si0=l0;
si1=l5;
i32_store(&i->m0,(U64)si0+44U,si1);
goto L7;
L8:;
si0=0U;
l8=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+16U);
if(si0){
goto L6;
}
L7:;
si0=-1U;
l2=si0;
si0=l0;
si0=bicg_f20(i,si0);
if(si0){
goto L5;
}
L6:;
si0=l0;
si1=l1;
si2=l5;
si3=200U;
si2+=si3;
si3=l5;
si4=80U;
si3+=si4;
si4=l5;
si5=160U;
si4+=si5;
si5=l3;
si6=l4;
si0=bicg_f50(i,si0,si1,si2,si3,si4,si5,si6);
l2=si0;
L5:;
si0=l7;
si1=32U;
si0&=si1;
l4=si0;
si0=l8;
si0=!(si0);
if(si0){
goto L9;
}
si0=l0;
si1=0U;
si2=0U;
si3=l0;
si3=i32_load(&i->m0,(U64)si3+36U);
si0=TF(i->t0,si3,U32 (*)(bicgInstance*,U32,U32,U32))(i,si0,si1,si2);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+48U,si1);
si0=l0;
si1=l8;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l0;
si1=0U;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l0;
si0=i32_load(&i->m0,(U64)si0+20U);
l3=si0;
si0=l0;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l2;
si1=-1U;
si2=l3;
si0=si2?si0:si1;
l2=si0;
L9:;
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
l3=si1;
si2=l4;
si1|=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=-1U;
si1=l2;
si2=l3;
si3=32U;
si2&=si3;
si0=si2?si0:si1;
l4=si0;
si0=l6;
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
bicg_f19(i,si0);
L1:;
si0=l5;
si1=208U;
si0+=si1;
i->g0=si0;
si0=l4;
L0:;
return si0;
}

U32 bicg_f50(bicgInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6) {
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
U32 l22=0;
U32 l23=0;
U32 l24=0;
U64 l25=0;
U32 si0,si1,si2,si3,si4,si5,si6;
U64 sj0,sj1,sj2;
F64 sd1;
si0=i->g0;
si1=80U;
si0-=si1;
l7=si0;
i->g0=si0;
si0=l7;
si1=l1;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l7;
si1=55U;
si0+=si1;
l8=si0;
si0=l7;
si1=56U;
si0+=si1;
l9=si0;
si0=0U;
l10=si0;
si0=0U;
l11=si0;
si0=0U;
l12=si0;
L5:;
{
si0=l1;
l13=si0;
si0=l12;
si1=l11;
si2=2147483647U;
si1^=si2;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L4;
}
si0=l12;
si1=l11;
si0+=si1;
l11=si0;
si0=l13;
l12=si0;
si0=l13;
si0=i32_load8_u(&i->m0,(U64)si0);
l14=si0;
si0=!(si0);
if(si0){
goto L10;
}
L11:;
{
si0=l14;
si1=255U;
si0&=si1;
l14=si0;
if(si0){
goto L14;
}
si0=l12;
l1=si0;
goto L13;
L14:;
si0=l14;
si1=37U;
si0=si0 != si1;
if(si0){
goto L12;
}
si0=l12;
l14=si0;
L15:;
{
si0=l14;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
si1=37U;
si0=si0 == si1;
if(si0){
goto L16;
}
si0=l14;
l1=si0;
goto L13;
L16:;
si0=l12;
si1=1U;
si0+=si1;
l12=si0;
si0=l14;
si0=i32_load8_u(&i->m0,(U64)si0+2U);
l15=si0;
si0=l14;
si1=2U;
si0+=si1;
l1=si0;
l14=si0;
si0=l15;
si1=37U;
si0=si0 == si1;
if(si0){
goto L15;
}
}
L13:;
si0=l12;
si1=l13;
si0-=si1;
l12=si0;
si1=l11;
si2=2147483647U;
si1^=si2;
l14=si1;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L4;
}
si0=l0;
si0=!(si0);
if(si0){
goto L17;
}
si0=l0;
si1=l13;
si2=l12;
bicg_f51(i,si0,si1,si2);
L17:;
si0=l12;
if(si0){
goto L5;
}
si0=l7;
si1=l1;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l1;
si1=1U;
si0+=si1;
l12=si0;
si0=-1U;
l16=si0;
si0=l1;
si0=i32_load8_s(&i->m0,(U64)si0+1U);
si0=bicg_f45(i,si0);
si0=!(si0);
if(si0){
goto L18;
}
si0=l1;
si0=i32_load8_u(&i->m0,(U64)si0+2U);
si1=36U;
si0=si0 != si1;
if(si0){
goto L18;
}
si0=l1;
si1=3U;
si0+=si1;
l12=si0;
si0=l1;
si0=i32_load8_s(&i->m0,(U64)si0+1U);
si1=-48U;
si0+=si1;
l16=si0;
si0=1U;
l10=si0;
L18:;
si0=l7;
si1=l12;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=0U;
l17=si0;
si0=l12;
si0=i32_load8_s(&i->m0,(U64)si0);
l18=si0;
si1=-32U;
si0+=si1;
l1=si0;
si1=31U;
si0=si0 <= si1;
if(si0){
goto L20;
}
si0=l12;
l15=si0;
goto L19;
L20:;
si0=0U;
l17=si0;
si0=l12;
l15=si0;
si0=1U;
si1=l1;
si0<<=(si1&31);
l1=si0;
si1=75913U;
si0&=si1;
si0=!(si0);
if(si0){
goto L19;
}
L21:;
{
si0=l7;
si1=l12;
si2=1U;
si1+=si2;
l15=si1;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l1;
si1=l17;
si0|=si1;
l17=si0;
si0=l12;
si0=i32_load8_s(&i->m0,(U64)si0+1U);
l18=si0;
si1=-32U;
si0+=si1;
l1=si0;
si1=32U;
si0=si0 >= si1;
if(si0){
goto L19;
}
si0=l15;
l12=si0;
si0=1U;
si1=l1;
si0<<=(si1&31);
l1=si0;
si1=75913U;
si0&=si1;
if(si0){
goto L21;
}
}
L19:;
si0=l18;
si1=42U;
si0=si0 != si1;
if(si0){
goto L23;
}
si0=l15;
si0=i32_load8_s(&i->m0,(U64)si0+1U);
si0=bicg_f45(i,si0);
si0=!(si0);
if(si0){
goto L25;
}
si0=l15;
si0=i32_load8_u(&i->m0,(U64)si0+2U);
si1=36U;
si0=si0 != si1;
if(si0){
goto L25;
}
si0=l15;
si0=i32_load8_s(&i->m0,(U64)si0+1U);
si1=2U;
si0<<=(si1&31);
si1=l4;
si0+=si1;
si1=-192U;
si0+=si1;
si1=10U;
i32_store(&i->m0,(U64)si0,si1);
si0=l15;
si1=3U;
si0+=si1;
l18=si0;
si0=l15;
si0=i32_load8_s(&i->m0,(U64)si0+1U);
si1=3U;
si0<<=(si1&31);
si1=l3;
si0+=si1;
si1=-384U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l19=si0;
si0=1U;
l10=si0;
goto L24;
L25:;
si0=l10;
if(si0){
goto L9;
}
si0=l15;
si1=1U;
si0+=si1;
l18=si0;
si0=l0;
if(si0){
goto L26;
}
si0=l7;
si1=l18;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=0U;
l10=si0;
si0=0U;
l19=si0;
goto L22;
L26:;
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l12=si1;
si2=4U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l12;
si0=i32_load(&i->m0,(U64)si0);
l19=si0;
si0=0U;
l10=si0;
L24:;
si0=l7;
si1=l18;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l19;
si1=-1U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L22;
}
si0=0U;
si1=l19;
si0-=si1;
l19=si0;
si0=l17;
si1=8192U;
si0|=si1;
l17=si0;
goto L22;
L23:;
si0=l7;
si1=76U;
si0+=si1;
si0=bicg_f52(i,si0);
l19=si0;
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L4;
}
si0=l7;
si0=i32_load(&i->m0,(U64)si0+76U);
l18=si0;
L22:;
si0=0U;
l12=si0;
si0=-1U;
l20=si0;
si0=l18;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=46U;
si0=si0 == si1;
if(si0){
goto L28;
}
si0=l18;
l1=si0;
si0=0U;
l21=si0;
goto L27;
L28:;
si0=l18;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
si1=42U;
si0=si0 != si1;
if(si0){
goto L29;
}
si0=l18;
si0=i32_load8_s(&i->m0,(U64)si0+2U);
si0=bicg_f45(i,si0);
si0=!(si0);
if(si0){
goto L31;
}
si0=l18;
si0=i32_load8_u(&i->m0,(U64)si0+3U);
si1=36U;
si0=si0 != si1;
if(si0){
goto L31;
}
si0=l18;
si0=i32_load8_s(&i->m0,(U64)si0+2U);
si1=2U;
si0<<=(si1&31);
si1=l4;
si0+=si1;
si1=-192U;
si0+=si1;
si1=10U;
i32_store(&i->m0,(U64)si0,si1);
si0=l18;
si1=4U;
si0+=si1;
l1=si0;
si0=l18;
si0=i32_load8_s(&i->m0,(U64)si0+2U);
si1=3U;
si0<<=(si1&31);
si1=l3;
si0+=si1;
si1=-384U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l20=si0;
goto L30;
L31:;
si0=l10;
if(si0){
goto L9;
}
si0=l18;
si1=2U;
si0+=si1;
l1=si0;
si0=l0;
if(si0){
goto L32;
}
si0=0U;
l20=si0;
goto L30;
L32:;
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l15=si1;
si2=4U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l15;
si0=i32_load(&i->m0,(U64)si0);
l20=si0;
L30:;
si0=l7;
si1=l1;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l20;
si1=-1U;
si0^=si1;
si1=31U;
si0>>=(si1&31);
l21=si0;
goto L27;
L29:;
si0=l7;
si1=l18;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=1U;
l21=si0;
si0=l7;
si1=76U;
si0+=si1;
si0=bicg_f52(i,si0);
l20=si0;
si0=l7;
si0=i32_load(&i->m0,(U64)si0+76U);
l1=si0;
L27:;
L33:;
{
si0=l12;
l15=si0;
si0=28U;
l22=si0;
si0=l1;
l18=si0;
si0=i32_load8_s(&i->m0,(U64)si0);
l12=si0;
si1=-123U;
si0+=si1;
si1=-58U;
si0=si0 < si1;
if(si0){
goto L3;
}
si0=l18;
si1=1U;
si0+=si1;
l1=si0;
si0=l12;
si1=l15;
si2=58U;
si1*=si2;
si0+=si1;
si1=1151U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
l12=si0;
si1=-1U;
si0+=si1;
si1=8U;
si0=si0 < si1;
if(si0){
goto L33;
}
}
si0=l7;
si1=l1;
i32_store(&i->m0,(U64)si0+76U,si1);
si0=l12;
si1=27U;
si0=si0 == si1;
if(si0){
goto L36;
}
si0=l12;
si0=!(si0);
if(si0){
goto L3;
}
si0=l16;
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L37;
}
si0=l4;
si1=l16;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l12;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=l3;
si2=l16;
si3=3U;
si2<<=(si3&31);
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0+64U,sj1);
goto L35;
L37:;
si0=l0;
si0=!(si0);
if(si0){
goto L6;
}
si0=l7;
si1=64U;
si0+=si1;
si1=l12;
si2=l2;
si3=l6;
bicg_f53(i,si0,si1,si2,si3);
goto L34;
L36:;
si0=l16;
si1=-1U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L3;
}
L35:;
si0=0U;
l12=si0;
si0=l0;
si0=!(si0);
if(si0){
goto L5;
}
L34:;
si0=l17;
si1=-65537U;
si0&=si1;
l23=si0;
si1=l17;
si2=l17;
si3=8192U;
si2&=si3;
si0=si2?si0:si1;
l17=si0;
si0=0U;
l16=si0;
si0=1024U;
l24=si0;
si0=l9;
l22=si0;
si0=l18;
si0=i32_load8_s(&i->m0,(U64)si0);
l12=si0;
si1=-33U;
si0&=si1;
si1=l12;
si2=l12;
si3=15U;
si2&=si3;
si3=3U;
si2=si2 == si3;
si0=si2?si0:si1;
si1=l12;
si2=l15;
si0=si2?si0:si1;
l12=si0;
si1=-88U;
si0+=si1;
switch(si0){
case 0:
goto L49;
case 1:
goto L7;
case 2:
goto L7;
case 3:
goto L7;
case 4:
goto L7;
case 5:
goto L7;
case 6:
goto L7;
case 7:
goto L7;
case 8:
goto L7;
case 9:
goto L39;
case 10:
goto L7;
case 11:
goto L38;
case 12:
goto L47;
case 13:
goto L39;
case 14:
goto L39;
case 15:
goto L39;
case 16:
goto L7;
case 17:
goto L47;
case 18:
goto L7;
case 19:
goto L7;
case 20:
goto L7;
case 21:
goto L7;
case 22:
goto L51;
case 23:
goto L48;
case 24:
goto L50;
case 25:
goto L7;
case 26:
goto L7;
case 27:
goto L44;
case 28:
goto L7;
case 29:
goto L52;
case 30:
goto L7;
case 31:
goto L7;
case 32:
goto L49;
default:
goto L53;
}
L53:;
si0=l9;
l22=si0;
si0=l12;
si1=-65U;
si0+=si1;
switch(si0){
case 0:
goto L39;
case 1:
goto L7;
case 2:
goto L42;
case 3:
goto L7;
case 4:
goto L39;
case 5:
goto L39;
case 6:
goto L39;
default:
goto L54;
}
L54:;
si0=l12;
si1=83U;
si0=si0 == si1;
if(si0){
goto L43;
}
goto L8;
L52:;
si0=0U;
l16=si0;
si0=1024U;
l24=si0;
si0=l7;
sj0=i64_load(&i->m0,(U64)si0+64U);
l25=sj0;
goto L46;
L51:;
si0=0U;
l12=si0;
si0=l15;
si1=255U;
si0&=si1;
switch(si0){
case 0:
goto L61;
case 1:
goto L60;
case 2:
goto L59;
case 3:
goto L58;
case 4:
goto L57;
case 5:
goto L5;
case 6:
goto L56;
case 7:
goto L55;
default:
goto L5;
}
L61:;
si0=l7;
si0=i32_load(&i->m0,(U64)si0+64U);
si1=l11;
i32_store(&i->m0,(U64)si0,si1);
goto L5;
L60:;
si0=l7;
si0=i32_load(&i->m0,(U64)si0+64U);
si1=l11;
i32_store(&i->m0,(U64)si0,si1);
goto L5;
L59:;
si0=l7;
si0=i32_load(&i->m0,(U64)si0+64U);
si1=l11;
sj1=(U64)(I64)(I32)(si1);
i64_store(&i->m0,(U64)si0,sj1);
goto L5;
L58:;
si0=l7;
si0=i32_load(&i->m0,(U64)si0+64U);
si1=l11;
i32_store16(&i->m0,(U64)si0,si1);
goto L5;
L57:;
si0=l7;
si0=i32_load(&i->m0,(U64)si0+64U);
si1=l11;
i32_store8(&i->m0,(U64)si0,si1);
goto L5;
L56:;
si0=l7;
si0=i32_load(&i->m0,(U64)si0+64U);
si1=l11;
i32_store(&i->m0,(U64)si0,si1);
goto L5;
L55:;
si0=l7;
si0=i32_load(&i->m0,(U64)si0+64U);
si1=l11;
sj1=(U64)(I64)(I32)(si1);
i64_store(&i->m0,(U64)si0,sj1);
goto L5;
L50:;
si0=l20;
si1=8U;
si2=l20;
si3=8U;
si2=si2 > si3;
si0=si2?si0:si1;
l20=si0;
si0=l17;
si1=8U;
si0|=si1;
l17=si0;
si0=120U;
l12=si0;
L49:;
si0=l7;
sj0=i64_load(&i->m0,(U64)si0+64U);
si1=l9;
si2=l12;
si3=32U;
si2&=si3;
si0=bicg_f54(i,sj0,si1,si2);
l13=si0;
si0=0U;
l16=si0;
si0=1024U;
l24=si0;
si0=l7;
sj0=i64_load(&i->m0,(U64)si0+64U);
si0=!(sj0);
if(si0){
goto L45;
}
si0=l17;
si1=8U;
si0&=si1;
si0=!(si0);
if(si0){
goto L45;
}
si0=l12;
si1=4U;
si0>>=(si1&31);
si1=1024U;
si0+=si1;
l24=si0;
si0=2U;
l16=si0;
goto L45;
L48:;
si0=0U;
l16=si0;
si0=1024U;
l24=si0;
si0=l7;
sj0=i64_load(&i->m0,(U64)si0+64U);
si1=l9;
si0=bicg_f55(i,sj0,si1);
l13=si0;
si0=l17;
si1=8U;
si0&=si1;
si0=!(si0);
if(si0){
goto L45;
}
si0=l20;
si1=l9;
si2=l13;
si1-=si2;
l12=si1;
si2=1U;
si1+=si2;
si2=l20;
si3=l12;
si2=(U32)((I32)si2>(I32)si3);
si0=si2?si0:si1;
l20=si0;
goto L45;
L47:;
si0=l7;
sj0=i64_load(&i->m0,(U64)si0+64U);
l25=sj0;
sj1=-1ULL;
si0=(U64)((I64)sj0>(I64)sj1);
if(si0){
goto L62;
}
si0=l7;
sj1=0ULL;
sj2=l25;
sj1-=sj2;
l25=sj1;
i64_store(&i->m0,(U64)si0+64U,sj1);
si0=1U;
l16=si0;
si0=1024U;
l24=si0;
goto L46;
L62:;
si0=l17;
si1=2048U;
si0&=si1;
si0=!(si0);
if(si0){
goto L63;
}
si0=1U;
l16=si0;
si0=1025U;
l24=si0;
goto L46;
L63:;
si0=1026U;
si1=1024U;
si2=l17;
si3=1U;
si2&=si3;
l16=si2;
si0=si2?si0:si1;
l24=si0;
L46:;
sj0=l25;
si1=l9;
si0=bicg_f56(i,sj0,si1);
l13=si0;
L45:;
si0=l21;
si0=!(si0);
if(si0){
goto L64;
}
si0=l20;
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L4;
}
L64:;
si0=l17;
si1=-65537U;
si0&=si1;
si1=l17;
si2=l21;
si0=si2?si0:si1;
l17=si0;
si0=l7;
sj0=i64_load(&i->m0,(U64)si0+64U);
l25=sj0;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
goto L65;
}
si0=l20;
if(si0){
goto L65;
}
si0=l9;
l13=si0;
si0=l9;
l22=si0;
si0=0U;
l20=si0;
goto L7;
L65:;
si0=l20;
si1=l9;
si2=l13;
si1-=si2;
sj2=l25;
si2=!(sj2);
si1+=si2;
l12=si1;
si2=l20;
si3=l12;
si2=(U32)((I32)si2>(I32)si3);
si0=si2?si0:si1;
l20=si0;
goto L8;
L44:;
si0=l7;
si0=i32_load(&i->m0,(U64)si0+64U);
l12=si0;
si1=1123U;
si2=l12;
si0=si2?si0:si1;
l13=si0;
si0=l13;
si1=l13;
si2=l20;
si3=2147483647U;
si4=l20;
si5=2147483647U;
si4=si4 < si5;
si2=si4?si2:si3;
si1=bicg_f47(i,si1,si2);
l12=si1;
si0+=si1;
l22=si0;
si0=l20;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L66;
}
si0=l23;
l17=si0;
si0=l12;
l20=si0;
goto L7;
L66:;
si0=l23;
l17=si0;
si0=l12;
l20=si0;
si0=l22;
si0=i32_load8_u(&i->m0,(U64)si0);
if(si0){
goto L4;
}
goto L7;
L43:;
si0=l20;
si0=!(si0);
if(si0){
goto L67;
}
si0=l7;
si0=i32_load(&i->m0,(U64)si0+64U);
l14=si0;
goto L41;
L67:;
si0=0U;
l12=si0;
si0=l0;
si1=32U;
si2=l19;
si3=0U;
si4=l17;
bicg_f57(i,si0,si1,si2,si3,si4);
goto L40;
L42:;
si0=l7;
si1=0U;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l7;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1+64U);
i64_store32(&i->m0,(U64)si0+8U,sj1);
si0=l7;
si1=l7;
si2=8U;
si1+=si2;
i32_store(&i->m0,(U64)si0+64U,si1);
si0=l7;
si1=8U;
si0+=si1;
l14=si0;
si0=-1U;
l20=si0;
L41:;
si0=0U;
l12=si0;
L69:;
{
si0=l14;
si0=i32_load(&i->m0,(U64)si0);
l15=si0;
si0=!(si0);
if(si0){
goto L68;
}
si0=l7;
si1=4U;
si0+=si1;
si1=l15;
si0=bicg_f64(i,si0,si1);
l15=si0;
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
l13=si0;
if(si0){
goto L70;
}
si0=l15;
si1=l20;
si2=l12;
si1-=si2;
si0=si0 > si1;
if(si0){
goto L70;
}
si0=l14;
si1=4U;
si0+=si1;
l14=si0;
si0=l20;
si1=l15;
si2=l12;
si1+=si2;
l12=si1;
si0=si0 > si1;
if(si0){
goto L69;
}
goto L68;
L70:;
}
si0=l13;
if(si0){
goto L2;
}
L68:;
si0=61U;
l22=si0;
si0=l12;
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L3;
}
si0=l0;
si1=32U;
si2=l19;
si3=l12;
si4=l17;
bicg_f57(i,si0,si1,si2,si3,si4);
si0=l12;
if(si0){
goto L71;
}
si0=0U;
l12=si0;
goto L40;
L71:;
si0=0U;
l15=si0;
si0=l7;
si0=i32_load(&i->m0,(U64)si0+64U);
l14=si0;
L72:;
{
si0=l14;
si0=i32_load(&i->m0,(U64)si0);
l13=si0;
si0=!(si0);
if(si0){
goto L40;
}
si0=l7;
si1=4U;
si0+=si1;
si1=l13;
si0=bicg_f64(i,si0,si1);
l13=si0;
si1=l15;
si0+=si1;
l15=si0;
si1=l12;
si0=si0 > si1;
if(si0){
goto L40;
}
si0=l0;
si1=l7;
si2=4U;
si1+=si2;
si2=l13;
bicg_f51(i,si0,si1,si2);
si0=l14;
si1=4U;
si0+=si1;
l14=si0;
si0=l15;
si1=l12;
si0=si0 < si1;
if(si0){
goto L72;
}
}
L40:;
si0=l0;
si1=32U;
si2=l19;
si3=l12;
si4=l17;
si5=8192U;
si4^=si5;
bicg_f57(i,si0,si1,si2,si3,si4);
si0=l19;
si1=l12;
si2=l19;
si3=l12;
si2=(U32)((I32)si2>(I32)si3);
si0=si2?si0:si1;
l12=si0;
goto L5;
L39:;
si0=l21;
si0=!(si0);
if(si0){
goto L73;
}
si0=l20;
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L4;
}
L73:;
si0=61U;
l22=si0;
si0=l0;
si1=l7;
sd1=f64_load(&i->m0,(U64)si1+64U);
si2=l19;
si3=l20;
si4=l17;
si5=l12;
si6=l5;
si0=TF(i->t0,si6,U32 (*)(bicgInstance*,U32,F64,U32,U32,U32,U32))(i,si0,sd1,si2,si3,si4,si5);
l12=si0;
si1=0U;
si0=(U32)((I32)si0>=(I32)si1);
if(si0){
goto L5;
}
goto L3;
L38:;
si0=l7;
si1=l7;
sj1=i64_load(&i->m0,(U64)si1+64U);
i64_store8(&i->m0,(U64)si0+55U,sj1);
si0=1U;
l20=si0;
si0=l8;
l13=si0;
si0=l9;
l22=si0;
si0=l23;
l17=si0;
goto L7;
L12:;
si0=l12;
si0=i32_load8_u(&i->m0,(U64)si0+1U);
l14=si0;
si0=l12;
si1=1U;
si0+=si1;
l12=si0;
goto L11;
}
UNREACHABLE;
L10:;
si0=l0;
if(si0){
goto L1;
}
si0=l10;
si0=!(si0);
if(si0){
goto L6;
}
si0=1U;
l12=si0;
L75:;
{
si0=l4;
si1=l12;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l14=si0;
si0=!(si0);
if(si0){
goto L74;
}
si0=l3;
si1=l12;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si1=l14;
si2=l2;
si3=l6;
bicg_f53(i,si0,si1,si2,si3);
si0=1U;
l11=si0;
si0=l12;
si1=1U;
si0+=si1;
l12=si0;
si1=10U;
si0=si0 != si1;
if(si0){
goto L75;
}
goto L1;
}
UNREACHABLE;
L74:;
si0=1U;
l11=si0;
si0=l12;
si1=10U;
si0=si0 >= si1;
if(si0){
goto L1;
}
L76:;
{
si0=l4;
si1=l12;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L9;
}
si0=1U;
l11=si0;
si0=l12;
si1=1U;
si0+=si1;
l12=si0;
si1=10U;
si0=si0 == si1;
if(si0){
goto L1;
}
goto L76;
}
UNREACHABLE;
L9:;
si0=28U;
l22=si0;
goto L3;
L8:;
si0=l9;
l22=si0;
L7:;
si0=l20;
si1=l22;
si2=l13;
si1-=si2;
l18=si1;
si2=l20;
si3=l18;
si2=(U32)((I32)si2>(I32)si3);
si0=si2?si0:si1;
l20=si0;
si1=l16;
si2=2147483647U;
si1^=si2;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L4;
}
si0=61U;
l22=si0;
si0=l19;
si1=l16;
si2=l20;
si1+=si2;
l15=si1;
si2=l19;
si3=l15;
si2=(U32)((I32)si2>(I32)si3);
si0=si2?si0:si1;
l12=si0;
si1=l14;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L3;
}
si0=l0;
si1=32U;
si2=l12;
si3=l15;
si4=l17;
bicg_f57(i,si0,si1,si2,si3,si4);
si0=l0;
si1=l24;
si2=l16;
bicg_f51(i,si0,si1,si2);
si0=l0;
si1=48U;
si2=l12;
si3=l15;
si4=l17;
si5=65536U;
si4^=si5;
bicg_f57(i,si0,si1,si2,si3,si4);
si0=l0;
si1=48U;
si2=l20;
si3=l18;
si4=0U;
bicg_f57(i,si0,si1,si2,si3,si4);
si0=l0;
si1=l13;
si2=l18;
bicg_f51(i,si0,si1,si2);
si0=l0;
si1=32U;
si2=l12;
si3=l15;
si4=l17;
si5=8192U;
si4^=si5;
bicg_f57(i,si0,si1,si2,si3,si4);
goto L5;
L6:;
}
si0=0U;
l11=si0;
goto L1;
L4:;
si0=61U;
l22=si0;
L3:;
si0=bicg_f14(i);
si1=l22;
i32_store(&i->m0,(U64)si0,si1);
L2:;
si0=-1U;
l11=si0;
L1:;
si0=l7;
si1=80U;
si0+=si1;
i->g0=si0;
si0=l11;
L0:;
return si0;
}

void bicg_f51(bicgInstance*i,U32 l0,U32 l1,U32 l2) {
U32 si0,si1,si2;
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=32U;
si0&=si1;
if(si0){
goto L1;
}
si0=l1;
si1=l2;
si2=l0;
si0=bicg_f29(i,si0,si1,si2);
L1:;
L0:;
}

U32 bicg_f52(bicgInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 si0,si1,si2,si3,si4;
si0=0U;
l1=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si0=i32_load8_s(&i->m0,(U64)si0);
si0=bicg_f45(i,si0);
if(si0){
goto L1;
}
si0=0U;
goto L0;
L1:;
L2:;
{
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l2=si0;
si0=-1U;
l3=si0;
si0=l1;
si1=214748364U;
si0=si0 > si1;
if(si0){
goto L3;
}
si0=-1U;
si1=l2;
si1=i32_load8_s(&i->m0,(U64)si1);
si2=-48U;
si1+=si2;
l3=si1;
si2=l1;
si3=10U;
si2*=si3;
l1=si2;
si1+=si2;
si2=l3;
si3=l1;
si4=2147483647U;
si3^=si4;
si2=(U32)((I32)si2>(I32)si3);
si0=si2?si0:si1;
l3=si0;
L3:;
si0=l0;
si1=l2;
si2=1U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
l1=si0;
si0=l2;
si0=i32_load8_s(&i->m0,(U64)si0+1U);
si0=bicg_f45(i,si0);
if(si0){
goto L2;
}
}
si0=l3;
L0:;
return si0;
}

void bicg_f53(bicgInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 si0,si1,si2;
U64 sj1;
F64 sd1;
si0=l1;
si1=-9U;
si0+=si1;
switch(si0){
case 0:
goto L19;
case 1:
goto L18;
case 2:
goto L17;
case 3:
goto L14;
case 4:
goto L16;
case 5:
goto L15;
case 6:
goto L13;
case 7:
goto L12;
case 8:
goto L11;
case 9:
goto L10;
case 10:
goto L9;
case 11:
goto L8;
case 12:
goto L7;
case 13:
goto L6;
case 14:
goto L5;
case 15:
goto L4;
case 16:
goto L3;
case 17:
goto L2;
default:
goto L1;
}
L19:;
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l1=si1;
si2=4U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L18:;
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l1=si1;
si2=4U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l1;
sj1=i64_load32_s(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
goto L0;
L17:;
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l1=si1;
si2=4U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l1;
sj1=i64_load32_u(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
goto L0;
L16:;
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l1=si1;
si2=4U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l1;
sj1=i64_load32_s(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
goto L0;
L15:;
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l1=si1;
si2=4U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l1;
sj1=i64_load32_u(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
goto L0;
L14:;
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
si2=7U;
si1+=si2;
si2=-8U;
si1&=si2;
l1=si1;
si2=8U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
goto L0;
L13:;
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l1=si1;
si2=4U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l1;
sj1=i64_load16_s(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
goto L0;
L12:;
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l1=si1;
si2=4U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l1;
sj1=i64_load16_u(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
goto L0;
L11:;
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l1=si1;
si2=4U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l1;
sj1=i64_load8_s(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
goto L0;
L10:;
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l1=si1;
si2=4U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l1;
sj1=i64_load8_u(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
goto L0;
L9:;
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
si2=7U;
si1+=si2;
si2=-8U;
si1&=si2;
l1=si1;
si2=8U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
goto L0;
L8:;
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l1=si1;
si2=4U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l1;
sj1=i64_load32_u(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
goto L0;
L7:;
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
si2=7U;
si1+=si2;
si2=-8U;
si1&=si2;
l1=si1;
si2=8U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
goto L0;
L6:;
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
si2=7U;
si1+=si2;
si2=-8U;
si1&=si2;
l1=si1;
si2=8U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l1;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
goto L0;
L5:;
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l1=si1;
si2=4U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l1;
sj1=i64_load32_s(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
goto L0;
L4:;
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
l1=si1;
si2=4U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l1;
sj1=i64_load32_u(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
goto L0;
L3:;
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1);
si2=7U;
si1+=si2;
si2=-8U;
si1&=si2;
l1=si1;
si2=8U;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l1;
sd1=f64_load(&i->m0,(U64)si1);
f64_store(&i->m0,(U64)si0,sd1);
goto L0;
L2:;
si0=l0;
si1=l2;
si2=l3;
TF(i->t0,si2,void (*)(bicgInstance*,U32,U32))(i,si0,si1);
L1:;
L0:;
}

U32 bicg_f54(bicgInstance*i,U64 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 si0,si1,si2;
U64 sj0,sj1;
sj0=l0;
si0=!(sj0);
if(si0){
goto L1;
}
L2:;
{
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
sj1=l0;
si1=(U32)(sj1);
si2=15U;
si1&=si2;
si2=1680U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
si2=l2;
si1|=si2;
i32_store8(&i->m0,(U64)si0,si1);
sj0=l0;
sj1=15ULL;
si0=sj0 > sj1;
l3=si0;
sj0=l0;
sj1=4ULL;
sj0>>=(sj1&63);
l0=sj0;
si0=l3;
if(si0){
goto L2;
}
}
L1:;
si0=l1;
L0:;
return si0;
}

U32 bicg_f55(bicgInstance*i,U64 l0,U32 l1) {
U32 l2=0;
U32 si0,si1,si2;
U64 sj0,sj1;
sj0=l0;
si0=!(sj0);
if(si0){
goto L1;
}
L2:;
{
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
sj1=l0;
si1=(U32)(sj1);
si2=7U;
si1&=si2;
si2=48U;
si1|=si2;
i32_store8(&i->m0,(U64)si0,si1);
sj0=l0;
sj1=7ULL;
si0=sj0 > sj1;
l2=si0;
sj0=l0;
sj1=3ULL;
sj0>>=(sj1&63);
l0=sj0;
si0=l2;
if(si0){
goto L2;
}
}
L1:;
si0=l1;
L0:;
return si0;
}

U32 bicg_f56(bicgInstance*i,U64 l0,U32 l1) {
U64 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1,sj2,sj3;
sj0=l0;
sj1=4294967296ULL;
si0=sj0 >= sj1;
if(si0){
goto L2;
}
sj0=l0;
l2=sj0;
goto L1;
L2:;
L3:;
{
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
sj1=l0;
sj2=l0;
sj3=10ULL;
sj2=DIV_U(sj2,sj3);
l2=sj2;
sj3=10ULL;
sj2*=sj3;
sj1-=sj2;
si1=(U32)(sj1);
si2=48U;
si1|=si2;
i32_store8(&i->m0,(U64)si0,si1);
sj0=l0;
sj1=42949672959ULL;
si0=sj0 > sj1;
l3=si0;
sj0=l2;
l0=sj0;
si0=l3;
if(si0){
goto L3;
}
}
L1:;
sj0=l2;
si0=(U32)(sj0);
l3=si0;
si0=!(si0);
if(si0){
goto L4;
}
L5:;
{
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
si1=l3;
si2=l3;
si3=10U;
si2=DIV_U(si2,si3);
l4=si2;
si3=10U;
si2*=si3;
si1-=si2;
si2=48U;
si1|=si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si1=9U;
si0=si0 > si1;
l5=si0;
si0=l4;
l3=si0;
si0=l5;
if(si0){
goto L5;
}
}
L4:;
si0=l1;
L0:;
return si0;
}

void bicg_f57(bicgInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 si0,si1,si2,si3,si4,si5;
si0=i->g0;
si1=256U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l2;
si1=l3;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L1;
}
si0=l4;
si1=73728U;
si0&=si1;
if(si0){
goto L1;
}
si0=l5;
si1=l1;
si2=255U;
si1&=si2;
si2=l2;
si3=l3;
si2-=si3;
l3=si2;
si3=256U;
si4=l3;
si5=256U;
si4=si4 < si5;
l2=si4;
si2=si4?si2:si3;
si0=bicg_f13(i,si0,si1,si2);
si0=l2;
if(si0){
goto L2;
}
L3:;
{
si0=l0;
si1=l5;
si2=256U;
bicg_f51(i,si0,si1,si2);
si0=l3;
si1=-256U;
si0+=si1;
l3=si0;
si1=255U;
si0=si0 > si1;
if(si0){
goto L3;
}
}
L2:;
si0=l0;
si1=l5;
si2=l3;
bicg_f51(i,si0,si1,si2);
L1:;
si0=l5;
si1=256U;
si0+=si1;
i->g0=si0;
L0:;
}

U32 bicg_f58(bicgInstance*i,U32 l0,F64 l1,U32 l2,U32 l3,U32 l4,U32 l5) {
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
U32 l22=0;
U32 l23=0;
U64 l24=0;
U64 l25=0;
F64 l26=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2,sj3;
F64 sd0,sd1,sd2,sd3,sd4;
si0=i->g0;
si1=560U;
si0-=si1;
l6=si0;
i->g0=si0;
si0=0U;
l7=si0;
si0=l6;
si1=0U;
i32_store(&i->m0,(U64)si0+44U,si1);
sd0=l1;
sj0=bicg_f59(i,sd0);
l24=sj0;
sj1=-1ULL;
si0=(U64)((I64)sj0>(I64)sj1);
if(si0){
goto L2;
}
si0=1U;
l8=si0;
si0=1034U;
l9=si0;
sd0=l1;
sd0=-(sd0);
l1=sd0;
sj0=bicg_f59(i,sd0);
l24=sj0;
goto L1;
L2:;
si0=l4;
si1=2048U;
si0&=si1;
si0=!(si0);
if(si0){
goto L3;
}
si0=1U;
l8=si0;
si0=1037U;
l9=si0;
goto L1;
L3:;
si0=1040U;
si1=1035U;
si2=l4;
si3=1U;
si2&=si3;
l8=si2;
si0=si2?si0:si1;
l9=si0;
si0=l8;
si0=!(si0);
l7=si0;
L1:;
sj0=l24;
sj1=9218868437227405312ULL;
sj0&=sj1;
sj1=9218868437227405312ULL;
si0=sj0 != sj1;
if(si0){
goto L5;
}
si0=l0;
si1=32U;
si2=l2;
si3=l8;
si4=3U;
si3+=si4;
l10=si3;
si4=l4;
si5=-65537U;
si4&=si5;
bicg_f57(i,si0,si1,si2,si3,si4);
si0=l0;
si1=l9;
si2=l8;
bicg_f51(i,si0,si1,si2);
si0=l0;
si1=1070U;
si2=1113U;
si3=l5;
si4=32U;
si3&=si4;
l11=si3;
si1=si3?si1:si2;
si2=1074U;
si3=1117U;
si4=l11;
si2=si4?si2:si3;
sd3=l1;
sd4=l1;
si3=sd3 != sd4;
si1=si3?si1:si2;
si2=3U;
bicg_f51(i,si0,si1,si2);
si0=l0;
si1=32U;
si2=l2;
si3=l10;
si4=l4;
si5=8192U;
si4^=si5;
bicg_f57(i,si0,si1,si2,si3,si4);
si0=l10;
si1=l2;
si2=l10;
si3=l2;
si2=(U32)((I32)si2>(I32)si3);
si0=si2?si0:si1;
l12=si0;
goto L4;
L5:;
si0=l6;
si1=16U;
si0+=si1;
l13=si0;
sd0=l1;
si1=l6;
si2=44U;
si1+=si2;
sd0=bicg_f48(i,sd0,si1);
l1=sd0;
sd1=l1;
sd0+=sd1;
l1=sd0;
sd1=0;
si0=sd0 == sd1;
if(si0){
goto L9;
}
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+44U);
l10=si1;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l5;
si1=32U;
si0|=si1;
l14=si0;
si1=97U;
si0=si0 != si1;
if(si0){
goto L8;
}
goto L6;
L9:;
si0=l5;
si1=32U;
si0|=si1;
l14=si0;
si1=97U;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=6U;
si1=l3;
si2=l3;
si3=0U;
si2=(U32)((I32)si2<(I32)si3);
si0=si2?si0:si1;
l15=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+44U);
l16=si0;
goto L7;
L8:;
si0=l6;
si1=l10;
si2=-29U;
si1+=si2;
l16=si1;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=6U;
si1=l3;
si2=l3;
si3=0U;
si2=(U32)((I32)si2<(I32)si3);
si0=si2?si0:si1;
l15=si0;
sd0=l1;
sd1=268435456;
sd0*=sd1;
l1=sd0;
L7:;
si0=l6;
si1=48U;
si0+=si1;
si1=0U;
si2=288U;
si3=l16;
si4=0U;
si3=(U32)((I32)si3<(I32)si4);
si1=si3?si1:si2;
si0+=si1;
l17=si0;
l11=si0;
L10:;
{
sd0=l1;
sd1=4294967296;
si0=sd0 < sd1;
sd1=l1;
sd2=0;
si1=sd1 >= sd2;
si0&=si1;
si0=!(si0);
if(si0){
goto L12;
}
sd0=l1;
si0=I32_TRUNC_U_F64(sd0);
l10=si0;
goto L11;
L12:;
si0=0U;
l10=si0;
L11:;
si0=l11;
si1=l10;
i32_store(&i->m0,(U64)si0,si1);
si0=l11;
si1=4U;
si0+=si1;
l11=si0;
sd0=l1;
si1=l10;
sd1=(F64)(si1);
sd0-=sd1;
sd1=1000000000;
sd0*=sd1;
l1=sd0;
sd1=0;
si0=sd0 != sd1;
if(si0){
goto L10;
}
}
si0=l16;
si1=1U;
si0=(U32)((I32)si0>=(I32)si1);
if(si0){
goto L14;
}
si0=l16;
l3=si0;
si0=l11;
l10=si0;
si0=l17;
l18=si0;
goto L13;
L14:;
si0=l17;
l18=si0;
si0=l16;
l3=si0;
L15:;
{
si0=l3;
si1=29U;
si2=l3;
si3=29U;
si2=(U32)((I32)si2<(I32)si3);
si0=si2?si0:si1;
l3=si0;
si0=l11;
si1=-4U;
si0+=si1;
l10=si0;
si1=l18;
si0=si0 < si1;
if(si0){
goto L16;
}
si0=l3;
sj0=(U64)(si0);
l25=sj0;
sj0=0ULL;
l24=sj0;
L17:;
{
si0=l10;
si1=l10;
sj1=i64_load32_u(&i->m0,(U64)si1);
sj2=l25;
sj1<<=(sj2&63);
sj2=l24;
sj3=4294967295ULL;
sj2&=sj3;
sj1+=sj2;
l24=sj1;
sj2=l24;
sj3=1000000000ULL;
sj2=DIV_U(sj2,sj3);
l24=sj2;
sj3=1000000000ULL;
sj2*=sj3;
sj1-=sj2;
i64_store32(&i->m0,(U64)si0,sj1);
si0=l10;
si1=-4U;
si0+=si1;
l10=si0;
si1=l18;
si0=si0 >= si1;
if(si0){
goto L17;
}
}
sj0=l24;
si0=(U32)(sj0);
l10=si0;
si0=!(si0);
if(si0){
goto L16;
}
si0=l18;
si1=-4U;
si0+=si1;
l18=si0;
si1=l10;
i32_store(&i->m0,(U64)si0,si1);
L16:;
L19:;
{
si0=l11;
l10=si0;
si1=l18;
si0=si0 <= si1;
if(si0){
goto L18;
}
si0=l10;
si1=-4U;
si0+=si1;
l11=si0;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L19;
}
}
L18:;
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+44U);
si2=l3;
si1-=si2;
l3=si1;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l10;
l11=si0;
si0=l3;
si1=0U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L15;
}
}
L13:;
si0=l3;
si1=-1U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L20;
}
si0=l15;
si1=25U;
si0+=si1;
si1=9U;
si0=DIV_U(si0,si1);
si1=1U;
si0+=si1;
l19=si0;
si0=l14;
si1=102U;
si0=si0 == si1;
l20=si0;
L21:;
{
si0=0U;
si1=l3;
si0-=si1;
l11=si0;
si1=9U;
si2=l11;
si3=9U;
si2=(U32)((I32)si2<(I32)si3);
si0=si2?si0:si1;
l21=si0;
si0=l18;
si1=l10;
si0=si0 < si1;
if(si0){
goto L23;
}
si0=l18;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
goto L22;
L23:;
si0=1000000000U;
si1=l21;
si0>>=(si1&31);
l22=si0;
si0=-1U;
si1=l21;
si0<<=(si1&31);
si1=-1U;
si0^=si1;
l23=si0;
si0=0U;
l3=si0;
si0=l18;
l11=si0;
L24:;
{
si0=l11;
si1=l11;
si1=i32_load(&i->m0,(U64)si1);
l12=si1;
si2=l21;
si1>>=(si2&31);
si2=l3;
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l12;
si1=l23;
si0&=si1;
si1=l22;
si0*=si1;
l3=si0;
si0=l11;
si1=4U;
si0+=si1;
l11=si0;
si1=l10;
si0=si0 < si1;
if(si0){
goto L24;
}
}
si0=l18;
si0=i32_load(&i->m0,(U64)si0);
l11=si0;
si0=l3;
si0=!(si0);
if(si0){
goto L22;
}
si0=l10;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l10;
si1=4U;
si0+=si1;
l10=si0;
L22:;
si0=l6;
si1=l6;
si1=i32_load(&i->m0,(U64)si1+44U);
si2=l21;
si1+=si2;
l3=si1;
i32_store(&i->m0,(U64)si0+44U,si1);
si0=l17;
si1=l18;
si2=l11;
si2=!(si2);
si3=2U;
si2<<=(si3&31);
si1+=si2;
l18=si1;
si2=l20;
si0=si2?si0:si1;
l11=si0;
si1=l19;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l10;
si2=l10;
si3=l11;
si2-=si3;
si3=2U;
si2=(U32)((I32)si2>>(si3&31));
si3=l19;
si2=(U32)((I32)si2>(I32)si3);
si0=si2?si0:si1;
l10=si0;
si0=l3;
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L21;
}
}
L20:;
si0=0U;
l3=si0;
si0=l18;
si1=l10;
si0=si0 >= si1;
if(si0){
goto L25;
}
si0=l17;
si1=l18;
si0-=si1;
si1=2U;
si0=(U32)((I32)si0>>(si1&31));
si1=9U;
si0*=si1;
l3=si0;
si0=10U;
l11=si0;
si0=l18;
si0=i32_load(&i->m0,(U64)si0);
l12=si0;
si1=10U;
si0=si0 < si1;
if(si0){
goto L25;
}
L26:;
{
si0=l3;
si1=1U;
si0+=si1;
l3=si0;
si0=l12;
si1=l11;
si2=10U;
si1*=si2;
l11=si1;
si0=si0 >= si1;
if(si0){
goto L26;
}
}
L25:;
si0=l15;
si1=0U;
si2=l3;
si3=l14;
si4=102U;
si3=si3 == si4;
si1=si3?si1:si2;
si0-=si1;
si1=l15;
si2=0U;
si1=si1 != si2;
si2=l14;
si3=103U;
si2=si2 == si3;
si1&=si2;
si0-=si1;
l11=si0;
si1=l10;
si2=l17;
si1-=si2;
si2=2U;
si1=(U32)((I32)si1>>(si2&31));
si2=9U;
si1*=si2;
si2=-9U;
si1+=si2;
si0=(U32)((I32)si0>=(I32)si1);
if(si0){
goto L27;
}
si0=l11;
si1=9216U;
si0+=si1;
l12=si0;
si1=9U;
si0=I32_DIV_S(si0,si1);
l22=si0;
si1=2U;
si0<<=(si1&31);
si1=l6;
si2=48U;
si1+=si2;
si2=4U;
si3=292U;
si4=l16;
si5=0U;
si4=(U32)((I32)si4<(I32)si5);
si2=si4?si2:si3;
si1+=si2;
si0+=si1;
si1=-4096U;
si0+=si1;
l21=si0;
si0=10U;
l11=si0;
si0=l12;
si1=l22;
si2=9U;
si1*=si2;
si0-=si1;
l12=si0;
si1=7U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L28;
}
L29:;
{
si0=l11;
si1=10U;
si0*=si1;
l11=si0;
si0=l12;
si1=1U;
si0+=si1;
l12=si0;
si1=8U;
si0=si0 != si1;
if(si0){
goto L29;
}
}
L28:;
si0=l21;
si1=4U;
si0+=si1;
l23=si0;
si0=l21;
si0=i32_load(&i->m0,(U64)si0);
l12=si0;
si1=l12;
si2=l11;
si1=DIV_U(si1,si2);
l19=si1;
si2=l11;
si1*=si2;
si0-=si1;
l22=si0;
if(si0){
goto L31;
}
si0=l23;
si1=l10;
si0=si0 == si1;
if(si0){
goto L30;
}
L31:;
si0=l19;
si1=1U;
si0&=si1;
if(si0){
goto L33;
}
sd0=9007199254740992;
l1=sd0;
si0=l11;
si1=1000000000U;
si0=si0 != si1;
if(si0){
goto L32;
}
si0=l21;
si1=l18;
si0=si0 <= si1;
if(si0){
goto L32;
}
si0=l21;
si1=-4U;
si0+=si1;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L32;
}
L33:;
sd0=9007199254740994;
l1=sd0;
L32:;
sd0=0.5;
sd1=1;
sd2=1.5;
si3=l23;
si4=l10;
si3=si3 == si4;
sd1=si3?sd1:sd2;
sd2=1.5;
si3=l22;
si4=l11;
si5=1U;
si4>>=(si5&31);
l23=si4;
si3=si3 == si4;
sd1=si3?sd1:sd2;
si2=l22;
si3=l23;
si2=si2 < si3;
sd0=si2?sd0:sd1;
l26=sd0;
si0=l7;
if(si0){
goto L34;
}
si0=l9;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=45U;
si0=si0 != si1;
if(si0){
goto L34;
}
sd0=l26;
sd0=-(sd0);
l26=sd0;
sd0=l1;
sd0=-(sd0);
l1=sd0;
L34:;
si0=l21;
si1=l12;
si2=l22;
si1-=si2;
l12=si1;
i32_store(&i->m0,(U64)si0,si1);
sd0=l1;
sd1=l26;
sd0+=sd1;
sd1=l1;
si0=sd0 == sd1;
if(si0){
goto L30;
}
si0=l21;
si1=l12;
si2=l11;
si1+=si2;
l11=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l11;
si1=1000000000U;
si0=si0 < si1;
if(si0){
goto L35;
}
L36:;
{
si0=l21;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=l21;
si1=-4U;
si0+=si1;
l21=si0;
si1=l18;
si0=si0 >= si1;
if(si0){
goto L37;
}
si0=l18;
si1=-4U;
si0+=si1;
l18=si0;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
L37:;
si0=l21;
si1=l21;
si1=i32_load(&i->m0,(U64)si1);
si2=1U;
si1+=si2;
l11=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l11;
si1=999999999U;
si0=si0 > si1;
if(si0){
goto L36;
}
}
L35:;
si0=l17;
si1=l18;
si0-=si1;
si1=2U;
si0=(U32)((I32)si0>>(si1&31));
si1=9U;
si0*=si1;
l3=si0;
si0=10U;
l11=si0;
si0=l18;
si0=i32_load(&i->m0,(U64)si0);
l12=si0;
si1=10U;
si0=si0 < si1;
if(si0){
goto L30;
}
L38:;
{
si0=l3;
si1=1U;
si0+=si1;
l3=si0;
si0=l12;
si1=l11;
si2=10U;
si1*=si2;
l11=si1;
si0=si0 >= si1;
if(si0){
goto L38;
}
}
L30:;
si0=l21;
si1=4U;
si0+=si1;
l11=si0;
si1=l10;
si2=l10;
si3=l11;
si2=si2 > si3;
si0=si2?si0:si1;
l10=si0;
L27:;
L40:;
{
si0=l10;
l11=si0;
si1=l18;
si0=si0 <= si1;
l12=si0;
if(si0){
goto L39;
}
si0=l11;
si1=-4U;
si0+=si1;
l10=si0;
si0=i32_load(&i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L40;
}
}
L39:;
si0=l14;
si1=103U;
si0=si0 == si1;
if(si0){
goto L42;
}
si0=l4;
si1=8U;
si0&=si1;
l21=si0;
goto L41;
L42:;
si0=l3;
si1=-1U;
si0^=si1;
si1=-1U;
si2=l15;
si3=1U;
si4=l15;
si2=si4?si2:si3;
l10=si2;
si3=l3;
si2=(U32)((I32)si2>(I32)si3);
si3=l3;
si4=-5U;
si3=(U32)((I32)si3>(I32)si4);
si2&=si3;
l21=si2;
si0=si2?si0:si1;
si1=l10;
si0+=si1;
l15=si0;
si0=-1U;
si1=-2U;
si2=l21;
si0=si2?si0:si1;
si1=l5;
si0+=si1;
l5=si0;
si0=l4;
si1=8U;
si0&=si1;
l21=si0;
if(si0){
goto L41;
}
si0=-9U;
l10=si0;
si0=l12;
if(si0){
goto L43;
}
si0=l11;
si1=-4U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l21=si0;
si0=!(si0);
if(si0){
goto L43;
}
si0=10U;
l12=si0;
si0=0U;
l10=si0;
si0=l21;
si1=10U;
si0=REM_U(si0,si1);
if(si0){
goto L43;
}
L44:;
{
si0=l10;
l22=si0;
si1=1U;
si0+=si1;
l10=si0;
si0=l21;
si1=l12;
si2=10U;
si1*=si2;
l12=si1;
si0=REM_U(si0,si1);
si0=!(si0);
if(si0){
goto L44;
}
}
si0=l22;
si1=-1U;
si0^=si1;
l10=si0;
L43:;
si0=l11;
si1=l17;
si0-=si1;
si1=2U;
si0=(U32)((I32)si0>>(si1&31));
si1=9U;
si0*=si1;
l12=si0;
si0=l5;
si1=-33U;
si0&=si1;
si1=70U;
si0=si0 != si1;
if(si0){
goto L45;
}
si0=0U;
l21=si0;
si0=l15;
si1=l12;
si2=l10;
si1+=si2;
si2=-9U;
si1+=si2;
l10=si1;
si2=0U;
si3=l10;
si4=0U;
si3=(U32)((I32)si3>(I32)si4);
si1=si3?si1:si2;
l10=si1;
si2=l15;
si3=l10;
si2=(U32)((I32)si2<(I32)si3);
si0=si2?si0:si1;
l15=si0;
goto L41;
L45:;
si0=0U;
l21=si0;
si0=l15;
si1=l3;
si2=l12;
si1+=si2;
si2=l10;
si1+=si2;
si2=-9U;
si1+=si2;
l10=si1;
si2=0U;
si3=l10;
si4=0U;
si3=(U32)((I32)si3>(I32)si4);
si1=si3?si1:si2;
l10=si1;
si2=l15;
si3=l10;
si2=(U32)((I32)si2<(I32)si3);
si0=si2?si0:si1;
l15=si0;
L41:;
si0=-1U;
l12=si0;
si0=l15;
si1=2147483645U;
si2=2147483646U;
si3=l15;
si4=l21;
si3|=si4;
l22=si3;
si1=si3?si1:si2;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L4;
}
si0=l15;
si1=l22;
si2=0U;
si1=si1 != si2;
si0+=si1;
si1=1U;
si0+=si1;
l23=si0;
si0=l5;
si1=-33U;
si0&=si1;
l20=si0;
si1=70U;
si0=si0 != si1;
if(si0){
goto L47;
}
si0=l3;
si1=l23;
si2=2147483647U;
si1^=si2;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L4;
}
si0=l3;
si1=0U;
si2=l3;
si3=0U;
si2=(U32)((I32)si2>(I32)si3);
si0=si2?si0:si1;
l10=si0;
goto L46;
L47:;
si0=l13;
si1=l3;
si2=l3;
si3=31U;
si2=(U32)((I32)si2>>(si3&31));
l10=si2;
si1^=si2;
si2=l10;
si1-=si2;
sj1=(U64)(si1);
si2=l13;
si1=bicg_f56(i,sj1,si2);
l10=si1;
si0-=si1;
si1=1U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L48;
}
L49:;
{
si0=l10;
si1=-1U;
si0+=si1;
l10=si0;
si1=48U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l13;
si1=l10;
si0-=si1;
si1=2U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L49;
}
}
L48:;
si0=l10;
si1=-2U;
si0+=si1;
l19=si0;
si1=l5;
i32_store8(&i->m0,(U64)si0,si1);
si0=-1U;
l12=si0;
si0=l10;
si1=-1U;
si0+=si1;
si1=45U;
si2=43U;
si3=l3;
si4=0U;
si3=(U32)((I32)si3<(I32)si4);
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l13;
si1=l19;
si0-=si1;
l10=si0;
si1=l23;
si2=2147483647U;
si1^=si2;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L4;
}
L46:;
si0=-1U;
l12=si0;
si0=l10;
si1=l23;
si0+=si1;
l10=si0;
si1=l8;
si2=2147483647U;
si1^=si2;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L4;
}
si0=l0;
si1=32U;
si2=l2;
si3=l10;
si4=l8;
si3+=si4;
l23=si3;
si4=l4;
bicg_f57(i,si0,si1,si2,si3,si4);
si0=l0;
si1=l9;
si2=l8;
bicg_f51(i,si0,si1,si2);
si0=l0;
si1=48U;
si2=l2;
si3=l23;
si4=l4;
si5=65536U;
si4^=si5;
bicg_f57(i,si0,si1,si2,si3,si4);
si0=l20;
si1=70U;
si0=si0 != si1;
if(si0){
goto L53;
}
si0=l6;
si1=16U;
si0+=si1;
si1=8U;
si0|=si1;
l21=si0;
si0=l6;
si1=16U;
si0+=si1;
si1=9U;
si0|=si1;
l3=si0;
si0=l17;
si1=l18;
si2=l18;
si3=l17;
si2=si2 > si3;
si0=si2?si0:si1;
l12=si0;
l18=si0;
L54:;
{
si0=l18;
sj0=i64_load32_u(&i->m0,(U64)si0);
si1=l3;
si0=bicg_f56(i,sj0,si1);
l10=si0;
si0=l18;
si1=l12;
si0=si0 == si1;
if(si0){
goto L56;
}
si0=l10;
si1=l6;
si2=16U;
si1+=si2;
si0=si0 <= si1;
if(si0){
goto L55;
}
L57:;
{
si0=l10;
si1=-1U;
si0+=si1;
l10=si0;
si1=48U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l10;
si1=l6;
si2=16U;
si1+=si2;
si0=si0 > si1;
if(si0){
goto L57;
}
goto L55;
}
UNREACHABLE;
L56:;
si0=l10;
si1=l3;
si0=si0 != si1;
if(si0){
goto L55;
}
si0=l6;
si1=48U;
i32_store8(&i->m0,(U64)si0+24U,si1);
si0=l21;
l10=si0;
L55:;
si0=l0;
si1=l10;
si2=l3;
si3=l10;
si2-=si3;
bicg_f51(i,si0,si1,si2);
si0=l18;
si1=4U;
si0+=si1;
l18=si0;
si1=l17;
si0=si0 <= si1;
if(si0){
goto L54;
}
}
si0=l22;
si0=!(si0);
if(si0){
goto L58;
}
si0=l0;
si1=1121U;
si2=1U;
bicg_f51(i,si0,si1,si2);
L58:;
si0=l18;
si1=l11;
si0=si0 >= si1;
if(si0){
goto L52;
}
si0=l15;
si1=1U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L52;
}
L59:;
{
si0=l18;
sj0=i64_load32_u(&i->m0,(U64)si0);
si1=l3;
si0=bicg_f56(i,sj0,si1);
l10=si0;
si1=l6;
si2=16U;
si1+=si2;
si0=si0 <= si1;
if(si0){
goto L60;
}
L61:;
{
si0=l10;
si1=-1U;
si0+=si1;
l10=si0;
si1=48U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l10;
si1=l6;
si2=16U;
si1+=si2;
si0=si0 > si1;
if(si0){
goto L61;
}
}
L60:;
si0=l0;
si1=l10;
si2=l15;
si3=9U;
si4=l15;
si5=9U;
si4=(U32)((I32)si4<(I32)si5);
si2=si4?si2:si3;
bicg_f51(i,si0,si1,si2);
si0=l15;
si1=-9U;
si0+=si1;
l10=si0;
si0=l18;
si1=4U;
si0+=si1;
l18=si0;
si1=l11;
si0=si0 >= si1;
if(si0){
goto L51;
}
si0=l15;
si1=9U;
si0=(U32)((I32)si0>(I32)si1);
l12=si0;
si0=l10;
l15=si0;
si0=l12;
if(si0){
goto L59;
}
goto L51;
}
UNREACHABLE;
L53:;
si0=l15;
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L62;
}
si0=l11;
si1=l18;
si2=4U;
si1+=si2;
si2=l11;
si3=l18;
si2=si2 > si3;
si0=si2?si0:si1;
l22=si0;
si0=l6;
si1=16U;
si0+=si1;
si1=8U;
si0|=si1;
l17=si0;
si0=l6;
si1=16U;
si0+=si1;
si1=9U;
si0|=si1;
l3=si0;
si0=l18;
l11=si0;
L63:;
{
si0=l11;
sj0=i64_load32_u(&i->m0,(U64)si0);
si1=l3;
si0=bicg_f56(i,sj0,si1);
l10=si0;
si1=l3;
si0=si0 != si1;
if(si0){
goto L64;
}
si0=l6;
si1=48U;
i32_store8(&i->m0,(U64)si0+24U,si1);
si0=l17;
l10=si0;
L64:;
si0=l11;
si1=l18;
si0=si0 == si1;
if(si0){
goto L66;
}
si0=l10;
si1=l6;
si2=16U;
si1+=si2;
si0=si0 <= si1;
if(si0){
goto L65;
}
L67:;
{
si0=l10;
si1=-1U;
si0+=si1;
l10=si0;
si1=48U;
i32_store8(&i->m0,(U64)si0,si1);
si0=l10;
si1=l6;
si2=16U;
si1+=si2;
si0=si0 > si1;
if(si0){
goto L67;
}
goto L65;
}
UNREACHABLE;
L66:;
si0=l0;
si1=l10;
si2=1U;
bicg_f51(i,si0,si1,si2);
si0=l10;
si1=1U;
si0+=si1;
l10=si0;
si0=l15;
si1=l21;
si0|=si1;
si0=!(si0);
if(si0){
goto L65;
}
si0=l0;
si1=1121U;
si2=1U;
bicg_f51(i,si0,si1,si2);
L65:;
si0=l0;
si1=l10;
si2=l15;
si3=l3;
si4=l10;
si3-=si4;
l12=si3;
si4=l15;
si5=l12;
si4=(U32)((I32)si4<(I32)si5);
si2=si4?si2:si3;
bicg_f51(i,si0,si1,si2);
si0=l15;
si1=l12;
si0-=si1;
l15=si0;
si0=l11;
si1=4U;
si0+=si1;
l11=si0;
si1=l22;
si0=si0 >= si1;
if(si0){
goto L62;
}
si0=l15;
si1=-1U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L63;
}
}
L62:;
si0=l0;
si1=48U;
si2=l15;
si3=18U;
si2+=si3;
si3=18U;
si4=0U;
bicg_f57(i,si0,si1,si2,si3,si4);
si0=l0;
si1=l19;
si2=l13;
si3=l19;
si2-=si3;
bicg_f51(i,si0,si1,si2);
goto L50;
L52:;
si0=l15;
l10=si0;
L51:;
si0=l0;
si1=48U;
si2=l10;
si3=9U;
si2+=si3;
si3=9U;
si4=0U;
bicg_f57(i,si0,si1,si2,si3,si4);
L50:;
si0=l0;
si1=32U;
si2=l2;
si3=l23;
si4=l4;
si5=8192U;
si4^=si5;
bicg_f57(i,si0,si1,si2,si3,si4);
si0=l23;
si1=l2;
si2=l23;
si3=l2;
si2=(U32)((I32)si2>(I32)si3);
si0=si2?si0:si1;
l12=si0;
goto L4;
L6:;
si0=l9;
si1=l5;
si2=26U;
si1<<=(si2&31);
si2=31U;
si1=(U32)((I32)si1>>(si2&31));
si2=9U;
si1&=si2;
si0+=si1;
l23=si0;
si0=l3;
si1=11U;
si0=si0 > si1;
if(si0){
goto L68;
}
si0=12U;
si1=l3;
si0-=si1;
l10=si0;
sd0=16;
l26=sd0;
L69:;
{
sd0=l26;
sd1=16;
sd0*=sd1;
l26=sd0;
si0=l10;
si1=-1U;
si0+=si1;
l10=si0;
if(si0){
goto L69;
}
}
si0=l23;
si0=i32_load8_u(&i->m0,(U64)si0);
si1=45U;
si0=si0 != si1;
if(si0){
goto L70;
}
sd0=l26;
sd1=l1;
sd1=-(sd1);
sd2=l26;
sd1-=sd2;
sd0+=sd1;
sd0=-(sd0);
l1=sd0;
goto L68;
L70:;
sd0=l1;
sd1=l26;
sd0+=sd1;
sd1=l26;
sd0-=sd1;
l1=sd0;
L68:;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+44U);
l10=si0;
si1=l10;
si2=31U;
si1=(U32)((I32)si1>>(si2&31));
l10=si1;
si0^=si1;
si1=l10;
si0-=si1;
sj0=(U64)(si0);
si1=l13;
si0=bicg_f56(i,sj0,si1);
l10=si0;
si1=l13;
si0=si0 != si1;
if(si0){
goto L71;
}
si0=l6;
si1=48U;
i32_store8(&i->m0,(U64)si0+15U,si1);
si0=l6;
si1=15U;
si0+=si1;
l10=si0;
L71:;
si0=l8;
si1=2U;
si0|=si1;
l21=si0;
si0=l5;
si1=32U;
si0&=si1;
l18=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+44U);
l11=si0;
si0=l10;
si1=-2U;
si0+=si1;
l22=si0;
si1=l5;
si2=15U;
si1+=si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l10;
si1=-1U;
si0+=si1;
si1=45U;
si2=43U;
si3=l11;
si4=0U;
si3=(U32)((I32)si3<(I32)si4);
si1=si3?si1:si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l4;
si1=8U;
si0&=si1;
l12=si0;
si0=l6;
si1=16U;
si0+=si1;
l11=si0;
L72:;
{
si0=l11;
l10=si0;
sd0=l1;
sd0=fabs(sd0);
sd1=2147483648;
si0=sd0 < sd1;
si0=!(si0);
if(si0){
goto L74;
}
sd0=l1;
si0=I32_TRUNC_S_F64(sd0);
l11=si0;
goto L73;
L74:;
si0=-2147483648U;
l11=si0;
L73:;
si0=l10;
si1=l11;
si2=1680U;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
si2=l18;
si1|=si2;
i32_store8(&i->m0,(U64)si0,si1);
sd0=l1;
si1=l11;
sd1=(F64)(I32)(si1);
sd0-=sd1;
sd1=16;
sd0*=sd1;
l1=sd0;
si0=l10;
si1=1U;
si0+=si1;
l11=si0;
si1=l6;
si2=16U;
si1+=si2;
si0-=si1;
si1=1U;
si0=si0 != si1;
if(si0){
goto L75;
}
si0=l12;
if(si0){
goto L76;
}
si0=l3;
si1=0U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L76;
}
sd0=l1;
sd1=0;
si0=sd0 == sd1;
if(si0){
goto L75;
}
L76:;
si0=l10;
si1=46U;
i32_store8(&i->m0,(U64)si0+1U,si1);
si0=l10;
si1=2U;
si0+=si1;
l11=si0;
L75:;
sd0=l1;
sd1=0;
si0=sd0 != sd1;
if(si0){
goto L72;
}
}
si0=-1U;
l12=si0;
si0=2147483645U;
si1=l21;
si2=l13;
si3=l22;
si2-=si3;
l19=si2;
si1+=si2;
l10=si1;
si0-=si1;
si1=l3;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L4;
}
si0=l3;
si0=!(si0);
if(si0){
goto L78;
}
si0=l11;
si1=l6;
si2=16U;
si1+=si2;
si0-=si1;
l18=si0;
si1=-2U;
si0+=si1;
si1=l3;
si0=(U32)((I32)si0>=(I32)si1);
if(si0){
goto L78;
}
si0=l3;
si1=2U;
si0+=si1;
l11=si0;
goto L77;
L78:;
si0=l11;
si1=l6;
si2=16U;
si1+=si2;
si0-=si1;
l18=si0;
l11=si0;
L77:;
si0=l0;
si1=32U;
si2=l2;
si3=l10;
si4=l11;
si3+=si4;
l10=si3;
si4=l4;
bicg_f57(i,si0,si1,si2,si3,si4);
si0=l0;
si1=l23;
si2=l21;
bicg_f51(i,si0,si1,si2);
si0=l0;
si1=48U;
si2=l2;
si3=l10;
si4=l4;
si5=65536U;
si4^=si5;
bicg_f57(i,si0,si1,si2,si3,si4);
si0=l0;
si1=l6;
si2=16U;
si1+=si2;
si2=l18;
bicg_f51(i,si0,si1,si2);
si0=l0;
si1=48U;
si2=l11;
si3=l18;
si2-=si3;
si3=0U;
si4=0U;
bicg_f57(i,si0,si1,si2,si3,si4);
si0=l0;
si1=l22;
si2=l19;
bicg_f51(i,si0,si1,si2);
si0=l0;
si1=32U;
si2=l2;
si3=l10;
si4=l4;
si5=8192U;
si4^=si5;
bicg_f57(i,si0,si1,si2,si3,si4);
si0=l10;
si1=l2;
si2=l10;
si3=l2;
si2=(U32)((I32)si2>(I32)si3);
si0=si2?si0:si1;
l12=si0;
L4:;
si0=l6;
si1=560U;
si0+=si1;
i->g0=si0;
si0=l12;
L0:;
return si0;
}

U64 bicg_f59(bicgInstance*i,F64 l0) {
U64 sj0;
F64 sd0;
sd0=l0;
sj0=i64_reinterpret_f64(sd0);
L0:;
return sj0;
}

U32 bicg_f60(bicgInstance*i,U32 l0,U32 l1,U32 l2) {
U32 si0,si1,si2,si3,si4;
si0=l0;
si1=l1;
si2=l2;
si3=0U;
si4=0U;
si0=bicg_f49(i,si0,si1,si2,si3,si4);
L0:;
return si0;
}

U32 bicg_f61(bicgInstance*i,U32 l0,U32 l1,U32 l2) {
U32 si0,si1,si2,si3,si4;
si0=l0;
si1=l1;
si2=l2;
si3=6U;
si4=0U;
si0=bicg_f49(i,si0,si1,si2,si3,si4);
L0:;
return si0;
}

U32 bicg_f62(bicgInstance*i,U32 l0) {
U32 si0,si1;
si0=l0;
if(si0){
goto L1;
}
si0=0U;
goto L0;
L1:;
si0=bicg_f14(i);
si1=l0;
i32_store(&i->m0,(U64)si0,si1);
si0=-1U;
L0:;
return si0;
}

U32 bicg_f63(bicgInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 si0,si1,si2;
si0=1U;
l3=si0;
si0=l0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l1;
si1=127U;
si0=si0 <= si1;
if(si0){
goto L1;
}
si0=bicg_f36(i);
si0=i32_load(&i->m0,(U64)si0+96U);
si0=i32_load(&i->m0,(U64)si0);
if(si0){
goto L4;
}
si0=l1;
si1=-128U;
si0&=si1;
si1=57216U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=bicg_f14(i);
si1=25U;
i32_store(&i->m0,(U64)si0,si1);
goto L3;
L4:;
si0=l1;
si1=2047U;
si0=si0 > si1;
if(si0){
goto L5;
}
si0=l0;
si1=l1;
si2=63U;
si1&=si2;
si2=128U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+1U,si1);
si0=l0;
si1=l1;
si2=6U;
si1>>=(si2&31);
si2=192U;
si1|=si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=2U;
goto L0;
L5:;
si0=l1;
si1=55296U;
si0=si0 < si1;
if(si0){
goto L7;
}
si0=l1;
si1=-8192U;
si0&=si1;
si1=57344U;
si0=si0 != si1;
if(si0){
goto L6;
}
L7:;
si0=l0;
si1=l1;
si2=63U;
si1&=si2;
si2=128U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+2U,si1);
si0=l0;
si1=l1;
si2=12U;
si1>>=(si2&31);
si2=224U;
si1|=si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=l1;
si2=6U;
si1>>=(si2&31);
si2=63U;
si1&=si2;
si2=128U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+1U,si1);
si0=3U;
goto L0;
L6:;
si0=l1;
si1=-65536U;
si0+=si1;
si1=1048575U;
si0=si0 > si1;
if(si0){
goto L8;
}
si0=l0;
si1=l1;
si2=63U;
si1&=si2;
si2=128U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+3U,si1);
si0=l0;
si1=l1;
si2=18U;
si1>>=(si2&31);
si2=240U;
si1|=si2;
i32_store8(&i->m0,(U64)si0,si1);
si0=l0;
si1=l1;
si2=6U;
si1>>=(si2&31);
si2=63U;
si1&=si2;
si2=128U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+2U,si1);
si0=l0;
si1=l1;
si2=12U;
si1>>=(si2&31);
si2=63U;
si1&=si2;
si2=128U;
si1|=si2;
i32_store8(&i->m0,(U64)si0+1U,si1);
si0=4U;
goto L0;
L8:;
si0=bicg_f14(i);
si1=25U;
i32_store(&i->m0,(U64)si0,si1);
L3:;
si0=-1U;
l3=si0;
L2:;
si0=l3;
goto L0;
L1:;
si0=l0;
si1=l1;
i32_store8(&i->m0,(U64)si0,si1);
si0=1U;
L0:;
return si0;
}

U32 bicg_f64(bicgInstance*i,U32 l0,U32 l1) {
U32 si0,si1,si2;
si0=l0;
if(si0){
goto L1;
}
si0=0U;
goto L0;
L1:;
si0=l0;
si1=l1;
si2=0U;
si0=bicg_f63(i,si0,si1,si2);
L0:;
return si0;
}

U32 bicg_f65(bicgInstance*i,U32 l0) {
U32 l1=0;
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
U32 si0,si1,si2,si3,si4,si5;
U64 sj1;
si0=i->g0;
si1=16U;
si0-=si1;
l1=si0;
i->g0=si0;
si0=l0;
si1=244U;
si0=si0 > si1;
if(si0){
goto L10;
}
si0=0U;
si0=i32_load(&i->m0,(U64)si0+3240U);
l2=si0;
si1=16U;
si2=l0;
si3=11U;
si2+=si3;
si3=-8U;
si2&=si3;
si3=l0;
si4=11U;
si3=si3 < si4;
si1=si3?si1:si2;
l3=si1;
si2=3U;
si1>>=(si2&31);
l4=si1;
si0>>=(si1&31);
l0=si0;
si1=3U;
si0&=si1;
si0=!(si0);
if(si0){
goto L11;
}
si0=l0;
si1=-1U;
si0^=si1;
si1=1U;
si0&=si1;
si1=l4;
si0+=si1;
l5=si0;
si1=3U;
si0<<=(si1&31);
l4=si0;
si1=3280U;
si0+=si1;
l0=si0;
si1=l4;
si2=3288U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l4=si1;
si1=i32_load(&i->m0,(U64)si1+8U);
l3=si1;
si0=si0 != si1;
if(si0){
goto L13;
}
si0=0U;
si1=l2;
si2=-2U;
si3=l5;
si2=I32_ROTL(si2,si3);
si1&=si2;
i32_store(&i->m0,(U64)si0+3240U,si1);
goto L12;
L13:;
si0=l3;
si1=l0;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+8U,si1);
L12:;
si0=l4;
si1=8U;
si0+=si1;
l0=si0;
si0=l4;
si1=l5;
si2=3U;
si1<<=(si2&31);
l5=si1;
si2=3U;
si1|=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l4;
si1=l5;
si0+=si1;
l4=si0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1+4U);
si2=1U;
si1|=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L1;
L11:;
si0=l3;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+3248U);
l6=si1;
si0=si0 <= si1;
if(si0){
goto L9;
}
si0=l0;
si0=!(si0);
if(si0){
goto L14;
}
si0=l0;
si1=l4;
si0<<=(si1&31);
si1=2U;
si2=l4;
si1<<=(si2&31);
l0=si1;
si2=0U;
si3=l0;
si2-=si3;
si1|=si2;
si0&=si1;
l0=si0;
si1=0U;
si2=l0;
si1-=si2;
si0&=si1;
si0=I32_CTZ(si0);
l4=si0;
si1=3U;
si0<<=(si1&31);
l0=si0;
si1=3280U;
si0+=si1;
l5=si0;
si1=l0;
si2=3288U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l0=si1;
si1=i32_load(&i->m0,(U64)si1+8U);
l7=si1;
si0=si0 != si1;
if(si0){
goto L16;
}
si0=0U;
si1=l2;
si2=-2U;
si3=l4;
si2=I32_ROTL(si2,si3);
si1&=si2;
l2=si1;
i32_store(&i->m0,(U64)si0+3240U,si1);
goto L15;
L16:;
si0=l7;
si1=l5;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l5;
si1=l7;
i32_store(&i->m0,(U64)si0+8U,si1);
L15:;
si0=l0;
si1=l3;
si2=3U;
si1|=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l3;
si0+=si1;
l7=si0;
si1=l4;
si2=3U;
si1<<=(si2&31);
l4=si1;
si2=l3;
si1-=si2;
l5=si1;
si2=1U;
si1|=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l4;
si0+=si1;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si0=!(si0);
if(si0){
goto L17;
}
si0=l6;
si1=-8U;
si0&=si1;
si1=3280U;
si0+=si1;
l3=si0;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+3260U);
l4=si0;
si0=l2;
si1=1U;
si2=l6;
si3=3U;
si2>>=(si3&31);
si1<<=(si2&31);
l8=si1;
si0&=si1;
if(si0){
goto L19;
}
si0=0U;
si1=l2;
si2=l8;
si1|=si2;
i32_store(&i->m0,(U64)si0+3240U,si1);
si0=l3;
l8=si0;
goto L18;
L19:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
l8=si0;
L18:;
si0=l3;
si1=l4;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l8;
si1=l4;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l4;
si1=l8;
i32_store(&i->m0,(U64)si0+8U,si1);
L17:;
si0=l0;
si1=8U;
si0+=si1;
l0=si0;
si0=0U;
si1=l7;
i32_store(&i->m0,(U64)si0+3260U,si1);
si0=0U;
si1=l5;
i32_store(&i->m0,(U64)si0+3248U,si1);
goto L1;
L14:;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+3244U);
l9=si0;
si0=!(si0);
if(si0){
goto L9;
}
si0=l9;
si1=0U;
si2=l9;
si1-=si2;
si0&=si1;
si0=I32_CTZ(si0);
si1=2U;
si0<<=(si1&31);
si1=3544U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=-8U;
si0&=si1;
si1=l3;
si0-=si1;
l4=si0;
si0=l7;
l5=si0;
L21:;
{
si0=l5;
si0=i32_load(&i->m0,(U64)si0+16U);
l0=si0;
if(si0){
goto L22;
}
si0=l5;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=!(si0);
if(si0){
goto L20;
}
L22:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=-8U;
si0&=si1;
si1=l3;
si0-=si1;
l5=si0;
si1=l4;
si2=l5;
si3=l4;
si2=si2 < si3;
l5=si2;
si0=si2?si0:si1;
l4=si0;
si0=l0;
si1=l7;
si2=l5;
si0=si2?si0:si1;
l7=si0;
si0=l0;
l5=si0;
goto L21;
}
UNREACHABLE;
L20:;
si0=l7;
si0=i32_load(&i->m0,(U64)si0+24U);
l10=si0;
si0=l7;
si0=i32_load(&i->m0,(U64)si0+12U);
l8=si0;
si1=l7;
si0=si0 == si1;
if(si0){
goto L23;
}
si0=l7;
si0=i32_load(&i->m0,(U64)si0+8U);
l0=si0;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+3256U);
si0=si0 < si1;
si0=l0;
si1=l8;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l8;
si1=l0;
i32_store(&i->m0,(U64)si0+8U,si1);
goto L2;
L23:;
si0=l7;
si1=20U;
si0+=si1;
l5=si0;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
if(si0){
goto L24;
}
si0=l7;
si0=i32_load(&i->m0,(U64)si0+16U);
l0=si0;
si0=!(si0);
if(si0){
goto L8;
}
si0=l7;
si1=16U;
si0+=si1;
l5=si0;
L24:;
L25:;
{
si0=l5;
l11=si0;
si0=l0;
l8=si0;
si1=20U;
si0+=si1;
l5=si0;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
if(si0){
goto L25;
}
si0=l8;
si1=16U;
si0+=si1;
l5=si0;
si0=l8;
si0=i32_load(&i->m0,(U64)si0+16U);
l0=si0;
if(si0){
goto L25;
}
}
si0=l11;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
goto L2;
L10:;
si0=-1U;
l3=si0;
si0=l0;
si1=-65U;
si0=si0 > si1;
if(si0){
goto L9;
}
si0=l0;
si1=11U;
si0+=si1;
l0=si0;
si1=-8U;
si0&=si1;
l3=si0;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+3244U);
l6=si0;
si0=!(si0);
if(si0){
goto L9;
}
si0=0U;
l11=si0;
si0=l3;
si1=256U;
si0=si0 < si1;
if(si0){
goto L26;
}
si0=31U;
l11=si0;
si0=l3;
si1=16777215U;
si0=si0 > si1;
if(si0){
goto L26;
}
si0=l3;
si1=38U;
si2=l0;
si3=8U;
si2>>=(si3&31);
si2=I32_CLZ(si2);
l0=si2;
si1-=si2;
si0>>=(si1&31);
si1=1U;
si0&=si1;
si1=l0;
si2=1U;
si1<<=(si2&31);
si0-=si1;
si1=62U;
si0+=si1;
l11=si0;
L26:;
si0=0U;
si1=l3;
si0-=si1;
l4=si0;
si0=l11;
si1=2U;
si0<<=(si1&31);
si1=3544U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
if(si0){
goto L30;
}
si0=0U;
l0=si0;
si0=0U;
l8=si0;
goto L29;
L30:;
si0=0U;
l0=si0;
si0=l3;
si1=0U;
si2=25U;
si3=l11;
si4=1U;
si3>>=(si4&31);
si2-=si3;
si3=l11;
si4=31U;
si3=si3 == si4;
si1=si3?si1:si2;
si0<<=(si1&31);
l7=si0;
si0=0U;
l8=si0;
L31:;
{
si0=l5;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=-8U;
si0&=si1;
si1=l3;
si0-=si1;
l2=si0;
si1=l4;
si0=si0 >= si1;
if(si0){
goto L32;
}
si0=l2;
l4=si0;
si0=l5;
l8=si0;
si0=l2;
if(si0){
goto L32;
}
si0=0U;
l4=si0;
si0=l5;
l8=si0;
si0=l5;
l0=si0;
goto L28;
L32:;
si0=l0;
si1=l5;
si2=20U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
si2=l2;
si3=l5;
si4=l7;
si5=29U;
si4>>=(si5&31);
si5=4U;
si4&=si5;
si3+=si4;
si4=16U;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
l5=si3;
si2=si2 == si3;
si0=si2?si0:si1;
si1=l0;
si2=l2;
si0=si2?si0:si1;
l0=si0;
si0=l7;
si1=1U;
si0<<=(si1&31);
l7=si0;
si0=l5;
if(si0){
goto L31;
}
}
L29:;
si0=l0;
si1=l8;
si0|=si1;
if(si0){
goto L33;
}
si0=0U;
l8=si0;
si0=2U;
si1=l11;
si0<<=(si1&31);
l0=si0;
si1=0U;
si2=l0;
si1-=si2;
si0|=si1;
si1=l6;
si0&=si1;
l0=si0;
si0=!(si0);
if(si0){
goto L9;
}
si0=l0;
si1=0U;
si2=l0;
si1-=si2;
si0&=si1;
si0=I32_CTZ(si0);
si1=2U;
si0<<=(si1&31);
si1=3544U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
L33:;
si0=l0;
si0=!(si0);
if(si0){
goto L27;
}
L28:;
L34:;
{
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=-8U;
si0&=si1;
si1=l3;
si0-=si1;
l2=si0;
si1=l4;
si0=si0 < si1;
l7=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+16U);
l5=si0;
if(si0){
goto L35;
}
si0=l0;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
L35:;
si0=l2;
si1=l4;
si2=l7;
si0=si2?si0:si1;
l4=si0;
si0=l0;
si1=l8;
si2=l7;
si0=si2?si0:si1;
l8=si0;
si0=l5;
l0=si0;
si0=l5;
if(si0){
goto L34;
}
}
L27:;
si0=l8;
si0=!(si0);
if(si0){
goto L9;
}
si0=l4;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+3248U);
si2=l3;
si1-=si2;
si0=si0 >= si1;
if(si0){
goto L9;
}
si0=l8;
si0=i32_load(&i->m0,(U64)si0+24U);
l11=si0;
si0=l8;
si0=i32_load(&i->m0,(U64)si0+12U);
l7=si0;
si1=l8;
si0=si0 == si1;
if(si0){
goto L36;
}
si0=l8;
si0=i32_load(&i->m0,(U64)si0+8U);
l0=si0;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+3256U);
si0=si0 < si1;
si0=l0;
si1=l7;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l7;
si1=l0;
i32_store(&i->m0,(U64)si0+8U,si1);
goto L3;
L36:;
si0=l8;
si1=20U;
si0+=si1;
l5=si0;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
if(si0){
goto L37;
}
si0=l8;
si0=i32_load(&i->m0,(U64)si0+16U);
l0=si0;
si0=!(si0);
if(si0){
goto L7;
}
si0=l8;
si1=16U;
si0+=si1;
l5=si0;
L37:;
L38:;
{
si0=l5;
l2=si0;
si0=l0;
l7=si0;
si1=20U;
si0+=si1;
l5=si0;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
if(si0){
goto L38;
}
si0=l7;
si1=16U;
si0+=si1;
l5=si0;
si0=l7;
si0=i32_load(&i->m0,(U64)si0+16U);
l0=si0;
if(si0){
goto L38;
}
}
si0=l2;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
goto L3;
L9:;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+3248U);
l0=si0;
si1=l3;
si0=si0 < si1;
if(si0){
goto L39;
}
si0=0U;
si0=i32_load(&i->m0,(U64)si0+3260U);
l4=si0;
si0=l0;
si1=l3;
si0-=si1;
l5=si0;
si1=16U;
si0=si0 < si1;
if(si0){
goto L41;
}
si0=l4;
si1=l3;
si0+=si1;
l7=si0;
si1=l5;
si2=1U;
si1|=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l4;
si1=l0;
si0+=si1;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l3;
si2=3U;
si1|=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L40;
L41:;
si0=l4;
si1=l0;
si2=3U;
si1|=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l4;
si1=l0;
si0+=si1;
l0=si0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+4U);
si2=1U;
si1|=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=0U;
l7=si0;
si0=0U;
l5=si0;
L40:;
si0=0U;
si1=l5;
i32_store(&i->m0,(U64)si0+3248U,si1);
si0=0U;
si1=l7;
i32_store(&i->m0,(U64)si0+3260U,si1);
si0=l4;
si1=8U;
si0+=si1;
l0=si0;
goto L1;
L39:;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+3252U);
l7=si0;
si1=l3;
si0=si0 <= si1;
if(si0){
goto L42;
}
si0=0U;
si1=l7;
si2=l3;
si1-=si2;
l4=si1;
i32_store(&i->m0,(U64)si0+3252U,si1);
si0=0U;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+3264U);
l0=si1;
si2=l3;
si1+=si2;
l5=si1;
i32_store(&i->m0,(U64)si0+3264U,si1);
si0=l5;
si1=l4;
si2=1U;
si1|=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l3;
si2=3U;
si1|=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=8U;
si0+=si1;
l0=si0;
goto L1;
L42:;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+3712U);
si0=!(si0);
if(si0){
goto L44;
}
si0=0U;
si0=i32_load(&i->m0,(U64)si0+3720U);
l4=si0;
goto L43;
L44:;
si0=0U;
sj1=-1ULL;
i64_store(&i->m0,(U64)si0+3724U,sj1);
si0=0U;
sj1=17592186048512ULL;
i64_store(&i->m0,(U64)si0+3716U,sj1);
si0=0U;
si1=l1;
si2=12U;
si1+=si2;
si2=-16U;
si1&=si2;
si2=1431655768U;
si1^=si2;
i32_store(&i->m0,(U64)si0+3712U,si1);
si0=0U;
si1=0U;
i32_store(&i->m0,(U64)si0+3732U,si1);
si0=0U;
si1=0U;
i32_store(&i->m0,(U64)si0+3684U,si1);
si0=4096U;
l4=si0;
L43:;
si0=0U;
l0=si0;
si0=l4;
si1=l3;
si2=47U;
si1+=si2;
l6=si1;
si0+=si1;
l2=si0;
si1=0U;
si2=l4;
si1-=si2;
l11=si1;
si0&=si1;
l8=si0;
si1=l3;
si0=si0 <= si1;
if(si0){
goto L1;
}
si0=0U;
l0=si0;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+3680U);
l4=si0;
si0=!(si0);
if(si0){
goto L45;
}
si0=0U;
si0=i32_load(&i->m0,(U64)si0+3672U);
l5=si0;
si1=l8;
si0+=si1;
l9=si0;
si1=l5;
si0=si0 <= si1;
if(si0){
goto L1;
}
si0=l9;
si1=l4;
si0=si0 > si1;
if(si0){
goto L1;
}
L45:;
si0=0U;
si0=i32_load8_u(&i->m0,(U64)si0+3684U);
si1=4U;
si0&=si1;
if(si0){
goto L47;
}
si0=0U;
si0=i32_load(&i->m0,(U64)si0+3264U);
l4=si0;
si0=!(si0);
if(si0){
goto L52;
}
si0=3688U;
l0=si0;
L53:;
{
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=l4;
si0=si0 > si1;
if(si0){
goto L54;
}
si0=l5;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+4U);
si0+=si1;
si1=l4;
si0=si0 > si1;
if(si0){
goto L51;
}
L54:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l0=si0;
if(si0){
goto L53;
}
}
L52:;
si0=0U;
si0=bicg_f68(i,si0);
l7=si0;
si1=-1U;
si0=si0 == si1;
if(si0){
goto L48;
}
si0=l8;
l2=si0;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+3716U);
l0=si0;
si1=-1U;
si0+=si1;
l4=si0;
si1=l7;
si0&=si1;
si0=!(si0);
if(si0){
goto L55;
}
si0=l8;
si1=l7;
si0-=si1;
si1=l4;
si2=l7;
si1+=si2;
si2=0U;
si3=l0;
si2-=si3;
si1&=si2;
si0+=si1;
l2=si0;
L55:;
si0=l2;
si1=l3;
si0=si0 <= si1;
if(si0){
goto L48;
}
si0=0U;
si0=i32_load(&i->m0,(U64)si0+3680U);
l0=si0;
si0=!(si0);
if(si0){
goto L56;
}
si0=0U;
si0=i32_load(&i->m0,(U64)si0+3672U);
l4=si0;
si1=l2;
si0+=si1;
l5=si0;
si1=l4;
si0=si0 <= si1;
if(si0){
goto L48;
}
si0=l5;
si1=l0;
si0=si0 > si1;
if(si0){
goto L48;
}
L56:;
si0=l2;
si0=bicg_f68(i,si0);
l0=si0;
si1=l7;
si0=si0 != si1;
if(si0){
goto L50;
}
goto L46;
L51:;
si0=l2;
si1=l7;
si0-=si1;
si1=l11;
si0&=si1;
l2=si0;
si0=bicg_f68(i,si0);
l7=si0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
si2=l0;
si2=i32_load(&i->m0,(U64)si2+4U);
si1+=si2;
si0=si0 == si1;
if(si0){
goto L49;
}
si0=l7;
l0=si0;
L50:;
si0=l0;
si1=-1U;
si0=si0 == si1;
if(si0){
goto L48;
}
si0=l3;
si1=48U;
si0+=si1;
si1=l2;
si0=si0 > si1;
if(si0){
goto L57;
}
si0=l0;
l7=si0;
goto L46;
L57:;
si0=l6;
si1=l2;
si0-=si1;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+3720U);
l4=si1;
si0+=si1;
si1=0U;
si2=l4;
si1-=si2;
si0&=si1;
l4=si0;
si0=bicg_f68(i,si0);
si1=-1U;
si0=si0 == si1;
if(si0){
goto L48;
}
si0=l4;
si1=l2;
si0+=si1;
l2=si0;
si0=l0;
l7=si0;
goto L46;
L49:;
si0=l7;
si1=-1U;
si0=si0 != si1;
if(si0){
goto L46;
}
L48:;
si0=0U;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+3684U);
si2=4U;
si1|=si2;
i32_store(&i->m0,(U64)si0+3684U,si1);
L47:;
si0=l8;
si0=bicg_f68(i,si0);
l7=si0;
si0=0U;
si0=bicg_f68(i,si0);
l0=si0;
si0=l7;
si1=-1U;
si0=si0 == si1;
if(si0){
goto L4;
}
si0=l0;
si1=-1U;
si0=si0 == si1;
if(si0){
goto L4;
}
si0=l7;
si1=l0;
si0=si0 >= si1;
if(si0){
goto L4;
}
si0=l0;
si1=l7;
si0-=si1;
l2=si0;
si1=l3;
si2=40U;
si1+=si2;
si0=si0 <= si1;
if(si0){
goto L4;
}
L46:;
si0=0U;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+3672U);
si2=l2;
si1+=si2;
l0=si1;
i32_store(&i->m0,(U64)si0+3672U,si1);
si0=l0;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+3676U);
si0=si0 <= si1;
if(si0){
goto L58;
}
si0=0U;
si1=l0;
i32_store(&i->m0,(U64)si0+3676U,si1);
L58:;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+3264U);
l4=si0;
si0=!(si0);
if(si0){
goto L60;
}
si0=3688U;
l0=si0;
L61:;
{
si0=l7;
si1=l0;
si1=i32_load(&i->m0,(U64)si1);
l5=si1;
si2=l0;
si2=i32_load(&i->m0,(U64)si2+4U);
l8=si2;
si1+=si2;
si0=si0 == si1;
if(si0){
goto L59;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l0=si0;
if(si0){
goto L61;
}
goto L6;
}
UNREACHABLE;
L60:;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+3256U);
l0=si0;
si0=!(si0);
if(si0){
goto L63;
}
si0=l7;
si1=l0;
si0=si0 >= si1;
if(si0){
goto L62;
}
L63:;
si0=0U;
si1=l7;
i32_store(&i->m0,(U64)si0+3256U,si1);
L62:;
si0=0U;
l0=si0;
si0=0U;
si1=l2;
i32_store(&i->m0,(U64)si0+3692U,si1);
si0=0U;
si1=l7;
i32_store(&i->m0,(U64)si0+3688U,si1);
si0=0U;
si1=-1U;
i32_store(&i->m0,(U64)si0+3272U,si1);
si0=0U;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+3712U);
i32_store(&i->m0,(U64)si0+3276U,si1);
si0=0U;
si1=0U;
i32_store(&i->m0,(U64)si0+3700U,si1);
L64:;
{
si0=l0;
si1=3U;
si0<<=(si1&31);
l4=si0;
si1=3288U;
si0+=si1;
si1=l4;
si2=3280U;
si1+=si2;
l5=si1;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=3292U;
si0+=si1;
si1=l5;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=1U;
si0+=si1;
l0=si0;
si1=32U;
si0=si0 != si1;
if(si0){
goto L64;
}
}
si0=0U;
si1=l2;
si2=-40U;
si1+=si2;
l0=si1;
si2=-8U;
si3=l7;
si2-=si3;
si3=7U;
si2&=si3;
si3=0U;
si4=l7;
si5=8U;
si4+=si5;
si5=7U;
si4&=si5;
si2=si4?si2:si3;
l4=si2;
si1-=si2;
l5=si1;
i32_store(&i->m0,(U64)si0+3252U,si1);
si0=0U;
si1=l7;
si2=l4;
si1+=si2;
l4=si1;
i32_store(&i->m0,(U64)si0+3264U,si1);
si0=l4;
si1=l5;
si2=1U;
si1|=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l7;
si1=l0;
si0+=si1;
si1=40U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=0U;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+3728U);
i32_store(&i->m0,(U64)si0+3268U,si1);
goto L5;
L59:;
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0+12U);
si1=8U;
si0&=si1;
if(si0){
goto L6;
}
si0=l4;
si1=l5;
si0=si0 < si1;
if(si0){
goto L6;
}
si0=l4;
si1=l7;
si0=si0 >= si1;
if(si0){
goto L6;
}
si0=l0;
si1=l8;
si2=l2;
si1+=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=0U;
si1=l4;
si2=-8U;
si3=l4;
si2-=si3;
si3=7U;
si2&=si3;
si3=0U;
si4=l4;
si5=8U;
si4+=si5;
si5=7U;
si4&=si5;
si2=si4?si2:si3;
l0=si2;
si1+=si2;
l5=si1;
i32_store(&i->m0,(U64)si0+3264U,si1);
si0=0U;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+3252U);
si2=l2;
si1+=si2;
l7=si1;
si2=l0;
si1-=si2;
l0=si1;
i32_store(&i->m0,(U64)si0+3252U,si1);
si0=l5;
si1=l0;
si2=1U;
si1|=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l4;
si1=l7;
si0+=si1;
si1=40U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=0U;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+3728U);
i32_store(&i->m0,(U64)si0+3268U,si1);
goto L5;
L8:;
si0=0U;
l8=si0;
goto L2;
L7:;
si0=0U;
l7=si0;
goto L3;
L6:;
si0=l7;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+3256U);
l8=si1;
si0=si0 >= si1;
if(si0){
goto L65;
}
si0=0U;
si1=l7;
i32_store(&i->m0,(U64)si0+3256U,si1);
si0=l7;
l8=si0;
L65:;
si0=l7;
si1=l2;
si0+=si1;
l5=si0;
si0=3688U;
l0=si0;
L73:;
{
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l5;
si0=si0 == si1;
if(si0){
goto L72;
}
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l0=si0;
if(si0){
goto L73;
}
goto L71;
}
UNREACHABLE;
L72:;
si0=l0;
si0=i32_load8_u(&i->m0,(U64)si0+12U);
si1=8U;
si0&=si1;
si0=!(si0);
if(si0){
goto L70;
}
L71:;
si0=3688U;
l0=si0;
L74:;
{
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
si1=l4;
si0=si0 > si1;
if(si0){
goto L75;
}
si0=l5;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+4U);
si0+=si1;
l5=si0;
si1=l4;
si0=si0 > si1;
if(si0){
goto L69;
}
L75:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l0=si0;
goto L74;
}
UNREACHABLE;
L70:;
si0=l0;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+4U);
si2=l2;
si1+=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l7;
si1=-8U;
si2=l7;
si1-=si2;
si2=7U;
si1&=si2;
si2=0U;
si3=l7;
si4=8U;
si3+=si4;
si4=7U;
si3&=si4;
si1=si3?si1:si2;
si0+=si1;
l11=si0;
si1=l3;
si2=3U;
si1|=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l5;
si1=-8U;
si2=l5;
si1-=si2;
si2=7U;
si1&=si2;
si2=0U;
si3=l5;
si4=8U;
si3+=si4;
si4=7U;
si3&=si4;
si1=si3?si1:si2;
si0+=si1;
l2=si0;
si1=l11;
si2=l3;
si1+=si2;
l3=si1;
si0-=si1;
l0=si0;
si0=l2;
si1=l4;
si0=si0 != si1;
if(si0){
goto L76;
}
si0=0U;
si1=l3;
i32_store(&i->m0,(U64)si0+3264U,si1);
si0=0U;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+3252U);
si2=l0;
si1+=si2;
l0=si1;
i32_store(&i->m0,(U64)si0+3252U,si1);
si0=l3;
si1=l0;
si2=1U;
si1|=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L67;
L76:;
si0=l2;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+3260U);
si0=si0 != si1;
if(si0){
goto L77;
}
si0=0U;
si1=l3;
i32_store(&i->m0,(U64)si0+3260U,si1);
si0=0U;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+3248U);
si2=l0;
si1+=si2;
l0=si1;
i32_store(&i->m0,(U64)si0+3248U,si1);
si0=l3;
si1=l0;
si2=1U;
si1|=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l3;
si1=l0;
si0+=si1;
si1=l0;
i32_store(&i->m0,(U64)si0,si1);
goto L67;
L77:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+4U);
l4=si0;
si1=3U;
si0&=si1;
si1=1U;
si0=si0 != si1;
if(si0){
goto L78;
}
si0=l4;
si1=-8U;
si0&=si1;
l6=si0;
si0=l4;
si1=255U;
si0=si0 > si1;
if(si0){
goto L80;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
si1=l4;
si2=3U;
si1>>=(si2&31);
l8=si1;
si2=3U;
si1<<=(si2&31);
si2=3280U;
si1+=si2;
l7=si1;
si0=si0 == si1;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+12U);
l4=si0;
si1=l5;
si0=si0 != si1;
if(si0){
goto L81;
}
si0=0U;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+3240U);
si2=-2U;
si3=l8;
si2=I32_ROTL(si2,si3);
si1&=si2;
i32_store(&i->m0,(U64)si0+3240U,si1);
goto L79;
L81:;
si0=l4;
si1=l7;
si0=si0 == si1;
si0=l5;
si1=l4;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0+8U,si1);
goto L79;
L80:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+24U);
l9=si0;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+12U);
l7=si0;
si1=l2;
si0=si0 == si1;
if(si0){
goto L83;
}
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l4=si0;
si1=l8;
si0=si0 < si1;
si0=l4;
si1=l7;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l7;
si1=l4;
i32_store(&i->m0,(U64)si0+8U,si1);
goto L82;
L83:;
si0=l2;
si1=20U;
si0+=si1;
l4=si0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
if(si0){
goto L84;
}
si0=l2;
si1=16U;
si0+=si1;
l4=si0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
if(si0){
goto L84;
}
si0=0U;
l7=si0;
goto L82;
L84:;
L85:;
{
si0=l4;
l8=si0;
si0=l5;
l7=si0;
si1=20U;
si0+=si1;
l4=si0;
si0=i32_load(&i->m0,(U64)si0);
l5=si0;
if(si0){
goto L85;
}
si0=l7;
si1=16U;
si0+=si1;
l4=si0;
si0=l7;
si0=i32_load(&i->m0,(U64)si0+16U);
l5=si0;
if(si0){
goto L85;
}
}
si0=l8;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
L82:;
si0=l9;
si0=!(si0);
if(si0){
goto L79;
}
si0=l2;
si1=l2;
si1=i32_load(&i->m0,(U64)si1+28U);
l5=si1;
si2=2U;
si1<<=(si2&31);
si2=3544U;
si1+=si2;
l4=si1;
si1=i32_load(&i->m0,(U64)si1);
si0=si0 != si1;
if(si0){
goto L87;
}
si0=l4;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
if(si0){
goto L86;
}
si0=0U;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+3244U);
si2=-2U;
si3=l5;
si2=I32_ROTL(si2,si3);
si1&=si2;
i32_store(&i->m0,(U64)si0+3244U,si1);
goto L79;
L87:;
si0=l9;
si1=16U;
si2=20U;
si3=l9;
si3=i32_load(&i->m0,(U64)si3+16U);
si4=l2;
si3=si3 == si4;
si1=si3?si1:si2;
si0+=si1;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si0=!(si0);
if(si0){
goto L79;
}
L86:;
si0=l7;
si1=l9;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l2;
si0=i32_load(&i->m0,(U64)si0+16U);
l4=si0;
si0=!(si0);
if(si0){
goto L88;
}
si0=l7;
si1=l4;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l4;
si1=l7;
i32_store(&i->m0,(U64)si0+24U,si1);
L88:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+20U);
l4=si0;
si0=!(si0);
if(si0){
goto L79;
}
si0=l7;
si1=20U;
si0+=si1;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l7;
i32_store(&i->m0,(U64)si0+24U,si1);
L79:;
si0=l6;
si1=l0;
si0+=si1;
l0=si0;
si0=l2;
si1=l6;
si0+=si1;
l2=si0;
si0=i32_load(&i->m0,(U64)si0+4U);
l4=si0;
L78:;
si0=l2;
si1=l4;
si2=-2U;
si1&=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l3;
si1=l0;
si2=1U;
si1|=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l3;
si1=l0;
si0+=si1;
si1=l0;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=255U;
si0=si0 > si1;
if(si0){
goto L89;
}
si0=l0;
si1=-8U;
si0&=si1;
si1=3280U;
si0+=si1;
l4=si0;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+3240U);
l5=si0;
si1=1U;
si2=l0;
si3=3U;
si2>>=(si3&31);
si1<<=(si2&31);
l0=si1;
si0&=si1;
if(si0){
goto L91;
}
si0=0U;
si1=l5;
si2=l0;
si1|=si2;
i32_store(&i->m0,(U64)si0+3240U,si1);
si0=l4;
l0=si0;
goto L90;
L91:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l0=si0;
L90:;
si0=l4;
si1=l3;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l3;
si1=l4;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l3;
si1=l0;
i32_store(&i->m0,(U64)si0+8U,si1);
goto L67;
L89:;
si0=31U;
l4=si0;
si0=l0;
si1=16777215U;
si0=si0 > si1;
if(si0){
goto L92;
}
si0=l0;
si1=38U;
si2=l0;
si3=8U;
si2>>=(si3&31);
si2=I32_CLZ(si2);
l4=si2;
si1-=si2;
si0>>=(si1&31);
si1=1U;
si0&=si1;
si1=l4;
si2=1U;
si1<<=(si2&31);
si0-=si1;
si1=62U;
si0+=si1;
l4=si0;
L92:;
si0=l3;
si1=l4;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l3;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l4;
si1=2U;
si0<<=(si1&31);
si1=3544U;
si0+=si1;
l5=si0;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+3244U);
l7=si0;
si1=1U;
si2=l4;
si1<<=(si2&31);
l8=si1;
si0&=si1;
if(si0){
goto L94;
}
si0=0U;
si1=l7;
si2=l8;
si1|=si2;
i32_store(&i->m0,(U64)si0+3244U,si1);
si0=l5;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l5;
i32_store(&i->m0,(U64)si0+24U,si1);
goto L93;
L94:;
si0=l0;
si1=0U;
si2=25U;
si3=l4;
si4=1U;
si3>>=(si4&31);
si2-=si3;
si3=l4;
si4=31U;
si3=si3 == si4;
si1=si3?si1:si2;
si0<<=(si1&31);
l4=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
L95:;
{
si0=l7;
l5=si0;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=-8U;
si0&=si1;
si1=l0;
si0=si0 == si1;
if(si0){
goto L68;
}
si0=l4;
si1=29U;
si0>>=(si1&31);
l7=si0;
si0=l4;
si1=1U;
si0<<=(si1&31);
l4=si0;
si0=l5;
si1=l7;
si2=4U;
si1&=si2;
si0+=si1;
si1=16U;
si0+=si1;
l8=si0;
si0=i32_load(&i->m0,(U64)si0);
l7=si0;
if(si0){
goto L95;
}
}
si0=l8;
si1=l3;
i32_store(&i->m0,(U64)si0,si1);
si0=l3;
si1=l5;
i32_store(&i->m0,(U64)si0+24U,si1);
L93:;
si0=l3;
si1=l3;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l3;
si1=l3;
i32_store(&i->m0,(U64)si0+8U,si1);
goto L67;
L69:;
si0=0U;
si1=l2;
si2=-40U;
si1+=si2;
l0=si1;
si2=-8U;
si3=l7;
si2-=si3;
si3=7U;
si2&=si3;
si3=0U;
si4=l7;
si5=8U;
si4+=si5;
si5=7U;
si4&=si5;
si2=si4?si2:si3;
l8=si2;
si1-=si2;
l11=si1;
i32_store(&i->m0,(U64)si0+3252U,si1);
si0=0U;
si1=l7;
si2=l8;
si1+=si2;
l8=si1;
i32_store(&i->m0,(U64)si0+3264U,si1);
si0=l8;
si1=l11;
si2=1U;
si1|=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l7;
si1=l0;
si0+=si1;
si1=40U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=0U;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+3728U);
i32_store(&i->m0,(U64)si0+3268U,si1);
si0=l4;
si1=l5;
si2=39U;
si3=l5;
si2-=si3;
si3=7U;
si2&=si3;
si3=0U;
si4=l5;
si5=-39U;
si4+=si5;
si5=7U;
si4&=si5;
si2=si4?si2:si3;
si1+=si2;
si2=-47U;
si1+=si2;
l0=si1;
si2=l0;
si3=l4;
si4=16U;
si3+=si4;
si2=si2 < si3;
si0=si2?si0:si1;
l8=si0;
si1=27U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l8;
si1=16U;
si0+=si1;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+3696U);
i64_store(&i->m0,(U64)si0,sj1);
si0=l8;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+3688U);
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=0U;
si1=l8;
si2=8U;
si1+=si2;
i32_store(&i->m0,(U64)si0+3696U,si1);
si0=0U;
si1=l2;
i32_store(&i->m0,(U64)si0+3692U,si1);
si0=0U;
si1=l7;
i32_store(&i->m0,(U64)si0+3688U,si1);
si0=0U;
si1=0U;
i32_store(&i->m0,(U64)si0+3700U,si1);
si0=l8;
si1=24U;
si0+=si1;
l0=si0;
L96:;
{
si0=l0;
si1=7U;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=8U;
si0+=si1;
l7=si0;
si0=l0;
si1=4U;
si0+=si1;
l0=si0;
si0=l7;
si1=l5;
si0=si0 < si1;
if(si0){
goto L96;
}
}
si0=l8;
si1=l4;
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l8;
si1=l8;
si1=i32_load(&i->m0,(U64)si1+4U);
si2=-2U;
si1&=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l4;
si1=l8;
si2=l4;
si1-=si2;
l7=si1;
si2=1U;
si1|=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l8;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=255U;
si0=si0 > si1;
if(si0){
goto L97;
}
si0=l7;
si1=-8U;
si0&=si1;
si1=3280U;
si0+=si1;
l0=si0;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+3240U);
l5=si0;
si1=1U;
si2=l7;
si3=3U;
si2>>=(si3&31);
si1<<=(si2&31);
l7=si1;
si0&=si1;
if(si0){
goto L99;
}
si0=0U;
si1=l5;
si2=l7;
si1|=si2;
i32_store(&i->m0,(U64)si0+3240U,si1);
si0=l0;
l5=si0;
goto L98;
L99:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l5=si0;
L98:;
si0=l0;
si1=l4;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l5;
si1=l4;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l4;
si1=l0;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0+8U,si1);
goto L5;
L97:;
si0=31U;
l0=si0;
si0=l7;
si1=16777215U;
si0=si0 > si1;
if(si0){
goto L100;
}
si0=l7;
si1=38U;
si2=l7;
si3=8U;
si2>>=(si3&31);
si2=I32_CLZ(si2);
l0=si2;
si1-=si2;
si0>>=(si1&31);
si1=1U;
si0&=si1;
si1=l0;
si2=1U;
si1<<=(si2&31);
si0-=si1;
si1=62U;
si0+=si1;
l0=si0;
L100:;
si0=l4;
si1=l0;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l4;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l0;
si1=2U;
si0<<=(si1&31);
si1=3544U;
si0+=si1;
l5=si0;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+3244U);
l8=si0;
si1=1U;
si2=l0;
si1<<=(si2&31);
l2=si1;
si0&=si1;
if(si0){
goto L102;
}
si0=0U;
si1=l8;
si2=l2;
si1|=si2;
i32_store(&i->m0,(U64)si0+3244U,si1);
si0=l5;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0+24U,si1);
goto L101;
L102:;
si0=l7;
si1=0U;
si2=25U;
si3=l0;
si4=1U;
si3>>=(si4&31);
si2-=si3;
si3=l0;
si4=31U;
si3=si3 == si4;
si1=si3?si1:si2;
si0<<=(si1&31);
l0=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
L103:;
{
si0=l8;
l5=si0;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=-8U;
si0&=si1;
si1=l7;
si0=si0 == si1;
if(si0){
goto L66;
}
si0=l0;
si1=29U;
si0>>=(si1&31);
l8=si0;
si0=l0;
si1=1U;
si0<<=(si1&31);
l0=si0;
si0=l5;
si1=l8;
si2=4U;
si1&=si2;
si0+=si1;
si1=16U;
si0+=si1;
l2=si0;
si0=i32_load(&i->m0,(U64)si0);
l8=si0;
if(si0){
goto L103;
}
}
si0=l2;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0+24U,si1);
L101:;
si0=l4;
si1=l4;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l4;
si1=l4;
i32_store(&i->m0,(U64)si0+8U,si1);
goto L5;
L68:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+8U);
l0=si0;
si1=l3;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l5;
si1=l3;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l3;
si1=0U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l3;
si1=l5;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l3;
si1=l0;
i32_store(&i->m0,(U64)si0+8U,si1);
L67:;
si0=l11;
si1=8U;
si0+=si1;
l0=si0;
goto L1;
L66:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+8U);
l0=si0;
si1=l4;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l5;
si1=l4;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l4;
si1=0U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l4;
si1=l5;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l4;
si1=l0;
i32_store(&i->m0,(U64)si0+8U,si1);
L5:;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+3252U);
l0=si0;
si1=l3;
si0=si0 <= si1;
if(si0){
goto L4;
}
si0=0U;
si1=l0;
si2=l3;
si1-=si2;
l4=si1;
i32_store(&i->m0,(U64)si0+3252U,si1);
si0=0U;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+3264U);
l0=si1;
si2=l3;
si1+=si2;
l5=si1;
i32_store(&i->m0,(U64)si0+3264U,si1);
si0=l5;
si1=l4;
si2=1U;
si1|=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l3;
si2=3U;
si1|=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l0;
si1=8U;
si0+=si1;
l0=si0;
goto L1;
L4:;
si0=bicg_f14(i);
si1=48U;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l0=si0;
goto L1;
L3:;
si0=l11;
si0=!(si0);
if(si0){
goto L104;
}
si0=l8;
si1=l8;
si1=i32_load(&i->m0,(U64)si1+28U);
l5=si1;
si2=2U;
si1<<=(si2&31);
si2=3544U;
si1+=si2;
l0=si1;
si1=i32_load(&i->m0,(U64)si1);
si0=si0 != si1;
if(si0){
goto L106;
}
si0=l0;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
if(si0){
goto L105;
}
si0=0U;
si1=l6;
si2=-2U;
si3=l5;
si2=I32_ROTL(si2,si3);
si1&=si2;
l6=si1;
i32_store(&i->m0,(U64)si0+3244U,si1);
goto L104;
L106:;
si0=l11;
si1=16U;
si2=20U;
si3=l11;
si3=i32_load(&i->m0,(U64)si3+16U);
si4=l8;
si3=si3 == si4;
si1=si3?si1:si2;
si0+=si1;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si0=!(si0);
if(si0){
goto L104;
}
L105:;
si0=l7;
si1=l11;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l8;
si0=i32_load(&i->m0,(U64)si0+16U);
l0=si0;
si0=!(si0);
if(si0){
goto L107;
}
si0=l7;
si1=l0;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l0;
si1=l7;
i32_store(&i->m0,(U64)si0+24U,si1);
L107:;
si0=l8;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=!(si0);
if(si0){
goto L104;
}
si0=l7;
si1=20U;
si0+=si1;
si1=l0;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l7;
i32_store(&i->m0,(U64)si0+24U,si1);
L104:;
si0=l4;
si1=15U;
si0=si0 > si1;
if(si0){
goto L109;
}
si0=l8;
si1=l4;
si2=l3;
si1+=si2;
l0=si1;
si2=3U;
si1|=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l8;
si1=l0;
si0+=si1;
l0=si0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+4U);
si2=1U;
si1|=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L108;
L109:;
si0=l8;
si1=l3;
si2=3U;
si1|=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l8;
si1=l3;
si0+=si1;
l7=si0;
si1=l4;
si2=1U;
si1|=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l7;
si1=l4;
si0+=si1;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l4;
si1=255U;
si0=si0 > si1;
if(si0){
goto L110;
}
si0=l4;
si1=-8U;
si0&=si1;
si1=3280U;
si0+=si1;
l0=si0;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+3240U);
l5=si0;
si1=1U;
si2=l4;
si3=3U;
si2>>=(si3&31);
si1<<=(si2&31);
l4=si1;
si0&=si1;
if(si0){
goto L112;
}
si0=0U;
si1=l5;
si2=l4;
si1|=si2;
i32_store(&i->m0,(U64)si0+3240U,si1);
si0=l0;
l4=si0;
goto L111;
L112:;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+8U);
l4=si0;
L111:;
si0=l0;
si1=l7;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l4;
si1=l7;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l7;
si1=l0;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l7;
si1=l4;
i32_store(&i->m0,(U64)si0+8U,si1);
goto L108;
L110:;
si0=31U;
l0=si0;
si0=l4;
si1=16777215U;
si0=si0 > si1;
if(si0){
goto L113;
}
si0=l4;
si1=38U;
si2=l4;
si3=8U;
si2>>=(si3&31);
si2=I32_CLZ(si2);
l0=si2;
si1-=si2;
si0>>=(si1&31);
si1=1U;
si0&=si1;
si1=l0;
si2=1U;
si1<<=(si2&31);
si0-=si1;
si1=62U;
si0+=si1;
l0=si0;
L113:;
si0=l7;
si1=l0;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l7;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l0;
si1=2U;
si0<<=(si1&31);
si1=3544U;
si0+=si1;
l5=si0;
si0=l6;
si1=1U;
si2=l0;
si1<<=(si2&31);
l3=si1;
si0&=si1;
if(si0){
goto L116;
}
si0=0U;
si1=l6;
si2=l3;
si1|=si2;
i32_store(&i->m0,(U64)si0+3244U,si1);
si0=l5;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=l5;
i32_store(&i->m0,(U64)si0+24U,si1);
goto L115;
L116:;
si0=l4;
si1=0U;
si2=25U;
si3=l0;
si4=1U;
si3>>=(si4&31);
si2-=si3;
si3=l0;
si4=31U;
si3=si3 == si4;
si1=si3?si1:si2;
si0<<=(si1&31);
l0=si0;
si0=l5;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
L117:;
{
si0=l3;
l5=si0;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=-8U;
si0&=si1;
si1=l4;
si0=si0 == si1;
if(si0){
goto L114;
}
si0=l0;
si1=29U;
si0>>=(si1&31);
l3=si0;
si0=l0;
si1=1U;
si0<<=(si1&31);
l0=si0;
si0=l5;
si1=l3;
si2=4U;
si1&=si2;
si0+=si1;
si1=16U;
si0+=si1;
l2=si0;
si0=i32_load(&i->m0,(U64)si0);
l3=si0;
if(si0){
goto L117;
}
}
si0=l2;
si1=l7;
i32_store(&i->m0,(U64)si0,si1);
si0=l7;
si1=l5;
i32_store(&i->m0,(U64)si0+24U,si1);
L115:;
si0=l7;
si1=l7;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l7;
si1=l7;
i32_store(&i->m0,(U64)si0+8U,si1);
goto L108;
L114:;
si0=l5;
si0=i32_load(&i->m0,(U64)si0+8U);
l0=si0;
si1=l7;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l5;
si1=l7;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l7;
si1=0U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l7;
si1=l5;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l7;
si1=l0;
i32_store(&i->m0,(U64)si0+8U,si1);
L108:;
si0=l8;
si1=8U;
si0+=si1;
l0=si0;
goto L1;
L2:;
si0=l10;
si0=!(si0);
if(si0){
goto L118;
}
si0=l7;
si1=l7;
si1=i32_load(&i->m0,(U64)si1+28U);
l5=si1;
si2=2U;
si1<<=(si2&31);
si2=3544U;
si1+=si2;
l0=si1;
si1=i32_load(&i->m0,(U64)si1);
si0=si0 != si1;
if(si0){
goto L120;
}
si0=l0;
si1=l8;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
if(si0){
goto L119;
}
si0=0U;
si1=l9;
si2=-2U;
si3=l5;
si2=I32_ROTL(si2,si3);
si1&=si2;
i32_store(&i->m0,(U64)si0+3244U,si1);
goto L118;
L120:;
si0=l10;
si1=16U;
si2=20U;
si3=l10;
si3=i32_load(&i->m0,(U64)si3+16U);
si4=l7;
si3=si3 == si4;
si1=si3?si1:si2;
si0+=si1;
si1=l8;
i32_store(&i->m0,(U64)si0,si1);
si0=l8;
si0=!(si0);
if(si0){
goto L118;
}
L119:;
si0=l8;
si1=l10;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l7;
si0=i32_load(&i->m0,(U64)si0+16U);
l0=si0;
si0=!(si0);
if(si0){
goto L121;
}
si0=l8;
si1=l0;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l0;
si1=l8;
i32_store(&i->m0,(U64)si0+24U,si1);
L121:;
si0=l7;
si1=20U;
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
l0=si0;
si0=!(si0);
if(si0){
goto L118;
}
si0=l8;
si1=20U;
si0+=si1;
si1=l0;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=l8;
i32_store(&i->m0,(U64)si0+24U,si1);
L118:;
si0=l4;
si1=15U;
si0=si0 > si1;
if(si0){
goto L123;
}
si0=l7;
si1=l4;
si2=l3;
si1+=si2;
l0=si1;
si2=3U;
si1|=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l7;
si1=l0;
si0+=si1;
l0=si0;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+4U);
si2=1U;
si1|=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
goto L122;
L123:;
si0=l7;
si1=l3;
si2=3U;
si1|=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l7;
si1=l3;
si0+=si1;
l5=si0;
si1=l4;
si2=1U;
si1|=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l5;
si1=l4;
si0+=si1;
si1=l4;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si0=!(si0);
if(si0){
goto L124;
}
si0=l6;
si1=-8U;
si0&=si1;
si1=3280U;
si0+=si1;
l3=si0;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+3260U);
l0=si0;
si0=1U;
si1=l6;
si2=3U;
si1>>=(si2&31);
si0<<=(si1&31);
l8=si0;
si1=l2;
si0&=si1;
if(si0){
goto L126;
}
si0=0U;
si1=l8;
si2=l2;
si1|=si2;
i32_store(&i->m0,(U64)si0+3240U,si1);
si0=l3;
l8=si0;
goto L125;
L126:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
l8=si0;
L125:;
si0=l3;
si1=l0;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l8;
si1=l0;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l0;
si1=l3;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l0;
si1=l8;
i32_store(&i->m0,(U64)si0+8U,si1);
L124:;
si0=0U;
si1=l5;
i32_store(&i->m0,(U64)si0+3260U,si1);
si0=0U;
si1=l4;
i32_store(&i->m0,(U64)si0+3248U,si1);
L122:;
si0=l7;
si1=8U;
si0+=si1;
l0=si0;
L1:;
si0=l1;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l0;
L0:;
return si0;
}

void bicg_f66(bicgInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=l0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=-8U;
si0+=si1;
l1=si0;
si1=l0;
si2=-4U;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
si2=-8U;
si1&=si2;
l0=si1;
si0+=si1;
l3=si0;
si0=l2;
si1=1U;
si0&=si1;
if(si0){
goto L2;
}
si0=l2;
si1=3U;
si0&=si1;
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
l2=si1;
si0-=si1;
l1=si0;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+3256U);
l4=si1;
si0=si0 < si1;
if(si0){
goto L1;
}
si0=l2;
si1=l0;
si0+=si1;
l0=si0;
si0=l1;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+3260U);
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l2;
si1=255U;
si0=si0 > si1;
if(si0){
goto L4;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l4=si0;
si1=l2;
si2=3U;
si1>>=(si2&31);
l5=si1;
si2=3U;
si1<<=(si2&31);
si2=3280U;
si1+=si2;
l6=si1;
si0=si0 == si1;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
l2=si0;
si1=l4;
si0=si0 != si1;
if(si0){
goto L5;
}
si0=0U;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+3240U);
si2=-2U;
si3=l5;
si2=I32_ROTL(si2,si3);
si1&=si2;
i32_store(&i->m0,(U64)si0+3240U,si1);
goto L2;
L5:;
si0=l2;
si1=l6;
si0=si0 == si1;
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=l4;
i32_store(&i->m0,(U64)si0+8U,si1);
goto L2;
L4:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+24U);
l7=si0;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+12U);
l6=si0;
si1=l1;
si0=si0 == si1;
if(si0){
goto L7;
}
si0=l1;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
si1=l4;
si0=si0 < si1;
si0=l2;
si1=l6;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l6;
si1=l2;
i32_store(&i->m0,(U64)si0+8U,si1);
goto L6;
L7:;
si0=l1;
si1=20U;
si0+=si1;
l2=si0;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
if(si0){
goto L8;
}
si0=l1;
si1=16U;
si0+=si1;
l2=si0;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
if(si0){
goto L8;
}
si0=0U;
l6=si0;
goto L6;
L8:;
L9:;
{
si0=l2;
l5=si0;
si0=l4;
l6=si0;
si1=20U;
si0+=si1;
l2=si0;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
if(si0){
goto L9;
}
si0=l6;
si1=16U;
si0+=si1;
l2=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+16U);
l4=si0;
if(si0){
goto L9;
}
}
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
L6:;
si0=l7;
si0=!(si0);
if(si0){
goto L2;
}
si0=l1;
si1=l1;
si1=i32_load(&i->m0,(U64)si1+28U);
l4=si1;
si2=2U;
si1<<=(si2&31);
si2=3544U;
si1+=si2;
l2=si1;
si1=i32_load(&i->m0,(U64)si1);
si0=si0 != si1;
if(si0){
goto L11;
}
si0=l2;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
if(si0){
goto L10;
}
si0=0U;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+3244U);
si2=-2U;
si3=l4;
si2=I32_ROTL(si2,si3);
si1&=si2;
i32_store(&i->m0,(U64)si0+3244U,si1);
goto L2;
L11:;
si0=l7;
si1=16U;
si2=20U;
si3=l7;
si3=i32_load(&i->m0,(U64)si3+16U);
si4=l1;
si3=si3 == si4;
si1=si3?si1:si2;
si0+=si1;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si0=!(si0);
if(si0){
goto L2;
}
L10:;
si0=l6;
si1=l7;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l1;
si0=i32_load(&i->m0,(U64)si0+16U);
l2=si0;
si0=!(si0);
if(si0){
goto L12;
}
si0=l6;
si1=l2;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=l6;
i32_store(&i->m0,(U64)si0+24U,si1);
L12:;
si0=l1;
si0=i32_load(&i->m0,(U64)si0+20U);
l2=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l6;
si1=20U;
si0+=si1;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l6;
i32_store(&i->m0,(U64)si0+24U,si1);
goto L2;
L3:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
l2=si0;
si1=3U;
si0&=si1;
si1=3U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=0U;
si1=l0;
i32_store(&i->m0,(U64)si0+3248U,si1);
si0=l3;
si1=l2;
si2=-2U;
si1&=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si1=l0;
si2=1U;
si1|=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si1=l0;
si0+=si1;
si1=l0;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L2:;
si0=l1;
si1=l3;
si0=si0 >= si1;
if(si0){
goto L1;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+4U);
l2=si0;
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
si1=2U;
si0&=si1;
if(si0){
goto L14;
}
si0=l3;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+3264U);
si0=si0 != si1;
if(si0){
goto L15;
}
si0=0U;
si1=l1;
i32_store(&i->m0,(U64)si0+3264U,si1);
si0=0U;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+3252U);
si2=l0;
si1+=si2;
l0=si1;
i32_store(&i->m0,(U64)si0+3252U,si1);
si0=l1;
si1=l0;
si2=1U;
si1|=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+3260U);
si0=si0 != si1;
if(si0){
goto L1;
}
si0=0U;
si1=0U;
i32_store(&i->m0,(U64)si0+3248U,si1);
si0=0U;
si1=0U;
i32_store(&i->m0,(U64)si0+3260U,si1);
goto L0;
L15:;
si0=l3;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+3260U);
si0=si0 != si1;
if(si0){
goto L16;
}
si0=0U;
si1=l1;
i32_store(&i->m0,(U64)si0+3260U,si1);
si0=0U;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+3248U);
si2=l0;
si1+=si2;
l0=si1;
i32_store(&i->m0,(U64)si0+3248U,si1);
si0=l1;
si1=l0;
si2=1U;
si1|=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si1=l0;
si0+=si1;
si1=l0;
i32_store(&i->m0,(U64)si0,si1);
goto L0;
L16:;
si0=l2;
si1=-8U;
si0&=si1;
si1=l0;
si0+=si1;
l0=si0;
si0=l2;
si1=255U;
si0=si0 > si1;
if(si0){
goto L18;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
l4=si0;
si1=l2;
si2=3U;
si1>>=(si2&31);
l5=si1;
si2=3U;
si1<<=(si2&31);
si2=3280U;
si1+=si2;
l6=si1;
si0=si0 == si1;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
l2=si0;
si1=l4;
si0=si0 != si1;
if(si0){
goto L19;
}
si0=0U;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+3240U);
si2=-2U;
si3=l5;
si2=I32_ROTL(si2,si3);
si1&=si2;
i32_store(&i->m0,(U64)si0+3240U,si1);
goto L17;
L19:;
si0=l2;
si1=l6;
si0=si0 == si1;
si0=l4;
si1=l2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l2;
si1=l4;
i32_store(&i->m0,(U64)si0+8U,si1);
goto L17;
L18:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+24U);
l7=si0;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+12U);
l6=si0;
si1=l3;
si0=si0 == si1;
if(si0){
goto L21;
}
si0=l3;
si0=i32_load(&i->m0,(U64)si0+8U);
l2=si0;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+3256U);
si0=si0 < si1;
si0=l2;
si1=l6;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l6;
si1=l2;
i32_store(&i->m0,(U64)si0+8U,si1);
goto L20;
L21:;
si0=l3;
si1=20U;
si0+=si1;
l2=si0;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
if(si0){
goto L22;
}
si0=l3;
si1=16U;
si0+=si1;
l2=si0;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
if(si0){
goto L22;
}
si0=0U;
l6=si0;
goto L20;
L22:;
L23:;
{
si0=l2;
l5=si0;
si0=l4;
l6=si0;
si1=20U;
si0+=si1;
l2=si0;
si0=i32_load(&i->m0,(U64)si0);
l4=si0;
if(si0){
goto L23;
}
si0=l6;
si1=16U;
si0+=si1;
l2=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0+16U);
l4=si0;
if(si0){
goto L23;
}
}
si0=l5;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
L20:;
si0=l7;
si0=!(si0);
if(si0){
goto L17;
}
si0=l3;
si1=l3;
si1=i32_load(&i->m0,(U64)si1+28U);
l4=si1;
si2=2U;
si1<<=(si2&31);
si2=3544U;
si1+=si2;
l2=si1;
si1=i32_load(&i->m0,(U64)si1);
si0=si0 != si1;
if(si0){
goto L25;
}
si0=l2;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
if(si0){
goto L24;
}
si0=0U;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+3244U);
si2=-2U;
si3=l4;
si2=I32_ROTL(si2,si3);
si1&=si2;
i32_store(&i->m0,(U64)si0+3244U,si1);
goto L17;
L25:;
si0=l7;
si1=16U;
si2=20U;
si3=l7;
si3=i32_load(&i->m0,(U64)si3+16U);
si4=l3;
si3=si3 == si4;
si1=si3?si1:si2;
si0+=si1;
si1=l6;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si0=!(si0);
if(si0){
goto L17;
}
L24:;
si0=l6;
si1=l7;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l3;
si0=i32_load(&i->m0,(U64)si0+16U);
l2=si0;
si0=!(si0);
if(si0){
goto L26;
}
si0=l6;
si1=l2;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=l2;
si1=l6;
i32_store(&i->m0,(U64)si0+24U,si1);
L26:;
si0=l3;
si0=i32_load(&i->m0,(U64)si0+20U);
l2=si0;
si0=!(si0);
if(si0){
goto L17;
}
si0=l6;
si1=20U;
si0+=si1;
si1=l2;
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=l6;
i32_store(&i->m0,(U64)si0+24U,si1);
L17:;
si0=l1;
si1=l0;
si2=1U;
si1|=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si1=l0;
si0+=si1;
si1=l0;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+3260U);
si0=si0 != si1;
if(si0){
goto L13;
}
si0=0U;
si1=l0;
i32_store(&i->m0,(U64)si0+3248U,si1);
goto L0;
L14:;
si0=l3;
si1=l2;
si2=-2U;
si1&=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si1=l0;
si2=1U;
si1|=si2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=l1;
si1=l0;
si0+=si1;
si1=l0;
i32_store(&i->m0,(U64)si0,si1);
L13:;
si0=l0;
si1=255U;
si0=si0 > si1;
if(si0){
goto L27;
}
si0=l0;
si1=-8U;
si0&=si1;
si1=3280U;
si0+=si1;
l2=si0;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+3240U);
l4=si0;
si1=1U;
si2=l0;
si3=3U;
si2>>=(si3&31);
si1<<=(si2&31);
l0=si1;
si0&=si1;
if(si0){
goto L29;
}
si0=0U;
si1=l4;
si2=l0;
si1|=si2;
i32_store(&i->m0,(U64)si0+3240U,si1);
si0=l2;
l0=si0;
goto L28;
L29:;
si0=l2;
si0=i32_load(&i->m0,(U64)si0+8U);
l0=si0;
L28:;
si0=l2;
si1=l1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
si1=l2;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
si1=l0;
i32_store(&i->m0,(U64)si0+8U,si1);
goto L0;
L27:;
si0=31U;
l2=si0;
si0=l0;
si1=16777215U;
si0=si0 > si1;
if(si0){
goto L30;
}
si0=l0;
si1=38U;
si2=l0;
si3=8U;
si2>>=(si3&31);
si2=I32_CLZ(si2);
l2=si2;
si1-=si2;
si0>>=(si1&31);
si1=1U;
si0&=si1;
si1=l2;
si2=1U;
si1<<=(si2&31);
si0-=si1;
si1=62U;
si0+=si1;
l2=si0;
L30:;
si0=l1;
si1=l2;
i32_store(&i->m0,(U64)si0+28U,si1);
si0=l1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=l2;
si1=2U;
si0<<=(si1&31);
si1=3544U;
si0+=si1;
l4=si0;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+3244U);
l6=si0;
si1=1U;
si2=l2;
si1<<=(si2&31);
l3=si1;
si0&=si1;
if(si0){
goto L34;
}
si0=0U;
si1=l6;
si2=l3;
si1|=si2;
i32_store(&i->m0,(U64)si0+3244U,si1);
si0=l4;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=l4;
i32_store(&i->m0,(U64)si0+24U,si1);
goto L33;
L34:;
si0=l0;
si1=0U;
si2=25U;
si3=l2;
si4=1U;
si3>>=(si4&31);
si2-=si3;
si3=l2;
si4=31U;
si3=si3 == si4;
si1=si3?si1:si2;
si0<<=(si1&31);
l2=si0;
si0=l4;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
L35:;
{
si0=l6;
l4=si0;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=-8U;
si0&=si1;
si1=l0;
si0=si0 == si1;
if(si0){
goto L32;
}
si0=l2;
si1=29U;
si0>>=(si1&31);
l6=si0;
si0=l2;
si1=1U;
si0<<=(si1&31);
l2=si0;
si0=l4;
si1=l6;
si2=4U;
si1&=si2;
si0+=si1;
si1=16U;
si0+=si1;
l3=si0;
si0=i32_load(&i->m0,(U64)si0);
l6=si0;
if(si0){
goto L35;
}
}
si0=l3;
si1=l1;
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=l4;
i32_store(&i->m0,(U64)si0+24U,si1);
L33:;
si0=l1;
si1=l1;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
si1=l1;
i32_store(&i->m0,(U64)si0+8U,si1);
goto L31;
L32:;
si0=l4;
si0=i32_load(&i->m0,(U64)si0+8U);
l0=si0;
si1=l1;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l4;
si1=l1;
i32_store(&i->m0,(U64)si0+8U,si1);
si0=l1;
si1=0U;
i32_store(&i->m0,(U64)si0+24U,si1);
si0=l1;
si1=l4;
i32_store(&i->m0,(U64)si0+12U,si1);
si0=l1;
si1=l0;
i32_store(&i->m0,(U64)si0+8U,si1);
L31:;
si0=0U;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+3272U);
si2=-1U;
si1+=si2;
l1=si1;
si2=-1U;
si3=l1;
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+3272U,si1);
L1:;
L0:;
}

U32 bicg_f67(bicgInstance*i) {
U32 si0,si1;
si0=i->m0.pages;
si1=16U;
si0<<=(si1&31);
L0:;
return si0;
}

U32 bicg_f68(bicgInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 si0,si1,si2;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+1984U);
l1=si0;
si1=l0;
si2=7U;
si1+=si2;
si2=-8U;
si1&=si2;
l2=si1;
si0+=si1;
l0=si0;
si0=l2;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si1=l1;
si0=si0 <= si1;
if(si0){
goto L1;
}
L2:;
si0=l0;
si1=bicg_f67(i);
si0=si0 <= si1;
if(si0){
goto L3;
}
si0=l0;
si0=(*i->env_emscriptenX5FresizeX5Fheap)(i,si0);
si0=!(si0);
if(si0){
goto L1;
}
L3:;
si0=0U;
si1=l0;
i32_store(&i->m0,(U64)si0+1984U,si1);
si0=l1;
goto L0;
L1:;
si0=bicg_f14(i);
si1=48U;
i32_store(&i->m0,(U64)si0,si1);
si0=-1U;
L0:;
return si0;
}

void bicg_f69(bicgInstance*i,U32 l0) {
U32 si0;
si0=l0;
i->g1=si0;
L0:;
}

U32 bicg_f70(bicgInstance*i) {
U32 si0;
si0=i->g1;
L0:;
return si0;
}

U32 bicg_f71(bicgInstance*i) {
U32 si0;
si0=i->g0;
L0:;
return si0;
}

void bicg_f72(bicgInstance*i,U32 l0) {
U32 si0;
si0=l0;
i->g0=si0;
L0:;
}

U32 bicg_f73(bicgInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 si0,si1;
si0=i->g0;
si1=l0;
si0-=si1;
si1=-16U;
si0&=si1;
l1=si0;
i->g0=si0;
si0=l1;
L0:;
return si0;
}

U64 bicg_f74(bicgInstance*i,U32 l0,U32 l1,U64 l2,U32 l3) {
U32 si0,si2,si3;
U64 sj0,sj1;
si0=l1;
sj1=l2;
si2=l3;
si3=l0;
sj0=TF(i->t0,si3,U64 (*)(bicgInstance*,U32,U64,U32))(i,si0,sj1,si2);
L0:;
return sj0;
}

U32 bicg_f75(bicgInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U64 l5=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1,sj2,sj3,sj4;
si0=l0;
si1=l1;
si2=l2;
sj2=(U64)(si2);
si3=l3;
sj3=(U64)(si3);
sj4=32ULL;
sj3<<=(sj4&63);
sj2|=sj3;
si3=l4;
sj0=bicg_f74(i,si0,si1,sj2,si3);
l5=sj0;
sj0=l5;
sj1=32ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
bicg_f69(i,si0);
sj0=l5;
si0=(U32)(sj0);
L0:;
return si0;
}

U32 bicg_f76(bicgInstance*i,U32 l0,U64 l1,U32 l2,U32 l3) {
U32 si0,si1,si2,si3,si4;
U64 sj1,sj2,sj3;
si0=l0;
sj1=l1;
si1=(U32)(sj1);
sj2=l1;
sj3=32ULL;
sj2>>=(sj3&63);
si2=(U32)(sj2);
si3=l2;
si4=l3;
si0=(*i->wasiX5FsnapshotX5Fpreview1_fdX5Fseek)(i,si0,si1,si2,si3,si4);
L0:;
return si0;
}

const U8 d0[]={
0x2d,0x2b,0x20,0x20,0x20,0x30,0x58,0x30,0x78,0x0,0x2d,0x30,0x58,0x2b,0x30,0x58,0x20,0x30,0x58,0x2d,0x30,0x78,0x2b,0x30,0x78,0x20,0x30,0x78,0x0,0x62,0x65,0x67,0x69,0x6e,0x20,0x64,0x75,0x6d,0x70,0x3a,0x20,0x25,0x73,0x0,0x71,0x0,0x6e,0x61,0x6e,0x0,0x69,0x6e,0x66,0x0,0x45,0x72,0x72,0x6f,0x72,0x20,0x72,0x65,0x74,0x75,0x72,0x6e,0x20,0x66,0x72,0x6f,0x6d,0x20,0x67,0x65,0x74,0x74,0x69,0x6d,0x65,0x6f,0x66,0x64,0x61,0x79,0x3a,0x20,0x25,0x64,0x0,0x4e,0x41,0x4e,0x0,0x49,0x4e,0x46,0x0,0x2e,0x0,0x28,0x6e,0x75,0x6c,0x6c,0x29,0x0,0x25,0x30,0x2e,0x32,0x6c,0x66,0x20,0x0,0xa,0x65,0x6e,0x64,0x20,0x20,0x20,0x64,0x75,0x6d,0x70,0x3a,0x20,0x25,0x73,0xa,0x0,0x25,0x30,0x2e,0x36,0x66,0xa,0x0,0x3d,0x3d,0x42,0x45,0x47,0x49,0x4e,0x20,0x44,0x55,0x4d,0x50,0x5f,0x41,0x52,0x52,0x41,0x59,0x53,0x3d,0x3d,0xa,0x0,0x3d,0x3d,0x45,0x4e,0x44,0x20,0x20,0x20,0x44,0x55,0x4d,0x50,0x5f,0x41,0x52,0x52,0x41,0x59,0x53,0x3d,0x3d,0xa,0x0,0xa0,0x6,0x0,0x0,0x0,0x0,0x0,0x0,0x19,0x0,0xa,0x0,0x19,0x19,0x19,0x0,0x0,0x0,0x0,0x5,0x0,0x0,0x0,0x0,0x0,0x0,0x9,0x0,0x0,0x0,0x0,0xb,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x19,0x0,0x11,0xa,0x19,0x19,0x19,0x3,0xa,0x7,0x0,0x1,0x0,0x9,0xb,0x18,0x0,0x0,0x9,0x6,0xb,0x0,0x0,0xb,0x0,0x6,0x19,0x0,0x0,0x0,0x19,0x19,0x19,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xe,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x19,0x0,0xa,0xd,0x19,0x19,0x19,0x0,0xd,0x0,0x0,0x2,0x0,0x9,0xe,0x0,0x0,0x0,0x9,0x0,0xe,0x0,0x0,0xe,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xc,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x13,0x0,0x0,0x0,0x0,0x13,0x0,0x0,0x0,0x0,0x9,0xc,0x0,0x0,0x0,0x0,0x0,0xc,0x0,0x0,0xc,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x10,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xf,0x0,0x0,0x0,0x4,0xf,0x0,0x0,0x0,0x0,0x9,0x10,0x0,0x0,0x0,0x0,0x0,0x10,0x0,0x0,0x10,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x12,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x11,0x0,0x0,0x0,0x0,0x11,0x0,0x0,0x0,0x0,0x9,0x12,0x0,0x0,0x0,0x0,0x0,0x12,0x0,0x0,0x12,0x0,0x0,0x1a,0x0,0x0,0x0,0x1a,0x1a,0x1a,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x1a,0x0,0x0,0x0,0x1a,0x1a,0x1a,0x0,0x0,0x0,0x0,0x0,0x0,0x9,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x14,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x17,0x0,0x0,0x0,0x0,0x17,0x0,0x0,0x0,0x0,0x9,0x14,0x0,0x0,0x0,0x0,0x0,0x14,0x0,0x0,0x14,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x16,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x15,0x0,0x0,0x0,0x0,0x15,0x0,0x0,0x0,0x0,0x9,0x16,0x0,0x0,0x0,0x0,0x0,0x16,0x0,0x0,0x16,0x0,0x0,0x30,0x31,0x32,0x33,0x34,0x35,0x36,0x37,0x38,0x39,0x41,0x42,0x43,0x44,0x45,0x46,
};

const U8 d1[]={
0x5,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x2,0x0,0x0,0x0,0x3,0x0,0x0,0x0,0x9c,0x8,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x2,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x5,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x4,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x2,0x0,0x0,0x0,0x5,0x0,0x0,0x0,0xa8,0x8,0x0,0x0,0x0,0x4,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xff,0xff,0xff,0xff,0xa,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xa0,0xe,0x1,0x0,
};

static void bicgInitMemories(bicgInstance* i) {
wasmMemoryAllocate(&i->m0, 256, 32768);
LOAD_DATA(i->m0, 1024U, d0, 672);
LOAD_DATA(i->m0, 1696U, d1, 292);
}

static void bicgInitTables(bicgInstance* i) {
U32 offset;
wasmTableAllocate(&i->t0, 7, 7);
offset=1U;
i->t0.data[offset+0]=(wasmFunc)&bicg_f39;
i->t0.data[offset+1]=(wasmFunc)&bicg_f40;
i->t0.data[offset+2]=(wasmFunc)&bicg_f42;
i->t0.data[offset+3]=(wasmFunc)&bicg_f43;
i->t0.data[offset+4]=(wasmFunc)&bicg_f44;
i->t0.data[offset+5]=(wasmFunc)&bicg_f58;
}

static void bicgInitGlobals(bicgInstance* i) {
i->g0=69280U;
i->g1=0U;
}

static void bicgInitImports(bicgInstance* i, void* resolve(const char* module, const char* name)) {
if (resolve == NULL) { return; }
i->env_emscriptenX5FdateX5Fnow=(F64(*)(bicgInstance*))resolve("env", "emscripten_date_now");
i->env_emscriptenX5FmemcpyX5Fbig=(void(*)(bicgInstance*,U32,U32,U32))resolve("env", "emscripten_memcpy_big");
i->wasiX5FsnapshotX5Fpreview1_fdX5Fclose=(U32(*)(bicgInstance*,U32))resolve("wasi_snapshot_preview1", "fd_close");
i->wasiX5FsnapshotX5Fpreview1_fdX5Fwrite=(U32(*)(bicgInstance*,U32,U32,U32,U32))resolve("wasi_snapshot_preview1", "fd_write");
i->env_emscriptenX5FresizeX5Fheap=(U32(*)(bicgInstance*,U32))resolve("env", "emscripten_resize_heap");
i->wasiX5FsnapshotX5Fpreview1_fdX5Fseek=(U32(*)(bicgInstance*,U32,U32,U32,U32,U32))resolve("wasi_snapshot_preview1", "fd_seek");
}

wasmMemory*bicg_memory(bicgInstance* i){
return &i->m0;
}

void bicg_X5FX5FwasmX5FcallX5Fctors(bicgInstance*i){
bicg_f6(i);
}

U32 bicg_X5FX5FmainX5FargcX5Fargv(bicgInstance*i,U32 l0,U32 l1){
return bicg_f8(i,l0,l1);
}

U32 bicg_X5FX5FerrnoX5Flocation(bicgInstance*i){
return bicg_f14(i);
}

U32 bicg_stackSave(bicgInstance*i){
return bicg_f71(i);
}

void bicg_stackRestore(bicgInstance*i,U32 l0){
bicg_f72(i,l0);
}

U32 bicg_stackAlloc(bicgInstance*i,U32 l0){
return bicg_f73(i,l0);
}

U32 bicg_dynCallX5Fjiji(bicgInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4){
return bicg_f75(i,l0,l1,l2,l3,l4);
}

void bicgInstantiate(bicgInstance* i, void* resolve(const char* module, const char* name)) {
bicgInitImports(i, resolve);
bicgInitMemories(i);
bicgInitTables(i);
bicgInitGlobals(i);
}

void bicgFreeInstance(bicgInstance* i) {
wasmMemoryFree(&i->m0);
wasmTableFree(&i->t0);
}

