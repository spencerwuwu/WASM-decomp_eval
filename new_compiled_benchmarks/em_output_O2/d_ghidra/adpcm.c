#include "adpcm.h"



int abs(int __x)

{
  int iVar1;
  
  iVar1 = -__x;
  if (0 < __x) {
    iVar1 = __x;
  }
  return iVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void encode(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  ulong uVar22;
  uint uVar23;
  ulong uVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  long lVar35;
  long lVar36;
  long lVar37;
  long lVar38;
  long lVar39;
  long lVar40;
  long lVar41;
  
  iVar18 = _DAT_48490c8d48086394;
  iVar17 = _DAT_48490c8d48086390;
  iVar16 = _DAT_48490c8d4808638c;
  iVar15 = _DAT_48490c8d48086388;
  iVar14 = _DAT_48490c8d48086384;
  iVar13 = _DAT_48490c8d48086380;
  iVar12 = _DAT_48490c8d4808637c;
  iVar11 = _DAT_48490c8d48086378;
  iVar10 = _DAT_48490c8d48086374;
  iVar9 = _DAT_48490c8d48086370;
  iVar8 = _DAT_48490c8d4808636c;
  iVar7 = _DAT_48490c8d48086368;
  iVar6 = _DAT_48490c8d48086364;
  iVar5 = _DAT_48490c8d48086360;
  iVar4 = _DAT_48490c8d4808635c;
  iVar3 = _DAT_48490c8d48086358;
  iVar2 = _DAT_48490c8d48086354;
  iVar1 = _DAT_48490c8d48086350;
  lVar19 = (long)_DAT_48490c8d48086350;
  lVar28 = (long)_DAT_48490c8d48086354;
  lVar25 = (long)_DAT_48490c8d48086358;
  lVar33 = (long)_DAT_48490c8d4808635c;
  lVar35 = (long)_DAT_48490c8d48086360;
  lVar26 = (long)_DAT_48490c8d48086364;
  lVar27 = (long)_DAT_48490c8d48086368;
  lVar29 = (long)_DAT_48490c8d4808636c;
  lVar34 = (long)_DAT_48490c8d48086370;
  lVar36 = (long)_DAT_48490c8d48086374;
  lVar30 = (long)_DAT_48490c8d48086378;
  lVar31 = (long)_DAT_48490c8d4808637c;
  lVar32 = (long)_DAT_48490c8d48086380;
  lVar37 = (long)_DAT_48490c8d48086384;
  lVar20 = (long)_DAT_48490c8d48086388;
  lVar40 = (long)_DAT_48490c8d4808638c;
  lVar38 = (long)_DAT_48490c8d48086390;
  lVar21 = (long)_DAT_48490c8d48086394;
  lVar41 = (long)_DAT_48490c8d48086398;
  lVar39 = (long)_DAT_48490c8d4808639c;
  _DAT_48490c8d48086350 = _DAT_48490c8d48086348;
  _DAT_48490c8d48086354 = _DAT_48490c8d4808634c;
  _DAT_48490c8d48086358 = iVar1;
  _DAT_48490c8d4808635c = iVar2;
  _DAT_48490c8d48086360 = iVar3;
  _DAT_48490c8d48086364 = iVar4;
  _DAT_48490c8d48086368 = iVar5;
  _DAT_48490c8d4808636c = iVar6;
  _DAT_48490c8d48086370 = iVar7;
  _DAT_48490c8d48086374 = iVar8;
  _DAT_48490c8d48086378 = iVar9;
  _DAT_48490c8d4808637c = iVar10;
  _DAT_48490c8d48086380 = iVar11;
  _DAT_48490c8d48086384 = iVar12;
  _DAT_48490c8d48086388 = iVar13;
  _DAT_48490c8d4808638c = iVar14;
  _DAT_48490c8d480863a0 = CONCAT44(_DAT_48490c8d4808639c,_DAT_48490c8d48086398);
  _DAT_48490c8d48086390 = iVar15;
  _DAT_48490c8d48086394 = iVar16;
  _DAT_48490c8d48086398 = iVar17;
  _DAT_48490c8d4808639c = iVar18;
  lVar20 = lVar19 * -0x2c + (long)_DAT_48490c8d48086348 * 0xc +
           lVar27 * -0x348 + lVar35 * 0x80 + lVar25 * 0x30 +
           lVar32 * -0xc94 + lVar30 * 0x3c90 + lVar34 * 0xedc +
           (long)_DAT_48490c8d480863a0 * -0x2c + lVar41 * 0xd4 + lVar38 * -0x270 + lVar20 * 0x5a8;
  lVar19 = lVar39 * -0x2c + lVar21 * 0x30 + lVar40 * 0x80 + lVar37 * -0x348 +
           lVar31 * 0xedc + lVar36 * 0x3c90 + lVar29 * -0xc94 +
           lVar26 * 0x5a8 + lVar33 * -0x270 + lVar28 * 0xd4 + (long)_DAT_48490c8d4808634c * -0x2c +
           (long)_DAT_48490c8d480863a4 * 0xc;
  _DAT_eec149ce29490289 = (int)((ulong)(lVar19 + lVar20) >> 0xf);
  _DAT_d8b48318944 = (undefined4)((ulong)(lVar20 - lVar19) >> 0xf);
  _DAT_2d8b4c398944 =
       (int)((ulong)((long)_DAT_48faaf0f483e635c * (long)_DAT_358b4811635c +
                     (long)_DAT_48faaf0f483e6358 * (long)_DAT_358b48116358 +
                    (long)_DAT_48faaf0f483e6354 * (long)_DAT_358b48116354 +
                    (long)_DAT_48faaf0f483e6350 * (long)_DAT_358b48116350 +
                    (long)_DAT_48faaf0f483e634c * (long)_DAT_358b4811634c +
                    (long)_DAT_48faaf0f483e6348 * (long)_DAT_358b48116348) >> 0xe);
  _DAT_8b48fc0145218944 =
       (int)((ulong)((long)_DAT_d8b480055634d * (long)_DAT_d8b48296348 * 2 +
                    (long)_DAT_158b48096348 * (long)_DAT_f48d2894c1a634c * 2) >> 0xf);
  _DAT_8b48e02944218944 = _DAT_8b48fc0145218944 + _DAT_2d8b4c398944;
  _DAT_158b480189 = _DAT_eec149ce29490289 - _DAT_8b48e02944218944;
  lVar19 = (long)_DAT_fdff7c7890a6348;
  uVar23 = -_DAT_158b480189;
  if (0 < (int)_DAT_158b480189) {
    uVar23 = _DAT_158b480189;
  }
  uVar24 = (ulong)uVar23;
  uVar22 = 0;
  do {
    if ((long)uVar24 <= *(int *)(&DAT_4cb00c634d001f0f + uVar22 * 4) * lVar19 >> 0xf)
    goto LAB_001002ef;
    if ((long)uVar24 <= *(int *)(&DAT_4cb00c634d001f13 + uVar22 * 4) * lVar19 >> 0xf) {
      uVar22 = uVar22 + 1;
      goto LAB_001002ef;
    }
    if ((long)uVar24 <= *(int *)(&DAT_4cb00c634d001f17 + uVar22 * 4) * lVar19 >> 0xf) {
      uVar22 = uVar22 + 2;
      goto LAB_001002ef;
    }
    uVar22 = uVar22 + 3;
  } while (uVar22 != 0x1e);
  uVar22 = 0x1e;
LAB_001002ef:
  if ((int)_DAT_158b480189 < 0) {
    lVar20 = 0x58b4807eb;
  }
  else {
    lVar20 = 0x58b48b0348b;
  }
  _DAT_f0891c2474893089 = *(int *)(lVar20 + (uVar22 & 0xffffffff) * 4);
  uVar22 = (ulong)(*(int *)((long)(_DAT_f0891c2474893089 >> 2) * 4 + -0x2650f0b779e39cb8) * lVar19)
           >> 0xf;
  _DAT_d8b481989 = (int)uVar22;
  uVar23 = (int)((ulong)((long)(int)_DAT_c148f78948316348 * 0x7f) >> 7) +
           *(int *)((long)(_DAT_f0891c2474893089 >> 2) * 4 + 0xfff85c031863c03);
  if ((int)uVar23 < 1) {
    uVar23 = 0;
  }
  _DAT_c148f78948316348 = 0x4800;
  if (uVar23 < 0x4800) {
    _DAT_c148f78948316348 = uVar23;
  }
  _DAT_fdff7c7890a6348 =
       (*(int *)((ulong)(_DAT_c148f78948316348 >> 6 & 0x1f) * 4 + -0x2c3ed7f64e71cb75) >>
       (9U - (char)(_DAT_c148f78948316348 >> 0xb) & 0x1f)) << 3;
  _DAT_358b48388944 = _DAT_2d8b4c398944 + _DAT_d8b481989;
  _DAT_48490c8d48086348 = param_2;
  _DAT_48490c8d4808634c = param_1;
                    // WARNING: Subroutine does not return
  upzero(uVar22 & 0xffffffff,0x8900000000158b48,0x4800000533e8df89);
}



ulong filtez(int *param_1,int *param_2)

{
  return (ulong)((long)param_2[5] * (long)param_1[5] + (long)param_2[4] * (long)param_1[4] +
                (long)param_2[3] * (long)param_1[3] + (long)param_2[2] * (long)param_1[2] +
                (long)param_2[1] * (long)param_1[1] + (long)*param_2 * (long)*param_1) >> 0xe;
}



ulong filtep(int param_1,int param_2,int param_3,int param_4)

{
  return (ulong)((long)param_4 * (long)(param_3 * 2) + (long)param_2 * (long)(param_1 * 2)) >> 0xf;
}



undefined4 quantl(uint param_1,int param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  uVar2 = (ulong)-param_1;
  if (0 < (int)param_1) {
    uVar2 = (ulong)param_1;
  }
  lVar3 = (long)param_2;
  uVar1 = 0;
  do {
    if ((long)uVar2 <= *(int *)(&DAT_841f0f2e66666666 + uVar1 * 4) * lVar3 >> 0xf)
    goto LAB_0010086f;
    if ((long)uVar2 <= *(int *)(&DAT_841f0f2e6666666a + uVar1 * 4) * lVar3 >> 0xf) {
      uVar1 = uVar1 + 1;
      goto LAB_0010086f;
    }
    if ((long)uVar2 <= *(int *)(&DAT_841f0f2e6666666e + uVar1 * 4) * lVar3 >> 0xf) {
      uVar1 = uVar1 + 2;
      goto LAB_0010086f;
    }
    uVar1 = uVar1 + 3;
  } while (uVar1 != 0x1e);
  uVar1 = 0x1e;
LAB_0010086f:
  if ((int)param_1 < 0) {
    return *(undefined4 *)((uVar1 & 0xffffffff) * 4 + 0xd8b48c381048b);
  }
  return *(undefined4 *)((uVar1 & 0xffffffff) * 4 + 0x441f0fc381048b);
}



uint logscl(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = (int)((ulong)((long)param_2 * 0x7f) >> 7) +
          *(int *)((long)(param_1 >> 2) * 4 + 0xfc985d231820c03);
  uVar2 = 0;
  if (0 < (int)uVar1) {
    uVar2 = uVar1;
  }
  uVar1 = 0x4800;
  if (uVar2 < 0x4800) {
    uVar1 = uVar2;
  }
  return uVar1;
}



int scalel(uint param_1,char param_2)

{
  return (*(int *)((ulong)(param_1 >> 6 & 0x1f) * 4 + 0x14e8dfe2981048b) >>
         ((param_2 - (char)(param_1 >> 0xb)) + 1U & 0x1f)) << 3;
}



void upzero(int param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  
  if (param_1 == 0) {
    *param_3 = (int)((ulong)((long)*param_3 * 0xff) >> 8);
    param_3[1] = (int)((ulong)((long)param_3[1] * 0xff) >> 8);
    param_3[2] = (int)((ulong)((long)param_3[2] * 0xff) >> 8);
    param_3[3] = (int)((ulong)((long)param_3[3] * 0xff) >> 8);
    param_3[4] = (int)((ulong)((long)param_3[4] * 0xff) >> 8);
    param_3[5] = (int)((ulong)((long)param_3[5] * 0xff) >> 8);
  }
  else {
    lVar4 = (long)param_1;
    *param_3 = (uint)(-1 < *param_2 * lVar4) * 0x100 + (int)((ulong)((long)*param_3 * 0xff) >> 8) +
               -0x80;
    param_3[1] = (uint)(-1 < param_2[1] * lVar4) * 0x100 +
                 (int)((ulong)((long)param_3[1] * 0xff) >> 8) + -0x80;
    param_3[2] = (uint)(-1 < param_2[2] * lVar4) * 0x100 +
                 (int)((ulong)((long)param_3[2] * 0xff) >> 8) + -0x80;
    param_3[3] = (uint)(-1 < param_2[3] * lVar4) * 0x100 +
                 (int)((ulong)((long)param_3[3] * 0xff) >> 8) + -0x80;
    param_3[4] = (uint)(-1 < param_2[4] * lVar4) * 0x100 +
                 (int)((ulong)((long)param_3[4] * 0xff) >> 8) + -0x80;
    param_3[5] = (uint)(-1 < param_2[5] * lVar4) * 0x100 +
                 (int)((ulong)((long)param_3[5] * 0xff) >> 8) + -0x80;
  }
  param_2[5] = param_2[4];
  iVar1 = param_2[1];
  iVar2 = param_2[2];
  iVar3 = param_2[3];
  param_2[1] = *param_2;
  param_2[2] = iVar1;
  param_2[3] = iVar2;
  param_2[4] = iVar3;
  *param_2 = param_1;
  return;
}



int uppol2(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = (long)param_1 * -4;
  if ((long)param_4 * (long)param_3 < 0) {
    uVar3 = (long)param_1 * 4;
  }
  iVar1 = (int)(uVar3 >> 7) +
          (uint)(-1 < (long)param_5 * (long)param_3) * 0x100 +
          (int)((ulong)((long)param_2 * 0x7f) >> 7) + -0x80;
  iVar2 = 0x3000;
  if (iVar1 < 0x3000) {
    iVar2 = iVar1;
  }
  iVar1 = -0x3000;
  if (-0x3000 < iVar2) {
    iVar1 = iVar2;
  }
  return iVar1;
}



int uppol1(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (int)((ulong)((long)param_1 * 0xff) >> 8);
  iVar1 = iVar2 + -0xc0;
  if (-1 < (long)param_4 * (long)param_3) {
    iVar1 = iVar2 + 0xc0;
  }
  iVar2 = 0x3c00 - param_2;
  if (iVar1 < 0x3c00 - param_2) {
    iVar2 = iVar1;
  }
  if (iVar2 <= param_2 + -0x3c00) {
    iVar2 = param_2 + -0x3c00;
  }
  return iVar2;
}



uint logsch(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = (int)((ulong)((long)param_2 * 0x7f) >> 7) +
          *(int *)((long)param_1 * 4 + 0xfc985d231820c03);
  uVar2 = 0;
  if (0 < (int)uVar1) {
    uVar2 = uVar1;
  }
  uVar1 = 0x5800;
  if (uVar2 < 0x5800) {
    uVar1 = uVar2;
  }
  return uVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void decode(uint param_1)

{
  ulong uVar1;
  uint uVar2;
  
  _DAT_d8b48288944 =
       (int)((ulong)((long)_DAT_482404894c00634c * (long)_DAT_58b4838634c * 2 +
                    (long)_DAT_d8b48006348 * (long)_DAT_f49c1894c296348 * 2) >> 0xf);
  uVar2 = (int)((ulong)((long)(int)_DAT_c149c08949016348 * 0x7f) >> 7) +
          *(int *)((ulong)(param_1 & 0x3c) + 0xd8b4c39040345);
  _DAT_c1413fe083118945 =
       (int)((ulong)((long)*(int *)((long)_DAT_d8b4c3f6348 * 4 + 0x3d8b48b914634d) *
                    (long)_DAT_4dd9af0f490f634c) >> 0xf);
  _DAT_894403e0c1410189 = param_1 & 0x3f;
  _DAT_58b48308944 = (int)param_1 >> 6;
  _DAT_58b48208944 =
       (int)((ulong)((long)_DAT_48c8af0f480e635c * (long)_DAT_358b4802635c +
                     (long)_DAT_48c8af0f480e6358 * (long)_DAT_358b48026358 +
                    (long)_DAT_48c8af0f480e6354 * (long)_DAT_358b48026354 +
                    (long)_DAT_48c8af0f480e6350 * (long)_DAT_358b48026350 +
                    (long)_DAT_48c8af0f480e634c * (long)_DAT_358b4802634c +
                    (long)_DAT_48c8af0f480e6348 * (long)_DAT_358b48026348) >> 0xe);
  _DAT_58b48288944 = _DAT_d8b48288944 + _DAT_58b48208944;
  uVar1 = (ulong)((long)*(int *)((ulong)(param_1 & 0x3c) + 0x3d8b48391c6349) *
                 (long)_DAT_4dd9af0f490f634c) >> 0xf;
  _DAT_8b48dc0141108944 = _DAT_c1413fe083118945 + _DAT_58b48288944;
  if ((int)uVar2 < 1) {
    uVar2 = 0;
  }
  _DAT_c149c08949016348 = 0x4800;
  if (uVar2 < 0x4800) {
    _DAT_c149c08949016348 = uVar2;
  }
  _DAT_4dd9af0f490f634c =
       (*(int *)((ulong)(_DAT_c149c08949016348 >> 6 & 0x1f) * 4 + 0x48f8d34181048b47) >>
       (9U - (char)(_DAT_c149c08949016348 >> 0xb) & 0x1f)) << 3;
  _DAT_58b481889 = (int)uVar1;
  _DAT_fb69e8df89208944 = _DAT_58b48208944 + _DAT_58b481889;
                    // WARNING: Subroutine does not return
  upzero(uVar1 & 0xffffffff);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void reset(void)

{
  _DAT_8b480000002000c7 = 0x20;
  _DAT_8b480000000800c7 = 8;
  _DAT_8b480000000000c7 = 0;
  _DAT_570f0000000000c7 = 0;
  _DAT_1040c74800290f = ZEXT816(0);
  _DAT_1040c74800291f = 0;
  _DAT_4040290f5040295f = ZEXT816(0);
  _DAT_4040290f5040294f = ZEXT816(0);
  _DAT_4040290f5040293f = ZEXT816(0);
  _DAT_4040290f5040292f = ZEXT816(0);
  _DAT_4040290f5040291f = ZEXT816(0);
  _DAT_4040290f5040290f = ZEXT816(0);
  auRam1040290f1c40112f = SUB1612(ZEXT816(0) >> 0x20,0);
  _DAT_1040290f1c40111f = SUB1612(ZEXT816(0),0);
  _DAT_1040290f1c40112b = 0;
  _DAT_1040290f1c40110f = ZEXT816(0);
  puRam00000000001012c7 = &DAT_8b480000002000c7;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void adpcm_main(void)

{
  undefined4 uVar1;
  ulong uVar2;
  ulong uVar3;
  bool bVar4;
  
  _DAT_8b480000002000c7 = 0x20;
  _DAT_8b480000000800c7 = 8;
  _DAT_8b480000000000c7 = 0;
  _DAT_570f0000000000c7 = 0;
  _DAT_1040c74800290f = ZEXT816(0);
  _DAT_1040c74800291f = 0;
  _DAT_4040290f5040295f = ZEXT816(0);
  _DAT_4040290f5040294f = ZEXT816(0);
  _DAT_4040290f5040293f = ZEXT816(0);
  _DAT_4040290f5040292f = ZEXT816(0);
  _DAT_4040290f5040291f = ZEXT816(0);
  _DAT_4040290f5040290f = ZEXT816(0);
  auRam1040290f1c40112f = SUB1612(ZEXT816(0) >> 0x20,0);
  _DAT_1040290f1c40111f = SUB1612(ZEXT816(0),0);
  _DAT_1040290f1c40112b = 0;
  _DAT_1040290f1c40110f = ZEXT816(0);
  uVar2 = 0;
  uVar3 = 0;
  do {
    uVar1 = encode(*(undefined4 *)(&DAT_4500000000358b4c + uVar3 * 4),
                   *(undefined4 *)(&DAT_4500000000358b4c + (uVar3 * 4 | 4)));
    *(undefined4 *)(&DAT_6666666666e43145 + uVar3 * 2) = uVar1;
    bVar4 = uVar3 < 0x62;
    uVar3 = uVar3 + 2;
  } while (bVar4);
  do {
    decode(*(undefined4 *)(&DAT_6666666666e43145 + uVar2 * 2));
    *(undefined4 *)(&DAT_41000000002d8b4c + uVar2 * 4) = _DAT_4c00000000258b4c;
    *(undefined4 *)(&DAT_41000000002d8b4c + (uVar2 * 4 | 4)) = _DAT_fff387e85e3c8b41;
    bVar4 = uVar2 < 0x62;
    uVar2 = uVar2 + 2;
  } while (bVar4);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int submain(void)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  int iVar6;
  int iVar7;
  undefined auVar8 [16];
  undefined local_38 [16];
  int local_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  
  uVar3 = gettimeofday((timeval *)local_38,(__timezone_ptr_t)0x0);
  if (uVar3 != 0) {
    printf("Error return from gettimeofday: %d",(ulong)uVar3);
  }
  _DAT_fc92e80e110f41f2 = (double)local_38._8_4_ * 1e-06 + (double)local_38._0_8_;
  adpcm_main();
  auVar8 = ZEXT416((uint)(_DAT_486f0f66006f102a != 0xf8) + (uint)(_DAT_486f0f66006f1026 != 0xf8) +
                   (((((-(uint)(iRam486f0f66006f0ff2 == 0xf7) - (uint)(iRam486f0f66006f0fe2 == 0xf8)
                       ) - (uint)(iRam486f0f66006f1002 == 0xf8)) -
                     (uint)(iRam486f0f66006f1012 == 0xf8)) +
                    ((-(uint)(iRam486f0f66006f0fc2 == 0xf7) - (uint)(iRam486f0f66006f0fb2 == 0xf6))
                    - (uint)(iRam486f0f66006f0fd2 == 0xf8)) +
                    (-(uint)(iRam486f0f66006f0fa2 == 0xf5) - (uint)(iRam486f0f66006f0f92 == 0xf1)) +
                    (-(uint)(iRam486f0f66006f0f82 == 0xa0) - (uint)(iRam486f0f66006f0f72 == 0xba)))
                   - (uint)(iRam486f0f66006f1022 == 0xf9)) + 0x30 +
                   (((((-(uint)(iRam486f0f66006f0fea == 0xf8) - (uint)(iRam486f0f66006f0fda == 0xf9)
                       ) - (uint)(iRam486f0f66006f0ffa == 0xf9)) -
                     (uint)(iRam486f0f66006f100a == 0xfa)) +
                    ((-(uint)(iRam486f0f66006f0fba == 0xf7) - (uint)(iRam486f0f66006f0faa == 0xf5))
                    - (uint)(iRam486f0f66006f0fca == 0xf7)) +
                    (-(uint)(iRam486f0f66006f0f9a == 0xf4) - (uint)(iRam486f0f66006f0f8a == 0xed)) +
                    (-(uint)(iRam486f0f66006f0f7a == 0x90) - (uint)(iRam486f0f66006f0f6a == 0xde)))
                   - (uint)(iRam486f0f66006f101a == 0xfb)) +
                   (((((-(uint)(iRam486f0f66006f0fee == 0xf8) - (uint)(iRam486f0f66006f0fde == 0xf8)
                       ) - (uint)(iRam486f0f66006f0ffe == 0xf9)) -
                     (uint)(iRam486f0f66006f100e == 0xf8)) +
                    ((-(uint)(iRam486f0f66006f0fbe == 0xf8) - (uint)(iRam486f0f66006f0fae == 0xf6))
                    - (uint)(iRam486f0f66006f0fce == 0xf9)) +
                    (-(uint)(iRam486f0f66006f0f9e == 0xf5) - (uint)(iRam486f0f66006f0f8e == 0xef)) +
                    (-(uint)(iRam486f0f66006f0f7e == 0x20) - (uint)(iRam486f0f66006f0f6e == 0x77)))
                   - (uint)(iRam486f0f66006f101e == 0xfa)) +
                   (((((-(uint)(_DAT_486f0f66006f0fe6 == 0xf6) -
                       (uint)(_DAT_486f0f66006f0fd6 == 0xf7)) -
                      (uint)(_DAT_486f0f66006f0ff6 == 0xf9)) - (uint)(_DAT_486f0f66006f1006 == 0xf7)
                     ) + ((-(uint)(_DAT_486f0f66006f0fb6 == 0xf6) -
                          (uint)(_DAT_486f0f66006f0fa6 == 0xf5)) -
                         (uint)(_DAT_486f0f66006f0fc6 == 0xf8)) +
                         (-(uint)(_DAT_486f0f66006f0f96 == 0xf3) -
                         (uint)(_DAT_486f0f66006f0f86 == 0xec)) +
                         (-(uint)(_DAT_486f0f66006f0f76 == 0xf2) -
                         (uint)(_DAT_486f0f66006f0f66 == 0xfd))) -
                   (uint)(_DAT_486f0f66006f1016 == 0xf7)));
  uVar4 = 0;
  while( true ) {
    lVar1 = uVar4 * 4;
    lVar2 = uVar4 * 4;
    local_28 = (SUB164(auVar8,0) -
               (uint)(*(int *)(&DAT_6600000000158b48 + lVar1) ==
                     *(int *)(&DAT_66666666c0760f66 + lVar2))) + 1;
    iStack_24 = (SUB164(auVar8 >> 0x20,0) -
                (uint)(*(int *)(lVar1 + 0x6600000000158b4c) == *(int *)(lVar2 + 0x66666666c0760f6a))
                ) + 1;
    iStack_20 = (SUB164(auVar8 >> 0x40,0) -
                (uint)(*(int *)(lVar1 + 0x6600000000158b50) == *(int *)(lVar2 + 0x66666666c0760f6e))
                ) + 1;
    iStack_1c = (SUB164(auVar8 >> 0x60,0) -
                (uint)(*(int *)(lVar1 + 0x6600000000158b54) == *(int *)(lVar2 + 0x66666666c0760f72))
                ) + 1;
    uVar5 = uVar4 | 4;
    if (uVar5 == 100) break;
    lVar1 = uVar5 * 4;
    lVar2 = uVar5 * 4;
    auVar8 = CONCAT412((iStack_1c -
                       (uint)(*(int *)(lVar1 + 0x6600000000158b54) ==
                             *(int *)(lVar2 + 0x66666666c0760f72))) + 1,
                       CONCAT48((iStack_20 -
                                (uint)(*(int *)(lVar1 + 0x6600000000158b50) ==
                                      *(int *)(lVar2 + 0x66666666c0760f6e))) + 1,
                                CONCAT44((iStack_24 -
                                         (uint)(*(int *)(lVar1 + 0x6600000000158b4c) ==
                                               *(int *)(lVar2 + 0x66666666c0760f6a))) + 1,
                                         (local_28 -
                                         (uint)(*(int *)(&DAT_6600000000158b48 + lVar1) ==
                                               *(int *)(&DAT_66666666c0760f66 + lVar2))) + 1)));
    uVar4 = uVar4 + 8;
  }
  uVar3 = gettimeofday((timeval *)local_38,(__timezone_ptr_t)0x0);
  if (uVar3 != 0) {
    printf("Error return from gettimeofday: %d",(ulong)uVar3);
  }
  iVar6 = iStack_20 + local_28;
  iVar7 = iStack_1c + iStack_24;
  _DAT_5c0f41f200110ff2 = (double)local_38._8_4_ * 1e-06 + (double)local_38._0_8_;
  printf("%0.6f\n",_DAT_5c0f41f200110ff2 - _DAT_fc92e80e110f41f2);
  return iVar7 + iVar6;
}


