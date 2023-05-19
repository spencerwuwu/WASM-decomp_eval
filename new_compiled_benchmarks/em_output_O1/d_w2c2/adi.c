#include "w2c2_base.h"

#include "adi.h"

void f6(adiInstance*i) {
L0:;
}

void f7(adiInstance*i) {
L0:;
}

void f8(adiInstance*i,U32 l0,U32 l1) {
F64 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2;
F64 sd0,sd1,sd2;
si0=l0;
si1=1U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L1;
}
si0=l0;
sd0=(F64)(I32)(si0);
l2=sd0;
si0=0U;
l3=si0;
L2:;
{
si0=l3;
l4=si0;
si1=l0;
si0+=si1;
l5=si0;
si0=0U;
l3=si0;
L3:;
{
si0=l1;
si1=l4;
si2=8000U;
si1*=si2;
si0+=si1;
si1=l3;
l3=si1;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si1=l5;
si2=l3;
si1-=si2;
sd1=(F64)(I32)(si1);
sd2=l2;
sd1/=sd2;
f64_store(i->env__memory,(U64)si0,sd1);
si0=l3;
si1=1U;
si0+=si1;
l6=si0;
l3=si0;
si0=l6;
si1=l0;
si0=si0 != si1;
if(si0){
goto L3;
}
}
si0=l4;
si1=1U;
si0+=si1;
l6=si0;
l3=si0;
si0=l6;
si1=l0;
si0=si0 != si1;
if(si0){
goto L2;
}
}
L1:;
L0:;
}

