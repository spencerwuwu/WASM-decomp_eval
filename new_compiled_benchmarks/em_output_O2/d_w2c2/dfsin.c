#include "w2c2_base.h"

#include "dfsin.h"

void f4(dfsinInstance*i) {
L0:;
}

void f5(dfsinInstance*i) {
L0:;
}

void f6(dfsinInstance*i,U64 l0,U32 l1,U32 l2) {
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

void f7(dfsinInstance*i,U64 l0,U64 l1,U32 l2,U32 l3,U32 l4) {
U64 l5=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1,sj2;
sj0=l0;
si1=l2;
si1=!(si1);
if(si1){
goto L1;
}
si0=l2;
si1=63U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
sj0=l1;
sj1=0ULL;
si0=sj0 != sj1;
sj0=(U64)(si0);
sj1=l0;
si2=0U;
si3=l2;
si2-=si3;
si3=63U;
si2&=si3;
sj2=(U64)(si2);
sj1<<=(sj2&63);
sj0|=sj1;
l1=sj0;
sj0=l0;
si1=l2;
sj1=(U64)(si1);
sj0>>=(sj1&63);
goto L1;
}
L2:;
si0=l2;
si1=64U;
si0=si0 == si1;
if(si0){
sj0=l1;
sj1=0ULL;
si0=sj0 != sj1;
sj0=(U64)(si0);
sj1=l0;
sj0|=sj1;
l1=sj0;
sj0=0ULL;
goto L1;
}
L3:;
sj0=l0;
sj1=l1;
sj0|=sj1;
sj1=0ULL;
si0=sj0 != sj1;
sj0=(U64)(si0);
l1=sj0;
sj0=0ULL;
L1:;
l5=sj0;
si0=l4;
sj1=l1;
i64_store(i->env__memory,(U64)si0,sj1);
si0=l3;
sj1=l5;
i64_store(i->env__memory,(U64)si0,sj1);
L0:;
}

