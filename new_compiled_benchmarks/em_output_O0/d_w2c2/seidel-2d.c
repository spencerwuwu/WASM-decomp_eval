#include "w2c2_base.h"

#include "seidel-2d.h"

void f4(seidel2dInstance*i) {
L0:;
}

void f5(seidel2dInstance*i) {
L0:;
}

void f6(seidel2dInstance*i,U32 l0,U32 l1,U32 l2) {
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
F64 l49=0;
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
F64 l61=0;
F64 l62=0;
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
F64 l76=0;
F64 l77=0;
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
U32 l124=0;
U32 l125=0;
U32 l126=0;
U32 l127=0;
F64 l128=0;
F64 l129=0;
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
F64 l141=0;
F64 l142=0;
U32 l143=0;
U32 l144=0;
U32 l145=0;
U32 l146=0;
U32 l147=0;
U32 l148=0;
U32 l149=0;
U32 l150=0;
U32 l151=0;
U32 l152=0;
U32 l153=0;
U32 l154=0;
U32 l155=0;
F64 l156=0;
F64 l157=0;
F64 l158=0;
F64 l159=0;
U32 l160=0;
U32 l161=0;
U32 l162=0;
U32 l163=0;
U32 l164=0;
U32 l165=0;
U32 l166=0;
U32 l167=0;
U32 l168=0;
U32 l169=0;
U32 l170=0;
U32 l171=0;
U32 l172=0;
U32 l173=0;
U32 l174=0;
U32 l175=0;
U32 l176=0;
U32 l177=0;
U32 si0,si1;
F64 sd0,sd1;
si0=(*i->env_____stack_pointer);
l3=si0;
si0=32U;
l4=si0;
si0=l3;
si1=l4;
si0-=si1;
l5=si0;
si0=l5;
si1=l0;
i32_store(i->env__memory,(U64)si0+28U,si1);
si0=l5;
si1=l1;
i32_store(i->env__memory,(U64)si0+24U,si1);
si0=l5;
si1=l2;
i32_store(i->env__memory,(U64)si0+20U,si1);
si0=0U;
l6=si0;
si0=l5;
si1=l6;
i32_store(i->env__memory,(U64)si0+16U,si1);
L2:;
{
si0=l5;
si0=i32_load(i->env__memory,(U64)si0+16U);
l7=si0;
si0=l5;
si0=i32_load(i->env__memory,(U64)si0+28U);
l8=si0;
si0=1U;
l9=si0;
si0=l8;
si1=l9;
si0-=si1;
l10=si0;
si0=l7;
l11=si0;
si0=l10;
l12=si0;
si0=l11;
si1=l12;
si0=(U32)((I32)si0<=(I32)si1);
l13=si0;
si0=1U;
l14=si0;
si0=l13;
si1=l14;
si0&=si1;
l15=si0;
si0=l15;
si0=!(si0);
if(si0){
goto L1;
}
si0=1U;
l16=si0;
si0=l5;
si1=l16;
i32_store(i->env__memory,(U64)si0+12U,si1);
L4:;
{
si0=l5;
si0=i32_load(i->env__memory,(U64)si0+12U);
l17=si0;
si0=l5;
si0=i32_load(i->env__memory,(U64)si0+24U);
l18=si0;
si0=2U;
l19=si0;
si0=l18;
si1=l19;
si0-=si1;
l20=si0;
si0=l17;
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
si0=1U;
l26=si0;
si0=l5;
si1=l26;
i32_store(i->env__memory,(U64)si0+8U,si1);
L6:;
{
si0=l5;
si0=i32_load(i->env__memory,(U64)si0+8U);
l27=si0;
si0=l5;
si0=i32_load(i->env__memory,(U64)si0+24U);
l28=si0;
si0=2U;
l29=si0;
si0=l28;
si1=l29;
si0-=si1;
l30=si0;
si0=l27;
l31=si0;
si0=l30;
l32=si0;
si0=l31;
si1=l32;
si0=(U32)((I32)si0<=(I32)si1);
l33=si0;
si0=1U;
l34=si0;
si0=l33;
si1=l34;
si0&=si1;
l35=si0;
si0=l35;
si0=!(si0);
if(si0){
goto L5;
}
si0=l5;
si0=i32_load(i->env__memory,(U64)si0+20U);
l36=si0;
si0=l5;
si0=i32_load(i->env__memory,(U64)si0+12U);
l37=si0;
si0=1U;
l38=si0;
si0=l37;
si1=l38;
si0-=si1;
l39=si0;
si0=16000U;
l40=si0;
si0=l39;
si1=l40;
si0*=si1;
l41=si0;
si0=l36;
si1=l41;
si0+=si1;
l42=si0;
si0=l5;
si0=i32_load(i->env__memory,(U64)si0+8U);
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
si0=l42;
si1=l47;
si0+=si1;
l48=si0;
si0=l48;
sd0=f64_load(i->env__memory,(U64)si0);
l49=sd0;
si0=l5;
si0=i32_load(i->env__memory,(U64)si0+20U);
l50=si0;
si0=l5;
si0=i32_load(i->env__memory,(U64)si0+12U);
l51=si0;
si0=1U;
l52=si0;
si0=l51;
si1=l52;
si0-=si1;
l53=si0;
si0=16000U;
l54=si0;
si0=l53;
si1=l54;
si0*=si1;
l55=si0;
si0=l50;
si1=l55;
si0+=si1;
l56=si0;
si0=l5;
si0=i32_load(i->env__memory,(U64)si0+8U);
l57=si0;
si0=3U;
l58=si0;
si0=l57;
si1=l58;
si0<<=(si1&31);
l59=si0;
si0=l56;
si1=l59;
si0+=si1;
l60=si0;
si0=l60;
sd0=f64_load(i->env__memory,(U64)si0);
l61=sd0;
sd0=l49;
sd1=l61;
sd0+=sd1;
l62=sd0;
si0=l5;
si0=i32_load(i->env__memory,(U64)si0+20U);
l63=si0;
si0=l5;
si0=i32_load(i->env__memory,(U64)si0+12U);
l64=si0;
si0=1U;
l65=si0;
si0=l64;
si1=l65;
si0-=si1;
l66=si0;
si0=16000U;
l67=si0;
si0=l66;
si1=l67;
si0*=si1;
l68=si0;
si0=l63;
si1=l68;
si0+=si1;
l69=si0;
si0=l5;
si0=i32_load(i->env__memory,(U64)si0+8U);
l70=si0;
si0=1U;
l71=si0;
si0=l70;
si1=l71;
si0+=si1;
l72=si0;
si0=3U;
l73=si0;
si0=l72;
si1=l73;
si0<<=(si1&31);
l74=si0;
si0=l69;
si1=l74;
si0+=si1;
l75=si0;
si0=l75;
sd0=f64_load(i->env__memory,(U64)si0);
l76=sd0;
sd0=l62;
sd1=l76;
sd0+=sd1;
l77=sd0;
si0=l5;
si0=i32_load(i->env__memory,(U64)si0+20U);
l78=si0;
si0=l5;
si0=i32_load(i->env__memory,(U64)si0+12U);
l79=si0;
si0=16000U;
l80=si0;
si0=l79;
si1=l80;
si0*=si1;
l81=si0;
si0=l78;
si1=l81;
si0+=si1;
l82=si0;
si0=l5;
si0=i32_load(i->env__memory,(U64)si0+8U);
l83=si0;
si0=1U;
l84=si0;
si0=l83;
si1=l84;
si0-=si1;
l85=si0;
si0=3U;
l86=si0;
si0=l85;
si1=l86;
si0<<=(si1&31);
l87=si0;
si0=l82;
si1=l87;
si0+=si1;
l88=si0;
si0=l88;
sd0=f64_load(i->env__memory,(U64)si0);
l89=sd0;
sd0=l77;
sd1=l89;
sd0+=sd1;
l90=sd0;
si0=l5;
si0=i32_load(i->env__memory,(U64)si0+20U);
l91=si0;
si0=l5;
si0=i32_load(i->env__memory,(U64)si0+12U);
l92=si0;
si0=16000U;
l93=si0;
si0=l92;
si1=l93;
si0*=si1;
l94=si0;
si0=l91;
si1=l94;
si0+=si1;
l95=si0;
si0=l5;
si0=i32_load(i->env__memory,(U64)si0+8U);
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
sd0+=sd1;
l101=sd0;
si0=l5;
si0=i32_load(i->env__memory,(U64)si0+20U);
l102=si0;
si0=l5;
si0=i32_load(i->env__memory,(U64)si0+12U);
l103=si0;
si0=16000U;
l104=si0;
si0=l103;
si1=l104;
si0*=si1;
l105=si0;
si0=l102;
si1=l105;
si0+=si1;
l106=si0;
si0=l5;
si0=i32_load(i->env__memory,(U64)si0+8U);
l107=si0;
si0=1U;
l108=si0;
si0=l107;
si1=l108;
si0+=si1;
l109=si0;
si0=3U;
l110=si0;
si0=l109;
si1=l110;
si0<<=(si1&31);
l111=si0;
si0=l106;
si1=l111;
si0+=si1;
l112=si0;
si0=l112;
sd0=f64_load(i->env__memory,(U64)si0);
l113=sd0;
sd0=l101;
sd1=l113;
sd0+=sd1;
l114=sd0;
si0=l5;
si0=i32_load(i->env__memory,(U64)si0+20U);
l115=si0;
si0=l5;
si0=i32_load(i->env__memory,(U64)si0+12U);
l116=si0;
si0=1U;
l117=si0;
si0=l116;
si1=l117;
si0+=si1;
l118=si0;
si0=16000U;
l119=si0;
si0=l118;
si1=l119;
si0*=si1;
l120=si0;
si0=l115;
si1=l120;
si0+=si1;
l121=si0;
si0=l5;
si0=i32_load(i->env__memory,(U64)si0+8U);
l122=si0;
si0=1U;
l123=si0;
si0=l122;
si1=l123;
si0-=si1;
l124=si0;
si0=3U;
l125=si0;
si0=l124;
si1=l125;
si0<<=(si1&31);
l126=si0;
si0=l121;
si1=l126;
si0+=si1;
l127=si0;
si0=l127;
sd0=f64_load(i->env__memory,(U64)si0);
l128=sd0;
sd0=l114;
sd1=l128;
sd0+=sd1;
l129=sd0;
si0=l5;
si0=i32_load(i->env__memory,(U64)si0+20U);
l130=si0;
si0=l5;
si0=i32_load(i->env__memory,(U64)si0+12U);
l131=si0;
si0=1U;
l132=si0;
si0=l131;
si1=l132;
si0+=si1;
l133=si0;
si0=16000U;
l134=si0;
si0=l133;
si1=l134;
si0*=si1;
l135=si0;
si0=l130;
si1=l135;
si0+=si1;
l136=si0;
si0=l5;
si0=i32_load(i->env__memory,(U64)si0+8U);
l137=si0;
si0=3U;
l138=si0;
si0=l137;
si1=l138;
si0<<=(si1&31);
l139=si0;
si0=l136;
si1=l139;
si0+=si1;
l140=si0;
si0=l140;
sd0=f64_load(i->env__memory,(U64)si0);
l141=sd0;
sd0=l129;
sd1=l141;
sd0+=sd1;
l142=sd0;
si0=l5;
si0=i32_load(i->env__memory,(U64)si0+20U);
l143=si0;
si0=l5;
si0=i32_load(i->env__memory,(U64)si0+12U);
l144=si0;
si0=1U;
l145=si0;
si0=l144;
si1=l145;
si0+=si1;
l146=si0;
si0=16000U;
l147=si0;
si0=l146;
si1=l147;
si0*=si1;
l148=si0;
si0=l143;
si1=l148;
si0+=si1;
l149=si0;
si0=l5;
si0=i32_load(i->env__memory,(U64)si0+8U);
l150=si0;
si0=1U;
l151=si0;
si0=l150;
si1=l151;
si0+=si1;
l152=si0;
si0=3U;
l153=si0;
si0=l152;
si1=l153;
si0<<=(si1&31);
l154=si0;
si0=l149;
si1=l154;
si0+=si1;
l155=si0;
si0=l155;
sd0=f64_load(i->env__memory,(U64)si0);
l156=sd0;
sd0=l142;
sd1=l156;
sd0+=sd1;
l157=sd0;
sd0=9;
l158=sd0;
sd0=l157;
sd1=l158;
sd0/=sd1;
l159=sd0;
si0=l5;
si0=i32_load(i->env__memory,(U64)si0+20U);
l160=si0;
si0=l5;
si0=i32_load(i->env__memory,(U64)si0+12U);
l161=si0;
si0=16000U;
l162=si0;
si0=l161;
si1=l162;
si0*=si1;
l163=si0;
si0=l160;
si1=l163;
si0+=si1;
l164=si0;
si0=l5;
si0=i32_load(i->env__memory,(U64)si0+8U);
l165=si0;
si0=3U;
l166=si0;
si0=l165;
si1=l166;
si0<<=(si1&31);
l167=si0;
si0=l164;
si1=l167;
si0+=si1;
l168=si0;
si0=l168;
sd1=l159;
f64_store(i->env__memory,(U64)si0,sd1);
si0=l5;
si0=i32_load(i->env__memory,(U64)si0+8U);
l169=si0;
si0=1U;
l170=si0;
si0=l169;
si1=l170;
si0+=si1;
l171=si0;
si0=l5;
si1=l171;
i32_store(i->env__memory,(U64)si0+8U,si1);
goto L6;
}
UNREACHABLE;
L5:;
si0=l5;
si0=i32_load(i->env__memory,(U64)si0+12U);
l172=si0;
si0=1U;
l173=si0;
si0=l172;
si1=l173;
si0+=si1;
l174=si0;
si0=l5;
si1=l174;
i32_store(i->env__memory,(U64)si0+12U,si1);
goto L4;
}
UNREACHABLE;
L3:;
si0=l5;
si0=i32_load(i->env__memory,(U64)si0+16U);
l175=si0;
si0=1U;
l176=si0;
si0=l175;
si1=l176;
si0+=si1;
l177=si0;
si0=l5;
si1=l177;
i32_store(i->env__memory,(U64)si0+16U,si1);
goto L2;
}
UNREACHABLE;
L1:;
goto L0;
L0:;
}

