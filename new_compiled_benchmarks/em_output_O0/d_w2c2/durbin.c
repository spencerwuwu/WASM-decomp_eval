#include "w2c2_base.h"

#include "durbin.h"

void f4(durbinInstance*i) {
L0:;
}

void f5(durbinInstance*i) {
L0:;
}

U32 f6(durbinInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U64 l6=0;
U32 l7=0;
U32 l8=0;
U64 l9=0;
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
U32 si0,si1,si2;
U64 sj0;
si0=(*i->env_____stack_pointer);
l2=si0;
si0=32U;
l3=si0;
si0=l2;
si1=l3;
si0-=si1;
l4=si0;
si0=l4;
(*i->env_____stack_pointer)=si0;
si0=l4;
si1=l0;
i32_store(i->env__memory,(U64)si0+28U,si1);
si0=l4;
si1=l1;
i32_store(i->env__memory,(U64)si0+24U,si1);
si0=2000U;
l5=si0;
si0=l4;
si1=l5;
i32_store(i->env__memory,(U64)si0+20U,si1);
sj0=2000ULL;
l6=sj0;
si0=8U;
l7=si0;
sj0=l6;
si1=l7;
si0=f10(i,sj0,si1);
l8=si0;
si0=l4;
si1=l8;
i32_store(i->env__memory,(U64)si0+16U,si1);
sj0=2000ULL;
l9=sj0;
si0=8U;
l10=si0;
sj0=l9;
si1=l10;
si0=f10(i,sj0,si1);
l11=si0;
si0=l4;
si1=l11;
i32_store(i->env__memory,(U64)si0+12U,si1);
si0=l4;
si0=i32_load(i->env__memory,(U64)si0+20U);
l12=si0;
si0=l4;
si0=i32_load(i->env__memory,(U64)si0+16U);
l13=si0;
si0=l12;
si1=l13;
f7(i,si0,si1);
si0=l4;
si0=i32_load(i->env__memory,(U64)si0+20U);
l14=si0;
si0=l4;
si0=i32_load(i->env__memory,(U64)si0+16U);
l15=si0;
si0=l4;
si0=i32_load(i->env__memory,(U64)si0+12U);
l16=si0;
si0=l14;
si1=l15;
si2=l16;
f8(i,si0,si1,si2);
si0=l4;
si0=i32_load(i->env__memory,(U64)si0+28U);
l17=si0;
si0=42U;
l18=si0;
si0=l17;
l19=si0;
si0=l18;
l20=si0;
si0=l19;
si1=l20;
si0=(U32)((I32)si0>(I32)si1);
l21=si0;
si0=1U;
l22=si0;
si0=l21;
si1=l22;
si0&=si1;
l23=si0;
si0=l23;
si0=!(si0);
if(si0){
goto L1;
}
si0=l4;
si0=i32_load(i->env__memory,(U64)si0+24U);
l24=si0;
si0=l24;
si0=i32_load(i->env__memory,(U64)si0);
l25=si0;
si0=87U;
l26=si0;
si0=(*i->env_____memory_base);
l27=si0;
si0=l27;
si1=l26;
si0+=si1;
l28=si0;
si0=l25;
si1=l28;
si0=env__strcmp(i,si0,si1);
l29=si0;
si0=l29;
if(si0){
goto L1;
}
si0=l4;
si0=i32_load(i->env__memory,(U64)si0+20U);
l30=si0;
si0=l4;
si0=i32_load(i->env__memory,(U64)si0+12U);
l31=si0;
si0=l30;
si1=l31;
f9(i,si0,si1);
L1:;
si0=l4;
si0=i32_load(i->env__memory,(U64)si0+16U);
l32=si0;
si0=l32;
env__free(i,si0);
si0=l4;
si0=i32_load(i->env__memory,(U64)si0+12U);
l33=si0;
si0=l33;
env__free(i,si0);
si0=0U;
l34=si0;
si0=32U;
l35=si0;
si0=l4;
si1=l35;
si0+=si1;
l36=si0;
si0=l36;
(*i->env_____stack_pointer)=si0;
si0=l34;
goto L0;
L0:;
return si0;
}

