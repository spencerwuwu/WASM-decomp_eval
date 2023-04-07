#include "w2c2_base.h"

#include "adpcm.h"

void adpcm_f3(adpcmInstance*i) {
adpcm_f44(i);
L0:;
}

U32 adpcm_f4(adpcmInstance*i,U32 l0,U32 l1) {
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
U32 si0,si1,si2,si3,si4,si5;
U64 sj1;
si0=0U;
l2=si0;
si0=3968U;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=-44U;
si0*=si1;
l3=si0;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+3968U);
si1=12U;
si0*=si1;
l4=si0;
si0=3968U;
si1=8U;
si0+=si1;
l5=si0;
si0=1024U;
si1=8U;
si0+=si1;
l6=si0;
L1:;
{
si0=l2;
si1=1U;
si0+=si1;
l7=si0;
l2=si0;
si0=l6;
l6=si0;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l5;
l5=si1;
si1=i32_load(&i->m0,(U64)si1+4U);
si0*=si1;
si1=l3;
si0+=si1;
l8=si0;
l3=si0;
si0=l6;
si0=i32_load(&i->m0,(U64)si0);
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
si0*=si1;
si1=l4;
si0+=si1;
l9=si0;
l4=si0;
si0=l5;
si1=8U;
si0+=si1;
l5=si0;
si0=l6;
si1=8U;
si0+=si1;
l6=si0;
si0=l7;
si1=10U;
si0=si0 != si1;
if(si0){
goto L1;
}
}
si0=3968U;
si0=i32_load(&i->m0,(U64)si0+92U);
l6=si0;
si0=3968U;
si0=i32_load(&i->m0,(U64)si0+88U);
l5=si0;
si0=3968U;
si1=8U;
si0+=si1;
si1=3968U;
si2=88U;
si0=adpcm_f10(i,si0,si1,si2);
si0=0U;
si1=l1;
i32_store(&i->m0,(U64)si0+3968U,si1);
si0=3968U;
si1=l0;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=0U;
si1=l6;
si2=12U;
si1*=si2;
si2=l8;
si1+=si2;
l6=si1;
si2=l5;
si3=-44U;
si2*=si3;
si3=l9;
si2+=si3;
l5=si2;
si1+=si2;
si2=15U;
si1=(U32)((I32)si1>>(si2&31));
l0=si1;
i32_store(&i->m0,(U64)si0+4064U,si1);
si0=0U;
si1=l5;
si2=l6;
si1-=si2;
si2=15U;
si1=(U32)((I32)si1>>(si2&31));
l10=si1;
i32_store(&i->m0,(U64)si0+4068U,si1);
si0=0U;
si0=i32_load(&i->m0,(U64)si0+4112U);
l11=si0;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+4080U);
si0*=si1;
l6=si0;
si0=1U;
l5=si0;
si0=4112U;
l2=si0;
si0=4080U;
l3=si0;
L2:;
{
si0=l2;
l2=si0;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l3;
l3=si1;
si1=i32_load(&i->m0,(U64)si1+4U);
si0*=si1;
si1=l6;
si0+=si1;
l7=si0;
l6=si0;
si0=l5;
si1=1U;
si0+=si1;
l4=si0;
l5=si0;
si0=l2;
si1=4U;
si0+=si1;
l2=si0;
si0=l3;
si1=4U;
si0+=si1;
l3=si0;
si0=l4;
si1=6U;
si0=si0 != si1;
if(si0){
goto L2;
}
}
si0=0U;
si1=l7;
si2=14U;
si1=(U32)((I32)si1>>(si2&31));
l8=si1;
i32_store(&i->m0,(U64)si0+4136U,si1);
si0=0U;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+4152U);
l12=si1;
si2=0U;
si2=i32_load(&i->m0,(U64)si2+4148U);
si1*=si2;
si2=0U;
si2=i32_load(&i->m0,(U64)si2+4144U);
l9=si2;
si3=0U;
si3=i32_load(&i->m0,(U64)si3+4140U);
l13=si3;
si2*=si3;
si1+=si2;
si2=1U;
si1<<=(si2&31);
si2=15U;
si1=(U32)((I32)si1>>(si2&31));
l6=si1;
i32_store(&i->m0,(U64)si0+4156U,si1);
si0=0U;
si1=l6;
si2=l8;
si1+=si2;
l1=si1;
i32_store(&i->m0,(U64)si0+4160U,si1);
si0=0U;
si1=l0;
si2=l1;
si1-=si2;
l7=si1;
i32_store(&i->m0,(U64)si0+4164U,si1);
si0=l7;
si1=l7;
si2=31U;
si1=(U32)((I32)si1>>(si2&31));
l6=si1;
si0^=si1;
si1=l6;
si0-=si1;
l3=si0;
si0=0U;
si0=i32_load(&i->m0,(U64)si0+4168U);
l2=si0;
si0=0U;
l6=si0;
L4:;
{
si0=l3;
si1=1632U;
si2=l6;
l6=si2;
si3=2U;
si2<<=(si3&31);
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=l2;
si1*=si2;
si2=15U;
si1=(U32)((I32)si1>>(si2&31));
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L5;
}
si0=l6;
l4=si0;
goto L3;
L5:;
si0=l6;
si1=1U;
si0+=si1;
l5=si0;
l6=si0;
si0=30U;
l4=si0;
si0=l5;
si1=30U;
si0=si0 != si1;
if(si0){
goto L4;
}
}
L3:;
si0=0U;
si1=1760U;
si2=1888U;
si3=l7;
si4=-1U;
si3=(U32)((I32)si3>(I32)si4);
si1=si3?si1:si2;
si2=l4;
si3=2U;
si2<<=(si3&31);
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
l0=si1;
i32_store(&i->m0,(U64)si0+4172U,si1);
si0=0U;
si1=1120U;
si2=l0;
si3=-4U;
si2&=si3;
l6=si2;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=l2;
si1*=si2;
l5=si1;
si2=15U;
si1=(U32)((I32)si1>>(si2&31));
l3=si1;
i32_store(&i->m0,(U64)si0+4176U,si1);
si0=0U;
si1=l3;
si2=l8;
si1+=si2;
l4=si1;
i32_store(&i->m0,(U64)si0+4184U,si1);
si0=0U;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+4180U);
si2=127U;
si1*=si2;
si2=7U;
si1=(U32)((I32)si1>>(si2&31));
si2=1440U;
si3=l6;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si1+=si2;
l6=si1;
si2=0U;
si3=l6;
si4=0U;
si3=(U32)((I32)si3>(I32)si4);
si1=si3?si1:si2;
l6=si1;
si2=18432U;
si3=l6;
si4=18432U;
si3=si3 < si4;
si1=si3?si1:si2;
l6=si1;
i32_store(&i->m0,(U64)si0+4180U,si1);
si0=0U;
si1=1504U;
si2=l6;
si3=4U;
si2>>=(si3&31);
si3=124U;
si2&=si3;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=9U;
si3=l6;
si4=11U;
si3>>=(si4&31);
si2-=si3;
si1=(U32)((I32)si1>>(si2&31));
si2=3U;
si1<<=(si2&31);
i32_store(&i->m0,(U64)si0+4168U,si1);
si0=l5;
si1=32767U;
si0=si0 > si1;
if(si0){
goto L7;
}
si0=0U;
l6=si0;
L8:;
{
si0=4080U;
si1=l6;
l6=si1;
si2=2U;
si1<<=(si2&31);
si0+=si1;
l5=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
si2=255U;
si1*=si2;
si2=8U;
si1=(U32)((I32)si1>>(si2&31));
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=1U;
si0+=si1;
l5=si0;
l6=si0;
si0=l5;
si1=6U;
si0=si0 != si1;
if(si0){
goto L8;
}
goto L6;
}
UNREACHABLE;
L7:;
si0=0U;
l6=si0;
L9:;
{
si0=4080U;
si1=l6;
l6=si1;
si2=2U;
si1<<=(si2&31);
l5=si1;
si0+=si1;
l2=si0;
si1=128U;
si2=-128U;
si3=4112U;
si4=l5;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l3;
si3*=si4;
si4=-1U;
si3=(U32)((I32)si3>(I32)si4);
si1=si3?si1:si2;
si2=l2;
si2=i32_load(&i->m0,(U64)si2);
si3=255U;
si2*=si3;
si3=8U;
si2=(U32)((I32)si2>>(si3&31));
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=1U;
si0+=si1;
l5=si0;
l6=si0;
si0=l5;
si1=6U;
si0=si0 != si1;
if(si0){
goto L9;
}
}
L6:;
si0=0U;
si1=l3;
i32_store(&i->m0,(U64)si0+4112U,si1);
si0=0U;
si1=l13;
i32_store(&i->m0,(U64)si0+4148U,si1);
si0=4112U;
si1=4112U;
sj1=i64_load(&i->m0,(U64)si1+12U);
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=4112U;
si1=4112U;
sj1=i64_load(&i->m0,(U64)si1+4U);
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=4112U;
si1=l11;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=0U;
si0=i32_load(&i->m0,(U64)si0+4188U);
l6=si0;
si0=0U;
si1=l4;
i32_store(&i->m0,(U64)si0+4188U,si1);
si0=0U;
si0=i32_load(&i->m0,(U64)si0+4192U);
l5=si0;
si0=0U;
si1=l6;
i32_store(&i->m0,(U64)si0+4192U,si1);
si0=0U;
si1=l3;
si2=l1;
si1+=si2;
l2=si1;
i32_store(&i->m0,(U64)si0+4196U,si1);
si0=0U;
si1=l2;
i32_store(&i->m0,(U64)si0+4140U,si1);
si0=0U;
si1=-128U;
si2=128U;
si3=l5;
si4=l4;
si3*=si4;
si4=0U;
si3=(U32)((I32)si3<(I32)si4);
si1=si3?si1:si2;
si2=l12;
si3=127U;
si2*=si3;
si3=7U;
si2=(U32)((I32)si2>>(si3&31));
si1+=si2;
si2=l9;
si3=2U;
si2<<=(si3&31);
l5=si2;
si3=0U;
si4=l5;
si3-=si4;
si4=l6;
si5=l4;
si4*=si5;
si5=0U;
si4=(U32)((I32)si4<(I32)si5);
l5=si4;
si2=si4?si2:si3;
si3=7U;
si2=(U32)((I32)si2>>(si3&31));
si1+=si2;
l6=si1;
si2=12288U;
si3=l6;
si4=12288U;
si3=(U32)((I32)si3<(I32)si4);
si1=si3?si1:si2;
l6=si1;
si2=-12288U;
si3=l6;
si4=-12288U;
si3=(U32)((I32)si3>(I32)si4);
si1=si3?si1:si2;
l6=si1;
i32_store(&i->m0,(U64)si0+4152U,si1);
si0=0U;
si1=-192U;
si2=192U;
si3=l5;
si1=si3?si1:si2;
si2=l9;
si3=255U;
si2*=si3;
si3=8U;
si2=(U32)((I32)si2>>(si3&31));
si1+=si2;
l5=si1;
si2=15360U;
si3=l6;
si2-=si3;
l2=si2;
si3=l5;
si4=l2;
si3=(U32)((I32)si3<(I32)si4);
si1=si3?si1:si2;
l5=si1;
si2=l6;
si3=-15360U;
si2+=si3;
l6=si2;
si3=l5;
si4=l6;
si3=(U32)((I32)si3>(I32)si4);
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+4144U,si1);
si0=0U;
si0=i32_load(&i->m0,(U64)si0+4240U);
l9=si0;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+4208U);
si0*=si1;
l6=si0;
si0=1U;
l5=si0;
si0=4240U;
l2=si0;
si0=4208U;
l3=si0;
L10:;
{
si0=l2;
l2=si0;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l3;
l3=si1;
si1=i32_load(&i->m0,(U64)si1+4U);
si0*=si1;
si1=l6;
si0+=si1;
l7=si0;
l6=si0;
si0=l5;
si1=1U;
si0+=si1;
l4=si0;
l5=si0;
si0=l2;
si1=4U;
si0+=si1;
l2=si0;
si0=l3;
si1=4U;
si0+=si1;
l3=si0;
si0=l4;
si1=6U;
si0=si0 != si1;
if(si0){
goto L10;
}
}
si0=0U;
si1=l7;
si2=14U;
si1=(U32)((I32)si1>>(si2&31));
l5=si1;
i32_store(&i->m0,(U64)si0+4264U,si1);
si0=0U;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+4280U);
l1=si1;
si2=0U;
si2=i32_load(&i->m0,(U64)si2+4276U);
si1*=si2;
si2=0U;
si2=i32_load(&i->m0,(U64)si2+4272U);
l7=si2;
si3=0U;
si3=i32_load(&i->m0,(U64)si3+4268U);
l11=si3;
si2*=si3;
si1+=si2;
si2=1U;
si1<<=(si2&31);
si2=15U;
si1=(U32)((I32)si1>>(si2&31));
l6=si1;
i32_store(&i->m0,(U64)si0+4284U,si1);
si0=0U;
si1=l6;
si2=l5;
si1+=si2;
l8=si1;
i32_store(&i->m0,(U64)si0+4288U,si1);
si0=0U;
si1=l10;
si2=l8;
si1-=si2;
l6=si1;
i32_store(&i->m0,(U64)si0+4292U,si1);
si0=0U;
si1=3U;
si2=1U;
si3=l6;
si4=-1U;
si3=(U32)((I32)si3>(I32)si4);
si1=si3?si1:si2;
l3=si1;
i32_store(&i->m0,(U64)si0+4296U,si1);
si0=l6;
si1=l6;
si2=31U;
si1=(U32)((I32)si1>>(si2&31));
l2=si1;
si0^=si1;
si1=l2;
si0-=si1;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+4300U);
l6=si1;
si2=564U;
si1*=si2;
si2=12U;
si1=(U32)((I32)si1>>(si2&31));
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L11;
}
si0=0U;
si1=l3;
si2=-1U;
si1+=si2;
i32_store(&i->m0,(U64)si0+4296U,si1);
L11:;
si0=0U;
si1=2016U;
si2=0U;
si2=i32_load(&i->m0,(U64)si2+4296U);
l10=si2;
si3=2U;
si2<<=(si3&31);
l2=si2;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=l6;
si1*=si2;
l12=si1;
si2=15U;
si1=(U32)((I32)si1>>(si2&31));
l3=si1;
i32_store(&i->m0,(U64)si0+4304U,si1);
si0=0U;
si1=l3;
si2=l5;
si1+=si2;
l4=si1;
i32_store(&i->m0,(U64)si0+4312U,si1);
si0=0U;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+4308U);
si2=127U;
si1*=si2;
si2=7U;
si1=(U32)((I32)si1>>(si2&31));
si2=2032U;
si3=l2;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si1+=si2;
l6=si1;
si2=0U;
si3=l6;
si4=0U;
si3=(U32)((I32)si3>(I32)si4);
si1=si3?si1:si2;
l6=si1;
si2=22528U;
si3=l6;
si4=22528U;
si3=si3 < si4;
si1=si3?si1:si2;
l6=si1;
i32_store(&i->m0,(U64)si0+4308U,si1);
si0=0U;
si1=1504U;
si2=l6;
si3=4U;
si2>>=(si3&31);
si3=124U;
si2&=si3;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=11U;
si3=l6;
si4=11U;
si3>>=(si4&31);
si2-=si3;
si1=(U32)((I32)si1>>(si2&31));
si2=3U;
si1<<=(si2&31);
i32_store(&i->m0,(U64)si0+4300U,si1);
si0=l12;
si1=32767U;
si0=si0 > si1;
if(si0){
goto L13;
}
si0=0U;
l6=si0;
L14:;
{
si0=4208U;
si1=l6;
l6=si1;
si2=2U;
si1<<=(si2&31);
si0+=si1;
l5=si0;
si1=l5;
si1=i32_load(&i->m0,(U64)si1);
si2=255U;
si1*=si2;
si2=8U;
si1=(U32)((I32)si1>>(si2&31));
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=1U;
si0+=si1;
l5=si0;
l6=si0;
si0=l5;
si1=6U;
si0=si0 != si1;
if(si0){
goto L14;
}
goto L12;
}
UNREACHABLE;
L13:;
si0=0U;
l6=si0;
L15:;
{
si0=4208U;
si1=l6;
l6=si1;
si2=2U;
si1<<=(si2&31);
l5=si1;
si0+=si1;
l2=si0;
si1=128U;
si2=-128U;
si3=4240U;
si4=l5;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l3;
si3*=si4;
si4=-1U;
si3=(U32)((I32)si3>(I32)si4);
si1=si3?si1:si2;
si2=l2;
si2=i32_load(&i->m0,(U64)si2);
si3=255U;
si2*=si3;
si3=8U;
si2=(U32)((I32)si2>>(si3&31));
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l6;
si1=1U;
si0+=si1;
l5=si0;
l6=si0;
si0=l5;
si1=6U;
si0=si0 != si1;
if(si0){
goto L15;
}
}
L12:;
si0=0U;
si1=l3;
i32_store(&i->m0,(U64)si0+4240U,si1);
si0=0U;
si1=l11;
i32_store(&i->m0,(U64)si0+4276U,si1);
si0=4240U;
si1=4240U;
sj1=i64_load(&i->m0,(U64)si1+12U);
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=4240U;
si1=4240U;
sj1=i64_load(&i->m0,(U64)si1+4U);
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=4240U;
si1=l9;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=0U;
si0=i32_load(&i->m0,(U64)si0+4316U);
l6=si0;
si0=0U;
si1=l4;
i32_store(&i->m0,(U64)si0+4316U,si1);
si0=0U;
si0=i32_load(&i->m0,(U64)si0+4320U);
l5=si0;
si0=0U;
si1=l6;
i32_store(&i->m0,(U64)si0+4320U,si1);
si0=0U;
si1=l3;
si2=l8;
si1+=si2;
l2=si1;
i32_store(&i->m0,(U64)si0+4324U,si1);
si0=0U;
si1=l2;
i32_store(&i->m0,(U64)si0+4268U,si1);
si0=0U;
si1=-128U;
si2=128U;
si3=l5;
si4=l4;
si3*=si4;
si4=0U;
si3=(U32)((I32)si3<(I32)si4);
si1=si3?si1:si2;
si2=l1;
si3=127U;
si2*=si3;
si3=7U;
si2=(U32)((I32)si2>>(si3&31));
si1+=si2;
si2=l7;
si3=2U;
si2<<=(si3&31);
l5=si2;
si3=0U;
si4=l5;
si3-=si4;
si4=l6;
si5=l4;
si4*=si5;
si5=0U;
si4=(U32)((I32)si4<(I32)si5);
l5=si4;
si2=si4?si2:si3;
si3=7U;
si2=(U32)((I32)si2>>(si3&31));
si1+=si2;
l6=si1;
si2=12288U;
si3=l6;
si4=12288U;
si3=(U32)((I32)si3<(I32)si4);
si1=si3?si1:si2;
l6=si1;
si2=-12288U;
si3=l6;
si4=-12288U;
si3=(U32)((I32)si3>(I32)si4);
si1=si3?si1:si2;
l6=si1;
i32_store(&i->m0,(U64)si0+4280U,si1);
si0=0U;
si1=-192U;
si2=192U;
si3=l5;
si1=si3?si1:si2;
si2=l7;
si3=255U;
si2*=si3;
si3=8U;
si2=(U32)((I32)si2>>(si3&31));
si1+=si2;
l5=si1;
si2=15360U;
si3=l6;
si2-=si3;
l2=si2;
si3=l5;
si4=l2;
si3=(U32)((I32)si3<(I32)si4);
si1=si3?si1:si2;
l5=si1;
si2=l6;
si3=-15360U;
si2+=si3;
l6=si2;
si3=l5;
si4=l6;
si3=(U32)((I32)si3>(I32)si4);
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+4272U,si1);
si0=l10;
si1=6U;
si0<<=(si1&31);
si1=l0;
si0|=si1;
L0:;
return si0;
}