U32 f7(seidel2dInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U64 l7=0;
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
si0=500U;
l6=si0;
si0=l4;
si1=l6;
i32_store(i->env__memory,(U64)si0+16U,si1);
sj0=4000000ULL;
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
si0=l4;
si0=i32_load(i->env__memory,(U64)si0+20U);
l10=si0;
si0=l4;
si0=i32_load(i->env__memory,(U64)si0+12U);
l11=si0;
si0=l10;
si1=l11;
f8(i,si0,si1);
si0=l4;
si0=i32_load(i->env__memory,(U64)si0+16U);
l12=si0;
si0=l4;
si0=i32_load(i->env__memory,(U64)si0+20U);
l13=si0;
si0=l4;
si0=i32_load(i->env__memory,(U64)si0+12U);
l14=si0;
si0=l12;
si1=l13;
si2=l14;
f6(i,si0,si1,si2);
si0=l4;
si0=i32_load(i->env__memory,(U64)si0+28U);
l15=si0;
si0=42U;
l16=si0;
si0=l15;
l17=si0;
si0=l16;
l18=si0;
si0=l17;
si1=l18;
si0=(U32)((I32)si0>(I32)si1);
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
si0=l4;
si0=i32_load(i->env__memory,(U64)si0+24U);
l22=si0;
si0=l22;
si0=i32_load(i->env__memory,(U64)si0);
l23=si0;
si0=87U;
l24=si0;
si0=(*i->env_____memory_base);
l25=si0;
si0=l25;
si1=l24;
si0+=si1;
l26=si0;
si0=l23;
si1=l26;
si0=env__strcmp(i,si0,si1);
l27=si0;
si0=l27;
if(si0){
goto L1;
}
si0=l4;
si0=i32_load(i->env__memory,(U64)si0+20U);
l28=si0;
si0=l4;
si0=i32_load(i->env__memory,(U64)si0+12U);
l29=si0;
si0=l28;
si1=l29;
f9(i,si0,si1);
L1:;
si0=l4;
si0=i32_load(i->env__memory,(U64)si0+12U);
l30=si0;
si0=l30;
env__free(i,si0);
si0=0U;
l31=si0;
si0=32U;
l32=si0;
si0=l4;
si1=l32;
si0+=si1;
l33=si0;
si0=l33;
(*i->env_____stack_pointer)=si0;
si0=l31;
goto L0;
L0:;
return si0;
}