void f7(durbinInstance*i,U32 l0,U32 l1) {
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
F64 l18=0;
U32 l19=0;
U32 l20=0;
U32 l21=0;
U32 l22=0;
U32 l23=0;
U32 l24=0;
U32 l25=0;
U32 l26=0;
U32 si0,si1;
F64 sd0,sd1;
si0=(*i->env_____stack_pointer);
l2=si0;
si0=16U;
l3=si0;
si0=l2;
si1=l3;
si0-=si1;
l4=si0;
si0=l4;
si1=l0;
i32_store(i->env__memory,(U64)si0+12U,si1);
si0=l4;
si1=l1;
i32_store(i->env__memory,(U64)si0+8U,si1);
si0=0U;
l5=si0;
si0=l4;
si1=l5;
i32_store(i->env__memory,(U64)si0+4U,si1);
L2:;
{
si0=l4;
si0=i32_load(i->env__memory,(U64)si0+4U);
l6=si0;
si0=l4;
si0=i32_load(i->env__memory,(U64)si0+12U);
l7=si0;
si0=l6;
l8=si0;
si0=l7;
l9=si0;
si0=l8;
si1=l9;
si0=(U32)((I32)si0<(I32)si1);
l10=si0;
si0=1U;
l11=si0;
si0=l10;
si1=l11;
si0&=si1;
l12=si0;
si0=l12;
si0=!(si0);
if(si0){
goto L1;
}
si0=l4;
si0=i32_load(i->env__memory,(U64)si0+12U);
l13=si0;
si0=1U;
l14=si0;
si0=l13;
si1=l14;
si0+=si1;
l15=si0;
si0=l4;
si0=i32_load(i->env__memory,(U64)si0+4U);
l16=si0;
si0=l15;
si1=l16;
si0-=si1;
l17=si0;
si0=l17;
sd0=(F64)(I32)(si0);
l18=sd0;
si0=l4;
si0=i32_load(i->env__memory,(U64)si0+8U);
l19=si0;
si0=l4;
si0=i32_load(i->env__memory,(U64)si0+4U);
l20=si0;
si0=3U;
l21=si0;
si0=l20;
si1=l21;
si0<<=(si1&31);
l22=si0;
si0=l19;
si1=l22;
si0+=si1;
l23=si0;
si0=l23;
sd1=l18;
f64_store(i->env__memory,(U64)si0,sd1);
si0=l4;
si0=i32_load(i->env__memory,(U64)si0+4U);
l24=si0;
si0=1U;
l25=si0;
si0=l24;
si1=l25;
si0+=si1;
l26=si0;
si0=l4;
si1=l26;
i32_store(i->env__memory,(U64)si0+4U,si1);
goto L2;
}
UNREACHABLE;
L1:;
goto L0;
L0:;
}

