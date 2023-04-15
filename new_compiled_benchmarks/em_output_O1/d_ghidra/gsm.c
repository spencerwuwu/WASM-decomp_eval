#include "gsm.h"



uint gsm_add(short param_1,short param_2)

{
  uint uVar1;
  
  uVar1 = (int)(short)(param_1 + param_2) >> 0xf ^ 0xffff8000;
  if (!SCARRY2(param_1,param_2)) {
    uVar1 = (uint)(ushort)(param_1 + param_2);
  }
  return uVar1;
}



uint gsm_mult(int param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = 0x7fff;
  if ((ushort)((ushort)param_1 ^ 0x8000 | (ushort)param_2 ^ 0x8000) != 0) {
    uVar1 = (uint)(param_2 * param_1) >> 0xf;
  }
  return uVar1;
}



uint gsm_mult_r(int param_1,short param_2)

{
  if ((param_1 == -0x8000) && (param_2 == -0x8000)) {
    return 0x7fff;
  }
  return (int)param_2 * (int)(short)param_1 + 0x4000U >> 0xf;
}



int gsm_abs(int param_1)

{
  int iVar1;
  
  iVar1 = 0x7fff;
  if (param_1 != -0x8000) {
    iVar1 = -param_1;
  }
  if (-1 < (short)param_1) {
    iVar1 = param_1;
  }
  return iVar1;
}



int gsm_norm(ulong param_1)

{
  short sVar1;
  ulong uVar2;
  bool bVar3;
  
  if ((long)param_1 < 0) {
    if ((long)param_1 < -0x3fffffff) {
      return 0;
    }
    param_1 = ~param_1;
  }
  uVar2 = param_1 >> 0x10;
  if ((short)(param_1 >> 0x10) == 0) {
    bVar3 = (param_1 & 0xff00) == 0;
    uVar2 = param_1;
    if (!bVar3) {
      uVar2 = param_1 >> 8;
    }
    sVar1 = (ushort)bVar3 * 8 + 0xf;
  }
  else if ((char)(param_1 >> 0x18) == '\0') {
    sVar1 = 7;
  }
  else {
    sVar1 = -1;
    uVar2 = param_1 >> 0x18;
  }
  return (int)sVar1 + (uint)*(byte *)((uVar2 & 0xff) + 0xc3c801980a0cb60f);
}



