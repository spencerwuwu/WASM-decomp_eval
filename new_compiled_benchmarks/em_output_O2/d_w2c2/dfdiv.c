#include "w2c2_base.h"

#include "dfdiv.h"

void f4(dfdivInstance*i) {
L0:;
}

void f5(dfdivInstance*i) {
L0:;
}

void f6(dfdivInstance*i,U64 l0,U32 l1,U32 l2) {
U32 si0,si1,si2,si3;
U64 sj0,sj1,sj2,sj3;
si0=l1;
if(si0){
si0=l1;
si1=63U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
si0=l2;
sj1=l0;
si2=0U;
si3=l1;
si2-=si3;
si3=63U;
si2&=si3;
sj2=(U64)(si2);
sj1<<=(sj2&63);
sj2=0ULL;
si1=sj1 != sj2;
sj1=(U64)(si1);
sj2=l0;
si3=l1;
sj3=(U64)(si3);
sj2>>=(sj3&63);
sj1|=sj2;
i64_store(i->env__memory,(U64)si0,sj1);
goto L0;
}
L2:;
sj0=l0;
sj1=0ULL;
si0=sj0 != sj1;
sj0=(U64)(si0);
l0=sj0;
}
L1:;
si0=l2;
sj1=l0;
i64_store(i->env__memory,(U64)si0,sj1);
L0:;
}

void f7(dfdivInstance*i,U64 l0,U64 l1,U64 l2,U64 l3,U32 l4,U32 l5) {
U32 si0,si1;
U64 sj1,sj2,sj3;
si0=l5;
sj1=l1;
sj2=l3;
sj1+=sj2;
l1=sj1;
i64_store(i->env__memory,(U64)si0,sj1);
si0=l4;
sj1=l1;
sj2=l3;
si1=sj1 < sj2;
sj1=(U64)(si1);
sj2=l0;
sj3=l2;
sj2+=sj3;
sj1+=sj2;
i64_store(i->env__memory,(U64)si0,sj1);
L0:;
}

void f8(dfdivInstance*i,U64 l0,U64 l1,U64 l2,U64 l3,U32 l4,U32 l5) {
U32 si0,si2;
U64 sj1,sj2,sj3;
si0=l5;
sj1=l1;
sj2=l3;
sj1-=sj2;
i64_store(i->env__memory,(U64)si0,sj1);
si0=l4;
sj1=l0;
sj2=l2;
sj1-=sj2;
sj2=l1;
sj3=l3;
si2=sj2 < sj3;
sj2=(U64)(si2);
sj1-=sj2;
i64_store(i->env__memory,(U64)si0,sj1);
L0:;
}

void f9(dfdivInstance*i,U64 l0,U64 l1,U32 l2,U32 l3) {
U64 l4=0;
U64 l5=0;
U64 l6=0;
U32 si0,si2;
U64 sj1,sj2,sj3,sj4;
si0=l3;
sj1=l0;
sj2=l1;
sj1*=sj2;
l4=sj1;
i64_store(i->env__memory,(U64)si0,sj1);
si0=l2;
sj1=l1;
sj2=32ULL;
sj1>>=(sj2&63);
l5=sj1;
sj2=l0;
sj3=4294967295ULL;
sj2&=sj3;
sj1*=sj2;
l6=sj1;
sj2=l1;
sj3=4294967295ULL;
sj2&=sj3;
sj3=l0;
sj4=32ULL;
sj3>>=(sj4&63);
l1=sj3;
sj2*=sj3;
sj1+=sj2;
l0=sj1;
sj2=32ULL;
sj1>>=(sj2&63);
sj2=l1;
sj3=l5;
sj2*=sj3;
sj1+=sj2;
sj2=l0;
sj3=l6;
si2=sj2 < sj3;
sj2=(U64)(si2);
sj3=32ULL;
sj2<<=(sj3&63);
sj1+=sj2;
sj2=l4;
sj3=l0;
sj4=32ULL;
sj3<<=(sj4&63);
si2=sj2 < sj3;
sj2=(U64)(si2);
sj1+=sj2;
i64_store(i->env__memory,(U64)si0,sj1);
L0:;
}

void f10(dfdivInstance*i,U32 l0) {
U32 l1=0;
U32 si0,si1,si2;
si0=(*i->GOTX2Emem__float_exception_flags);
l1=si0;
si1=l1;
si1=i32_load(i->env__memory,(U64)si1);
si2=l0;
si1|=si2;
i32_store(i->env__memory,(U64)si0,si1);
L0:;
}

U32 f11(dfdivInstance*i,U64 l0) {
U32 si0;
U64 sj0,sj1;
sj0=l0;
sj1=1ULL;
sj0<<=(sj1&63);
sj1=-9007199254740992ULL;
si0=sj0 > sj1;
L0:;
return si0;
}

U32 f12(dfdivInstance*i,U64 l0) {
U32 si0,si1;
U64 sj0,sj1,sj2;
sj0=l0;
sj1=9221120237041090560ULL;
sj0&=sj1;
sj1=9218868437227405312ULL;
si0=sj0 == sj1;
sj1=l0;
sj2=2251799813685247ULL;
sj1&=sj2;
sj2=0ULL;
si1=sj1 != sj2;
si0&=si1;
L0:;
return si0;
}

U64 f13(dfdivInstance*i,U64 l0) {
U64 sj0,sj1;
sj0=l0;
sj1=4503599627370495ULL;
sj0&=sj1;
L0:;
return sj0;
}

U32 f14(dfdivInstance*i,U64 l0) {
U32 si0,si1;
U64 sj0,sj1;
sj0=l0;
sj1=52ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
si1=2047U;
si0&=si1;
L0:;
return si0;
}

U32 f15(dfdivInstance*i,U64 l0) {
U32 si0;
U64 sj0,sj1;
sj0=l0;
sj1=63ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
L0:;
return si0;
}

U64 f16(dfdivInstance*i,U32 l0,U32 l1,U64 l2) {
U32 si0,si1;
U64 sj0,sj1,sj2;
si0=l0;
sj0=(U64)(si0);
sj1=63ULL;
sj0<<=(sj1&63);
sj1=l2;
sj0+=sj1;
si1=l1;
sj1=(U64)(si1);
sj2=52ULL;
sj1<<=(sj2&63);
sj0+=sj1;
L0:;
return sj0;
}