void adpcm_f5(adpcmInstance*i,U32 l0) {
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
U32 l12=0;
U64 l13=0;
U64 l14=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1;
si0=0U;
si1=l0;
si2=6U;
si1=(U32)((I32)si1>>(si2&31));
l1=si1;
i32_store(&i->m0,(U64)si0+4296U,si1);
si0=0U;
si1=l0;
si2=63U;
si1&=si2;
l2=si1;
i32_store(&i->m0,(U64)si0+4328U,si1);
si0=0U;
si0=i32_load(&i->m0,(U64)si0+4368U);
l3=si0;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+4336U);
si0*=si1;
l0=si0;
si0=1U;
l4=si0;
si0=4368U;
l5=si0;
si0=4336U;
l6=si0;
L1:;
{
si0=l5;
l5=si0;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l6;
l6=si1;
si1=i32_load(&i->m0,(U64)si1+4U);
si0*=si1;
si1=l0;
si0+=si1;
l7=si0;
l0=si0;
si0=l4;
si1=1U;
si0+=si1;
l8=si0;
l4=si0;
si0=l5;
si1=4U;
si0+=si1;
l5=si0;
si0=l6;
si1=4U;
si0+=si1;
l6=si0;
si0=l8;
si1=6U;
si0=si0 != si1;
if(si0){
goto L1;
}
}
si0=0U;
si1=l7;
si2=14U;
si1=(U32)((I32)si1>>(si2&31));
l0=si1;
i32_store(&i->m0,(U64)si0+4392U,si1);
si0=0U;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+4408U);
l9=si1;
si2=0U;
si2=i32_load(&i->m0,(U64)si2+4404U);
si1*=si2;
si2=0U;
si2=i32_load(&i->m0,(U64)si2+4400U);
l7=si2;
si3=0U;
si3=i32_load(&i->m0,(U64)si3+4396U);
l10=si3;
si2*=si3;
si1+=si2;
si2=1U;
si1<<=(si2&31);
si2=15U;
si1=(U32)((I32)si1>>(si2&31));
l4=si1;
i32_store(&i->m0,(U64)si0+4412U,si1);
si0=0U;
si1=1120U;
si2=l2;
si3=60U;
si2&=si3;
l5=si2;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=0U;
si2=i32_load(&i->m0,(U64)si2+4420U);
l8=si2;
si1*=si2;
l11=si1;
si2=15U;
si1=(U32)((I32)si1>>(si2&31));
l6=si1;
i32_store(&i->m0,(U64)si0+4424U,si1);
si0=0U;
si1=l4;
si2=l0;
si1+=si2;
l2=si1;
i32_store(&i->m0,(U64)si0+4416U,si1);
si0=0U;
si1=l8;
si2=1184U;
si3=0U;
si3=i32_load(&i->m0,(U64)si3+4172U);
si4=2U;
si3<<=(si4&31);
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si1*=si2;
si2=15U;
si1=(U32)((I32)si1>>(si2&31));
l4=si1;
i32_store(&i->m0,(U64)si0+4428U,si1);
si0=0U;
si1=l6;
si2=l0;
si1+=si2;
l8=si1;
i32_store(&i->m0,(U64)si0+4440U,si1);
si0=0U;
si1=l4;
si2=l2;
si1+=si2;
l12=si1;
i32_store(&i->m0,(U64)si0+4432U,si1);
si0=0U;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+4436U);
si2=127U;
si1*=si2;
si2=7U;
si1=(U32)((I32)si1>>(si2&31));
si2=1440U;
si3=l5;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si1+=si2;
l0=si1;
si2=0U;
si3=l0;
si4=0U;
si3=(U32)((I32)si3>(I32)si4);
si1=si3?si1:si2;
l0=si1;
si2=18432U;
si3=l0;
si4=18432U;
si3=si3 < si4;
si1=si3?si1:si2;
l0=si1;
i32_store(&i->m0,(U64)si0+4436U,si1);
si0=0U;
si1=1504U;
si2=l0;
si3=4U;
si2>>=(si3&31);
si3=124U;
si2&=si3;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=9U;
si3=l0;
si4=11U;
si3>>=(si4&31);
si2-=si3;
si1=(U32)((I32)si1>>(si2&31));
si2=3U;
si1<<=(si2&31);
i32_store(&i->m0,(U64)si0+4420U,si1);
si0=l11;
si1=32767U;
si0=si0 > si1;
if(si0){
goto L3;
}
si0=0U;
l0=si0;
L4:;
{
si0=4336U;
si1=l0;
l0=si1;
si2=2U;
si1<<=(si2&31);
si0+=si1;
l4=si0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1);
si2=255U;
si1*=si2;
si2=8U;
si1=(U32)((I32)si1>>(si2&31));
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=1U;
si0+=si1;
l4=si0;
l0=si0;
si0=l4;
si1=6U;
si0=si0 != si1;
if(si0){
goto L4;
}
goto L2;
}
UNREACHABLE;
L3:;
si0=0U;
l0=si0;
L5:;
{
si0=4336U;
si1=l0;
l0=si1;
si2=2U;
si1<<=(si2&31);
l4=si1;
si0+=si1;
l5=si0;
si1=128U;
si2=-128U;
si3=4368U;
si4=l4;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l6;
si3*=si4;
si4=-1U;
si3=(U32)((I32)si3>(I32)si4);
si1=si3?si1:si2;
si2=l5;
si2=i32_load(&i->m0,(U64)si2);
si3=255U;
si2*=si3;
si3=8U;
si2=(U32)((I32)si2>>(si3&31));
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=1U;
si0+=si1;
l4=si0;
l0=si0;
si0=l4;
si1=6U;
si0=si0 != si1;
if(si0){
goto L5;
}
}
L2:;
si0=0U;
si1=l6;
i32_store(&i->m0,(U64)si0+4368U,si1);
si0=0U;
si1=l10;
i32_store(&i->m0,(U64)si0+4404U,si1);
si0=4368U;
si1=4368U;
sj1=i64_load(&i->m0,(U64)si1+12U);
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=4368U;
si1=4368U;
sj1=i64_load(&i->m0,(U64)si1+4U);
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=4368U;
si1=l3;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=0U;
si0=i32_load(&i->m0,(U64)si0+4444U);
l0=si0;
si0=0U;
si1=l8;
i32_store(&i->m0,(U64)si0+4444U,si1);
si0=0U;
si0=i32_load(&i->m0,(U64)si0+4448U);
l4=si0;
si0=0U;
si1=l0;
i32_store(&i->m0,(U64)si0+4448U,si1);
si0=0U;
si1=l6;
si2=l2;
si1+=si2;
l5=si1;
i32_store(&i->m0,(U64)si0+4452U,si1);
si0=0U;
si1=l5;
i32_store(&i->m0,(U64)si0+4396U,si1);
si0=0U;
si1=-128U;
si2=128U;
si3=l4;
si4=l8;
si3*=si4;
si4=0U;
si3=(U32)((I32)si3<(I32)si4);
si1=si3?si1:si2;
si2=l9;
si3=127U;
si2*=si3;
si3=7U;
si2=(U32)((I32)si2>>(si3&31));
si1+=si2;
si2=l7;
si3=2U;
si2<<=(si3&31);
l4=si2;
si3=0U;
si4=l4;
si3-=si4;
si4=l0;
si5=l8;
si4*=si5;
si5=0U;
si4=(U32)((I32)si4<(I32)si5);
l4=si4;
si2=si4?si2:si3;
si3=7U;
si2=(U32)((I32)si2>>(si3&31));
si1+=si2;
l0=si1;
si2=12288U;
si3=l0;
si4=12288U;
si3=(U32)((I32)si3<(I32)si4);
si1=si3?si1:si2;
l0=si1;
si2=-12288U;
si3=l0;
si4=-12288U;
si3=(U32)((I32)si3>(I32)si4);
si1=si3?si1:si2;
l0=si1;
i32_store(&i->m0,(U64)si0+4408U,si1);
si0=0U;
si1=-192U;
si2=192U;
si3=l4;
si1=si3?si1:si2;
si2=l7;
si3=255U;
si2*=si3;
si3=8U;
si2=(U32)((I32)si2>>(si3&31));
si1+=si2;
l4=si1;
si2=15360U;
si3=l0;
si2-=si3;
l5=si2;
si3=l4;
si4=l5;
si3=(U32)((I32)si3<(I32)si4);
si1=si3?si1:si2;
l4=si1;
si2=l0;
si3=-15360U;
si2+=si3;
l0=si2;
si3=l4;
si4=l0;
si3=(U32)((I32)si3>(I32)si4);
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+4400U,si1);
si0=0U;
si0=i32_load(&i->m0,(U64)si0+4496U);
l2=si0;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+4464U);
si0*=si1;
l0=si0;
si0=1U;
l4=si0;
si0=4496U;
l5=si0;
si0=4464U;
l6=si0;
L6:;
{
si0=l5;
l5=si0;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l6;
l6=si1;
si1=i32_load(&i->m0,(U64)si1+4U);
si0*=si1;
si1=l0;
si0+=si1;
l7=si0;
l0=si0;
si0=l4;
si1=1U;
si0+=si1;
l8=si0;
l4=si0;
si0=l5;
si1=4U;
si0+=si1;
l5=si0;
si0=l6;
si1=4U;
si0+=si1;
l6=si0;
si0=l8;
si1=6U;
si0=si0 != si1;
if(si0){
goto L6;
}
}
si0=0U;
si1=l7;
si2=14U;
si1=(U32)((I32)si1>>(si2&31));
l0=si1;
i32_store(&i->m0,(U64)si0+4520U,si1);
si0=0U;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+4536U);
l10=si1;
si2=0U;
si2=i32_load(&i->m0,(U64)si2+4532U);
si1*=si2;
si2=0U;
si2=i32_load(&i->m0,(U64)si2+4528U);
l7=si2;
si3=0U;
si3=i32_load(&i->m0,(U64)si3+4524U);
l3=si3;
si2*=si3;
si1+=si2;
si2=1U;
si1<<=(si2&31);
si2=15U;
si1=(U32)((I32)si1>>(si2&31));
l4=si1;
i32_store(&i->m0,(U64)si0+4540U,si1);
si0=0U;
si1=2016U;
si2=l1;
si3=2U;
si2<<=(si3&31);
l5=si2;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=0U;
si2=i32_load(&i->m0,(U64)si2+4548U);
si1*=si2;
l1=si1;
si2=15U;
si1=(U32)((I32)si1>>(si2&31));
l6=si1;
i32_store(&i->m0,(U64)si0+4552U,si1);
si0=0U;
si1=l4;
si2=l0;
si1+=si2;
l9=si1;
i32_store(&i->m0,(U64)si0+4544U,si1);
si0=0U;
si1=l6;
si2=l0;
si1+=si2;
l8=si1;
i32_store(&i->m0,(U64)si0+4560U,si1);
si0=0U;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+4556U);
si2=127U;
si1*=si2;
si2=7U;
si1=(U32)((I32)si1>>(si2&31));
si2=2032U;
si3=l5;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si1+=si2;
l0=si1;
si2=0U;
si3=l0;
si4=0U;
si3=(U32)((I32)si3>(I32)si4);
si1=si3?si1:si2;
l0=si1;
si2=22528U;
si3=l0;
si4=22528U;
si3=si3 < si4;
si1=si3?si1:si2;
l0=si1;
i32_store(&i->m0,(U64)si0+4556U,si1);
si0=0U;
si1=1504U;
si2=l0;
si3=4U;
si2>>=(si3&31);
si3=124U;
si2&=si3;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=11U;
si3=l0;
si4=11U;
si3>>=(si4&31);
si2-=si3;
si1=(U32)((I32)si1>>(si2&31));
si2=3U;
si1<<=(si2&31);
i32_store(&i->m0,(U64)si0+4548U,si1);
si0=l1;
si1=32767U;
si0=si0 > si1;
if(si0){
goto L8;
}
si0=0U;
l0=si0;
L9:;
{
si0=4464U;
si1=l0;
l0=si1;
si2=2U;
si1<<=(si2&31);
si0+=si1;
l4=si0;
si1=l4;
si1=i32_load(&i->m0,(U64)si1);
si2=255U;
si1*=si2;
si2=8U;
si1=(U32)((I32)si1>>(si2&31));
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=1U;
si0+=si1;
l4=si0;
l0=si0;
si0=l4;
si1=6U;
si0=si0 != si1;
if(si0){
goto L9;
}
goto L7;
}
UNREACHABLE;
L8:;
si0=0U;
l0=si0;
L10:;
{
si0=4464U;
si1=l0;
l0=si1;
si2=2U;
si1<<=(si2&31);
l4=si1;
si0+=si1;
l5=si0;
si1=128U;
si2=-128U;
si3=4496U;
si4=l4;
si3+=si4;
si3=i32_load(&i->m0,(U64)si3);
si4=l6;
si3*=si4;
si4=-1U;
si3=(U32)((I32)si3>(I32)si4);
si1=si3?si1:si2;
si2=l5;
si2=i32_load(&i->m0,(U64)si2);
si3=255U;
si2*=si3;
si3=8U;
si2=(U32)((I32)si2>>(si3&31));
si1+=si2;
i32_store(&i->m0,(U64)si0,si1);
si0=l0;
si1=1U;
si0+=si1;
l4=si0;
l0=si0;
si0=l4;
si1=6U;
si0=si0 != si1;
if(si0){
goto L10;
}
}
L7:;
si0=0U;
si1=l6;
i32_store(&i->m0,(U64)si0+4496U,si1);
si0=0U;
si1=l3;
i32_store(&i->m0,(U64)si0+4532U,si1);
si0=4496U;
si1=4496U;
sj1=i64_load(&i->m0,(U64)si1+12U);
i64_store(&i->m0,(U64)si0+16U,sj1);
si0=4496U;
si1=4496U;
sj1=i64_load(&i->m0,(U64)si1+4U);
i64_store(&i->m0,(U64)si0+8U,sj1);
si0=4496U;
si1=l2;
i32_store(&i->m0,(U64)si0+4U,si1);
si0=0U;
si0=i32_load(&i->m0,(U64)si0+4564U);
l4=si0;
si0=0U;
si1=l8;
i32_store(&i->m0,(U64)si0+4564U,si1);
si0=0U;
si0=i32_load(&i->m0,(U64)si0+4568U);
l5=si0;
si0=0U;
si1=l4;
i32_store(&i->m0,(U64)si0+4568U,si1);
si0=0U;
si1=l6;
si2=l9;
si1+=si2;
l0=si1;
i32_store(&i->m0,(U64)si0+4572U,si1);
si0=0U;
si1=l0;
i32_store(&i->m0,(U64)si0+4524U,si1);
si0=0U;
si1=l12;
si2=l0;
si1-=si2;
l3=si1;
i32_store(&i->m0,(U64)si0+4576U,si1);
si0=0U;
si1=l0;
si2=l12;
si1+=si2;
l9=si1;
i32_store(&i->m0,(U64)si0+4580U,si1);
si0=0U;
si1=-128U;
si2=128U;
si3=l5;
si4=l8;
si3*=si4;
si4=0U;
si3=(U32)((I32)si3<(I32)si4);
si1=si3?si1:si2;
si2=l10;
si3=127U;
si2*=si3;
si3=7U;
si2=(U32)((I32)si2>>(si3&31));
si1+=si2;
si2=l7;
si3=2U;
si2<<=(si3&31);
l0=si2;
si3=0U;
si4=l0;
si3-=si4;
si4=l4;
si5=l8;
si4*=si5;
si5=0U;
si4=(U32)((I32)si4<(I32)si5);
l4=si4;
si2=si4?si2:si3;
si3=7U;
si2=(U32)((I32)si2>>(si3&31));
si1+=si2;
l0=si1;
si2=12288U;
si3=l0;
si4=12288U;
si3=(U32)((I32)si3<(I32)si4);
si1=si3?si1:si2;
l0=si1;
si2=-12288U;
si3=l0;
si4=-12288U;
si3=(U32)((I32)si3>(I32)si4);
si1=si3?si1:si2;
l0=si1;
i32_store(&i->m0,(U64)si0+4536U,si1);
si0=0U;
si1=-192U;
si2=192U;
si3=l4;
si1=si3?si1:si2;
si2=l7;
si3=255U;
si2*=si3;
si3=8U;
si2=(U32)((I32)si2>>(si3&31));
si1+=si2;
l4=si1;
si2=15360U;
si3=l0;
si2-=si3;
l5=si2;
si3=l4;
si4=l5;
si3=(U32)((I32)si3<(I32)si4);
si1=si3?si1:si2;
l4=si1;
si2=l0;
si3=-15360U;
si2+=si3;
l0=si2;
si3=l4;
si4=l0;
si3=(U32)((I32)si3>(I32)si4);
si1=si3?si1:si2;
i32_store(&i->m0,(U64)si0+4528U,si1);
si0=4640U;
l4=si0;
si0=4592U;
l5=si0;
si0=1024U;
si1=8U;
si0+=si1;
l6=si0;
si0=l9;
si1=-44U;
si0*=si1;
l8=si0;
si0=l3;
si1=12U;
si0*=si1;
l7=si0;
si0=0U;
l2=si0;
L11:;
{
si0=l4;
l12=si0;
si1=4U;
si0+=si1;
l4=si0;
si0=l5;
l1=si0;
si1=4U;
si0+=si1;
l5=si0;
si0=l6;
l0=si0;
si1=8U;
si0+=si1;
l6=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0+4U);
si1=l12;
si1=i32_load(&i->m0,(U64)si1);
si0*=si1;
si1=l8;
si0+=si1;
l12=si0;
l8=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
si0*=si1;
si1=l7;
si0+=si1;
l1=si0;
l7=si0;
si0=l2;
si1=1U;
si0+=si1;
l0=si0;
l2=si0;
si0=l0;
si1=10U;
si0=si0 != si1;
if(si0){
goto L11;
}
}
si0=4592U;
si1=8U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l13=sj0;
si0=4592U;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+4592U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=4592U;
si1=16U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l14=sj0;
si0=4592U;
si1=12U;
si0+=si1;
sj1=l13;
i64_store(&i->m0,(U64)si0,sj1);
si0=4592U;
si1=24U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l13=sj0;
si0=4592U;
si1=20U;
si0+=si1;
sj1=l14;
i64_store(&i->m0,(U64)si0,sj1);
si0=4592U;
si1=32U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l14=sj0;
si0=4592U;
si1=28U;
si0+=si1;
sj1=l13;
i64_store(&i->m0,(U64)si0,sj1);
si0=4592U;
si0=i32_load(&i->m0,(U64)si0+40U);
l0=si0;
si0=4592U;
si1=36U;
si0+=si1;
sj1=l14;
i64_store(&i->m0,(U64)si0,sj1);
si0=0U;
si1=l0;
si2=-44U;
si1*=si2;
si2=l1;
si1+=si2;
si2=14U;
si1=(U32)((I32)si1>>(si2&31));
i32_store(&i->m0,(U64)si0+4684U,si1);
si0=0U;
si1=4640U;
si1=i32_load(&i->m0,(U64)si1+40U);
si2=12U;
si1*=si2;
si2=l12;
si1+=si2;
si2=14U;
si1=(U32)((I32)si1>>(si2&31));
i32_store(&i->m0,(U64)si0+4688U,si1);
si0=4640U;
si1=16U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l13=sj0;
si0=4640U;
si1=12U;
si0+=si1;
si1=4640U;
si2=8U;
si1+=si2;
sj1=i64_load(&i->m0,(U64)si1);
i64_store(&i->m0,(U64)si0,sj1);
si0=4640U;
si1=24U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l14=sj0;
si0=4640U;
si1=20U;
si0+=si1;
sj1=l13;
i64_store(&i->m0,(U64)si0,sj1);
si0=4640U;
si1=32U;
si0+=si1;
sj0=i64_load(&i->m0,(U64)si0);
l13=sj0;
si0=4640U;
si1=28U;
si0+=si1;
sj1=l14;
i64_store(&i->m0,(U64)si0,sj1);
si0=4640U;
si1=36U;
si0+=si1;
sj1=l13;
i64_store(&i->m0,(U64)si0,sj1);
si0=4640U;
si1=0U;
sj1=i64_load(&i->m0,(U64)si1+4640U);
i64_store(&i->m0,(U64)si0+4U,sj1);
si0=0U;
si1=l3;
i32_store(&i->m0,(U64)si0+4592U,si1);
si0=0U;
si1=l9;
i32_store(&i->m0,(U64)si0+4640U,si1);
L0:;
}

