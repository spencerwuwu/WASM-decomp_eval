#include "w2c2_base.h"

#include "mips.h"

void f5(mipsInstance*i) {
L0:;
}

void f6(mipsInstance*i) {
L0:;
}

U32 f7(mipsInstance*i) {
U32 l0=0;
U32 l1=0;
U64 l2=0;
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
F64 l14=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2;
F64 sd1,sd2;
si0=(*i->env_____stack_pointer);
si1=448U;
si0-=si1;
l0=si0;
(*i->env_____stack_pointer)=si0;
si0=l0;
si1=48U;
si0+=si1;
si1=0U;
si0=env__gettimeofday(i,si0,si1);
l1=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=l1;
i32_store(i->env__memory,(U64)si0+32U,si1);
si0=(*i->env_____memory_base);
si1=240U;
si0+=si1;
si1=l0;
si2=32U;
si1+=si2;
si0=env__iprintf(i,si0,si1);
L1:;
si0=(*i->GOTX2Emem__main_result);
si1=0U;
i32_store(i->env__memory,(U64)si0,si1);
si0=l0;
si0=i32_load(i->env__memory,(U64)si0+56U);
l1=si0;
si0=l0;
sj0=i64_load(i->env__memory,(U64)si0+48U);
l2=sj0;
si0=(*i->GOTX2Emem__startTimer);
si1=l1;
sd1=(F64)(I32)(si1);
sd2=9.9999999999999995e-07;
sd1*=sd2;
sj2=l2;
sd2=(F64)(I64)(sj2);
sd1+=sd2;
f64_store(i->env__memory,(U64)si0,sd1);
si0=l0;
si1=304U;
si0+=si1;
si1=0U;
si2=128U;
si0=env__memset(i,si0,si1,si2);
si0=l0;
si1=2147479548U;
i32_store(i->env__memory,(U64)si0+420U,si1);
si0=l0;
si1=48U;
si0+=si1;
si1=(*i->GOTX2Emem__A);
si2=256U;
si0=env__memcpy(i,si0,si1,si2);
si0=4194304U;
l1=si0;
si0=0U;
l3=si0;
si0=0U;
l4=si0;
si0=0U;
l5=si0;
L2:;
{
si0=l5;
l6=si0;
si0=l4;
l7=si0;
si0=l3;
l8=si0;
si0=l1;
l9=si0;
si1=4U;
si0+=si1;
l10=si0;
si0=(*i->GOTX2Emem__imem);
si1=l9;
si2=252U;
si1&=si2;
si0+=si1;
si0=i32_load(i->env__memory,(U64)si0);
l1=si0;
si1=26U;
si0>>=(si1&31);
l11=si0;
switch(si0){
case 0:
goto L9;
case 1:
goto L6;
case 2:
goto L8;
case 3:
goto L7;
default:
goto L6;
}
L9:;
si0=l1;
si1=21U;
si0>>=(si1&31);
si1=31U;
si0&=si1;
l12=si0;
si0=l1;
si1=16U;
si0>>=(si1&31);
si1=31U;
si0&=si1;
l9=si0;
si0=l1;
si1=11U;
si0>>=(si1&31);
si1=31U;
si0&=si1;
l11=si0;
si0=l1;
si1=6U;
si0>>=(si1&31);
si1=31U;
si0&=si1;
l13=si0;
si0=0U;
l5=si0;
si0=l8;
l3=si0;
si0=l7;
l4=si0;
si0=l1;
si1=63U;
si0&=si1;
switch(si0){
case 0:
goto L16;
case 1:
goto L3;
case 2:
goto L15;
case 3:
goto L3;
case 4:
goto L14;
case 5:
goto L3;
case 6:
goto L13;
case 7:
goto L3;
case 8:
goto L10;
case 9:
goto L3;
case 10:
goto L3;
case 11:
goto L3;
case 12:
goto L3;
case 13:
goto L3;
case 14:
goto L3;
case 15:
goto L3;
case 16:
goto L21;
case 17:
goto L3;
case 18:
goto L20;
case 19:
goto L3;
case 20:
goto L3;
case 21:
goto L3;
case 22:
goto L3;
case 23:
goto L3;
case 24:
goto L23;
case 25:
goto L22;
case 26:
goto L3;
case 27:
goto L3;
case 28:
goto L3;
case 29:
goto L3;
case 30:
goto L3;
case 31:
goto L3;
case 32:
goto L3;
case 33:
goto L25;
case 34:
goto L3;
case 35:
goto L24;
case 36:
goto L19;
case 37:
goto L18;
case 38:
goto L17;
case 39:
goto L3;
case 40:
goto L3;
case 41:
goto L3;
case 42:
goto L12;
case 43:
goto L11;
default:
goto L3;
}
L25:;
si0=l0;
si1=304U;
si0+=si1;
si1=l11;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l0;
si2=304U;
si1+=si2;
si2=l9;
si3=2U;
si2<<=(si3&31);
si1+=si2;
si1=i32_load(i->env__memory,(U64)si1);
si2=l0;
si3=304U;
si2+=si3;
si3=l12;
si4=2U;
si3<<=(si4&31);
si2+=si3;
si2=i32_load(i->env__memory,(U64)si2);
si1+=si2;
i32_store(i->env__memory,(U64)si0,si1);
goto L5;
L24:;
si0=l0;
si1=304U;
si0+=si1;
si1=l11;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l0;
si2=304U;
si1+=si2;
si2=l12;
si3=2U;
si2<<=(si3&31);
si1+=si2;
si1=i32_load(i->env__memory,(U64)si1);
si2=l0;
si3=304U;
si2+=si3;
si3=l9;
si4=2U;
si3<<=(si4&31);
si2+=si3;
si2=i32_load(i->env__memory,(U64)si2);
si1-=si2;
i32_store(i->env__memory,(U64)si0,si1);
goto L5;
L23:;
si0=l10;
l5=si0;
si0=l0;
si1=304U;
si0+=si1;
si1=l9;
si2=2U;
si1<<=(si2&31);
si0+=si1;
sj0=i64_load32_s(i->env__memory,(U64)si0);
si1=l0;
si2=304U;
si1+=si2;
si2=l12;
si3=2U;
si2<<=(si3&31);
si1+=si2;
sj1=i64_load32_s(i->env__memory,(U64)si1);
sj0*=sj1;
l2=sj0;
si0=(U32)(sj0);
l3=si0;
sj0=l2;
sj1=32ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
l4=si0;
goto L3;
L22:;
si0=l10;
l5=si0;
si0=l0;
si1=304U;
si0+=si1;
si1=l9;
si2=2U;
si1<<=(si2&31);
si0+=si1;
sj0=i64_load32_u(i->env__memory,(U64)si0);
si1=l0;
si2=304U;
si1+=si2;
si2=l12;
si3=2U;
si2<<=(si3&31);
si1+=si2;
sj1=i64_load32_u(i->env__memory,(U64)si1);
sj0*=sj1;
l2=sj0;
si0=(U32)(sj0);
l3=si0;
sj0=l2;
sj1=32ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
l4=si0;
goto L3;
L21:;
si0=l0;
si1=304U;
si0+=si1;
si1=l11;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l7;
i32_store(i->env__memory,(U64)si0,si1);
goto L5;
L20:;
si0=l0;
si1=304U;
si0+=si1;
si1=l11;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l8;
i32_store(i->env__memory,(U64)si0,si1);
goto L5;
L19:;
si0=l0;
si1=304U;
si0+=si1;
si1=l11;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l0;
si2=304U;
si1+=si2;
si2=l9;
si3=2U;
si2<<=(si3&31);
si1+=si2;
si1=i32_load(i->env__memory,(U64)si1);
si2=l0;
si3=304U;
si2+=si3;
si3=l12;
si4=2U;
si3<<=(si4&31);
si2+=si3;
si2=i32_load(i->env__memory,(U64)si2);
si1&=si2;
i32_store(i->env__memory,(U64)si0,si1);
goto L5;
L18:;
si0=l0;
si1=304U;
si0+=si1;
si1=l11;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l0;
si2=304U;
si1+=si2;
si2=l9;
si3=2U;
si2<<=(si3&31);
si1+=si2;
si1=i32_load(i->env__memory,(U64)si1);
si2=l0;
si3=304U;
si2+=si3;
si3=l12;
si4=2U;
si3<<=(si4&31);
si2+=si3;
si2=i32_load(i->env__memory,(U64)si2);
si1|=si2;
i32_store(i->env__memory,(U64)si0,si1);
goto L5;
L17:;
si0=l0;
si1=304U;
si0+=si1;
si1=l11;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l0;
si2=304U;
si1+=si2;
si2=l9;
si3=2U;
si2<<=(si3&31);
si1+=si2;
si1=i32_load(i->env__memory,(U64)si1);
si2=l0;
si3=304U;
si2+=si3;
si3=l12;
si4=2U;
si3<<=(si4&31);
si2+=si3;
si2=i32_load(i->env__memory,(U64)si2);
si1^=si2;
i32_store(i->env__memory,(U64)si0,si1);
goto L5;
L16:;
si0=l0;
si1=304U;
si0+=si1;
si1=l11;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l0;
si2=304U;
si1+=si2;
si2=l9;
si3=2U;
si2<<=(si3&31);
si1+=si2;
si1=i32_load(i->env__memory,(U64)si1);
si2=l13;
si1<<=(si2&31);
i32_store(i->env__memory,(U64)si0,si1);
goto L5;
L15:;
si0=l0;
si1=304U;
si0+=si1;
si1=l11;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l0;
si2=304U;
si1+=si2;
si2=l9;
si3=2U;
si2<<=(si3&31);
si1+=si2;
si1=i32_load(i->env__memory,(U64)si1);
si2=l13;
si1=(U32)((I32)si1>>(si2&31));
i32_store(i->env__memory,(U64)si0,si1);
goto L5;
L14:;
si0=l0;
si1=304U;
si0+=si1;
si1=l11;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l0;
si2=304U;
si1+=si2;
si2=l9;
si3=2U;
si2<<=(si3&31);
si1+=si2;
si1=i32_load(i->env__memory,(U64)si1);
si2=l0;
si3=304U;
si2+=si3;
si3=l12;
si4=2U;
si3<<=(si4&31);
si2+=si3;
si2=i32_load(i->env__memory,(U64)si2);
si1<<=(si2&31);
i32_store(i->env__memory,(U64)si0,si1);
goto L5;
L13:;
si0=l0;
si1=304U;
si0+=si1;
si1=l11;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l0;
si2=304U;
si1+=si2;
si2=l9;
si3=2U;
si2<<=(si3&31);
si1+=si2;
si1=i32_load(i->env__memory,(U64)si1);
si2=l0;
si3=304U;
si2+=si3;
si3=l12;
si4=2U;
si3<<=(si4&31);
si2+=si3;
si2=i32_load(i->env__memory,(U64)si2);
si1=(U32)((I32)si1>>(si2&31));
i32_store(i->env__memory,(U64)si0,si1);
goto L5;
L12:;
si0=l0;
si1=304U;
si0+=si1;
si1=l11;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l0;
si2=304U;
si1+=si2;
si2=l12;
si3=2U;
si2<<=(si3&31);
si1+=si2;
si1=i32_load(i->env__memory,(U64)si1);
si2=l0;
si3=304U;
si2+=si3;
si3=l9;
si4=2U;
si3<<=(si4&31);
si2+=si3;
si2=i32_load(i->env__memory,(U64)si2);
si1=(U32)((I32)si1<(I32)si2);
i32_store(i->env__memory,(U64)si0,si1);
goto L5;
L11:;
si0=l0;
si1=304U;
si0+=si1;
si1=l11;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l0;
si2=304U;
si1+=si2;
si2=l12;
si3=2U;
si2<<=(si3&31);
si1+=si2;
si1=i32_load(i->env__memory,(U64)si1);
si2=l0;
si3=304U;
si2+=si3;
si3=l9;
si4=2U;
si3<<=(si4&31);
si2+=si3;
si2=i32_load(i->env__memory,(U64)si2);
si1=si1 < si2;
i32_store(i->env__memory,(U64)si0,si1);
goto L5;
L10:;
si0=l0;
si1=304U;
si0+=si1;
si1=l12;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si0=i32_load(i->env__memory,(U64)si0);
l5=si0;
goto L4;
L8:;
si0=l1;
si1=2U;
si0<<=(si1&31);
si1=268435452U;
si0&=si1;
l5=si0;
goto L4;
L7:;
si0=l0;
si1=l10;
i32_store(i->env__memory,(U64)si0+428U,si1);
si0=l1;
si1=2U;
si0<<=(si1&31);
si1=268435452U;
si0&=si1;
l5=si0;
goto L4;
L6:;
si0=l1;
si1=21U;
si0>>=(si1&31);
si1=31U;
si0&=si1;
l12=si0;
si0=l1;
si1=16U;
si0>>=(si1&31);
si1=31U;
si0&=si1;
l13=si0;
si0=0U;
l5=si0;
si0=l8;
l3=si0;
si0=l7;
l4=si0;
si0=l11;
si1=-1U;
si0+=si1;
switch(si0){
case 0:
goto L28;
case 1:
goto L3;
case 2:
goto L3;
case 3:
goto L30;
case 4:
goto L29;
case 5:
goto L3;
case 6:
goto L3;
case 7:
goto L3;
case 8:
goto L37;
case 9:
goto L27;
case 10:
goto L26;
case 11:
goto L36;
case 12:
goto L35;
case 13:
goto L34;
case 14:
goto L31;
case 15:
goto L3;
case 16:
goto L3;
case 17:
goto L3;
case 18:
goto L3;
case 19:
goto L3;
case 20:
goto L3;
case 21:
goto L3;
case 22:
goto L3;
case 23:
goto L3;
case 24:
goto L3;
case 25:
goto L3;
case 26:
goto L3;
case 27:
goto L3;
case 28:
goto L3;
case 29:
goto L3;
case 30:
goto L3;
case 31:
goto L3;
case 32:
goto L3;
case 33:
goto L3;
case 34:
goto L33;
case 35:
goto L3;
case 36:
goto L3;
case 37:
goto L3;
case 38:
goto L3;
case 39:
goto L3;
case 40:
goto L3;
case 41:
goto L3;
case 42:
goto L32;
default:
goto L3;
}
L37:;
si0=l0;
si1=304U;
si0+=si1;
si1=l13;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l0;
si2=304U;
si1+=si2;
si2=l12;
si3=2U;
si2<<=(si3&31);
si1+=si2;
si1=i32_load(i->env__memory,(U64)si1);
si2=l1;
si2=(U32)(I32)(I16)(U16)(si2);
si1+=si2;
i32_store(i->env__memory,(U64)si0,si1);
goto L5;
L36:;
si0=l0;
si1=304U;
si0+=si1;
si1=l13;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l1;
si2=l0;
si3=304U;
si2+=si3;
si3=l12;
si4=2U;
si3<<=(si4&31);
si2+=si3;
si2=i32_load16_u(i->env__memory,(U64)si2);
si1&=si2;
i32_store(i->env__memory,(U64)si0,si1);
goto L5;
L35:;
si0=l0;
si1=304U;
si0+=si1;
si1=l13;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l0;
si2=304U;
si1+=si2;
si2=l12;
si3=2U;
si2<<=(si3&31);
si1+=si2;
si1=i32_load(i->env__memory,(U64)si1);
si2=l1;
si3=65535U;
si2&=si3;
si1|=si2;
i32_store(i->env__memory,(U64)si0,si1);
goto L5;
L34:;
si0=l0;
si1=304U;
si0+=si1;
si1=l13;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l0;
si2=304U;
si1+=si2;
si2=l12;
si3=2U;
si2<<=(si3&31);
si1+=si2;
si1=i32_load(i->env__memory,(U64)si1);
si2=l1;
si3=65535U;
si2&=si3;
si1^=si2;
i32_store(i->env__memory,(U64)si0,si1);
goto L5;
L33:;
si0=l0;
si1=304U;
si0+=si1;
si1=l13;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l0;
si2=48U;
si1+=si2;
si2=l0;
si3=304U;
si2+=si3;
si3=l12;
si4=2U;
si3<<=(si4&31);
si2+=si3;
si2=i32_load(i->env__memory,(U64)si2);
si3=l1;
si2+=si3;
si3=252U;
si2&=si3;
si1+=si2;
si1=i32_load(i->env__memory,(U64)si1);
i32_store(i->env__memory,(U64)si0,si1);
goto L5;
L32:;
si0=l0;
si1=48U;
si0+=si1;
si1=l0;
si2=304U;
si1+=si2;
si2=l12;
si3=2U;
si2<<=(si3&31);
si1+=si2;
si1=i32_load(i->env__memory,(U64)si1);
si2=l1;
si1+=si2;
si2=252U;
si1&=si2;
si0+=si1;
si1=l0;
si2=304U;
si1+=si2;
si2=l13;
si3=2U;
si2<<=(si3&31);
si1+=si2;
si1=i32_load(i->env__memory,(U64)si1);
i32_store(i->env__memory,(U64)si0,si1);
goto L5;
L31:;
si0=l0;
si1=304U;
si0+=si1;
si1=l13;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l1;
si2=16U;
si1<<=(si2&31);
i32_store(i->env__memory,(U64)si0,si1);
goto L5;
L30:;
si0=l0;
si1=304U;
si0+=si1;
si1=l12;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si0=i32_load(i->env__memory,(U64)si0);
si1=l0;
si2=304U;
si1+=si2;
si2=l13;
si3=2U;
si2<<=(si3&31);
si1+=si2;
si1=i32_load(i->env__memory,(U64)si1);
si0=si0 != si1;
if(si0){
goto L5;
}
si0=l1;
si1=16U;
si0<<=(si1&31);
si1=14U;
si0=(U32)((I32)si0>>(si1&31));
si1=l9;
si0+=si1;
l5=si0;
goto L4;
L29:;
si0=l0;
si1=304U;
si0+=si1;
si1=l12;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si0=i32_load(i->env__memory,(U64)si0);
si1=l0;
si2=304U;
si1+=si2;
si2=l13;
si3=2U;
si2<<=(si3&31);
si1+=si2;
si1=i32_load(i->env__memory,(U64)si1);
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l1;
si1=16U;
si0<<=(si1&31);
si1=14U;
si0=(U32)((I32)si0>>(si1&31));
si1=l9;
si0+=si1;
l5=si0;
goto L4;
L28:;
si0=l0;
si1=304U;
si0+=si1;
si1=l12;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si0=i32_load(i->env__memory,(U64)si0);
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L5;
}
si0=l1;
si1=16U;
si0<<=(si1&31);
si1=14U;
si0=(U32)((I32)si0>>(si1&31));
si1=l9;
si0+=si1;
l5=si0;
goto L4;
L27:;
si0=l0;
si1=304U;
si0+=si1;
si1=l13;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l0;
si2=304U;
si1+=si2;
si2=l12;
si3=2U;
si2<<=(si3&31);
si1+=si2;
si1=i32_load(i->env__memory,(U64)si1);
si2=l1;
si2=(U32)(I32)(I16)(U16)(si2);
si1=(U32)((I32)si1<(I32)si2);
i32_store(i->env__memory,(U64)si0,si1);
goto L5;
L26:;
si0=l0;
si1=304U;
si0+=si1;
si1=l13;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=l0;
si2=304U;
si1+=si2;
si2=l12;
si3=2U;
si2<<=(si3&31);
si1+=si2;
si1=i32_load(i->env__memory,(U64)si1);
si2=l1;
si3=65535U;
si2&=si3;
si1=si1 < si2;
i32_store(i->env__memory,(U64)si0,si1);
L5:;
si0=l10;
l5=si0;
L4:;
si0=l8;
l3=si0;
si0=l7;
l4=si0;
L3:;
si0=l0;
si1=0U;
i32_store(i->env__memory,(U64)si0+304U,si1);
si0=l5;
l7=si0;
l1=si0;
si0=l3;
l3=si0;
si0=l4;
l4=si0;
si0=l6;
si1=1U;
si0+=si1;
l8=si0;
l5=si0;
si0=l7;
if(si0){
goto L2;
}
}
si0=(*i->GOTX2Emem__main_result);
si1=l8;
si2=611U;
si1=si1 != si2;
l3=si1;
i32_store(i->env__memory,(U64)si0,si1);
si0=0U;
l1=si0;
si0=l3;
l3=si0;
L38:;
{
si0=(*i->GOTX2Emem__outData);
l4=si0;
si0=l1;
l5=si0;
si1=1U;
si0+=si1;
l7=si0;
l1=si0;
si0=l3;
si1=l0;
si2=48U;
si1+=si2;
si2=l5;
si3=2U;
si2<<=(si3&31);
l3=si2;
si1+=si2;
si1=i32_load(i->env__memory,(U64)si1);
si2=l4;
si3=l3;
si2+=si3;
si2=i32_load(i->env__memory,(U64)si2);
si1=si1 != si2;
si0+=si1;
l4=si0;
l3=si0;
si0=l7;
si1=8U;
si0=si0 != si1;
if(si0){
goto L38;
}
}
si0=(*i->GOTX2Emem__main_result);
si1=l4;
i32_store(i->env__memory,(U64)si0,si1);
si0=l0;
si1=432U;
si0+=si1;
si1=0U;
si0=env__gettimeofday(i,si0,si1);
l1=si0;
si0=!(si0);
if(si0){
goto L39;
}
si0=l0;
si1=l1;
i32_store(i->env__memory,(U64)si0+16U,si1);
si0=(*i->env_____memory_base);
si1=240U;
si0+=si1;
si1=l0;
si2=16U;
si1+=si2;
si0=env__iprintf(i,si0,si1);
L39:;
si0=l0;
si0=i32_load(i->env__memory,(U64)si0+440U);
l1=si0;
si0=l0;
sj0=i64_load(i->env__memory,(U64)si0+432U);
l2=sj0;
si0=(*i->GOTX2Emem__endTimer);
si1=l1;
sd1=(F64)(I32)(si1);
sd2=9.9999999999999995e-07;
sd1*=sd2;
sj2=l2;
sd2=(F64)(I64)(sj2);
sd1+=sd2;
l14=sd1;
f64_store(i->env__memory,(U64)si0,sd1);
si0=l0;
sd1=l14;
si2=(*i->GOTX2Emem__startTimer);
sd2=f64_load(i->env__memory,(U64)si2);
sd1-=sd2;
f64_store(i->env__memory,(U64)si0,sd1);
si0=(*i->env_____memory_base);
si1=275U;
si0+=si1;
si1=l0;
si0=env_____small_printf(i,si0,si1);
si0=(*i->GOTX2Emem__main_result);
si0=i32_load(i->env__memory,(U64)si0);
l1=si0;
si0=l0;
si1=448U;
si0+=si1;
(*i->env_____stack_pointer)=si0;
si0=l1;
L0:;
return si0;
}