void f8(dfsinInstance*i,U64 l0,U64 l1,U64 l2,U64 l3,U32 l4,U32 l5) {
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

void f9(dfsinInstance*i,U64 l0,U64 l1,U64 l2,U64 l3,U32 l4,U32 l5) {
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

void f10(dfsinInstance*i,U64 l0,U64 l1,U32 l2,U32 l3) {
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

void f11(dfsinInstance*i,U32 l0) {
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

U32 f12(dfsinInstance*i,U64 l0) {
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

U32 f13(dfsinInstance*i,U64 l0) {
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

U64 f14(dfsinInstance*i,U64 l0) {
U64 sj0,sj1;
sj0=l0;
sj1=4503599627370495ULL;
sj0&=sj1;
L0:;
return sj0;
}

U32 f15(dfsinInstance*i,U64 l0) {
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

U32 f16(dfsinInstance*i,U64 l0) {
U32 si0;
U64 sj0,sj1;
sj0=l0;
sj1=63ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
L0:;
return si0;
}

U64 f17(dfsinInstance*i,U32 l0,U32 l1,U64 l2) {
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

U64 f18(dfsinInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2;
si0=l0;
si0=!(si0);
if(si0){
sj0=0ULL;
goto L0;
}
L1:;
si0=l0;
si1=l0;
si2=31U;
si1=(U32)((I32)si1>>(si2&31));
l1=si1;
si0^=si1;
si1=l1;
si0-=si1;
l1=si0;
sj0=(U64)(si0);
si1=(*i->env_____memory_base);
si2=624U;
si1+=si2;
si2=l1;
si3=16U;
si2<<=(si3&31);
si3=l1;
si4=l1;
si5=65536U;
si4=si4 < si5;
l2=si4;
si2=si4?si2:si3;
l1=si2;
si3=8U;
si2<<=(si3&31);
si3=l1;
si4=l1;
si5=16777216U;
si4=si4 < si5;
l3=si4;
si2=si4?si2:si3;
si3=22U;
si2>>=(si3&31);
si3=1020U;
si2&=si3;
si1+=si2;
si1=i32_load(i->env__memory,(U64)si1);
si2=l2;
si3=4U;
si2<<=(si3&31);
l1=si2;
si3=8U;
si2|=si3;
si3=l1;
si4=l3;
si2=si4?si2:si3;
si1+=si2;
l1=si1;
si2=21U;
si1+=si2;
sj1=(U64)(si1);
sj0<<=(sj1&63);
si1=l0;
si2=31U;
si1>>=(si2&31);
sj1=(U64)(si1);
sj2=63ULL;
sj1<<=(sj2&63);
sj0+=sj1;
si1=1053U;
si2=l1;
si1-=si2;
sj1=(U64)(si1);
sj2=52ULL;
sj1<<=(sj2&63);
sj0+=sj1;
L0:;
return sj0;
}

U64 f19(dfsinInstance*i,U64 l0,U64 l1) {
U32 l2=0;
U64 l3=0;
U32 l4=0;
U64 l5=0;
U32 l6=0;
U32 l7=0;
U64 l8=0;
U32 l9=0;
U32 si0,si1,si2,si3,si4,si5,si6,si7;
U64 sj0,sj1,sj2,sj3,sj4,sj5,sj6;
sj0=l0;
sj1=52ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
si1=2047U;
si0&=si1;
l4=si0;
sj1=l1;
sj2=52ULL;
sj1>>=(sj2&63);
si1=(U32)(sj1);
si2=2047U;
si1&=si2;
l6=si1;
si0-=si1;
l2=si0;
sj0=l0;
sj1=63ULL;
sj0>>=(sj1&63);
l8=sj0;
si0=(U32)(sj0);
l7=si0;
sj1=l1;
sj2=63ULL;
sj1>>=(sj2&63);
si1=(U32)(sj1);
si0=si0 == si1;
if(si0){
sj0=l1;
sj1=9ULL;
sj0<<=(sj1&63);
sj1=2305843009213693440ULL;
sj0&=sj1;
l3=sj0;
sj0=l0;
sj1=9ULL;
sj0<<=(sj1&63);
sj1=2305843009213693440ULL;
sj0&=sj1;
l5=sj0;
si0=l2;
si1=0U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
si0=l4;
si1=2047U;
si0=si0 == si1;
if(si0){
sj0=l5;
si0=!(sj0);
if(si0){
goto L1;
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
l4=si0;
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
l6=si0;
si1=l6;
si1=i32_load(i->env__memory,(U64)si1);
si2=16U;
si1|=si2;
i32_store(i->env__memory,(U64)si0,si1);
}
L7:;
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
si3=l4;
sj1=si3?sj1:sj2;
si2=l2;
sj0=si2?sj0:sj1;
goto L0;
}
L6:;
si0=l6;
if(si0){
sj0=l3;
sj1=2305843009213693952ULL;
sj0|=sj1;
l3=sj0;
goto L8;
}
L9:;
si0=l2;
si1=1U;
si0-=si1;
l2=si0;
si0=!(si0);
if(si0){
goto L3;
}
L8:;
si0=l2;
si1=63U;
si0=si0 > si1;
if(si0){
goto L4;
}
sj0=l3;
si1=0U;
si2=l2;
si1-=si2;
si2=63U;
si1&=si2;
sj1=(U64)(si1);
sj0<<=(sj1&63);
sj1=0ULL;
si0=sj0 != sj1;
sj0=(U64)(si0);
sj1=l3;
si2=l2;
sj2=(U64)(si2);
sj1>>=(sj2&63);
sj0|=sj1;
l3=sj0;
goto L3;
}
L5:;
si0=l2;
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
si0=l6;
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
l4=si0;
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
l6=si0;
si1=l6;
si1=i32_load(i->env__memory,(U64)si1);
si2=16U;
si1|=si2;
i32_store(i->env__memory,(U64)si0,si1);
}
L13:;
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
si3=l4;
sj1=si3?sj1:sj2;
si2=l2;
sj0=si2?sj0:sj1;
goto L0;
}
L12:;
sj0=l0;
sj1=-9223372036854775808ULL;
sj0&=sj1;
sj1=9218868437227405312ULL;
sj0|=sj1;
goto L0;
}
L11:;
sj0=l5;
sj1=2305843009213693952ULL;
sj0|=sj1;
sj1=l5;
si2=l4;
sj0=si2?sj0:sj1;
l5=sj0;
si0=l2;
si1=l4;
si1=!(si1);
si0+=si1;
l2=si0;
si0=!(si0);
if(si0){
si0=l6;
l4=si0;
goto L3;
}
L14:;
si0=0U;
si1=l2;
si0-=si1;
l4=si0;
si1=63U;
si0=si0 <= si1;
if(si0){
sj0=l5;
si1=l2;
si2=63U;
si1&=si2;
sj1=(U64)(si1);
sj0<<=(sj1&63);
sj1=0ULL;
si0=sj0 != sj1;
sj0=(U64)(si0);
sj1=l5;
si2=l4;
sj2=(U64)(si2);
sj1>>=(sj2&63);
sj0|=sj1;
l5=sj0;
si0=l6;
l4=si0;
goto L3;
}
L15:;
sj0=l5;
sj1=0ULL;
si0=sj0 != sj1;
sj0=(U64)(si0);
l5=sj0;
si0=l6;
l4=si0;
goto L3;
}
L10:;
si0=l4;
if(si0){
si0=l4;
si1=2047U;
si0=si0 != si1;
if(si0){
goto L16;
}
sj0=l3;
sj1=l5;
sj0|=sj1;
si0=!(sj0);
if(si0){
goto L1;
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
l4=si0;
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
l6=si0;
si1=l6;
si1=i32_load(i->env__memory,(U64)si1);
si2=16U;
si1|=si2;
i32_store(i->env__memory,(U64)si0,si1);
}
L18:;
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
si3=l4;
sj1=si3?sj1:sj2;
si2=l2;
sj0=si2?sj0:sj1;
goto L0;
}
L17:;
sj0=l0;
sj1=-9223372036854775808ULL;
sj0&=sj1;
sj1=l3;
sj2=l5;
sj1+=sj2;
sj2=9ULL;
sj1>>=(sj2&63);
sj0|=sj1;
goto L0;
L16:;
si0=l7;
si1=l4;
sj2=l3;
sj3=l5;
sj2+=sj3;
sj3=4611686018427387904ULL;
sj2|=sj3;
sj0=f20(i,si0,si1,sj2);
goto L0;
L4:;
sj0=l3;
sj1=0ULL;
si0=sj0 != sj1;
sj0=(U64)(si0);
l3=sj0;
L3:;
si0=l7;
si1=l4;
sj2=l5;
sj3=2305843009213693952ULL;
sj2|=sj3;
sj3=l3;
sj2+=sj3;
l0=sj2;
sj3=1ULL;
sj2<<=(sj3&63);
l1=sj2;
sj3=0ULL;
si2=(U64)((I64)sj2>=(I64)sj3);
l2=si2;
si1-=si2;
sj2=l1;
sj3=l0;
si4=l2;
sj2=si4?sj2:sj3;
sj0=f20(i,si0,si1,sj2);
goto L0;
}
L2:;
sj0=l1;
sj1=10ULL;
sj0<<=(sj1&63);
sj1=4611686018427386880ULL;
sj0&=sj1;
l3=sj0;
sj0=l0;
sj1=10ULL;
sj0<<=(sj1&63);
sj1=4611686018427386880ULL;
sj0&=sj1;
l5=sj0;
si0=l2;
si1=0U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
si0=l2;
si1=0U;
si0=(U32)((I32)si0>=(I32)si1);
if(si0){
si0=l4;
if(si0){
si0=l4;
si1=2047U;
si0=si0 != si1;
if(si0){
goto L24;
}
sj0=l3;
sj1=l5;
sj0|=sj1;
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
l4=si0;
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
l6=si0;
si1=l6;
si1=i32_load(i->env__memory,(U64)si1);
si2=16U;
si1|=si2;
i32_store(i->env__memory,(U64)si0,si1);
}
L27:;
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
si3=l4;
sj1=si3?sj1:sj2;
si2=l2;
sj0=si2?sj0:sj1;
goto L0;
}
L26:;
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
L25:;
si0=1U;
l4=si0;
si0=1U;
l6=si0;
L24:;
sj0=l3;
sj1=l5;
si0=sj0 < sj1;
if(si0){
goto L20;
}
sj0=l3;
sj1=l5;
si0=sj0 > sj1;
if(si0){
goto L22;
}
si0=(*i->GOTX2Emem__float_rounding_mode);
si0=i32_load(i->env__memory,(U64)si0);
si1=3U;
si0=si0 == si1;
sj0=(U64)(si0);
sj1=63ULL;
sj0<<=(sj1&63);
goto L0;
}
L23:;
si0=l6;
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
l4=si0;
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
l6=si0;
si1=l6;
si1=i32_load(i->env__memory,(U64)si1);
si2=16U;
si1|=si2;
i32_store(i->env__memory,(U64)si0,si1);
}
L30:;
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
si3=l4;
sj1=si3?sj1:sj2;
si2=l2;
sj0=si2?sj0:sj1;
goto L0;
}
L29:;
sj0=l8;
sj1=-1ULL;
sj0^=sj1;
sj1=63ULL;
sj0<<=(sj1&63);
sj1=9218868437227405312ULL;
sj0|=sj1;
goto L0;
}
L28:;
sj0=l5;
sj1=4611686018427387904ULL;
sj0|=sj1;
sj1=l5;
si2=l4;
sj0=si2?sj0:sj1;
l5=sj0;
si1=l2;
si2=l4;
si2=!(si2);
si1+=si2;
l2=si1;
si1=!(si1);
if(si1){
goto L31;
}
si0=0U;
si1=l2;
si0-=si1;
l4=si0;
si1=63U;
si0=si0 <= si1;
if(si0){
sj0=l5;
si1=l2;
si2=63U;
si1&=si2;
sj1=(U64)(si1);
sj0<<=(sj1&63);
sj1=0ULL;
si0=sj0 != sj1;
sj0=(U64)(si0);
sj1=l5;
si2=l4;
sj2=(U64)(si2);
sj1>>=(sj2&63);
sj0|=sj1;
goto L31;
}
L32:;
sj0=l5;
sj1=0ULL;
si0=sj0 != sj1;
sj0=(U64)(si0);
L31:;
l5=sj0;
sj0=l3;
sj1=4611686018427387904ULL;
sj0|=sj1;
l3=sj0;
L22:;
si0=l7;
si1=1U;
si0^=si1;
l7=si0;
sj0=l3;
sj1=l5;
sj0-=sj1;
goto L19;
}
L21:;
si0=l4;
si1=2047U;
si0=si0 == si1;
if(si0){
sj0=l5;
si0=!(sj0);
if(si0){
goto L1;
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
l4=si0;
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
l6=si0;
si1=l6;
si1=i32_load(i->env__memory,(U64)si1);
si2=16U;
si1|=si2;
i32_store(i->env__memory,(U64)si0,si1);
}
L34:;
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
si3=l4;
sj1=si3?sj1:sj2;
si2=l2;
sj0=si2?sj0:sj1;
goto L0;
}
L33:;
si0=l6;
if(si0){
sj0=l3;
sj1=4611686018427387904ULL;
sj0|=sj1;
l3=sj0;
goto L36;
}
L37:;
si0=l2;
si1=1U;
si0-=si1;
l2=si0;
si0=!(si0);
if(si0){
goto L35;
}
L36:;
si0=l2;
si1=63U;
si0=si0 <= si1;
if(si0){
sj0=l3;
si1=0U;
si2=l2;
si1-=si2;
si2=63U;
si1&=si2;
sj1=(U64)(si1);
sj0<<=(sj1&63);
sj1=0ULL;
si0=sj0 != sj1;
sj0=(U64)(si0);
sj1=l3;
si2=l2;
sj2=(U64)(si2);
sj1>>=(sj2&63);
sj0|=sj1;
l3=sj0;
goto L35;
}
L38:;
sj0=l3;
sj1=0ULL;
si0=sj0 != sj1;
sj0=(U64)(si0);
l3=sj0;
L35:;
sj0=l5;
sj1=4611686018427387904ULL;
sj0|=sj1;
l5=sj0;
L20:;
si0=l4;
l6=si0;
sj0=l5;
sj1=l3;
sj0-=sj1;
L19:;
l0=sj0;
si0=l7;
si1=l6;
si2=31U;
si3=-1U;
sj4=l0;
sj5=4294967296ULL;
si4=sj4 < sj5;
l2=si4;
si2=si4?si2:si3;
si3=(*i->env_____memory_base);
si4=624U;
si3+=si4;
sj4=l0;
sj5=l0;
sj6=32ULL;
sj5>>=(sj6&63);
si6=l2;
sj4=si6?sj4:sj5;
si4=(U32)(sj4);
l2=si4;
si5=16U;
si4<<=(si5&31);
si5=l2;
si6=l2;
si7=65536U;
si6=si6 < si7;
l4=si6;
si4=si6?si4:si5;
l2=si4;
si5=8U;
si4<<=(si5&31);
si5=l2;
si6=l2;
si7=16777216U;
si6=si6 < si7;
l9=si6;
si4=si6?si4:si5;
si5=22U;
si4>>=(si5&31);
si5=1020U;
si4&=si5;
si3+=si4;
si3=i32_load(i->env__memory,(U64)si3);
si2+=si3;
si3=l4;
si4=4U;
si3<<=(si4&31);
l2=si3;
si4=8U;
si3|=si4;
si4=l2;
si5=l9;
si3=si5?si3:si4;
si2+=si3;
l2=si2;
si3=-1U;
si2^=si3;
si1+=si2;
sj2=l0;
si3=l2;
sj3=(U64)(si3);
sj2<<=(sj3&63);
sj0=f20(i,si0,si1,sj2);
l0=sj0;
L1:;
sj0=l0;
L0:;
return sj0;
}