U64 f17(dfdivInstance*i,U64 l0,U64 l1) {
U32 l2=0;
U64 l3=0;
U32 l4=0;
U32 l5=0;
U64 l6=0;
U64 l7=0;
U64 l8=0;
U64 l9=0;
U32 l10=0;
U64 l11=0;
U64 l12=0;
U32 l13=0;
U64 l14=0;
U64 l15=0;
U64 l16=0;
U64 l17=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2,sj3,sj4,sj5;
sj0=l1;
sj1=4503599627370495ULL;
sj0&=sj1;
l6=sj0;
sj0=l0;
sj1=4503599627370495ULL;
sj0&=sj1;
l3=sj0;
sj0=l0;
sj1=l1;
sj0^=sj1;
l14=sj0;
sj1=-9223372036854775808ULL;
sj0&=sj1;
l9=sj0;
sj0=l1;
sj1=52ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
si1=2047U;
si0&=si1;
l2=si0;
sj0=l0;
sj1=52ULL;
sj0>>=(sj1&63);
l7=sj0;
si0=(U32)(sj0);
si1=2047U;
si0&=si1;
l5=si0;
si1=2047U;
si0=si0 == si1;
if(si0){
sj0=l3;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
sj0=l0;
sj1=9221120237041090560ULL;
sj0&=sj1;
sj1=9218868437227405312ULL;
si0=sj0 == sj1;
sj1=l0;
sj2=2251799813685247ULL;
sj1&=sj2;
sj2=0ULL;
si1=sj1 != sj2;
si0&=si1;
l5=si0;
sj1=l1;
sj2=9221120237041090560ULL;
sj1&=sj2;
sj2=9218868437227405312ULL;
si1=sj1 == sj2;
sj2=l1;
sj3=2251799813685247ULL;
sj2&=sj3;
sj3=0ULL;
si2=sj2 != sj3;
si1&=si2;
l2=si1;
si0|=si1;
if(si0){
si0=(*i->GOTX2Emem__float_exception_flags);
l4=si0;
si1=l4;
si1=i32_load(i->env__memory,(U64)si1);
si2=16U;
si1|=si2;
i32_store(i->env__memory,(U64)si0,si1);
}
L3:;
sj0=l1;
sj1=2251799813685248ULL;
sj0|=sj1;
l3=sj0;
sj1=l0;
sj2=2251799813685248ULL;
sj1|=sj2;
l0=sj1;
sj2=l0;
sj3=l3;
sj4=l1;
sj5=1ULL;
sj4<<=(sj5&63);
sj5=-9007199254740991ULL;
si4=sj4 < sj5;
sj2=si4?sj2:sj3;
si3=l5;
sj1=si3?sj1:sj2;
si2=l2;
sj0=si2?sj0:sj1;
goto L0;
}
L2:;
si0=l2;
si1=2047U;
si0=si0 == si1;
if(si0){
sj0=l6;
sj1=0ULL;
si0=sj0 != sj1;
if(si0){
sj0=l0;
sj1=9221120237041090560ULL;
sj0&=sj1;
sj1=9218868437227405312ULL;
si0=sj0 == sj1;
sj1=l0;
sj2=2251799813685247ULL;
sj1&=sj2;
sj2=0ULL;
si1=sj1 != sj2;
si0&=si1;
l5=si0;
sj1=l1;
sj2=9221120237041090560ULL;
sj1&=sj2;
sj2=9218868437227405312ULL;
si1=sj1 == sj2;
sj2=l1;
sj3=2251799813685247ULL;
sj2&=sj3;
sj3=0ULL;
si2=sj2 != sj3;
si1&=si2;
l2=si1;
si0|=si1;
if(si0){
si0=(*i->GOTX2Emem__float_exception_flags);
l4=si0;
si1=l4;
si1=i32_load(i->env__memory,(U64)si1);
si2=16U;
si1|=si2;
i32_store(i->env__memory,(U64)si0,si1);
}
L6:;
sj0=l1;
sj1=2251799813685248ULL;
sj0|=sj1;
l3=sj0;
sj1=l0;
sj2=2251799813685248ULL;
sj1|=sj2;
l0=sj1;
sj2=l0;
sj3=l3;
sj4=l1;
sj5=1ULL;
sj4<<=(sj5&63);
sj5=-9007199254740991ULL;
si4=sj4 < sj5;
sj2=si4?sj2:sj3;
si3=l5;
sj1=si3?sj1:sj2;
si2=l2;
sj0=si2?sj0:sj1;
goto L0;
}
L5:;
si0=(*i->GOTX2Emem__float_exception_flags);
l2=si0;
si1=l2;
si1=i32_load(i->env__memory,(U64)si1);
si2=16U;
si1|=si2;
i32_store(i->env__memory,(U64)si0,si1);
sj0=9223372036854775807ULL;
goto L0;
}
L4:;
sj0=l9;
sj1=9218868437227405312ULL;
sj0|=sj1;
goto L0;
}
L1:;
si0=l2;
if(si0){
si0=l2;
si1=2047U;
si0=si0 != si1;
if(si0){
goto L8;
}
sj0=l6;
si0=!(sj0);
if(si0){
goto L7;
}
sj0=l0;
sj1=9221120237041090560ULL;
sj0&=sj1;
sj1=9218868437227405312ULL;
si0=sj0 == sj1;
sj1=l0;
sj2=2251799813685247ULL;
sj1&=sj2;
sj2=0ULL;
si1=sj1 != sj2;
si0&=si1;
l5=si0;
sj1=l1;
sj2=9221120237041090560ULL;
sj1&=sj2;
sj2=9218868437227405312ULL;
si1=sj1 == sj2;
sj2=l1;
sj3=2251799813685247ULL;
sj2&=sj3;
sj3=0ULL;
si2=sj2 != sj3;
si1&=si2;
l2=si1;
si0|=si1;
if(si0){
si0=(*i->GOTX2Emem__float_exception_flags);
l4=si0;
si1=l4;
si1=i32_load(i->env__memory,(U64)si1);
si2=16U;
si1|=si2;
i32_store(i->env__memory,(U64)si0,si1);
}
L10:;
sj0=l1;
sj1=2251799813685248ULL;
sj0|=sj1;
l3=sj0;
sj1=l0;
sj2=2251799813685248ULL;
sj1|=sj2;
l0=sj1;
sj2=l0;
sj3=l3;
sj4=l1;
sj5=1ULL;
sj4<<=(sj5&63);
sj5=-9007199254740991ULL;
si4=sj4 < sj5;
sj2=si4?sj2:sj3;
si3=l5;
sj1=si3?sj1:sj2;
si2=l2;
sj0=si2?sj0:sj1;
goto L0;
}
L9:;
sj0=l6;
si0=!(sj0);
if(si0){
si0=(*i->GOTX2Emem__float_exception_flags);
si0=i32_load(i->env__memory,(U64)si0);
l2=si0;
sj0=l7;
sj1=2047ULL;
sj0&=sj1;
sj1=l3;
sj0|=sj1;
si0=!(sj0);
if(si0){
si0=(*i->GOTX2Emem__float_exception_flags);
si1=l2;
si2=16U;
si1|=si2;
i32_store(i->env__memory,(U64)si0,si1);
sj0=9223372036854775807ULL;
goto L0;
}
L12:;
si0=(*i->GOTX2Emem__float_exception_flags);
si1=l2;
si2=2U;
si1|=si2;
i32_store(i->env__memory,(U64)si0,si1);
sj0=l9;
sj1=9218868437227405312ULL;
sj0|=sj1;
goto L0;
}
L11:;
si0=12U;
si1=(*i->env_____memory_base);
si2=576U;
si1+=si2;
sj2=l1;
sj3=l6;
sj4=32ULL;
sj3>>=(sj4&63);
sj4=l6;
sj5=4294967296ULL;
si4=sj4 < sj5;
l4=si4;
sj2=si4?sj2:sj3;
si2=(U32)(sj2);
l2=si2;
si3=16U;
si2<<=(si3&31);
si3=l2;
si4=l2;
si5=65536U;
si4=si4 < si5;
l10=si4;
si2=si4?si2:si3;
l2=si2;
si3=8U;
si2<<=(si3&31);
si3=l2;
si4=l2;
si5=16777216U;
si4=si4 < si5;
l13=si4;
si2=si4?si2:si3;
si3=22U;
si2>>=(si3&31);
si3=1020U;
si2&=si3;
si1+=si2;
si1=i32_load(i->env__memory,(U64)si1);
si2=l4;
si3=5U;
si2<<=(si3&31);
si3=l10;
si4=4U;
si3<<=(si4&31);
l2=si3;
si4=8U;
si3|=si4;
si4=l2;
si5=l13;
si3=si5?si3:si4;
si2|=si3;
si1+=si2;
l4=si1;
si0-=si1;
l2=si0;
sj0=l6;
si1=l4;
si2=11U;
si1-=si2;
sj1=(U64)(si1);
sj0<<=(sj1&63);
l6=sj0;
L8:;
si0=l5;
si0=!(si0);
if(si0){
sj0=l3;
si0=!(sj0);
if(si0){
goto L7;
}
si0=12U;
si1=(*i->env_____memory_base);
si2=576U;
si1+=si2;
sj2=l0;
sj3=l3;
sj4=32ULL;
sj3>>=(sj4&63);
sj4=l3;
sj5=4294967296ULL;
si4=sj4 < sj5;
l4=si4;
sj2=si4?sj2:sj3;
si2=(U32)(sj2);
l5=si2;
si3=16U;
si2<<=(si3&31);
si3=l5;
si4=l5;
si5=65536U;
si4=si4 < si5;
l10=si4;
si2=si4?si2:si3;
l5=si2;
si3=8U;
si2<<=(si3&31);
si3=l5;
si4=l5;
si5=16777216U;
si4=si4 < si5;
l13=si4;
si2=si4?si2:si3;
si3=22U;
si2>>=(si3&31);
si3=1020U;
si2&=si3;
si1+=si2;
si1=i32_load(i->env__memory,(U64)si1);
si2=l4;
si3=5U;
si2<<=(si3&31);
si3=l10;
si4=4U;
si3<<=(si4&31);
l5=si3;
si4=8U;
si3|=si4;
si4=l5;
si5=l13;
si3=si5?si3:si4;
si2|=si3;
si1+=si2;
l4=si1;
si0-=si1;
l5=si0;
sj0=l3;
si1=l4;
si2=11U;
si1-=si2;
sj1=(U64)(si1);
sj0<<=(sj1&63);
l3=sj0;
}
L13:;
si0=1022U;
si1=1021U;
sj2=l6;
sj3=11ULL;
sj2<<=(sj3&63);
l8=sj2;
sj3=-9223372036854775808ULL;
sj2|=sj3;
l11=sj2;
sj3=l3;
sj4=10ULL;
sj3<<=(sj4&63);
sj4=4611686018427387904ULL;
sj3|=sj4;
l0=sj3;
sj4=1ULL;
sj3<<=(sj4&63);
si2=sj2 <= sj3;
l4=si2;
si0=si2?si0:si1;
l10=si0;
si0=l5;
si1=l2;
si0-=si1;
l5=si0;
sj0=-1ULL;
l1=sj0;
sj0=l11;
sj1=l0;
si2=l4;
sj2=(U64)(si2);
sj1>>=(sj2&63);
l12=sj1;
si0=sj0 <= sj1;
if(si0){
goto L14;
}
sj0=l11;
sj1=32ULL;
sj0>>=(sj1&63);
l7=sj0;
sj0=-4294967296ULL;
l0=sj0;
sj0=l12;
sj1=l11;
sj2=-4294967296ULL;
sj1&=sj2;
l15=sj1;
si0=sj0 < sj1;
if(si0){
sj0=l12;
sj1=l7;
sj0=DIV_U(sj0,sj1);
sj1=32ULL;
sj0<<=(sj1&63);
l0=sj0;
}
L15:;
sj0=0ULL;
sj1=l0;
sj2=l11;
sj1*=sj2;
l3=sj1;
sj0-=sj1;
l1=sj0;
sj0=l12;
sj1=l0;
sj2=32ULL;
sj1>>=(sj2&63);
l16=sj1;
sj2=l7;
sj1*=sj2;
sj2=l16;
sj3=l8;
sj4=4294965248ULL;
sj3&=sj4;
l17=sj3;
sj2*=sj3;
l8=sj2;
sj3=32ULL;
sj2>>=(sj3&63);
sj1+=sj2;
sj0-=sj1;
sj1=l3;
sj2=0ULL;
si1=sj1 != sj2;
sj1=(U64)(si1);
sj0-=sj1;
sj1=l3;
sj2=l8;
sj3=32ULL;
sj2<<=(sj3&63);
si1=sj1 < sj2;
sj1=(U64)(si1);
sj0-=sj1;
l3=sj0;
sj1=0ULL;
si0=(U64)((I64)sj0>=(I64)sj1);
if(si0){
sj0=l1;
l6=sj0;
goto L16;
}
L17:;
sj0=l6;
sj1=43ULL;
sj0<<=(sj1&63);
l8=sj0;
L18:;
{
sj0=l1;
sj1=l8;
sj0+=sj1;
l6=sj0;
sj1=l1;
si0=sj0 < sj1;
l2=si0;
sj0=l0;
sj1=4294967296ULL;
sj0-=sj1;
l0=sj0;
sj0=l6;
l1=sj0;
si0=l2;
sj0=(U64)(si0);
sj1=l3;
sj2=l7;
sj1+=sj2;
sj0+=sj1;
l3=sj0;
sj1=0ULL;
si0=(U64)((I64)sj0<(I64)sj1);
if(si0){
goto L18;
}
}
L16:;
sj0=4294967295ULL;
l1=sj0;
sj0=l3;
sj1=32ULL;
sj0<<=(sj1&63);
sj1=l6;
sj2=32ULL;
sj1>>=(sj2&63);
sj0|=sj1;
l3=sj0;
sj1=l15;
si0=sj0 < sj1;
if(si0){
sj0=l3;
sj1=l7;
sj0=DIV_U(sj0,sj1);
l1=sj0;
}
L19:;
sj0=l0;
sj1=l1;
sj0|=sj1;
l1=sj0;
sj1=511ULL;
sj0&=sj1;
sj1=2ULL;
si0=sj0 > sj1;
if(si0){
goto L14;
}
sj0=0ULL;
sj1=l1;
sj2=l11;
sj1*=sj2;
l3=sj1;
sj0-=sj1;
l0=sj0;
sj0=l12;
sj1=l3;
sj2=0ULL;
si1=sj1 != sj2;
sj1=(U64)(si1);
sj0-=sj1;
sj1=l1;
sj2=32ULL;
sj1>>=(sj2&63);
l6=sj1;
sj2=l7;
sj1*=sj2;
sj2=l6;
sj3=l17;
sj2*=sj3;
l8=sj2;
sj3=l1;
sj4=4294967295ULL;
sj3&=sj4;
sj4=l7;
sj3*=sj4;
sj2+=sj3;
l6=sj2;
sj3=32ULL;
sj2>>=(sj3&63);
sj1+=sj2;
sj0-=sj1;
sj1=-4294967296ULL;
sj2=0ULL;
sj3=l6;
sj4=l8;
si3=sj3 < sj4;
sj1=si3?sj1:sj2;
sj0+=sj1;
sj1=l3;
sj2=l6;
sj3=32ULL;
sj2<<=(sj3&63);
si1=sj1 < sj2;
sj1=(U64)(si1);
sj0-=sj1;
l6=sj0;
sj1=0ULL;
si0=(U64)((I64)sj0>=(I64)sj1);
if(si0){
sj0=l0;
l3=sj0;
goto L20;
}
L21:;
L22:;
{
sj0=l1;
sj1=1ULL;
sj0-=sj1;
l1=sj0;
sj0=l0;
sj1=l11;
sj0+=sj1;
l3=sj0;
sj1=l0;
si0=sj0 < sj1;
l2=si0;
sj0=l3;
l0=sj0;
sj0=l6;
si1=l2;
sj1=(U64)(si1);
sj0+=sj1;
l6=sj0;
sj1=0ULL;
si0=(U64)((I64)sj0<(I64)sj1);
if(si0){
goto L22;
}
}
L20:;
sj0=l1;
sj1=l3;
sj2=0ULL;
si1=sj1 != sj2;
sj1=(U64)(si1);
sj0|=sj1;
l1=sj0;
L14:;
si0=l5;
si1=l10;
si0+=si1;
l2=si0;
si0=(*i->GOTX2Emem__float_rounding_mode);
si0=i32_load(i->env__memory,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
sj0=512ULL;
l0=sj0;
sj0=0ULL;
goto L23;
}
L24:;
si0=l5;
si1=1U;
si0=si0 == si1;
if(si0){
sj0=0ULL;
l0=sj0;
sj0=-1ULL;
goto L23;
}
L25:;
sj0=l14;
sj1=0ULL;
si0=(U64)((I64)sj0<(I64)sj1);
if(si0){
sj0=0ULL;
sj1=1023ULL;
si2=l5;
si3=2U;
si2=si2 == si3;
l4=si2;
sj0=si2?sj0:sj1;
l0=sj0;
sj0=-1ULL;
sj1=0ULL;
si2=l4;
sj0=si2?sj0:sj1;
goto L23;
}
L26:;
sj0=0ULL;
sj1=1023ULL;
si2=l5;
si3=3U;
si2=si2 == si3;
l4=si2;
sj0=si2?sj0:sj1;
l0=sj0;
sj0=-1ULL;
sj1=0ULL;
si2=l4;
sj0=si2?sj0:sj1;
L23:;
l3=sj0;
si0=(*i->GOTX2Emem__float_exception_flags);
si1=l2;
si2=65535U;
si1&=si2;
si2=2045U;
si1=si1 < si2;
if(si1){
goto L29;
}
si1=l2;
si2=2045U;
si1=(U32)((I32)si1<=(I32)si2);
if(si1){
si1=l2;
si2=2045U;
si1=si1 != si2;
if(si1){
goto L30;
}
sj1=l0;
sj2=l1;
sj1+=sj2;
sj2=0ULL;
si1=(U64)((I64)sj1>=(I64)sj2);
if(si1){
goto L30;
}
}
L31:;
si1=(*i->GOTX2Emem__float_exception_flags);
l2=si1;
si2=l2;
si2=i32_load(i->env__memory,(U64)si2);
si3=9U;
si2|=si3;
i32_store(i->env__memory,(U64)si1,si2);
sj1=l9;
sj2=9218868437227405312ULL;
sj1|=sj2;
sj2=l3;
sj1+=sj2;
sj0=sj1;goto L0;
L30:;
si1=l2;
si2=0U;
si1=(U32)((I32)si1>=(I32)si2);
if(si1){
goto L29;
}
si1=0U;
si2=l2;
si1-=si2;
l4=si1;
si2=63U;
si1=si1 <= si2;
if(si1){
sj1=l1;
si2=l2;
si3=63U;
si2&=si3;
sj2=(U64)(si2);
sj1<<=(sj2&63);
sj2=0ULL;
si1=sj1 != sj2;
sj1=(U64)(si1);
sj2=l1;
si3=l4;
sj3=(U64)(si3);
sj2>>=(sj3&63);
sj1|=sj2;
goto L32;
}
L33:;
sj1=l1;
sj2=0ULL;
si1=sj1 != sj2;
sj1=(U64)(si1);
L32:;
l1=sj1;
si1=(U32)(sj1);
si2=1023U;
si1&=si2;
l4=si1;
si1=!(si1);
if(si1){
si1=0U;
l4=si1;
si1=0U;
l2=si1;
goto L27;
}
L34:;
si1=0U;
l2=si1;
si1=(*i->GOTX2Emem__float_exception_flags);
si1=i32_load(i->env__memory,(U64)si1);
si2=4U;
si1|=si2;
goto L28;
L29:;
sj1=l1;
si1=(U32)(sj1);
si2=1023U;
si1&=si2;
l4=si1;
si1=!(si1);
if(si1){
si1=0U;
l4=si1;
goto L27;
}
L35:;
si1=(*i->GOTX2Emem__float_exception_flags);
si1=i32_load(i->env__memory,(U64)si1);
L28:;
l10=si1;
si2=1U;
si1|=si2;
i32_store(i->env__memory,(U64)si0,si1);
L27:;
si0=l5;
si0=!(si0);
si1=l4;
si2=512U;
si1=si1 == si2;
si0&=si1;
sj0=(U64)(si0);
sj1=-1ULL;
sj0^=sj1;
sj1=l0;
sj2=l1;
sj1+=sj2;
sj2=10ULL;
sj1>>=(sj2&63);
sj0&=sj1;
l1=sj0;
sj1=l9;
sj0|=sj1;
sj1=0ULL;
si2=l2;
sj2=(U64)(si2);
sj3=52ULL;
sj2<<=(sj3&63);
sj3=l1;
si3=!(sj3);
sj1=si3?sj1:sj2;
sj0+=sj1;
l9=sj0;
L7:;
sj0=l9;
L0:;
return sj0;
}