void f9(adiInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
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
l5=si0;
si1=l0;
si0*=si1;
l6=si0;
si0=0U;
l3=si0;
L3:;
{
si0=l3;
l3=si0;
si1=l6;
si0+=si1;
si1=20U;
si0=I32_REM_S(si0,si1);
if(si0){
goto L4;
}
si0=10U;
si1=l4;
si0=env__fputc(i,si0,si1);
L4:;
si0=l2;
si1=l1;
si2=l5;
si3=8000U;
si2*=si3;
si1+=si2;
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
l7=si0;
l3=si0;
si0=l7;
si1=l0;
si0=si0 != si1;
if(si0){
goto L3;
}
}
si0=l5;
si1=1U;
si0+=si1;
l7=si0;
l3=si0;
si0=l7;
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

void f10(adiInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5) {
F64 l6=0;
F64 l7=0;
F64 l8=0;
F64 l9=0;
F64 l10=0;
U32 l11=0;
U32 l12=0;
F64 l13=0;
F64 l14=0;
F64 l15=0;
F64 l16=0;
U32 l17=0;
U32 l18=0;
U32 l19=0;
U32 l20=0;
U32 l21=0;
U32 l22=0;
U32 l23=0;
U32 l24=0;
U32 l25=0;
U32 l26=0;
U32 l27=0;
U32 l28=0;
U32 l29=0;
U32 l30=0;
U32 l31=0;
F64 l32=0;
F64 l33=0;
U32 l34=0;
U32 si0,si1,si2,si3,si4,si5,si6;
U64 sj1;
F64 sd0,sd1,sd2,sd3,sd4,sd5;
si0=l0;
si1=1U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L1;
}
sd0=1;
si1=l0;
sd1=(F64)(I32)(si1);
sd0/=sd1;
l6=sd0;
sd1=1;
si2=l1;
sd2=(F64)(I32)(si2);
sd1/=sd2;
l7=sd1;
sd2=l7;
sd1*=sd2;
l7=sd1;
sd0/=sd1;
l8=sd0;
sd1=1;
sd0+=sd1;
l9=sd0;
sd0=l6;
sd1=l6;
sd0+=sd1;
sd1=l7;
sd0/=sd1;
l6=sd0;
sd1=1;
sd0+=sd1;
l10=sd0;
si0=l1;
si1=-1U;
si0+=si1;
l11=si0;
si0=l1;
si1=3U;
si0<<=(si1&31);
si1=7992U;
si0+=si1;
l12=si0;
sd0=l6;
sd1=-0.5;
sd0*=sd1;
l13=sd0;
sd1=l13;
sd0+=sd1;
sd1=1;
sd0+=sd1;
l14=sd0;
sd0=l8;
sd1=-0.5;
sd0*=sd1;
l15=sd0;
sd1=l15;
sd0+=sd1;
sd1=1;
sd0+=sd1;
l16=sd0;
sd0=l13;
sd0=-(sd0);
l6=sd0;
sd0=l15;
sd0=-(sd0);
l7=sd0;
si0=l1;
si1=-2U;
si0+=si1;
l17=si0;
l18=si0;
si0=l1;
si1=2U;
si0=(U32)((I32)si0>(I32)si1);
l19=si0;
si0=1U;
l20=si0;
L2:;
{
si0=l20;
l21=si0;
si0=0U;
l22=si0;
si0=1U;
l20=si0;
si0=l19;
si0=!(si0);
if(si0){
goto L3;
}
L4:;
{
si0=l3;
si1=l20;
l23=si1;
si2=3U;
si1<<=(si2&31);
l24=si1;
si0+=si1;
l25=si0;
sj1=4607182418800017408ULL;
i64_store(i->env__memory,(U64)si0,sj1);
si0=l4;
si1=l23;
si2=8000U;
si1*=si2;
l26=si1;
si0+=si1;
l20=si0;
sj1=0ULL;
i64_store(i->env__memory,(U64)si0,sj1);
si0=l5;
si1=l26;
si0+=si1;
l26=si0;
si1=l25;
sd1=f64_load(i->env__memory,(U64)si1);
f64_store(i->env__memory,(U64)si0,sd1);
si0=l23;
si1=1U;
si0+=si1;
l27=si0;
si0=l23;
si1=-1U;
si0+=si1;
l28=si0;
si0=l5;
si1=l22;
l29=si1;
si2=8000U;
si1*=si2;
l22=si1;
si2=8000U;
si1+=si2;
l30=si1;
si0+=si1;
l25=si0;
si0=l4;
si1=l30;
si0+=si1;
l31=si0;
si1=l5;
si2=l12;
si3=l22;
si2+=si3;
l30=si2;
si1+=si2;
si0=si0 >= si1;
if(si0){
goto L6;
}
si0=1U;
l22=si0;
si0=l25;
si1=l4;
si2=l30;
si1+=si2;
si0=si0 >= si1;
if(si0){
goto L6;
}
L7:;
{
si0=l20;
si1=l22;
l22=si1;
si2=3U;
si1<<=(si2&31);
l25=si1;
si0+=si1;
sd1=l6;
sd2=l13;
si3=l20;
si4=l25;
si5=-8U;
si4+=si5;
l30=si4;
si3+=si4;
sd3=f64_load(i->env__memory,(U64)si3);
sd2*=sd3;
sd3=l10;
sd2+=sd3;
l8=sd2;
sd1/=sd2;
f64_store(i->env__memory,(U64)si0,sd1);
si0=l26;
si1=l25;
si0+=si1;
sd1=l6;
si2=l26;
si3=l30;
si2+=si3;
sd2=f64_load(i->env__memory,(U64)si2);
sd1*=sd2;
sd2=l7;
si3=l2;
si4=l22;
si5=8000U;
si4*=si5;
si3+=si4;
l25=si3;
si4=l27;
si5=3U;
si4<<=(si5&31);
si3+=si4;
sd3=f64_load(i->env__memory,(U64)si3);
sd2*=sd3;
sd3=l7;
si4=l25;
si5=l28;
si6=3U;
si5<<=(si6&31);
si4+=si5;
sd4=f64_load(i->env__memory,(U64)si4);
sd3*=sd4;
sd4=l16;
si5=l25;
si6=l24;
si5+=si6;
sd5=f64_load(i->env__memory,(U64)si5);
sd4*=sd5;
sd3+=sd4;
sd2+=sd3;
sd1+=sd2;
sd2=l8;
sd1/=sd2;
f64_store(i->env__memory,(U64)si0,sd1);
si0=l22;
si1=1U;
si0+=si1;
l25=si0;
l22=si0;
si0=l25;
si1=l11;
si0=si0 != si1;
if(si0){
goto L7;
}
goto L5;
}
UNREACHABLE;
L6:;
si0=l25;
sd0=f64_load(i->env__memory,(U64)si0);
l8=sd0;
si0=l31;
sd0=f64_load(i->env__memory,(U64)si0);
l32=sd0;
si0=1U;
l22=si0;
L8:;
{
si0=l20;
si1=l22;
l22=si1;
si2=3U;
si1<<=(si2&31);
l25=si1;
si0+=si1;
sd1=l6;
sd2=l13;
sd3=l32;
sd2*=sd3;
sd3=l10;
sd2+=sd3;
l32=sd2;
sd1/=sd2;
l33=sd1;
f64_store(i->env__memory,(U64)si0,sd1);
si0=l26;
si1=l25;
si0+=si1;
sd1=l6;
sd2=l8;
sd1*=sd2;
sd2=l7;
si3=l2;
si4=l22;
si5=8000U;
si4*=si5;
si3+=si4;
l25=si3;
si4=l27;
si5=3U;
si4<<=(si5&31);
si3+=si4;
sd3=f64_load(i->env__memory,(U64)si3);
sd2*=sd3;
sd3=l7;
si4=l25;
si5=l28;
si6=3U;
si5<<=(si6&31);
si4+=si5;
sd4=f64_load(i->env__memory,(U64)si4);
sd3*=sd4;
sd4=l16;
si5=l25;
si6=l24;
si5+=si6;
sd5=f64_load(i->env__memory,(U64)si5);
sd4*=sd5;
sd3+=sd4;
sd2+=sd3;
sd1+=sd2;
sd2=l32;
sd1/=sd2;
l8=sd1;
f64_store(i->env__memory,(U64)si0,sd1);
sd0=l8;
l8=sd0;
sd0=l33;
l32=sd0;
si0=l22;
si1=1U;
si0+=si1;
l25=si0;
l22=si0;
si0=l25;
si1=l11;
si0=si0 != si1;
if(si0){
goto L8;
}
}
L5:;
si0=l3;
si1=l11;
si2=8000U;
si1*=si2;
si0+=si1;
si1=l24;
si0+=si1;
sj1=4607182418800017408ULL;
i64_store(i->env__memory,(U64)si0,sj1);
si0=l18;
l25=si0;
si0=l1;
si1=3U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L9;
}
L10:;
{
si0=l3;
si1=l25;
l22=si1;
si2=8000U;
si1*=si2;
si0+=si1;
si1=l24;
si0+=si1;
l25=si0;
si1=l20;
si2=l22;
si3=3U;
si2<<=(si3&31);
l27=si2;
si1+=si2;
sd1=f64_load(i->env__memory,(U64)si1);
si2=l25;
si3=8000U;
si2+=si3;
sd2=f64_load(i->env__memory,(U64)si2);
sd1*=sd2;
si2=l26;
si3=l27;
si2+=si3;
sd2=f64_load(i->env__memory,(U64)si2);
sd1+=sd2;
f64_store(i->env__memory,(U64)si0,sd1);
si0=l22;
si1=-1U;
si0+=si1;
l25=si0;
si0=l22;
si1=1U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L10;
}
}
L9:;
si0=l29;
si1=1U;
si0+=si1;
l22=si0;
si0=l23;
si1=1U;
si0+=si1;
l26=si0;
l20=si0;
si0=l26;
si1=l11;
si0=si0 != si1;
if(si0){
goto L4;
}
}
L3:;
si0=0U;
l20=si0;
si0=1U;
l26=si0;
si0=l19;
si0=!(si0);
if(si0){
goto L11;
}
L12:;
{
si0=l2;
si1=l26;
l29=si1;
si2=8000U;
si1*=si2;
l24=si1;
si0+=si1;
l23=si0;
sj1=4607182418800017408ULL;
i64_store(i->env__memory,(U64)si0,sj1);
si0=l4;
si1=l24;
si0+=si1;
l26=si0;
sj1=0ULL;
i64_store(i->env__memory,(U64)si0,sj1);
si0=l5;
si1=l24;
si0+=si1;
l22=si0;
si1=l23;
sd1=f64_load(i->env__memory,(U64)si1);
f64_store(i->env__memory,(U64)si0,sd1);
si0=l29;
si1=1U;
si0+=si1;
l25=si0;
si0=l29;
si1=-1U;
si0+=si1;
l27=si0;
si0=l5;
si1=l20;
l31=si1;
si2=8000U;
si1*=si2;
l20=si1;
si2=8000U;
si1+=si2;
l30=si1;
si0+=si1;
l28=si0;
si0=l4;
si1=l30;
si0+=si1;
l34=si0;
si1=l5;
si2=l12;
si3=l20;
si2+=si3;
l30=si2;
si1+=si2;
si0=si0 >= si1;
if(si0){
goto L14;
}
si0=1U;
l20=si0;
si0=l28;
si1=l4;
si2=l30;
si1+=si2;
si0=si0 >= si1;
if(si0){
goto L14;
}
L15:;
{
si0=l26;
si1=l20;
l28=si1;
si2=3U;
si1<<=(si2&31);
l20=si1;
si0+=si1;
sd1=l7;
sd2=l15;
si3=l26;
si4=l20;
si5=-8U;
si4+=si5;
l30=si4;
si3+=si4;
sd3=f64_load(i->env__memory,(U64)si3);
sd2*=sd3;
sd3=l9;
sd2+=sd3;
l8=sd2;
sd1/=sd2;
f64_store(i->env__memory,(U64)si0,sd1);
si0=l22;
si1=l20;
si0+=si1;
sd1=l7;
si2=l22;
si3=l30;
si2+=si3;
sd2=f64_load(i->env__memory,(U64)si2);
sd1*=sd2;
sd2=l6;
si3=l3;
si4=l25;
si5=8000U;
si4*=si5;
si3+=si4;
si4=l20;
si3+=si4;
sd3=f64_load(i->env__memory,(U64)si3);
sd2*=sd3;
sd3=l6;
si4=l3;
si5=l27;
si6=8000U;
si5*=si6;
si4+=si5;
si5=l20;
si4+=si5;
sd4=f64_load(i->env__memory,(U64)si4);
sd3*=sd4;
sd4=l14;
si5=l3;
si6=l24;
si5+=si6;
si6=l20;
si5+=si6;
sd5=f64_load(i->env__memory,(U64)si5);
sd4*=sd5;
sd3+=sd4;
sd2+=sd3;
sd1+=sd2;
sd2=l8;
sd1/=sd2;
f64_store(i->env__memory,(U64)si0,sd1);
si0=l28;
si1=1U;
si0+=si1;
l28=si0;
l20=si0;
si0=l28;
si1=l11;
si0=si0 != si1;
if(si0){
goto L15;
}
goto L13;
}
UNREACHABLE;
L14:;
si0=l28;
sd0=f64_load(i->env__memory,(U64)si0);
l8=sd0;
si0=l34;
sd0=f64_load(i->env__memory,(U64)si0);
l32=sd0;
si0=1U;
l20=si0;
L16:;
{
si0=l26;
si1=l20;
l28=si1;
si2=3U;
si1<<=(si2&31);
l20=si1;
si0+=si1;
sd1=l7;
sd2=l15;
sd3=l32;
sd2*=sd3;
sd3=l9;
sd2+=sd3;
l32=sd2;
sd1/=sd2;
l33=sd1;
f64_store(i->env__memory,(U64)si0,sd1);
si0=l22;
si1=l20;
si0+=si1;
sd1=l7;
sd2=l8;
sd1*=sd2;
sd2=l6;
si3=l3;
si4=l25;
si5=8000U;
si4*=si5;
si3+=si4;
si4=l20;
si3+=si4;
sd3=f64_load(i->env__memory,(U64)si3);
sd2*=sd3;
sd3=l6;
si4=l3;
si5=l27;
si6=8000U;
si5*=si6;
si4+=si5;
si5=l20;
si4+=si5;
sd4=f64_load(i->env__memory,(U64)si4);
sd3*=sd4;
sd4=l14;
si5=l3;
si6=l24;
si5+=si6;
si6=l20;
si5+=si6;
sd5=f64_load(i->env__memory,(U64)si5);
sd4*=sd5;
sd3+=sd4;
sd2+=sd3;
sd1+=sd2;
sd2=l32;
sd1/=sd2;
l8=sd1;
f64_store(i->env__memory,(U64)si0,sd1);
sd0=l8;
l8=sd0;
sd0=l33;
l32=sd0;
si0=l28;
si1=1U;
si0+=si1;
l28=si0;
l20=si0;
si0=l28;
si1=l11;
si0=si0 != si1;
if(si0){
goto L16;
}
}
L13:;
si0=l23;
si1=l11;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj1=4607182418800017408ULL;
i64_store(i->env__memory,(U64)si0,sj1);
si0=l17;
l24=si0;
si0=l1;
si1=3U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L17;
}
L18:;
{
si0=l23;
si1=l24;
l20=si1;
si2=3U;
si1<<=(si2&31);
l24=si1;
si0+=si1;
l25=si0;
si1=l26;
si2=l24;
si1+=si2;
sd1=f64_load(i->env__memory,(U64)si1);
si2=l25;
si3=8U;
si2+=si3;
sd2=f64_load(i->env__memory,(U64)si2);
sd1*=sd2;
si2=l22;
si3=l24;
si2+=si3;
sd2=f64_load(i->env__memory,(U64)si2);
sd1+=sd2;
f64_store(i->env__memory,(U64)si0,sd1);
si0=l20;
si1=-1U;
si0+=si1;
l24=si0;
si0=l20;
si1=1U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L18;
}
}
L17:;
si0=l31;
si1=1U;
si0+=si1;
l20=si0;
si0=l29;
si1=1U;
si0+=si1;
l22=si0;
l26=si0;
si0=l22;
si1=l11;
si0=si0 != si1;
if(si0){
goto L12;
}
}
L11:;
si0=l21;
si1=1U;
si0+=si1;
l20=si0;
si0=l21;
si1=l0;
si0=si0 != si1;
if(si0){
goto L2;
}
}
L1:;
L0:;
}

