#include "w2c2_base.h"

#include "lu.h"

void f4(luInstance*i) {
L0:;
}

void f5(luInstance*i) {
L0:;
}

void f6(luInstance*i,U32 l0,U32 l1) {
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
F64 l38=0;
U32 l39=0;
U32 l40=0;
U32 l41=0;
U32 l42=0;
U32 l43=0;
U32 l44=0;
U32 l45=0;
U32 l46=0;
U32 l47=0;
F64 l48=0;
U32 l49=0;
U32 l50=0;
U32 l51=0;
U32 l52=0;
U32 l53=0;
U32 l54=0;
U32 l55=0;
U32 l56=0;
U32 l57=0;
F64 l58=0;
F64 l59=0;
F64 l60=0;
F64 l61=0;
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
F64 l74=0;
U32 l75=0;
U32 l76=0;
U32 l77=0;
U32 l78=0;
U32 l79=0;
U32 l80=0;
U32 l81=0;
U32 l82=0;
U32 l83=0;
F64 l84=0;
F64 l85=0;
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
U32 l99=0;
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
F64 l124=0;
U32 l125=0;
U32 l126=0;
U32 l127=0;
U32 l128=0;
U32 l129=0;
U32 l130=0;
U32 l131=0;
U32 l132=0;
U32 l133=0;
F64 l134=0;
F64 l135=0;
F64 l136=0;
F64 l137=0;
U32 l138=0;
U32 l139=0;
U32 l140=0;
U32 l141=0;
U32 l142=0;
U32 l143=0;
U32 l144=0;
U32 l145=0;
U32 l146=0;
U32 si0,si1;
F64 sd0,sd1;
si0=(*i->env_____stack_pointer);
l2=si0;
si0=32U;
l3=si0;
si0=l2;
si1=l3;
si0-=si1;
l4=si0;
si0=l4;
si1=l0;
i32_store(i->env__memory,(U64)si0+28U,si1);
si0=l4;
si1=l1;
i32_store(i->env__memory,(U64)si0+24U,si1);
si0=0U;
l5=si0;
si0=l4;
si1=l5;
i32_store(i->env__memory,(U64)si0+20U,si1);
L2:;
{
si0=l4;
si0=i32_load(i->env__memory,(U64)si0+20U);
l6=si0;
si0=l4;
si0=i32_load(i->env__memory,(U64)si0+28U);
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
si0=0U;
l13=si0;
si0=l4;
si1=l13;
i32_store(i->env__memory,(U64)si0+16U,si1);
L4:;
{
si0=l4;
si0=i32_load(i->env__memory,(U64)si0+16U);
l14=si0;
si0=l4;
si0=i32_load(i->env__memory,(U64)si0+20U);
l15=si0;
si0=l14;
l16=si0;
si0=l15;
l17=si0;
si0=l16;
si1=l17;
si0=(U32)((I32)si0<(I32)si1);
l18=si0;
si0=1U;
l19=si0;
si0=l18;
si1=l19;
si0&=si1;
l20=si0;
si0=l20;
si0=!(si0);
if(si0){
goto L3;
}
si0=0U;
l21=si0;
si0=l4;
si1=l21;
i32_store(i->env__memory,(U64)si0+12U,si1);
L6:;
{
si0=l4;
si0=i32_load(i->env__memory,(U64)si0+12U);
l22=si0;
si0=l4;
si0=i32_load(i->env__memory,(U64)si0+16U);
l23=si0;
si0=l22;
l24=si0;
si0=l23;
l25=si0;
si0=l24;
si1=l25;
si0=(U32)((I32)si0<(I32)si1);
l26=si0;
si0=1U;
l27=si0;
si0=l26;
si1=l27;
si0&=si1;
l28=si0;
si0=l28;
si0=!(si0);
if(si0){
goto L5;
}
si0=l4;
si0=i32_load(i->env__memory,(U64)si0+24U);
l29=si0;
si0=l4;
si0=i32_load(i->env__memory,(U64)si0+20U);
l30=si0;
si0=16000U;
l31=si0;
si0=l30;
si1=l31;
si0*=si1;
l32=si0;
si0=l29;
si1=l32;
si0+=si1;
l33=si0;
si0=l4;
si0=i32_load(i->env__memory,(U64)si0+12U);
l34=si0;
si0=3U;
l35=si0;
si0=l34;
si1=l35;
si0<<=(si1&31);
l36=si0;
si0=l33;
si1=l36;
si0+=si1;
l37=si0;
si0=l37;
sd0=f64_load(i->env__memory,(U64)si0);
l38=sd0;
si0=l4;
si0=i32_load(i->env__memory,(U64)si0+24U);
l39=si0;
si0=l4;
si0=i32_load(i->env__memory,(U64)si0+12U);
l40=si0;
si0=16000U;
l41=si0;
si0=l40;
si1=l41;
si0*=si1;
l42=si0;
si0=l39;
si1=l42;
si0+=si1;
l43=si0;
si0=l4;
si0=i32_load(i->env__memory,(U64)si0+16U);
l44=si0;
si0=3U;
l45=si0;
si0=l44;
si1=l45;
si0<<=(si1&31);
l46=si0;
si0=l43;
si1=l46;
si0+=si1;
l47=si0;
si0=l47;
sd0=f64_load(i->env__memory,(U64)si0);
l48=sd0;
si0=l4;
si0=i32_load(i->env__memory,(U64)si0+24U);
l49=si0;
si0=l4;
si0=i32_load(i->env__memory,(U64)si0+20U);
l50=si0;
si0=16000U;
l51=si0;
si0=l50;
si1=l51;
si0*=si1;
l52=si0;
si0=l49;
si1=l52;
si0+=si1;
l53=si0;
si0=l4;
si0=i32_load(i->env__memory,(U64)si0+16U);
l54=si0;
si0=3U;
l55=si0;
si0=l54;
si1=l55;
si0<<=(si1&31);
l56=si0;
si0=l53;
si1=l56;
si0+=si1;
l57=si0;
si0=l57;
sd0=f64_load(i->env__memory,(U64)si0);
l58=sd0;
sd0=l38;
sd0=-(sd0);
l59=sd0;
sd0=l59;
sd1=l48;
sd0*=sd1;
l60=sd0;
sd0=l60;
sd1=l58;
sd0+=sd1;
l61=sd0;
si0=l57;
sd1=l61;
f64_store(i->env__memory,(U64)si0,sd1);
si0=l4;
si0=i32_load(i->env__memory,(U64)si0+12U);
l62=si0;
si0=1U;
l63=si0;
si0=l62;
si1=l63;
si0+=si1;
l64=si0;
si0=l4;
si1=l64;
i32_store(i->env__memory,(U64)si0+12U,si1);
goto L6;
}
UNREACHABLE;
L5:;
si0=l4;
si0=i32_load(i->env__memory,(U64)si0+24U);
l65=si0;
si0=l4;
si0=i32_load(i->env__memory,(U64)si0+16U);
l66=si0;
si0=16000U;
l67=si0;
si0=l66;
si1=l67;
si0*=si1;
l68=si0;
si0=l65;
si1=l68;
si0+=si1;
l69=si0;
si0=l4;
si0=i32_load(i->env__memory,(U64)si0+16U);
l70=si0;
si0=3U;
l71=si0;
si0=l70;
si1=l71;
si0<<=(si1&31);
l72=si0;
si0=l69;
si1=l72;
si0+=si1;
l73=si0;
si0=l73;
sd0=f64_load(i->env__memory,(U64)si0);
l74=sd0;
si0=l4;
si0=i32_load(i->env__memory,(U64)si0+24U);
l75=si0;
si0=l4;
si0=i32_load(i->env__memory,(U64)si0+20U);
l76=si0;
si0=16000U;
l77=si0;
si0=l76;
si1=l77;
si0*=si1;
l78=si0;
si0=l75;
si1=l78;
si0+=si1;
l79=si0;
si0=l4;
si0=i32_load(i->env__memory,(U64)si0+16U);
l80=si0;
si0=3U;
l81=si0;
si0=l80;
si1=l81;
si0<<=(si1&31);
l82=si0;
si0=l79;
si1=l82;
si0+=si1;
l83=si0;
si0=l83;
sd0=f64_load(i->env__memory,(U64)si0);
l84=sd0;
sd0=l84;
sd1=l74;
sd0/=sd1;
l85=sd0;
si0=l83;
sd1=l85;
f64_store(i->env__memory,(U64)si0,sd1);
si0=l4;
si0=i32_load(i->env__memory,(U64)si0+16U);
l86=si0;
si0=1U;
l87=si0;
si0=l86;
si1=l87;
si0+=si1;
l88=si0;
si0=l4;
si1=l88;
i32_store(i->env__memory,(U64)si0+16U,si1);
goto L4;
}
UNREACHABLE;
L3:;
si0=l4;
si0=i32_load(i->env__memory,(U64)si0+20U);
l89=si0;
si0=l4;
si1=l89;
i32_store(i->env__memory,(U64)si0+16U,si1);
L8:;
{
si0=l4;
si0=i32_load(i->env__memory,(U64)si0+16U);
l90=si0;
si0=l4;
si0=i32_load(i->env__memory,(U64)si0+28U);
l91=si0;
si0=l90;
l92=si0;
si0=l91;
l93=si0;
si0=l92;
si1=l93;
si0=(U32)((I32)si0<(I32)si1);
l94=si0;
si0=1U;
l95=si0;
si0=l94;
si1=l95;
si0&=si1;
l96=si0;
si0=l96;
si0=!(si0);
if(si0){
goto L7;
}
si0=0U;
l97=si0;
si0=l4;
si1=l97;
i32_store(i->env__memory,(U64)si0+12U,si1);
L10:;
{
si0=l4;
si0=i32_load(i->env__memory,(U64)si0+12U);
l98=si0;
si0=l4;
si0=i32_load(i->env__memory,(U64)si0+20U);
l99=si0;
si0=l98;
l100=si0;
si0=l99;
l101=si0;
si0=l100;
si1=l101;
si0=(U32)((I32)si0<(I32)si1);
l102=si0;
si0=1U;
l103=si0;
si0=l102;
si1=l103;
si0&=si1;
l104=si0;
si0=l104;
si0=!(si0);
if(si0){
goto L9;
}
si0=l4;
si0=i32_load(i->env__memory,(U64)si0+24U);
l105=si0;
si0=l4;
si0=i32_load(i->env__memory,(U64)si0+20U);
l106=si0;
si0=16000U;
l107=si0;
si0=l106;
si1=l107;
si0*=si1;
l108=si0;
si0=l105;
si1=l108;
si0+=si1;
l109=si0;
si0=l4;
si0=i32_load(i->env__memory,(U64)si0+12U);
l110=si0;
si0=3U;
l111=si0;
si0=l110;
si1=l111;
si0<<=(si1&31);
l112=si0;
si0=l109;
si1=l112;
si0+=si1;
l113=si0;
si0=l113;
sd0=f64_load(i->env__memory,(U64)si0);
l114=sd0;
si0=l4;
si0=i32_load(i->env__memory,(U64)si0+24U);
l115=si0;
si0=l4;
si0=i32_load(i->env__memory,(U64)si0+12U);
l116=si0;
si0=16000U;
l117=si0;
si0=l116;
si1=l117;
si0*=si1;
l118=si0;
si0=l115;
si1=l118;
si0+=si1;
l119=si0;
si0=l4;
si0=i32_load(i->env__memory,(U64)si0+16U);
l120=si0;
si0=3U;
l121=si0;
si0=l120;
si1=l121;
si0<<=(si1&31);
l122=si0;
si0=l119;
si1=l122;
si0+=si1;
l123=si0;
si0=l123;
sd0=f64_load(i->env__memory,(U64)si0);
l124=sd0;
si0=l4;
si0=i32_load(i->env__memory,(U64)si0+24U);
l125=si0;
si0=l4;
si0=i32_load(i->env__memory,(U64)si0+20U);
l126=si0;
si0=16000U;
l127=si0;
si0=l126;
si1=l127;
si0*=si1;
l128=si0;
si0=l125;
si1=l128;
si0+=si1;
l129=si0;
si0=l4;
si0=i32_load(i->env__memory,(U64)si0+16U);
l130=si0;
si0=3U;
l131=si0;
si0=l130;
si1=l131;
si0<<=(si1&31);
l132=si0;
si0=l129;
si1=l132;
si0+=si1;
l133=si0;
si0=l133;
sd0=f64_load(i->env__memory,(U64)si0);
l134=sd0;
sd0=l114;
sd0=-(sd0);
l135=sd0;
sd0=l135;
sd1=l124;
sd0*=sd1;
l136=sd0;
sd0=l136;
sd1=l134;
sd0+=sd1;
l137=sd0;
si0=l133;
sd1=l137;
f64_store(i->env__memory,(U64)si0,sd1);
si0=l4;
si0=i32_load(i->env__memory,(U64)si0+12U);
l138=si0;
si0=1U;
l139=si0;
si0=l138;
si1=l139;
si0+=si1;
l140=si0;
si0=l4;
si1=l140;
i32_store(i->env__memory,(U64)si0+12U,si1);
goto L10;
}
UNREACHABLE;
L9:;
si0=l4;
si0=i32_load(i->env__memory,(U64)si0+16U);
l141=si0;
si0=1U;
l142=si0;
si0=l141;
si1=l142;
si0+=si1;
l143=si0;
si0=l4;
si1=l143;
i32_store(i->env__memory,(U64)si0+16U,si1);
goto L8;
}
UNREACHABLE;
L7:;
si0=l4;
si0=i32_load(i->env__memory,(U64)si0+20U);
l144=si0;
si0=1U;
l145=si0;
si0=l144;
si1=l145;
si0+=si1;
l146=si0;
si0=l4;
si1=l146;
i32_store(i->env__memory,(U64)si0+20U,si1);
goto L2;
}
UNREACHABLE;
L1:;
goto L0;
L0:;
}