void adpcm_f6(adpcmInstance*i) {
U32 l0=0;
U32 l1=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=0U;
si1=32U;
i32_store(&i->m0,(U64)si0+4168U,si1);
si0=0U;
si1=32U;
i32_store(&i->m0,(U64)si0+4420U,si1);
si0=0U;
si1=8U;
i32_store(&i->m0,(U64)si0+4548U,si1);
si0=0U;
si1=8U;
i32_store(&i->m0,(U64)si0+4300U,si1);
si0=0U;
si1=0U;
i32_store(&i->m0,(U64)si0+4148U,si1);
si0=0U;
si1=0U;
i32_store(&i->m0,(U64)si0+4140U,si1);
si0=0U;
si1=0U;
i32_store(&i->m0,(U64)si0+4192U,si1);
si0=0U;
si1=0U;
i32_store(&i->m0,(U64)si0+4188U,si1);
si0=0U;
si1=0U;
i32_store(&i->m0,(U64)si0+4152U,si1);
si0=0U;
si1=0U;
i32_store(&i->m0,(U64)si0+4144U,si1);
si0=0U;
si1=0U;
i32_store(&i->m0,(U64)si0+4180U,si1);
si0=0U;
si1=0U;
i32_store(&i->m0,(U64)si0+4276U,si1);
si0=0U;
si1=0U;
i32_store(&i->m0,(U64)si0+4268U,si1);
si0=0U;
si1=0U;
i32_store(&i->m0,(U64)si0+4320U,si1);
si0=0U;
si1=0U;
i32_store(&i->m0,(U64)si0+4316U,si1);
si0=0U;
si1=0U;
i32_store(&i->m0,(U64)si0+4280U,si1);
si0=0U;
si1=0U;
i32_store(&i->m0,(U64)si0+4272U,si1);
si0=0U;
si1=0U;
i32_store(&i->m0,(U64)si0+4308U,si1);
si0=0U;
si1=0U;
i32_store(&i->m0,(U64)si0+4404U,si1);
si0=0U;
si1=0U;
i32_store(&i->m0,(U64)si0+4396U,si1);
si0=0U;
si1=0U;
i32_store(&i->m0,(U64)si0+4448U,si1);
si0=0U;
si1=0U;
i32_store(&i->m0,(U64)si0+4444U,si1);
si0=0U;
si1=0U;
i32_store(&i->m0,(U64)si0+4408U,si1);
si0=0U;
si1=0U;
i32_store(&i->m0,(U64)si0+4400U,si1);
si0=0U;
si1=0U;
i32_store(&i->m0,(U64)si0+4436U,si1);
si0=0U;
si1=0U;
i32_store(&i->m0,(U64)si0+4532U,si1);
si0=0U;
si1=0U;
i32_store(&i->m0,(U64)si0+4524U,si1);
si0=0U;
si1=0U;
i32_store(&i->m0,(U64)si0+4568U,si1);
si0=0U;
si1=0U;
i32_store(&i->m0,(U64)si0+4564U,si1);
si0=0U;
si1=0U;
i32_store(&i->m0,(U64)si0+4536U,si1);
si0=0U;
si1=0U;
i32_store(&i->m0,(U64)si0+4528U,si1);
si0=0U;
si1=0U;
i32_store(&i->m0,(U64)si0+4556U,si1);
si0=4112U;
si1=16U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=0U;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+4112U,sj1);
si0=4112U;
si1=8U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=4240U;
si1=16U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=0U;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+4240U,sj1);
si0=4240U;
si1=8U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=4368U;
si1=16U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=0U;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+4368U,sj1);
si0=4368U;
si1=8U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=4496U;
si1=16U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=0U;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+4496U,sj1);
si0=4496U;
si1=8U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=4080U;
si1=16U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=0U;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+4080U,sj1);
si0=4080U;
si1=8U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=4208U;
si1=16U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=0U;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+4208U,sj1);
si0=4208U;
si1=8U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=4336U;
si1=16U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=0U;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+4336U,sj1);
si0=4336U;
si1=8U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=4464U;
si1=16U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=0U;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+4464U,sj1);
si0=4464U;
si1=8U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=3968U;
si1=0U;
si2=96U;
si0=adpcm_f11(i,si0,si1,si2);
si0=4592U;
si1=40U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=4592U;
si1=32U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=4592U;
si1=24U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=4592U;
si1=16U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=4592U;
si1=8U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=0U;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+4592U,sj1);
si0=0U;
sj1=0ULL;
i64_store(&i->m0,(U64)si0+4640U,sj1);
si0=4640U;
si1=8U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=4640U;
si1=16U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=4640U;
si1=24U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=4640U;
si1=32U;
si0+=si1;
sj1=0ULL;
i64_store(&i->m0,(U64)si0,sj1);
si0=4640U;
si1=40U;
si0+=si1;
si1=0U;
i32_store(&i->m0,(U64)si0,si1);
si0=0U;
l0=si0;
L1:;
{
si0=4704U;
si1=l0;
l1=si1;
si2=1U;
si1<<=(si2&31);
si0+=si1;
si1=2048U;
si2=l1;
si3=2U;
si2<<=(si3&31);
l0=si2;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=2048U;
si3=l0;
si4=4U;
si3|=si4;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si1=adpcm_f4(i,si1,si2);
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=2U;
si0+=si1;
l0=si0;
si0=l1;
si1=98U;
si0=si0 < si1;
if(si0){
goto L1;
}
}
si0=0U;
l0=si0;
L2:;
{
si0=4704U;
si1=l0;
l1=si1;
si2=1U;
si1<<=(si2&31);
si0+=si1;
si0=i32_load(&i->m0,(U64)si0);
adpcm_f5(i,si0);
si0=5104U;
si1=l1;
si2=2U;
si1<<=(si2&31);
l0=si1;
si0+=si1;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+4684U);
i32_store(&i->m0,(U64)si0,si1);
si0=5104U;
si1=l0;
si2=4U;
si1|=si2;
si0+=si1;
si1=0U;
si1=i32_load(&i->m0,(U64)si1+4688U);
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=2U;
si0+=si1;
l0=si0;
si0=l1;
si1=98U;
si0=si0 < si1;
if(si0){
goto L2;
}
}
L0:;
}