const U8 d0[]={
0x0,0x0,0xa4,0x8f,0x4,0x0,0xa5,0x27,0x4,0x0,0xa6,0x24,0x80,0x10,0x4,0x0,0x21,0x30,0xc2,0x0,0x16,0x0,0x10,0xc,0x0,0x0,0x0,0x0,0xa,0x0,0x2,0x34,0xc,0x0,0x0,0x0,0x1,0x10,0x1,0x3c,0x0,0x0,0x28,0x34,0x80,0x48,0x4,0x0,0x21,0x48,0x9,0x1,0x0,0x0,0x2a,0x8d,0x80,0x58,0x5,0x0,0x21,0x58,0xb,0x1,0x0,0x0,0x6c,0x8d,0x2a,0x68,0x8a,0x1,0x3,0x0,0xa0,0x11,0x0,0x0,0x2c,0xad,0x0,0x0,0x6a,0xad,0x8,0x0,0xe0,0x3,0xf4,0xff,0xbd,0x27,0x8,0x0,0xbf,0xaf,0x4,0x0,0xb1,0xaf,0x0,0x0,0xb0,0xaf,0x0,0x0,0x10,0x24,0x8,0x0,0x8,0x2a,0xb,0x0,0x0,0x11,0x1,0x0,0x11,0x26,0x8,0x0,0x28,0x2a,0x6,0x0,0x0,0x11,0x0,0x0,0x4,0x26,0x0,0x0,0x25,0x26,0x9,0x0,0x10,0xc,0x1,0x0,0x31,0x26,0x1e,0x0,0x10,0x8,0x1,0x0,0x10,0x26,0x1b,0x0,0x10,0x8,0x8,0x0,0xbf,0x8f,0x4,0x0,0xb1,0x8f,0x0,0x0,0xb0,0x8f,0xc,0x0,0xbd,0x27,0x8,0x0,0xe0,0x3,0x16,0x0,0x0,0x0,0x5,0x0,0x0,0x0,0xf7,0xff,0xff,0xff,0x3,0x0,0x0,0x0,0xef,0xff,0xff,0xff,0x26,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xb,0x0,0x0,0x0,0xef,0xff,0xff,0xff,0xf7,0xff,0xff,0xff,0x0,0x0,0x0,0x0,0x3,0x0,0x0,0x0,0x5,0x0,0x0,0x0,0xb,0x0,0x0,0x0,0x16,0x0,0x0,0x0,0x26,0x0,0x0,0x0,0x45,0x72,0x72,0x6f,0x72,0x20,0x72,0x65,0x74,0x75,0x72,0x6e,0x20,0x66,0x72,0x6f,0x6d,0x20,0x67,0x65,0x74,0x74,0x69,0x6d,0x65,0x6f,0x66,0x64,0x61,0x79,0x3a,0x20,0x25,0x64,0x0,0x25,0x30,0x2e,0x36,0x66,0xa,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
};