U32 f7(luInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U64 l6=0;
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
U32 si0,si1;
U64 sj0;
si0=(*i->env_____stack_pointer);
l2=si0;
si0=16U;
l3=si0;
si0=l2;
si1=l3;
si0-=si1;
l4=si0;
si0=l4;
(*i->env_____stack_pointer)=si0;
si0=l4;
si1=l0;
i32_store(i->env__memory,(U64)si0+12U,si1);
si0=l4;
si1=l1;
i32_store(i->env__memory,(U64)si0+8U,si1);
si0=2000U;
l5=si0;
si0=l4;
si1=l5;
i32_store(i->env__memory,(U64)si0+4U,si1);
sj0=4000000ULL;
l6=sj0;
si0=8U;
l7=si0;
sj0=l6;
si1=l7;
si0=f10(i,sj0,si1);
l8=si0;
si0=l4;
si1=l8;
i32_store(i->env__memory,(U64)si0,si1);
si0=l4;
si0=i32_load(i->env__memory,(U64)si0+4U);
l9=si0;
si0=l4;
si0=i32_load(i->env__memory,(U64)si0);
l10=si0;
si0=l9;
si1=l10;
f8(i,si0,si1);
si0=l4;
si0=i32_load(i->env__memory,(U64)si0+4U);
l11=si0;
si0=l4;
si0=i32_load(i->env__memory,(U64)si0);
l12=si0;
si0=l11;
si1=l12;
f6(i,si0,si1);
si0=l4;
si0=i32_load(i->env__memory,(U64)si0+12U);
l13=si0;
si0=42U;
l14=si0;
si0=l13;
l15=si0;
si0=l14;
l16=si0;
si0=l15;
si1=l16;
si0=(U32)((I32)si0>(I32)si1);
l17=si0;
si0=1U;
l18=si0;
si0=l17;
si1=l18;
si0&=si1;
l19=si0;
si0=l19;
si0=!(si0);
if(si0){
goto L1;
}
si0=l4;
si0=i32_load(i->env__memory,(U64)si0+8U);
l20=si0;
si0=l20;
si0=i32_load(i->env__memory,(U64)si0);
l21=si0;
si0=87U;
l22=si0;
si0=(*i->env_____memory_base);
l23=si0;
si0=l23;
si1=l22;
si0+=si1;
l24=si0;
si0=l21;
si1=l24;
si0=env__strcmp(i,si0,si1);
l25=si0;
si0=l25;
if(si0){
goto L1;
}
si0=l4;
si0=i32_load(i->env__memory,(U64)si0+4U);
l26=si0;
si0=l4;
si0=i32_load(i->env__memory,(U64)si0);
l27=si0;
si0=l26;
si1=l27;
f9(i,si0,si1);
L1:;
si0=l4;
si0=i32_load(i->env__memory,(U64)si0);
l28=si0;
si0=l28;
env__free(i,si0);
si0=0U;
l29=si0;
si0=16U;
l30=si0;
si0=l4;
si1=l30;
si0+=si1;
l31=si0;
si0=l31;
(*i->env_____stack_pointer)=si0;
si0=l29;
goto L0;
L0:;
return si0;
}