int gsm_div(short param_1,int param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  
  if (param_1 != 0) {
    lVar3 = (long)param_2;
    lVar4 = (long)param_1;
    iVar5 = 0xf;
    iVar2 = 0;
    do {
      lVar1 = lVar4 * 2;
      lVar4 = 0;
      if (lVar3 <= lVar1) {
        lVar4 = lVar3;
      }
      lVar4 = lVar1 - lVar4;
      iVar2 = (uint)(lVar3 <= lVar1) + iVar2 * 2;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    return iVar2;
  }
  return 0;
}



void Autocorrelation(short *param_1,undefined (*param_2) [16])

{
  short *psVar1;
  short *psVar2;
  short *psVar3;
  ushort uVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  ushort uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  int iVar14;
  long lVar15;
  ushort uVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  short *psVar23;
  long lVar24;
  bool bVar25;
  long local_48;
  
  lVar6 = 0;
  uVar10 = 0;
  do {
    uVar4 = param_1[lVar6];
    uVar16 = -uVar4;
    if (uVar4 == 0x8000) {
      uVar16 = 0x7fff;
    }
    if (-1 < (short)uVar4) {
      uVar16 = uVar4;
    }
    if ((short)uVar16 <= (short)uVar10) {
      uVar16 = uVar10;
    }
    lVar6 = lVar6 + 1;
    uVar10 = uVar16;
  } while (lVar6 != 0xa0);
  if (uVar16 == 0) {
    iVar5 = 0;
  }
  else {
    uVar7 = (ulong)(byte)uVar16;
    if (uVar16 >= 0x100) {
      uVar7 = (ulong)(uVar16 >> 8);
    }
    iVar5 = (int)(short)(4 - ((ushort)*(byte *)(uVar7 + 0x4b9d0010104b60f) +
                             ((uVar16 < 0x100) - 1 | 7)));
  }
  if (iVar5 - 1U < 4) {
    lVar6 = 0;
    do {
      param_1[lVar6] =
           (short)((int)param_1[lVar6] * (0x4000U >> ((byte)(iVar5 - 1U) & 0x1f)) + 0x4000 >> 0xf);
      lVar6 = lVar6 + 1;
    } while (lVar6 != 0xa0);
  }
  lVar17 = (long)*param_1;
  *param_2 = ZEXT816(0);
  param_2[3] = ZEXT816(0);
  param_2[2] = ZEXT816(0);
  param_2[1] = ZEXT816(0);
  *(undefined8 *)param_2[4] = 0;
  *(long *)*param_2 = lVar17 * lVar17;
  lVar13 = (long)param_1[1];
  lVar11 = lVar13 * lVar13 + lVar17 * lVar17;
  *(long *)*param_2 = lVar11;
  lVar8 = lVar13 * lVar17 + *(long *)(*param_2 + 8);
  *(long *)(*param_2 + 8) = lVar8;
  lVar20 = (long)param_1[2];
  lVar11 = lVar20 * lVar20 + lVar11;
  *(long *)*param_2 = lVar11;
  lVar8 = lVar20 * lVar13 + lVar8;
  *(long *)(*param_2 + 8) = lVar8;
  lVar9 = lVar20 * lVar17 + *(long *)param_2[1];
  *(long *)param_2[1] = lVar9;
  lVar18 = (long)param_1[3];
  lVar11 = lVar18 * lVar18 + lVar11;
  *(long *)*param_2 = lVar11;
  lVar8 = lVar18 * lVar20 + lVar8;
  *(long *)(*param_2 + 8) = lVar8;
  lVar9 = lVar18 * lVar13 + lVar9;
  *(long *)param_2[1] = lVar9;
  local_48 = lVar18 * lVar17 + *(long *)(param_2[1] + 8);
  *(long *)(param_2[1] + 8) = local_48;
  lVar19 = (long)param_1[4];
  lVar11 = lVar19 * lVar19 + lVar11;
  *(long *)*param_2 = lVar11;
  lVar8 = lVar19 * lVar18 + lVar8;
  *(long *)(*param_2 + 8) = lVar8;
  lVar9 = lVar19 * lVar20 + lVar9;
  *(long *)param_2[1] = lVar9;
  local_48 = lVar19 * lVar13 + local_48;
  *(long *)(param_2[1] + 8) = local_48;
  lVar24 = lVar19 * lVar17 + *(long *)param_2[2];
  *(long *)param_2[2] = lVar24;
  lVar21 = (long)param_1[5];
  lVar11 = lVar21 * lVar21 + lVar11;
  *(long *)*param_2 = lVar11;
  lVar8 = lVar21 * lVar19 + lVar8;
  *(long *)(*param_2 + 8) = lVar8;
  lVar9 = lVar21 * lVar18 + lVar9;
  *(long *)param_2[1] = lVar9;
  local_48 = lVar21 * lVar20 + local_48;
  *(long *)(param_2[1] + 8) = local_48;
  lVar24 = lVar21 * lVar13 + lVar24;
  *(long *)param_2[2] = lVar24;
  lVar22 = lVar21 * lVar17 + *(long *)(param_2[2] + 8);
  *(long *)(param_2[2] + 8) = lVar22;
  lVar15 = (long)param_1[6];
  lVar11 = lVar15 * lVar15 + lVar11;
  *(long *)*param_2 = lVar11;
  lVar8 = lVar15 * lVar21 + lVar8;
  *(long *)(*param_2 + 8) = lVar8;
  lVar9 = lVar15 * lVar19 + lVar9;
  *(long *)param_2[1] = lVar9;
  local_48 = lVar15 * lVar18 + local_48;
  *(long *)(param_2[1] + 8) = local_48;
  lVar24 = lVar15 * lVar20 + lVar24;
  *(long *)param_2[2] = lVar24;
  lVar22 = lVar15 * lVar13 + lVar22;
  *(long *)(param_2[2] + 8) = lVar22;
  lVar12 = lVar15 * lVar17 + *(long *)param_2[3];
  *(long *)param_2[3] = lVar12;
  lVar6 = (long)param_1[7];
  lVar11 = lVar6 * lVar6 + lVar11;
  lVar8 = lVar15 * lVar6 + lVar8;
  lVar9 = lVar21 * lVar6 + lVar9;
  local_48 = lVar19 * lVar6 + local_48;
  lVar24 = lVar18 * lVar6 + lVar24;
  *(long *)*param_2 = lVar11;
  *(long *)(*param_2 + 8) = lVar8;
  *(long *)param_2[1] = lVar9;
  *(long *)(param_2[1] + 8) = local_48;
  *(long *)param_2[2] = lVar24;
  lVar22 = lVar20 * lVar6 + lVar22;
  *(long *)(param_2[2] + 8) = lVar22;
  lVar12 = lVar13 * lVar6 + lVar12;
  *(long *)param_2[3] = lVar12;
  lVar13 = lVar6 * lVar17 + *(long *)(param_2[3] + 8);
  psVar23 = param_1 + 7;
  *(long *)(param_2[3] + 8) = lVar13;
  lVar6 = *(long *)param_2[4];
  iVar14 = 8;
  do {
    lVar15 = (long)psVar23[1];
    psVar1 = psVar23 + -5;
    psVar2 = psVar23 + -6;
    psVar3 = psVar23 + -7;
    lVar11 = lVar11 + lVar15 * lVar15;
    lVar8 = lVar8 + *psVar23 * lVar15;
    lVar9 = lVar9 + psVar23[-1] * lVar15;
    local_48 = local_48 + psVar23[-2] * lVar15;
    lVar24 = lVar24 + psVar23[-3] * lVar15;
    lVar22 = lVar22 + psVar23[-4] * lVar15;
    psVar23 = psVar23 + 1;
    lVar12 = lVar12 + *psVar1 * lVar15;
    lVar13 = lVar13 + *psVar2 * lVar15;
    lVar6 = lVar6 + *psVar3 * lVar15;
    iVar14 = iVar14 + 1;
  } while (iVar14 != 0xa0);
  *(long *)*param_2 = lVar11;
  *(long *)(*param_2 + 8) = lVar8;
  *(long *)param_2[1] = lVar9;
  *(long *)(param_2[1] + 8) = local_48;
  *(long *)param_2[2] = lVar24;
  *(long *)(param_2[2] + 8) = lVar22;
  *(long *)param_2[3] = lVar12;
  *(long *)(param_2[3] + 8) = lVar13;
  *(long *)param_2[4] = lVar6;
  lVar6 = 8;
  do {
    *(long *)(*param_2 + lVar6 * 8) = *(long *)(*param_2 + lVar6 * 8) << 1;
    bVar25 = lVar6 != 0;
    lVar6 = lVar6 + -1;
  } while (bVar25);
  if (0 < iVar5) {
    iVar14 = 0x9f;
    do {
      *param_1 = *param_1 << ((byte)iVar5 & 0x1f);
      param_1 = param_1 + 1;
      bVar25 = iVar14 != 0;
      iVar14 = iVar14 + -1;
    } while (bVar25);
  }
  return;
}



void Reflection_coefficients(ulong *param_1,undefined (*param_2) [16])

{
  ushort uVar1;
  ushort uVar2;
  long lVar3;
  byte bVar4;
  short sVar5;
  uint uVar6;
  long lVar7;
  char cVar8;
  short sVar9;
  size_t __n;
  ulong uVar10;
  ushort uVar11;
  long lVar12;
  int iVar13;
  short sVar14;
  short sVar15;
  long lVar16;
  ulong uVar17;
  short sVar18;
  bool bVar19;
  ushort local_88 [2];
  undefined4 uStack_84;
  undefined4 uStack_7c;
  undefined2 local_78;
  ushort local_68 [2];
  undefined4 uStack_64;
  undefined4 uStack_5c;
  undefined2 local_58;
  ushort auStack_48 [12];
  
  uVar10 = *param_1;
  if (uVar10 == 0) {
    *param_2 = ZEXT816(0);
    return;
  }
  if ((long)uVar10 < 0) {
    if ((long)uVar10 < -0x3fffffff) {
      bVar4 = 0;
      goto LAB_00100662;
    }
    uVar10 = ~uVar10;
  }
  if ((short)(uVar10 >> 0x10) == 0) {
    bVar19 = (uVar10 & 0xff00) == 0;
    if (!bVar19) {
      uVar10 = uVar10 >> 8;
    }
    bVar4 = (byte)uVar10;
    cVar8 = bVar19 * '\b' + '\x0f';
  }
  else {
    bVar4 = (byte)(uVar10 >> 0x18);
    if (bVar4 == 0) {
      cVar8 = '\a';
      bVar4 = (byte)(uVar10 >> 0x10);
    }
    else {
      cVar8 = -1;
    }
  }
  bVar4 = cVar8 + *(char *)((ulong)bVar4 + 0xc031c1010204b60f);
LAB_00100662:
  lVar7 = 0;
  do {
    local_68[lVar7] = (ushort)((param_1[lVar7] << (bVar4 & 0x3f)) >> 0x10);
    lVar7 = lVar7 + 1;
  } while (lVar7 != 9);
  uStack_84 = uStack_64;
  uStack_7c = uStack_5c;
  local_78 = local_58;
  uVar6 = (uint)local_68[0];
  sVar14 = -local_68[1];
  sVar9 = 0x7fff;
  if (local_68[1] == -0x8000) {
    sVar14 = 0x7fff;
  }
  if (-1 < (short)local_68[1]) {
    sVar14 = local_68[1];
  }
  if ((short)local_68[0] < sVar14) {
    bVar19 = true;
    __n = 0x10;
  }
  else {
    uVar10 = 1;
    lVar7 = 0;
    do {
      sVar5 = (short)uVar6;
      if (sVar14 == 0) {
        sVar14 = 0;
      }
      else {
        lVar16 = (long)sVar5;
        lVar12 = (long)sVar14;
        iVar13 = 0xf;
        sVar14 = 0;
        do {
          lVar3 = lVar12 * 2;
          lVar12 = 0;
          if (lVar16 <= lVar3) {
            lVar12 = lVar16;
          }
          lVar12 = lVar3 - lVar12;
          sVar14 = (ushort)(lVar16 <= lVar3) + sVar14 * 2;
          iVar13 = iVar13 + -1;
        } while (iVar13 != 0);
      }
      sVar15 = -sVar14;
      if ((short)local_68[1] < 1) {
        sVar15 = sVar14;
      }
      *(short *)*param_2 = sVar15;
      if (uVar10 == 8) {
        return;
      }
      iVar13 = (int)*(short *)*param_2;
      sVar15 = (short)((short)local_68[1] * iVar13 + 0x4000U >> 0xf);
      sVar14 = sVar15;
      if (iVar13 == -0x8000) {
        sVar14 = sVar9;
      }
      if (local_68[1] != -0x8000) {
        sVar14 = sVar15;
      }
      uVar6 = (uint)(ushort)(sVar5 + sVar14);
      if (SCARRY2(sVar5,sVar14)) {
        uVar6 = (int)(short)(sVar5 + sVar14) >> 0xf ^ 0xffff8000;
      }
      local_68[0] = (ushort)uVar6;
      if (uVar10 < 8) {
        uVar17 = 1;
        do {
          uVar1 = auStack_48[uVar17];
          sVar5 = (short)((short)uVar1 * iVar13 + 0x4000U >> 0xf);
          sVar14 = sVar5;
          if ((short)uVar1 == -0x8000) {
            sVar14 = sVar9;
          }
          uVar2 = local_88[uVar17 + 1];
          sVar18 = (short)((short)uVar2 * iVar13 + 0x4000U >> 0xf);
          sVar15 = sVar18;
          if ((short)uVar2 == -0x8000) {
            sVar15 = sVar9;
          }
          if (iVar13 != -0x8000) {
            sVar15 = sVar18;
            sVar14 = sVar5;
          }
          uVar11 = uVar1 + sVar15;
          if (SCARRY2(uVar1,sVar15)) {
            uVar11 = (short)(uVar1 + sVar15) >> 0xf ^ 0x8000;
          }
          uVar1 = uVar2 + sVar14;
          if (SCARRY2(uVar2,sVar14)) {
            uVar1 = (short)(uVar2 + sVar14) >> 0xf ^ 0x8000;
          }
          local_88[uVar17] = uVar1;
          auStack_48[uVar17] = uVar11;
          bVar19 = uVar17 < 8 - uVar10;
          uVar17 = uVar17 + 1;
        } while (bVar19);
      }
      uVar10 = uVar10 + 1;
      param_2 = (undefined (*) [16])(*param_2 + 2);
      lVar7 = lVar7 + 1;
      sVar14 = -local_68[1];
      if (local_68[1] == -0x8000) {
        sVar14 = 0x7fff;
      }
      if (-1 < (short)local_68[1]) {
        sVar14 = local_68[1];
      }
    } while (sVar14 <= (short)local_68[0]);
    bVar19 = (uint)uVar10 < 9;
    __n = lVar7 * -2 + 0x10;
  }
  if (!bVar19) {
    return;
  }
  local_88[0] = local_68[0];
  memset(param_2,0,__n);
  return;
}



void Transformation_to_Log_Area_Ratios(short *param_1)

{
  short sVar1;
  int iVar2;
  short sVar3;
  short sVar4;
  uint uVar5;
  
  iVar2 = 1;
  do {
    sVar1 = *param_1;
    sVar4 = -sVar1;
    if (sVar1 == -0x8000) {
      sVar4 = 0x7fff;
    }
    if (-1 < sVar1) {
      sVar4 = sVar1;
    }
    uVar5 = (uint)sVar4;
    if ((int)uVar5 < 0x5666) {
      sVar4 = (short)(uVar5 >> 1);
    }
    else if ((int)uVar5 < 0x799a) {
      sVar4 = sVar4 + -0x2b33;
    }
    else {
      sVar4 = sVar4 * 4 + 0x6800;
    }
    sVar3 = -sVar4;
    if (-1 < sVar1) {
      sVar3 = sVar4;
    }
    *param_1 = sVar3;
    iVar2 = iVar2 + 1;
    param_1 = param_1 + 1;
  } while (iVar2 != 9);
  return;
}



void Quantization_and_coding(short *param_1)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  short sVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  short sVar8;
  ushort uVar9;
  ushort uVar10;
  
  sVar4 = (short)((uint)(param_1[7] * 0x234c) >> 0xf);
  uVar1 = sVar4 - 0x478;
  if (SCARRY2(sVar4,-0x478)) {
    uVar1 = (short)(sVar4 + -0x478) >> 0xf ^ 0x8000;
  }
  sVar4 = (short)((uint)(param_1[6] * 0x2156) >> 0xf);
  uVar2 = sVar4 - 0x155;
  if (SCARRY2(sVar4,-0x155)) {
    uVar2 = (short)(sVar4 + -0x155) >> 0xf ^ 0x8000;
  }
  sVar4 = (short)((uint)(param_1[5] * 0x3c00) >> 0xf);
  uVar3 = sVar4 - 0x700;
  if (SCARRY2(sVar4,-0x700)) {
    uVar3 = (short)(sVar4 + -0x700) >> 0xf ^ 0x8000;
  }
  sVar4 = (short)((uint)(param_1[4] * 0x368c) >> 0xf);
  uVar5 = sVar4 + 0x15e;
  if (SCARRY2(sVar4,0x15e)) {
    uVar5 = (short)(sVar4 + 0x15e) >> 0xf ^ 0x8000;
  }
  sVar4 = (short)((uint)(param_1[3] * 0x5000) >> 0xf);
  uVar6 = sVar4 - 0xa00;
  if (SCARRY2(sVar4,-0xa00)) {
    uVar6 = (short)(sVar4 + -0xa00) >> 0xf ^ 0x8000;
  }
  sVar4 = (short)((uint)(param_1[2] * 0x5000) >> 0xf);
  uVar9 = sVar4 + 0x900;
  if (SCARRY2(sVar4,0x900)) {
    uVar9 = (short)(sVar4 + 0x900) >> 0xf ^ 0x8000;
  }
  sVar4 = (short)((uint)(param_1[1] * 0x5000) >> 0xf);
  uVar10 = sVar4 + 0x100;
  if (SCARRY2(sVar4,0x100)) {
    uVar10 = (short)(sVar4 + 0x100) >> 0xf ^ 0x8000;
  }
  sVar4 = (short)((uint)(*param_1 * 0x5000) >> 0xf);
  uVar7 = sVar4 + 0x100;
  if (SCARRY2(sVar4,0x100)) {
    uVar7 = (short)(sVar4 + 0x100) >> 0xf ^ 0x8000;
  }
  sVar8 = 0;
  sVar4 = ((short)uVar7 >> 9) + 0x20;
  if ((short)uVar7 < -0x4000) {
    sVar4 = sVar8;
  }
  if (0x3fff < (short)uVar7) {
    sVar4 = 0x3f;
  }
  *param_1 = sVar4;
  sVar4 = ((short)uVar10 >> 9) + 0x20;
  if ((short)uVar10 < -0x4000) {
    sVar4 = sVar8;
  }
  if (0x3fff < (short)uVar10) {
    sVar4 = 0x3f;
  }
  param_1[1] = sVar4;
  sVar4 = ((short)uVar9 >> 9) + 0x10;
  if ((short)uVar9 < -0x2000) {
    sVar4 = sVar8;
  }
  if (0x1fff < (short)uVar9) {
    sVar4 = 0x1f;
  }
  param_1[2] = sVar4;
  sVar4 = ((short)(uVar6 + 0x100) >> 9) + 0x10;
  if ((short)uVar6 < -0x2100) {
    sVar4 = sVar8;
  }
  if (0x1eff < (short)uVar6) {
    sVar4 = 0x1f;
  }
  param_1[3] = sVar4;
  sVar4 = ((short)uVar5 >> 9) + 8;
  if ((short)uVar5 < -0x1000) {
    sVar4 = sVar8;
  }
  if (0xfff < (short)uVar5) {
    sVar4 = 0xf;
  }
  param_1[4] = sVar4;
  sVar4 = ((short)(uVar3 + 0x100) >> 9) + 8;
  if ((short)uVar3 < -0x1100) {
    sVar4 = sVar8;
  }
  if (0xeff < (short)uVar3) {
    sVar4 = 0xf;
  }
  param_1[5] = sVar4;
  sVar4 = ((short)(uVar2 + 0x100) >> 9) + 4;
  if ((short)uVar2 < -0x900) {
    sVar4 = sVar8;
  }
  if (0x6ff < (short)uVar2) {
    sVar4 = 7;
  }
  param_1[6] = sVar4;
  sVar4 = ((short)(uVar1 + 0x100) >> 9) + 4;
  if ((short)uVar1 < -0x900) {
    sVar4 = sVar8;
  }
  if (0x6ff < (short)uVar1) {
    sVar4 = 7;
  }
  param_1[7] = sVar4;
  return;
}