void f8(durbinInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
F64 l7=0;
F64 l8=0;
U32 l9=0;
F64 l10=0;
U32 l11=0;
F64 l12=0;
F64 l13=0;
U32 l14=0;
U32 l15=0;
U32 l16=0;
U32 l17=0;
U32 l18=0;
U32 l19=0;
U32 l20=0;
U32 l21=0;
F64 l22=0;
F64 l23=0;
F64 l24=0;
F64 l25=0;
F64 l26=0;
F64 l27=0;
F64 l28=0;
F64 l29=0;
U32 l30=0;
F64 l31=0;
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
F64 l49=0;
U32 l50=0;
U32 l51=0;
U32 l52=0;
U32 l53=0;
U32 l54=0;
F64 l55=0;
F64 l56=0;
F64 l57=0;
F64 l58=0;
U32 l59=0;
U32 l60=0;
U32 l61=0;
U32 l62=0;
U32 l63=0;
U32 l64=0;
U32 l65=0;
U32 l66=0;
F64 l67=0;
F64 l68=0;
F64 l69=0;
F64 l70=0;
F64 l71=0;
F64 l72=0;
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
F64 l86=0;
F64 l87=0;
U32 l88=0;
U32 l89=0;
U32 l90=0;
U32 l91=0;
U32 l92=0;
U32 l93=0;
U32 l94=0;
U32 l95=0;
U32 l96=0;
F64 l97=0;
F64 l98=0;
F64 l99=0;
U32 l100=0;
U32 l101=0;
U32 l102=0;
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
U32 l118=0;
U32 l119=0;
U32 l120=0;
U32 l121=0;
U32 l122=0;
U32 l123=0;
U32 l124=0;
F64 l125=0;
U32 l126=0;
U32 l127=0;
U32 l128=0;
U32 l129=0;
U32 l130=0;
U32 l131=0;
U32 l132=0;
U32 l133=0;
F64 l134=0;
U32 l135=0;
U32 l136=0;
U32 l137=0;
U32 l138=0;
U32 l139=0;
U32 l140=0;
U32 l141=0;
U32 l142=0;
U32 l143=0;
U32 l144=0;
U32 si0,si1;
F64 sd0,sd1;
si0=(*i->env_____stack_pointer);
l3=si0;
si0=16048U;
l4=si0;
si0=l3;
si1=l4;
si0-=si1;
l5=si0;
si0=l5;
(*i->env_____stack_pointer)=si0;
si0=l5;
si1=l0;
i32_store(i->env__memory,(U64)si0+16044U,si1);
si0=l5;
si1=l1;
i32_store(i->env__memory,(U64)si0+16040U,si1);
si0=l5;
si1=l2;
i32_store(i->env__memory,(U64)si0+16036U,si1);
si0=l5;
si0=i32_load(i->env__memory,(U64)si0+16040U);
l6=si0;
si0=l6;
sd0=f64_load(i->env__memory,(U64)si0);
l7=sd0;
sd0=l7;
sd0=-(sd0);
l8=sd0;
si0=l5;
si0=i32_load(i->env__memory,(U64)si0+16036U);
l9=si0;
si0=l9;
sd1=l8;
f64_store(i->env__memory,(U64)si0,sd1);
sd0=1;
l10=sd0;
si0=l5;
sd1=l10;
f64_store(i->env__memory,(U64)si0+16U,sd1);
si0=l5;
si0=i32_load(i->env__memory,(U64)si0+16040U);
l11=si0;
si0=l11;
sd0=f64_load(i->env__memory,(U64)si0);
l12=sd0;
sd0=l12;
sd0=-(sd0);
l13=sd0;
si0=l5;
sd1=l13;
f64_store(i->env__memory,(U64)si0+24U,sd1);
si0=1U;
l14=si0;
si0=l5;
si1=l14;
i32_store(i->env__memory,(U64)si0,si1);
L2:;
{
si0=l5;
si0=i32_load(i->env__memory,(U64)si0);
l15=si0;
si0=l5;
si0=i32_load(i->env__memory,(U64)si0+16044U);
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
si0=l5;
sd0=f64_load(i->env__memory,(U64)si0+24U);
l22=sd0;
si0=l5;
sd0=f64_load(i->env__memory,(U64)si0+24U);
l23=sd0;
sd0=l22;
sd0=-(sd0);
l24=sd0;
sd0=l24;
sd1=l23;
sd0*=sd1;
l25=sd0;
sd0=1;
l26=sd0;
sd0=l25;
sd1=l26;
sd0+=sd1;
l27=sd0;
si0=l5;
sd0=f64_load(i->env__memory,(U64)si0+16U);
l28=sd0;
sd0=l27;
sd1=l28;
sd0*=sd1;
l29=sd0;
si0=l5;
sd1=l29;
f64_store(i->env__memory,(U64)si0+16U,sd1);
si0=0U;
l30=si0;
si0=l30;
sd0=(F64)(I32)(si0);
l31=sd0;
si0=l5;
sd1=l31;
f64_store(i->env__memory,(U64)si0+8U,sd1);
si0=0U;
l32=si0;
si0=l5;
si1=l32;
i32_store(i->env__memory,(U64)si0+4U,si1);
L4:;
{
si0=l5;
si0=i32_load(i->env__memory,(U64)si0+4U);
l33=si0;
si0=l5;
si0=i32_load(i->env__memory,(U64)si0);
l34=si0;
si0=l33;
l35=si0;
si0=l34;
l36=si0;
si0=l35;
si1=l36;
si0=(U32)((I32)si0<(I32)si1);
l37=si0;
si0=1U;
l38=si0;
si0=l37;
si1=l38;
si0&=si1;
l39=si0;
si0=l39;
si0=!(si0);
if(si0){
goto L3;
}
si0=l5;
si0=i32_load(i->env__memory,(U64)si0+16040U);
l40=si0;
si0=l5;
si0=i32_load(i->env__memory,(U64)si0);
l41=si0;
si0=l5;
si0=i32_load(i->env__memory,(U64)si0+4U);
l42=si0;
si0=l41;
si1=l42;
si0-=si1;
l43=si0;
si0=1U;
l44=si0;
si0=l43;
si1=l44;
si0-=si1;
l45=si0;
si0=3U;
l46=si0;
si0=l45;
si1=l46;
si0<<=(si1&31);
l47=si0;
si0=l40;
si1=l47;
si0+=si1;
l48=si0;
si0=l48;
sd0=f64_load(i->env__memory,(U64)si0);
l49=sd0;
si0=l5;
si0=i32_load(i->env__memory,(U64)si0+16036U);
l50=si0;
si0=l5;
si0=i32_load(i->env__memory,(U64)si0+4U);
l51=si0;
si0=3U;
l52=si0;
si0=l51;
si1=l52;
si0<<=(si1&31);
l53=si0;
si0=l50;
si1=l53;
si0+=si1;
l54=si0;
si0=l54;
sd0=f64_load(i->env__memory,(U64)si0);
l55=sd0;
si0=l5;
sd0=f64_load(i->env__memory,(U64)si0+8U);
l56=sd0;
sd0=l49;
sd1=l55;
sd0*=sd1;
l57=sd0;
sd0=l57;
sd1=l56;
sd0+=sd1;
l58=sd0;
si0=l5;
sd1=l58;
f64_store(i->env__memory,(U64)si0+8U,sd1);
si0=l5;
si0=i32_load(i->env__memory,(U64)si0+4U);
l59=si0;
si0=1U;
l60=si0;
si0=l59;
si1=l60;
si0+=si1;
l61=si0;
si0=l5;
si1=l61;
i32_store(i->env__memory,(U64)si0+4U,si1);
goto L4;
}
UNREACHABLE;
L3:;
si0=l5;
si0=i32_load(i->env__memory,(U64)si0+16040U);
l62=si0;
si0=l5;
si0=i32_load(i->env__memory,(U64)si0);
l63=si0;
si0=3U;
l64=si0;
si0=l63;
si1=l64;
si0<<=(si1&31);
l65=si0;
si0=l62;
si1=l65;
si0+=si1;
l66=si0;
si0=l66;
sd0=f64_load(i->env__memory,(U64)si0);
l67=sd0;
si0=l5;
sd0=f64_load(i->env__memory,(U64)si0+8U);
l68=sd0;
sd0=l67;
sd1=l68;
sd0+=sd1;
l69=sd0;
sd0=l69;
sd0=-(sd0);
l70=sd0;
si0=l5;
sd0=f64_load(i->env__memory,(U64)si0+16U);
l71=sd0;
sd0=l70;
sd1=l71;
sd0/=sd1;
l72=sd0;
si0=l5;
sd1=l72;
f64_store(i->env__memory,(U64)si0+24U,sd1);
si0=0U;
l73=si0;
si0=l5;
si1=l73;
i32_store(i->env__memory,(U64)si0+4U,si1);
L6:;
{
si0=l5;
si0=i32_load(i->env__memory,(U64)si0+4U);
l74=si0;
si0=l5;
si0=i32_load(i->env__memory,(U64)si0);
l75=si0;
si0=l74;
l76=si0;
si0=l75;
l77=si0;
si0=l76;
si1=l77;
si0=(U32)((I32)si0<(I32)si1);
l78=si0;
si0=1U;
l79=si0;
si0=l78;
si1=l79;
si0&=si1;
l80=si0;
si0=l80;
si0=!(si0);
if(si0){
goto L5;
}
si0=l5;
si0=i32_load(i->env__memory,(U64)si0+16036U);
l81=si0;
si0=l5;
si0=i32_load(i->env__memory,(U64)si0+4U);
l82=si0;
si0=3U;
l83=si0;
si0=l82;
si1=l83;
si0<<=(si1&31);
l84=si0;
si0=l81;
si1=l84;
si0+=si1;
l85=si0;
si0=l85;
sd0=f64_load(i->env__memory,(U64)si0);
l86=sd0;
si0=l5;
sd0=f64_load(i->env__memory,(U64)si0+24U);
l87=sd0;
si0=l5;
si0=i32_load(i->env__memory,(U64)si0+16036U);
l88=si0;
si0=l5;
si0=i32_load(i->env__memory,(U64)si0);
l89=si0;
si0=l5;
si0=i32_load(i->env__memory,(U64)si0+4U);
l90=si0;
si0=l89;
si1=l90;
si0-=si1;
l91=si0;
si0=1U;
l92=si0;
si0=l91;
si1=l92;
si0-=si1;
l93=si0;
si0=3U;
l94=si0;
si0=l93;
si1=l94;
si0<<=(si1&31);
l95=si0;
si0=l88;
si1=l95;
si0+=si1;
l96=si0;
si0=l96;
sd0=f64_load(i->env__memory,(U64)si0);
l97=sd0;
sd0=l87;
sd1=l97;
sd0*=sd1;
l98=sd0;
sd0=l98;
sd1=l86;
sd0+=sd1;
l99=sd0;
si0=l5;
si0=i32_load(i->env__memory,(U64)si0+4U);
l100=si0;
si0=32U;
l101=si0;
si0=l5;
si1=l101;
si0+=si1;
l102=si0;
si0=l102;
l103=si0;
si0=3U;
l104=si0;
si0=l100;
si1=l104;
si0<<=(si1&31);
l105=si0;
si0=l103;
si1=l105;
si0+=si1;
l106=si0;
si0=l106;
sd1=l99;
f64_store(i->env__memory,(U64)si0,sd1);
si0=l5;
si0=i32_load(i->env__memory,(U64)si0+4U);
l107=si0;
si0=1U;
l108=si0;
si0=l107;
si1=l108;
si0+=si1;
l109=si0;
si0=l5;
si1=l109;
i32_store(i->env__memory,(U64)si0+4U,si1);
goto L6;
}
UNREACHABLE;
L5:;
si0=0U;
l110=si0;
si0=l5;
si1=l110;
i32_store(i->env__memory,(U64)si0+4U,si1);
L8:;
{
si0=l5;
si0=i32_load(i->env__memory,(U64)si0+4U);
l111=si0;
si0=l5;
si0=i32_load(i->env__memory,(U64)si0);
l112=si0;
si0=l111;
l113=si0;
si0=l112;
l114=si0;
si0=l113;
si1=l114;
si0=(U32)((I32)si0<(I32)si1);
l115=si0;
si0=1U;
l116=si0;
si0=l115;
si1=l116;
si0&=si1;
l117=si0;
si0=l117;
si0=!(si0);
if(si0){
goto L7;
}
si0=l5;
si0=i32_load(i->env__memory,(U64)si0+4U);
l118=si0;
si0=32U;
l119=si0;
si0=l5;
si1=l119;
si0+=si1;
l120=si0;
si0=l120;
l121=si0;
si0=3U;
l122=si0;
si0=l118;
si1=l122;
si0<<=(si1&31);
l123=si0;
si0=l121;
si1=l123;
si0+=si1;
l124=si0;
si0=l124;
sd0=f64_load(i->env__memory,(U64)si0);
l125=sd0;
si0=l5;
si0=i32_load(i->env__memory,(U64)si0+16036U);
l126=si0;
si0=l5;
si0=i32_load(i->env__memory,(U64)si0+4U);
l127=si0;
si0=3U;
l128=si0;
si0=l127;
si1=l128;
si0<<=(si1&31);
l129=si0;
si0=l126;
si1=l129;
si0+=si1;
l130=si0;
si0=l130;
sd1=l125;
f64_store(i->env__memory,(U64)si0,sd1);
si0=l5;
si0=i32_load(i->env__memory,(U64)si0+4U);
l131=si0;
si0=1U;
l132=si0;
si0=l131;
si1=l132;
si0+=si1;
l133=si0;
si0=l5;
si1=l133;
i32_store(i->env__memory,(U64)si0+4U,si1);
goto L8;
}
UNREACHABLE;
L7:;
si0=l5;
sd0=f64_load(i->env__memory,(U64)si0+24U);
l134=sd0;
si0=l5;
si0=i32_load(i->env__memory,(U64)si0+16036U);
l135=si0;
si0=l5;
si0=i32_load(i->env__memory,(U64)si0);
l136=si0;
si0=3U;
l137=si0;
si0=l136;
si1=l137;
si0<<=(si1&31);
l138=si0;
si0=l135;
si1=l138;
si0+=si1;
l139=si0;
si0=l139;
sd1=l134;
f64_store(i->env__memory,(U64)si0,sd1);
si0=l5;
si0=i32_load(i->env__memory,(U64)si0);
l140=si0;
si0=1U;
l141=si0;
si0=l140;
si1=l141;
si0+=si1;
l142=si0;
si0=l5;
si1=l142;
i32_store(i->env__memory,(U64)si0,si1);
goto L2;
}
UNREACHABLE;
L1:;
si0=16048U;
l143=si0;
si0=l5;
si1=l143;
si0+=si1;
l144=si0;
si0=l144;
(*i->env_____stack_pointer)=si0;
goto L0;
L0:;
}