F64 f18(dfdivInstance*i,U64 l0) {
F64 l1=0;
F64 sd0;
sd0=l1;
L0:;
return sd0;
}

U32 f19(dfdivInstance*i) {
U32 l0=0;
U32 l1=0;
U32 l2=0;
U64 l3=0;
U32 l4=0;
F64 l5=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1,sj2;
F64 sd1,sd2;
si0=(*i->env_____stack_pointer);
si1=-64U;
si0+=si1;
l0=si0;
(*i->env_____stack_pointer)=si0;
si0=l0;
si1=48U;
si0+=si1;
si1=0U;
si0=env__gettimeofday(i,si0,si1);
l1=si0;
if(si0){
si0=l0;
si1=l1;
i32_store(i->env__memory,(U64)si0+32U,si1);
si0=(*i->env_____memory_base);
si1=528U;
si0+=si1;
si1=l0;
si2=32U;
si1+=si2;
si0=env__iprintf(i,si0,si1);
}
L1:;
si0=(*i->GOTX2Emem__startTimer);
si1=l0;
si1=i32_load(i->env__memory,(U64)si1+56U);
l1=si1;
sd1=(F64)(I32)(si1);
sd2=9.9999999999999995e-07;
sd1*=sd2;
si2=l0;
sj2=i64_load(i->env__memory,(U64)si2+48U);
l3=sj2;
sd2=(F64)(I64)(sj2);
sd1+=sd2;
f64_store(i->env__memory,(U64)si0,sd1);
si0=0U;
l1=si0;
L2:;
{
si0=l1;
si1=3U;
si0<<=(si1&31);
l4=si0;
si1=(*i->GOTX2Emem__z_output);
si0+=si1;
sj0=i64_load(i->env__memory,(U64)si0);
l3=sj0;
si0=l2;
si1=(*i->GOTX2Emem__a_input);
si2=l4;
si1+=si2;
sj1=i64_load(i->env__memory,(U64)si1);
si2=(*i->GOTX2Emem__b_input);
si3=l4;
si2+=si3;
sj2=i64_load(i->env__memory,(U64)si2);
sj1=f17(i,sj1,sj2);
sj2=l3;
si1=sj1 != sj2;
si0+=si1;
l2=si0;
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
si1=22U;
si0=si0 != si1;
if(si0){
goto L2;
}
}
si0=l0;
si1=48U;
si0+=si1;
si1=0U;
si0=env__gettimeofday(i,si0,si1);
l1=si0;
if(si0){
si0=l0;
si1=l1;
i32_store(i->env__memory,(U64)si0+16U,si1);
si0=(*i->env_____memory_base);
si1=528U;
si0+=si1;
si1=l0;
si2=16U;
si1+=si2;
si0=env__iprintf(i,si0,si1);
}
L3:;
si0=(*i->GOTX2Emem__endTimer);
si1=l0;
si1=i32_load(i->env__memory,(U64)si1+56U);
l1=si1;
sd1=(F64)(I32)(si1);
sd2=9.9999999999999995e-07;
sd1*=sd2;
si2=l0;
sj2=i64_load(i->env__memory,(U64)si2+48U);
l3=sj2;
sd2=(F64)(I64)(sj2);
sd1+=sd2;
l5=sd1;
f64_store(i->env__memory,(U64)si0,sd1);
si0=l0;
sd1=l5;
si2=(*i->GOTX2Emem__startTimer);
sd2=f64_load(i->env__memory,(U64)si2);
sd1-=sd2;
f64_store(i->env__memory,(U64)si0,sd1);
si0=(*i->env_____memory_base);
si1=563U;
si0+=si1;
si1=l0;
si0=env_____small_printf(i,si0,si1);
si0=l0;
si1=-64U;
si0-=si1;
(*i->env_____stack_pointer)=si0;
si0=l2;
L0:;
return si0;
}