U64 f20(dfsinInstance*i,U32 l0,U32 l1,U64 l2) {
U32 l3=0;
U64 l4=0;
U32 l5=0;
U64 l6=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1,sj2,sj3;
si0=(*i->GOTX2Emem__float_rounding_mode);
si0=i32_load(i->env__memory,(U64)si0);
l5=si0;
si0=!(si0);
if(si0){
sj0=512ULL;
l4=sj0;
sj0=0ULL;
goto L1;
}
L2:;
si0=l5;
si1=1U;
si0=si0 == si1;
if(si0){
sj0=-1ULL;
goto L1;
}
L3:;
si0=l0;
if(si0){
sj0=0ULL;
sj1=1023ULL;
si2=l5;
si3=2U;
si2=si2 == si3;
l3=si2;
sj0=si2?sj0:sj1;
l4=sj0;
sj0=-1ULL;
sj1=0ULL;
si2=l3;
sj0=si2?sj0:sj1;
goto L1;
}
L4:;
sj0=0ULL;
sj1=1023ULL;
si2=l5;
si3=3U;
si2=si2 == si3;
l3=si2;
sj0=si2?sj0:sj1;
l4=sj0;
sj0=-1ULL;
sj1=0ULL;
si2=l3;
sj0=si2?sj0:sj1;
L1:;
l6=sj0;
si0=(*i->GOTX2Emem__float_exception_flags);
si1=l1;
si2=65535U;
si1&=si2;
si2=2045U;
si1=si1 < si2;
if(si1){
goto L7;
}
si1=l1;
si2=2045U;
si1=(U32)((I32)si1<=(I32)si2);
if(si1){
si1=l1;
si2=2045U;
si1=si1 != si2;
if(si1){
goto L8;
}
sj1=l2;
sj2=l4;
sj1+=sj2;
sj2=0ULL;
si1=(U64)((I64)sj1>=(I64)sj2);
if(si1){
goto L8;
}
}
L9:;
si1=(*i->GOTX2Emem__float_exception_flags);
l1=si1;
si2=l1;
si2=i32_load(i->env__memory,(U64)si2);
si3=9U;
si2|=si3;
i32_store(i->env__memory,(U64)si1,si2);
sj1=l6;
si2=l0;
sj2=(U64)(si2);
sj3=63ULL;
sj2<<=(sj3&63);
sj1+=sj2;
sj2=9218868437227405312ULL;
sj1+=sj2;
sj0=sj1;goto L0;
L8:;
si1=l1;
si2=0U;
si1=(U32)((I32)si1>=(I32)si2);
if(si1){
goto L7;
}
si1=0U;
si2=l1;
si1-=si2;
l3=si1;
si2=63U;
si1=si1 <= si2;
if(si1){
sj1=l2;
si2=l1;
si3=63U;
si2&=si3;
sj2=(U64)(si2);
sj1<<=(sj2&63);
sj2=0ULL;
si1=sj1 != sj2;
sj1=(U64)(si1);
sj2=l2;
si3=l3;
sj3=(U64)(si3);
sj2>>=(sj3&63);
sj1|=sj2;
goto L10;
}
L11:;
sj1=l2;
sj2=0ULL;
si1=sj1 != sj2;
sj1=(U64)(si1);
L10:;
l2=sj1;
si1=(U32)(sj1);
si2=1023U;
si1&=si2;
l3=si1;
si1=!(si1);
if(si1){
si1=0U;
l3=si1;
si1=0U;
l1=si1;
goto L5;
}
L12:;
si1=0U;
l1=si1;
si1=(*i->GOTX2Emem__float_exception_flags);
si1=i32_load(i->env__memory,(U64)si1);
si2=4U;
si1|=si2;
goto L6;
L7:;
sj1=l2;
si1=(U32)(sj1);
si2=1023U;
si1&=si2;
l3=si1;
si1=!(si1);
if(si1){
si1=0U;
l3=si1;
goto L5;
}
L13:;
si1=(*i->GOTX2Emem__float_exception_flags);
si1=i32_load(i->env__memory,(U64)si1);
L6:;
si2=1U;
si1|=si2;
i32_store(i->env__memory,(U64)si0,si1);
L5:;
si0=l5;
si0=!(si0);
si1=l3;
si2=512U;
si1=si1 == si2;
si0&=si1;
sj0=(U64)(si0);
sj1=-1ULL;
sj0^=sj1;
sj1=l2;
sj2=l4;
sj1+=sj2;
sj2=10ULL;
sj1>>=(sj2&63);
sj0&=sj1;
l2=sj0;
si1=l0;
sj1=(U64)(si1);
sj2=63ULL;
sj1<<=(sj2&63);
sj0|=sj1;
sj1=0ULL;
si2=l1;
sj2=(U64)(si2);
sj3=52ULL;
sj2<<=(sj3&63);
sj3=l2;
si3=!(sj3);
sj1=si3?sj1:sj2;
sj0+=sj1;
L0:;
return sj0;
}

U64 f21(dfsinInstance*i,U64 l0,U64 l1) {
U32 l2=0;
U64 l3=0;
U32 l4=0;
U64 l5=0;
U32 l6=0;
U64 l7=0;
U64 l8=0;
U32 l9=0;
U32 l10=0;
U64 l11=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2,sj3,sj4,sj5,sj6,sj7;
sj0=l1;
sj1=4503599627370495ULL;
sj0&=sj1;
l5=sj0;
sj0=l0;
sj1=4503599627370495ULL;
sj0&=sj1;
l3=sj0;
sj0=l1;
sj1=52ULL;
sj0>>=(sj1&63);
l8=sj0;
si0=(U32)(sj0);
si1=2047U;
si0&=si1;
l2=si0;
sj0=l0;
sj1=l1;
sj0^=sj1;
l7=sj0;
sj0=l0;
sj1=52ULL;
sj0>>=(sj1&63);
l11=sj0;
si0=(U32)(sj0);
si1=2047U;
si0&=si1;
l4=si0;
si1=2047U;
si0=si0 == si1;
if(si0){
sj0=l3;
si0=!(sj0);
if(si0){
sj0=l5;
si0=!(sj0);
if(si0){
goto L2;
}
si0=l2;
si1=2047U;
si0=si0 != si1;
if(si0){
goto L2;
}
}
L3:;
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
l4=si0;
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
l6=si0;
si1=l6;
si1=i32_load(i->env__memory,(U64)si1);
si2=16U;
si1|=si2;
i32_store(i->env__memory,(U64)si0,si1);
}
L4:;
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
si3=l4;
sj1=si3?sj1:sj2;
si2=l2;
sj0=si2?sj0:sj1;
goto L0;
L2:;
sj0=l8;
sj1=2047ULL;
sj0&=sj1;
sj1=l5;
sj0|=sj1;
si0=!(sj0);
if(si0){
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
L5:;
sj0=l7;
sj1=-9223372036854775808ULL;
sj0&=sj1;
sj1=9218868437227405312ULL;
sj0|=sj1;
goto L0;
}
L1:;
si0=l2;
si1=2047U;
si0=si0 == si1;
if(si0){
sj0=l5;
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
l4=si0;
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
l6=si0;
si1=l6;
si1=i32_load(i->env__memory,(U64)si1);
si2=16U;
si1|=si2;
i32_store(i->env__memory,(U64)si0,si1);
}
L8:;
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
si3=l4;
sj1=si3?sj1:sj2;
si2=l2;
sj0=si2?sj0:sj1;
goto L0;
}
L7:;
sj0=l11;
sj1=2047ULL;
sj0&=sj1;
sj1=l3;
sj0|=sj1;
si0=!(sj0);
if(si0){
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
L9:;
sj0=l7;
sj1=-9223372036854775808ULL;
sj0&=sj1;
sj1=9218868437227405312ULL;
sj0|=sj1;
goto L0;
}
L6:;
si0=l4;
si0=!(si0);
if(si0){
sj0=l3;
si0=!(sj0);
if(si0){
sj0=l7;
sj1=-9223372036854775808ULL;
sj0&=sj1;
goto L0;
}
L11:;
si0=12U;
si1=(*i->env_____memory_base);
si2=624U;
si1+=si2;
sj2=l0;
sj3=l3;
sj4=32ULL;
sj3>>=(sj4&63);
sj4=l3;
sj5=4294967296ULL;
si4=sj4 < sj5;
l6=si4;
sj2=si4?sj2:sj3;
si2=(U32)(sj2);
l4=si2;
si3=16U;
si2<<=(si3&31);
si3=l4;
si4=l4;
si5=65536U;
si4=si4 < si5;
l9=si4;
si2=si4?si2:si3;
l4=si2;
si3=8U;
si2<<=(si3&31);
si3=l4;
si4=l4;
si5=16777216U;
si4=si4 < si5;
l10=si4;
si2=si4?si2:si3;
si3=22U;
si2>>=(si3&31);
si3=1020U;
si2&=si3;
si1+=si2;
si1=i32_load(i->env__memory,(U64)si1);
si2=l6;
si3=5U;
si2<<=(si3&31);
si3=l9;
si4=4U;
si3<<=(si4&31);
l4=si3;
si4=8U;
si3|=si4;
si4=l4;
si5=l10;
si3=si5?si3:si4;
si2|=si3;
si1+=si2;
l6=si1;
si0-=si1;
l4=si0;
sj0=l3;
si1=l6;
si2=11U;
si1-=si2;
sj1=(U64)(si1);
sj0<<=(sj1&63);
l3=sj0;
}
L10:;
si0=l2;
si0=!(si0);
if(si0){
sj0=l5;
si0=!(sj0);
if(si0){
sj0=l7;
sj1=-9223372036854775808ULL;
sj0&=sj1;
goto L0;
}
L13:;
si0=12U;
si1=(*i->env_____memory_base);
si2=624U;
si1+=si2;
sj2=l1;
sj3=l5;
sj4=32ULL;
sj3>>=(sj4&63);
sj4=l5;
sj5=4294967296ULL;
si4=sj4 < sj5;
l6=si4;
sj2=si4?sj2:sj3;
si2=(U32)(sj2);
l2=si2;
si3=16U;
si2<<=(si3&31);
si3=l2;
si4=l2;
si5=65536U;
si4=si4 < si5;
l9=si4;
si2=si4?si2:si3;
l2=si2;
si3=8U;
si2<<=(si3&31);
si3=l2;
si4=l2;
si5=16777216U;
si4=si4 < si5;
l10=si4;
si2=si4?si2:si3;
si3=22U;
si2>>=(si3&31);
si3=1020U;
si2&=si3;
si1+=si2;
si1=i32_load(i->env__memory,(U64)si1);
si2=l6;
si3=5U;
si2<<=(si3&31);
si3=l9;
si4=4U;
si3<<=(si4&31);
l2=si3;
si4=8U;
si3|=si4;
si4=l2;
si5=l10;
si3=si5?si3:si4;
si2|=si3;
si1+=si2;
l6=si1;
si0-=si1;
l2=si0;
sj0=l5;
si1=l6;
si2=11U;
si1-=si2;
sj1=(U64)(si1);
sj0<<=(sj1&63);
l5=sj0;
}
L12:;
sj0=l7;
sj1=63ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
si1=l2;
si2=l4;
si1+=si2;
si2=-1024U;
si3=-1023U;
sj4=l5;
sj5=11ULL;
sj4<<=(sj5&63);
l1=sj4;
sj5=-9223372036854775808ULL;
sj4|=sj5;
l0=sj4;
sj5=32ULL;
sj4>>=(sj5&63);
l5=sj4;
sj5=l3;
sj6=10ULL;
sj5<<=(sj6&63);
l3=sj5;
sj6=4294966272ULL;
sj5&=sj6;
sj4*=sj5;
l7=sj4;
sj5=l3;
sj6=4611686018427387904ULL;
sj5|=sj6;
l3=sj5;
sj6=32ULL;
sj5>>=(sj6&63);
l8=sj5;
sj6=l1;
sj7=4294965248ULL;
sj6&=sj7;
sj5*=sj6;
sj4+=sj5;
l1=sj4;
sj5=32ULL;
sj4>>=(sj5&63);
sj5=l5;
sj6=l8;
sj5*=sj6;
sj4+=sj5;
sj5=l1;
sj6=l7;
si5=sj5 < sj6;
sj5=(U64)(si5);
sj6=32ULL;
sj5<<=(sj6&63);
sj4+=sj5;
sj5=l0;
sj6=l3;
sj5*=sj6;
l0=sj5;
sj6=l1;
sj7=32ULL;
sj6<<=(sj7&63);
si5=sj5 < sj6;
sj5=(U64)(si5);
sj4+=sj5;
sj5=l0;
sj6=0ULL;
si5=sj5 != sj6;
sj5=(U64)(si5);
sj4|=sj5;
l1=sj4;
sj5=1ULL;
sj4<<=(sj5&63);
l0=sj4;
sj5=0ULL;
si4=(U64)((I64)sj4>=(I64)sj5);
l2=si4;
si2=si4?si2:si3;
si1+=si2;
sj2=l0;
sj3=l1;
si4=l2;
sj2=si4?sj2:sj3;
sj0=f20(i,si0,si1,sj2);
L0:;
return sj0;
}