void f8(luInstance*i,U32 l0,U32 l1) {
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
F64 l26=0;
U32 l27=0;
F64 l28=0;
F64 l29=0;
F64 l30=0;
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
F64 l64=0;
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
F64 l77=0;
U32 l78=0;
U32 l79=0;
U32 l80=0;
U64 l81=0;
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
U32 l99=0;
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
F64 l110=0;
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
U32 l125=0;
U32 l126=0;
U32 l127=0;
U32 l128=0;
U32 l129=0;
U32 l130=0;
U32 l131=0;
U32 l132=0;
U32 l133=0;
U32 l134=0;
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
U32 l145=0;
U32 l146=0;
U32 l147=0;
U32 l148=0;
U32 l149=0;
F64 l150=0;
U32 l151=0;
U32 l152=0;
U32 l153=0;
U32 l154=0;
U32 l155=0;
U32 l156=0;
U32 l157=0;
U32 l158=0;
U32 l159=0;
F64 l160=0;
U32 l161=0;
U32 l162=0;
U32 l163=0;
U32 l164=0;
U32 l165=0;
U32 l166=0;
U32 l167=0;
U32 l168=0;
U32 l169=0;
F64 l170=0;
F64 l171=0;
F64 l172=0;
U32 l173=0;
U32 l174=0;
U32 l175=0;
U32 l176=0;
U32 l177=0;
U32 l178=0;
U32 l179=0;
U32 l180=0;
U32 l181=0;
U32 l182=0;
U32 l183=0;
U32 l184=0;
U32 l185=0;
U32 l186=0;
U32 l187=0;
U32 l188=0;
U32 l189=0;
U32 l190=0;
U32 l191=0;
U32 l192=0;
U32 l193=0;
U32 l194=0;
U32 l195=0;
U32 l196=0;
U32 l197=0;
U32 l198=0;
U32 l199=0;
U32 l200=0;
U32 l201=0;
U32 l202=0;
U32 l203=0;
U32 l204=0;
U32 l205=0;
U32 l206=0;
F64 l207=0;
U32 l208=0;
U32 l209=0;
U32 l210=0;
U32 l211=0;
U32 l212=0;
U32 l213=0;
U32 l214=0;
U32 l215=0;
U32 l216=0;
U32 l217=0;
U32 l218=0;
U32 l219=0;
U32 l220=0;
U32 l221=0;
U32 l222=0;
U32 l223=0;
U32 l224=0;
U32 l225=0;
U32 si0,si1;
U64 sj0;
F64 sd0,sd1;
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
si0=0U;
l5=si0;
si0=l4;
si1=l5;
i32_store(i->env__memory,(U64)si0+20U,si1);
L2:;
{
si0=l4;
si0=i32_load(i->env__memory,(U64)si0+20U);
l6=si0;
si0=l4;
si0=i32_load(i->env__memory,(U64)si0+28U);
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
si0=0U;
l13=si0;
si0=l4;
si1=l13;
i32_store(i->env__memory,(U64)si0+16U,si1);
L4:;
{
si0=l4;
si0=i32_load(i->env__memory,(U64)si0+16U);
l14=si0;
si0=l4;
si0=i32_load(i->env__memory,(U64)si0+20U);
l15=si0;
si0=l14;
l16=si0;
si0=l15;
l17=si0;
si0=l16;
si1=l17;
si0=(U32)((I32)si0<=(I32)si1);
l18=si0;
si0=1U;
l19=si0;
si0=l18;
si1=l19;
si0&=si1;
l20=si0;
si0=l20;
si0=!(si0);
if(si0){
goto L3;
}
si0=l4;
si0=i32_load(i->env__memory,(U64)si0+16U);
l21=si0;
si0=0U;
l22=si0;
si0=l22;
si1=l21;
si0-=si1;
l23=si0;
si0=l4;
si0=i32_load(i->env__memory,(U64)si0+28U);
l24=si0;
si0=l23;
si1=l24;
si0=I32_REM_S(si0,si1);
l25=si0;
si0=l25;
sd0=(F64)(I32)(si0);
l26=sd0;
si0=l4;
si0=i32_load(i->env__memory,(U64)si0+28U);
l27=si0;
si0=l27;
sd0=(F64)(I32)(si0);
l28=sd0;
sd0=l26;
sd1=l28;
sd0/=sd1;
l29=sd0;
sd0=1;
l30=sd0;
sd0=l29;
sd1=l30;
sd0+=sd1;
l31=sd0;
si0=l4;
si0=i32_load(i->env__memory,(U64)si0+24U);
l32=si0;
si0=l4;
si0=i32_load(i->env__memory,(U64)si0+20U);
l33=si0;
si0=16000U;
l34=si0;
si0=l33;
si1=l34;
si0*=si1;
l35=si0;
si0=l32;
si1=l35;
si0+=si1;
l36=si0;
si0=l4;
si0=i32_load(i->env__memory,(U64)si0+16U);
l37=si0;
si0=3U;
l38=si0;
si0=l37;
si1=l38;
si0<<=(si1&31);
l39=si0;
si0=l36;
si1=l39;
si0+=si1;
l40=si0;
si0=l40;
sd1=l31;
f64_store(i->env__memory,(U64)si0,sd1);
si0=l4;
si0=i32_load(i->env__memory,(U64)si0+16U);
l41=si0;
si0=1U;
l42=si0;
si0=l41;
si1=l42;
si0+=si1;
l43=si0;
si0=l4;
si1=l43;
i32_store(i->env__memory,(U64)si0+16U,si1);
goto L4;
}
UNREACHABLE;
L3:;
si0=l4;
si0=i32_load(i->env__memory,(U64)si0+20U);
l44=si0;
si0=1U;
l45=si0;
si0=l44;
si1=l45;
si0+=si1;
l46=si0;
si0=l4;
si1=l46;
i32_store(i->env__memory,(U64)si0+16U,si1);
L6:;
{
si0=l4;
si0=i32_load(i->env__memory,(U64)si0+16U);
l47=si0;
si0=l4;
si0=i32_load(i->env__memory,(U64)si0+28U);
l48=si0;
si0=l47;
l49=si0;
si0=l48;
l50=si0;
si0=l49;
si1=l50;
si0=(U32)((I32)si0<(I32)si1);
l51=si0;
si0=1U;
l52=si0;
si0=l51;
si1=l52;
si0&=si1;
l53=si0;
si0=l53;
si0=!(si0);
if(si0){
goto L5;
}
si0=l4;
si0=i32_load(i->env__memory,(U64)si0+24U);
l54=si0;
si0=l4;
si0=i32_load(i->env__memory,(U64)si0+20U);
l55=si0;
si0=16000U;
l56=si0;
si0=l55;
si1=l56;
si0*=si1;
l57=si0;
si0=l54;
si1=l57;
si0+=si1;
l58=si0;
si0=l4;
si0=i32_load(i->env__memory,(U64)si0+16U);
l59=si0;
si0=3U;
l60=si0;
si0=l59;
si1=l60;
si0<<=(si1&31);
l61=si0;
si0=l58;
si1=l61;
si0+=si1;
l62=si0;
si0=0U;
l63=si0;
si0=l63;
sd0=(F64)(I32)(si0);
l64=sd0;
si0=l62;
sd1=l64;
f64_store(i->env__memory,(U64)si0,sd1);
si0=l4;
si0=i32_load(i->env__memory,(U64)si0+16U);
l65=si0;
si0=1U;
l66=si0;
si0=l65;
si1=l66;
si0+=si1;
l67=si0;
si0=l4;
si1=l67;
i32_store(i->env__memory,(U64)si0+16U,si1);
goto L6;
}
UNREACHABLE;
L5:;
si0=l4;
si0=i32_load(i->env__memory,(U64)si0+24U);
l68=si0;
si0=l4;
si0=i32_load(i->env__memory,(U64)si0+20U);
l69=si0;
si0=16000U;
l70=si0;
si0=l69;
si1=l70;
si0*=si1;
l71=si0;
si0=l68;
si1=l71;
si0+=si1;
l72=si0;
si0=l4;
si0=i32_load(i->env__memory,(U64)si0+20U);
l73=si0;
si0=3U;
l74=si0;
si0=l73;
si1=l74;
si0<<=(si1&31);
l75=si0;
si0=l72;
si1=l75;
si0+=si1;
l76=si0;
sd0=1;
l77=sd0;
si0=l76;
sd1=l77;
f64_store(i->env__memory,(U64)si0,sd1);
si0=l4;
si0=i32_load(i->env__memory,(U64)si0+20U);
l78=si0;
si0=1U;
l79=si0;
si0=l78;
si1=l79;
si0+=si1;
l80=si0;
si0=l4;
si1=l80;
i32_store(i->env__memory,(U64)si0+20U,si1);
goto L2;
}
UNREACHABLE;
L1:;
sj0=4000000ULL;
l81=sj0;
si0=8U;
l82=si0;
sj0=l81;
si1=l82;
si0=f10(i,sj0,si1);
l83=si0;
si0=l4;
si1=l83;
i32_store(i->env__memory,(U64)si0,si1);
si0=0U;
l84=si0;
si0=l4;
si1=l84;
i32_store(i->env__memory,(U64)si0+12U,si1);
L8:;
{
si0=l4;
si0=i32_load(i->env__memory,(U64)si0+12U);
l85=si0;
si0=l4;
si0=i32_load(i->env__memory,(U64)si0+28U);
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
si0=0U;
l92=si0;
si0=l4;
si1=l92;
i32_store(i->env__memory,(U64)si0+8U,si1);
L10:;
{
si0=l4;
si0=i32_load(i->env__memory,(U64)si0+8U);
l93=si0;
si0=l4;
si0=i32_load(i->env__memory,(U64)si0+28U);
l94=si0;
si0=l93;
l95=si0;
si0=l94;
l96=si0;
si0=l95;
si1=l96;
si0=(U32)((I32)si0<(I32)si1);
l97=si0;
si0=1U;
l98=si0;
si0=l97;
si1=l98;
si0&=si1;
l99=si0;
si0=l99;
si0=!(si0);
if(si0){
goto L9;
}
si0=l4;
si0=i32_load(i->env__memory,(U64)si0);
l100=si0;
si0=l4;
si0=i32_load(i->env__memory,(U64)si0+12U);
l101=si0;
si0=16000U;
l102=si0;
si0=l101;
si1=l102;
si0*=si1;
l103=si0;
si0=l100;
si1=l103;
si0+=si1;
l104=si0;
si0=l4;
si0=i32_load(i->env__memory,(U64)si0+8U);
l105=si0;
si0=3U;
l106=si0;
si0=l105;
si1=l106;
si0<<=(si1&31);
l107=si0;
si0=l104;
si1=l107;
si0+=si1;
l108=si0;
si0=0U;
l109=si0;
si0=l109;
sd0=(F64)(I32)(si0);
l110=sd0;
si0=l108;
sd1=l110;
f64_store(i->env__memory,(U64)si0,sd1);
si0=l4;
si0=i32_load(i->env__memory,(U64)si0+8U);
l111=si0;
si0=1U;
l112=si0;
si0=l111;
si1=l112;
si0+=si1;
l113=si0;
si0=l4;
si1=l113;
i32_store(i->env__memory,(U64)si0+8U,si1);
goto L10;
}
UNREACHABLE;
L9:;
si0=l4;
si0=i32_load(i->env__memory,(U64)si0+12U);
l114=si0;
si0=1U;
l115=si0;
si0=l114;
si1=l115;
si0+=si1;
l116=si0;
si0=l4;
si1=l116;
i32_store(i->env__memory,(U64)si0+12U,si1);
goto L8;
}
UNREACHABLE;
L7:;
si0=0U;
l117=si0;
si0=l4;
si1=l117;
i32_store(i->env__memory,(U64)si0+4U,si1);
L12:;
{
si0=l4;
si0=i32_load(i->env__memory,(U64)si0+4U);
l118=si0;
si0=l4;
si0=i32_load(i->env__memory,(U64)si0+28U);
l119=si0;
si0=l118;
l120=si0;
si0=l119;
l121=si0;
si0=l120;
si1=l121;
si0=(U32)((I32)si0<(I32)si1);
l122=si0;
si0=1U;
l123=si0;
si0=l122;
si1=l123;
si0&=si1;
l124=si0;
si0=l124;
si0=!(si0);
if(si0){
goto L11;
}
si0=0U;
l125=si0;
si0=l4;
si1=l125;
i32_store(i->env__memory,(U64)si0+12U,si1);
L14:;
{
si0=l4;
si0=i32_load(i->env__memory,(U64)si0+12U);
l126=si0;
si0=l4;
si0=i32_load(i->env__memory,(U64)si0+28U);
l127=si0;
si0=l126;
l128=si0;
si0=l127;
l129=si0;
si0=l128;
si1=l129;
si0=(U32)((I32)si0<(I32)si1);
l130=si0;
si0=1U;
l131=si0;
si0=l130;
si1=l131;
si0&=si1;
l132=si0;
si0=l132;
si0=!(si0);
if(si0){
goto L13;
}
si0=0U;
l133=si0;
si0=l4;
si1=l133;
i32_store(i->env__memory,(U64)si0+8U,si1);
L16:;
{
si0=l4;
si0=i32_load(i->env__memory,(U64)si0+8U);
l134=si0;
si0=l4;
si0=i32_load(i->env__memory,(U64)si0+28U);
l135=si0;
si0=l134;
l136=si0;
si0=l135;
l137=si0;
si0=l136;
si1=l137;
si0=(U32)((I32)si0<(I32)si1);
l138=si0;
si0=1U;
l139=si0;
si0=l138;
si1=l139;
si0&=si1;
l140=si0;
si0=l140;
si0=!(si0);
if(si0){
goto L15;
}
si0=l4;
si0=i32_load(i->env__memory,(U64)si0+24U);
l141=si0;
si0=l4;
si0=i32_load(i->env__memory,(U64)si0+12U);
l142=si0;
si0=16000U;
l143=si0;
si0=l142;
si1=l143;
si0*=si1;
l144=si0;
si0=l141;
si1=l144;
si0+=si1;
l145=si0;
si0=l4;
si0=i32_load(i->env__memory,(U64)si0+4U);
l146=si0;
si0=3U;
l147=si0;
si0=l146;
si1=l147;
si0<<=(si1&31);
l148=si0;
si0=l145;
si1=l148;
si0+=si1;
l149=si0;
si0=l149;
sd0=f64_load(i->env__memory,(U64)si0);
l150=sd0;
si0=l4;
si0=i32_load(i->env__memory,(U64)si0+24U);
l151=si0;
si0=l4;
si0=i32_load(i->env__memory,(U64)si0+8U);
l152=si0;
si0=16000U;
l153=si0;
si0=l152;
si1=l153;
si0*=si1;
l154=si0;
si0=l151;
si1=l154;
si0+=si1;
l155=si0;
si0=l4;
si0=i32_load(i->env__memory,(U64)si0+4U);
l156=si0;
si0=3U;
l157=si0;
si0=l156;
si1=l157;
si0<<=(si1&31);
l158=si0;
si0=l155;
si1=l158;
si0+=si1;
l159=si0;
si0=l159;
sd0=f64_load(i->env__memory,(U64)si0);
l160=sd0;
si0=l4;
si0=i32_load(i->env__memory,(U64)si0);
l161=si0;
si0=l4;
si0=i32_load(i->env__memory,(U64)si0+12U);
l162=si0;
si0=16000U;
l163=si0;
si0=l162;
si1=l163;
si0*=si1;
l164=si0;
si0=l161;
si1=l164;
si0+=si1;
l165=si0;
si0=l4;
si0=i32_load(i->env__memory,(U64)si0+8U);
l166=si0;
si0=3U;
l167=si0;
si0=l166;
si1=l167;
si0<<=(si1&31);
l168=si0;
si0=l165;
si1=l168;
si0+=si1;
l169=si0;
si0=l169;
sd0=f64_load(i->env__memory,(U64)si0);
l170=sd0;
sd0=l150;
sd1=l160;
sd0*=sd1;
l171=sd0;
sd0=l171;
sd1=l170;
sd0+=sd1;
l172=sd0;
si0=l169;
sd1=l172;
f64_store(i->env__memory,(U64)si0,sd1);
si0=l4;
si0=i32_load(i->env__memory,(U64)si0+8U);
l173=si0;
si0=1U;
l174=si0;
si0=l173;
si1=l174;
si0+=si1;
l175=si0;
si0=l4;
si1=l175;
i32_store(i->env__memory,(U64)si0+8U,si1);
goto L16;
}
UNREACHABLE;
L15:;
si0=l4;
si0=i32_load(i->env__memory,(U64)si0+12U);
l176=si0;
si0=1U;
l177=si0;
si0=l176;
si1=l177;
si0+=si1;
l178=si0;
si0=l4;
si1=l178;
i32_store(i->env__memory,(U64)si0+12U,si1);
goto L14;
}
UNREACHABLE;
L13:;
si0=l4;
si0=i32_load(i->env__memory,(U64)si0+4U);
l179=si0;
si0=1U;
l180=si0;
si0=l179;
si1=l180;
si0+=si1;
l181=si0;
si0=l4;
si1=l181;
i32_store(i->env__memory,(U64)si0+4U,si1);
goto L12;
}
UNREACHABLE;
L11:;
si0=0U;
l182=si0;
si0=l4;
si1=l182;
i32_store(i->env__memory,(U64)si0+12U,si1);
L18:;
{
si0=l4;
si0=i32_load(i->env__memory,(U64)si0+12U);
l183=si0;
si0=l4;
si0=i32_load(i->env__memory,(U64)si0+28U);
l184=si0;
si0=l183;
l185=si0;
si0=l184;
l186=si0;
si0=l185;
si1=l186;
si0=(U32)((I32)si0<(I32)si1);
l187=si0;
si0=1U;
l188=si0;
si0=l187;
si1=l188;
si0&=si1;
l189=si0;
si0=l189;
si0=!(si0);
if(si0){
goto L17;
}
si0=0U;
l190=si0;
si0=l4;
si1=l190;
i32_store(i->env__memory,(U64)si0+8U,si1);
L20:;
{
si0=l4;
si0=i32_load(i->env__memory,(U64)si0+8U);
l191=si0;
si0=l4;
si0=i32_load(i->env__memory,(U64)si0+28U);
l192=si0;
si0=l191;
l193=si0;
si0=l192;
l194=si0;
si0=l193;
si1=l194;
si0=(U32)((I32)si0<(I32)si1);
l195=si0;
si0=1U;
l196=si0;
si0=l195;
si1=l196;
si0&=si1;
l197=si0;
si0=l197;
si0=!(si0);
if(si0){
goto L19;
}
si0=l4;
si0=i32_load(i->env__memory,(U64)si0);
l198=si0;
si0=l4;
si0=i32_load(i->env__memory,(U64)si0+12U);
l199=si0;
si0=16000U;
l200=si0;
si0=l199;
si1=l200;
si0*=si1;
l201=si0;
si0=l198;
si1=l201;
si0+=si1;
l202=si0;
si0=l4;
si0=i32_load(i->env__memory,(U64)si0+8U);
l203=si0;
si0=3U;
l204=si0;
si0=l203;
si1=l204;
si0<<=(si1&31);
l205=si0;
si0=l202;
si1=l205;
si0+=si1;
l206=si0;
si0=l206;
sd0=f64_load(i->env__memory,(U64)si0);
l207=sd0;
si0=l4;
si0=i32_load(i->env__memory,(U64)si0+24U);
l208=si0;
si0=l4;
si0=i32_load(i->env__memory,(U64)si0+12U);
l209=si0;
si0=16000U;
l210=si0;
si0=l209;
si1=l210;
si0*=si1;
l211=si0;
si0=l208;
si1=l211;
si0+=si1;
l212=si0;
si0=l4;
si0=i32_load(i->env__memory,(U64)si0+8U);
l213=si0;
si0=3U;
l214=si0;
si0=l213;
si1=l214;
si0<<=(si1&31);
l215=si0;
si0=l212;
si1=l215;
si0+=si1;
l216=si0;
si0=l216;
sd1=l207;
f64_store(i->env__memory,(U64)si0,sd1);
si0=l4;
si0=i32_load(i->env__memory,(U64)si0+8U);
l217=si0;
si0=1U;
l218=si0;
si0=l217;
si1=l218;
si0+=si1;
l219=si0;
si0=l4;
si1=l219;
i32_store(i->env__memory,(U64)si0+8U,si1);
goto L20;
}
UNREACHABLE;
L19:;
si0=l4;
si0=i32_load(i->env__memory,(U64)si0+12U);
l220=si0;
si0=1U;
l221=si0;
si0=l220;
si1=l221;
si0+=si1;
l222=si0;
si0=l4;
si1=l222;
i32_store(i->env__memory,(U64)si0+12U,si1);
goto L18;
}
UNREACHABLE;
L17:;
si0=l4;
si0=i32_load(i->env__memory,(U64)si0);
l223=si0;
si0=l223;
env__free(i,si0);
si0=32U;
l224=si0;
si0=l4;
si1=l224;
si0+=si1;
l225=si0;
si0=l225;
(*i->env_____stack_pointer)=si0;
goto L0;
L0:;
}