void f20(dfdivInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 si0,si1,si2;
U64 sj0,sj1,sj2;
si0=l0;
sj0=(U64)(si0);
si1=l1;
sj1=(U64)(si1);
sj2=32ULL;
sj1<<=(sj2&63);
sj0|=sj1;
si1=l2;
si2=l3;
f6(i,sj0,si1,si2);
L0:;
}

void f21(dfdivInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6,U32 l7,U32 l8,U32 l9) {
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2,sj3,sj4,sj5;
si0=l0;
sj0=(U64)(si0);
si1=l1;
sj1=(U64)(si1);
sj2=32ULL;
sj1<<=(sj2&63);
sj0|=sj1;
si1=l2;
sj1=(U64)(si1);
si2=l3;
sj2=(U64)(si2);
sj3=32ULL;
sj2<<=(sj3&63);
sj1|=sj2;
si2=l4;
sj2=(U64)(si2);
si3=l5;
sj3=(U64)(si3);
sj4=32ULL;
sj3<<=(sj4&63);
sj2|=sj3;
si3=l6;
sj3=(U64)(si3);
si4=l7;
sj4=(U64)(si4);
sj5=32ULL;
sj4<<=(sj5&63);
sj3|=sj4;
si4=l8;
si5=l9;
f7(i,sj0,sj1,sj2,sj3,si4,si5);
L0:;
}