U64 f22(dfsinInstance*i,U64 l0,U64 l1) {
U64 l2=0;
U32 l3=0;
U64 l4=0;
U32 l5=0;
U32 l6=0;
U64 l7=0;
U64 l8=0;
U64 l9=0;
U64 l10=0;
U32 l11=0;
U32 l12=0;
U64 l13=0;
U64 l14=0;
U64 l15=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2,sj3,sj4,sj5;
sj0=l1;
sj1=4503599627370495ULL;
sj0&=sj1;
l4=sj0;
sj0=l0;
sj1=4503599627370495ULL;
sj0&=sj1;
l2=sj0;
sj0=l1;
sj1=52ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
si1=2047U;
si0&=si1;
l3=si0;
sj0=l0;
sj1=l1;
sj0^=sj1;
l7=sj0;
sj0=l0;
sj1=52ULL;
sj0>>=(sj1&63);
l8=sj0;
si0=(U32)(sj0);
si1=2047U;
si0&=si1;
l5=si0;
si1=2047U;
si0=si0 == si1;
if(si0){
sj0=l2;
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
l3=si1;
si0|=si1;
if(si0){
si0=(*i->GOTX2Emem__float_exception_flags);
l6=si0;
si1=l6;
si1=i32_load(i->env__memory,(U64)si1);
si2=16U;
si1|=si2;
i32_store(i->env__memory,(U64)si0,si1);
}
L3:;
sj0=l1;
sj1=2251799813685248ULL;
sj0|=sj1;
l2=sj0;
sj1=l0;
sj2=2251799813685248ULL;
sj1|=sj2;
l0=sj1;
sj2=l0;
sj3=l2;
sj4=l1;
sj5=1ULL;
sj4<<=(sj5&63);
sj5=-9007199254740991ULL;
si4=sj4 < sj5;
sj2=si4?sj2:sj3;
si3=l5;
sj1=si3?sj1:sj2;
si2=l3;
sj0=si2?sj0:sj1;
goto L0;
}
L2:;
si0=l3;
si1=2047U;
si0=si0 == si1;
if(si0){
sj0=l4;
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
l3=si1;
si0|=si1;
if(si0){
si0=(*i->GOTX2Emem__float_exception_flags);
l6=si0;
si1=l6;
si1=i32_load(i->env__memory,(U64)si1);
si2=16U;
si1|=si2;
i32_store(i->env__memory,(U64)si0,si1);
}
L6:;
sj0=l1;
sj1=2251799813685248ULL;
sj0|=sj1;
l2=sj0;
sj1=l0;
sj2=2251799813685248ULL;
sj1|=sj2;
l0=sj1;
sj2=l0;
sj3=l2;
sj4=l1;
sj5=1ULL;
sj4<<=(sj5&63);
sj5=-9007199254740991ULL;
si4=sj4 < sj5;
sj2=si4?sj2:sj3;
si3=l5;
sj1=si3?sj1:sj2;
si2=l3;
sj0=si2?sj0:sj1;
goto L0;
}
L5:;
si0=(*i->GOTX2Emem__float_exception_flags);
l3=si0;
si1=l3;
si1=i32_load(i->env__memory,(U64)si1);
si2=16U;
si1|=si2;
i32_store(i->env__memory,(U64)si0,si1);
sj0=9223372036854775807ULL;
goto L0;
}
L4:;
sj0=l7;
sj1=-9223372036854775808ULL;
sj0&=sj1;
sj1=9218868437227405312ULL;
sj0|=sj1;
goto L0;
}
L1:;
si0=l3;
if(si0){
si0=l3;
si1=2047U;
si0=si0 != si1;
if(si0){
goto L7;
}
sj0=l4;
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
l3=si1;
si0|=si1;
if(si0){
si0=(*i->GOTX2Emem__float_exception_flags);
l6=si0;
si1=l6;
si1=i32_load(i->env__memory,(U64)si1);
si2=16U;
si1|=si2;
i32_store(i->env__memory,(U64)si0,si1);
}
L10:;
sj0=l1;
sj1=2251799813685248ULL;
sj0|=sj1;
l2=sj0;
sj1=l0;
sj2=2251799813685248ULL;
sj1|=sj2;
l0=sj1;
sj2=l0;
sj3=l2;
sj4=l1;
sj5=1ULL;
sj4<<=(sj5&63);
sj5=-9007199254740991ULL;
si4=sj4 < sj5;
sj2=si4?sj2:sj3;
si3=l5;
sj1=si3?sj1:sj2;
si2=l3;
sj0=si2?sj0:sj1;
goto L0;
}
L9:;
sj0=l7;
sj1=-9223372036854775808ULL;
sj0&=sj1;
goto L0;
}
L8:;
sj0=l4;
si0=!(sj0);
if(si0){
si0=(*i->GOTX2Emem__float_exception_flags);
si0=i32_load(i->env__memory,(U64)si0);
l3=si0;
sj0=l8;
sj1=2047ULL;
sj0&=sj1;
sj1=l2;
sj0|=sj1;
si0=!(sj0);
if(si0){
si0=(*i->GOTX2Emem__float_exception_flags);
si1=l3;
si2=16U;
si1|=si2;
i32_store(i->env__memory,(U64)si0,si1);
sj0=9223372036854775807ULL;
goto L0;
}
L12:;
si0=(*i->GOTX2Emem__float_exception_flags);
si1=l3;
si2=2U;
si1|=si2;
i32_store(i->env__memory,(U64)si0,si1);
sj0=l7;
sj1=-9223372036854775808ULL;
sj0&=sj1;
sj1=9218868437227405312ULL;
sj0|=sj1;
goto L0;
}
L11:;
si0=12U;
si1=(*i->env_____memory_base);
si2=624U;
si1+=si2;
sj2=l1;
sj3=l4;
sj4=32ULL;
sj3>>=(sj4&63);
sj4=l4;
sj5=4294967296ULL;
si4=sj4 < sj5;
l6=si4;
sj2=si4?sj2:sj3;
si2=(U32)(sj2);
l3=si2;
si3=16U;
si2<<=(si3&31);
si3=l3;
si4=l3;
si5=65536U;
si4=si4 < si5;
l11=si4;
si2=si4?si2:si3;
l3=si2;
si3=8U;
si2<<=(si3&31);
si3=l3;
si4=l3;
si5=16777216U;
si4=si4 < si5;
l12=si4;
si2=si4?si2:si3;
si3=22U;
si2>>=(si3&31);
si3=1020U;
si2&=si3;
si1+=si2;
si1=i32_load(i->env__memory,(U64)si1);
si2=l6;
si3=5U;
si2<<=(si3&31);
si3=l11;
si4=4U;
si3<<=(si4&31);
l3=si3;
si4=8U;
si3|=si4;
si4=l3;
si5=l12;
si3=si5?si3:si4;
si2|=si3;
si1+=si2;
l6=si1;
si0-=si1;
l3=si0;
sj0=l4;
si1=l6;
si2=11U;
si1-=si2;
sj1=(U64)(si1);
sj0<<=(sj1&63);
l4=sj0;
L7:;
si0=l5;
si0=!(si0);
if(si0){
sj0=l2;
si0=!(sj0);
if(si0){
sj0=l7;
sj1=-9223372036854775808ULL;
sj0&=sj1;
goto L0;
}
L14:;
si0=12U;
si1=(*i->env_____memory_base);
si2=624U;
si1+=si2;
sj2=l0;
sj3=l2;
sj4=32ULL;
sj3>>=(sj4&63);
sj4=l2;
sj5=4294967296ULL;
si4=sj4 < sj5;
l6=si4;
sj2=si4?sj2:sj3;
si2=(U32)(sj2);
l5=si2;
si3=16U;
si2<<=(si3&31);
si3=l5;
si4=l5;
si5=65536U;
si4=si4 < si5;
l11=si4;
si2=si4?si2:si3;
l5=si2;
si3=8U;
si2<<=(si3&31);
si3=l5;
si4=l5;
si5=16777216U;
si4=si4 < si5;
l12=si4;
si2=si4?si2:si3;
si3=22U;
si2>>=(si3&31);
si3=1020U;
si2&=si3;
si1+=si2;
si1=i32_load(i->env__memory,(U64)si1);
si2=l6;
si3=5U;
si2<<=(si3&31);
si3=l11;
si4=4U;
si3<<=(si4&31);
l5=si3;
si4=8U;
si3|=si4;
si4=l5;
si5=l12;
si3=si5?si3:si4;
si2|=si3;
si1+=si2;
l6=si1;
si0-=si1;
l5=si0;
sj0=l2;
si1=l6;
si2=11U;
si1-=si2;
sj1=(U64)(si1);
sj0<<=(sj1&63);
l2=sj0;
}
L13:;
sj0=l7;
sj1=63ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
l6=si0;
si0=l5;
si1=l3;
si0-=si1;
si1=1022U;
si2=1021U;
sj3=l4;
sj4=11ULL;
sj3<<=(sj4&63);
l9=sj3;
sj4=-9223372036854775808ULL;
sj3|=sj4;
l8=sj3;
sj4=l2;
sj5=10ULL;
sj4<<=(sj5&63);
sj5=4611686018427387904ULL;
sj4|=sj5;
l0=sj4;
sj5=1ULL;
sj4<<=(sj5&63);
si3=sj3 <= sj4;
l3=si3;
si1=si3?si1:si2;
si0+=si1;
l5=si0;
sj0=-1ULL;
l1=sj0;
sj0=l8;
sj1=l0;
si2=l3;
sj2=(U64)(si2);
sj1>>=(sj2&63);
l10=sj1;
si0=sj0 <= sj1;
if(si0){
goto L15;
}
sj0=l8;
sj1=32ULL;
sj0>>=(sj1&63);
l7=sj0;
sj0=-4294967296ULL;
l0=sj0;
sj0=l10;
sj1=l8;
sj2=-4294967296ULL;
sj1&=sj2;
l13=sj1;
si0=sj0 < sj1;
if(si0){
sj0=l10;
sj1=l7;
sj0=DIV_U(sj0,sj1);
sj1=32ULL;
sj0<<=(sj1&63);
l0=sj0;
}
L16:;
sj0=0ULL;
sj1=l0;
sj2=l8;
sj1*=sj2;
l2=sj1;
sj0-=sj1;
l1=sj0;
sj0=l10;
sj1=l0;
sj2=32ULL;
sj1>>=(sj2&63);
l14=sj1;
sj2=l7;
sj1*=sj2;
sj2=l14;
sj3=l9;
sj4=4294965248ULL;
sj3&=sj4;
l15=sj3;
sj2*=sj3;
l9=sj2;
sj3=32ULL;
sj2>>=(sj3&63);
sj1+=sj2;
sj0-=sj1;
sj1=l2;
sj2=0ULL;
si1=sj1 != sj2;
sj1=(U64)(si1);
sj0-=sj1;
sj1=l2;
sj2=l9;
sj3=32ULL;
sj2<<=(sj3&63);
si1=sj1 < sj2;
sj1=(U64)(si1);
sj0-=sj1;
l2=sj0;
sj1=0ULL;
si0=(U64)((I64)sj0>=(I64)sj1);
if(si0){
sj0=l1;
l4=sj0;
goto L17;
}
L18:;
sj0=l4;
sj1=43ULL;
sj0<<=(sj1&63);
l9=sj0;
L19:;
{
sj0=l1;
sj1=l9;
sj0+=sj1;
l4=sj0;
sj1=l1;
si0=sj0 < sj1;
l3=si0;
sj0=l0;
sj1=4294967296ULL;
sj0-=sj1;
l0=sj0;
sj0=l4;
l1=sj0;
si0=l3;
sj0=(U64)(si0);
sj1=l2;
sj2=l7;
sj1+=sj2;
sj0+=sj1;
l2=sj0;
sj1=0ULL;
si0=(U64)((I64)sj0<(I64)sj1);
if(si0){
goto L19;
}
}
L17:;
sj0=4294967295ULL;
l1=sj0;
sj0=l2;
sj1=32ULL;
sj0<<=(sj1&63);
sj1=l4;
sj2=32ULL;
sj1>>=(sj2&63);
sj0|=sj1;
l2=sj0;
sj1=l13;
si0=sj0 < sj1;
if(si0){
sj0=l2;
sj1=l7;
sj0=DIV_U(sj0,sj1);
l1=sj0;
}
L20:;
sj0=l0;
sj1=l1;
sj0|=sj1;
l1=sj0;
sj1=511ULL;
sj0&=sj1;
sj1=2ULL;
si0=sj0 > sj1;
if(si0){
goto L15;
}
sj0=0ULL;
sj1=l1;
sj2=l8;
sj1*=sj2;
l2=sj1;
sj0-=sj1;
l0=sj0;
sj0=l10;
sj1=l2;
sj2=0ULL;
si1=sj1 != sj2;
sj1=(U64)(si1);
sj0-=sj1;
sj1=l1;
sj2=32ULL;
sj1>>=(sj2&63);
l4=sj1;
sj2=l7;
sj1*=sj2;
sj2=l4;
sj3=l15;
sj2*=sj3;
l9=sj2;
sj3=l1;
sj4=4294967295ULL;
sj3&=sj4;
sj4=l7;
sj3*=sj4;
sj2+=sj3;
l4=sj2;
sj3=32ULL;
sj2>>=(sj3&63);
sj1+=sj2;
sj0-=sj1;
sj1=-4294967296ULL;
sj2=0ULL;
sj3=l4;
sj4=l9;
si3=sj3 < sj4;
sj1=si3?sj1:sj2;
sj0+=sj1;
sj1=l2;
sj2=l4;
sj3=32ULL;
sj2<<=(sj3&63);
si1=sj1 < sj2;
sj1=(U64)(si1);
sj0-=sj1;
l4=sj0;
sj1=0ULL;
si0=(U64)((I64)sj0>=(I64)sj1);
if(si0){
sj0=l0;
l2=sj0;
goto L21;
}
L22:;
L23:;
{
sj0=l1;
sj1=1ULL;
sj0-=sj1;
l1=sj0;
sj0=l0;
sj1=l8;
sj0+=sj1;
l2=sj0;
sj1=l0;
si0=sj0 < sj1;
l3=si0;
sj0=l2;
l0=sj0;
sj0=l4;
si1=l3;
sj1=(U64)(si1);
sj0+=sj1;
l4=sj0;
sj1=0ULL;
si0=(U64)((I64)sj0<(I64)sj1);
if(si0){
goto L23;
}
}
L21:;
sj0=l1;
sj1=l2;
sj2=0ULL;
si1=sj1 != sj2;
sj1=(U64)(si1);
sj0|=sj1;
l1=sj0;
L15:;
si0=l6;
si1=l5;
sj2=l1;
sj0=f20(i,si0,si1,sj2);
L0:;
return sj0;
}