void Gsm_LPC_Analysis(undefined8 param_1,short *param_2)

{
  short sVar1;
  int iVar2;
  short *psVar3;
  short sVar4;
  short sVar5;
  uint uVar6;
  undefined auStack_58 [72];
  
  Autocorrelation(param_1,auStack_58);
  Reflection_coefficients(auStack_58,param_2);
  iVar2 = 1;
  psVar3 = param_2;
  do {
    sVar1 = *psVar3;
    sVar5 = -sVar1;
    if (sVar1 == -0x8000) {
      sVar5 = 0x7fff;
    }
    if (-1 < sVar1) {
      sVar5 = sVar1;
    }
    uVar6 = (uint)sVar5;
    if ((int)uVar6 < 0x5666) {
      sVar5 = (short)(uVar6 >> 1);
    }
    else if ((int)uVar6 < 0x799a) {
      sVar5 = sVar5 + -0x2b33;
    }
    else {
      sVar5 = sVar5 * 4 + 0x6800;
    }
    sVar4 = -sVar5;
    if (-1 < sVar1) {
      sVar4 = sVar5;
    }
    *psVar3 = sVar4;
    iVar2 = iVar2 + 1;
    psVar3 = psVar3 + 1;
  } while (iVar2 != 9);
  Quantization_and_coding(param_2);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int submain(void)

{
  short sVar1;
  short sVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  short *psVar7;
  short sVar8;
  short local_1b8 [8];
  undefined local_1a8 [80];
  undefined local_158 [320];
  
  psVar7 = local_1b8;
  uVar3 = gettimeofday((timeval *)local_158,(__timezone_ptr_t)0x0);
  if (uVar3 != 0) {
    printf("Error return from gettimeofday: %d",(ulong)uVar3);
  }
  _DAT_358b480f110f41f2 = (double)local_158._8_4_ * 1e-06 + (double)local_158._0_8_;
  memcpy(local_158,(void *)0x140ba60245c8d48,0x140);
  Autocorrelation(local_158,local_1a8);
  Reflection_coefficients(local_1a8,local_1b8);
  iVar4 = 1;
  do {
    sVar1 = *psVar7;
    sVar8 = -sVar1;
    if (sVar1 == -0x8000) {
      sVar8 = 0x7fff;
    }
    if (-1 < sVar1) {
      sVar8 = sVar1;
    }
    uVar3 = (uint)sVar8;
    if ((int)uVar3 < 0x5666) {
      sVar8 = (short)(uVar3 >> 1);
    }
    else if ((int)uVar3 < 0x799a) {
      sVar8 = sVar8 + -0x2b33;
    }
    else {
      sVar8 = sVar8 * 4 + 0x6800;
    }
    sVar2 = -sVar8;
    if (-1 < sVar1) {
      sVar2 = sVar8;
    }
    *psVar7 = sVar2;
    iVar4 = iVar4 + 1;
    psVar7 = psVar7 + 1;
  } while (iVar4 != 9);
  Quantization_and_coding(local_1b8);
  lVar5 = 0;
  lVar6 = 0;
  iVar4 = 0;
  do {
    iVar4 = iVar4 + (uint)(*(short *)(local_158 + lVar6 * 2) !=
                          *(short *)(&DAT_b70f9066db31d231 + lVar6 * 2));
    lVar6 = lVar6 + 1;
  } while (lVar6 != 0xa0);
  do {
    iVar4 = iVar4 + (uint)(local_1b8[lVar5] != *(short *)(&DAT_841f0f2e666666 + lVar5 * 2));
    lVar5 = lVar5 + 1;
  } while (lVar5 != 8);
  uVar3 = gettimeofday((timeval *)local_1a8,(__timezone_ptr_t)0x0);
  if (uVar3 != 0) {
    printf("Error return from gettimeofday: %d",(ulong)uVar3);
  }
  _DAT_5c0f41f200110ff2 = (double)local_1a8._8_4_ * 1e-06 + (double)local_1a8._0_8_;
  printf("%0.6f\n",_DAT_5c0f41f200110ff2 - _DAT_358b480f110f41f2);
  return iVar4;
}