void f22(dfdivInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6,U32 l7,U32 l8,U32 l9) {
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2,sj3,sj4,sj5;
si0=l0;
sj0=(U64)(si0);
si1=l1;
sj1=(U64)(si1);
sj2=32ULL;
sj1<<=(sj2&63);
sj0|=sj1;
si1=l2;
sj1=(U64)(si1);
si2=l3;
sj2=(U64)(si2);
sj3=32ULL;
sj2<<=(sj3&63);
sj1|=sj2;
si2=l4;
sj2=(U64)(si2);
si3=l5;
sj3=(U64)(si3);
sj4=32ULL;
sj3<<=(sj4&63);
sj2|=sj3;
si3=l6;
sj3=(U64)(si3);
si4=l7;
sj4=(U64)(si4);
sj5=32ULL;
sj4<<=(sj5&63);
sj3|=sj4;
si4=l8;
si5=l9;
f8(i,sj0,sj1,sj2,sj3,si4,si5);
L0:;
}

void f23(dfdivInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5) {
U32 si0,si1,si2,si3;
U64 sj0,sj1,sj2,sj3;
si0=l0;
sj0=(U64)(si0);
si1=l1;
sj1=(U64)(si1);
sj2=32ULL;
sj1<<=(sj2&63);
sj0|=sj1;
si1=l2;
sj1=(U64)(si1);
si2=l3;
sj2=(U64)(si2);
sj3=32ULL;
sj2<<=(sj3&63);
sj1|=sj2;
si2=l4;
si3=l5;
f9(i,sj0,sj1,si2,si3);
L0:;
}