U32 f23(dfsinInstance*i,U64 l0,U64 l1) {
U32 l2=0;
U32 si0,si1,si2;
U64 sj0,sj1,sj2;
sj0=l0;
sj1=9218868437227405312ULL;
sj0&=sj1;
sj1=9218868437227405312ULL;
si0=sj0 == sj1;
sj1=l0;
sj2=4503599627370495ULL;
sj1&=sj2;
sj2=0ULL;
si1=sj1 != sj2;
si0&=si1;
si0=!(si0);
if(si0){
sj0=l1;
sj1=9218868437227405312ULL;
sj0&=sj1;
sj1=9218868437227405312ULL;
si0=sj0 != sj1;
if(si0){
goto L1;
}
sj0=l1;
sj1=4503599627370495ULL;
sj0&=sj1;
si0=!(sj0);
if(si0){
goto L1;
}
}
L2:;
si0=(*i->GOTX2Emem__float_exception_flags);
l2=si0;
si1=l2;
si1=i32_load(i->env__memory,(U64)si1);
si2=16U;
si1|=si2;
i32_store(i->env__memory,(U64)si0,si1);
si0=0U;
goto L0;
L1:;
sj0=l0;
sj1=63ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
l2=si0;
sj1=l1;
sj2=63ULL;
sj1>>=(sj2&63);
si1=(U32)(sj1);
si0=si0 != si1;
if(si0){
sj0=l0;
sj1=l1;
sj0|=sj1;
sj1=9223372036854775807ULL;
sj0&=sj1;
si0=!(sj0);
sj1=l0;
sj2=0ULL;
si1=(U64)((I64)sj1<(I64)sj2);
si0|=si1;
goto L0;
}
L3:;
si0=l2;
sj1=l0;
sj2=l1;
si1=sj1 < sj2;
si0=si0 != si1;
sj1=l0;
sj2=l1;
si1=sj1 == sj2;
si0|=si1;
L0:;
return si0;
}