void f9(durbinInstance*i,U32 l0,U32 l1) {
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
F64 l43=0;
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
U32 si0,si1,si2;
F64 sd0,sd1;
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
si0=0U;
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
si0=2U;
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
i32_store(i->env__memory,(U64)si0+36U,si1);
L2:;
{
si0=l4;
si0=i32_load(i->env__memory,(U64)si0+36U);
l20=si0;
si0=l4;
si0=i32_load(i->env__memory,(U64)si0+44U);
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
si0=l4;
si0=i32_load(i->env__memory,(U64)si0+36U);
l27=si0;
si0=20U;
l28=si0;
si0=l27;
si1=l28;
si0=I32_REM_S(si0,si1);
l29=si0;
si0=l29;
if(si0){
goto L3;
}
si0=(*i->GOTX2Emem__stderr);
l30=si0;
si0=l30;
si0=i32_load(i->env__memory,(U64)si0);
l31=si0;
si0=86U;
l32=si0;
si0=(*i->env_____memory_base);
l33=si0;
si0=l33;
si1=l32;
si0+=si1;
l34=si0;
si0=0U;
l35=si0;
si0=l31;
si1=l34;
si2=l35;
si0=env__fprintf(i,si0,si1,si2);
L3:;
si0=(*i->GOTX2Emem__stderr);
l36=si0;
si0=l36;
si0=i32_load(i->env__memory,(U64)si0);
l37=si0;
si0=l4;
si0=i32_load(i->env__memory,(U64)si0+40U);
l38=si0;
si0=l4;
si0=i32_load(i->env__memory,(U64)si0+36U);
l39=si0;
si0=3U;
l40=si0;
si0=l39;
si1=l40;
si0<<=(si1&31);
l41=si0;
si0=l38;
si1=l41;
si0+=si1;
l42=si0;
si0=l42;
sd0=f64_load(i->env__memory,(U64)si0);
l43=sd0;
si0=l4;
sd1=l43;
f64_store(i->env__memory,(U64)si0,sd1);
si0=17U;
l44=si0;
si0=(*i->env_____memory_base);
l45=si0;
si0=l45;
si1=l44;
si0+=si1;
l46=si0;
si0=l37;
si1=l46;
si2=l4;
si0=env__fprintf(i,si0,si1,si2);
si0=l4;
si0=i32_load(i->env__memory,(U64)si0+36U);
l47=si0;
si0=1U;
l48=si0;
si0=l47;
si1=l48;
si0+=si1;
l49=si0;
si0=l4;
si1=l49;
i32_store(i->env__memory,(U64)si0+36U,si1);
goto L2;
}
UNREACHABLE;
L1:;
si0=(*i->GOTX2Emem__stderr);
l50=si0;
si0=l50;
si0=i32_load(i->env__memory,(U64)si0);
l51=si0;
si0=0U;
l52=si0;
si0=(*i->env_____memory_base);
l53=si0;
si0=l53;
si1=l52;
si0+=si1;
l54=si0;
si0=l4;
si1=l54;
i32_store(i->env__memory,(U64)si0+16U,si1);
si0=25U;
l55=si0;
si0=l53;
si1=l55;
si0+=si1;
l56=si0;
si0=16U;
l57=si0;
si0=l4;
si1=l57;
si0+=si1;
l58=si0;
si0=l51;
si1=l56;
si2=l58;
si0=env__fprintf(i,si0,si1,si2);
si0=l50;
si0=i32_load(i->env__memory,(U64)si0);
l59=si0;
si0=65U;
l60=si0;
si0=(*i->env_____memory_base);
l61=si0;
si0=l61;
si1=l60;
si0+=si1;
l62=si0;
si0=0U;
l63=si0;
si0=l59;
si1=l62;
si2=l63;
si0=env__fprintf(i,si0,si1,si2);
si0=48U;
l64=si0;
si0=l4;
si1=l64;
si0+=si1;
l65=si0;
si0=l65;
(*i->env_____stack_pointer)=si0;
goto L0;
L0:;
}

U32 f10(durbinInstance*i,U64 l0,U32 l1) {
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

static void durbinInitImports(durbinInstance* i, void* resolve(const char* module, const char* name)) {
if (resolve == NULL) { return; }
i->env__memory=(wasmMemory*)resolve("env", "memory");
i->env_____stack_pointer=(U32*)resolve("env", "__stack_pointer");
i->env_____memory_base=(U32*)resolve("env", "__memory_base");
i->env_____table_base=(U32*)resolve("env", "__table_base");
i->GOTX2Emem__stderr=(U32*)resolve("GOT.mem", "stderr");
}

void durbin____wasm_call_ctors(durbinInstance*i){
f4(i);
}

void durbin____wasm_apply_data_relocs(durbinInstance*i){
f5(i);
}

U32 durbin_submain(durbinInstance*i,U32 l0,U32 l1){
return f6(i,l0,l1);
}

void durbinInstantiate(durbinInstance* i, void* resolve(const char* module, const char* name)) {
durbinInitImports(i, resolve);
}

void durbinFreeInstance(durbinInstance* i) {
}