U32 f11(adiInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0;
F64 sd1,sd2;
sj0=1000000ULL;
si1=8U;
si0=f12(i,sj0,si1);
l2=si0;
sj0=1000000ULL;
si1=8U;
si0=f12(i,sj0,si1);
l3=si0;
sj0=1000000ULL;
si1=8U;
si0=f12(i,sj0,si1);
l4=si0;
sj0=1000000ULL;
si1=8U;
si0=f12(i,sj0,si1);
l5=si0;
si0=0U;
l6=si0;
L1:;
{
si0=l6;
l7=si0;
si1=1000U;
si0+=si1;
l8=si0;
si0=0U;
l6=si0;
L2:;
{
si0=l2;
si1=l7;
si2=8000U;
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
sd1=(F64)(I32)(si1);
sd2=1000;
sd1/=sd2;
f64_store(i->env__memory,(U64)si0,sd1);
si0=l6;
si1=1U;
si0+=si1;
l9=si0;
l6=si0;
si0=l9;
si1=1000U;
si0=si0 != si1;
if(si0){
goto L2;
}
}
si0=l7;
si1=1U;
si0+=si1;
l9=si0;
l6=si0;
si0=l9;
si1=1000U;
si0=si0 != si1;
if(si0){
goto L1;
}
}
si0=500U;
si1=1000U;
si2=l2;
si3=l3;
si4=l4;
si5=l5;
f10(i,si0,si1,si2,si3,si4,si5);
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
si0=1000U;
si1=l2;
f9(i,si0,si1);
L3:;
si0=l2;
env__free(i,si0);
si0=l3;
env__free(i,si0);
si0=l4;
env__free(i,si0);
si0=l5;
env__free(i,si0);
si0=0U;
L0:;
return si0;
}