void f9(luInstance*i,U32 l0,U32 l1) {
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
si0=16000U;
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

U32 f10(luInstance*i,U64 l0,U32 l1) {
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
0x62,0x65,0x67,0x69,0x6e,0x20,0x64,0x75,0x6d,0x70,0x3a,0x20,0x25,0x73,0x0,0x41,0x0,0x25,0x30,0x2e,0x32,0x6c,0x66,0x20,0x0,0xa,0x65,0x6e,0x64,0x20,0x20,0x20,0x64,0x75,0x6d,0x70,0x3a,0x20,0x25,0x73,0xa,0x0,0x3d,0x3d,0x42,0x45,0x47,0x49,0x4e,0x20,0x44,0x55,0x4d,0x50,0x5f,0x41,0x52,0x52,0x41,0x59,0x53,0x3d,0x3d,0xa,0x0,0x3d,0x3d,0x45,0x4e,0x44,0x20,0x20,0x20,0x44,0x55,0x4d,0x50,0x5f,0x41,0x52,0x52,0x41,0x59,0x53,0x3d,0x3d,0xa,0x0,
};

static void luInitImports(luInstance* i, void* resolve(const char* module, const char* name)) {
if (resolve == NULL) { return; }
i->env__memory=(wasmMemory*)resolve("env", "memory");
i->env_____stack_pointer=(U32*)resolve("env", "__stack_pointer");
i->env_____memory_base=(U32*)resolve("env", "__memory_base");
i->env_____table_base=(U32*)resolve("env", "__table_base");
i->GOTX2Emem__stderr=(U32*)resolve("GOT.mem", "stderr");
}

void lu____wasm_call_ctors(luInstance*i){
f4(i);
}

void lu____wasm_apply_data_relocs(luInstance*i){
f5(i);
}

void lu_kernel_lu(luInstance*i,U32 l0,U32 l1){
f6(i,l0,l1);
}

U32 lu_submain(luInstance*i,U32 l0,U32 l1){
return f7(i,l0,l1);
}

void luInstantiate(luInstance* i, void* resolve(const char* module, const char* name)) {
luInitImports(i, resolve);
}

void luFreeInstance(luInstance* i) {
}

