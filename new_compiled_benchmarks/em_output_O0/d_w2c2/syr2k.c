#include "w2c2_base.h"

#include "syr2k.h"

void f4(syr2kInstance*i) {
L0:;
}

void f5(syr2kInstance*i) {
L0:;
}

U32 f6(syr2kInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U64 l7=0;
U32 l8=0;
U32 l9=0;
U64 l10=0;
U32 l11=0;
U32 l12=0;
U64 l13=0;
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
U32 l25=0;
U32 l26=0;
U32 l27=0;
U32 l28=0;
F64 l29=0;
F64 l30=0;
U32 l31=0;
U32 l32=0;
U32 l33=0;
U32 l34=0;
U32 l35=0;
U32 l36=0;
U32 l37=0;
U32 l38=0;
U32 l39=0;
U32 l40=0;
U32 l41=0;
U32 l42=0;
U32 l43=0;
U32 l44=0;
U32 l45=0;
U32 l46=0;
U32 l47=0;
U32 l48=0;
U32 l49=0;
U32 l50=0;
U32 l51=0;
U32 l52=0;
U32 l53=0;
U32 l54=0;
U32 si0,si1,si2,si3,si4,si5,si6;
U64 sj0;
F64 sd0,sd2,sd3;
si0=(*i->env_____stack_pointer);
l2=si0;
si0=48U;
l3=si0;
si0=l2;
si1=l3;
si0-=si1;
l4=si0;
si0=l4;
(*i->env_____stack_pointer)=si0;
si0=l4;
si1=l0;
i32_store(i->env__memory,(U64)si0+44U,si1);
si0=l4;
si1=l1;
i32_store(i->env__memory,(U64)si0+40U,si1);
si0=1200U;
l5=si0;
si0=l4;
si1=l5;
i32_store(i->env__memory,(U64)si0+36U,si1);
si0=1000U;
l6=si0;
si0=l4;
si1=l6;
i32_store(i->env__memory,(U64)si0+32U,si1);
sj0=1440000ULL;
l7=sj0;
si0=8U;
l8=si0;
sj0=l7;
si1=l8;
si0=f10(i,sj0,si1);
l9=si0;
si0=l4;
si1=l9;
i32_store(i->env__memory,(U64)si0+12U,si1);
sj0=1200000ULL;
l10=sj0;
si0=8U;
l11=si0;
sj0=l10;
si1=l11;
si0=f10(i,sj0,si1);
l12=si0;
si0=l4;
si1=l12;
i32_store(i->env__memory,(U64)si0+8U,si1);
sj0=1200000ULL;
l13=sj0;
si0=8U;
l14=si0;
sj0=l13;
si1=l14;
si0=f10(i,sj0,si1);
l15=si0;
si0=l4;
si1=l15;
i32_store(i->env__memory,(U64)si0+4U,si1);
si0=l4;
si0=i32_load(i->env__memory,(U64)si0+36U);
l16=si0;
si0=l4;
si0=i32_load(i->env__memory,(U64)si0+32U);
l17=si0;
si0=l4;
si0=i32_load(i->env__memory,(U64)si0+12U);
l18=si0;
si0=l4;
si0=i32_load(i->env__memory,(U64)si0+8U);
l19=si0;
si0=l4;
si0=i32_load(i->env__memory,(U64)si0+4U);
l20=si0;
si0=24U;
l21=si0;
si0=l4;
si1=l21;
si0+=si1;
l22=si0;
si0=l22;
l23=si0;
si0=16U;
l24=si0;
si0=l4;
si1=l24;
si0+=si1;
l25=si0;
si0=l25;
l26=si0;
si0=l16;
si1=l17;
si2=l23;
si3=l26;
si4=l18;
si5=l19;
si6=l20;
f7(i,si0,si1,si2,si3,si4,si5,si6);
si0=l4;
si0=i32_load(i->env__memory,(U64)si0+36U);
l27=si0;
si0=l4;
si0=i32_load(i->env__memory,(U64)si0+32U);
l28=si0;
si0=l4;
sd0=f64_load(i->env__memory,(U64)si0+24U);
l29=sd0;
si0=l4;
sd0=f64_load(i->env__memory,(U64)si0+16U);
l30=sd0;
si0=l4;
si0=i32_load(i->env__memory,(U64)si0+12U);
l31=si0;
si0=l4;
si0=i32_load(i->env__memory,(U64)si0+8U);
l32=si0;
si0=l4;
si0=i32_load(i->env__memory,(U64)si0+4U);
l33=si0;
si0=l27;
si1=l28;
sd2=l29;
sd3=l30;
si4=l31;
si5=l32;
si6=l33;
f8(i,si0,si1,sd2,sd3,si4,si5,si6);
si0=l4;
si0=i32_load(i->env__memory,(U64)si0+44U);
l34=si0;
si0=42U;
l35=si0;
si0=l34;
l36=si0;
si0=l35;
l37=si0;
si0=l36;
si1=l37;
si0=(U32)((I32)si0>(I32)si1);
l38=si0;
si0=1U;
l39=si0;
si0=l38;
si1=l39;
si0&=si1;
l40=si0;
si0=l40;
si0=!(si0);
if(si0){
goto L1;
}
si0=l4;
si0=i32_load(i->env__memory,(U64)si0+40U);
l41=si0;
si0=l41;
si0=i32_load(i->env__memory,(U64)si0);
l42=si0;
si0=87U;
l43=si0;
si0=(*i->env_____memory_base);
l44=si0;
si0=l44;
si1=l43;
si0+=si1;
l45=si0;
si0=l42;
si1=l45;
si0=env__strcmp(i,si0,si1);
l46=si0;
si0=l46;
if(si0){
goto L1;
}
si0=l4;
si0=i32_load(i->env__memory,(U64)si0+36U);
l47=si0;
si0=l4;
si0=i32_load(i->env__memory,(U64)si0+12U);
l48=si0;
si0=l47;
si1=l48;
f9(i,si0,si1);
L1:;
si0=l4;
si0=i32_load(i->env__memory,(U64)si0+12U);
l49=si0;
si0=l49;
env__free(i,si0);
si0=l4;
si0=i32_load(i->env__memory,(U64)si0+8U);
l50=si0;
si0=l50;
env__free(i,si0);
si0=l4;
si0=i32_load(i->env__memory,(U64)si0+4U);
l51=si0;
si0=l51;
env__free(i,si0);
si0=0U;
l52=si0;
si0=48U;
l53=si0;
si0=l4;
si1=l53;
si0+=si1;
l54=si0;
si0=l54;
(*i->env_____stack_pointer)=si0;
si0=l52;
goto L0;
L0:;
return si0;
}