U32 f24(dfdivInstance*i,U32 l0,U32 l1) {
U32 si0,si1;
U64 sj0,sj1,sj2;
si0=l0;
sj0=(U64)(si0);
si1=l1;
sj1=(U64)(si1);
sj2=32ULL;
sj1<<=(sj2&63);
sj0|=sj1;
si0=f11(i,sj0);
L0:;
return si0;
}

U32 f25(dfdivInstance*i,U32 l0,U32 l1) {
U32 si0,si1;
U64 sj0,sj1,sj2;
si0=l0;
sj0=(U64)(si0);
si1=l1;
sj1=(U64)(si1);
sj2=32ULL;
sj1<<=(sj2&63);
sj0|=sj1;
si0=f12(i,sj0);
L0:;
return si0;
}

U32 f26(dfdivInstance*i,U32 l0,U32 l1) {
U64 l2=0;
U32 si0,si1;
U64 sj0,sj1,sj2;
si0=l0;
sj0=(U64)(si0);
si1=l1;
sj1=(U64)(si1);
sj2=32ULL;
sj1<<=(sj2&63);
sj0|=sj1;
sj0=f13(i,sj0);
l2=sj0;
sj1=32ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
env__setTempRet0(i,si0);
sj0=l2;
si0=(U32)(sj0);
L0:;
return si0;
}

U32 f27(dfdivInstance*i,U32 l0,U32 l1) {
U32 si0,si1;
U64 sj0,sj1,sj2;
si0=l0;
sj0=(U64)(si0);
si1=l1;
sj1=(U64)(si1);
sj2=32ULL;
sj1<<=(sj2&63);
sj0|=sj1;
si0=f14(i,sj0);
L0:;
return si0;
}

U32 f28(dfdivInstance*i,U32 l0,U32 l1) {
U32 si0,si1;
U64 sj0,sj1,sj2;
si0=l0;
sj0=(U64)(si0);
si1=l1;
sj1=(U64)(si1);
sj2=32ULL;
sj1<<=(sj2&63);
sj0|=sj1;
si0=f15(i,sj0);
L0:;
return si0;
}

U32 f29(dfdivInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U64 l4=0;
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
sj0=f16(i,si0,si1,sj2);
l4=sj0;
sj1=32ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
env__setTempRet0(i,si0);
sj0=l4;
si0=(U32)(sj0);
L0:;
return si0;
}

U32 f30(dfdivInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U64 l4=0;
U32 si0,si1,si2;
U64 sj0,sj1,sj2,sj3;
si0=l0;
sj0=(U64)(si0);
si1=l1;
sj1=(U64)(si1);
sj2=32ULL;
sj1<<=(sj2&63);
sj0|=sj1;
si1=l2;
sj1=(U64)(si1);
si2=l3;
sj2=(U64)(si2);
sj3=32ULL;
sj2<<=(sj3&63);
sj1|=sj2;
sj0=f17(i,sj0,sj1);
l4=sj0;
sj1=32ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
env__setTempRet0(i,si0);
sj0=l4;
si0=(U32)(sj0);
L0:;
return si0;
}

F64 f31(dfdivInstance*i,U32 l0,U32 l1) {
U32 si0,si1;
U64 sj0,sj1,sj2;
F64 sd0;
si0=l0;
sj0=(U64)(si0);
si1=l1;
sj1=(U64)(si1);
sj2=32ULL;
sj1<<=(sj2&63);
sj0|=sj1;
sd0=f18(i,sj0);
L0:;
return sd0;
}