U32 adpcm_f7(adpcmInstance*i) {
U32 l0=0;
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
F64 l5=0;
U32 si0,si1,si2,si3;
U64 sj2;
F64 sd1,sd2;
si0=i->g0;
si1=64U;
si0-=si1;
l0=si0;
i->g0=si0;
si0=l0;
si1=48U;
si0+=si1;
si1=0U;
si0=adpcm_f13(i,si0,si1);
l1=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+32U,si1);
si0=3285U;
si1=l0;
si2=32U;
si1+=si2;
si0=adpcm_f14(i,si0,si1);
L1:;
si0=0U;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+56U);
sd1=(F64)(I32)(si1);
sd2=9.9999999999999995e-07;
sd1*=sd2;
si2=l0;
sj2=i64_load(&i->m0,(U64)si2+48U);
sd2=(F64)(I64)(sj2);
sd1+=sd2;
f64_store(&i->m0,(U64)si0+5504U,sd1);
adpcm_f6(i);
si0=0U;
l1=si0;
si0=0U;
l2=si0;
L2:;
{
si0=l1;
si1=4704U;
si2=l2;
l2=si2;
si3=2U;
si2<<=(si3&31);
l1=si2;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=2448U;
si3=l1;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si1=si1 != si2;
si0+=si1;
l3=si0;
l1=si0;
si0=l2;
si1=1U;
si0+=si1;
l4=si0;
l2=si0;
si0=l4;
si1=50U;
si0=si0 != si1;
if(si0){
goto L2;
}
}
si0=l3;
l1=si0;
si0=0U;
l2=si0;
L3:;
{
si0=l1;
si1=5104U;
si2=l2;
l2=si2;
si3=2U;
si2<<=(si3&31);
l1=si2;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
si2=2848U;
si3=l1;
si2+=si3;
si2=i32_load(&i->m0,(U64)si2);
si1=si1 != si2;
si0+=si1;
l3=si0;
l1=si0;
si0=l2;
si1=1U;
si0+=si1;
l4=si0;
l2=si0;
si0=l4;
si1=100U;
si0=si0 != si1;
if(si0){
goto L3;
}
}
si0=l0;
si1=48U;
si0+=si1;
si1=0U;
si0=adpcm_f13(i,si0,si1);
l1=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l0;
si1=l1;
i32_store(&i->m0,(U64)si0+16U,si1);
si0=3285U;
si1=l0;
si2=16U;
si1+=si2;
si0=adpcm_f14(i,si0,si1);
L4:;
si0=0U;
si1=l0;
si1=i32_load(&i->m0,(U64)si1+56U);
sd1=(F64)(I32)(si1);
sd2=9.9999999999999995e-07;
sd1*=sd2;
si2=l0;
sj2=i64_load(&i->m0,(U64)si2+48U);
sd2=(F64)(I64)(sj2);
sd1+=sd2;
l5=sd1;
f64_store(&i->m0,(U64)si0+5512U,sd1);
si0=l0;
sd1=l5;
si2=0U;
sd2=f64_load(&i->m0,(U64)si2+5504U);
sd1-=sd2;
f64_store(&i->m0,(U64)si0,sd1);
si0=3337U;
si1=l0;
si0=adpcm_f15(i,si0,si1);
si0=l0;
si1=64U;
si0+=si1;
i->g0=si0;
si0=l3;
L0:;
return si0;
}

