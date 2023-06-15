
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <polybench.h>
#include "ghidra_base.h"
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
uint encode(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int uVar6;
  int uVar7;
  int *piVar8;
  long lVar9;
  uint uVar10;
  long lVar11;
  int *puVar12;
  int iVar13;
  int iVar14;
  ulong uVar15;
  int iVar16;
  int iVar17;
  long lVar18;
  int *puVar19;
  int iVar20;
  int *piVar21;
  int iVar22;
  uint uVar23;
  int bVar24;
  
  uVar7 = uRam4802e0c148016394;
  uVar6 = _DAT_4802e0c148016390;
  uRam4802e0c148016394 = uRam4802e0c14801638c;
  _DAT_4802e0c148016390 = _DAT_4802e0c148016388;
  uRam4802e0c14801638c = uRam4802e0c148016384;
  _DAT_4802e0c148016388 = _DAT_4802e0c148016380;
  uRam4802e0c148016384 = uRam4802e0c14801637c;
  _DAT_4802e0c148016380 = _DAT_4802e0c148016378;
  uRam4802e0c14801637c = uRam4802e0c148016374;
  _DAT_4802e0c148016378 = _DAT_4802e0c148016370;
  uRam4802e0c148016374 = uRam4802e0c14801636c;
  _DAT_4802e0c148016370 = _DAT_4802e0c148016368;
  uRam4802e0c14801636c = uRam4802e0c148016364;
  _DAT_4802e0c148016368 = _DAT_4802e0c148016360;
  uRam4802e0c148016364 = _DAT_4802e0c14801635c;
  _DAT_4802e0c148016360 = _DAT_4802e0c148016358;
  _DAT_4802e0c14801635c = _DAT_4802e0c148016354;
  _DAT_4802e0c148016358 = _DAT_4802e0c148016350;
  iVar17 = _DAT_41f7af0f48386349;
  lVar11 = (long)_DAT_4802e0c148016348 * 0xc;
  piVar8 = (int *)&DAT_8498d4c08c08350;
  piVar21 = (int *)&DAT_4802e0c148016350;
  lVar18 = (long)_DAT_4802e0c14801634c * -0x2c;
  iVar22 = 0;
  do {
    lVar11 = lVar11 + (long)*piVar8 * (long)*piVar21;
    piVar1 = piVar21 + 1;
    piVar21 = piVar21 + 2;
    piVar2 = piVar8 + 1;
    piVar8 = piVar8 + 2;
    lVar18 = lVar18 + (long)*piVar2 * (long)*piVar1;
    iVar22 = iVar22 + 1;
  } while (iVar22 != 10);
  _DAT_4802e0c148016350 = _DAT_4802e0c148016348;
  _DAT_4802e0c148016354 = _DAT_4802e0c14801634c;
  _DAT_4802e0c148016398 = uVar6;
  uRam4802e0c14801639c = uVar7;
  lVar11 = (long)_DAT_4802e0c1480163a0 * -0x2c + lVar11;
  lVar18 = lVar18 + (long)_DAT_4802e0c1480163a4 * 0xc;
  _DAT_e8c148d029480e89 = (int)((ulong)(lVar18 + lVar11) >> 0xf);
  iVar22 = (int)((ulong)(lVar11 - lVar18) >> 0xf);
  puVar12 = &DAT_58b4c326348;
  puVar19 = &DAT_41f7af0f48386349;
  uVar15 = (long)_DAT_58b4c326348 * (long)_DAT_41f7af0f48386349;
  iVar20 = 1;
  do {
    piVar21 = (int *)(puVar12 + 4);
    puVar12 = puVar12 + 4;
    piVar8 = (int *)(puVar19 + 4);
    puVar19 = puVar19 + 4;
    uVar15 = uVar15 + (long)*piVar8 * (long)*piVar21;
    iVar20 = iVar20 + 1;
  } while (iVar20 != 6);
  _DAT_158b483289 = (int)(uVar15 >> 0xe);
  lVar11 = (long)_DAT_158b482a634c;
  lVar18 = (long)_DAT_f4dd0894d20634d;
  _DAT_8b48f60141328944 =
       (int)((ulong)(_DAT_158b4812634c * lVar11 * 2 + _DAT_58b4c126348 * lVar18 * 2) >> 0xf);
  _DAT_d8b483189328944 = _DAT_8b48f60141328944 + _DAT_158b483289;
  _DAT_d8b4c0a89 = _DAT_e8c148d029480e89 - _DAT_d8b483189328944;
  uVar3 = -_DAT_d8b4c0a89;
  if (0 < (int)_DAT_d8b4c0a89) {
    uVar3 = _DAT_d8b4c0a89;
  }
  uVar15 = 0;
  do {
    if ((long)(ulong)uVar3 <=
        (long)*(int *)(&DAT_3c634c0000441f0f + uVar15 * 4) * (long)_DAT_f741cb894101634d >> 0xf)
    goto LAB_001001df;
    uVar15 = uVar15 + 1;
  } while (uVar15 != 0x1e);
  uVar15 = 0x1e;
LAB_001001df:
  if ((int)_DAT_d8b4c0a89 < 0) {
    lVar9 = 0xd8b4807eb;
  }
  else {
    lVar9 = 0xd8b4891148b;
  }
  uVar3 = *(uint *)(lVar9 + (uVar15 & 0xffffffff) * 4);
  uVar23 = (int)((ulong)((long)(int)_DAT_c149c3894d02634c * 0x7f) >> 7) +
           *(int *)((long)((int)uVar3 >> 2) * 4 + 0x45c03145881c0345);
  lVar9 = 0;
  if ((int)uVar23 < 1) {
    uVar23 = 0;
  }
  _DAT_c149c3894d02634c = 0x4800;
  if (uVar23 < 0x4800) {
    _DAT_c149c3894d02634c = uVar23;
  }
  iVar20 = (int)((ulong)((long)*(int *)((long)((int)uVar3 >> 2) * 4 + -0x1750f0b675d39cb8) *
                        (long)_DAT_f741cb894101634d) >> 0xf);
  _DAT_f741cb894101634d =
       (*(int *)((ulong)(_DAT_c149c3894d02634c >> 6 & 0x1f) * 4 + -0x2c26d7f64e75eb75) >>
       (9U - (char)(_DAT_c149c3894d02634c >> 0xb) & 0x1f)) << 3;
  iVar14 = _DAT_158b483289 + iVar20;
  _DAT_158b480289 = iVar22;
  _DAT_11894103e2c12989 = iVar20;
  _DAT_4802e0c148016348 = param_2;
  _DAT_4802e0c14801634c = param_1;
  _DAT_63485474ed853189 = iVar14;
  _DAT_8b48f12944328944 = _DAT_d8b483189328944;
  _DAT_d189fc2454891189 = uVar3;
  if (iVar20 == 0) {
    do {
      *(int *)(&DAT_841f0f2e66666666 + lVar9 * 4) =
           (int)((ulong)((long)*(int *)(&DAT_841f0f2e66666666 + lVar9 * 4) * 0xff) >> 8);
      lVar9 = lVar9 + 1;
    } while (lVar9 != 6);
  }
  else {
    lVar9 = 0;
    do {
      *(uint *)(&DAT_1c634d0000441f0f + lVar9 * 4) =
           (uint)(-1 < (long)*(int *)(&DAT_f000000000d8b4c + lVar9 * 4) * (long)iVar20) * 0x100 +
           (int)((ulong)((long)*(int *)(&DAT_1c634d0000441f0f + lVar9 * 4) * 0xff) >> 8) + -0x80;
      lVar9 = lVar9 + 1;
    } while (lVar9 != 6);
  }
  iVar5 = _DAT_41f7af0f483a6348;
  uRam0842110f0442101f = uRam0842110f0442101b;
  uRam0842110f0442101b = _DAT_842110f04421017;
  _DAT_158b48128944 = _DAT_d8b4811634c;
  iVar13 = (int)((ulong)(lVar11 * 0xff) >> 8);
  bVar24 = (long)_DAT_ad148d4a01634c * (long)iVar14 < 0;
  uVar15 = lVar11 * -4;
  if (bVar24) {
    uVar15 = lVar11 * 4;
  }
  lVar11 = (long)_DAT_f440289443a634c;
  _DAT_f440289443a634c = _DAT_ad148d4a01634c;
  iVar4 = iVar13 + -0xc0;
  if (!bVar24) {
    iVar4 = iVar13 + 0xc0;
  }
  iVar13 = 0x80;
  if (lVar11 * iVar14 < 0) {
    iVar13 = -0x80;
  }
  iVar16 = iVar13 + (int)((ulong)(lVar18 * 0x7f) >> 7) + (int)(uVar15 >> 7);
  iVar13 = 0x3000;
  if (iVar16 < 0x3000) {
    iVar13 = iVar16;
  }
  _DAT_3c00ba028944 = -0x3000;
  if (-0x3000 < iVar13) {
    _DAT_3c00ba028944 = iVar13;
  }
  _DAT_158b48108941 = 0x3c00 - _DAT_3c00ba028944;
  if (iVar4 < 0x3c00 - _DAT_3c00ba028944) {
    _DAT_158b48108941 = iVar4;
  }
  if (_DAT_158b48108941 <= _DAT_3c00ba028944 + -0x3c00) {
    _DAT_158b48108941 = _DAT_3c00ba028944 + -0x3c00;
  }
  _DAT_842110f04421017 = _DAT_842110f04421013;
  _DAT_842110f04421013 = iVar17;
  _DAT_d8b483189328944 = _DAT_d8b483189328944 + iVar20;
  puVar12 = &DAT_158b48316348;
  puVar19 = &DAT_41f7af0f483a6348;
  uVar15 = (long)_DAT_158b48316348 * (long)_DAT_41f7af0f483a6348;
  iVar17 = 1;
  do {
    piVar21 = (int *)(puVar12 + 4);
    puVar12 = puVar12 + 4;
    piVar8 = (int *)(puVar19 + 4);
    puVar19 = puVar19 + 4;
    uVar15 = uVar15 + (long)*piVar8 * (long)*piVar21;
    iVar17 = iVar17 + 1;
  } while (iVar17 != 6);
  _DAT_d8b483189 = (int)(uVar15 >> 0xe);
  lVar18 = (long)_DAT_d8b4809634c;
  lVar11 = (long)_DAT_f49d2894c2a634c;
  _DAT_2944f60141318944 =
       (int)((ulong)(_DAT_d8b4811634c * lVar18 * 2 + _DAT_158b48096348 * lVar11 * 2) >> 0xf);
  iVar17 = _DAT_2944f60141318944 + _DAT_d8b483189;
  _DAT_e9c1d1f7c1890189 = iVar22 - iVar17;
  _DAT_ff047ec539440889 = ~_DAT_e9c1d1f7c1890189 >> 0x1e | 1;
  uVar23 = -_DAT_e9c1d1f7c1890189;
  if (0 < (int)_DAT_e9c1d1f7c1890189) {
    uVar23 = _DAT_e9c1d1f7c1890189;
  }
  if ((int)((ulong)((long)_DAT_34c2694c24146349 * 0x234) >> 0xc) < (int)uVar23) {
    _DAT_ff047ec539440889 = _DAT_ff047ec539440889 - 1;
  }
  uVar23 = _DAT_ff047ec539440889;
  uVar10 = (int)((ulong)((long)(int)_DAT_c148c2894c01634c * 0x7f) >> 7) +
           *(int *)((long)(int)_DAT_ff047ec539440889 * 4 + -0x7a3fceba7febfcbf);
  lVar9 = 0;
  if ((int)uVar10 < 1) {
    uVar10 = 0;
  }
  _DAT_c148c2894c01634c = 0x5800;
  if (uVar10 < 0x5800) {
    _DAT_c148c2894c01634c = uVar10;
  }
  _DAT_842110f0442100f =
       (int)((ulong)((long)*(int *)((long)(int)_DAT_ff047ec539440889 * 4 + -0x1550f0b77ed39cb8) *
                    (long)_DAT_34c2694c24146349) >> 0xf);
  _DAT_34c2694c24146349 =
       (*(int *)((ulong)(_DAT_c148c2894c01634c >> 6 & 0x1f) * 4 + -0x26d7bbf44e75eb75) >>
       (0xbU - (char)(_DAT_c148c2894c01634c >> 0xb) & 0x1f)) << 3;
  iVar22 = _DAT_d8b483189 + _DAT_842110f0442100f;
  _DAT_58b48308944 = iVar17;
  _DAT_ad148d4a01634c = iVar14;
  _DAT_14894103e2c12989 = _DAT_842110f0442100f;
  _DAT_63485274ed853189 = iVar22;
  if (_DAT_842110f0442100f == 0) {
    do {
      *(int *)(&DAT_1f0f2e6666666666 + lVar9 * 4) =
           (int)((ulong)((long)*(int *)(&DAT_1f0f2e6666666666 + lVar9 * 4) * 0xff) >> 8);
      lVar9 = lVar9 + 1;
    } while (lVar9 != 6);
  }
  else {
    lVar9 = 0;
    do {
      *(uint *)(&DAT_901c634d00401f0f + lVar9 * 4) =
           (int)((ulong)((long)*(int *)(&DAT_901c634d00401f0f + lVar9 * 4) * 0xff) >> 8) +
           (uint)(-1 < (long)*(int *)(&DAT_f00000000258b4c + lVar9 * 4) * (long)_DAT_842110f0442100f
                 ) * 0x100 + -0x80;
      lVar9 = lVar9 + 1;
    } while (lVar9 != 6);
  }
  uRam0842110f04421023 = uRam0842110f0442101f;
  uRam0842110f0442101f = uRam0842110f0442101b;
  uRam0842110f0442101b = _DAT_842110f04421017;
  uVar15 = lVar18 * 4;
  iVar20 = (int)((ulong)(lVar18 * 0xff) >> 8);
  iVar14 = iVar20 + -0xc0;
  if (-1 < (long)_DAT_894cde634c09634c * (long)iVar22) {
    iVar14 = iVar20 + 0xc0;
    uVar15 = lVar18 * -4;
  }
  iVar20 = 0x80;
  if ((long)_DAT_4ddbaf0f491a6348 * (long)iVar22 < 0) {
    iVar20 = -0x80;
  }
  iVar13 = iVar20 + (int)((ulong)(lVar11 * 0x7f) >> 7) + (int)(uVar15 >> 7);
  iVar20 = 0x3000;
  if (iVar13 < 0x3000) {
    iVar20 = iVar13;
  }
  _DAT_3c00bb411b8941 = -0x3000;
  if (-0x3000 < iVar20) {
    _DAT_3c00bb411b8941 = iVar20;
  }
  _DAT_158b481a8944 = 0x3c00 - _DAT_3c00bb411b8941;
  if (iVar14 < 0x3c00 - _DAT_3c00bb411b8941) {
    _DAT_158b481a8944 = iVar14;
  }
  if (_DAT_158b481a8944 <= _DAT_3c00bb411b8941 + -0x3c00) {
    _DAT_158b481a8944 = _DAT_3c00bb411b8941 + -0x3c00;
  }
  _DAT_4ddbaf0f491a6348 = _DAT_894cde634c09634c;
  _DAT_842110f04421017 = _DAT_842110f04421013;
  _DAT_842110f04421013 = iVar5;
  _DAT_158b48328944 = iVar17 + _DAT_842110f0442100f;
  _DAT_6e0c13189328944 = iVar17 + _DAT_842110f0442100f;
  _DAT_894cde634c09634c = iVar22;
  return uVar23 << 6 | uVar3;
}
ulong filtez(int *param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  ulong uVar3;
  int iVar4;
  
  uVar3 = (long)*param_2 * (long)*param_1;
  iVar4 = 1;
  do {
    piVar1 = param_1 + 1;
    param_1 = param_1 + 1;
    piVar2 = param_2 + 1;
    param_2 = param_2 + 1;
    uVar3 = uVar3 + (long)*piVar2 * (long)*piVar1;
    iVar4 = iVar4 + 1;
  } while (iVar4 != 6);
  return uVar3 >> 0xe;
}
ulong filtep(int param_1,int param_2,int param_3,int param_4)