void f7(syr2kInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6) {
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
F64 l11=0;
U32 l12=0;
F64 l13=0;
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
U32 l25=0;
U32 l26=0;
U32 l27=0;
U32 l28=0;
U32 l29=0;
U32 l30=0;
U32 l31=0;
U32 l32=0;
U32 l33=0;
U32 l34=0;
U32 l35=0;
U32 l36=0;
F64 l37=0;
U32 l38=0;
F64 l39=0;
F64 l40=0;
U32 l41=0;
U32 l42=0;
U32 l43=0;
U32 l44=0;
U32 l45=0;
U32 l46=0;
U32 l47=0;
U32 l48=0;
U32 l49=0;
U32 l50=0;
U32 l51=0;
U32 l52=0;
U32 l53=0;
U32 l54=0;
U32 l55=0;
U32 l56=0;
F64 l57=0;
U32 l58=0;
F64 l59=0;
F64 l60=0;
U32 l61=0;
U32 l62=0;
U32 l63=0;
U32 l64=0;
U32 l65=0;
U32 l66=0;
U32 l67=0;
U32 l68=0;
U32 l69=0;
U32 l70=0;
U32 l71=0;
U32 l72=0;
U32 l73=0;
U32 l74=0;
U32 l75=0;
U32 l76=0;
U32 l77=0;
U32 l78=0;
U32 l79=0;
U32 l80=0;
U32 l81=0;
U32 l82=0;
U32 l83=0;
U32 l84=0;
U32 l85=0;
U32 l86=0;
U32 l87=0;
U32 l88=0;
U32 l89=0;
U32 l90=0;
U32 l91=0;
U32 l92=0;
U32 l93=0;
U32 l94=0;
U32 l95=0;
U32 l96=0;
U32 l97=0;
U32 l98=0;
F64 l99=0;
U32 l100=0;
F64 l101=0;
F64 l102=0;
U32 l103=0;
U32 l104=0;
U32 l105=0;
U32 l106=0;
U32 l107=0;
U32 l108=0;
U32 l109=0;
U32 l110=0;
U32 l111=0;
U32 l112=0;
U32 l113=0;
U32 l114=0;
U32 l115=0;
U32 l116=0;
U32 l117=0;
U32 si0,si1;
F64 sd0,sd1;
si0=(*i->env_____stack_pointer);
l7=si0;
si0=48U;
l8=si0;
si0=l7;
si1=l8;
si0-=si1;
l9=si0;
si0=l9;
si1=l0;
i32_store(i->env__memory,(U64)si0+44U,si1);
si0=l9;
si1=l1;
i32_store(i->env__memory,(U64)si0+40U,si1);
si0=l9;
si1=l2;
i32_store(i->env__memory,(U64)si0+36U,si1);
si0=l9;
si1=l3;
i32_store(i->env__memory,(U64)si0+32U,si1);
si0=l9;
si1=l4;
i32_store(i->env__memory,(U64)si0+28U,si1);
si0=l9;
si1=l5;
i32_store(i->env__memory,(U64)si0+24U,si1);
si0=l9;
si1=l6;
i32_store(i->env__memory,(U64)si0+20U,si1);
si0=l9;
si0=i32_load(i->env__memory,(U64)si0+36U);
l10=si0;
sd0=1.5;
l11=sd0;
si0=l10;
sd1=l11;
f64_store(i->env__memory,(U64)si0,sd1);
si0=l9;
si0=i32_load(i->env__memory,(U64)si0+32U);
l12=si0;
sd0=1.2;
l13=sd0;
si0=l12;
sd1=l13;
f64_store(i->env__memory,(U64)si0,sd1);
si0=0U;
l14=si0;
si0=l9;
si1=l14;
i32_store(i->env__memory,(U64)si0+16U,si1);
L2:;
{
si0=l9;
si0=i32_load(i->env__memory,(U64)si0+16U);
l15=si0;
si0=l9;
si0=i32_load(i->env__memory,(U64)si0+44U);
l16=si0;
si0=l15;
l17=si0;
si0=l16;
l18=si0;
si0=l17;
si1=l18;
si0=(U32)((I32)si0<(I32)si1);
l19=si0;
si0=1U;
l20=si0;
si0=l19;
si1=l20;
si0&=si1;
l21=si0;
si0=l21;
si0=!(si0);
if(si0){
goto L1;
}
si0=0U;
l22=si0;
si0=l9;
si1=l22;
i32_store(i->env__memory,(U64)si0+12U,si1);
L4:;
{
si0=l9;
si0=i32_load(i->env__memory,(U64)si0+12U);
l23=si0;
si0=l9;
si0=i32_load(i->env__memory,(U64)si0+40U);
l24=si0;
si0=l23;
l25=si0;
si0=l24;
l26=si0;
si0=l25;
si1=l26;
si0=(U32)((I32)si0<(I32)si1);
l27=si0;
si0=1U;
l28=si0;
si0=l27;
si1=l28;
si0&=si1;
l29=si0;
si0=l29;
si0=!(si0);
if(si0){
goto L3;
}
si0=l9;
si0=i32_load(i->env__memory,(U64)si0+16U);
l30=si0;
si0=l9;
si0=i32_load(i->env__memory,(U64)si0+12U);
l31=si0;
si0=l30;
si1=l31;
si0*=si1;
l32=si0;
si0=1U;
l33=si0;
si0=l32;
si1=l33;
si0+=si1;
l34=si0;
si0=l9;
si0=i32_load(i->env__memory,(U64)si0+44U);
l35=si0;
si0=l34;
si1=l35;
si0=I32_REM_S(si0,si1);
l36=si0;
si0=l36;
sd0=(F64)(I32)(si0);
l37=sd0;
si0=l9;
si0=i32_load(i->env__memory,(U64)si0+44U);
l38=si0;
si0=l38;
sd0=(F64)(I32)(si0);
l39=sd0;
sd0=l37;
sd1=l39;
sd0/=sd1;
l40=sd0;
si0=l9;
si0=i32_load(i->env__memory,(U64)si0+24U);
l41=si0;
si0=l9;
si0=i32_load(i->env__memory,(U64)si0+16U);
l42=si0;
si0=8000U;
l43=si0;
si0=l42;
si1=l43;
si0*=si1;
l44=si0;
si0=l41;
si1=l44;
si0+=si1;
l45=si0;
si0=l9;
si0=i32_load(i->env__memory,(U64)si0+12U);
l46=si0;
si0=3U;
l47=si0;
si0=l46;
si1=l47;
si0<<=(si1&31);
l48=si0;
si0=l45;
si1=l48;
si0+=si1;
l49=si0;
si0=l49;
sd1=l40;
f64_store(i->env__memory,(U64)si0,sd1);
si0=l9;
si0=i32_load(i->env__memory,(U64)si0+16U);
l50=si0;
si0=l9;
si0=i32_load(i->env__memory,(U64)si0+12U);
l51=si0;
si0=l50;
si1=l51;
si0*=si1;
l52=si0;
si0=2U;
l53=si0;
si0=l52;
si1=l53;
si0+=si1;
l54=si0;
si0=l9;
si0=i32_load(i->env__memory,(U64)si0+40U);
l55=si0;
si0=l54;
si1=l55;
si0=I32_REM_S(si0,si1);
l56=si0;
si0=l56;
sd0=(F64)(I32)(si0);
l57=sd0;
si0=l9;
si0=i32_load(i->env__memory,(U64)si0+40U);
l58=si0;
si0=l58;
sd0=(F64)(I32)(si0);
l59=sd0;
sd0=l57;
sd1=l59;
sd0/=sd1;
l60=sd0;
si0=l9;
si0=i32_load(i->env__memory,(U64)si0+20U);
l61=si0;
si0=l9;
si0=i32_load(i->env__memory,(U64)si0+16U);
l62=si0;
si0=8000U;
l63=si0;
si0=l62;
si1=l63;
si0*=si1;
l64=si0;
si0=l61;
si1=l64;
si0+=si1;
l65=si0;
si0=l9;
si0=i32_load(i->env__memory,(U64)si0+12U);
l66=si0;
si0=3U;
l67=si0;
si0=l66;
si1=l67;
si0<<=(si1&31);
l68=si0;
si0=l65;
si1=l68;
si0+=si1;
l69=si0;
si0=l69;
sd1=l60;
f64_store(i->env__memory,(U64)si0,sd1);
si0=l9;
si0=i32_load(i->env__memory,(U64)si0+12U);
l70=si0;
si0=1U;
l71=si0;
si0=l70;
si1=l71;
si0+=si1;
l72=si0;
si0=l9;
si1=l72;
i32_store(i->env__memory,(U64)si0+12U,si1);
goto L4;
}
UNREACHABLE;
L3:;
si0=l9;
si0=i32_load(i->env__memory,(U64)si0+16U);
l73=si0;
si0=1U;
l74=si0;
si0=l73;
si1=l74;
si0+=si1;
l75=si0;
si0=l9;
si1=l75;
i32_store(i->env__memory,(U64)si0+16U,si1);
goto L2;
}
UNREACHABLE;
L1:;
si0=0U;
l76=si0;
si0=l9;
si1=l76;
i32_store(i->env__memory,(U64)si0+16U,si1);
L6:;
{
si0=l9;
si0=i32_load(i->env__memory,(U64)si0+16U);
l77=si0;
si0=l9;
si0=i32_load(i->env__memory,(U64)si0+44U);
l78=si0;
si0=l77;
l79=si0;
si0=l78;
l80=si0;
si0=l79;
si1=l80;
si0=(U32)((I32)si0<(I32)si1);
l81=si0;
si0=1U;
l82=si0;
si0=l81;
si1=l82;
si0&=si1;
l83=si0;
si0=l83;
si0=!(si0);
if(si0){
goto L5;
}
si0=0U;
l84=si0;
si0=l9;
si1=l84;
i32_store(i->env__memory,(U64)si0+12U,si1);
L8:;
{
si0=l9;
si0=i32_load(i->env__memory,(U64)si0+12U);
l85=si0;
si0=l9;
si0=i32_load(i->env__memory,(U64)si0+44U);
l86=si0;
si0=l85;
l87=si0;
si0=l86;
l88=si0;
si0=l87;
si1=l88;
si0=(U32)((I32)si0<(I32)si1);
l89=si0;
si0=1U;
l90=si0;
si0=l89;
si1=l90;
si0&=si1;
l91=si0;
si0=l91;
si0=!(si0);
if(si0){
goto L7;
}
si0=l9;
si0=i32_load(i->env__memory,(U64)si0+16U);
l92=si0;
si0=l9;
si0=i32_load(i->env__memory,(U64)si0+12U);
l93=si0;
si0=l92;
si1=l93;
si0*=si1;
l94=si0;
si0=3U;
l95=si0;
si0=l94;
si1=l95;
si0+=si1;
l96=si0;
si0=l9;
si0=i32_load(i->env__memory,(U64)si0+44U);
l97=si0;
si0=l96;
si1=l97;
si0=I32_REM_S(si0,si1);
l98=si0;
si0=l98;
sd0=(F64)(I32)(si0);
l99=sd0;
si0=l9;
si0=i32_load(i->env__memory,(U64)si0+40U);
l100=si0;
si0=l100;
sd0=(F64)(I32)(si0);
l101=sd0;
sd0=l99;
sd1=l101;
sd0/=sd1;
l102=sd0;
si0=l9;
si0=i32_load(i->env__memory,(U64)si0+28U);
l103=si0;
si0=l9;
si0=i32_load(i->env__memory,(U64)si0+16U);
l104=si0;
si0=9600U;
l105=si0;
si0=l104;
si1=l105;
si0*=si1;
l106=si0;
si0=l103;
si1=l106;
si0+=si1;
l107=si0;
si0=l9;
si0=i32_load(i->env__memory,(U64)si0+12U);
l108=si0;
si0=3U;
l109=si0;
si0=l108;
si1=l109;
si0<<=(si1&31);
l110=si0;
si0=l107;
si1=l110;
si0+=si1;
l111=si0;
si0=l111;
sd1=l102;
f64_store(i->env__memory,(U64)si0,sd1);
si0=l9;
si0=i32_load(i->env__memory,(U64)si0+12U);
l112=si0;
si0=1U;
l113=si0;
si0=l112;
si1=l113;
si0+=si1;
l114=si0;
si0=l9;
si1=l114;
i32_store(i->env__memory,(U64)si0+12U,si1);
goto L8;
}
UNREACHABLE;
L7:;
si0=l9;
si0=i32_load(i->env__memory,(U64)si0+16U);
l115=si0;
si0=1U;
l116=si0;
si0=l115;
si1=l116;
si0+=si1;
l117=si0;
si0=l9;
si1=l117;
i32_store(i->env__memory,(U64)si0+16U,si1);
goto L6;
}
UNREACHABLE;
L5:;
goto L0;
L0:;
}