U32 adpcm_f8(adpcmInstance*i,U32 l0,U32 l1) {
U32 si0;
si0=adpcm_f7(i);
si0=0U;
L0:;
return si0;
}

U32 adpcm_f9(adpcmInstance*i,U32 l0,U32 l1,U32 l2) {
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

U32 adpcm_f10(adpcmInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2,si3;
si0=l0;
si1=l1;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l1;
si1=l0;
si2=l2;
si1+=si2;
l3=si1;
si0-=si1;
si1=0U;
si2=l2;
si3=1U;
si2<<=(si3&31);
si1-=si2;
si0=si0 > si1;
if(si0){
goto L2;
}
si0=l0;
si1=l1;
si2=l2;
si0=adpcm_f9(i,si0,si1,si2);
goto L0;
L2:;
si0=l1;
si1=l0;
si0^=si1;
si1=3U;
si0&=si1;
l4=si0;
si0=l0;
si1=l1;
si0=si0 >= si1;
if(si0){
goto L5;
}
si0=l4;
si0=!(si0);
if(si0){
goto L6;
}
si0=l0;
l3=si0;
goto L3;
L6:;
si0=l0;
si1=3U;
si0&=si1;
if(si0){
goto L7;
}
si0=l0;
l3=si0;
goto L4;
L7:;
si0=l0;
l3=si0;
L8:;
{
si0=l2;
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
si0=l3;
si1=1U;
si0+=si1;
l3=si0;
si1=3U;
si0&=si1;
si0=!(si0);
if(si0){
goto L4;
}
goto L8;
}
UNREACHABLE;
L5:;
si0=l4;
if(si0){
goto L9;
}
si0=l3;
si1=3U;
si0&=si1;
si0=!(si0);
if(si0){
goto L10;
}
L11:;
{
si0=l2;
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=l2;
si2=-1U;
si1+=si2;
l2=si1;
si0+=si1;
l3=si0;
si1=l1;
si2=l2;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si1=3U;
si0&=si1;
if(si0){
goto L11;
}
}
L10:;
si0=l2;
si1=3U;
si0=si0 <= si1;
if(si0){
goto L9;
}
L12:;
{
si0=l0;
si1=l2;
si2=-4U;
si1+=si2;
l2=si1;
si0+=si1;
si1=l1;
si2=l2;
si1+=si2;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l2;
si1=3U;
si0=si0 > si1;
if(si0){
goto L12;
}
}
L9:;
si0=l2;
si0=!(si0);
if(si0){
goto L1;
}
L13:;
{
si0=l0;
si1=l2;
si2=-1U;
si1+=si2;
l2=si1;
si0+=si1;
si1=l1;
si2=l2;
si1+=si2;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
si0=l2;
if(si0){
goto L13;
}
goto L1;
}
UNREACHABLE;
L4:;
si0=l2;
si1=3U;
si0=si0 <= si1;
if(si0){
goto L3;
}
L14:;
{
si0=l3;
si1=l1;
si1=i32_load(&i->m0,(U64)si1);
i32_store(&i->m0,(U64)si0,si1);
si0=l1;
si1=4U;
si0+=si1;
l1=si0;
si0=l3;
si1=4U;
si0+=si1;
l3=si0;
si0=l2;
si1=-4U;
si0+=si1;
l2=si0;
si1=3U;
si0=si0 > si1;
if(si0){
goto L14;
}
}
L3:;
si0=l2;
si0=!(si0);
if(si0){
goto L1;
}
L15:;
{
si0=l3;
si1=l1;
si1=i32_load8_u(&i->m0,(U64)si1);
i32_store8(&i->m0,(U64)si0,si1);
si0=l3;
si1=1U;
si0+=si1;
l3=si0;
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L15;
}
}
L1:;
si0=l0;
L0:;
return si0;
}