U32 f24(dfsinInstance*i,U64 l0,U64 l1) {
U32 l2=0;
U32 si0,si1,si2;
U64 sj0,sj1,sj2;
sj0=l1;
sj1=9218868437227405312ULL;
sj0&=sj1;
sj1=9218868437227405312ULL;
si0=sj0 == sj1;
sj1=l1;
sj2=4503599627370495ULL;
sj1&=sj2;
sj2=0ULL;
si1=sj1 != sj2;
si0&=si1;
si0=!(si0);
if(si0){
sj0=l0;
sj1=9218868437227405312ULL;
sj0&=sj1;
sj1=9218868437227405312ULL;
si0=sj0 != sj1;
if(si0){
goto L1;
}
sj0=l0;
sj1=4503599627370495ULL;
sj0&=sj1;
si0=!(sj0);
if(si0){
goto L1;
}
}
L2:;
si0=(*i->GOTX2Emem__float_exception_flags);
l2=si0;
si1=l2;
si1=i32_load(i->env__memory,(U64)si1);
si2=16U;
si1|=si2;
i32_store(i->env__memory,(U64)si0,si1);
si0=0U;
goto L0;
L1:;
sj0=l1;
sj1=63ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
l2=si0;
sj1=l0;
sj2=63ULL;
sj1>>=(sj2&63);
si1=(U32)(sj1);
si0=si0 != si1;
if(si0){
sj0=l0;
sj1=l1;
sj0|=sj1;
sj1=9223372036854775807ULL;
sj0&=sj1;
si0=!(sj0);
sj1=l1;
sj2=0ULL;
si1=(U64)((I64)sj1<(I64)sj2);
si0|=si1;
goto L0;
}
L3:;
si0=l2;
sj1=l0;
sj2=l1;
si1=sj1 > sj2;
si0=si0 != si1;
sj1=l0;
sj2=l1;
si1=sj1 == sj2;
si0|=si1;
L0:;
return si0;
}

U64 f25(dfsinInstance*i,U64 l0) {
U64 sj0,sj1;
sj0=l0;
sj1=-9223372036854775808ULL;
sj0^=sj1;
L0:;
return sj0;
}

U64 f26(dfsinInstance*i,U64 l0) {
U64 sj0,sj1;
sj0=l0;
sj1=9223372036854775807ULL;
sj0&=sj1;
L0:;
return sj0;
}

U64 f27(dfsinInstance*i,U64 l0) {
U32 l1=0;
U64 l2=0;
U64 l3=0;
U64 l4=0;
U32 l5=0;
U64 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3,si4,si5,si6;
U64 sj0,sj1,sj2,sj3,sj4;
sj0=l0;
sj1=l0;
sj0=f21(i,sj0,sj1);
sj1=-9223372036854775808ULL;
sj0^=sj1;
l6=sj0;
sj0=1ULL;
l3=sj0;
sj0=l0;
l2=sj0;
L1:;
{
si0=(*i->env_____memory_base);
si1=624U;
si0+=si1;
sj1=l3;
sj2=1ULL;
sj1<<=(sj2&63);
l4=sj1;
sj2=1ULL;
sj1|=sj2;
sj2=l4;
sj1*=sj2;
l4=sj1;
si1=(U32)(sj1);
l1=si1;
si2=16U;
si1<<=(si2&31);
si2=l1;
si3=l1;
si4=65536U;
si3=si3 < si4;
l5=si3;
si1=si3?si1:si2;
l1=si1;
si2=8U;
si1<<=(si2&31);
si2=l1;
si3=l1;
si4=16777216U;
si3=si3 < si4;
l7=si3;
si1=si3?si1:si2;
si2=22U;
si1>>=(si2&31);
si2=1020U;
si1&=si2;
si0+=si1;
si0=i32_load(i->env__memory,(U64)si0);
l1=si0;
sj0=l2;
sj1=l0;
sj2=l6;
sj1=f21(i,sj1,sj2);
sj2=l4;
sj3=4294967294ULL;
sj2&=sj3;
si3=l1;
si4=l5;
si5=4U;
si4<<=(si5&31);
l5=si4;
si5=8U;
si4|=si5;
si5=l5;
si6=l7;
si4=si6?si4:si5;
si3+=si4;
l1=si3;
si4=21U;
si3+=si4;
sj3=(U64)(si3);
sj2<<=(sj3&63);
si3=1053U;
si4=l1;
si3-=si4;
sj3=(U64)(si3);
sj4=52ULL;
sj3<<=(sj4&63);
sj2+=sj3;
sj1=f22(i,sj1,sj2);
l0=sj1;
sj0=f19(i,sj0,sj1);
l2=sj0;
sj0=l0;
sj1=9218868437227405312ULL;
sj0&=sj1;
sj1=9218868437227405312ULL;
si0=sj0 != sj1;
if(si0){
goto L2;
}
sj0=l0;
sj1=4503599627370495ULL;
sj0&=sj1;
si0=!(sj0);
if(si0){
goto L2;
}
si0=(*i->GOTX2Emem__float_exception_flags);
l1=si0;
si1=l1;
si1=i32_load(i->env__memory,(U64)si1);
si2=16U;
si1|=si2;
i32_store(i->env__memory,(U64)si0,si1);
sj0=l2;
goto L0;
L2:;
sj0=l3;
sj1=1ULL;
sj0+=sj1;
l3=sj0;
sj0=l0;
sj1=9223372036854775807ULL;
sj0&=sj1;
sj1=4532020583610935536ULL;
si0=sj0 > sj1;
if(si0){
goto L1;
}
}
sj0=l2;
L0:;
return sj0;
}

F64 f28(dfsinInstance*i,U64 l0) {
F64 l1=0;
F64 sd0;
sd0=l1;
L0:;
return sd0;
}