void f8(syr2kInstance*i,U32 l0,U32 l1,F64 l2,F64 l3,U32 l4,U32 l5,U32 l6) {
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
U32 l25=0;
F64 l26=0;
U32 l27=0;
U32 l28=0;
U32 l29=0;
U32 l30=0;
U32 l31=0;
U32 l32=0;
U32 l33=0;
U32 l34=0;
U32 l35=0;
F64 l36=0;
F64 l37=0;
U32 l38=0;
U32 l39=0;
U32 l40=0;
U32 l41=0;
U32 l42=0;
U32 l43=0;
U32 l44=0;
U32 l45=0;
U32 l46=0;
U32 l47=0;
U32 l48=0;
U32 l49=0;
U32 l50=0;
U32 l51=0;
U32 l52=0;
U32 l53=0;
U32 l54=0;
U32 l55=0;
U32 l56=0;
U32 l57=0;
U32 l58=0;
U32 l59=0;
U32 l60=0;
U32 l61=0;
U32 l62=0;
U32 l63=0;
U32 l64=0;
U32 l65=0;
F64 l66=0;
F64 l67=0;
F64 l68=0;
U32 l69=0;
U32 l70=0;
U32 l71=0;
U32 l72=0;
U32 l73=0;
U32 l74=0;
U32 l75=0;
U32 l76=0;
U32 l77=0;
F64 l78=0;
U32 l79=0;
U32 l80=0;
U32 l81=0;
U32 l82=0;
U32 l83=0;
U32 l84=0;
U32 l85=0;
U32 l86=0;
U32 l87=0;
F64 l88=0;
F64 l89=0;
F64 l90=0;
U32 l91=0;
U32 l92=0;
U32 l93=0;
U32 l94=0;
U32 l95=0;
U32 l96=0;
U32 l97=0;
U32 l98=0;
U32 l99=0;
F64 l100=0;
F64 l101=0;
F64 l102=0;
F64 l103=0;
U32 l104=0;
U32 l105=0;
U32 l106=0;
U32 l107=0;
U32 l108=0;
U32 l109=0;
U32 l110=0;
U32 l111=0;
U32 l112=0;
F64 l113=0;
F64 l114=0;
U32 l115=0;
U32 l116=0;
U32 l117=0;
U32 l118=0;
U32 l119=0;
U32 l120=0;
U32 l121=0;
U32 l122=0;
U32 l123=0;
U32 si0,si1;
F64 sd0,sd1;
si0=(*i->env_____stack_pointer);
l7=si0;
si0=48U;
l8=si0;
si0=l7;
si1=l8;
si0-=si1;
l9=si0;
si0=l9;
si1=l0;
i32_store(i->env__memory,(U64)si0+44U,si1);
si0=l9;
si1=l1;
i32_store(i->env__memory,(U64)si0+40U,si1);
si0=l9;
sd1=l2;
f64_store(i->env__memory,(U64)si0+32U,sd1);
si0=l9;
sd1=l3;
f64_store(i->env__memory,(U64)si0+24U,sd1);
si0=l9;
si1=l4;
i32_store(i->env__memory,(U64)si0+20U,si1);
si0=l9;
si1=l5;
i32_store(i->env__memory,(U64)si0+16U,si1);
si0=l9;
si1=l6;
i32_store(i->env__memory,(U64)si0+12U,si1);
si0=0U;
l10=si0;
si0=l9;
si1=l10;
i32_store(i->env__memory,(U64)si0+8U,si1);
L2:;
{
si0=l9;
si0=i32_load(i->env__memory,(U64)si0+8U);
l11=si0;
si0=l9;
si0=i32_load(i->env__memory,(U64)si0+44U);
l12=si0;
si0=l11;
l13=si0;
si0=l12;
l14=si0;
si0=l13;
si1=l14;
si0=(U32)((I32)si0<(I32)si1);
l15=si0;
si0=1U;
l16=si0;
si0=l15;
si1=l16;
si0&=si1;
l17=si0;
si0=l17;
si0=!(si0);
if(si0){
goto L1;
}
si0=0U;
l18=si0;
si0=l9;
si1=l18;
i32_store(i->env__memory,(U64)si0+4U,si1);
L4:;
{
si0=l9;
si0=i32_load(i->env__memory,(U64)si0+4U);
l19=si0;
si0=l9;
si0=i32_load(i->env__memory,(U64)si0+8U);
l20=si0;
si0=l19;
l21=si0;
si0=l20;
l22=si0;
si0=l21;
si1=l22;
si0=(U32)((I32)si0<=(I32)si1);
l23=si0;
si0=1U;
l24=si0;
si0=l23;
si1=l24;
si0&=si1;
l25=si0;
si0=l25;
si0=!(si0);
if(si0){
goto L3;
}
si0=l9;
sd0=f64_load(i->env__memory,(U64)si0+24U);
l26=sd0;
si0=l9;
si0=i32_load(i->env__memory,(U64)si0+20U);
l27=si0;
si0=l9;
si0=i32_load(i->env__memory,(U64)si0+8U);
l28=si0;
si0=9600U;
l29=si0;
si0=l28;
si1=l29;
si0*=si1;
l30=si0;
si0=l27;
si1=l30;
si0+=si1;
l31=si0;
si0=l9;
si0=i32_load(i->env__memory,(U64)si0+4U);
l32=si0;
si0=3U;
l33=si0;
si0=l32;
si1=l33;
si0<<=(si1&31);
l34=si0;
si0=l31;
si1=l34;
si0+=si1;
l35=si0;
si0=l35;
sd0=f64_load(i->env__memory,(U64)si0);
l36=sd0;
sd0=l36;
sd1=l26;
sd0*=sd1;
l37=sd0;
si0=l35;
sd1=l37;
f64_store(i->env__memory,(U64)si0,sd1);
si0=l9;
si0=i32_load(i->env__memory,(U64)si0+4U);
l38=si0;
si0=1U;
l39=si0;
si0=l38;
si1=l39;
si0+=si1;
l40=si0;
si0=l9;
si1=l40;
i32_store(i->env__memory,(U64)si0+4U,si1);
goto L4;
}
UNREACHABLE;
L3:;
si0=0U;
l41=si0;
si0=l9;
si1=l41;
i32_store(i->env__memory,(U64)si0,si1);
L6:;
{
si0=l9;
si0=i32_load(i->env__memory,(U64)si0);
l42=si0;
si0=l9;
si0=i32_load(i->env__memory,(U64)si0+40U);
l43=si0;
si0=l42;
l44=si0;
si0=l43;
l45=si0;
si0=l44;
si1=l45;
si0=(U32)((I32)si0<(I32)si1);
l46=si0;
si0=1U;
l47=si0;
si0=l46;
si1=l47;
si0&=si1;
l48=si0;
si0=l48;
si0=!(si0);
if(si0){
goto L5;
}
si0=0U;
l49=si0;
si0=l9;
si1=l49;
i32_store(i->env__memory,(U64)si0+4U,si1);
L8:;
{
si0=l9;
si0=i32_load(i->env__memory,(U64)si0+4U);
l50=si0;
si0=l9;
si0=i32_load(i->env__memory,(U64)si0+8U);
l51=si0;
si0=l50;
l52=si0;
si0=l51;
l53=si0;
si0=l52;
si1=l53;
si0=(U32)((I32)si0<=(I32)si1);
l54=si0;
si0=1U;
l55=si0;
si0=l54;
si1=l55;
si0&=si1;
l56=si0;
si0=l56;
si0=!(si0);
if(si0){
goto L7;
}
si0=l9;
si0=i32_load(i->env__memory,(U64)si0+16U);
l57=si0;
si0=l9;
si0=i32_load(i->env__memory,(U64)si0+4U);
l58=si0;
si0=8000U;
l59=si0;
si0=l58;
si1=l59;
si0*=si1;
l60=si0;
si0=l57;
si1=l60;
si0+=si1;
l61=si0;
si0=l9;
si0=i32_load(i->env__memory,(U64)si0);
l62=si0;
si0=3U;
l63=si0;
si0=l62;
si1=l63;
si0<<=(si1&31);
l64=si0;
si0=l61;
si1=l64;
si0+=si1;
l65=si0;
si0=l65;
sd0=f64_load(i->env__memory,(U64)si0);
l66=sd0;
si0=l9;
sd0=f64_load(i->env__memory,(U64)si0+32U);
l67=sd0;
sd0=l66;
sd1=l67;
sd0*=sd1;
l68=sd0;
si0=l9;
si0=i32_load(i->env__memory,(U64)si0+12U);
l69=si0;
si0=l9;
si0=i32_load(i->env__memory,(U64)si0+8U);
l70=si0;
si0=8000U;
l71=si0;
si0=l70;
si1=l71;
si0*=si1;
l72=si0;
si0=l69;
si1=l72;
si0+=si1;
l73=si0;
si0=l9;
si0=i32_load(i->env__memory,(U64)si0);
l74=si0;
si0=3U;
l75=si0;
si0=l74;
si1=l75;
si0<<=(si1&31);
l76=si0;
si0=l73;
si1=l76;
si0+=si1;
l77=si0;
si0=l77;
sd0=f64_load(i->env__memory,(U64)si0);
l78=sd0;
si0=l9;
si0=i32_load(i->env__memory,(U64)si0+12U);
l79=si0;
si0=l9;
si0=i32_load(i->env__memory,(U64)si0+4U);
l80=si0;
si0=8000U;
l81=si0;
si0=l80;
si1=l81;
si0*=si1;
l82=si0;
si0=l79;
si1=l82;
si0+=si1;
l83=si0;
si0=l9;
si0=i32_load(i->env__memory,(U64)si0);
l84=si0;
si0=3U;
l85=si0;
si0=l84;
si1=l85;
si0<<=(si1&31);
l86=si0;
si0=l83;
si1=l86;
si0+=si1;
l87=si0;
si0=l87;
sd0=f64_load(i->env__memory,(U64)si0);
l88=sd0;
si0=l9;
sd0=f64_load(i->env__memory,(U64)si0+32U);
l89=sd0;
sd0=l88;
sd1=l89;
sd0*=sd1;
l90=sd0;
si0=l9;
si0=i32_load(i->env__memory,(U64)si0+16U);
l91=si0;
si0=l9;
si0=i32_load(i->env__memory,(U64)si0+8U);
l92=si0;
si0=8000U;
l93=si0;
si0=l92;
si1=l93;
si0*=si1;
l94=si0;
si0=l91;
si1=l94;
si0+=si1;
l95=si0;
si0=l9;
si0=i32_load(i->env__memory,(U64)si0);
l96=si0;
si0=3U;
l97=si0;
si0=l96;
si1=l97;
si0<<=(si1&31);
l98=si0;
si0=l95;
si1=l98;
si0+=si1;
l99=si0;
si0=l99;
sd0=f64_load(i->env__memory,(U64)si0);
l100=sd0;
sd0=l90;
sd1=l100;
sd0*=sd1;
l101=sd0;
sd0=l68;
sd1=l78;
sd0*=sd1;
l102=sd0;
sd0=l102;
sd1=l101;
sd0+=sd1;
l103=sd0;
si0=l9;
si0=i32_load(i->env__memory,(U64)si0+20U);
l104=si0;
si0=l9;
si0=i32_load(i->env__memory,(U64)si0+8U);
l105=si0;
si0=9600U;
l106=si0;
si0=l105;
si1=l106;
si0*=si1;
l107=si0;
si0=l104;
si1=l107;
si0+=si1;
l108=si0;
si0=l9;
si0=i32_load(i->env__memory,(U64)si0+4U);
l109=si0;
si0=3U;
l110=si0;
si0=l109;
si1=l110;
si0<<=(si1&31);
l111=si0;
si0=l108;
si1=l111;
si0+=si1;
l112=si0;
si0=l112;
sd0=f64_load(i->env__memory,(U64)si0);
l113=sd0;
sd0=l113;
sd1=l103;
sd0+=sd1;
l114=sd0;
si0=l112;
sd1=l114;
f64_store(i->env__memory,(U64)si0,sd1);
si0=l9;
si0=i32_load(i->env__memory,(U64)si0+4U);
l115=si0;
si0=1U;
l116=si0;
si0=l115;
si1=l116;
si0+=si1;
l117=si0;
si0=l9;
si1=l117;
i32_store(i->env__memory,(U64)si0+4U,si1);
goto L8;
}
UNREACHABLE;
L7:;
si0=l9;
si0=i32_load(i->env__memory,(U64)si0);
l118=si0;
si0=1U;
l119=si0;
si0=l118;
si1=l119;
si0+=si1;
l120=si0;
si0=l9;
si1=l120;
i32_store(i->env__memory,(U64)si0,si1);
goto L6;
}
UNREACHABLE;
L5:;
si0=l9;
si0=i32_load(i->env__memory,(U64)si0+8U);
l121=si0;
si0=1U;
l122=si0;
si0=l121;
si1=l122;
si0+=si1;
l123=si0;
si0=l9;
si1=l123;
i32_store(i->env__memory,(U64)si0+8U,si1);
goto L2;
}
UNREACHABLE;
L1:;
goto L0;
L0:;
}