U32 f12(adiInstance*i,U64 l0,U32 l1) {
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
0x75,0x0,0x62,0x65,0x67,0x69,0x6e,0x20,0x64,0x75,0x6d,0x70,0x3a,0x20,0x25,0x73,0x0,0x25,0x30,0x2e,0x32,0x6c,0x66,0x20,0x0,0xa,0x65,0x6e,0x64,0x20,0x20,0x20,0x64,0x75,0x6d,0x70,0x3a,0x20,0x25,0x73,0xa,0x0,0x3d,0x3d,0x42,0x45,0x47,0x49,0x4e,0x20,0x44,0x55,0x4d,0x50,0x5f,0x41,0x52,0x52,0x41,0x59,0x53,0x3d,0x3d,0xa,0x0,0x3d,0x3d,0x45,0x4e,0x44,0x20,0x20,0x20,0x44,0x55,0x4d,0x50,0x5f,0x41,0x52,0x52,0x41,0x59,0x53,0x3d,0x3d,0xa,0x0,
};

static void adiInitImports(adiInstance* i, void* resolve(const char* module, const char* name)) {
if (resolve == NULL) { return; }
i->env__memory=(wasmMemory*)resolve("env", "memory");
i->env_____stack_pointer=(U32*)resolve("env", "__stack_pointer");
i->env_____memory_base=(U32*)resolve("env", "__memory_base");
i->env_____table_base=(U32*)resolve("env", "__table_base");
i->GOTX2Emem__stderr=(U32*)resolve("GOT.mem", "stderr");
}

void adi____wasm_call_ctors(adiInstance*i){
f6(i);
}

void adi____wasm_apply_data_relocs(adiInstance*i){
f7(i);
}

void adi_init_array(adiInstance*i,U32 l0,U32 l1){
f8(i,l0,l1);
}

void adi_print_array(adiInstance*i,U32 l0,U32 l1){
f9(i,l0,l1);
}

void adi_kernel_adi(adiInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5){
f10(i,l0,l1,l2,l3,l4,l5);
}

U32 adi_submain(adiInstance*i,U32 l0,U32 l1){
return f11(i,l0,l1);
}

void adiInstantiate(adiInstance* i, void* resolve(const char* module, const char* name)) {
adiInitImports(i, resolve);
}

void adiFreeInstance(adiInstance* i) {
}