void f8(seidel2dInstance*i,U32 l0,U32 l1) {
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
F64 l22=0;
U32 l23=0;
U32 l24=0;
U32 l25=0;
F64 l26=0;
F64 l27=0;
F64 l28=0;
F64 l29=0;
U32 l30=0;
F64 l31=0;
F64 l32=0;
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
si0=0U;
l13=si0;
si0=l4;
si1=l13;
i32_store(i->env__memory,(U64)si0,si1);
L4:;
{
si0=l4;
si0=i32_load(i->env__memory,(U64)si0);
l14=si0;
si0=l4;
si0=i32_load(i->env__memory,(U64)si0+12U);
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
si0=l4;
si0=i32_load(i->env__memory,(U64)si0+4U);
l21=si0;
si0=l21;
sd0=(F64)(I32)(si0);
l22=sd0;
si0=l4;
si0=i32_load(i->env__memory,(U64)si0);
l23=si0;
si0=2U;
l24=si0;
si0=l23;
si1=l24;
si0+=si1;
l25=si0;
si0=l25;
sd0=(F64)(I32)(si0);
l26=sd0;
sd0=l22;
sd1=l26;
sd0*=sd1;
l27=sd0;
sd0=2;
l28=sd0;
sd0=l27;
sd1=l28;
sd0+=sd1;
l29=sd0;
si0=l4;
si0=i32_load(i->env__memory,(U64)si0+12U);
l30=si0;
si0=l30;
sd0=(F64)(I32)(si0);
l31=sd0;
sd0=l29;
sd1=l31;
sd0/=sd1;
l32=sd0;
si0=l4;
si0=i32_load(i->env__memory,(U64)si0+8U);
l33=si0;
si0=l4;
si0=i32_load(i->env__memory,(U64)si0+4U);
l34=si0;
si0=16000U;
l35=si0;
si0=l34;
si1=l35;
si0*=si1;
l36=si0;
si0=l33;
si1=l36;
si0+=si1;
l37=si0;
si0=l4;
si0=i32_load(i->env__memory,(U64)si0);
l38=si0;
si0=3U;
l39=si0;
si0=l38;
si1=l39;
si0<<=(si1&31);
l40=si0;
si0=l37;
si1=l40;
si0+=si1;
l41=si0;
si0=l41;
sd1=l32;
f64_store(i->env__memory,(U64)si0,sd1);
si0=l4;
si0=i32_load(i->env__memory,(U64)si0);
l42=si0;
si0=1U;
l43=si0;
si0=l42;
si1=l43;
si0+=si1;
l44=si0;
si0=l4;
si1=l44;
i32_store(i->env__memory,(U64)si0,si1);
goto L4;
}
UNREACHABLE;
L3:;
si0=l4;
si0=i32_load(i->env__memory,(U64)si0+4U);
l45=si0;
si0=1U;
l46=si0;
si0=l45;
si1=l46;
si0+=si1;
l47=si0;
si0=l4;
si1=l47;
i32_store(i->env__memory,(U64)si0+4U,si1);
goto L2;
}
UNREACHABLE;
L1:;
goto L0;
L0:;
}