void f9(syr2kInstance*i,U32 l0,U32 l1) {
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
U32 l25=0;
U32 l26=0;
U32 l27=0;
U32 l28=0;
U32 l29=0;
U32 l30=0;
U32 l31=0;
U32 l32=0;
U32 l33=0;
U32 l34=0;
U32 l35=0;
U32 l36=0;
U32 l37=0;
U32 l38=0;
U32 l39=0;
U32 l40=0;
U32 l41=0;
U32 l42=0;
U32 l43=0;
U32 l44=0;
U32 l45=0;
U32 l46=0;
U32 l47=0;
U32 l48=0;
U32 l49=0;
U32 l50=0;
U32 l51=0;
U32 l52=0;
U32 l53=0;
U32 l54=0;
U32 l55=0;
U32 l56=0;
U32 l57=0;
U32 l58=0;
F64 l59=0;
U32 l60=0;
U32 l61=0;
U32 l62=0;
U32 l63=0;
U32 l64=0;
U32 l65=0;
U32 l66=0;
U32 l67=0;
U32 l68=0;
U32 l69=0;
U32 l70=0;
U32 l71=0;
U32 l72=0;
U32 l73=0;
U32 l74=0;
U32 l75=0;
U32 l76=0;
U32 l77=0;
U32 l78=0;
U32 l79=0;
U32 l80=0;
U32 l81=0;
U32 l82=0;
U32 l83=0;
U32 l84=0;
U32 si0,si1,si2;
F64 sd0,sd1;
si0=(*i->env_____stack_pointer);
l2=si0;
si0=64U;
l3=si0;
si0=l2;
si1=l3;
si0-=si1;
l4=si0;
si0=l4;
(*i->env_____stack_pointer)=si0;
si0=l4;
si1=l0;
i32_store(i->env__memory,(U64)si0+60U,si1);
si0=l4;
si1=l1;
i32_store(i->env__memory,(U64)si0+56U,si1);
si0=(*i->GOTX2Emem__stderr);
l5=si0;
si0=l5;
si0=i32_load(i->env__memory,(U64)si0);
l6=si0;
si0=42U;
l7=si0;
si0=(*i->env_____memory_base);
l8=si0;
si0=l8;
si1=l7;
si0+=si1;
l9=si0;
si0=0U;
l10=si0;
si0=l6;
si1=l9;
si2=l10;
si0=env__fprintf(i,si0,si1,si2);
si0=l5;
si0=i32_load(i->env__memory,(U64)si0);
l11=si0;
si0=15U;
l12=si0;
si0=(*i->env_____memory_base);
l13=si0;
si0=l13;
si1=l12;
si0+=si1;
l14=si0;
si0=l4;
si1=l14;
i32_store(i->env__memory,(U64)si0+32U,si1);
si0=0U;
l15=si0;
si0=l13;
si1=l15;
si0+=si1;
l16=si0;
si0=32U;
l17=si0;
si0=l4;
si1=l17;
si0+=si1;
l18=si0;
si0=l11;
si1=l16;
si2=l18;
si0=env__fprintf(i,si0,si1,si2);
si0=0U;
l19=si0;
si0=l4;
si1=l19;
i32_store(i->env__memory,(U64)si0+52U,si1);
L2:;
{
si0=l4;
si0=i32_load(i->env__memory,(U64)si0+52U);
l20=si0;
si0=l4;
si0=i32_load(i->env__memory,(U64)si0+60U);
l21=si0;
si0=l20;
l22=si0;
si0=l21;
l23=si0;
si0=l22;
si1=l23;
si0=(U32)((I32)si0<(I32)si1);
l24=si0;
si0=1U;
l25=si0;
si0=l24;
si1=l25;
si0&=si1;
l26=si0;
si0=l26;
si0=!(si0);
if(si0){
goto L1;
}
si0=0U;
l27=si0;
si0=l4;
si1=l27;
i32_store(i->env__memory,(U64)si0+48U,si1);
L4:;
{
si0=l4;
si0=i32_load(i->env__memory,(U64)si0+48U);
l28=si0;
si0=l4;
si0=i32_load(i->env__memory,(U64)si0+60U);
l29=si0;
si0=l28;
l30=si0;
si0=l29;
l31=si0;
si0=l30;
si1=l31;
si0=(U32)((I32)si0<(I32)si1);
l32=si0;
si0=1U;
l33=si0;
si0=l32;
si1=l33;
si0&=si1;
l34=si0;
si0=l34;
si0=!(si0);
if(si0){
goto L3;
}
si0=l4;
si0=i32_load(i->env__memory,(U64)si0+52U);
l35=si0;
si0=l4;
si0=i32_load(i->env__memory,(U64)si0+60U);
l36=si0;
si0=l35;
si1=l36;
si0*=si1;
l37=si0;
si0=l4;
si0=i32_load(i->env__memory,(U64)si0+48U);
l38=si0;
si0=l37;
si1=l38;
si0+=si1;
l39=si0;
si0=20U;
l40=si0;
si0=l39;
si1=l40;
si0=I32_REM_S(si0,si1);
l41=si0;
si0=l41;
if(si0){
goto L5;
}
si0=(*i->GOTX2Emem__stderr);
l42=si0;
si0=l42;
si0=i32_load(i->env__memory,(U64)si0);
l43=si0;
si0=86U;
l44=si0;
si0=(*i->env_____memory_base);
l45=si0;
si0=l45;
si1=l44;
si0+=si1;
l46=si0;
si0=0U;
l47=si0;
si0=l43;
si1=l46;
si2=l47;
si0=env__fprintf(i,si0,si1,si2);
L5:;
si0=(*i->GOTX2Emem__stderr);
l48=si0;
si0=l48;
si0=i32_load(i->env__memory,(U64)si0);
l49=si0;
si0=l4;
si0=i32_load(i->env__memory,(U64)si0+56U);
l50=si0;
si0=l4;
si0=i32_load(i->env__memory,(U64)si0+52U);
l51=si0;
si0=9600U;
l52=si0;
si0=l51;
si1=l52;
si0*=si1;
l53=si0;
si0=l50;
si1=l53;
si0+=si1;
l54=si0;
si0=l4;
si0=i32_load(i->env__memory,(U64)si0+48U);
l55=si0;
si0=3U;
l56=si0;
si0=l55;
si1=l56;
si0<<=(si1&31);
l57=si0;
si0=l54;
si1=l57;
si0+=si1;
l58=si0;
si0=l58;
sd0=f64_load(i->env__memory,(U64)si0);
l59=sd0;
si0=l4;
sd1=l59;
f64_store(i->env__memory,(U64)si0,sd1);
si0=17U;
l60=si0;
si0=(*i->env_____memory_base);
l61=si0;
si0=l61;
si1=l60;
si0+=si1;
l62=si0;
si0=l49;
si1=l62;
si2=l4;
si0=env__fprintf(i,si0,si1,si2);
si0=l4;
si0=i32_load(i->env__memory,(U64)si0+48U);
l63=si0;
si0=1U;
l64=si0;
si0=l63;
si1=l64;
si0+=si1;
l65=si0;
si0=l4;
si1=l65;
i32_store(i->env__memory,(U64)si0+48U,si1);
goto L4;
}
UNREACHABLE;
L3:;
si0=l4;
si0=i32_load(i->env__memory,(U64)si0+52U);
l66=si0;
si0=1U;
l67=si0;
si0=l66;
si1=l67;
si0+=si1;
l68=si0;
si0=l4;
si1=l68;
i32_store(i->env__memory,(U64)si0+52U,si1);
goto L2;
}
UNREACHABLE;
L1:;
si0=(*i->GOTX2Emem__stderr);
l69=si0;
si0=l69;
si0=i32_load(i->env__memory,(U64)si0);
l70=si0;
si0=15U;
l71=si0;
si0=(*i->env_____memory_base);
l72=si0;
si0=l72;
si1=l71;
si0+=si1;
l73=si0;
si0=l4;
si1=l73;
i32_store(i->env__memory,(U64)si0+16U,si1);
si0=25U;
l74=si0;
si0=l72;
si1=l74;
si0+=si1;
l75=si0;
si0=16U;
l76=si0;
si0=l4;
si1=l76;
si0+=si1;
l77=si0;
si0=l70;
si1=l75;
si2=l77;
si0=env__fprintf(i,si0,si1,si2);
si0=l69;
si0=i32_load(i->env__memory,(U64)si0);
l78=si0;
si0=65U;
l79=si0;
si0=(*i->env_____memory_base);
l80=si0;
si0=l80;
si1=l79;
si0+=si1;
l81=si0;
si0=0U;
l82=si0;
si0=l78;
si1=l81;
si2=l82;
si0=env__fprintf(i,si0,si1,si2);
si0=64U;
l83=si0;
si0=l4;
si1=l83;
si0+=si1;
l84=si0;
si0=l84;
(*i->env_____stack_pointer)=si0;
goto L0;
L0:;
}