{
  return (ulong)((long)param_4 * (long)(param_3 * 2) + (long)param_2 * (long)(param_1 * 2)) >> 0xf;
}
int quantl(uint param_1,int param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = (ulong)-param_1;
  if (0 < (int)param_1) {
    uVar2 = (ulong)param_1;
  }
  uVar1 = 0;
  do {
    if ((long)uVar2 <= (long)*(int *)(&DAT_841f0f2e66666666 + uVar1 * 4) * (long)param_2 >> 0xf)
    goto LAB_001007ef;
    uVar1 = uVar1 + 1;
  } while (uVar1 != 0x1e);
  uVar1 = 0x1e;
LAB_001007ef:
  if ((int)param_1 < 0) {
    return *(int *)((uVar1 & 0xffffffff) * 4 + 0xd8b48c381048b);
  }
  return *(int *)((uVar1 & 0xffffffff) * 4 + 0x441f0fc381048b);
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
void upzero(int param_1,int8 *param_2,long param_3)

{
  long lVar1;
  
  if (param_1 == 0) {
    lVar1 = 0;
    do {
      *(int *)(param_3 + lVar1 * 4) =
           (int)((ulong)((long)*(int *)(param_3 + lVar1 * 4) * 0xff) >> 8);
      lVar1 = lVar1 + 1;
    } while (lVar1 != 6);
  }
  else {
    lVar1 = 0;
    do {
      *(uint *)(param_3 + lVar1 * 4) =
           (uint)(-1 < (long)*(int *)((long)param_2 + lVar1 * 4) * (long)param_1) * 0x100 +
           (int)((ulong)((long)*(int *)(param_3 + lVar1 * 4) * 0xff) >> 8) + -0x80;
      lVar1 = lVar1 + 1;
    } while (lVar1 != 6);
  }
  *(int *)((long)param_2 + 0x14) = *(int *)(param_2 + 2);
  *(int8 *)((long)param_2 + 0xc) = param_2[1];
  *(int8 *)((long)param_2 + 4) = *param_2;
  *(int *)param_2 = param_1;
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
void decode(uint param_1)

{
  int *piVar1;
  int iVar2;
  int uVar3;
  int iVar4;
  int uVar5;
  int *puVar6;
  ulong uVar7;
  uint uVar8;
  int *puVar9;
  long lVar10;
  int iVar11;
  int *piVar12;
  int iVar13;
  int iVar14;
  long lVar15;
  int iVar16;
  int *piVar17;
  long lVar18;
  int *piVar19;
  long lVar20;
  int iVar21;
  int bVar22;
  
  iVar14 = _DAT_894cc8894d0e634c;
  _DAT_358b48168944 = _DAT_58b4810634c;
  _DAT_58b4806ffc10889 = param_1 & 0x3f;
  iVar11 = (int)param_1 >> 6;
  puVar6 = &DAT_358b48106348;
  puVar9 = &DAT_894cc8894d0e634c;
  uVar7 = (long)_DAT_358b48106348 * (long)_DAT_894cc8894d0e634c;
  iVar13 = 1;
  do {
    piVar12 = (int *)(puVar6 + 4);
    puVar6 = puVar6 + 4;
    piVar17 = (int *)(puVar9 + 4);
    puVar9 = puVar9 + 4;
    uVar7 = uVar7 + (long)*piVar17 * (long)*piVar12;
    iVar13 = iVar13 + 1;
  } while (iVar13 != 6);
  lVar15 = (long)_DAT_58b4800634c;
  lVar20 = (long)_DAT_f49d6894c26634c;
  _DAT_8b4cd60141308944 =
       (int)((ulong)(_DAT_58b4810634c * lVar15 * 2 + _DAT_358b48006348 * lVar20 * 2) >> 0xf);
  iVar13 = (int)(uVar7 >> 0xe);
  _DAT_358b48368944 = _DAT_8b4cd60141308944 + iVar13;
  lVar10 = (long)_DAT_8b48fce183316349;
  _DAT_358b48f001440689 =
       (int)((ulong)(*(int *)((long)_DAT_1d8b4c006348 * 4 + -0x3950f0b77cfb9cb7) * lVar10) >> 0xf);
  _DAT_e0c148c163481089 = _DAT_358b48f001440689 + _DAT_358b48368944;
  uVar8 = (int)((ulong)((long)(int)_DAT_c148db894c1e634c * 0x7f) >> 7) +
          *(int *)((ulong)(param_1 & 0x3c) + 0x85db31450b1c0341);
  lVar18 = 0;
  if ((int)uVar8 < 1) {
    uVar8 = 0;
  }
  _DAT_c148db894c1e634c = 0x4800;
  if (uVar8 < 0x4800) {
    _DAT_c148db894c1e634c = uVar8;
  }
  _DAT_8b48fce183316349 =
       (*(int *)((ulong)(_DAT_c148db894c1e634c >> 6 & 0x1f) * 4 + 0x3e6c1fed3b3348b) >>
       (9U - (char)(_DAT_c148db894c1e634c >> 0xb) & 0x1f)) << 3;
  _DAT_846110f0446100f =
       (int)((ulong)(*(int *)((ulong)(param_1 & 0x3c) + 0xeeaf0f4c082c634c) * lVar10) >> 0xf);
  iVar13 = iVar13 + _DAT_846110f0446100f;
  _DAT_58b483889 = iVar11;
  _DAT_d8b48298944 = _DAT_846110f0446100f;
  _DAT_d8b48318944 = _DAT_358b48368944;
  _DAT_d8b48ea01440189 = _DAT_e0c148c163481089;
  _DAT_495174ed85451189 = iVar13;
  if (_DAT_846110f0446100f == 0) {
    do {
      *(int *)(&DAT_841f0f2e6666 + lVar18 * 4) =
           (int)((ulong)((long)*(int *)(&DAT_841f0f2e6666 + lVar18 * 4) * 0xff) >> 8);
      lVar18 = lVar18 + 1;
    } while (lVar18 != 6);
  }
  else {
    lVar10 = 0;
    do {
      *(uint *)(&DAT_d9af0f48b11c6349 + lVar10 * 4) =
           (uint)(-1 < (long)*(int *)(&DAT_49000000001d8b4c + lVar10 * 4) *
                       (long)_DAT_846110f0446100f) * 0x100 +
           (int)((ulong)((long)*(int *)(&DAT_d9af0f48b11c6349 + lVar10 * 4) * 0xff) >> 8) + -0x80;
      lVar10 = lVar10 + 1;
    } while (lVar10 != 6);
  }
  iVar4 = _DAT_41f1af0f490a634c;
  uRam0846110f04461023 = uRam0846110f0446101f;
  uRam0846110f0446101f = uRam0846110f0446101b;
  uRam0846110f0446101b = _DAT_846110f04461017;
  _DAT_3d8b481f8944 = _DAT_d8b4819634c;
  iVar21 = (int)((ulong)(lVar15 * 0xff) >> 8);
  bVar22 = (long)_DAT_85348d4a09634c * (long)iVar13 < 0;
  uVar7 = lVar15 * -4;
  if (bVar22) {
    uVar7 = lVar15 * 4;
  }
  lVar10 = (long)_DAT_490f0e89443e634c;
  _DAT_490f0e89443e634c = _DAT_85348d4a09634c;
  iVar2 = iVar21 + -0xc0;
  if (!bVar22) {
    iVar2 = iVar21 + 0xc0;
  }
  iVar21 = 0x80;
  if (lVar10 * iVar13 < 0) {
    iVar21 = -0x80;
  }
  iVar16 = iVar21 + (int)((ulong)(lVar20 * 0x7f) >> 7) + (int)(uVar7 >> 7);
  iVar21 = 0x3000;
  if (iVar16 < 0x3000) {
    iVar21 = iVar16;
  }
  _DAT_3c00be068944 = -0x3000;
  if (-0x3000 < iVar21) {
    _DAT_3c00be068944 = iVar21;
  }
  _DAT_358b48308941 = 0x3c00 - _DAT_3c00be068944;
  if (iVar2 < 0x3c00 - _DAT_3c00be068944) {
    _DAT_358b48308941 = iVar2;
  }
  if (_DAT_358b48308941 <= _DAT_3c00be068944 + -0x3c00) {
    _DAT_358b48308941 = _DAT_3c00be068944 + -0x3c00;
  }
  _DAT_846110f04461017 = _DAT_846110f04461013;
  _DAT_846110f04461013 = iVar14;
  _DAT_358b48368944 = _DAT_358b48368944 + _DAT_846110f0446100f;
  puVar6 = &DAT_158b48316348;
  puVar9 = &DAT_41f1af0f490a634c;
  uVar7 = (long)_DAT_158b48316348 * (long)_DAT_41f1af0f490a634c;
  iVar14 = 1;
  do {
    piVar12 = (int *)(puVar6 + 4);
    puVar6 = puVar6 + 4;
    piVar17 = (int *)(puVar9 + 4);
    puVar9 = puVar9 + 4;
    uVar7 = uVar7 + (long)*piVar17 * (long)*piVar12;
    iVar14 = iVar14 + 1;
  } while (iVar14 != 6);
  lVar18 = (long)_DAT_d8b4811634c;
  lVar20 = (long)_DAT_f49da894c2a634c;
  _DAT_2d8b48f2011189 =
       (int)((ulong)(_DAT_d8b4819634c * lVar18 * 2 + _DAT_158b48096348 * lVar20 * 2) >> 0xf);
  _DAT_d8b483189 = (int)(uVar7 >> 0xe);
  _DAT_3d8b481789 = _DAT_2d8b48f2011189 + _DAT_d8b483189;
  lVar10 = (long)_DAT_48c7634c004d6348;
  uVar8 = (int)((ulong)((long)(int)_DAT_c149dc8949196348 * 0x7f) >> 7) +
          *(int *)((long)iVar11 * 4 + 0x45c0314583240346);
  lVar15 = 0;
  if ((int)uVar8 < 1) {
    uVar8 = 0;
  }
  _DAT_c149dc8949196348 = 0x5800;
  if (uVar8 < 0x5800) {
    _DAT_c149dc8949196348 = uVar8;
  }
  _DAT_48c7634c004d6348 =
       (*(int *)((ulong)(_DAT_c149dc8949196348 >> 6 & 0x1f) * 4 + -0x4ef4143e71db74bb) >>
       (0xbU - (char)(_DAT_c149dc8949196348 >> 0xb) & 0x1f)) << 3;
  _DAT_110f410440100f41 =
       (int)((ulong)(*(int *)((long)iVar11 * 4 + -0x650f0b778c39cb6) * lVar10) >> 0xf);
  iVar14 = _DAT_d8b483189 + _DAT_110f410440100f41;
  _DAT_d8b481189 = _DAT_3d8b481789;
  _DAT_d8b48fe013989 = _DAT_110f410440100f41;
  _DAT_85348d4a09634c = iVar13;
  _DAT_d8b481189368944 = _DAT_358b48368944;
  _DAT_63485274ff853189 = iVar14;
  if (_DAT_110f410440100f41 == 0) {
    do {
      *(int *)(&DAT_841f0f2e6666 + lVar15 * 4) =
           (int)((ulong)((long)*(int *)(&DAT_841f0f2e6666 + lVar15 * 4) * 0xff) >> 8);
      lVar15 = lVar15 + 1;
    } while (lVar15 != 6);
  }
  else {
    lVar10 = 0;
    do {
      *(uint *)(&DAT_af0f4800855c634a + lVar10 * 4) =
           (int)((ulong)((long)*(int *)(&DAT_af0f4800855c634a + lVar10 * 4) * 0xff) >> 8) +
           (uint)(-1 < (long)*(int *)(&DAT_4a00000000258b4c + lVar10 * 4) *
                       (long)_DAT_110f410440100f41) * 0x100 + -0x80;
      lVar10 = lVar10 + 1;
    } while (lVar10 != 6);
  }
  uVar5 = _DAT_ffd4b94928476370;
  _DAT_ffd4b94928476370 = _DAT_ffd4b9492847636c;
  _DAT_ffd4b9492847636c = uRamffd4b94928476368;
  uRamffd4b94928476368 = uRamffd4b94928476364;
  uRamffd4b94928476364 = _DAT_ffd4b94928476360;
  _DAT_ffd4b94928476360 = _DAT_ffd4b9492847635c;
  _DAT_ffd4b9492847635c = uRamffd4b94928476358;
  uRamffd4b94928476358 = uRamffd4b94928476354;
  uRamffd4b94928476354 = _DAT_ffd4b94928476350;
  uVar3 = _DAT_40048d4f28466370;
  _DAT_40048d4f28466370 = _DAT_40048d4f2846636c;
  _DAT_40048d4f2846636c = uRam40048d4f28466368;
  uRam40048d4f28466368 = uRam40048d4f28466364;
  uRam40048d4f28466364 = _DAT_40048d4f28466360;
  _DAT_40048d4f28466360 = _DAT_40048d4f2846635c;
  _DAT_40048d4f2846635c = uRam40048d4f28466358;
  uRam40048d4f28466358 = uRam40048d4f28466354;
  uRam40048d4f28466354 = _DAT_40048d4f28466350;
  uRam110f410440100f55 = uRam110f410440100f51;
  uRam110f410440100f51 = uRam110f410440100f4d;
  uRam110f410440100f4d = _DAT_110f410440100f49;
  uVar7 = lVar18 * 4;
  iVar11 = (int)((ulong)(lVar18 * 0xff) >> 8);
  iVar13 = iVar11 + -0xc0;
  if (-1 < (long)_DAT_c148d5894c01634c * (long)iVar14) {
    iVar13 = iVar11 + 0xc0;
    uVar7 = lVar18 * -4;
  }
  iVar11 = 0x80;
  if ((long)_DAT_4cf3af0f4c32634d * (long)iVar14 < 0) {
    iVar11 = -0x80;
  }
  iVar21 = iVar11 + (int)((ulong)(lVar20 * 0x7f) >> 7) + (int)(uVar7 >> 7);
  iVar11 = 0x3000;
  if (iVar21 < 0x3000) {
    iVar11 = iVar21;
  }
  _DAT_3c00b841308945 = -0x3000;
  if (-0x3000 < iVar11) {
    _DAT_3c00b841308945 = iVar11;
  }
  _DAT_4cf3af0f4c32634d = _DAT_c148d5894c01634c;
  _DAT_58b4c028945 = 0x3c00 - _DAT_3c00b841308945;
  if (iVar13 < 0x3c00 - _DAT_3c00b841308945) {
    _DAT_58b4c028945 = iVar13;
  }
  if (_DAT_58b4c028945 <= _DAT_3c00b841308945 + -0x3c00) {
    _DAT_58b4c028945 = _DAT_3c00b841308945 + -0x3c00;
  }
  _DAT_110f410440100f49 = _DAT_110f410440100f45;
  _DAT_110f410440100f45 = iVar4;
  _DAT_3d8b481789 = _DAT_3d8b481789 + _DAT_110f410440100f41;
  _DAT_d129c18931891789 = _DAT_3d8b481789;
  _DAT_c148d5894c01634c = iVar14;
  _DAT_58b48c2010e89 = _DAT_e0c148c163481089 - _DAT_3d8b481789;
  _DAT_e0c148c163481089 = _DAT_3d8b481789 + _DAT_e0c148c163481089;
  lVar10 = (long)_DAT_58b48c2010e89 * 0xc;
  lVar15 = (long)_DAT_e0c148c163481089 * -0x2c;
  piVar12 = (int *)&DAT_4cc0314508c78350;
  iVar14 = 0;
  piVar17 = (int *)&DAT_6600000000158b4c;
  piVar19 = (int *)&DAT_841f0f2e66666666;
  do {
    iVar11 = *piVar17;
    piVar17 = piVar17 + 1;
    lVar10 = lVar10 + (long)*piVar12 * (long)iVar11;
    iVar11 = *piVar19;
    piVar19 = piVar19 + 1;
    piVar1 = piVar12 + 1;
    piVar12 = piVar12 + 2;
    lVar15 = lVar15 + (long)*piVar1 * (long)iVar11;
    iVar14 = iVar14 + 1;
  } while (iVar14 != 10);
  _DAT_4c0ee8c148088945 =
       (int)((ulong)((long)_DAT_ffd4b94928476374 * 0x3fffffffffd4 + lVar10) >> 0xe);
  _DAT_280f07280f008941 = (int)((ulong)(lVar15 + (long)_DAT_40048d4f28466374 * 0xc) >> 0xe);
  _DAT_ffd4b94928476350 = _DAT_ffd4b9492847634c;
  _DAT_ffd4b94928476374 = uVar5;
  _DAT_40048d4f28466350 = _DAT_40048d4f2846634c;
  _DAT_40048d4f28466374 = uVar3;
  _DAT_ffd4b9492847634c = _DAT_58b48c2010e89;
  _DAT_40048d4f2846634c = _DAT_e0c148c163481089;
  return;
}