static void mipsInitGlobals(mipsInstance* i) {
i->g9=296U;
i->g10=288U;
i->g11=176U;
i->g12=0U;
i->g13=208U;
i->g14=304U;
}

static void mipsInitImports(mipsInstance* i, void* resolve(const char* module, const char* name)) {
if (resolve == NULL) { return; }
i->env__memory=(wasmMemory*)resolve("env", "memory");
i->env_____stack_pointer=(U32*)resolve("env", "__stack_pointer");
i->env_____memory_base=(U32*)resolve("env", "__memory_base");
i->env_____table_base=(U32*)resolve("env", "__table_base");
i->GOTX2Emem__main_result=(U32*)resolve("GOT.mem", "main_result");
i->GOTX2Emem__startTimer=(U32*)resolve("GOT.mem", "startTimer");
i->GOTX2Emem__A=(U32*)resolve("GOT.mem", "A");
i->GOTX2Emem__imem=(U32*)resolve("GOT.mem", "imem");
i->GOTX2Emem__outData=(U32*)resolve("GOT.mem", "outData");
i->GOTX2Emem__endTimer=(U32*)resolve("GOT.mem", "endTimer");
}

void mips____wasm_call_ctors(mipsInstance*i){
f5(i);
}

void mips____wasm_apply_data_relocs(mipsInstance*i){
f6(i);
}

U32 mips_submain(mipsInstance*i){
return f7(i);
}

void mipsInstantiate(mipsInstance* i, void* resolve(const char* module, const char* name)) {
mipsInitImports(i, resolve);
mipsInitGlobals(i);
}

void mipsFreeInstance(mipsInstance* i) {
}