U32 adpcm_f11(adpcmInstance*i,U32 l0,U32 l1,U32 l2) {
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

U32 adpcm_f12(adpcmInstance*i) {
U32 si0;
si0=5520U;
L0:;
return si0;
}

U32 adpcm_f13(adpcmInstance*i,U32 l0,U32 l1) {
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

U32 adpcm_f14(adpcmInstance*i,U32 l0,U32 l1) {
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
si0=3824U;
si1=l0;
si2=l1;
si0=adpcm_f38(i,si0,si1,si2);
l1=si0;
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l1;
L0:;
return si0;
}

U32 adpcm_f15(adpcmInstance*i,U32 l0,U32 l1) {
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
si0=3824U;
si1=l0;
si2=l1;
si0=adpcm_f39(i,si0,si1,si2);
l1=si0;
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l1;
L0:;
return si0;
}

U32 adpcm_f16(adpcmInstance*i,U32 l0,U32 l1,U32 l2) {
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
si0=adpcm_f40(i,si0);
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
si0=adpcm_f40(i,si0);
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

U32 adpcm_f17(adpcmInstance*i,U32 l0) {
U32 si0;
si0=0U;
L0:;
return si0;
}

U64 adpcm_f18(adpcmInstance*i,U32 l0,U64 l1,U32 l2) {
U64 sj0;
sj0=0ULL;
L0:;
return sj0;
}

U32 adpcm_f19(adpcmInstance*i,U32 l0) {
U32 si0;
si0=1U;
L0:;
return si0;
}

void adpcm_f20(adpcmInstance*i,U32 l0) {
L0:;
}

U32 adpcm_f21(adpcmInstance*i,U32 l0) {
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

U32 adpcm_f22(adpcmInstance*i,U32 l0) {
U32 si0,si1;
si0=l0;
si1=-48U;
si0+=si1;
si1=10U;
si0=si0 < si1;
L0:;
return si0;
}

U32 adpcm_f23(adpcmInstance*i,U32 l0,U32 l1,U32 l2) {
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

U32 adpcm_f24(adpcmInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 si0,si1,si2;
si0=l0;
si1=0U;
si2=l1;
si0=adpcm_f23(i,si0,si1,si2);
l2=si0;
si1=l0;
si0-=si1;
si1=l1;
si2=l2;
si0=si2?si0:si1;
L0:;
return si0;
}

F64 adpcm_f25(adpcmInstance*i,F64 l0,U32 l1) {
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
sd0=adpcm_f25(i,sd0,si1);
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

U32 adpcm_f26(adpcmInstance*i,U32 l0,U32 l1,U32 l2) {
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
si0=adpcm_f21(i,si0);
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
si0=TF(i->t0,si3,U32 (*)(adpcmInstance*,U32,U32,U32))(i,si0,si1,si2);
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
si0=TF(i->t0,si3,U32 (*)(adpcmInstance*,U32,U32,U32))(i,si0,si1,si2);
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
si0=adpcm_f9(i,si0,si1,si2);
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

U32 adpcm_f27(adpcmInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
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
si0=adpcm_f11(i,si0,si1,si2);
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
si0=adpcm_f28(i,si0,si1,si2,si3,si4,si5,si6);
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
si0=adpcm_f19(i,si0);
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
si0=adpcm_f21(i,si0);
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
si0=adpcm_f28(i,si0,si1,si2,si3,si4,si5,si6);
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
si0=TF(i->t0,si3,U32 (*)(adpcmInstance*,U32,U32,U32))(i,si0,si1,si2);
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
adpcm_f20(i,si0);
L1:;
si0=l5;
si1=208U;
si0+=si1;
i->g0=si0;
si0=l4;
L0:;
return si0;
}

U32 adpcm_f28(adpcmInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6) {
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
adpcm_f29(i,si0,si1,si2);
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
si0=adpcm_f22(i,si0);
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
si0=adpcm_f22(i,si0);
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
si0=adpcm_f30(i,si0);
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
si0=adpcm_f22(i,si0);
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
si0=adpcm_f30(i,si0);
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
si1=3279U;
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
adpcm_f31(i,si0,si1,si2,si3);
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
si0=3248U;
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
si0=3248U;
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
si0=adpcm_f32(i,sj0,si1,si2);
l13=si0;
si0=0U;
l16=si0;
si0=3248U;
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
si1=3248U;
si0+=si1;
l24=si0;
si0=2U;
l16=si0;
goto L45;
L48:;
si0=0U;
l16=si0;
si0=3248U;
l24=si0;
si0=l7;
sj0=i64_load(&i->m0,(U64)si0+64U);
si1=l9;
si0=adpcm_f33(i,sj0,si1);
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
si0=3248U;
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
si0=3249U;
l24=si0;
goto L46;
L63:;
si0=3250U;
si1=3248U;
si2=l17;
si3=1U;
si2&=si3;
l16=si2;
si0=si2?si0:si1;
l24=si0;
L46:;
sj0=l25;
si1=l9;
si0=adpcm_f34(i,sj0,si1);
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
si1=3330U;
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
si1=adpcm_f24(i,si1,si2);
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
adpcm_f35(i,si0,si1,si2,si3,si4);
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
si0=adpcm_f46(i,si0,si1);
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
adpcm_f35(i,si0,si1,si2,si3,si4);
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
si0=adpcm_f46(i,si0,si1);
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
adpcm_f29(i,si0,si1,si2);
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
adpcm_f35(i,si0,si1,si2,si3,si4);
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
si0=TF(i->t0,si6,U32 (*)(adpcmInstance*,U32,F64,U32,U32,U32,U32))(i,si0,sd1,si2,si3,si4,si5);
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
adpcm_f31(i,si0,si1,si2,si3);
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
adpcm_f35(i,si0,si1,si2,si3,si4);
si0=l0;
si1=l24;
si2=l16;
adpcm_f29(i,si0,si1,si2);
si0=l0;
si1=48U;
si2=l12;
si3=l15;
si4=l17;
si5=65536U;
si4^=si5;
adpcm_f35(i,si0,si1,si2,si3,si4);
si0=l0;
si1=48U;
si2=l20;
si3=l18;
si4=0U;
adpcm_f35(i,si0,si1,si2,si3,si4);
si0=l0;
si1=l13;
si2=l18;
adpcm_f29(i,si0,si1,si2);
si0=l0;
si1=32U;
si2=l12;
si3=l15;
si4=l17;
si5=8192U;
si4^=si5;
adpcm_f35(i,si0,si1,si2,si3,si4);
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
si0=adpcm_f12(i);
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

void adpcm_f29(adpcmInstance*i,U32 l0,U32 l1,U32 l2) {
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
si0=adpcm_f26(i,si0,si1,si2);
L1:;
L0:;
}

U32 adpcm_f30(adpcmInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 si0,si1,si2,si3,si4;
si0=0U;
l1=si0;
si0=l0;
si0=i32_load(&i->m0,(U64)si0);
si0=i32_load8_s(&i->m0,(U64)si0);
si0=adpcm_f22(i,si0);
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
si0=adpcm_f22(i,si0);
if(si0){
goto L2;
}
}
si0=l3;
L0:;
return si0;
}

void adpcm_f31(adpcmInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
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
TF(i->t0,si2,void (*)(adpcmInstance*,U32,U32))(i,si0,si1);
L1:;
L0:;
}

U32 adpcm_f32(adpcmInstance*i,U64 l0,U32 l1,U32 l2) {
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
si2=3808U;
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

U32 adpcm_f33(adpcmInstance*i,U64 l0,U32 l1) {
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

U32 adpcm_f34(adpcmInstance*i,U64 l0,U32 l1) {
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

void adpcm_f35(adpcmInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
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
si0=adpcm_f11(i,si0,si1,si2);
si0=l2;
if(si0){
goto L2;
}
L3:;
{
si0=l0;
si1=l5;
si2=256U;
adpcm_f29(i,si0,si1,si2);
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
adpcm_f29(i,si0,si1,si2);
L1:;
si0=l5;
si1=256U;
si0+=si1;
i->g0=si0;
L0:;
}

U32 adpcm_f36(adpcmInstance*i,U32 l0,F64 l1,U32 l2,U32 l3,U32 l4,U32 l5) {
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
sj0=adpcm_f37(i,sd0);
l24=sj0;
sj1=-1ULL;
si0=(U64)((I64)sj0>(I64)sj1);
if(si0){
goto L2;
}
si0=1U;
l8=si0;
si0=3258U;
l9=si0;
sd0=l1;
sd0=-(sd0);
l1=sd0;
sj0=adpcm_f37(i,sd0);
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
si0=3261U;
l9=si0;
goto L1;
L3:;
si0=3264U;
si1=3259U;
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
adpcm_f35(i,si0,si1,si2,si3,si4);
si0=l0;
si1=l9;
si2=l8;
adpcm_f29(i,si0,si1,si2);
si0=l0;
si1=3277U;
si2=3320U;
si3=l5;
si4=32U;
si3&=si4;
l11=si3;
si1=si3?si1:si2;
si2=3281U;
si3=3324U;
si4=l11;
si2=si4?si2:si3;
sd3=l1;
sd4=l1;
si3=sd3 != sd4;
si1=si3?si1:si2;
si2=3U;
adpcm_f29(i,si0,si1,si2);
si0=l0;
si1=32U;
si2=l2;
si3=l10;
si4=l4;
si5=8192U;
si4^=si5;
adpcm_f35(i,si0,si1,si2,si3,si4);
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
sd0=adpcm_f25(i,sd0,si1);
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
si1=adpcm_f34(i,sj1,si2);
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
adpcm_f35(i,si0,si1,si2,si3,si4);
si0=l0;
si1=l9;
si2=l8;
adpcm_f29(i,si0,si1,si2);
si0=l0;
si1=48U;
si2=l2;
si3=l23;
si4=l4;
si5=65536U;
si4^=si5;
adpcm_f35(i,si0,si1,si2,si3,si4);
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
si0=adpcm_f34(i,sj0,si1);
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
adpcm_f29(i,si0,si1,si2);
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
si1=3328U;
si2=1U;
adpcm_f29(i,si0,si1,si2);
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
si0=adpcm_f34(i,sj0,si1);
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
adpcm_f29(i,si0,si1,si2);
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
si0=adpcm_f34(i,sj0,si1);
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
adpcm_f29(i,si0,si1,si2);
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
si1=3328U;
si2=1U;
adpcm_f29(i,si0,si1,si2);
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
adpcm_f29(i,si0,si1,si2);
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
adpcm_f35(i,si0,si1,si2,si3,si4);
si0=l0;
si1=l19;
si2=l13;
si3=l19;
si2-=si3;
adpcm_f29(i,si0,si1,si2);
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
adpcm_f35(i,si0,si1,si2,si3,si4);
L50:;
si0=l0;
si1=32U;
si2=l2;
si3=l23;
si4=l4;
si5=8192U;
si4^=si5;
adpcm_f35(i,si0,si1,si2,si3,si4);
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
si0=adpcm_f34(i,sj0,si1);
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
si2=3808U;
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
adpcm_f35(i,si0,si1,si2,si3,si4);
si0=l0;
si1=l23;
si2=l21;
adpcm_f29(i,si0,si1,si2);
si0=l0;
si1=48U;
si2=l2;
si3=l10;
si4=l4;
si5=65536U;
si4^=si5;
adpcm_f35(i,si0,si1,si2,si3,si4);
si0=l0;
si1=l6;
si2=16U;
si1+=si2;
si2=l18;
adpcm_f29(i,si0,si1,si2);
si0=l0;
si1=48U;
si2=l11;
si3=l18;
si2-=si3;
si3=0U;
si4=0U;
adpcm_f35(i,si0,si1,si2,si3,si4);
si0=l0;
si1=l22;
si2=l19;
adpcm_f29(i,si0,si1,si2);
si0=l0;
si1=32U;
si2=l2;
si3=l10;
si4=l4;
si5=8192U;
si4^=si5;
adpcm_f35(i,si0,si1,si2,si3,si4);
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

U64 adpcm_f37(adpcmInstance*i,F64 l0) {
U64 sj0;
F64 sd0;
sd0=l0;
sj0=i64_reinterpret_f64(sd0);
L0:;
return sj0;
}

U32 adpcm_f38(adpcmInstance*i,U32 l0,U32 l1,U32 l2) {
U32 si0,si1,si2,si3,si4;
si0=l0;
si1=l1;
si2=l2;
si3=0U;
si4=0U;
si0=adpcm_f27(i,si0,si1,si2,si3,si4);
L0:;
return si0;
}

U32 adpcm_f39(adpcmInstance*i,U32 l0,U32 l1,U32 l2) {
U32 si0,si1,si2,si3,si4;
si0=l0;
si1=l1;
si2=l2;
si3=4U;
si4=0U;
si0=adpcm_f27(i,si0,si1,si2,si3,si4);
L0:;
return si0;
}

U32 adpcm_f40(adpcmInstance*i,U32 l0) {
U32 si0,si1;
si0=l0;
if(si0){
goto L1;
}
si0=0U;
goto L0;
L1:;
si0=adpcm_f12(i);
si1=l0;
i32_store(&i->m0,(U64)si0,si1);
si0=-1U;
L0:;
return si0;
}

U32 adpcm_f41(adpcmInstance*i) {
U32 si0;
si0=42U;
L0:;
return si0;
}

U32 adpcm_f42(adpcmInstance*i) {
U32 si0;
si0=adpcm_f41(i);
L0:;
return si0;
}

U32 adpcm_f43(adpcmInstance*i) {
U32 si0;
si0=6624U;
L0:;
return si0;
}

void adpcm_f44(adpcmInstance*i) {
U32 si0,si1;
si0=0U;
si1=6600U;
i32_store(&i->m0,(U64)si0+6720U,si1);
si0=0U;
si1=adpcm_f42(i);
i32_store(&i->m0,(U64)si0+6648U,si1);
L0:;
}

U32 adpcm_f45(adpcmInstance*i,U32 l0,U32 l1,U32 l2) {
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
si0=adpcm_f43(i);
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
si0=adpcm_f12(i);
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
si0=adpcm_f12(i);
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

U32 adpcm_f46(adpcmInstance*i,U32 l0,U32 l1) {
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
si0=adpcm_f45(i,si0,si1,si2);
L0:;
return si0;
}

void adpcm_f47(adpcmInstance*i,U32 l0) {
U32 si0;
si0=l0;
i->g1=si0;
L0:;
}

U32 adpcm_f48(adpcmInstance*i) {
U32 si0;
si0=i->g1;
L0:;
return si0;
}

U32 adpcm_f49(adpcmInstance*i) {
U32 si0;
si0=i->g0;
L0:;
return si0;
}

void adpcm_f50(adpcmInstance*i,U32 l0) {
U32 si0;
si0=l0;
i->g0=si0;
L0:;
}

U32 adpcm_f51(adpcmInstance*i,U32 l0) {
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

U64 adpcm_f52(adpcmInstance*i,U32 l0,U32 l1,U64 l2,U32 l3) {
U32 si0,si2,si3;
U64 sj0,sj1;
si0=l1;
sj1=l2;
si2=l3;
si3=l0;
sj0=TF(i->t0,si3,U64 (*)(adpcmInstance*,U32,U64,U32))(i,si0,sj1,si2);
L0:;
return sj0;
}

U32 adpcm_f53(adpcmInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
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
sj0=adpcm_f52(i,si0,si1,sj2,si3);
l5=sj0;
sj0=l5;
sj1=32ULL;
sj0>>=(sj1&63);
si0=(U32)(sj0);
adpcm_f47(i,si0);
sj0=l5;
si0=(U32)(sj0);
L0:;
return si0;
}

const U8 d0[]={
0xc,0x0,0x0,0x0,0xd4,0xff,0xff,0xff,0xd4,0xff,0xff,0xff,0xd4,0x0,0x0,0x0,0x30,0x0,0x0,0x0,0x90,0xfd,0xff,0xff,0x80,0x0,0x0,0x0,0xa8,0x5,0x0,0x0,0xb8,0xfc,0xff,0xff,0x6c,0xf3,0xff,0xff,0xdc,0xe,0x0,0x0,0x90,0x3c,0x0,0x0,0x90,0x3c,0x0,0x0,0xdc,0xe,0x0,0x0,0x6c,0xf3,0xff,0xff,0xb8,0xfc,0xff,0xff,0xa8,0x5,0x0,0x0,0x80,0x0,0x0,0x0,0x90,0xfd,0xff,0xff,0x30,0x0,0x0,0x0,0xd4,0x0,0x0,0x0,0xd4,0xff,0xff,0xff,0xd4,0xff,0xff,0xff,0xc,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x18,0xb0,0xff,0xff,0xa0,0xcd,0xff,0xff,0xf8,0xdc,0xff,0xff,0x70,0xe7,0xff,0xff,0x70,0xef,0xff,0xff,0xe8,0xf5,0xff,0xff,0x50,0xfb,0xff,0xff,0xe8,0x4f,0x0,0x0,0x60,0x32,0x0,0x0,0x8,0x23,0x0,0x0,0x90,0x18,0x0,0x0,0x90,0x10,0x0,0x0,0x18,0xa,0x0,0x0,0xb0,0x4,0x0,0x0,0x0,0x0,0x0,0x0,0x78,0xff,0xff,0xff,0x78,0xff,0xff,0xff,0x78,0xff,0xff,0xff,0x78,0xff,0xff,0xff,0x18,0x9f,0xff,0xff,0x70,0xaa,0xff,0xff,0xc0,0xb5,0xff,0xff,0xc0,0xbe,0xff,0xff,0x78,0xc5,0xff,0xff,0x38,0xcb,0xff,0xff,0x8,0xd0,0xff,0xff,0x48,0xd4,0xff,0xff,0x8,0xd8,0xff,0xff,0x70,0xdb,0xff,0xff,0x80,0xde,0xff,0xff,0x50,0xe1,0xff,0xff,0xe8,0xe3,0xff,0xff,0x50,0xe6,0xff,0xff,0x90,0xe8,0xff,0xff,0xb0,0xea,0xff,0xff,0xb0,0xec,0xff,0xff,0x90,0xee,0xff,0xff,0x58,0xf0,0xff,0xff,0x8,0xf2,0xff,0xff,0xa0,0xf3,0xff,0xff,0x28,0xf5,0xff,0xff,0xa0,0xf6,0xff,0xff,0x10,0xf8,0xff,0xff,0x68,0xf9,0xff,0xff,0xb0,0xfa,0xff,0xff,0xf0,0xfb,0xff,0xff,0x28,0xfd,0xff,0xff,0xe8,0x60,0x0,0x0,0x90,0x55,0x0,0x0,0x40,0x4a,0x0,0x0,0x40,0x41,0x0,0x0,0x88,0x3a,0x0,0x0,0xc8,0x34,0x0,0x0,0xf8,0x2f,0x0,0x0,0xb8,0x2b,0x0,0x0,0xf8,0x27,0x0,0x0,0x90,0x24,0x0,0x0,0x80,0x21,0x0,0x0,0xb0,0x1e,0x0,0x0,0x18,0x1c,0x0,0x0,0xb0,0x19,0x0,0x0,0x70,0x17,0x0,0x0,0x50,0x15,0x0,0x0,0x50,0x13,0x0,0x0,0x70,0x11,0x0,0x0,0xa8,0xf,0x0,0x0,0xf8,0xd,0x0,0x0,0x60,0xc,0x0,0x0,0xd8,0xa,0x0,0x0,0x60,0x9,0x0,0x0,0xf0,0x7,0x0,0x0,0x98,0x6,0x0,0x0,0x50,0x5,0x0,0x0,0x10,0x4,0x0,0x0,0xd8,0x2,0x0,0x0,0xb0,0x1,0x0,0x0,0x88,0x0,0x0,0x0,0x50,0xfe,0xff,0xff,0x78,0xff,0xff,0xff,0xc4,0xff,0xff,0xff,0xe2,0xb,0x0,0x0,0xae,0x4,0x0,0x0,0x1a,0x2,0x0,0x0,0x4e,0x1,0x0,0x0,0xac,0x0,0x0,0x0,0x3a,0x0,0x0,0x0,0xe2,0xff,0xff,0xff,0xe2,0xb,0x0,0x0,0xae,0x4,0x0,0x0,0x1a,0x2,0x0,0x0,0x4e,0x1,0x0,0x0,0xac,0x0,0x0,0x0,0x3a,0x0,0x0,0x0,0xe2,0xff,0xff,0xff,0xc4,0xff,0xff,0xff,0x0,0x8,0x0,0x0,0x2d,0x8,0x0,0x0,0x5b,0x8,0x0,0x0,0x8a,0x8,0x0,0x0,0xb9,0x8,0x0,0x0,0xea,0x8,0x0,0x0,0x1c,0x9,0x0,0x0,0x4f,0x9,0x0,0x0,0x83,0x9,0x0,0x0,0xb9,0x9,0x0,0x0,0xef,0x9,0x0,0x0,0x27,0xa,0x0,0x0,0x60,0xa,0x0,0x0,0x9a,0xa,0x0,0x0,0xd6,0xa,0x0,0x0,0x12,0xb,0x0,0x0,0x50,0xb,0x0,0x0,0x90,0xb,0x0,0x0,0xd1,0xb,0x0,0x0,0x13,0xc,0x0,0x0,0x56,0xc,0x0,0x0,0x9c,0xc,0x0,0x0,0xe2,0xc,0x0,0x0,0x2b,0xd,0x0,0x0,0x74,0xd,0x0,0x0,0xc0,0xd,0x0,0x0,0xd,0xe,0x0,0x0,0x5c,0xe,0x0,0x0,0xac,0xe,0x0,0x0,0xfe,0xe,0x0,0x0,0x52,0xf,0x0,0x0,0xa8,0xf,0x0,0x0,0x18,0x1,0x0,0x0,0x40,0x2,0x0,0x0,0x70,0x3,0x0,0x0,0xb0,0x4,0x0,0x0,0xf0,0x5,0x0,0x0,0x48,0x7,0x0,0x0,0xa0,0x8,0x0,0x0,0x18,0xa,0x0,0x0,0x90,0xb,0x0,0x0,0x30,0xd,0x0,0x0,0xc8,0xe,0x0,0x0,0x90,0x10,0x0,0x0,0x58,0x12,0x0,0x0,0x50,0x14,0x0,0x0,0x50,0x16,0x0,0x0,0x90,0x18,0x0,0x0,0xd0,0x1a,0x0,0x0,0x60,0x1d,0x0,0x0,0xf8,0x1f,0x0,0x0,0x8,0x23,0x0,0x0,0x18,0x26,0x0,0x0,0xd8,0x29,0x0,0x0,0x90,0x2d,0x0,0x0,0x60,0x32,0x0,0x0,0x28,0x37,0x0,0x0,0xe0,0x3d,0x0,0x0,0x98,0x44,0x0,0x0,0xe8,0x4f,0x0,0x0,0x38,0x5b,0x0,0x0,0xff,0x7f,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x3d,0x0,0x0,0x0,0x3c,0x0,0x0,0x0,0x3b,0x0,0x0,0x0,0x3a,0x0,0x0,0x0,0x39,0x0,0x0,0x0,0x38,0x0,0x0,0x0,0x37,0x0,0x0,0x0,0x36,0x0,0x0,0x0,0x35,0x0,0x0,0x0,0x34,0x0,0x0,0x0,0x33,0x0,0x0,0x0,0x32,0x0,0x0,0x0,0x31,0x0,0x0,0x0,0x30,0x0,0x0,0x0,0x2f,0x0,0x0,0x0,0x2e,0x0,0x0,0x0,0x2d,0x0,0x0,0x0,0x2c,0x0,0x0,0x0,0x2b,0x0,0x0,0x0,0x2a,0x0,0x0,0x0,0x29,0x0,0x0,0x0,0x28,0x0,0x0,0x0,0x27,0x0,0x0,0x0,0x26,0x0,0x0,0x0,0x25,0x0,0x0,0x0,0x24,0x0,0x0,0x0,0x23,0x0,0x0,0x0,0x22,0x0,0x0,0x0,0x21,0x0,0x0,0x0,0x20,0x0,0x0,0x0,0x20,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x3f,0x0,0x0,0x0,0x3e,0x0,0x0,0x0,0x1f,0x0,0x0,0x0,0x1e,0x0,0x0,0x0,0x1d,0x0,0x0,0x0,0x1c,0x0,0x0,0x0,0x1b,0x0,0x0,0x0,0x1a,0x0,0x0,0x0,0x19,0x0,0x0,0x0,0x18,0x0,0x0,0x0,0x17,0x0,0x0,0x0,0x16,0x0,0x0,0x0,0x15,0x0,0x0,0x0,0x14,0x0,0x0,0x0,0x13,0x0,0x0,0x0,0x12,0x0,0x0,0x0,0x11,0x0,0x0,0x0,0x10,0x0,0x0,0x0,0xf,0x0,0x0,0x0,0xe,0x0,0x0,0x0,0xd,0x0,0x0,0x0,0xc,0x0,0x0,0x0,0xb,0x0,0x0,0x0,0xa,0x0,0x0,0x0,0x9,0x0,0x0,0x0,0x8,0x0,0x0,0x0,0x7,0x0,0x0,0x0,0x6,0x0,0x0,0x0,0x5,0x0,0x0,0x0,0x4,0x0,0x0,0x0,0x4,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x10,0xe3,0xff,0xff,0xb0,0xf9,0xff,0xff,0xf0,0x1c,0x0,0x0,0x50,0x6,0x0,0x0,0x1e,0x3,0x0,0x0,0x2a,0xff,0xff,0xff,0x1e,0x3,0x0,0x0,0x2a,0xff,0xff,0xff,0x44,0x0,0x0,0x0,0x44,0x0,0x0,0x0,0x44,0x0,0x0,0x0,0x44,0x0,0x0,0x0,0x44,0x0,0x0,0x0,0x44,0x0,0x0,0x0,0x44,0x0,0x0,0x0,0x44,0x0,0x0,0x0,0x44,0x0,0x0,0x0,0x44,0x0,0x0,0x0,0x44,0x0,0x0,0x0,0x44,0x0,0x0,0x0,0x44,0x0,0x0,0x0,0x44,0x0,0x0,0x0,0x44,0x0,0x0,0x0,0x44,0x0,0x0,0x0,0x44,0x0,0x0,0x0,0x43,0x0,0x0,0x0,0x43,0x0,0x0,0x0,0x43,0x0,0x0,0x0,0x43,0x0,0x0,0x0,0x43,0x0,0x0,0x0,0x43,0x0,0x0,0x0,0x43,0x0,0x0,0x0,0x42,0x0,0x0,0x0,0x42,0x0,0x0,0x0,0x42,0x0,0x0,0x0,0x42,0x0,0x0,0x0,0x42,0x0,0x0,0x0,0x42,0x0,0x0,0x0,0x41,0x0,0x0,0x0,0x41,0x0,0x0,0x0,0x41,0x0,0x0,0x0,0x41,0x0,0x0,0x0,0x41,0x0,0x0,0x0,0x40,0x0,0x0,0x0,0x40,0x0,0x0,0x0,0x40,0x0,0x0,0x0,0x40,0x0,0x0,0x0,0x40,0x0,0x0,0x0,0x40,0x0,0x0,0x0,0x40,0x0,0x0,0x0,0x40,0x0,0x0,0x0,0x3f,0x0,0x0,0x0,0x3f,0x0,0x0,0x0,0x3f,0x0,0x0,0x0,0x3f,0x0,0x0,0x0,0x3f,0x0,0x0,0x0,0x3e,0x0,0x0,0x0,0x3e,0x0,0x0,0x0,0x3e,0x0,0x0,0x0,0x3e,0x0,0x0,0x0,0x3e,0x0,0x0,0x0,0x3e,0x0,0x0,0x0,0x3d,0x0,0x0,0x0,0x3d,0x0,0x0,0x0,0x3d,0x0,0x0,0x0,0x3d,0x0,0x0,0x0,0x3d,0x0,0x0,0x0,0x3d,0x0,0x0,0x0,0x3c,0x0,0x0,0x0,0x3c,0x0,0x0,0x0,0x3c,0x0,0x0,0x0,0x3c,0x0,0x0,0x0,0x3c,0x0,0x0,0x0,0x3c,0x0,0x0,0x0,0x3c,0x0,0x0,0x0,0x3c,0x0,0x0,0x0,0x3c,0x0,0x0,0x0,0x3b,0x0,0x0,0x0,0x3b,0x0,0x0,0x0,0x3b,0x0,0x0,0x0,0x3b,0x0,0x0,0x0,0x3b,0x0,0x0,0x0,0x3b,0x0,0x0,0x0,0x3b,0x0,0x0,0x0,0x3b,0x0,0x0,0x0,0x3b,0x0,0x0,0x0,0x3b,0x0,0x0,0x0,0x3b,0x0,0x0,0x0,0x3b,0x0,0x0,0x0,0x3b,0x0,0x0,0x0,0x3b,0x0,0x0,0x0,0x3b,0x0,0x0,0x0,0x3b,0x0,0x0,0x0,0x3b,0x0,0x0,0x0,0x3b,0x0,0x0,0x0,0x3b,0x0,0x0,0x0,0x3b,0x0,0x0,0x0,0x3b,0x0,0x0,0x0,0x3b,0x0,0x0,0x0,0x3b,0x0,0x0,0x0,0x3c,0x0,0x0,0x0,0x3c,0x0,0x0,0x0,0x3c,0x0,0x0,0x0,0x3c,0x0,0x0,0x0,0x3c,0x0,0x0,0x0,0x3c,0x0,0x0,0x0,0x3c,0x0,0x0,0x0,0x3c,0x0,0x0,0x0,0xfd,0x0,0x0,0x0,0xde,0x0,0x0,0x0,0x77,0x0,0x0,0x0,0xba,0x0,0x0,0x0,0xf2,0x0,0x0,0x0,0x90,0x0,0x0,0x0,0x20,0x0,0x0,0x0,0xa0,0x0,0x0,0x0,0xec,0x0,0x0,0x0,0xed,0x0,0x0,0x0,0xef,0x0,0x0,0x0,0xf1,0x0,0x0,0x0,0xf3,0x0,0x0,0x0,0xf4,0x0,0x0,0x0,0xf5,0x0,0x0,0x0,0xf5,0x0,0x0,0x0,0xf5,0x0,0x0,0x0,0xf5,0x0,0x0,0x0,0xf6,0x0,0x0,0x0,0xf6,0x0,0x0,0x0,0xf6,0x0,0x0,0x0,0xf7,0x0,0x0,0x0,0xf8,0x0,0x0,0x0,0xf7,0x0,0x0,0x0,0xf8,0x0,0x0,0x0,0xf7,0x0,0x0,0x0,0xf9,0x0,0x0,0x0,0xf8,0x0,0x0,0x0,0xf7,0x0,0x0,0x0,0xf9,0x0,0x0,0x0,0xf8,0x0,0x0,0x0,0xf8,0x0,0x0,0x0,0xf6,0x0,0x0,0x0,0xf8,0x0,0x0,0x0,0xf8,0x0,0x0,0x0,0xf7,0x0,0x0,0x0,0xf9,0x0,0x0,0x0,0xf9,0x0,0x0,0x0,0xf9,0x0,0x0,0x0,0xf8,0x0,0x0,0x0,0xf7,0x0,0x0,0x0,0xfa,0x0,0x0,0x0,0xf8,0x0,0x0,0x0,0xf8,0x0,0x0,0x0,0xf7,0x0,0x0,0x0,0xfb,0x0,0x0,0x0,0xfa,0x0,0x0,0x0,0xf9,0x0,0x0,0x0,0xf8,0x0,0x0,0x0,0xf8,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xff,0xff,0xff,0xff,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xfe,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xfe,0xff,0xff,0xff,0x0,0x0,0x0,0x0,0xfc,0xff,0xff,0xff,0x1,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0xfb,0xff,0xff,0xff,0x2,0x0,0x0,0x0,0x2,0x0,0x0,0x0,0x3,0x0,0x0,0x0,0xb,0x0,0x0,0x0,0x14,0x0,0x0,0x0,0x14,0x0,0x0,0x0,0x16,0x0,0x0,0x0,0x18,0x0,0x0,0x0,0x20,0x0,0x0,0x0,0x21,0x0,0x0,0x0,0x26,0x0,0x0,0x0,0x27,0x0,0x0,0x0,0x2e,0x0,0x0,0x0,0x2f,0x0,0x0,0x0,0x33,0x0,0x0,0x0,0x32,0x0,0x0,0x0,0x35,0x0,0x0,0x0,0x33,0x0,0x0,0x0,0x36,0x0,0x0,0x0,0x34,0x0,0x0,0x0,0x37,0x0,0x0,0x0,0x34,0x0,0x0,0x0,0x37,0x0,0x0,0x0,0x35,0x0,0x0,0x0,0x38,0x0,0x0,0x0,0x36,0x0,0x0,0x0,0x39,0x0,0x0,0x0,0x38,0x0,0x0,0x0,0x3b,0x0,0x0,0x0,0x3a,0x0,0x0,0x0,0x3f,0x0,0x0,0x0,0x3f,0x0,0x0,0x0,0x40,0x0,0x0,0x0,0x3a,0x0,0x0,0x0,0x3d,0x0,0x0,0x0,0x3e,0x0,0x0,0x0,0x41,0x0,0x0,0x0,0x3c,0x0,0x0,0x0,0x3e,0x0,0x0,0x0,0x3f,0x0,0x0,0x0,0x42,0x0,0x0,0x0,0x3e,0x0,0x0,0x0,0x3b,0x0,0x0,0x0,0x37,0x0,0x0,0x0,0x3b,0x0,0x0,0x0,0x3e,0x0,0x0,0x0,0x41,0x0,0x0,0x0,0x3b,0x0,0x0,0x0,0x3b,0x0,0x0,0x0,0x3a,0x0,0x0,0x0,0x3b,0x0,0x0,0x0,0x36,0x0,0x0,0x0,0x39,0x0,0x0,0x0,0x3b,0x0,0x0,0x0,0x3f,0x0,0x0,0x0,0x3c,0x0,0x0,0x0,0x3b,0x0,0x0,0x0,0x37,0x0,0x0,0x0,0x3b,0x0,0x0,0x0,0x3d,0x0,0x0,0x0,0x41,0x0,0x0,0x0,0x3d,0x0,0x0,0x0,0x3e,0x0,0x0,0x0,0x3c,0x0,0x0,0x0,0x3e,0x0,0x0,0x0,0x3b,0x0,0x0,0x0,0x3a,0x0,0x0,0x0,0x37,0x0,0x0,0x0,0x3b,0x0,0x0,0x0,0x3e,0x0,0x0,0x0,0x41,0x0,0x0,0x0,0x3c,0x0,0x0,0x0,0x3b,0x0,0x0,0x0,0x39,0x0,0x0,0x0,0x3a,0x0,0x0,0x0,0x36,0x0,0x0,0x0,0x2d,0x2b,0x20,0x20,0x20,0x30,0x58,0x30,0x78,0x0,0x2d,0x30,0x58,0x2b,0x30,0x58,0x20,0x30,0x58,0x2d,0x30,0x78,0x2b,0x30,0x78,0x20,0x30,0x78,0x0,0x6e,0x61,0x6e,0x0,0x69,0x6e,0x66,0x0,0x45,0x72,0x72,0x6f,0x72,0x20,0x72,0x65,0x74,0x75,0x72,0x6e,0x20,0x66,0x72,0x6f,0x6d,0x20,0x67,0x65,0x74,0x74,0x69,0x6d,0x65,0x6f,0x66,0x64,0x61,0x79,0x3a,0x20,0x25,0x64,0x0,0x4e,0x41,0x4e,0x0,0x49,0x4e,0x46,0x0,0x2e,0x0,0x28,0x6e,0x75,0x6c,0x6c,0x29,0x0,0x25,0x30,0x2e,0x36,0x66,0xa,0x0,0x19,0x0,0xa,0x0,0x19,0x19,0x19,0x0,0x0,0x0,0x0,0x5,0x0,0x0,0x0,0x0,0x0,0x0,0x9,0x0,0x0,0x0,0x0,0xb,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x19,0x0,0x11,0xa,0x19,0x19,0x19,0x3,0xa,0x7,0x0,0x1,0x0,0x9,0xb,0x18,0x0,0x0,0x9,0x6,0xb,0x0,0x0,0xb,0x0,0x6,0x19,0x0,0x0,0x0,0x19,0x19,0x19,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xe,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x19,0x0,0xa,0xd,0x19,0x19,0x19,0x0,0xd,0x0,0x0,0x2,0x0,0x9,0xe,0x0,0x0,0x0,0x9,0x0,0xe,0x0,0x0,0xe,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xc,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x13,0x0,0x0,0x0,0x0,0x13,0x0,0x0,0x0,0x0,0x9,0xc,0x0,0x0,0x0,0x0,0x0,0xc,0x0,0x0,0xc,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x10,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xf,0x0,0x0,0x0,0x4,0xf,0x0,0x0,0x0,0x0,0x9,0x10,0x0,0x0,0x0,0x0,0x0,0x10,0x0,0x0,0x10,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x12,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x11,0x0,0x0,0x0,0x0,0x11,0x0,0x0,0x0,0x0,0x9,0x12,0x0,0x0,0x0,0x0,0x0,0x12,0x0,0x0,0x12,0x0,0x0,0x1a,0x0,0x0,0x0,0x1a,0x1a,0x1a,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x1a,0x0,0x0,0x0,0x1a,0x1a,0x1a,0x0,0x0,0x0,0x0,0x0,0x0,0x9,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x14,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x17,0x0,0x0,0x0,0x0,0x17,0x0,0x0,0x0,0x0,0x9,0x14,0x0,0x0,0x0,0x0,0x0,0x14,0x0,0x0,0x14,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x16,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x15,0x0,0x0,0x0,0x0,0x15,0x0,0x0,0x0,0x0,0x9,0x16,0x0,0x0,0x0,0x0,0x0,0x16,0x0,0x0,0x16,0x0,0x0,0x30,0x31,0x32,0x33,0x34,0x35,0x36,0x37,0x38,0x39,0x41,0x42,0x43,0x44,0x45,0x46,
};

const U8 d1[]={
0x5,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x2,0x0,0x0,0x0,0x3,0x0,0x0,0x0,0xa8,0x15,0x0,0x0,0x0,0x4,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xff,0xff,0xff,0xff,0xa,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
};

static void adpcmInitMemories(adpcmInstance* i) {
wasmMemoryAllocate(&i->m0, 256, 32768);
LOAD_DATA(i->m0, 1024U, d0, 2800);
LOAD_DATA(i->m0, 3824U, d1, 144);
}

static void adpcmInitTables(adpcmInstance* i) {
U32 offset;
wasmTableAllocate(&i->t0, 5, 5);
offset=1U;
i->t0.data[offset+0]=(wasmFunc)&adpcm_f17;
i->t0.data[offset+1]=(wasmFunc)&adpcm_f16;
i->t0.data[offset+2]=(wasmFunc)&adpcm_f18;
i->t0.data[offset+3]=(wasmFunc)&adpcm_f36;
}

static void adpcmInitGlobals(adpcmInstance* i) {
i->g0=72288U;
i->g1=0U;
}

static void adpcmInitImports(adpcmInstance* i, void* resolve(const char* module, const char* name)) {
if (resolve == NULL) { return; }
i->env_emscriptenX5FmemcpyX5Fbig=(void(*)(adpcmInstance*,U32,U32,U32))resolve("env", "emscripten_memcpy_big");
i->env_emscriptenX5FdateX5Fnow=(F64(*)(adpcmInstance*))resolve("env", "emscripten_date_now");
i->wasiX5FsnapshotX5Fpreview1_fdX5Fwrite=(U32(*)(adpcmInstance*,U32,U32,U32,U32))resolve("wasi_snapshot_preview1", "fd_write");
}

wasmMemory*adpcm_memory(adpcmInstance* i){
return &i->m0;
}

void adpcm_X5FX5FwasmX5FcallX5Fctors(adpcmInstance*i){
adpcm_f3(i);
}

U32 adpcm_X5FX5FmainX5FargcX5Fargv(adpcmInstance*i,U32 l0,U32 l1){
return adpcm_f8(i,l0,l1);
}

U32 adpcm_X5FX5FerrnoX5Flocation(adpcmInstance*i){
return adpcm_f12(i);
}

U32 adpcm_stackSave(adpcmInstance*i){
return adpcm_f49(i);
}

void adpcm_stackRestore(adpcmInstance*i,U32 l0){
adpcm_f50(i,l0);
}

U32 adpcm_stackAlloc(adpcmInstance*i,U32 l0){
return adpcm_f51(i,l0);
}

U32 adpcm_dynCallX5Fjiji(adpcmInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4){
return adpcm_f53(i,l0,l1,l2,l3,l4);
}

void adpcmInstantiate(adpcmInstance* i, void* resolve(const char* module, const char* name)) {
adpcmInitImports(i, resolve);
adpcmInitMemories(i);
adpcmInitTables(i);
adpcmInitGlobals(i);
}

void adpcmFreeInstance(adpcmInstance* i) {
wasmMemoryFree(&i->m0);
wasmTableFree(&i->t0);
}