U32 f10(syr2kInstance*i,U64 l0,U32 l1) {
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
0x62,0x65,0x67,0x69,0x6e,0x20,0x64,0x75,0x6d,0x70,0x3a,0x20,0x25,0x73,0x0,0x43,0x0,0x25,0x30,0x2e,0x32,0x6c,0x66,0x20,0x0,0xa,0x65,0x6e,0x64,0x20,0x20,0x20,0x64,0x75,0x6d,0x70,0x3a,0x20,0x25,0x73,0xa,0x0,0x3d,0x3d,0x42,0x45,0x47,0x49,0x4e,0x20,0x44,0x55,0x4d,0x50,0x5f,0x41,0x52,0x52,0x41,0x59,0x53,0x3d,0x3d,0xa,0x0,0x3d,0x3d,0x45,0x4e,0x44,0x20,0x20,0x20,0x44,0x55,0x4d,0x50,0x5f,0x41,0x52,0x52,0x41,0x59,0x53,0x3d,0x3d,0xa,0x0,
};

static void syr2kInitImports(syr2kInstance* i, void* resolve(const char* module, const char* name)) {
if (resolve == NULL) { return; }
i->env__memory=(wasmMemory*)resolve("env", "memory");
i->env_____stack_pointer=(U32*)resolve("env", "__stack_pointer");
i->env_____memory_base=(U32*)resolve("env", "__memory_base");
i->env_____table_base=(U32*)resolve("env", "__table_base");
i->GOTX2Emem__stderr=(U32*)resolve("GOT.mem", "stderr");
}

void syr2k____wasm_call_ctors(syr2kInstance*i){
f4(i);
}

void syr2k____wasm_apply_data_relocs(syr2kInstance*i){
f5(i);
}

U32 syr2k_submain(syr2kInstance*i,U32 l0,U32 l1){
return f6(i,l0,l1);
}

void syr2kInstantiate(syr2kInstance* i, void* resolve(const char* module, const char* name)) {
syr2kInitImports(i, resolve);
}

void syr2kFreeInstance(syr2kInstance* i) {
}