U32 f29(dfsinInstance*i) {
U32 l0=0;
U32 l1=0;
U32 l2=0;
U32 l3=0;
F64 l4=0;
U32 si0,si1,si2,si3;
U64 sj1,sj2;
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
si1=576U;
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
sd2=(F64)(I64)(sj2);
sd1+=sd2;
f64_store(i->env__memory,(U64)si0,sd1);
si0=0U;
l1=si0;
L2:;
{
si0=l2;
si1=l1;
si2=3U;
si1<<=(si2&31);
l3=si1;
si2=(*i->GOTX2Emem__test_out);
si1+=si2;
sj1=i64_load(i->env__memory,(U64)si1);
si2=(*i->GOTX2Emem__test_in);
si3=l3;
si2+=si3;
sj2=i64_load(i->env__memory,(U64)si2);
sj2=f27(i,sj2);
si1=sj1 != sj2;
si0+=si1;
l2=si0;
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
si1=36U;
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
si1=576U;
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
sd2=(F64)(I64)(sj2);
sd1+=sd2;
l4=sd1;
f64_store(i->env__memory,(U64)si0,sd1);
si0=l0;
sd1=l4;
si2=(*i->GOTX2Emem__startTimer);
sd2=f64_load(i->env__memory,(U64)si2);
sd1-=sd2;
f64_store(i->env__memory,(U64)si0,sd1);
si0=(*i->env_____memory_base);
si1=611U;
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

void f30(dfsinInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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

void f31(dfsinInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6) {
U32 si0,si1,si2,si3,si4;
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
si4=l6;
f7(i,sj0,sj1,si2,si3,si4);
L0:;
}

void f32(dfsinInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6,U32 l7,U32 l8,U32 l9) {
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

void f33(dfsinInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6,U32 l7,U32 l8,U32 l9) {
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
f9(i,sj0,sj1,sj2,sj3,si4,si5);
L0:;
}

void f34(dfsinInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5) {
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
f10(i,sj0,sj1,si2,si3);
L0:;
}

U32 f35(dfsinInstance*i,U32 l0,U32 l1) {
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

U32 f36(dfsinInstance*i,U32 l0,U32 l1) {
U32 si0,si1;
U64 sj0,sj1,sj2;
si0=l0;
sj0=(U64)(si0);
si1=l1;
sj1=(U64)(si1);
sj2=32ULL;
sj1<<=(sj2&63);
sj0|=sj1;
si0=f13(i,sj0);
L0:;
return si0;
}

U32 f37(dfsinInstance*i,U32 l0,U32 l1) {
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
sj0=f14(i,sj0);
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

U32 f38(dfsinInstance*i,U32 l0,U32 l1) {
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

U32 f39(dfsinInstance*i,U32 l0,U32 l1) {
U32 si0,si1;
U64 sj0,sj1,sj2;
si0=l0;
sj0=(U64)(si0);
si1=l1;
sj1=(U64)(si1);
sj2=32ULL;
sj1<<=(sj2&63);
sj0|=sj1;
si0=f16(i,sj0);
L0:;
return si0;
}

U32 f40(dfsinInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
sj0=f17(i,si0,si1,sj2);
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

U32 f41(dfsinInstance*i,U32 l0) {
U64 l1=0;
U32 si0;
U64 sj0,sj1;
si0=l0;
sj0=f18(i,si0);
l1=sj0;
sj1=32ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
env__setTempRet0(i,si0);
sj0=l1;
si0=(U32)(sj0);
L0:;
return si0;
}

U32 f42(dfsinInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
sj0=f19(i,sj0,sj1);
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

U32 f43(dfsinInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
sj0=f21(i,sj0,sj1);
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

U32 f44(dfsinInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
sj0=f22(i,sj0,sj1);
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

U32 f45(dfsinInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
si0=f23(i,sj0,sj1);
L0:;
return si0;
}

U32 f46(dfsinInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
si0=f24(i,sj0,sj1);
L0:;
return si0;
}

U32 f47(dfsinInstance*i,U32 l0,U32 l1) {
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
sj0=f25(i,sj0);
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

U32 f48(dfsinInstance*i,U32 l0,U32 l1) {
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
sj0=f26(i,sj0);
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

U32 f49(dfsinInstance*i,U32 l0,U32 l1) {
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
sj0=f27(i,sj0);
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

F64 f50(dfsinInstance*i,U32 l0,U32 l1) {
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
sd0=f28(i,sj0);
L0:;
return sd0;
}

const U8 d0[]={
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xc1,0x55,0xed,0xfc,0x17,0x57,0xc6,0x3f,0xc1,0x55,0xed,0xfc,0x17,0x57,0xd6,0x3f,0x51,0x0,0xb2,0xfd,0x51,0xc1,0xe0,0x3f,0xc1,0x55,0xed,0xfc,0x17,0x57,0xe6,0x3f,0x31,0xab,0x28,0xfc,0xdd,0xec,0xeb,0x3f,0x51,0x0,0xb2,0xfd,0x51,0xc1,0xf0,0x3f,0x9,0xab,0x4f,0xfd,0x34,0x8c,0xf3,0x3f,0xc1,0x55,0xed,0xfc,0x17,0x57,0xf6,0x3f,0x79,0x0,0x8b,0xfc,0xfa,0x21,0xf9,0x3f,0x31,0xab,0x28,0xfc,0xdd,0xec,0xfb,0x3f,0xe9,0x55,0xc6,0xfb,0xc0,0xb7,0xfe,0x3f,0x51,0x0,0xb2,0xfd,0x51,0xc1,0x0,0x40,0xad,0xd5,0x80,0x7d,0xc3,0x26,0x2,0x40,0x9,0xab,0x4f,0xfd,0x34,0x8c,0x3,0x40,0x65,0x80,0x1e,0x7d,0xa6,0xf1,0x4,0x40,0xc1,0x55,0xed,0xfc,0x17,0x57,0x6,0x40,0x1d,0x2b,0xbc,0x7c,0x89,0xbc,0x7,0x40,0x79,0x0,0x8b,0xfc,0xfa,0x21,0x9,0x40,0xd5,0xd5,0x59,0x7c,0x6c,0x87,0xa,0x40,0x31,0xab,0x28,0xfc,0xdd,0xec,0xb,0x40,0x8d,0x80,0xf7,0x7b,0x4f,0x52,0xd,0x40,0xe9,0x55,0xc6,0xfb,0xc0,0xb7,0xe,0x40,0xa3,0x95,0xca,0x3d,0x99,0xe,0x10,0x40,0x51,0x0,0xb2,0xfd,0x51,0xc1,0x10,0x40,0xff,0x6a,0x99,0xbd,0xa,0x74,0x11,0x40,0xad,0xd5,0x80,0x7d,0xc3,0x26,0x12,0x40,0x5b,0x40,0x68,0x3d,0x7c,0xd9,0x12,0x40,0x9,0xab,0x4f,0xfd,0x34,0x8c,0x13,0x40,0xb7,0x15,0x37,0xbd,0xed,0x3e,0x14,0x40,0x65,0x80,0x1e,0x7d,0xa6,0xf1,0x14,0x40,0x13,0xeb,0x5,0x3d,0x5f,0xa4,0x15,0x40,0xc1,0x55,0xed,0xfc,0x17,0x57,0x16,0x40,0x6f,0xc0,0xd4,0xbc,0xd0,0x9,0x17,0x40,0x1d,0x2b,0xbc,0x7c,0x89,0xbc,0x17,0x40,0xcb,0x95,0xa3,0x3c,0x42,0x6f,0x18,0x40,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xcd,0xad,0x5a,0x33,0x1a,0x3a,0xc6,0x3f,0x3e,0xbf,0x9,0x2b,0xa8,0xe3,0xd5,0x3f,0x91,0xaa,0xf9,0x91,0xff,0xff,0xdf,0x3f,0xe3,0x42,0xc2,0x16,0xb7,0x91,0xe4,0x3f,0xa6,0x14,0x26,0x67,0x6f,0x83,0xe8,0x3f,0xed,0x2b,0xb,0xc4,0x7a,0xb6,0xeb,0x3f,0xad,0x28,0x7e,0x12,0xf6,0x11,0xee,0x3f,0xc0,0xfa,0xdf,0x6a,0x8b,0x83,0xef,0x3f,0xaa,0xd7,0xcb,0xe1,0xff,0xff,0xef,0x3f,0x89,0x79,0x14,0xb0,0x8b,0x83,0xef,0x3f,0xb4,0x62,0xd9,0x92,0xf6,0x11,0xee,0x3f,0x2d,0x14,0xc0,0x77,0x7b,0xb6,0xeb,0x3f,0x69,0xa8,0x4e,0x9d,0x70,0x83,0xe8,0x3f,0xe8,0xd8,0x72,0x1d,0xb8,0x91,0xe4,0x3f,0xc8,0x43,0x5f,0xea,0x0,0x0,0xe0,0x3f,0xc5,0x90,0x5,0x4e,0xaa,0xe3,0xd5,0x3f,0x2c,0x55,0x89,0x21,0x1d,0x3a,0xc6,0x3f,0x91,0x4b,0x45,0xfc,0xdf,0xae,0xa6,0x3e,0x7c,0xb3,0xdd,0x44,0x14,0x3a,0xc6,0xbf,0x3e,0x8f,0x8f,0xe6,0xa4,0xe3,0xd5,0xbf,0x6b,0xf9,0x4c,0x49,0xfd,0xff,0xdf,0xbf,0xd3,0xa3,0xb9,0x1c,0xb6,0x91,0xe4,0xbf,0x15,0xf8,0xdc,0xb2,0x6e,0x83,0xe8,0xbf,0x32,0xae,0xa,0x74,0x7a,0xb6,0xeb,0xbf,0x57,0x21,0x2d,0x91,0xf5,0x11,0xee,0xbf,0xfc,0x4a,0xc6,0x1a,0x8b,0x83,0xef,0xbf,0x8f,0xdc,0xe5,0xc2,0xff,0xff,0xef,0xbf,0xea,0xe7,0xa2,0x5e,0x8b,0x83,0xef,0xbf,0x27,0xae,0x2d,0x11,0xf7,0x11,0xee,0xbf,0x4a,0xcb,0x31,0x2c,0x7c,0xb6,0xeb,0xbf,0x81,0xd7,0x6f,0x6e,0x71,0x83,0xe8,0xbf,0x56,0x5d,0x1b,0xcd,0xb9,0x91,0xe4,0xbf,0xd,0xa3,0xc,0x1d,0x2,0x0,0xe0,0xbf,0xf7,0xca,0x69,0xa,0xad,0xe3,0xd5,0xbf,0xdd,0x63,0x88,0xc4,0x23,0x3a,0xc6,0xbf,0x45,0x72,0x72,0x6f,0x72,0x20,0x72,0x65,0x74,0x75,0x72,0x6e,0x20,0x66,0x72,0x6f,0x6d,0x20,0x67,0x65,0x74,0x74,0x69,0x6d,0x65,0x6f,0x66,0x64,0x61,0x79,0x3a,0x20,0x25,0x64,0x0,0x25,0x30,0x2e,0x36,0x66,0xa,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x8,0x0,0x0,0x0,0x7,0x0,0x0,0x0,0x6,0x0,0x0,0x0,0x6,0x0,0x0,0x0,0x5,0x0,0x0,0x0,0x5,0x0,0x0,0x0,0x5,0x0,0x0,0x0,0x5,0x0,0x0,0x0,0x4,0x0,0x0,0x0,0x4,0x0,0x0,0x0,0x4,0x0,0x0,0x0,0x4,0x0,0x0,0x0,0x4,0x0,0x0,0x0,0x4,0x0,0x0,0x0,0x4,0x0,0x0,0x0,0x4,0x0,0x0,0x0,0x3,0x0,0x0,0x0,0x3,0x0,0x0,0x0,0x3,0x0,0x0,0x0,0x3,0x0,0x0,0x0,0x3,0x0,0x0,0x0,0x3,0x0,0x0,0x0,0x3,0x0,0x0,0x0,0x3,0x0,0x0,0x0,0x3,0x0,0x0,0x0,0x3,0x0,0x0,0x0,0x3,0x0,0x0,0x0,0x3,0x0,0x0,0x0,0x3,0x0,0x0,0x0,0x3,0x0,0x0,0x0,0x3,0x0,0x0,0x0,0x3,0x0,0x0,0x0,0x2,0x0,0x0,0x0,0x2,0x0,0x0,0x0,0x2,0x0,0x0,0x0,0x2,0x0,0x0,0x0,0x2,0x0,0x0,0x0,0x2,0x0,0x0,0x0,0x2,0x0,0x0,0x0,0x2,0x0,0x0,0x0,0x2,0x0,0x0,0x0,0x2,0x0,0x0,0x0,0x2,0x0,0x0,0x0,0x2,0x0,0x0,0x0,0x2,0x0,0x0,0x0,0x2,0x0,0x0,0x0,0x2,0x0,0x0,0x0,0x2,0x0,0x0,0x0,0x2,0x0,0x0,0x0,0x2,0x0,0x0,0x0,0x2,0x0,0x0,0x0,0x2,0x0,0x0,0x0,0x2,0x0,0x0,0x0,0x2,0x0,0x0,0x0,0x2,0x0,0x0,0x0,0x2,0x0,0x0,0x0,0x2,0x0,0x0,0x0,0x2,0x0,0x0,0x0,0x2,0x0,0x0,0x0,0x2,0x0,0x0,0x0,0x2,0x0,0x0,0x0,0x2,0x0,0x0,0x0,0x2,0x0,0x0,0x0,0x2,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
};

static void dfsinInitGlobals(dfsinInstance* i) {
i->g8=1652U;
i->g9=1648U;
i->g10=1656U;
i->g11=288U;
i->g12=0U;
i->g13=1664U;
}

static void dfsinInitImports(dfsinInstance* i, void* resolve(const char* module, const char* name)) {
if (resolve == NULL) { return; }
i->env__memory=(wasmMemory*)resolve("env", "memory");
i->env_____stack_pointer=(U32*)resolve("env", "__stack_pointer");
i->env_____memory_base=(U32*)resolve("env", "__memory_base");
i->GOTX2Emem__float_exception_flags=(U32*)resolve("GOT.mem", "float_exception_flags");
i->GOTX2Emem__float_rounding_mode=(U32*)resolve("GOT.mem", "float_rounding_mode");
i->GOTX2Emem__startTimer=(U32*)resolve("GOT.mem", "startTimer");
i->GOTX2Emem__test_out=(U32*)resolve("GOT.mem", "test_out");
i->GOTX2Emem__test_in=(U32*)resolve("GOT.mem", "test_in");
i->GOTX2Emem__endTimer=(U32*)resolve("GOT.mem", "endTimer");
}

void dfsin____wasm_call_ctors(dfsinInstance*i){
f4(i);
}

void dfsin____wasm_apply_data_relocs(dfsinInstance*i){
f5(i);
}

void dfsin_shift64RightJamming(dfsinInstance*i,U32 l0,U32 l1,U32 l2,U32 l3){
f30(i,l0,l1,l2,l3);
}

void dfsin_shift64ExtraRightJamming(dfsinInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6){
f31(i,l0,l1,l2,l3,l4,l5,l6);
}

void dfsin_add128(dfsinInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6,U32 l7,U32 l8,U32 l9){
f32(i,l0,l1,l2,l3,l4,l5,l6,l7,l8,l9);
}

void dfsin_sub128(dfsinInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6,U32 l7,U32 l8,U32 l9){
f33(i,l0,l1,l2,l3,l4,l5,l6,l7,l8,l9);
}

void dfsin_mul64To128(dfsinInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5){
f34(i,l0,l1,l2,l3,l4,l5);
}

void dfsin_float_raise(dfsinInstance*i,U32 l0){
f11(i,l0);
}

U32 dfsin_float64_is_nan(dfsinInstance*i,U32 l0,U32 l1){
return f35(i,l0,l1);
}

U32 dfsin_float64_is_signaling_nan(dfsinInstance*i,U32 l0,U32 l1){
return f36(i,l0,l1);
}

U32 dfsin_extractFloat64Frac(dfsinInstance*i,U32 l0,U32 l1){
return f37(i,l0,l1);
}

U32 dfsin_extractFloat64Exp(dfsinInstance*i,U32 l0,U32 l1){
return f38(i,l0,l1);
}

U32 dfsin_extractFloat64Sign(dfsinInstance*i,U32 l0,U32 l1){
return f39(i,l0,l1);
}

U32 dfsin_packFloat64(dfsinInstance*i,U32 l0,U32 l1,U32 l2,U32 l3){
return f40(i,l0,l1,l2,l3);
}

U32 dfsin_int32_to_float64(dfsinInstance*i,U32 l0){
return f41(i,l0);
}

U32 dfsin_float64_add(dfsinInstance*i,U32 l0,U32 l1,U32 l2,U32 l3){
return f42(i,l0,l1,l2,l3);
}

U32 dfsin_float64_mul(dfsinInstance*i,U32 l0,U32 l1,U32 l2,U32 l3){
return f43(i,l0,l1,l2,l3);
}

U32 dfsin_float64_div(dfsinInstance*i,U32 l0,U32 l1,U32 l2,U32 l3){
return f44(i,l0,l1,l2,l3);
}

U32 dfsin_float64_le(dfsinInstance*i,U32 l0,U32 l1,U32 l2,U32 l3){
return f45(i,l0,l1,l2,l3);
}

U32 dfsin_float64_ge(dfsinInstance*i,U32 l0,U32 l1,U32 l2,U32 l3){
return f46(i,l0,l1,l2,l3);
}

U32 dfsin_float64_neg(dfsinInstance*i,U32 l0,U32 l1){
return f47(i,l0,l1);
}

U32 dfsin_float64_abs(dfsinInstance*i,U32 l0,U32 l1){
return f48(i,l0,l1);
}

U32 dfsin_local_sin(dfsinInstance*i,U32 l0,U32 l1){
return f49(i,l0,l1);
}

F64 dfsin_ullong_to_double(dfsinInstance*i,U32 l0,U32 l1){
return f50(i,l0,l1);
}

U32 dfsin_submain(dfsinInstance*i){
return f29(i);
}

void dfsin_origX24shift64RightJamming(dfsinInstance*i,U64 l0,U32 l1,U32 l2){
f6(i,l0,l1,l2);
}

void dfsin_origX24shift64ExtraRightJamming(dfsinInstance*i,U64 l0,U64 l1,U32 l2,U32 l3,U32 l4){
f7(i,l0,l1,l2,l3,l4);
}

void dfsin_origX24add128(dfsinInstance*i,U64 l0,U64 l1,U64 l2,U64 l3,U32 l4,U32 l5){
f8(i,l0,l1,l2,l3,l4,l5);
}

void dfsin_origX24sub128(dfsinInstance*i,U64 l0,U64 l1,U64 l2,U64 l3,U32 l4,U32 l5){
f9(i,l0,l1,l2,l3,l4,l5);
}

void dfsin_origX24mul64To128(dfsinInstance*i,U64 l0,U64 l1,U32 l2,U32 l3){
f10(i,l0,l1,l2,l3);
}

U32 dfsin_origX24float64_is_nan(dfsinInstance*i,U64 l0){
return f12(i,l0);
}

U32 dfsin_origX24float64_is_signaling_nan(dfsinInstance*i,U64 l0){
return f13(i,l0);
}

U64 dfsin_origX24extractFloat64Frac(dfsinInstance*i,U64 l0){
return f14(i,l0);
}

U32 dfsin_origX24extractFloat64Exp(dfsinInstance*i,U64 l0){
return f15(i,l0);
}

U32 dfsin_origX24extractFloat64Sign(dfsinInstance*i,U64 l0){
return f16(i,l0);
}

U64 dfsin_origX24packFloat64(dfsinInstance*i,U32 l0,U32 l1,U64 l2){
return f17(i,l0,l1,l2);
}

U64 dfsin_origX24int32_to_float64(dfsinInstance*i,U32 l0){
return f18(i,l0);
}

U64 dfsin_origX24float64_add(dfsinInstance*i,U64 l0,U64 l1){
return f19(i,l0,l1);
}

U64 dfsin_origX24float64_mul(dfsinInstance*i,U64 l0,U64 l1){
return f21(i,l0,l1);
}

U64 dfsin_origX24float64_div(dfsinInstance*i,U64 l0,U64 l1){
return f22(i,l0,l1);
}

U32 dfsin_origX24float64_le(dfsinInstance*i,U64 l0,U64 l1){
return f23(i,l0,l1);
}

U32 dfsin_origX24float64_ge(dfsinInstance*i,U64 l0,U64 l1){
return f24(i,l0,l1);
}

U64 dfsin_origX24float64_neg(dfsinInstance*i,U64 l0){
return f25(i,l0);
}

U64 dfsin_origX24float64_abs(dfsinInstance*i,U64 l0){
return f26(i,l0);
}

U64 dfsin_origX24local_sin(dfsinInstance*i,U64 l0){
return f27(i,l0);
}

F64 dfsin_origX24ullong_to_double(dfsinInstance*i,U64 l0){
return f28(i,l0);
}

void dfsinInstantiate(dfsinInstance* i, void* resolve(const char* module, const char* name)) {
dfsinInitImports(i, resolve);
dfsinInitGlobals(i);
}

void dfsinFreeInstance(dfsinInstance* i) {
}