const U8 d0[]={
0x0,0x0,0x0,0x0,0x0,0x0,0xff,0x7f,0x0,0x0,0x0,0x0,0x0,0x0,0xf0,0x7f,0x0,0x0,0x0,0x0,0x0,0x0,0xf0,0x7f,0x0,0x0,0x0,0x0,0x0,0x0,0xf0,0x7f,0x0,0x0,0x0,0x0,0x0,0x0,0xf0,0x3f,0x0,0x0,0x0,0x0,0x0,0x0,0xf0,0x3f,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xf0,0x3f,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x80,0x0,0x0,0x0,0x0,0x0,0x0,0x8,0x40,0x0,0x0,0x0,0x0,0x0,0x0,0x8,0xc0,0x0,0x0,0x0,0x0,0x0,0x0,0x8,0x40,0x0,0x0,0x0,0x0,0x0,0x0,0x8,0xc0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x40,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xc0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x40,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xc0,0x0,0x0,0x0,0x0,0x0,0x0,0xf0,0x3f,0x0,0x0,0x0,0x0,0x0,0x0,0xf0,0xbf,0x0,0x0,0x0,0x0,0x0,0x0,0xf0,0x3f,0x0,0x0,0x0,0x0,0x0,0x0,0xf0,0xbf,0x0,0x0,0x0,0x0,0x0,0x0,0xf0,0x3f,0x0,0x0,0x0,0x0,0x0,0x0,0xf8,0x7f,0x0,0x0,0x0,0x0,0x0,0x0,0xf0,0x7f,0x0,0x0,0x0,0x0,0x0,0x0,0xf0,0x3f,0x0,0x0,0x0,0x0,0x0,0x0,0xf8,0x7f,0x0,0x0,0x0,0x0,0x0,0x0,0xf0,0x7f,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xf0,0x3f,0x0,0x0,0x0,0x0,0x0,0x0,0xf0,0x3f,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x40,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x40,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xc0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xc0,0x0,0x0,0x0,0x0,0x0,0x0,0x10,0x40,0x0,0x0,0x0,0x0,0x0,0x0,0x10,0x40,0x0,0x0,0x0,0x0,0x0,0x0,0x10,0xc0,0x0,0x0,0x0,0x0,0x0,0x0,0x10,0xc0,0x0,0x0,0x0,0x0,0x0,0x0,0xf8,0x3f,0x0,0x0,0x0,0x0,0x0,0x0,0xf8,0x3f,0x0,0x0,0x0,0x0,0x0,0x0,0xf8,0xbf,0x0,0x0,0x0,0x0,0x0,0x0,0xf8,0xbf,0x0,0x0,0x0,0x0,0x0,0x0,0xff,0x7f,0x0,0x0,0x0,0x0,0x0,0x0,0xf8,0x7f,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x7f,0x0,0x0,0x0,0x0,0x0,0x0,0xf0,0x7f,0x0,0x0,0x0,0x0,0x0,0x0,0xf8,0x7f,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x7f,0x0,0x0,0x0,0x0,0x0,0x0,0xf0,0x7f,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x80,0x0,0x0,0x0,0x0,0x0,0x0,0xf8,0x3f,0x0,0x0,0x0,0x0,0x0,0x0,0xf8,0xbf,0x0,0x0,0x0,0x0,0x0,0x0,0xf8,0xbf,0x0,0x0,0x0,0x0,0x0,0x0,0xf8,0x3f,0x0,0x0,0x0,0x0,0x0,0x0,0xe0,0x3f,0x0,0x0,0x0,0x0,0x0,0x0,0xe0,0xbf,0x0,0x0,0x0,0x0,0x0,0x0,0xe0,0xbf,0x0,0x0,0x0,0x0,0x0,0x0,0xe0,0x3f,0x55,0x55,0x55,0x55,0x55,0x55,0xe5,0x3f,0x55,0x55,0x55,0x55,0x55,0x55,0xe5,0xbf,0x55,0x55,0x55,0x55,0x55,0x55,0xe5,0xbf,0x55,0x55,0x55,0x55,0x55,0x55,0xe5,0x3f,0x45,0x72,0x72,0x6f,0x72,0x20,0x72,0x65,0x74,0x75,0x72,0x6e,0x20,0x66,0x72,0x6f,0x6d,0x20,0x67,0x65,0x74,0x74,0x69,0x6d,0x65,0x6f,0x66,0x64,0x61,0x79,0x3a,0x20,0x25,0x64,0x0,0x25,0x30,0x2e,0x36,0x66,0xa,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x8,0x0,0x0,0x0,0x7,0x0,0x0,0x0,0x6,0x0,0x0,0x0,0x6,0x0,0x0,0x0,0x5,0x0,0x0,0x0,0x5,0x0,0x0,0x0,0x5,0x0,0x0,0x0,0x5,0x0,0x0,0x0,0x4,0x0,0x0,0x0,0x4,0x0,0x0,0x0,0x4,0x0,0x0,0x0,0x4,0x0,0x0,0x0,0x4,0x0,0x0,0x0,0x4,0x0,0x0,0x0,0x4,0x0,0x0,0x0,0x4,0x0,0x0,0x0,0x3,0x0,0x0,0x0,0x3,0x0,0x0,0x0,0x3,0x0,0x0,0x0,0x3,0x0,0x0,0x0,0x3,0x0,0x0,0x0,0x3,0x0,0x0,0x0,0x3,0x0,0x0,0x0,0x3,0x0,0x0,0x0,0x3,0x0,0x0,0x0,0x3,0x0,0x0,0x0,0x3,0x0,0x0,0x0,0x3,0x0,0x0,0x0,0x3,0x0,0x0,0x0,0x3,0x0,0x0,0x0,0x3,0x0,0x0,0x0,0x3,0x0,0x0,0x0,0x2,0x0,0x0,0x0,0x2,0x0,0x0,0x0,0x2,0x0,0x0,0x0,0x2,0x0,0x0,0x0,0x2,0x0,0x0,0x0,0x2,0x0,0x0,0x0,0x2,0x0,0x0,0x0,0x2,0x0,0x0,0x0,0x2,0x0,0x0,0x0,0x2,0x0,0x0,0x0,0x2,0x0,0x0,0x0,0x2,0x0,0x0,0x0,0x2,0x0,0x0,0x0,0x2,0x0,0x0,0x0,0x2,0x0,0x0,0x0,0x2,0x0,0x0,0x0,0x2,0x0,0x0,0x0,0x2,0x0,0x0,0x0,0x2,0x0,0x0,0x0,0x2,0x0,0x0,0x0,0x2,0x0,0x0,0x0,0x2,0x0,0x0,0x0,0x2,0x0,0x0,0x0,0x2,0x0,0x0,0x0,0x2,0x0,0x0,0x0,0x2,0x0,0x0,0x0,0x2,0x0,0x0,0x0,0x2,0x0,0x0,0x0,0x2,0x0,0x0,0x0,0x2,0x0,0x0,0x0,0x2,0x0,0x0,0x0,0x2,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
};