void f9(seidel2dInstance*i,U32 l0,U32 l1) {
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

U32 f10(seidel2dInstance*i,U64 l0,U32 l1) {
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

static void seidel2dInitImports(seidel2dInstance* i, void* resolve(const char* module, const char* name)) {
if (resolve == NULL) { return; }
i->env__memory=(wasmMemory*)resolve("env", "memory");
i->env_____stack_pointer=(U32*)resolve("env", "__stack_pointer");
i->env_____memory_base=(U32*)resolve("env", "__memory_base");
i->env_____table_base=(U32*)resolve("env", "__table_base");
i->GOTX2Emem__stderr=(U32*)resolve("GOT.mem", "stderr");
}

void seidel2d____wasm_call_ctors(seidel2dInstance*i){
f4(i);
}

void seidel2d____wasm_apply_data_relocs(seidel2dInstance*i){
f5(i);
}

void seidel2d_kernel_seidel_2d(seidel2dInstance*i,U32 l0,U32 l1,U32 l2){
f6(i,l0,l1,l2);
}

U32 seidel2d_submain(seidel2dInstance*i,U32 l0,U32 l1){
return f7(i,l0,l1);
}

void seidel2dInstantiate(seidel2dInstance* i, void* resolve(const char* module, const char* name)) {
seidel2dInitImports(i, resolve);
}

void seidel2dFreeInstance(seidel2dInstance* i) {
}