static void dfdivInitGlobals(dfdivInstance* i) {
i->g9=1604U;
i->g10=1600U;
i->g11=1608U;
i->g12=352U;
i->g13=176U;
i->g14=0U;
i->g15=1616U;
}

static void dfdivInitImports(dfdivInstance* i, void* resolve(const char* module, const char* name)) {
if (resolve == NULL) { return; }
i->env__memory=(wasmMemory*)resolve("env", "memory");
i->env_____stack_pointer=(U32*)resolve("env", "__stack_pointer");
i->env_____memory_base=(U32*)resolve("env", "__memory_base");
i->GOTX2Emem__float_exception_flags=(U32*)resolve("GOT.mem", "float_exception_flags");
i->GOTX2Emem__float_rounding_mode=(U32*)resolve("GOT.mem", "float_rounding_mode");
i->GOTX2Emem__startTimer=(U32*)resolve("GOT.mem", "startTimer");
i->GOTX2Emem__z_output=(U32*)resolve("GOT.mem", "z_output");
i->GOTX2Emem__b_input=(U32*)resolve("GOT.mem", "b_input");
i->GOTX2Emem__a_input=(U32*)resolve("GOT.mem", "a_input");
i->GOTX2Emem__endTimer=(U32*)resolve("GOT.mem", "endTimer");
}

void dfdiv____wasm_call_ctors(dfdivInstance*i){
f4(i);
}

void dfdiv____wasm_apply_data_relocs(dfdivInstance*i){
f5(i);
}

void dfdiv_shift64RightJamming(dfdivInstance*i,U32 l0,U32 l1,U32 l2,U32 l3){
f20(i,l0,l1,l2,l3);
}

void dfdiv_add128(dfdivInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6,U32 l7,U32 l8,U32 l9){
f21(i,l0,l1,l2,l3,l4,l5,l6,l7,l8,l9);
}

void dfdiv_sub128(dfdivInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6,U32 l7,U32 l8,U32 l9){
f22(i,l0,l1,l2,l3,l4,l5,l6,l7,l8,l9);
}

void dfdiv_mul64To128(dfdivInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5){
f23(i,l0,l1,l2,l3,l4,l5);
}

void dfdiv_float_raise(dfdivInstance*i,U32 l0){
f10(i,l0);
}

U32 dfdiv_float64_is_nan(dfdivInstance*i,U32 l0,U32 l1){
return f24(i,l0,l1);
}

U32 dfdiv_float64_is_signaling_nan(dfdivInstance*i,U32 l0,U32 l1){
return f25(i,l0,l1);
}

U32 dfdiv_extractFloat64Frac(dfdivInstance*i,U32 l0,U32 l1){
return f26(i,l0,l1);
}

U32 dfdiv_extractFloat64Exp(dfdivInstance*i,U32 l0,U32 l1){
return f27(i,l0,l1);
}

U32 dfdiv_extractFloat64Sign(dfdivInstance*i,U32 l0,U32 l1){
return f28(i,l0,l1);
}

U32 dfdiv_packFloat64(dfdivInstance*i,U32 l0,U32 l1,U32 l2,U32 l3){
return f29(i,l0,l1,l2,l3);
}

U32 dfdiv_float64_div(dfdivInstance*i,U32 l0,U32 l1,U32 l2,U32 l3){
return f30(i,l0,l1,l2,l3);
}

F64 dfdiv_ullong_to_double(dfdivInstance*i,U32 l0,U32 l1){
return f31(i,l0,l1);
}

U32 dfdiv_submain(dfdivInstance*i){
return f19(i);
}

void dfdiv_origX24shift64RightJamming(dfdivInstance*i,U64 l0,U32 l1,U32 l2){
f6(i,l0,l1,l2);
}

void dfdiv_origX24add128(dfdivInstance*i,U64 l0,U64 l1,U64 l2,U64 l3,U32 l4,U32 l5){
f7(i,l0,l1,l2,l3,l4,l5);
}

void dfdiv_origX24sub128(dfdivInstance*i,U64 l0,U64 l1,U64 l2,U64 l3,U32 l4,U32 l5){
f8(i,l0,l1,l2,l3,l4,l5);
}

void dfdiv_origX24mul64To128(dfdivInstance*i,U64 l0,U64 l1,U32 l2,U32 l3){
f9(i,l0,l1,l2,l3);
}

U32 dfdiv_origX24float64_is_nan(dfdivInstance*i,U64 l0){
return f11(i,l0);
}

U32 dfdiv_origX24float64_is_signaling_nan(dfdivInstance*i,U64 l0){
return f12(i,l0);
}

U64 dfdiv_origX24extractFloat64Frac(dfdivInstance*i,U64 l0){
return f13(i,l0);
}

U32 dfdiv_origX24extractFloat64Exp(dfdivInstance*i,U64 l0){
return f14(i,l0);
}

U32 dfdiv_origX24extractFloat64Sign(dfdivInstance*i,U64 l0){
return f15(i,l0);
}

U64 dfdiv_origX24packFloat64(dfdivInstance*i,U32 l0,U32 l1,U64 l2){
return f16(i,l0,l1,l2);
}

U64 dfdiv_origX24float64_div(dfdivInstance*i,U64 l0,U64 l1){
return f17(i,l0,l1);
}

F64 dfdiv_origX24ullong_to_double(dfdivInstance*i,U64 l0){
return f18(i,l0);
}

void dfdivInstantiate(dfdivInstance* i, void* resolve(const char* module, const char* name)) {
dfdivInitImports(i, resolve);
dfdivInitGlobals(i);
}

void dfdivFreeInstance(dfdivInstance* i) {
}

