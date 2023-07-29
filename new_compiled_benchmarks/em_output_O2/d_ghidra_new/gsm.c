
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <polybench.h>
#include "ghidra_base.h"
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
  int bVar3;
  
  if ((long)param_1 < 0) {
    if (param_1 < 0xffffffffc0000001) {
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



int gsm_div(short param_1,short param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  
  if (param_1 != 0) {
    lVar2 = (long)param_2;
    lVar1 = (long)param_1 * 2;
    lVar3 = 0;
    lVar4 = lVar2;
    if (lVar1 < lVar2) {
      lVar4 = lVar3;
    }
    lVar4 = (lVar1 - lVar4) * 2;
    lVar5 = lVar2;
    if (lVar4 < lVar2) {
      lVar5 = lVar3;
    }
    lVar5 = (lVar4 - lVar5) * 2;
    lVar16 = lVar2;
    if (lVar5 < lVar2) {
      lVar16 = lVar3;
    }
    lVar16 = (lVar5 - lVar16) * 2;
    lVar6 = lVar2;
    if (lVar16 < lVar2) {
      lVar6 = lVar3;
    }
    lVar6 = (lVar16 - lVar6) * 2;
    lVar7 = lVar2;
    if (lVar6 < lVar2) {
      lVar7 = lVar3;
    }
    lVar7 = (lVar6 - lVar7) * 2;
    lVar8 = lVar2;
    if (lVar7 < lVar2) {
      lVar8 = lVar3;
    }
    lVar8 = (lVar7 - lVar8) * 2;
    lVar9 = lVar2;
    if (lVar8 < lVar2) {
      lVar9 = lVar3;
    }
    lVar9 = (lVar8 - lVar9) * 2;
    lVar10 = lVar2;
    if (lVar9 < lVar2) {
      lVar10 = lVar3;
    }
    lVar10 = (lVar9 - lVar10) * 2;
    lVar11 = lVar2;
    if (lVar10 < lVar2) {
      lVar11 = lVar3;
    }
    lVar11 = (lVar10 - lVar11) * 2;
    lVar12 = lVar2;
    if (lVar11 < lVar2) {
      lVar12 = lVar3;
    }
    lVar12 = (lVar11 - lVar12) * 2;
    lVar13 = lVar2;
    if (lVar12 < lVar2) {
      lVar13 = lVar3;
    }
    lVar13 = (lVar12 - lVar13) * 2;
    lVar14 = lVar2;
    if (lVar13 < lVar2) {
      lVar14 = lVar3;
    }
    lVar14 = (lVar13 - lVar14) * 2;
    lVar15 = lVar2;
    if (lVar14 < lVar2) {
      lVar15 = lVar3;
    }
    lVar15 = (lVar14 - lVar15) * 2;
    if (lVar2 <= lVar15) {
      lVar3 = lVar2;
    }
    return (uint)(lVar2 <= (lVar15 - lVar3) * 2) +
           ((uint)(lVar2 <= lVar15) |
           (uint)(lVar2 <= lVar14) * 2 +
           ((uint)(lVar2 <= lVar13) |
           (uint)(lVar2 <= lVar12) * 2 +
           ((uint)(lVar2 <= lVar11) |
           (uint)(lVar2 <= lVar10) * 2 +
           ((uint)(lVar2 <= lVar9) |
           (uint)(lVar2 <= lVar8) * 2 +
           ((uint)(lVar2 <= lVar7) |
           (uint)(lVar2 <= lVar6) * 2 +
           ((uint)(lVar2 <= lVar16) |
           (uint)(lVar2 <= lVar4) * 4 + (uint)(lVar2 <= lVar1) * 8 + (uint)(lVar2 <= lVar5) * 2) * 4
           ) * 4) * 4) * 4) * 4) * 2;
  }
  return 0;
}



void Autocorrelation(int (*param_1) [16],int (*param_2) [16])

{
  short *psVar1;
  short *psVar2;
  int (*pauVar3) [16];
  int auVar4 [16];
  int auVar5 [16];
  int bVar6;
  uint uVar7;
  long lVar8;
  int iVar9;
  uint uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  int *puVar17;
  short sVar18;
  long lVar19;
  long lVar20;
  int uVar21;
  int auVar22 [16];
  int auVar23 [16];
  short sVar25;
  short sVar26;
  short sVar27;
  short sVar28;
  short sVar29;
  short sVar30;
  short sVar31;
  int auVar24 [16];
  short sVar32;
  short sVar33;
  short sVar34;
  short sVar35;
  short sVar36;
  short sVar37;
  short sVar38;
  short sVar39;
  int auVar40 [16];
  ushort uVar41;
  ushort uVar42;
  int local_88;
  long local_80;
  long local_78;
  long local_70;
  
  auVar22 = (int  [16])0x0;
  lVar8 = 0;
  auVar23 = (int  [16])0x0;
  do {
    auVar4 = *(int (*) [16])(*param_1 + lVar8 * 2);
    auVar5 = *(int (*) [16])(param_1[1] + lVar8 * 2);
                                                                                         ),
                                                                                -(ushort)(sVar32 < 0
                                                                                         ))))))));
                                                                                         ),
                                                                                -(ushort)(sVar18 < 0
                                                                                         ))))))));
    uVar41 = -(ushort)(sVar39 == -0x8000);
    uVar42 = -(ushort)(sVar31 == -0x8000);
    auVar22 = pmaxsw(auVar22,~auVar40 & auVar4 |
                                                                                        -0x8000) >>
                                                  sVar35 == -0x8000) >> 1,
                                                                                      -0x8000) >> 1,
                                                                     (ushort)-(ushort)(sVar32 ==
                                                                                      -0x8000) >> 1)
                                                          )))))) |
                                                                                     -0x8000),
                                                  sVar35 == -0x8000),
                                                                    -(ushort)(sVar32 == -0x8000)))))
                                                  ))) &
                                                  ,-sVar32)))))))) & auVar40);
    auVar23 = pmaxsw(auVar23,~auVar24 & auVar5 |
                                                                                        -0x8000) >>
                                                  sVar27 == -0x8000) >> 1,
                                                                                      -0x8000) >> 1,
                                                                     (ushort)-(ushort)(sVar18 ==
                                                                                      -0x8000) >> 1)
                                                          )))))) |
                                                                                     -0x8000),
                                                  sVar27 == -0x8000),
                                                                    -(ushort)(sVar18 == -0x8000)))))
                                                  ))) &
                                                  ,-sVar18)))))))) & auVar24);
    lVar8 = lVar8 + 0x10;
  } while (lVar8 != 0xa0);
  auVar22 = pmaxsw(auVar22,auVar23);
  ;
    bVar6 = 0;
    local_88 = 0;
  }
  else {
    uVar10 = uVar7 >> 8;
    if (0xff >= uVar7) {
      uVar10 = uVar7;
    }
    iVar9 = (uint)(0xff < uVar7) * 8 - (uint)*(byte *)(((ulong)uVar10 & 0xff) + 0x418dc1290204b60f);
    local_88 = iVar9 + -3;
    bVar6 = 0 < local_88;
    uVar10 = iVar9 - 4;
    if (uVar10 < 4) {
      uVar10 = 0x4000 >> ((byte)uVar10 & 0x1f);
      lVar8 = 0;
      do {
        *(short *)(*param_1 + lVar8 * 2) =
             (short)((int)*(short *)(*param_1 + lVar8 * 2) * uVar10 + 0x4000 >> 0xf);
        uVar11 = lVar8 * 2 | 2;
        *(short *)(*param_1 + uVar11) =
             (short)((int)*(short *)(*param_1 + uVar11) * uVar10 + 0x4000 >> 0xf);
        lVar8 = lVar8 + 2;
      } while (lVar8 != 0xa0);
    }
  }
  lVar13 = (long)*(short *)*param_1;
  param_2[3] = (int  [16])0x0;
  param_2[2] = (int  [16])0x0;
  param_2[1] = (int  [16])0x0;
  *param_2 = (int  [16])0x0;
  *(int8 *)param_2[4] = 0;
  lVar8 = (long)*(short *)(*param_1 + 4);
  lVar14 = (long)*(short *)(*param_1 + 6);
  lVar15 = (long)*(short *)(*param_1 + 8);
  lVar20 = (long)*(short *)(*param_1 + 10);
  lVar16 = (long)*(short *)(*param_1 + 0xc);
  lVar12 = (long)*(short *)(*param_1 + 2);
  uVar11 = (ulong)*(short *)(*param_1 + 0xe);
  local_78 = uVar11 * uVar11 +
             lVar16 * lVar16 + lVar20 * lVar20 + lVar15 * lVar15 +
             lVar14 * lVar14 + lVar8 * lVar8 + lVar12 * lVar12 + lVar13 * lVar13;
  local_70 = lVar16 * uVar11 + lVar16 * lVar20 + lVar20 * lVar15 +
             lVar15 * lVar14 + lVar14 * lVar8 + (lVar8 + lVar13) * lVar12;
  local_80 = lVar20 * uVar11 + lVar16 * lVar15 +
             lVar20 * lVar14 + lVar15 * lVar8 + lVar14 * lVar12 + lVar8 * lVar13;
  lVar19 = lVar15 * uVar11 + lVar16 * lVar14 + lVar20 * lVar8 + lVar15 * lVar12 + lVar14 * lVar13;
  lVar14 = lVar14 * uVar11 + lVar16 * lVar8 + lVar20 * lVar12 + lVar15 * lVar13;
  puVar17 = *param_1 + 0xe;
  lVar8 = lVar8 * uVar11 + lVar16 * lVar12 + lVar20 * lVar13;
  lVar15 = lVar12 * uVar11 + lVar16 * lVar13 + *(long *)param_2[3];
  lVar13 = uVar11 * lVar13 + *(long *)(param_2[3] + 8);
  iVar9 = 8;
  lVar12 = 0;
  do {
    lVar16 = (long)*(short *)(puVar17 + 2);
    sVar18 = (short)uVar11;
    psVar1 = (short *)(puVar17 + -10);
    psVar2 = (short *)(puVar17 + -0xc);
    pauVar3 = (int (*) [16])(puVar17 + -0xe);
    uVar11 = (ulong)(uint)(int)*(short *)(puVar17 + 2);
    local_78 = local_78 + lVar16 * lVar16;
    local_70 = local_70 + sVar18 * lVar16;
    local_80 = local_80 + *(short *)(puVar17 + -2) * lVar16;
    lVar19 = lVar19 + *(short *)(puVar17 + -4) * lVar16;
    lVar14 = lVar14 + *(short *)(puVar17 + -6) * lVar16;
    lVar8 = lVar8 + *(short *)(puVar17 + -8) * lVar16;
    puVar17 = puVar17 + 2;
    lVar15 = lVar15 + *psVar1 * lVar16;
    lVar13 = lVar13 + *psVar2 * lVar16;
    lVar12 = lVar12 + *(short *)*pauVar3 * lVar16;
    iVar9 = iVar9 + 1;
  } while (iVar9 != 0xa0);
  *(long *)param_2[4] = lVar12 * 2;
  *(long *)(param_2[3] + 8) = lVar13 * 2;
  *(long *)param_2[3] = lVar15 * 2;
  *(long *)(param_2[2] + 8) = lVar8 * 2;
  *(long *)param_2[2] = lVar14 * 2;
  *(long *)(param_2[1] + 8) = lVar19 * 2;
  *(long *)param_2[1] = local_80 * 2;
  *(long *)(*param_2 + 8) = local_70 * 2;
  *(long *)*param_2 = local_78 * 2;
  if (bVar6) {
    auVar22 = *param_1;
    auVar23 = param_1[1];
    auVar4 = param_1[2];
    auVar5 = param_1[3];
                                                               local_88)))),
                                                               local_88)))));
                                                               local_88)))),
                                                               local_88)))));
    *param_1 = auVar24;
    param_1[1] = auVar22;
                                                               local_88)))),
                                                               )))));
                                                               local_88)))),
                                                               )))));
    param_1[2] = auVar23;
    param_1[3] = auVar22;
    auVar22 = param_1[4];
    auVar23 = param_1[5];
                                                               local_88)))),
                                                               local_88)))));
                                                               local_88)))),
                                                               local_88)))));
    param_1[4] = auVar22;
    param_1[5] = auVar23;
    auVar22 = param_1[6];
    auVar23 = param_1[7];
                                                               local_88)))),
                                                               local_88)))));
                                                               local_88)))),
                                                               local_88)))));
    param_1[6] = auVar22;
    param_1[7] = auVar23;
    auVar22 = param_1[8];
    auVar23 = param_1[9];
                                                               local_88)))),
                                                               local_88)))));
                                                               local_88)))),
                                                               local_88)))));
    param_1[8] = auVar22;
    param_1[9] = auVar23;
    auVar22 = param_1[10];
    auVar23 = param_1[0xb];
                                                               local_88)))),
                                                               local_88)))));
                                                               local_88)))),
                                                               local_88)))));
    param_1[10] = auVar22;
    param_1[0xb] = auVar23;
    auVar22 = param_1[0xc];
    auVar23 = param_1[0xd];
                                                               local_88)))),
                                                               local_88)))));
                                                               local_88)))),
                                                               local_88)))));
    param_1[0xc] = auVar22;
    param_1[0xd] = auVar23;
    auVar22 = param_1[0xe];
    auVar23 = param_1[0xf];
                                                               local_88)))),
                                                               local_88)))));
                                                               local_88)))),
                                                               local_88)))));
    param_1[0xe] = auVar22;
    param_1[0xf] = auVar23;
    auVar22 = param_1[0x10];
    auVar23 = param_1[0x11];
                                                               local_88)))),
                                                               local_88)))));
                                                               local_88)))),
                                                               local_88)))));
    param_1[0x10] = auVar22;
    param_1[0x11] = auVar23;
    auVar22 = param_1[0x12];
    auVar23 = param_1[0x13];
                                                               local_88)))),
                                                               local_88)))));
                                                               local_88)))),
                                                               local_88)))));
    param_1[0x12] = auVar22;
    param_1[0x13] = auVar23;
  }
  return;
}




void Reflection_coefficients(ulong *param_1,int (*param_2) [16])

{
  ushort uVar1;
  uint uVar2;
  short sVar3;
  ulong uVar4;
  char cVar5;
  byte bVar6;
  short sVar7;
  long lVar8;
  size_t __n;
  short sVar9;
  short sVar10;
  ushort uVar11;
  ushort uVar12;
  short sVar13;
  ulong uVar14;
  ulong uVar15;
  short sVar16;
  ulong uVar17;
  int bVar18;
  ushort local_78 [6];
  int local_6c;
  int local_6a;
  int local_68;
  ushort auStack_58 [5];
  int local_4e;
  int local_4c;
  int local_4a;
  ulong local_40;
  long local_38;
  
  uVar17 = *param_1;
  if (uVar17 == 0) {
    return;
  }
  uVar4 = uVar17;
  if ((long)uVar17 < 0) {
    if (uVar17 < 0xffffffffc0000001) {
      bVar6 = 0;
      goto LAB_00100c81;
    }
    uVar4 = ~uVar17;
  }
  if ((short)(uVar4 >> 0x10) == 0) {
    bVar18 = (uVar4 & 0xff00) == 0;
    if (!bVar18) {
      uVar4 = uVar4 >> 8;
    }
    bVar6 = (byte)uVar4;
    cVar5 = bVar18 * '\b' + '\x0f';
  }
  else {
    bVar6 = (byte)(uVar4 >> 0x18);
    if (bVar6 == 0) {
      cVar5 = '\a';
      bVar6 = (byte)(uVar4 >> 0x10);
    }
    else {
      cVar5 = -1;
    }
  }
  bVar6 = cVar5 + *(char *)((ulong)bVar6 + 0xd349c1010204b60f);
LAB_00100c81:
  uVar17 = uVar17 << (bVar6 & 0x3f);
  uVar14 = param_1[1] << (bVar6 & 0x3f);
  uVar15 = uVar14 >> 0x10;
  local_78[1] = (ushort)(uVar14 >> 0x10);
  local_78[2] = (ushort)((param_1[2] << (bVar6 & 0x3f)) >> 0x10);
  local_78[3] = (ushort)((param_1[3] << (bVar6 & 0x3f)) >> 0x10);
  local_78[4] = (ushort)((param_1[4] << (bVar6 & 0x3f)) >> 0x10);
  local_78[5] = (ushort)((param_1[5] << (bVar6 & 0x3f)) >> 0x10);
  local_6c = (int)((param_1[6] << (bVar6 & 0x3f)) >> 0x10);
  local_6a = (int)((param_1[7] << (bVar6 & 0x3f)) >> 0x10);
  local_78[0] = (ushort)(uVar17 >> 0x10);
  local_68 = (int)((param_1[8] << (bVar6 & 0x3f)) >> 0x10);
  uVar2 = (uint)(uVar14 >> 0x10);
  bVar18 = (uVar2 & 0xffff) == 0x8000;
  uVar4 = (ulong)-uVar2;
  sVar9 = 0x7fff;
  if (bVar18) {
    uVar4 = 0x7fff;
  }
  if (-1 < (short)local_78[1]) {
    uVar4 = uVar14 >> 0x10 & 0xffffffff;
  }
  auStack_58[1] = local_78[1];
  auStack_58[2] = local_78[2];
  auStack_58[3] = local_78[3];
  auStack_58[4] = local_78[4];
  local_4e = local_78[5];
  local_4c = local_6c;
  local_4a = local_6a;
  if ((short)local_78[0] < (short)uVar4) {
    __n = 0x10;
  }
  else {
    uVar14 = 1;
    lVar8 = 0;
    uVar17 = uVar17 >> 0x10;
    do {
      sVar16 = (short)uVar17;
      local_38 = lVar8;
      sVar3 = gsm_div((int)(short)uVar4,(int)sVar16);
      sVar7 = -sVar3;
      if ((short)uVar15 < 1) {
        sVar7 = sVar3;
      }
      *(short *)*param_2 = sVar7;
      if (uVar14 == 8) {
        return;
      }
      sVar10 = (short)((int)sVar7 * (int)(short)uVar15 + 0x4000U >> 0xf);
      sVar3 = sVar10;
      if (sVar7 == -0x8000) {
        sVar3 = sVar9;
      }
      if (!bVar18) {
        sVar3 = sVar10;
      }
      local_40 = uVar17 & 0xffff0000 | (ulong)(ushort)(sVar16 + sVar3);
      if (SCARRY2(sVar16,sVar3)) {
        local_40 = (ulong)((int)(short)(sVar16 + sVar3) >> 0xf ^ 0xffff8000);
      }
      if (uVar14 < 8) {
        uVar17 = 1;
        do {
          uVar12 = auStack_58[uVar17];
          sVar16 = (short)((int)(short)uVar12 * (int)sVar7 + 0x4000U >> 0xf);
          sVar3 = sVar16;
          if ((short)uVar12 == -0x8000) {
            sVar3 = sVar9;
          }
          uVar1 = local_78[uVar17 + 1];
          sVar13 = (short)((int)(short)uVar1 * (int)sVar7 + 0x4000U >> 0xf);
          sVar10 = sVar13;
          if ((short)uVar1 == -0x8000) {
            sVar10 = sVar9;
          }
          if (sVar7 != -0x8000) {
            sVar10 = sVar13;
            sVar3 = sVar16;
          }
          uVar11 = uVar12 + sVar10;
          if (SCARRY2(uVar12,sVar10)) {
            uVar11 = (short)(uVar12 + sVar10) >> 0xf ^ 0x8000;
          }
          uVar12 = uVar1 + sVar3;
          if (SCARRY2(uVar1,sVar3)) {
            uVar12 = (short)(uVar1 + sVar3) >> 0xf ^ 0x8000;
          }
          local_78[uVar17] = uVar12;
          auStack_58[uVar17] = uVar11;
          bVar18 = uVar17 < 8 - uVar14;
          uVar17 = uVar17 + 1;
        } while (bVar18);
      }
      uVar14 = uVar14 + 1;
      param_2 = (int (*) [16])(*param_2 + 2);
      lVar8 = local_38 + 1;
      uVar15 = (ulong)local_78[1];
      bVar18 = local_78[1] == 0x8000;
      uVar2 = -(uint)local_78[1];
      if (bVar18) {
        uVar2 = 0x7fff;
      }
      uVar4 = (ulong)uVar2;
      if (-1 < (short)local_78[1]) {
        uVar4 = uVar15;
      }
      uVar17 = local_40;
    } while ((short)uVar4 <= (short)local_40);
    __n = lVar8 * -2 + 0x10;
    if (8 < (uint)uVar14) {
      return;
    }
  }
  memset(param_2,0,__n);
  return;
}



void Transformation_to_Log_Area_Ratios(ushort *param_1)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  
  uVar1 = *param_1;
  uVar3 = 0x7fff;
  if (uVar1 != 0x8000) {
    uVar3 = -uVar1;
  }
  if (-1 < (short)uVar1) {
    uVar3 = uVar1;
  }
  if ((short)uVar3 < 0x5666) {
    uVar3 = (ushort)((uint)(int)(short)uVar3 >> 1);
  }
  else if (uVar3 < 0x799a) {
    uVar3 = uVar3 + 0xd4cd;
  }
  else {
    uVar3 = uVar3 * 4 + 0x6800;
  }
  uVar2 = -uVar3;
  if (-1 < (short)uVar1) {
    uVar2 = uVar3;
  }
  *param_1 = uVar2;
  uVar1 = param_1[1];
  uVar3 = 0x7fff;
  if (uVar1 != 0x8000) {
    uVar3 = -uVar1;
  }
  if (-1 < (short)uVar1) {
    uVar3 = uVar1;
  }
  if ((short)uVar3 < 0x5666) {
    uVar3 = (ushort)((uint)(int)(short)uVar3 >> 1);
  }
  else if (uVar3 < 0x799a) {
    uVar3 = uVar3 + 0xd4cd;
  }
  else {
    uVar3 = uVar3 * 4 + 0x6800;
  }
  uVar2 = -uVar3;
  if (-1 < (short)uVar1) {
    uVar2 = uVar3;
  }
  param_1[1] = uVar2;
  uVar1 = param_1[2];
  uVar3 = 0x7fff;
  if (uVar1 != 0x8000) {
    uVar3 = -uVar1;
  }
  if (-1 < (short)uVar1) {
    uVar3 = uVar1;
  }
  if ((short)uVar3 < 0x5666) {
    uVar3 = (ushort)((uint)(int)(short)uVar3 >> 1);
  }
  else if (uVar3 < 0x799a) {
    uVar3 = uVar3 + 0xd4cd;
  }
  else {
    uVar3 = uVar3 * 4 + 0x6800;
  }
  uVar2 = -uVar3;
  if (-1 < (short)uVar1) {
    uVar2 = uVar3;
  }
  param_1[2] = uVar2;
  uVar1 = param_1[3];
  uVar3 = 0x7fff;
  if (uVar1 != 0x8000) {
    uVar3 = -uVar1;
  }
  if (-1 < (short)uVar1) {
    uVar3 = uVar1;
  }
  if ((short)uVar3 < 0x5666) {
    uVar3 = (ushort)((uint)(int)(short)uVar3 >> 1);
  }
  else if (uVar3 < 0x799a) {
    uVar3 = uVar3 + 0xd4cd;
  }
  else {
    uVar3 = uVar3 * 4 + 0x6800;
  }
  uVar2 = -uVar3;
  if (-1 < (short)uVar1) {
    uVar2 = uVar3;
  }
  param_1[3] = uVar2;
  uVar1 = param_1[4];
  uVar3 = 0x7fff;
  if (uVar1 != 0x8000) {
    uVar3 = -uVar1;
  }
  if (-1 < (short)uVar1) {
    uVar3 = uVar1;
  }
  if ((short)uVar3 < 0x5666) {
    uVar3 = (ushort)((uint)(int)(short)uVar3 >> 1);
  }
  else if (uVar3 < 0x799a) {
    uVar3 = uVar3 + 0xd4cd;
  }
  else {
    uVar3 = uVar3 * 4 + 0x6800;
  }
  uVar2 = -uVar3;
  if (-1 < (short)uVar1) {
    uVar2 = uVar3;
  }
  param_1[4] = uVar2;
  uVar1 = param_1[5];
  uVar3 = 0x7fff;
  if (uVar1 != 0x8000) {
    uVar3 = -uVar1;
  }
  if (-1 < (short)uVar1) {
    uVar3 = uVar1;
  }
  if ((short)uVar3 < 0x5666) {
    uVar3 = (ushort)((uint)(int)(short)uVar3 >> 1);
  }
  else if (uVar3 < 0x799a) {
    uVar3 = uVar3 + 0xd4cd;
  }
  else {
    uVar3 = uVar3 * 4 + 0x6800;
  }
  uVar2 = -uVar3;
  if (-1 < (short)uVar1) {
    uVar2 = uVar3;
  }
  param_1[5] = uVar2;
  uVar1 = param_1[6];
  uVar3 = 0x7fff;
  if (uVar1 != 0x8000) {
    uVar3 = -uVar1;
  }
  if (-1 < (short)uVar1) {
    uVar3 = uVar1;
  }
  if ((short)uVar3 < 0x5666) {
    uVar3 = (ushort)((uint)(int)(short)uVar3 >> 1);
  }
  else if (uVar3 < 0x799a) {
    uVar3 = uVar3 + 0xd4cd;
  }
  else {
    uVar3 = uVar3 * 4 + 0x6800;
  }
  uVar2 = -uVar3;
  if (-1 < (short)uVar1) {
    uVar2 = uVar3;
  }
  param_1[6] = uVar2;
  uVar1 = param_1[7];
  uVar3 = 0x7fff;
  if (uVar1 != 0x8000) {
    uVar3 = -uVar1;
  }
  if (-1 < (short)uVar1) {
    uVar3 = uVar1;
  }
  if ((short)uVar3 < 0x5666) {
    uVar3 = (ushort)((uint)(int)(short)uVar3 >> 1);
  }
  else if (uVar3 < 0x799a) {
    uVar3 = uVar3 + 0xd4cd;
  }
  else {
    uVar3 = uVar3 * 4 + 0x6800;
  }
  uVar2 = -uVar3;
  if (-1 < (short)uVar1) {
    uVar2 = uVar3;
  }
  param_1[7] = uVar2;
  return;
}




void Quantization_and_coding(int (*param_1) [16])

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  int uVar6;
  int uVar7;
  int auVar5 [16];
  ushort uVar8;
  ushort uVar10;
  ushort uVar12;
  ushort uVar14;
  int uVar16;
  int uVar17;
  int auVar9 [16];
  short sVar11;
  short sVar13;
  short sVar15;
  
  auVar9 = *param_1;
                                                  auVar9,0))) >> 0x60,0),
                   __LCPI9_1);
  auVar9 = paddsw(auVar9,__LCPI9_2);
  uVar10 = -(ushort)(0x3fff < sVar11);
  uVar12 = -(ushort)(0x1fff < sVar13);
  uVar14 = -(ushort)(0xfff < sVar15);
  auVar5 = pinsrw(auVar9,uVar1 + 0x100,3);
  auVar5 = pinsrw(auVar5,uVar2 + 0x100,5);
  auVar5 = pinsrw(auVar5,uVar3 + 0x100,6);
  auVar5 = pinsrw(auVar5,uVar4 + 0x100,7);
  auVar5 = psraw(auVar5,9);
  *(ushort *)*param_1 =
  *(ushort *)(*param_1 + 2) =
  *(ushort *)(*param_1 + 4) =
  *(ushort *)(*param_1 + 6) =
       -(ushort)(0x1eff < (short)uVar1) & 0x1f |
       ~-(ushort)(0x1eff < (short)uVar1) &
  *(ushort *)(*param_1 + 8) =
  *(ushort *)(*param_1 + 10) =
       -(ushort)(0xeff < (short)uVar2) & 0xf |
       ~-(ushort)(0xeff < (short)uVar2) &
  *(ushort *)(*param_1 + 0xc) =
       -(ushort)(0x6ff < (short)uVar3) & 7 |
       ~-(ushort)(0x6ff < (short)uVar3) &
  *(ushort *)(*param_1 + 0xe) =
       -(ushort)(0x6ff < (short)uVar4) & 7 |
       ~-(ushort)(0x6ff < (short)uVar4) &
  return;
}



void Gsm_LPC_Analysis(int8 param_1,int8 param_2)

{
  int auStack_58 [72];
  
  Autocorrelation(param_1,auStack_58);
  Reflection_coefficients(auStack_58,param_2);
  Transformation_to_Log_Area_Ratios(param_2);
  Quantization_and_coding(param_2);
  return;
}




int submain(void)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  uint uVar7;
  long lVar8;
  byte bVar9;
  int auVar10 [16];
  int uVar12;
  int uVar13;
  int auVar11 [16];
  int auVar14 [16];
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  short local_1e8;
  short sStack_1e6;
  short sStack_1e4;
  short sStack_1e2;
  short sStack_1e0;
  short sStack_1de;
  short sStack_1dc;
  short sStack_1da;
  int local_1b8;
  int uStack_1b4;
  int uStack_1b0;
  int uStack_1ac;
  int local_1a8 [80];
  int local_158 [8];
  ulong local_150 [39];
  
  uVar7 = gettimeofday((timeval *)local_158,(__timezone_ptr_t)0x0);
  if (uVar7 != 0) {
    printf("Error return from gettimeofday: %d",(ulong)uVar7);
  }
  _DAT_358b480f110f41f2 = (double)(int)local_150[0] * 1e-06 + (double)(long)local_158;
  memcpy(local_158,(void *)0x90249c8d48,0x140);
  Autocorrelation(local_158,local_1a8);
  Reflection_coefficients(local_1a8);
  Transformation_to_Log_Area_Ratios(&local_1b8);
  Quantization_and_coding(&local_1b8);
  iVar15 = 0;
  iVar16 = 0;
  iVar17 = 0;
  iVar18 = 0;
  lVar8 = 0;
  iVar19 = 0;
  iVar20 = 0;
  iVar21 = 0;
  iVar22 = 0;
  do {
    uVar1 = *(ulong *)((long)local_150 + lVar8 * 2);
    uVar2 = *(ulong *)(&DAT_d6f0f66c0760f66 + lVar8 * 2);
    uVar3 = *(ulong *)(&DAT_d6f0f66c0760f6e + lVar8 * 2);
                                                  (short)((uVar2 & 0xffffffffffff0000) >> 0x30) ==
                                                  0xffffffffffff0000) >> 0x20) ==
                                                           -(ushort)((short)uVar2 ==
                                                                    (short)*(ulong *)(local_158 +
                                                                                     lVar8 * 2))))))
                                                  ))) ^ auVar10;
                                                  0))) >> 0x60,0),
                                                  (short)((uVar3 & 0xffffffffffff0000) >> 0x30) ==
                                                  0xffffffffffff0000) >> 0x20) ==
                                                           -(ushort)((short)uVar3 == (short)uVar1)))
                                                  ))))) ^ auVar10;
                                                  0))) >> 0x60,0),
    lVar8 = lVar8 + 8;
  } while (lVar8 != 0xa0);
  uVar7 = gettimeofday((timeval *)local_1a8,(__timezone_ptr_t)0x0);
  if (uVar7 != 0) {
    printf("Error return from gettimeofday: %d",(ulong)uVar7);
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
  int bVar3;
  
  if ((long)param_1 < 0) {
    if (param_1 < 0xffffffffc0000001) {
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



int gsm_div(short param_1,short param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  
  if (param_1 != 0) {
    lVar2 = (long)param_2;
    lVar1 = (long)param_1 * 2;
    lVar3 = 0;
    lVar4 = lVar2;
    if (lVar1 < lVar2) {
      lVar4 = lVar3;
    }
    lVar4 = (lVar1 - lVar4) * 2;
    lVar5 = lVar2;
    if (lVar4 < lVar2) {
      lVar5 = lVar3;
    }
    lVar5 = (lVar4 - lVar5) * 2;
    lVar16 = lVar2;
    if (lVar5 < lVar2) {
      lVar16 = lVar3;
    }
    lVar16 = (lVar5 - lVar16) * 2;
    lVar6 = lVar2;
    if (lVar16 < lVar2) {
      lVar6 = lVar3;
    }
    lVar6 = (lVar16 - lVar6) * 2;
    lVar7 = lVar2;
    if (lVar6 < lVar2) {
      lVar7 = lVar3;
    }
    lVar7 = (lVar6 - lVar7) * 2;
    lVar8 = lVar2;
    if (lVar7 < lVar2) {
      lVar8 = lVar3;
    }
    lVar8 = (lVar7 - lVar8) * 2;
    lVar9 = lVar2;
    if (lVar8 < lVar2) {
      lVar9 = lVar3;
    }
    lVar9 = (lVar8 - lVar9) * 2;
    lVar10 = lVar2;
    if (lVar9 < lVar2) {
      lVar10 = lVar3;
    }
    lVar10 = (lVar9 - lVar10) * 2;
    lVar11 = lVar2;
    if (lVar10 < lVar2) {
      lVar11 = lVar3;
    }
    lVar11 = (lVar10 - lVar11) * 2;
    lVar12 = lVar2;
    if (lVar11 < lVar2) {
      lVar12 = lVar3;
    }
    lVar12 = (lVar11 - lVar12) * 2;
    lVar13 = lVar2;
    if (lVar12 < lVar2) {
      lVar13 = lVar3;
    }
    lVar13 = (lVar12 - lVar13) * 2;
    lVar14 = lVar2;
    if (lVar13 < lVar2) {
      lVar14 = lVar3;
    }
    lVar14 = (lVar13 - lVar14) * 2;
    lVar15 = lVar2;
    if (lVar14 < lVar2) {
      lVar15 = lVar3;
    }
    lVar15 = (lVar14 - lVar15) * 2;
    if (lVar2 <= lVar15) {
      lVar3 = lVar2;
    }
    return (uint)(lVar2 <= (lVar15 - lVar3) * 2) +
           ((uint)(lVar2 <= lVar15) |
           (uint)(lVar2 <= lVar14) * 2 +
           ((uint)(lVar2 <= lVar13) |
           (uint)(lVar2 <= lVar12) * 2 +
           ((uint)(lVar2 <= lVar11) |
           (uint)(lVar2 <= lVar10) * 2 +
           ((uint)(lVar2 <= lVar9) |
           (uint)(lVar2 <= lVar8) * 2 +
           ((uint)(lVar2 <= lVar7) |
           (uint)(lVar2 <= lVar6) * 2 +
           ((uint)(lVar2 <= lVar16) |
           (uint)(lVar2 <= lVar4) * 4 + (uint)(lVar2 <= lVar1) * 8 + (uint)(lVar2 <= lVar5) * 2) * 4
           ) * 4) * 4) * 4) * 4) * 2;
  }
  return 0;
}



void Autocorrelation(int (*param_1) [16],int (*param_2) [16])

{
  short *psVar1;
  short *psVar2;
  int (*pauVar3) [16];
  int auVar4 [16];
  int auVar5 [16];
  int bVar6;
  uint uVar7;
  long lVar8;
  int iVar9;
  uint uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  int *puVar17;
  short sVar18;
  long lVar19;
  long lVar20;
  int uVar21;
  int auVar22 [16];
  int auVar23 [16];
  short sVar25;
  short sVar26;
  short sVar27;
  short sVar28;
  short sVar29;
  short sVar30;
  short sVar31;
  int auVar24 [16];
  short sVar32;
  short sVar33;
  short sVar34;
  short sVar35;
  short sVar36;
  short sVar37;
  short sVar38;
  short sVar39;
  int auVar40 [16];
  ushort uVar41;
  ushort uVar42;
  int local_88;
  long local_80;
  long local_78;
  long local_70;
  
  auVar22 = (int  [16])0x0;
  lVar8 = 0;
  auVar23 = (int  [16])0x0;
  do {
    auVar4 = *(int (*) [16])(*param_1 + lVar8 * 2);
    auVar5 = *(int (*) [16])(param_1[1] + lVar8 * 2);
                                                                                         ),
                                                                                -(ushort)(sVar32 < 0
                                                                                         ))))))));
                                                                                         ),
                                                                                -(ushort)(sVar18 < 0
                                                                                         ))))))));
    uVar41 = -(ushort)(sVar39 == -0x8000);
    uVar42 = -(ushort)(sVar31 == -0x8000);
    auVar22 = pmaxsw(auVar22,~auVar40 & auVar4 |
                                                                                        -0x8000) >>
                                                  sVar35 == -0x8000) >> 1,
                                                                                      -0x8000) >> 1,
                                                                     (ushort)-(ushort)(sVar32 ==
                                                                                      -0x8000) >> 1)
                                                          )))))) |
                                                                                     -0x8000),
                                                  sVar35 == -0x8000),
                                                                    -(ushort)(sVar32 == -0x8000)))))
                                                  ))) &
                                                  ,-sVar32)))))))) & auVar40);
    auVar23 = pmaxsw(auVar23,~auVar24 & auVar5 |
                                                                                        -0x8000) >>
                                                  sVar27 == -0x8000) >> 1,
                                                                                      -0x8000) >> 1,
                                                                     (ushort)-(ushort)(sVar18 ==
                                                                                      -0x8000) >> 1)
                                                          )))))) |
                                                                                     -0x8000),
                                                  sVar27 == -0x8000),
                                                                    -(ushort)(sVar18 == -0x8000)))))
                                                  ))) &
                                                  ,-sVar18)))))))) & auVar24);
    lVar8 = lVar8 + 0x10;
  } while (lVar8 != 0xa0);
  auVar22 = pmaxsw(auVar22,auVar23);
  ;
    bVar6 = 0;
    local_88 = 0;
  }
  else {
    uVar10 = uVar7 >> 8;
    if (0xff >= uVar7) {
      uVar10 = uVar7;
    }
    iVar9 = (uint)(0xff < uVar7) * 8 - (uint)*(byte *)(((ulong)uVar10 & 0xff) + 0x418dc1290204b60f);
    local_88 = iVar9 + -3;
    bVar6 = 0 < local_88;
    uVar10 = iVar9 - 4;
    if (uVar10 < 4) {
      uVar10 = 0x4000 >> ((byte)uVar10 & 0x1f);
      lVar8 = 0;
      do {
        *(short *)(*param_1 + lVar8 * 2) =
             (short)((int)*(short *)(*param_1 + lVar8 * 2) * uVar10 + 0x4000 >> 0xf);
        uVar11 = lVar8 * 2 | 2;
        *(short *)(*param_1 + uVar11) =
             (short)((int)*(short *)(*param_1 + uVar11) * uVar10 + 0x4000 >> 0xf);
        lVar8 = lVar8 + 2;
      } while (lVar8 != 0xa0);
    }
  }
  lVar13 = (long)*(short *)*param_1;
  param_2[3] = (int  [16])0x0;
  param_2[2] = (int  [16])0x0;
  param_2[1] = (int  [16])0x0;
  *param_2 = (int  [16])0x0;
  *(int8 *)param_2[4] = 0;
  lVar8 = (long)*(short *)(*param_1 + 4);
  lVar14 = (long)*(short *)(*param_1 + 6);
  lVar15 = (long)*(short *)(*param_1 + 8);
  lVar20 = (long)*(short *)(*param_1 + 10);
  lVar16 = (long)*(short *)(*param_1 + 0xc);
  lVar12 = (long)*(short *)(*param_1 + 2);
  uVar11 = (ulong)*(short *)(*param_1 + 0xe);
  local_78 = uVar11 * uVar11 +
             lVar16 * lVar16 + lVar20 * lVar20 + lVar15 * lVar15 +
             lVar14 * lVar14 + lVar8 * lVar8 + lVar12 * lVar12 + lVar13 * lVar13;
  local_70 = lVar16 * uVar11 + lVar16 * lVar20 + lVar20 * lVar15 +
             lVar15 * lVar14 + lVar14 * lVar8 + (lVar8 + lVar13) * lVar12;
  local_80 = lVar20 * uVar11 + lVar16 * lVar15 +
             lVar20 * lVar14 + lVar15 * lVar8 + lVar14 * lVar12 + lVar8 * lVar13;
  lVar19 = lVar15 * uVar11 + lVar16 * lVar14 + lVar20 * lVar8 + lVar15 * lVar12 + lVar14 * lVar13;
  lVar14 = lVar14 * uVar11 + lVar16 * lVar8 + lVar20 * lVar12 + lVar15 * lVar13;
  puVar17 = *param_1 + 0xe;
  lVar8 = lVar8 * uVar11 + lVar16 * lVar12 + lVar20 * lVar13;
  lVar15 = lVar12 * uVar11 + lVar16 * lVar13 + *(long *)param_2[3];
  lVar13 = uVar11 * lVar13 + *(long *)(param_2[3] + 8);
  iVar9 = 8;
  lVar12 = 0;
  do {
    lVar16 = (long)*(short *)(puVar17 + 2);
    sVar18 = (short)uVar11;
    psVar1 = (short *)(puVar17 + -10);
    psVar2 = (short *)(puVar17 + -0xc);
    pauVar3 = (int (*) [16])(puVar17 + -0xe);
    uVar11 = (ulong)(uint)(int)*(short *)(puVar17 + 2);
    local_78 = local_78 + lVar16 * lVar16;
    local_70 = local_70 + sVar18 * lVar16;
    local_80 = local_80 + *(short *)(puVar17 + -2) * lVar16;
    lVar19 = lVar19 + *(short *)(puVar17 + -4) * lVar16;
    lVar14 = lVar14 + *(short *)(puVar17 + -6) * lVar16;
    lVar8 = lVar8 + *(short *)(puVar17 + -8) * lVar16;
    puVar17 = puVar17 + 2;
    lVar15 = lVar15 + *psVar1 * lVar16;
    lVar13 = lVar13 + *psVar2 * lVar16;
    lVar12 = lVar12 + *(short *)*pauVar3 * lVar16;
    iVar9 = iVar9 + 1;
  } while (iVar9 != 0xa0);
  *(long *)param_2[4] = lVar12 * 2;
  *(long *)(param_2[3] + 8) = lVar13 * 2;
  *(long *)param_2[3] = lVar15 * 2;
  *(long *)(param_2[2] + 8) = lVar8 * 2;
  *(long *)param_2[2] = lVar14 * 2;
  *(long *)(param_2[1] + 8) = lVar19 * 2;
  *(long *)param_2[1] = local_80 * 2;
  *(long *)(*param_2 + 8) = local_70 * 2;
  *(long *)*param_2 = local_78 * 2;
  if (bVar6) {
    auVar22 = *param_1;
    auVar23 = param_1[1];
    auVar4 = param_1[2];
    auVar5 = param_1[3];
                                                               local_88)))),
                                                               local_88)))));
                                                               local_88)))),
                                                               local_88)))));
    *param_1 = auVar24;
    param_1[1] = auVar22;
                                                               local_88)))),
                                                               )))));
                                                               local_88)))),
                                                               )))));
    param_1[2] = auVar23;
    param_1[3] = auVar22;
    auVar22 = param_1[4];
    auVar23 = param_1[5];
                                                               local_88)))),
                                                               local_88)))));
                                                               local_88)))),
                                                               local_88)))));
    param_1[4] = auVar22;
    param_1[5] = auVar23;
    auVar22 = param_1[6];
    auVar23 = param_1[7];
                                                               local_88)))),
                                                               local_88)))));
                                                               local_88)))),
                                                               local_88)))));
    param_1[6] = auVar22;
    param_1[7] = auVar23;
    auVar22 = param_1[8];
    auVar23 = param_1[9];
                                                               local_88)))),
                                                               local_88)))));
                                                               local_88)))),
                                                               local_88)))));
    param_1[8] = auVar22;
    param_1[9] = auVar23;
    auVar22 = param_1[10];
    auVar23 = param_1[0xb];
                                                               local_88)))),
                                                               local_88)))));
                                                               local_88)))),
                                                               local_88)))));
    param_1[10] = auVar22;
    param_1[0xb] = auVar23;
    auVar22 = param_1[0xc];
    auVar23 = param_1[0xd];
                                                               local_88)))),
                                                               local_88)))));
                                                               local_88)))),
                                                               local_88)))));
    param_1[0xc] = auVar22;
    param_1[0xd] = auVar23;
    auVar22 = param_1[0xe];
    auVar23 = param_1[0xf];
                                                               local_88)))),
                                                               local_88)))));
                                                               local_88)))),
                                                               local_88)))));
    param_1[0xe] = auVar22;
    param_1[0xf] = auVar23;
    auVar22 = param_1[0x10];
    auVar23 = param_1[0x11];
                                                               local_88)))),
                                                               local_88)))));
                                                               local_88)))),
                                                               local_88)))));
    param_1[0x10] = auVar22;
    param_1[0x11] = auVar23;
    auVar22 = param_1[0x12];
    auVar23 = param_1[0x13];
                                                               local_88)))),
                                                               local_88)))));
                                                               local_88)))),
                                                               local_88)))));
    param_1[0x12] = auVar22;
    param_1[0x13] = auVar23;
  }
  return;
}




void Reflection_coefficients(ulong *param_1,int (*param_2) [16])

{
  ushort uVar1;
  uint uVar2;
  short sVar3;
  ulong uVar4;
  char cVar5;
  byte bVar6;
  short sVar7;
  long lVar8;
  size_t __n;
  short sVar9;
  short sVar10;
  ushort uVar11;
  ushort uVar12;
  short sVar13;
  ulong uVar14;
  ulong uVar15;
  short sVar16;
  ulong uVar17;
  int bVar18;
  ushort local_78 [6];
  int local_6c;
  int local_6a;
  int local_68;
  ushort auStack_58 [5];
  int local_4e;
  int local_4c;
  int local_4a;
  ulong local_40;
  long local_38;
  
  uVar17 = *param_1;
  if (uVar17 == 0) {
    return;
  }
  uVar4 = uVar17;
  if ((long)uVar17 < 0) {
    if (uVar17 < 0xffffffffc0000001) {
      bVar6 = 0;
      goto LAB_00100c81;
    }
    uVar4 = ~uVar17;
  }
  if ((short)(uVar4 >> 0x10) == 0) {
    bVar18 = (uVar4 & 0xff00) == 0;
    if (!bVar18) {
      uVar4 = uVar4 >> 8;
    }
    bVar6 = (byte)uVar4;
    cVar5 = bVar18 * '\b' + '\x0f';
  }
  else {
    bVar6 = (byte)(uVar4 >> 0x18);
    if (bVar6 == 0) {
      cVar5 = '\a';
      bVar6 = (byte)(uVar4 >> 0x10);
    }
    else {
      cVar5 = -1;
    }
  }
  bVar6 = cVar5 + *(char *)((ulong)bVar6 + 0xd349c1010204b60f);
LAB_00100c81:
  uVar17 = uVar17 << (bVar6 & 0x3f);
  uVar14 = param_1[1] << (bVar6 & 0x3f);
  uVar15 = uVar14 >> 0x10;
  local_78[1] = (ushort)(uVar14 >> 0x10);
  local_78[2] = (ushort)((param_1[2] << (bVar6 & 0x3f)) >> 0x10);
  local_78[3] = (ushort)((param_1[3] << (bVar6 & 0x3f)) >> 0x10);
  local_78[4] = (ushort)((param_1[4] << (bVar6 & 0x3f)) >> 0x10);
  local_78[5] = (ushort)((param_1[5] << (bVar6 & 0x3f)) >> 0x10);
  local_6c = (int)((param_1[6] << (bVar6 & 0x3f)) >> 0x10);
  local_6a = (int)((param_1[7] << (bVar6 & 0x3f)) >> 0x10);
  local_78[0] = (ushort)(uVar17 >> 0x10);
  local_68 = (int)((param_1[8] << (bVar6 & 0x3f)) >> 0x10);
  uVar2 = (uint)(uVar14 >> 0x10);
  bVar18 = (uVar2 & 0xffff) == 0x8000;
  uVar4 = (ulong)-uVar2;
  sVar9 = 0x7fff;
  if (bVar18) {
    uVar4 = 0x7fff;
  }
  if (-1 < (short)local_78[1]) {
    uVar4 = uVar14 >> 0x10 & 0xffffffff;
  }
  auStack_58[1] = local_78[1];
  auStack_58[2] = local_78[2];
  auStack_58[3] = local_78[3];
  auStack_58[4] = local_78[4];
  local_4e = local_78[5];
  local_4c = local_6c;
  local_4a = local_6a;
  if ((short)local_78[0] < (short)uVar4) {
    __n = 0x10;
  }
  else {
    uVar14 = 1;
    lVar8 = 0;
    uVar17 = uVar17 >> 0x10;
    do {
      sVar16 = (short)uVar17;
      local_38 = lVar8;
      sVar3 = gsm_div((int)(short)uVar4,(int)sVar16);
      sVar7 = -sVar3;
      if ((short)uVar15 < 1) {
        sVar7 = sVar3;
      }
      *(short *)*param_2 = sVar7;
      if (uVar14 == 8) {
        return;
      }
      sVar10 = (short)((int)sVar7 * (int)(short)uVar15 + 0x4000U >> 0xf);
      sVar3 = sVar10;
      if (sVar7 == -0x8000) {
        sVar3 = sVar9;
      }
      if (!bVar18) {
        sVar3 = sVar10;
      }
      local_40 = uVar17 & 0xffff0000 | (ulong)(ushort)(sVar16 + sVar3);
      if (SCARRY2(sVar16,sVar3)) {
        local_40 = (ulong)((int)(short)(sVar16 + sVar3) >> 0xf ^ 0xffff8000);
      }
      if (uVar14 < 8) {
        uVar17 = 1;
        do {
          uVar12 = auStack_58[uVar17];
          sVar16 = (short)((int)(short)uVar12 * (int)sVar7 + 0x4000U >> 0xf);
          sVar3 = sVar16;
          if ((short)uVar12 == -0x8000) {
            sVar3 = sVar9;
          }
          uVar1 = local_78[uVar17 + 1];
          sVar13 = (short)((int)(short)uVar1 * (int)sVar7 + 0x4000U >> 0xf);
          sVar10 = sVar13;
          if ((short)uVar1 == -0x8000) {
            sVar10 = sVar9;
          }
          if (sVar7 != -0x8000) {
            sVar10 = sVar13;
            sVar3 = sVar16;
          }
          uVar11 = uVar12 + sVar10;
          if (SCARRY2(uVar12,sVar10)) {
            uVar11 = (short)(uVar12 + sVar10) >> 0xf ^ 0x8000;
          }
          uVar12 = uVar1 + sVar3;
          if (SCARRY2(uVar1,sVar3)) {
            uVar12 = (short)(uVar1 + sVar3) >> 0xf ^ 0x8000;
          }
          local_78[uVar17] = uVar12;
          auStack_58[uVar17] = uVar11;
          bVar18 = uVar17 < 8 - uVar14;
          uVar17 = uVar17 + 1;
        } while (bVar18);
      }
      uVar14 = uVar14 + 1;
      param_2 = (int (*) [16])(*param_2 + 2);
      lVar8 = local_38 + 1;
      uVar15 = (ulong)local_78[1];
      bVar18 = local_78[1] == 0x8000;
      uVar2 = -(uint)local_78[1];
      if (bVar18) {
        uVar2 = 0x7fff;
      }
      uVar4 = (ulong)uVar2;
      if (-1 < (short)local_78[1]) {
        uVar4 = uVar15;
      }
      uVar17 = local_40;
    } while ((short)uVar4 <= (short)local_40);
    __n = lVar8 * -2 + 0x10;
    if (8 < (uint)uVar14) {
      return;
    }
  }
  memset(param_2,0,__n);
  return;
}



void Transformation_to_Log_Area_Ratios(ushort *param_1)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  
  uVar1 = *param_1;
  uVar3 = 0x7fff;
  if (uVar1 != 0x8000) {
    uVar3 = -uVar1;
  }
  if (-1 < (short)uVar1) {
    uVar3 = uVar1;
  }
  if ((short)uVar3 < 0x5666) {
    uVar3 = (ushort)((uint)(int)(short)uVar3 >> 1);
  }
  else if (uVar3 < 0x799a) {
    uVar3 = uVar3 + 0xd4cd;
  }
  else {
    uVar3 = uVar3 * 4 + 0x6800;
  }
  uVar2 = -uVar3;
  if (-1 < (short)uVar1) {
    uVar2 = uVar3;
  }
  *param_1 = uVar2;
  uVar1 = param_1[1];
  uVar3 = 0x7fff;
  if (uVar1 != 0x8000) {
    uVar3 = -uVar1;
  }
  if (-1 < (short)uVar1) {
    uVar3 = uVar1;
  }
  if ((short)uVar3 < 0x5666) {
    uVar3 = (ushort)((uint)(int)(short)uVar3 >> 1);
  }
  else if (uVar3 < 0x799a) {
    uVar3 = uVar3 + 0xd4cd;
  }
  else {
    uVar3 = uVar3 * 4 + 0x6800;
  }
  uVar2 = -uVar3;
  if (-1 < (short)uVar1) {
    uVar2 = uVar3;
  }
  param_1[1] = uVar2;
  uVar1 = param_1[2];
  uVar3 = 0x7fff;
  if (uVar1 != 0x8000) {
    uVar3 = -uVar1;
  }
  if (-1 < (short)uVar1) {
    uVar3 = uVar1;
  }
  if ((short)uVar3 < 0x5666) {
    uVar3 = (ushort)((uint)(int)(short)uVar3 >> 1);
  }
  else if (uVar3 < 0x799a) {
    uVar3 = uVar3 + 0xd4cd;
  }
  else {
    uVar3 = uVar3 * 4 + 0x6800;
  }
  uVar2 = -uVar3;
  if (-1 < (short)uVar1) {
    uVar2 = uVar3;
  }
  param_1[2] = uVar2;
  uVar1 = param_1[3];
  uVar3 = 0x7fff;
  if (uVar1 != 0x8000) {
    uVar3 = -uVar1;
  }
  if (-1 < (short)uVar1) {
    uVar3 = uVar1;
  }
  if ((short)uVar3 < 0x5666) {
    uVar3 = (ushort)((uint)(int)(short)uVar3 >> 1);
  }
  else if (uVar3 < 0x799a) {
    uVar3 = uVar3 + 0xd4cd;
  }
  else {
    uVar3 = uVar3 * 4 + 0x6800;
  }
  uVar2 = -uVar3;
  if (-1 < (short)uVar1) {
    uVar2 = uVar3;
  }
  param_1[3] = uVar2;
  uVar1 = param_1[4];
  uVar3 = 0x7fff;
  if (uVar1 != 0x8000) {
    uVar3 = -uVar1;
  }
  if (-1 < (short)uVar1) {
    uVar3 = uVar1;
  }
  if ((short)uVar3 < 0x5666) {
    uVar3 = (ushort)((uint)(int)(short)uVar3 >> 1);
  }
  else if (uVar3 < 0x799a) {
    uVar3 = uVar3 + 0xd4cd;
  }
  else {
    uVar3 = uVar3 * 4 + 0x6800;
  }
  uVar2 = -uVar3;
  if (-1 < (short)uVar1) {
    uVar2 = uVar3;
  }
  param_1[4] = uVar2;
  uVar1 = param_1[5];
  uVar3 = 0x7fff;
  if (uVar1 != 0x8000) {
    uVar3 = -uVar1;
  }
  if (-1 < (short)uVar1) {
    uVar3 = uVar1;
  }
  if ((short)uVar3 < 0x5666) {
    uVar3 = (ushort)((uint)(int)(short)uVar3 >> 1);
  }
  else if (uVar3 < 0x799a) {
    uVar3 = uVar3 + 0xd4cd;
  }
  else {
    uVar3 = uVar3 * 4 + 0x6800;
  }
  uVar2 = -uVar3;
  if (-1 < (short)uVar1) {
    uVar2 = uVar3;
  }
  param_1[5] = uVar2;
  uVar1 = param_1[6];
  uVar3 = 0x7fff;
  if (uVar1 != 0x8000) {
    uVar3 = -uVar1;
  }
  if (-1 < (short)uVar1) {
    uVar3 = uVar1;
  }
  if ((short)uVar3 < 0x5666) {
    uVar3 = (ushort)((uint)(int)(short)uVar3 >> 1);
  }
  else if (uVar3 < 0x799a) {
    uVar3 = uVar3 + 0xd4cd;
  }
  else {
    uVar3 = uVar3 * 4 + 0x6800;
  }
  uVar2 = -uVar3;
  if (-1 < (short)uVar1) {
    uVar2 = uVar3;
  }
  param_1[6] = uVar2;
  uVar1 = param_1[7];
  uVar3 = 0x7fff;
  if (uVar1 != 0x8000) {
    uVar3 = -uVar1;
  }
  if (-1 < (short)uVar1) {
    uVar3 = uVar1;
  }
  if ((short)uVar3 < 0x5666) {
    uVar3 = (ushort)((uint)(int)(short)uVar3 >> 1);
  }
  else if (uVar3 < 0x799a) {
    uVar3 = uVar3 + 0xd4cd;
  }
  else {
    uVar3 = uVar3 * 4 + 0x6800;
  }
  uVar2 = -uVar3;
  if (-1 < (short)uVar1) {
    uVar2 = uVar3;
  }
  param_1[7] = uVar2;
  return;
}




void Quantization_and_coding(int (*param_1) [16])

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  int uVar6;
  int uVar7;
  int auVar5 [16];
  ushort uVar8;
  ushort uVar10;
  ushort uVar12;
  ushort uVar14;
  int uVar16;
  int uVar17;
  int auVar9 [16];
  short sVar11;
  short sVar13;
  short sVar15;
  
  auVar9 = *param_1;
                                                  auVar9,0))) >> 0x60,0),
                   __LCPI9_1);
  auVar9 = paddsw(auVar9,__LCPI9_2);
  uVar10 = -(ushort)(0x3fff < sVar11);
  uVar12 = -(ushort)(0x1fff < sVar13);
  uVar14 = -(ushort)(0xfff < sVar15);
  auVar5 = pinsrw(auVar9,uVar1 + 0x100,3);
  auVar5 = pinsrw(auVar5,uVar2 + 0x100,5);
  auVar5 = pinsrw(auVar5,uVar3 + 0x100,6);
  auVar5 = pinsrw(auVar5,uVar4 + 0x100,7);
  auVar5 = psraw(auVar5,9);
  *(ushort *)*param_1 =
  *(ushort *)(*param_1 + 2) =
  *(ushort *)(*param_1 + 4) =
  *(ushort *)(*param_1 + 6) =
       -(ushort)(0x1eff < (short)uVar1) & 0x1f |
       ~-(ushort)(0x1eff < (short)uVar1) &
  *(ushort *)(*param_1 + 8) =
  *(ushort *)(*param_1 + 10) =
       -(ushort)(0xeff < (short)uVar2) & 0xf |
       ~-(ushort)(0xeff < (short)uVar2) &
  *(ushort *)(*param_1 + 0xc) =
       -(ushort)(0x6ff < (short)uVar3) & 7 |
       ~-(ushort)(0x6ff < (short)uVar3) &
  *(ushort *)(*param_1 + 0xe) =
       -(ushort)(0x6ff < (short)uVar4) & 7 |
       ~-(ushort)(0x6ff < (short)uVar4) &
  return;
}



void Gsm_LPC_Analysis(int8 param_1,int8 param_2)

{
  int auStack_58 [72];
  
  Autocorrelation(param_1,auStack_58);
  Reflection_coefficients(auStack_58,param_2);
  Transformation_to_Log_Area_Ratios(param_2);
  Quantization_and_coding(param_2);
  return;
}




int submain(void)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  uint uVar7;
  long lVar8;
  byte bVar9;
  int auVar10 [16];
  int uVar12;
  int uVar13;
  int auVar11 [16];
  int auVar14 [16];
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  short local_1e8;
  short sStack_1e6;
  short sStack_1e4;
  short sStack_1e2;
  short sStack_1e0;
  short sStack_1de;
  short sStack_1dc;
  short sStack_1da;
  int local_1b8;
  int uStack_1b4;
  int uStack_1b0;
  int uStack_1ac;
  int local_1a8 [80];
  int local_158 [8];
  ulong local_150 [39];
  
  uVar7 = gettimeofday((timeval *)local_158,(__timezone_ptr_t)0x0);
  if (uVar7 != 0) {
    printf("Error return from gettimeofday: %d",(ulong)uVar7);
  }
  _DAT_358b480f110f41f2 = (double)(int)local_150[0] * 1e-06 + (double)(long)local_158;
  memcpy(local_158,(void *)0x90249c8d48,0x140);
  Autocorrelation(local_158,local_1a8);
  Reflection_coefficients(local_1a8);
  Transformation_to_Log_Area_Ratios(&local_1b8);
  Quantization_and_coding(&local_1b8);
  iVar15 = 0;
  iVar16 = 0;
  iVar17 = 0;
  iVar18 = 0;
  lVar8 = 0;
  iVar19 = 0;
  iVar20 = 0;
  iVar21 = 0;
  iVar22 = 0;
  do {
    uVar1 = *(ulong *)((long)local_150 + lVar8 * 2);
    uVar2 = *(ulong *)(&DAT_d6f0f66c0760f66 + lVar8 * 2);
    uVar3 = *(ulong *)(&DAT_d6f0f66c0760f6e + lVar8 * 2);
                                                  (short)((uVar2 & 0xffffffffffff0000) >> 0x30) ==
                                                  0xffffffffffff0000) >> 0x20) ==
                                                           -(ushort)((short)uVar2 ==
                                                                    (short)*(ulong *)(local_158 +
                                                                                     lVar8 * 2))))))
                                                  ))) ^ auVar10;
                                                  0))) >> 0x60,0),
                                                  (short)((uVar3 & 0xffffffffffff0000) >> 0x30) ==
                                                  0xffffffffffff0000) >> 0x20) ==
                                                           -(ushort)((short)uVar3 == (short)uVar1)))
                                                  ))))) ^ auVar10;
                                                  0))) >> 0x60,0),
    lVar8 = lVar8 + 8;
  } while (lVar8 != 0xa0);
  uVar7 = gettimeofday((timeval *)local_1a8,(__timezone_ptr_t)0x0);
  if (uVar7 != 0) {
    printf("Error return from gettimeofday: %d",(ulong)uVar7);
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
  int bVar3;
  
  if ((long)param_1 < 0) {
    if (param_1 < 0xffffffffc0000001) {
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



int gsm_div(short param_1,short param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  
  if (param_1 != 0) {
    lVar2 = (long)param_2;
    lVar1 = (long)param_1 * 2;
    lVar3 = 0;
    lVar4 = lVar2;
    if (lVar1 < lVar2) {
      lVar4 = lVar3;
    }
    lVar4 = (lVar1 - lVar4) * 2;
    lVar5 = lVar2;
    if (lVar4 < lVar2) {
      lVar5 = lVar3;
    }
    lVar5 = (lVar4 - lVar5) * 2;
    lVar16 = lVar2;
    if (lVar5 < lVar2) {
      lVar16 = lVar3;
    }
    lVar16 = (lVar5 - lVar16) * 2;
    lVar6 = lVar2;
    if (lVar16 < lVar2) {
      lVar6 = lVar3;
    }
    lVar6 = (lVar16 - lVar6) * 2;
    lVar7 = lVar2;
    if (lVar6 < lVar2) {
      lVar7 = lVar3;
    }
    lVar7 = (lVar6 - lVar7) * 2;
    lVar8 = lVar2;
    if (lVar7 < lVar2) {
      lVar8 = lVar3;
    }
    lVar8 = (lVar7 - lVar8) * 2;
    lVar9 = lVar2;
    if (lVar8 < lVar2) {
      lVar9 = lVar3;
    }
    lVar9 = (lVar8 - lVar9) * 2;
    lVar10 = lVar2;
    if (lVar9 < lVar2) {
      lVar10 = lVar3;
    }
    lVar10 = (lVar9 - lVar10) * 2;
    lVar11 = lVar2;
    if (lVar10 < lVar2) {
      lVar11 = lVar3;
    }
    lVar11 = (lVar10 - lVar11) * 2;
    lVar12 = lVar2;
    if (lVar11 < lVar2) {
      lVar12 = lVar3;
    }
    lVar12 = (lVar11 - lVar12) * 2;
    lVar13 = lVar2;
    if (lVar12 < lVar2) {
      lVar13 = lVar3;
    }
    lVar13 = (lVar12 - lVar13) * 2;
    lVar14 = lVar2;
    if (lVar13 < lVar2) {
      lVar14 = lVar3;
    }
    lVar14 = (lVar13 - lVar14) * 2;
    lVar15 = lVar2;
    if (lVar14 < lVar2) {
      lVar15 = lVar3;
    }
    lVar15 = (lVar14 - lVar15) * 2;
    if (lVar2 <= lVar15) {
      lVar3 = lVar2;
    }
    return (uint)(lVar2 <= (lVar15 - lVar3) * 2) +
           ((uint)(lVar2 <= lVar15) |
           (uint)(lVar2 <= lVar14) * 2 +
           ((uint)(lVar2 <= lVar13) |
           (uint)(lVar2 <= lVar12) * 2 +
           ((uint)(lVar2 <= lVar11) |
           (uint)(lVar2 <= lVar10) * 2 +
           ((uint)(lVar2 <= lVar9) |
           (uint)(lVar2 <= lVar8) * 2 +
           ((uint)(lVar2 <= lVar7) |
           (uint)(lVar2 <= lVar6) * 2 +
           ((uint)(lVar2 <= lVar16) |
           (uint)(lVar2 <= lVar4) * 4 + (uint)(lVar2 <= lVar1) * 8 + (uint)(lVar2 <= lVar5) * 2) * 4
           ) * 4) * 4) * 4) * 4) * 2;
  }
  return 0;
}



void Autocorrelation(int (*param_1) [16],int (*param_2) [16])

{
  short *psVar1;
  short *psVar2;
  int (*pauVar3) [16];
  int auVar4 [16];
  int auVar5 [16];
  int bVar6;
  uint uVar7;
  long lVar8;
  int iVar9;
  uint uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  int *puVar17;
  short sVar18;
  long lVar19;
  long lVar20;
  int uVar21;
  int auVar22 [16];
  int auVar23 [16];
  short sVar25;
  short sVar26;
  short sVar27;
  short sVar28;
  short sVar29;
  short sVar30;
  short sVar31;
  int auVar24 [16];
  short sVar32;
  short sVar33;
  short sVar34;
  short sVar35;
  short sVar36;
  short sVar37;
  short sVar38;
  short sVar39;
  int auVar40 [16];
  ushort uVar41;
  ushort uVar42;
  int local_88;
  long local_80;
  long local_78;
  long local_70;
  
  auVar22 = (int  [16])0x0;
  lVar8 = 0;
  auVar23 = (int  [16])0x0;
  do {
    auVar4 = *(int (*) [16])(*param_1 + lVar8 * 2);
    auVar5 = *(int (*) [16])(param_1[1] + lVar8 * 2);
                                                                                         ),
                                                                                -(ushort)(sVar32 < 0
                                                                                         ))))))));
                                                                                         ),
                                                                                -(ushort)(sVar18 < 0
                                                                                         ))))))));
    uVar41 = -(ushort)(sVar39 == -0x8000);
    uVar42 = -(ushort)(sVar31 == -0x8000);
    auVar22 = pmaxsw(auVar22,~auVar40 & auVar4 |
                                                                                        -0x8000) >>
                                                  sVar35 == -0x8000) >> 1,
                                                                                      -0x8000) >> 1,
                                                                     (ushort)-(ushort)(sVar32 ==
                                                                                      -0x8000) >> 1)
                                                          )))))) |
                                                                                     -0x8000),
                                                  sVar35 == -0x8000),
                                                                    -(ushort)(sVar32 == -0x8000)))))
                                                  ))) &
                                                  ,-sVar32)))))))) & auVar40);
    auVar23 = pmaxsw(auVar23,~auVar24 & auVar5 |
                                                                                        -0x8000) >>
                                                  sVar27 == -0x8000) >> 1,
                                                                                      -0x8000) >> 1,
                                                                     (ushort)-(ushort)(sVar18 ==
                                                                                      -0x8000) >> 1)
                                                          )))))) |
                                                                                     -0x8000),
                                                  sVar27 == -0x8000),
                                                                    -(ushort)(sVar18 == -0x8000)))))
                                                  ))) &
                                                  ,-sVar18)))))))) & auVar24);
    lVar8 = lVar8 + 0x10;
  } while (lVar8 != 0xa0);
  auVar22 = pmaxsw(auVar22,auVar23);
  ;
    bVar6 = 0;
    local_88 = 0;
  }
  else {
    uVar10 = uVar7 >> 8;
    if (0xff >= uVar7) {
      uVar10 = uVar7;
    }
    iVar9 = (uint)(0xff < uVar7) * 8 - (uint)*(byte *)(((ulong)uVar10 & 0xff) + 0x418dc1290204b60f);
    local_88 = iVar9 + -3;
    bVar6 = 0 < local_88;
    uVar10 = iVar9 - 4;
    if (uVar10 < 4) {
      uVar10 = 0x4000 >> ((byte)uVar10 & 0x1f);
      lVar8 = 0;
      do {
        *(short *)(*param_1 + lVar8 * 2) =
             (short)((int)*(short *)(*param_1 + lVar8 * 2) * uVar10 + 0x4000 >> 0xf);
        uVar11 = lVar8 * 2 | 2;
        *(short *)(*param_1 + uVar11) =
             (short)((int)*(short *)(*param_1 + uVar11) * uVar10 + 0x4000 >> 0xf);
        lVar8 = lVar8 + 2;
      } while (lVar8 != 0xa0);
    }
  }
  lVar13 = (long)*(short *)*param_1;
  param_2[3] = (int  [16])0x0;
  param_2[2] = (int  [16])0x0;
  param_2[1] = (int  [16])0x0;
  *param_2 = (int  [16])0x0;
  *(int8 *)param_2[4] = 0;
  lVar8 = (long)*(short *)(*param_1 + 4);
  lVar14 = (long)*(short *)(*param_1 + 6);
  lVar15 = (long)*(short *)(*param_1 + 8);
  lVar20 = (long)*(short *)(*param_1 + 10);
  lVar16 = (long)*(short *)(*param_1 + 0xc);
  lVar12 = (long)*(short *)(*param_1 + 2);
  uVar11 = (ulong)*(short *)(*param_1 + 0xe);
  local_78 = uVar11 * uVar11 +
             lVar16 * lVar16 + lVar20 * lVar20 + lVar15 * lVar15 +
             lVar14 * lVar14 + lVar8 * lVar8 + lVar12 * lVar12 + lVar13 * lVar13;
  local_70 = lVar16 * uVar11 + lVar16 * lVar20 + lVar20 * lVar15 +
             lVar15 * lVar14 + lVar14 * lVar8 + (lVar8 + lVar13) * lVar12;
  local_80 = lVar20 * uVar11 + lVar16 * lVar15 +
             lVar20 * lVar14 + lVar15 * lVar8 + lVar14 * lVar12 + lVar8 * lVar13;
  lVar19 = lVar15 * uVar11 + lVar16 * lVar14 + lVar20 * lVar8 + lVar15 * lVar12 + lVar14 * lVar13;
  lVar14 = lVar14 * uVar11 + lVar16 * lVar8 + lVar20 * lVar12 + lVar15 * lVar13;
  puVar17 = *param_1 + 0xe;
  lVar8 = lVar8 * uVar11 + lVar16 * lVar12 + lVar20 * lVar13;
  lVar15 = lVar12 * uVar11 + lVar16 * lVar13 + *(long *)param_2[3];
  lVar13 = uVar11 * lVar13 + *(long *)(param_2[3] + 8);
  iVar9 = 8;
  lVar12 = 0;
  do {
    lVar16 = (long)*(short *)(puVar17 + 2);
    sVar18 = (short)uVar11;
    psVar1 = (short *)(puVar17 + -10);
    psVar2 = (short *)(puVar17 + -0xc);
    pauVar3 = (int (*) [16])(puVar17 + -0xe);
    uVar11 = (ulong)(uint)(int)*(short *)(puVar17 + 2);
    local_78 = local_78 + lVar16 * lVar16;
    local_70 = local_70 + sVar18 * lVar16;
    local_80 = local_80 + *(short *)(puVar17 + -2) * lVar16;
    lVar19 = lVar19 + *(short *)(puVar17 + -4) * lVar16;
    lVar14 = lVar14 + *(short *)(puVar17 + -6) * lVar16;
    lVar8 = lVar8 + *(short *)(puVar17 + -8) * lVar16;
    puVar17 = puVar17 + 2;
    lVar15 = lVar15 + *psVar1 * lVar16;
    lVar13 = lVar13 + *psVar2 * lVar16;
    lVar12 = lVar12 + *(short *)*pauVar3 * lVar16;
    iVar9 = iVar9 + 1;
  } while (iVar9 != 0xa0);
  *(long *)param_2[4] = lVar12 * 2;
  *(long *)(param_2[3] + 8) = lVar13 * 2;
  *(long *)param_2[3] = lVar15 * 2;
  *(long *)(param_2[2] + 8) = lVar8 * 2;
  *(long *)param_2[2] = lVar14 * 2;
  *(long *)(param_2[1] + 8) = lVar19 * 2;
  *(long *)param_2[1] = local_80 * 2;
  *(long *)(*param_2 + 8) = local_70 * 2;
  *(long *)*param_2 = local_78 * 2;
  if (bVar6) {
    auVar22 = *param_1;
    auVar23 = param_1[1];
    auVar4 = param_1[2];
    auVar5 = param_1[3];
                                                               local_88)))),
                                                               local_88)))));
                                                               local_88)))),
                                                               local_88)))));
    *param_1 = auVar24;
    param_1[1] = auVar22;
                                                               local_88)))),
                                                               )))));
                                                               local_88)))),
                                                               )))));
    param_1[2] = auVar23;
    param_1[3] = auVar22;
    auVar22 = param_1[4];
    auVar23 = param_1[5];
                                                               local_88)))),
                                                               local_88)))));
                                                               local_88)))),
                                                               local_88)))));
    param_1[4] = auVar22;
    param_1[5] = auVar23;
    auVar22 = param_1[6];
    auVar23 = param_1[7];
                                                               local_88)))),
                                                               local_88)))));
                                                               local_88)))),
                                                               local_88)))));
    param_1[6] = auVar22;
    param_1[7] = auVar23;
    auVar22 = param_1[8];
    auVar23 = param_1[9];
                                                               local_88)))),
                                                               local_88)))));
                                                               local_88)))),
                                                               local_88)))));
    param_1[8] = auVar22;
    param_1[9] = auVar23;
    auVar22 = param_1[10];
    auVar23 = param_1[0xb];
                                                               local_88)))),
                                                               local_88)))));
                                                               local_88)))),
                                                               local_88)))));
    param_1[10] = auVar22;
    param_1[0xb] = auVar23;
    auVar22 = param_1[0xc];
    auVar23 = param_1[0xd];
                                                               local_88)))),
                                                               local_88)))));
                                                               local_88)))),
                                                               local_88)))));
    param_1[0xc] = auVar22;
    param_1[0xd] = auVar23;
    auVar22 = param_1[0xe];
    auVar23 = param_1[0xf];
                                                               local_88)))),
                                                               local_88)))));
                                                               local_88)))),
                                                               local_88)))));
    param_1[0xe] = auVar22;
    param_1[0xf] = auVar23;
    auVar22 = param_1[0x10];
    auVar23 = param_1[0x11];
                                                               local_88)))),
                                                               local_88)))));
                                                               local_88)))),
                                                               local_88)))));
    param_1[0x10] = auVar22;
    param_1[0x11] = auVar23;
    auVar22 = param_1[0x12];
    auVar23 = param_1[0x13];
                                                               local_88)))),
                                                               local_88)))));
                                                               local_88)))),
                                                               local_88)))));
    param_1[0x12] = auVar22;
    param_1[0x13] = auVar23;
  }
  return;
}




void Reflection_coefficients(ulong *param_1,int (*param_2) [16])

{
  ushort uVar1;
  uint uVar2;
  short sVar3;
  ulong uVar4;
  char cVar5;
  byte bVar6;
  short sVar7;
  long lVar8;
  size_t __n;
  short sVar9;
  short sVar10;
  ushort uVar11;
  ushort uVar12;
  short sVar13;
  ulong uVar14;
  ulong uVar15;
  short sVar16;
  ulong uVar17;
  int bVar18;
  ushort local_78 [6];
  int local_6c;
  int local_6a;
  int local_68;
  ushort auStack_58 [5];
  int local_4e;
  int local_4c;
  int local_4a;
  ulong local_40;
  long local_38;
  
  uVar17 = *param_1;
  if (uVar17 == 0) {
    return;
  }
  uVar4 = uVar17;
  if ((long)uVar17 < 0) {
    if (uVar17 < 0xffffffffc0000001) {
      bVar6 = 0;
      goto LAB_00100c81;
    }
    uVar4 = ~uVar17;
  }
  if ((short)(uVar4 >> 0x10) == 0) {
    bVar18 = (uVar4 & 0xff00) == 0;
    if (!bVar18) {
      uVar4 = uVar4 >> 8;
    }
    bVar6 = (byte)uVar4;
    cVar5 = bVar18 * '\b' + '\x0f';
  }
  else {
    bVar6 = (byte)(uVar4 >> 0x18);
    if (bVar6 == 0) {
      cVar5 = '\a';
      bVar6 = (byte)(uVar4 >> 0x10);
    }
    else {
      cVar5 = -1;
    }
  }
  bVar6 = cVar5 + *(char *)((ulong)bVar6 + 0xd349c1010204b60f);
LAB_00100c81:
  uVar17 = uVar17 << (bVar6 & 0x3f);
  uVar14 = param_1[1] << (bVar6 & 0x3f);
  uVar15 = uVar14 >> 0x10;
  local_78[1] = (ushort)(uVar14 >> 0x10);
  local_78[2] = (ushort)((param_1[2] << (bVar6 & 0x3f)) >> 0x10);
  local_78[3] = (ushort)((param_1[3] << (bVar6 & 0x3f)) >> 0x10);
  local_78[4] = (ushort)((param_1[4] << (bVar6 & 0x3f)) >> 0x10);
  local_78[5] = (ushort)((param_1[5] << (bVar6 & 0x3f)) >> 0x10);
  local_6c = (int)((param_1[6] << (bVar6 & 0x3f)) >> 0x10);
  local_6a = (int)((param_1[7] << (bVar6 & 0x3f)) >> 0x10);
  local_78[0] = (ushort)(uVar17 >> 0x10);
  local_68 = (int)((param_1[8] << (bVar6 & 0x3f)) >> 0x10);
  uVar2 = (uint)(uVar14 >> 0x10);
  bVar18 = (uVar2 & 0xffff) == 0x8000;
  uVar4 = (ulong)-uVar2;
  sVar9 = 0x7fff;
  if (bVar18) {
    uVar4 = 0x7fff;
  }
  if (-1 < (short)local_78[1]) {
    uVar4 = uVar14 >> 0x10 & 0xffffffff;
  }
  auStack_58[1] = local_78[1];
  auStack_58[2] = local_78[2];
  auStack_58[3] = local_78[3];
  auStack_58[4] = local_78[4];
  local_4e = local_78[5];
  local_4c = local_6c;
  local_4a = local_6a;
  if ((short)local_78[0] < (short)uVar4) {
    __n = 0x10;
  }
  else {
    uVar14 = 1;
    lVar8 = 0;
    uVar17 = uVar17 >> 0x10;
    do {
      sVar16 = (short)uVar17;
      local_38 = lVar8;
      sVar3 = gsm_div((int)(short)uVar4,(int)sVar16);
      sVar7 = -sVar3;
      if ((short)uVar15 < 1) {
        sVar7 = sVar3;
      }
      *(short *)*param_2 = sVar7;
      if (uVar14 == 8) {
        return;
      }
      sVar10 = (short)((int)sVar7 * (int)(short)uVar15 + 0x4000U >> 0xf);
      sVar3 = sVar10;
      if (sVar7 == -0x8000) {
        sVar3 = sVar9;
      }
      if (!bVar18) {
        sVar3 = sVar10;
      }
      local_40 = uVar17 & 0xffff0000 | (ulong)(ushort)(sVar16 + sVar3);
      if (SCARRY2(sVar16,sVar3)) {
        local_40 = (ulong)((int)(short)(sVar16 + sVar3) >> 0xf ^ 0xffff8000);
      }
      if (uVar14 < 8) {
        uVar17 = 1;
        do {
          uVar12 = auStack_58[uVar17];
          sVar16 = (short)((int)(short)uVar12 * (int)sVar7 + 0x4000U >> 0xf);
          sVar3 = sVar16;
          if ((short)uVar12 == -0x8000) {
            sVar3 = sVar9;
          }
          uVar1 = local_78[uVar17 + 1];
          sVar13 = (short)((int)(short)uVar1 * (int)sVar7 + 0x4000U >> 0xf);
          sVar10 = sVar13;
          if ((short)uVar1 == -0x8000) {
            sVar10 = sVar9;
          }
          if (sVar7 != -0x8000) {
            sVar10 = sVar13;
            sVar3 = sVar16;
          }
          uVar11 = uVar12 + sVar10;
          if (SCARRY2(uVar12,sVar10)) {
            uVar11 = (short)(uVar12 + sVar10) >> 0xf ^ 0x8000;
          }
          uVar12 = uVar1 + sVar3;
          if (SCARRY2(uVar1,sVar3)) {
            uVar12 = (short)(uVar1 + sVar3) >> 0xf ^ 0x8000;
          }
          local_78[uVar17] = uVar12;
          auStack_58[uVar17] = uVar11;
          bVar18 = uVar17 < 8 - uVar14;
          uVar17 = uVar17 + 1;
        } while (bVar18);
      }
      uVar14 = uVar14 + 1;
      param_2 = (int (*) [16])(*param_2 + 2);
      lVar8 = local_38 + 1;
      uVar15 = (ulong)local_78[1];
      bVar18 = local_78[1] == 0x8000;
      uVar2 = -(uint)local_78[1];
      if (bVar18) {
        uVar2 = 0x7fff;
      }
      uVar4 = (ulong)uVar2;
      if (-1 < (short)local_78[1]) {
        uVar4 = uVar15;
      }
      uVar17 = local_40;
    } while ((short)uVar4 <= (short)local_40);
    __n = lVar8 * -2 + 0x10;
    if (8 < (uint)uVar14) {
      return;
    }
  }
  memset(param_2,0,__n);
  return;
}



void Transformation_to_Log_Area_Ratios(ushort *param_1)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  
  uVar1 = *param_1;
  uVar3 = 0x7fff;
  if (uVar1 != 0x8000) {
    uVar3 = -uVar1;
  }
  if (-1 < (short)uVar1) {
    uVar3 = uVar1;
  }
  if ((short)uVar3 < 0x5666) {
    uVar3 = (ushort)((uint)(int)(short)uVar3 >> 1);
  }
  else if (uVar3 < 0x799a) {
    uVar3 = uVar3 + 0xd4cd;
  }
  else {
    uVar3 = uVar3 * 4 + 0x6800;
  }
  uVar2 = -uVar3;
  if (-1 < (short)uVar1) {
    uVar2 = uVar3;
  }
  *param_1 = uVar2;
  uVar1 = param_1[1];
  uVar3 = 0x7fff;
  if (uVar1 != 0x8000) {
    uVar3 = -uVar1;
  }
  if (-1 < (short)uVar1) {
    uVar3 = uVar1;
  }
  if ((short)uVar3 < 0x5666) {
    uVar3 = (ushort)((uint)(int)(short)uVar3 >> 1);
  }
  else if (uVar3 < 0x799a) {
    uVar3 = uVar3 + 0xd4cd;
  }
  else {
    uVar3 = uVar3 * 4 + 0x6800;
  }
  uVar2 = -uVar3;
  if (-1 < (short)uVar1) {
    uVar2 = uVar3;
  }
  param_1[1] = uVar2;
  uVar1 = param_1[2];
  uVar3 = 0x7fff;
  if (uVar1 != 0x8000) {
    uVar3 = -uVar1;
  }
  if (-1 < (short)uVar1) {
    uVar3 = uVar1;
  }
  if ((short)uVar3 < 0x5666) {
    uVar3 = (ushort)((uint)(int)(short)uVar3 >> 1);
  }
  else if (uVar3 < 0x799a) {
    uVar3 = uVar3 + 0xd4cd;
  }
  else {
    uVar3 = uVar3 * 4 + 0x6800;
  }
  uVar2 = -uVar3;
  if (-1 < (short)uVar1) {
    uVar2 = uVar3;
  }
  param_1[2] = uVar2;
  uVar1 = param_1[3];
  uVar3 = 0x7fff;
  if (uVar1 != 0x8000) {
    uVar3 = -uVar1;
  }
  if (-1 < (short)uVar1) {
    uVar3 = uVar1;
  }
  if ((short)uVar3 < 0x5666) {
    uVar3 = (ushort)((uint)(int)(short)uVar3 >> 1);
  }
  else if (uVar3 < 0x799a) {
    uVar3 = uVar3 + 0xd4cd;
  }
  else {
    uVar3 = uVar3 * 4 + 0x6800;
  }
  uVar2 = -uVar3;
  if (-1 < (short)uVar1) {
    uVar2 = uVar3;
  }
  param_1[3] = uVar2;
  uVar1 = param_1[4];
  uVar3 = 0x7fff;
  if (uVar1 != 0x8000) {
    uVar3 = -uVar1;
  }
  if (-1 < (short)uVar1) {
    uVar3 = uVar1;
  }
  if ((short)uVar3 < 0x5666) {
    uVar3 = (ushort)((uint)(int)(short)uVar3 >> 1);
  }
  else if (uVar3 < 0x799a) {
    uVar3 = uVar3 + 0xd4cd;
  }
  else {
    uVar3 = uVar3 * 4 + 0x6800;
  }
  uVar2 = -uVar3;
  if (-1 < (short)uVar1) {
    uVar2 = uVar3;
  }
  param_1[4] = uVar2;
  uVar1 = param_1[5];
  uVar3 = 0x7fff;
  if (uVar1 != 0x8000) {
    uVar3 = -uVar1;
  }
  if (-1 < (short)uVar1) {
    uVar3 = uVar1;
  }
  if ((short)uVar3 < 0x5666) {
    uVar3 = (ushort)((uint)(int)(short)uVar3 >> 1);
  }
  else if (uVar3 < 0x799a) {
    uVar3 = uVar3 + 0xd4cd;
  }
  else {
    uVar3 = uVar3 * 4 + 0x6800;
  }
  uVar2 = -uVar3;
  if (-1 < (short)uVar1) {
    uVar2 = uVar3;
  }
  param_1[5] = uVar2;
  uVar1 = param_1[6];
  uVar3 = 0x7fff;
  if (uVar1 != 0x8000) {
    uVar3 = -uVar1;
  }
  if (-1 < (short)uVar1) {
    uVar3 = uVar1;
  }
  if ((short)uVar3 < 0x5666) {
    uVar3 = (ushort)((uint)(int)(short)uVar3 >> 1);
  }
  else if (uVar3 < 0x799a) {
    uVar3 = uVar3 + 0xd4cd;
  }
  else {
    uVar3 = uVar3 * 4 + 0x6800;
  }
  uVar2 = -uVar3;
  if (-1 < (short)uVar1) {
    uVar2 = uVar3;
  }
  param_1[6] = uVar2;
  uVar1 = param_1[7];
  uVar3 = 0x7fff;
  if (uVar1 != 0x8000) {
    uVar3 = -uVar1;
  }
  if (-1 < (short)uVar1) {
    uVar3 = uVar1;
  }
  if ((short)uVar3 < 0x5666) {
    uVar3 = (ushort)((uint)(int)(short)uVar3 >> 1);
  }
  else if (uVar3 < 0x799a) {
    uVar3 = uVar3 + 0xd4cd;
  }
  else {
    uVar3 = uVar3 * 4 + 0x6800;
  }
  uVar2 = -uVar3;
  if (-1 < (short)uVar1) {
    uVar2 = uVar3;
  }
  param_1[7] = uVar2;
  return;
}




void Quantization_and_coding(int (*param_1) [16])

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  int uVar6;
  int uVar7;
  int auVar5 [16];
  ushort uVar8;
  ushort uVar10;
  ushort uVar12;
  ushort uVar14;
  int uVar16;
  int uVar17;
  int auVar9 [16];
  short sVar11;
  short sVar13;
  short sVar15;
  
  auVar9 = *param_1;
                                                  auVar9,0))) >> 0x60,0),
                   __LCPI9_1);
  auVar9 = paddsw(auVar9,__LCPI9_2);
  uVar10 = -(ushort)(0x3fff < sVar11);
  uVar12 = -(ushort)(0x1fff < sVar13);
  uVar14 = -(ushort)(0xfff < sVar15);
  auVar5 = pinsrw(auVar9,uVar1 + 0x100,3);
  auVar5 = pinsrw(auVar5,uVar2 + 0x100,5);
  auVar5 = pinsrw(auVar5,uVar3 + 0x100,6);
  auVar5 = pinsrw(auVar5,uVar4 + 0x100,7);
  auVar5 = psraw(auVar5,9);
  *(ushort *)*param_1 =
  *(ushort *)(*param_1 + 2) =
  *(ushort *)(*param_1 + 4) =
  *(ushort *)(*param_1 + 6) =
       -(ushort)(0x1eff < (short)uVar1) & 0x1f |
       ~-(ushort)(0x1eff < (short)uVar1) &
  *(ushort *)(*param_1 + 8) =
  *(ushort *)(*param_1 + 10) =
       -(ushort)(0xeff < (short)uVar2) & 0xf |
       ~-(ushort)(0xeff < (short)uVar2) &
  *(ushort *)(*param_1 + 0xc) =
       -(ushort)(0x6ff < (short)uVar3) & 7 |
       ~-(ushort)(0x6ff < (short)uVar3) &
  *(ushort *)(*param_1 + 0xe) =
       -(ushort)(0x6ff < (short)uVar4) & 7 |
       ~-(ushort)(0x6ff < (short)uVar4) &
  return;
}



void Gsm_LPC_Analysis(int8 param_1,int8 param_2)

{
  int auStack_58 [72];
  
  Autocorrelation(param_1,auStack_58);
  Reflection_coefficients(auStack_58,param_2);
  Transformation_to_Log_Area_Ratios(param_2);
  Quantization_and_coding(param_2);
  return;
}




int submain(void)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  uint uVar7;
  long lVar8;
  byte bVar9;
  int auVar10 [16];
  int uVar12;
  int uVar13;
  int auVar11 [16];
  int auVar14 [16];
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  short local_1e8;
  short sStack_1e6;
  short sStack_1e4;
  short sStack_1e2;
  short sStack_1e0;
  short sStack_1de;
  short sStack_1dc;
  short sStack_1da;
  int local_1b8;
  int uStack_1b4;
  int uStack_1b0;
  int uStack_1ac;
  int local_1a8 [80];
  int local_158 [8];
  ulong local_150 [39];
  
  uVar7 = gettimeofday((timeval *)local_158,(__timezone_ptr_t)0x0);
  if (uVar7 != 0) {
    printf("Error return from gettimeofday: %d",(ulong)uVar7);
  }
  _DAT_358b480f110f41f2 = (double)(int)local_150[0] * 1e-06 + (double)(long)local_158;
  memcpy(local_158,(void *)0x90249c8d48,0x140);
  Autocorrelation(local_158,local_1a8);
  Reflection_coefficients(local_1a8);
  Transformation_to_Log_Area_Ratios(&local_1b8);
  Quantization_and_coding(&local_1b8);
  iVar15 = 0;
  iVar16 = 0;
  iVar17 = 0;
  iVar18 = 0;
  lVar8 = 0;
  iVar19 = 0;
  iVar20 = 0;
  iVar21 = 0;
  iVar22 = 0;
  do {
    uVar1 = *(ulong *)((long)local_150 + lVar8 * 2);
    uVar2 = *(ulong *)(&DAT_d6f0f66c0760f66 + lVar8 * 2);
    uVar3 = *(ulong *)(&DAT_d6f0f66c0760f6e + lVar8 * 2);
                                                  (short)((uVar2 & 0xffffffffffff0000) >> 0x30) ==
                                                  0xffffffffffff0000) >> 0x20) ==
                                                           -(ushort)((short)uVar2 ==
                                                                    (short)*(ulong *)(local_158 +
                                                                                     lVar8 * 2))))))
                                                  ))) ^ auVar10;
                                                  0))) >> 0x60,0),
                                                  (short)((uVar3 & 0xffffffffffff0000) >> 0x30) ==
                                                  0xffffffffffff0000) >> 0x20) ==
                                                           -(ushort)((short)uVar3 == (short)uVar1)))
                                                  ))))) ^ auVar10;
                                                  0))) >> 0x60,0),
    lVar8 = lVar8 + 8;
  } while (lVar8 != 0xa0);
  uVar7 = gettimeofday((timeval *)local_1a8,(__timezone_ptr_t)0x0);
  if (uVar7 != 0) {
    printf("Error return from gettimeofday: %d",(ulong)uVar7);
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
  int bVar3;
  
  if ((long)param_1 < 0) {
    if (param_1 < 0xffffffffc0000001) {
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



int gsm_div(short param_1,short param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  
  if (param_1 != 0) {
    lVar2 = (long)param_2;
    lVar1 = (long)param_1 * 2;
    lVar3 = 0;
    lVar4 = lVar2;
    if (lVar1 < lVar2) {
      lVar4 = lVar3;
    }
    lVar4 = (lVar1 - lVar4) * 2;
    lVar5 = lVar2;
    if (lVar4 < lVar2) {
      lVar5 = lVar3;
    }
    lVar5 = (lVar4 - lVar5) * 2;
    lVar16 = lVar2;
    if (lVar5 < lVar2) {
      lVar16 = lVar3;
    }
    lVar16 = (lVar5 - lVar16) * 2;
    lVar6 = lVar2;
    if (lVar16 < lVar2) {
      lVar6 = lVar3;
    }
    lVar6 = (lVar16 - lVar6) * 2;
    lVar7 = lVar2;
    if (lVar6 < lVar2) {
      lVar7 = lVar3;
    }
    lVar7 = (lVar6 - lVar7) * 2;
    lVar8 = lVar2;
    if (lVar7 < lVar2) {
      lVar8 = lVar3;
    }
    lVar8 = (lVar7 - lVar8) * 2;
    lVar9 = lVar2;
    if (lVar8 < lVar2) {
      lVar9 = lVar3;
    }
    lVar9 = (lVar8 - lVar9) * 2;
    lVar10 = lVar2;
    if (lVar9 < lVar2) {
      lVar10 = lVar3;
    }
    lVar10 = (lVar9 - lVar10) * 2;
    lVar11 = lVar2;
    if (lVar10 < lVar2) {
      lVar11 = lVar3;
    }
    lVar11 = (lVar10 - lVar11) * 2;
    lVar12 = lVar2;
    if (lVar11 < lVar2) {
      lVar12 = lVar3;
    }
    lVar12 = (lVar11 - lVar12) * 2;
    lVar13 = lVar2;
    if (lVar12 < lVar2) {
      lVar13 = lVar3;
    }
    lVar13 = (lVar12 - lVar13) * 2;
    lVar14 = lVar2;
    if (lVar13 < lVar2) {
      lVar14 = lVar3;
    }
    lVar14 = (lVar13 - lVar14) * 2;
    lVar15 = lVar2;
    if (lVar14 < lVar2) {
      lVar15 = lVar3;
    }
    lVar15 = (lVar14 - lVar15) * 2;
    if (lVar2 <= lVar15) {
      lVar3 = lVar2;
    }
    return (uint)(lVar2 <= (lVar15 - lVar3) * 2) +
           ((uint)(lVar2 <= lVar15) |
           (uint)(lVar2 <= lVar14) * 2 +
           ((uint)(lVar2 <= lVar13) |
           (uint)(lVar2 <= lVar12) * 2 +
           ((uint)(lVar2 <= lVar11) |
           (uint)(lVar2 <= lVar10) * 2 +
           ((uint)(lVar2 <= lVar9) |
           (uint)(lVar2 <= lVar8) * 2 +
           ((uint)(lVar2 <= lVar7) |
           (uint)(lVar2 <= lVar6) * 2 +
           ((uint)(lVar2 <= lVar16) |
           (uint)(lVar2 <= lVar4) * 4 + (uint)(lVar2 <= lVar1) * 8 + (uint)(lVar2 <= lVar5) * 2) * 4
           ) * 4) * 4) * 4) * 4) * 2;
  }
  return 0;
}



void Autocorrelation(int (*param_1) [16],int (*param_2) [16])

{
  short *psVar1;
  short *psVar2;
  int (*pauVar3) [16];
  int auVar4 [16];
  int auVar5 [16];
  int bVar6;
  uint uVar7;
  long lVar8;
  int iVar9;
  uint uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  int *puVar17;
  short sVar18;
  long lVar19;
  long lVar20;
  int uVar21;
  int auVar22 [16];
  int auVar23 [16];
  short sVar25;
  short sVar26;
  short sVar27;
  short sVar28;
  short sVar29;
  short sVar30;
  short sVar31;
  int auVar24 [16];
  short sVar32;
  short sVar33;
  short sVar34;
  short sVar35;
  short sVar36;
  short sVar37;
  short sVar38;
  short sVar39;
  int auVar40 [16];
  ushort uVar41;
  ushort uVar42;
  int local_88;
  long local_80;
  long local_78;
  long local_70;
  
  auVar22 = (int  [16])0x0;
  lVar8 = 0;
  auVar23 = (int  [16])0x0;
  do {
    auVar4 = *(int (*) [16])(*param_1 + lVar8 * 2);
    auVar5 = *(int (*) [16])(param_1[1] + lVar8 * 2);
                                                                                         ),
                                                                                -(ushort)(sVar32 < 0
                                                                                         ))))))));
                                                                                         ),
                                                                                -(ushort)(sVar18 < 0
                                                                                         ))))))));
    uVar41 = -(ushort)(sVar39 == -0x8000);
    uVar42 = -(ushort)(sVar31 == -0x8000);
    auVar22 = pmaxsw(auVar22,~auVar40 & auVar4 |
                                                                                        -0x8000) >>
                                                  sVar35 == -0x8000) >> 1,
                                                                                      -0x8000) >> 1,
                                                                     (ushort)-(ushort)(sVar32 ==
                                                                                      -0x8000) >> 1)
                                                          )))))) |
                                                                                     -0x8000),
                                                  sVar35 == -0x8000),
                                                                    -(ushort)(sVar32 == -0x8000)))))
                                                  ))) &
                                                  ,-sVar32)))))))) & auVar40);
    auVar23 = pmaxsw(auVar23,~auVar24 & auVar5 |
                                                                                        -0x8000) >>
                                                  sVar27 == -0x8000) >> 1,
                                                                                      -0x8000) >> 1,
                                                                     (ushort)-(ushort)(sVar18 ==
                                                                                      -0x8000) >> 1)
                                                          )))))) |
                                                                                     -0x8000),
                                                  sVar27 == -0x8000),
                                                                    -(ushort)(sVar18 == -0x8000)))))
                                                  ))) &
                                                  ,-sVar18)))))))) & auVar24);
    lVar8 = lVar8 + 0x10;
  } while (lVar8 != 0xa0);
  auVar22 = pmaxsw(auVar22,auVar23);
  ;
    bVar6 = 0;
    local_88 = 0;
  }
  else {
    uVar10 = uVar7 >> 8;
    if (0xff >= uVar7) {
      uVar10 = uVar7;
    }
    iVar9 = (uint)(0xff < uVar7) * 8 - (uint)*(byte *)(((ulong)uVar10 & 0xff) + 0x418dc1290204b60f);
    local_88 = iVar9 + -3;
    bVar6 = 0 < local_88;
    uVar10 = iVar9 - 4;
    if (uVar10 < 4) {
      uVar10 = 0x4000 >> ((byte)uVar10 & 0x1f);
      lVar8 = 0;
      do {
        *(short *)(*param_1 + lVar8 * 2) =
             (short)((int)*(short *)(*param_1 + lVar8 * 2) * uVar10 + 0x4000 >> 0xf);
        uVar11 = lVar8 * 2 | 2;
        *(short *)(*param_1 + uVar11) =
             (short)((int)*(short *)(*param_1 + uVar11) * uVar10 + 0x4000 >> 0xf);
        lVar8 = lVar8 + 2;
      } while (lVar8 != 0xa0);
    }
  }
  lVar13 = (long)*(short *)*param_1;
  param_2[3] = (int  [16])0x0;
  param_2[2] = (int  [16])0x0;
  param_2[1] = (int  [16])0x0;
  *param_2 = (int  [16])0x0;
  *(int8 *)param_2[4] = 0;
  lVar8 = (long)*(short *)(*param_1 + 4);
  lVar14 = (long)*(short *)(*param_1 + 6);
  lVar15 = (long)*(short *)(*param_1 + 8);
  lVar20 = (long)*(short *)(*param_1 + 10);
  lVar16 = (long)*(short *)(*param_1 + 0xc);
  lVar12 = (long)*(short *)(*param_1 + 2);
  uVar11 = (ulong)*(short *)(*param_1 + 0xe);
  local_78 = uVar11 * uVar11 +
             lVar16 * lVar16 + lVar20 * lVar20 + lVar15 * lVar15 +
             lVar14 * lVar14 + lVar8 * lVar8 + lVar12 * lVar12 + lVar13 * lVar13;
  local_70 = lVar16 * uVar11 + lVar16 * lVar20 + lVar20 * lVar15 +
             lVar15 * lVar14 + lVar14 * lVar8 + (lVar8 + lVar13) * lVar12;
  local_80 = lVar20 * uVar11 + lVar16 * lVar15 +
             lVar20 * lVar14 + lVar15 * lVar8 + lVar14 * lVar12 + lVar8 * lVar13;
  lVar19 = lVar15 * uVar11 + lVar16 * lVar14 + lVar20 * lVar8 + lVar15 * lVar12 + lVar14 * lVar13;
  lVar14 = lVar14 * uVar11 + lVar16 * lVar8 + lVar20 * lVar12 + lVar15 * lVar13;
  puVar17 = *param_1 + 0xe;
  lVar8 = lVar8 * uVar11 + lVar16 * lVar12 + lVar20 * lVar13;
  lVar15 = lVar12 * uVar11 + lVar16 * lVar13 + *(long *)param_2[3];
  lVar13 = uVar11 * lVar13 + *(long *)(param_2[3] + 8);
  iVar9 = 8;
  lVar12 = 0;
  do {
    lVar16 = (long)*(short *)(puVar17 + 2);
    sVar18 = (short)uVar11;
    psVar1 = (short *)(puVar17 + -10);
    psVar2 = (short *)(puVar17 + -0xc);
    pauVar3 = (int (*) [16])(puVar17 + -0xe);
    uVar11 = (ulong)(uint)(int)*(short *)(puVar17 + 2);
    local_78 = local_78 + lVar16 * lVar16;
    local_70 = local_70 + sVar18 * lVar16;
    local_80 = local_80 + *(short *)(puVar17 + -2) * lVar16;
    lVar19 = lVar19 + *(short *)(puVar17 + -4) * lVar16;
    lVar14 = lVar14 + *(short *)(puVar17 + -6) * lVar16;
    lVar8 = lVar8 + *(short *)(puVar17 + -8) * lVar16;
    puVar17 = puVar17 + 2;
    lVar15 = lVar15 + *psVar1 * lVar16;
    lVar13 = lVar13 + *psVar2 * lVar16;
    lVar12 = lVar12 + *(short *)*pauVar3 * lVar16;
    iVar9 = iVar9 + 1;
  } while (iVar9 != 0xa0);
  *(long *)param_2[4] = lVar12 * 2;
  *(long *)(param_2[3] + 8) = lVar13 * 2;
  *(long *)param_2[3] = lVar15 * 2;
  *(long *)(param_2[2] + 8) = lVar8 * 2;
  *(long *)param_2[2] = lVar14 * 2;
  *(long *)(param_2[1] + 8) = lVar19 * 2;
  *(long *)param_2[1] = local_80 * 2;
  *(long *)(*param_2 + 8) = local_70 * 2;
  *(long *)*param_2 = local_78 * 2;
  if (bVar6) {
    auVar22 = *param_1;
    auVar23 = param_1[1];
    auVar4 = param_1[2];
    auVar5 = param_1[3];
                                                               local_88)))),
                                                               local_88)))));
                                                               local_88)))),
                                                               local_88)))));
    *param_1 = auVar24;
    param_1[1] = auVar22;
                                                               local_88)))),
                                                               )))));
                                                               local_88)))),
                                                               )))));
    param_1[2] = auVar23;
    param_1[3] = auVar22;
    auVar22 = param_1[4];
    auVar23 = param_1[5];
                                                               local_88)))),
                                                               local_88)))));
                                                               local_88)))),
                                                               local_88)))));
    param_1[4] = auVar22;
    param_1[5] = auVar23;
    auVar22 = param_1[6];
    auVar23 = param_1[7];
                                                               local_88)))),
                                                               local_88)))));
                                                               local_88)))),
                                                               local_88)))));
    param_1[6] = auVar22;
    param_1[7] = auVar23;
    auVar22 = param_1[8];
    auVar23 = param_1[9];
                                                               local_88)))),
                                                               local_88)))));
                                                               local_88)))),
                                                               local_88)))));
    param_1[8] = auVar22;
    param_1[9] = auVar23;
    auVar22 = param_1[10];
    auVar23 = param_1[0xb];
                                                               local_88)))),
                                                               local_88)))));
                                                               local_88)))),
                                                               local_88)))));
    param_1[10] = auVar22;
    param_1[0xb] = auVar23;
    auVar22 = param_1[0xc];
    auVar23 = param_1[0xd];
                                                               local_88)))),
                                                               local_88)))));
                                                               local_88)))),
                                                               local_88)))));
    param_1[0xc] = auVar22;
    param_1[0xd] = auVar23;
    auVar22 = param_1[0xe];
    auVar23 = param_1[0xf];
                                                               local_88)))),
                                                               local_88)))));
                                                               local_88)))),
                                                               local_88)))));
    param_1[0xe] = auVar22;
    param_1[0xf] = auVar23;
    auVar22 = param_1[0x10];
    auVar23 = param_1[0x11];
                                                               local_88)))),
                                                               local_88)))));
                                                               local_88)))),
                                                               local_88)))));
    param_1[0x10] = auVar22;
    param_1[0x11] = auVar23;
    auVar22 = param_1[0x12];
    auVar23 = param_1[0x13];
                                                               local_88)))),
                                                               local_88)))));
                                                               local_88)))),
                                                               local_88)))));
    param_1[0x12] = auVar22;
    param_1[0x13] = auVar23;
  }
  return;
}




void Reflection_coefficients(ulong *param_1,int (*param_2) [16])

{
  ushort uVar1;
  uint uVar2;
  short sVar3;
  ulong uVar4;
  char cVar5;
  byte bVar6;
  short sVar7;
  long lVar8;
  size_t __n;
  short sVar9;
  short sVar10;
  ushort uVar11;
  ushort uVar12;
  short sVar13;
  ulong uVar14;
  ulong uVar15;
  short sVar16;
  ulong uVar17;
  int bVar18;
  ushort local_78 [6];
  int local_6c;
  int local_6a;
  int local_68;
  ushort auStack_58 [5];
  int local_4e;
  int local_4c;
  int local_4a;
  ulong local_40;
  long local_38;
  
  uVar17 = *param_1;
  if (uVar17 == 0) {
    return;
  }
  uVar4 = uVar17;
  if ((long)uVar17 < 0) {
    if (uVar17 < 0xffffffffc0000001) {
      bVar6 = 0;
      goto LAB_00100c81;
    }
    uVar4 = ~uVar17;
  }
  if ((short)(uVar4 >> 0x10) == 0) {
    bVar18 = (uVar4 & 0xff00) == 0;
    if (!bVar18) {
      uVar4 = uVar4 >> 8;
    }
    bVar6 = (byte)uVar4;
    cVar5 = bVar18 * '\b' + '\x0f';
  }
  else {
    bVar6 = (byte)(uVar4 >> 0x18);
    if (bVar6 == 0) {
      cVar5 = '\a';
      bVar6 = (byte)(uVar4 >> 0x10);
    }
    else {
      cVar5 = -1;
    }
  }
  bVar6 = cVar5 + *(char *)((ulong)bVar6 + 0xd349c1010204b60f);
LAB_00100c81:
  uVar17 = uVar17 << (bVar6 & 0x3f);
  uVar14 = param_1[1] << (bVar6 & 0x3f);
  uVar15 = uVar14 >> 0x10;
  local_78[1] = (ushort)(uVar14 >> 0x10);
  local_78[2] = (ushort)((param_1[2] << (bVar6 & 0x3f)) >> 0x10);
  local_78[3] = (ushort)((param_1[3] << (bVar6 & 0x3f)) >> 0x10);
  local_78[4] = (ushort)((param_1[4] << (bVar6 & 0x3f)) >> 0x10);
  local_78[5] = (ushort)((param_1[5] << (bVar6 & 0x3f)) >> 0x10);
  local_6c = (int)((param_1[6] << (bVar6 & 0x3f)) >> 0x10);
  local_6a = (int)((param_1[7] << (bVar6 & 0x3f)) >> 0x10);
  local_78[0] = (ushort)(uVar17 >> 0x10);
  local_68 = (int)((param_1[8] << (bVar6 & 0x3f)) >> 0x10);
  uVar2 = (uint)(uVar14 >> 0x10);
  bVar18 = (uVar2 & 0xffff) == 0x8000;
  uVar4 = (ulong)-uVar2;
  sVar9 = 0x7fff;
  if (bVar18) {
    uVar4 = 0x7fff;
  }
  if (-1 < (short)local_78[1]) {
    uVar4 = uVar14 >> 0x10 & 0xffffffff;
  }
  auStack_58[1] = local_78[1];
  auStack_58[2] = local_78[2];
  auStack_58[3] = local_78[3];
  auStack_58[4] = local_78[4];
  local_4e = local_78[5];
  local_4c = local_6c;
  local_4a = local_6a;
  if ((short)local_78[0] < (short)uVar4) {
    __n = 0x10;
  }
  else {
    uVar14 = 1;
    lVar8 = 0;
    uVar17 = uVar17 >> 0x10;
    do {
      sVar16 = (short)uVar17;
      local_38 = lVar8;
      sVar3 = gsm_div((int)(short)uVar4,(int)sVar16);
      sVar7 = -sVar3;
      if ((short)uVar15 < 1) {
        sVar7 = sVar3;
      }
      *(short *)*param_2 = sVar7;
      if (uVar14 == 8) {
        return;
      }
      sVar10 = (short)((int)sVar7 * (int)(short)uVar15 + 0x4000U >> 0xf);
      sVar3 = sVar10;
      if (sVar7 == -0x8000) {
        sVar3 = sVar9;
      }
      if (!bVar18) {
        sVar3 = sVar10;
      }
      local_40 = uVar17 & 0xffff0000 | (ulong)(ushort)(sVar16 + sVar3);
      if (SCARRY2(sVar16,sVar3)) {
        local_40 = (ulong)((int)(short)(sVar16 + sVar3) >> 0xf ^ 0xffff8000);
      }
      if (uVar14 < 8) {
        uVar17 = 1;
        do {
          uVar12 = auStack_58[uVar17];
          sVar16 = (short)((int)(short)uVar12 * (int)sVar7 + 0x4000U >> 0xf);
          sVar3 = sVar16;
          if ((short)uVar12 == -0x8000) {
            sVar3 = sVar9;
          }
          uVar1 = local_78[uVar17 + 1];
          sVar13 = (short)((int)(short)uVar1 * (int)sVar7 + 0x4000U >> 0xf);
          sVar10 = sVar13;
          if ((short)uVar1 == -0x8000) {
            sVar10 = sVar9;
          }
          if (sVar7 != -0x8000) {
            sVar10 = sVar13;
            sVar3 = sVar16;
          }
          uVar11 = uVar12 + sVar10;
          if (SCARRY2(uVar12,sVar10)) {
            uVar11 = (short)(uVar12 + sVar10) >> 0xf ^ 0x8000;
          }
          uVar12 = uVar1 + sVar3;
          if (SCARRY2(uVar1,sVar3)) {
            uVar12 = (short)(uVar1 + sVar3) >> 0xf ^ 0x8000;
          }
          local_78[uVar17] = uVar12;
          auStack_58[uVar17] = uVar11;
          bVar18 = uVar17 < 8 - uVar14;
          uVar17 = uVar17 + 1;
        } while (bVar18);
      }
      uVar14 = uVar14 + 1;
      param_2 = (int (*) [16])(*param_2 + 2);
      lVar8 = local_38 + 1;
      uVar15 = (ulong)local_78[1];
      bVar18 = local_78[1] == 0x8000;
      uVar2 = -(uint)local_78[1];
      if (bVar18) {
        uVar2 = 0x7fff;
      }
      uVar4 = (ulong)uVar2;
      if (-1 < (short)local_78[1]) {
        uVar4 = uVar15;
      }
      uVar17 = local_40;
    } while ((short)uVar4 <= (short)local_40);
    __n = lVar8 * -2 + 0x10;
    if (8 < (uint)uVar14) {
      return;
    }
  }
  memset(param_2,0,__n);
  return;
}



void Transformation_to_Log_Area_Ratios(ushort *param_1)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  
  uVar1 = *param_1;
  uVar3 = 0x7fff;
  if (uVar1 != 0x8000) {
    uVar3 = -uVar1;
  }
  if (-1 < (short)uVar1) {
    uVar3 = uVar1;
  }
  if ((short)uVar3 < 0x5666) {
    uVar3 = (ushort)((uint)(int)(short)uVar3 >> 1);
  }
  else if (uVar3 < 0x799a) {
    uVar3 = uVar3 + 0xd4cd;
  }
  else {
    uVar3 = uVar3 * 4 + 0x6800;
  }
  uVar2 = -uVar3;
  if (-1 < (short)uVar1) {
    uVar2 = uVar3;
  }
  *param_1 = uVar2;
  uVar1 = param_1[1];
  uVar3 = 0x7fff;
  if (uVar1 != 0x8000) {
    uVar3 = -uVar1;
  }
  if (-1 < (short)uVar1) {
    uVar3 = uVar1;
  }
  if ((short)uVar3 < 0x5666) {
    uVar3 = (ushort)((uint)(int)(short)uVar3 >> 1);
  }
  else if (uVar3 < 0x799a) {
    uVar3 = uVar3 + 0xd4cd;
  }
  else {
    uVar3 = uVar3 * 4 + 0x6800;
  }
  uVar2 = -uVar3;
  if (-1 < (short)uVar1) {
    uVar2 = uVar3;
  }
  param_1[1] = uVar2;
  uVar1 = param_1[2];
  uVar3 = 0x7fff;
  if (uVar1 != 0x8000) {
    uVar3 = -uVar1;
  }
  if (-1 < (short)uVar1) {
    uVar3 = uVar1;
  }
  if ((short)uVar3 < 0x5666) {
    uVar3 = (ushort)((uint)(int)(short)uVar3 >> 1);
  }
  else if (uVar3 < 0x799a) {
    uVar3 = uVar3 + 0xd4cd;
  }
  else {
    uVar3 = uVar3 * 4 + 0x6800;
  }
  uVar2 = -uVar3;
  if (-1 < (short)uVar1) {
    uVar2 = uVar3;
  }
  param_1[2] = uVar2;
  uVar1 = param_1[3];
  uVar3 = 0x7fff;
  if (uVar1 != 0x8000) {
    uVar3 = -uVar1;
  }
  if (-1 < (short)uVar1) {
    uVar3 = uVar1;
  }
  if ((short)uVar3 < 0x5666) {
    uVar3 = (ushort)((uint)(int)(short)uVar3 >> 1);
  }
  else if (uVar3 < 0x799a) {
    uVar3 = uVar3 + 0xd4cd;
  }
  else {
    uVar3 = uVar3 * 4 + 0x6800;
  }
  uVar2 = -uVar3;
  if (-1 < (short)uVar1) {
    uVar2 = uVar3;
  }
  param_1[3] = uVar2;
  uVar1 = param_1[4];
  uVar3 = 0x7fff;
  if (uVar1 != 0x8000) {
    uVar3 = -uVar1;
  }
  if (-1 < (short)uVar1) {
    uVar3 = uVar1;
  }
  if ((short)uVar3 < 0x5666) {
    uVar3 = (ushort)((uint)(int)(short)uVar3 >> 1);
  }
  else if (uVar3 < 0x799a) {
    uVar3 = uVar3 + 0xd4cd;
  }
  else {
    uVar3 = uVar3 * 4 + 0x6800;
  }
  uVar2 = -uVar3;
  if (-1 < (short)uVar1) {
    uVar2 = uVar3;
  }
  param_1[4] = uVar2;
  uVar1 = param_1[5];
  uVar3 = 0x7fff;
  if (uVar1 != 0x8000) {
    uVar3 = -uVar1;
  }
  if (-1 < (short)uVar1) {
    uVar3 = uVar1;
  }
  if ((short)uVar3 < 0x5666) {
    uVar3 = (ushort)((uint)(int)(short)uVar3 >> 1);
  }
  else if (uVar3 < 0x799a) {
    uVar3 = uVar3 + 0xd4cd;
  }
  else {
    uVar3 = uVar3 * 4 + 0x6800;
  }
  uVar2 = -uVar3;
  if (-1 < (short)uVar1) {
    uVar2 = uVar3;
  }
  param_1[5] = uVar2;
  uVar1 = param_1[6];
  uVar3 = 0x7fff;
  if (uVar1 != 0x8000) {
    uVar3 = -uVar1;
  }
  if (-1 < (short)uVar1) {
    uVar3 = uVar1;
  }
  if ((short)uVar3 < 0x5666) {
    uVar3 = (ushort)((uint)(int)(short)uVar3 >> 1);
  }
  else if (uVar3 < 0x799a) {
    uVar3 = uVar3 + 0xd4cd;
  }
  else {
    uVar3 = uVar3 * 4 + 0x6800;
  }
  uVar2 = -uVar3;
  if (-1 < (short)uVar1) {
    uVar2 = uVar3;
  }
  param_1[6] = uVar2;
  uVar1 = param_1[7];
  uVar3 = 0x7fff;
  if (uVar1 != 0x8000) {
    uVar3 = -uVar1;
  }
  if (-1 < (short)uVar1) {
    uVar3 = uVar1;
  }
  if ((short)uVar3 < 0x5666) {
    uVar3 = (ushort)((uint)(int)(short)uVar3 >> 1);
  }
  else if (uVar3 < 0x799a) {
    uVar3 = uVar3 + 0xd4cd;
  }
  else {
    uVar3 = uVar3 * 4 + 0x6800;
  }
  uVar2 = -uVar3;
  if (-1 < (short)uVar1) {
    uVar2 = uVar3;
  }
  param_1[7] = uVar2;
  return;
}




void Quantization_and_coding(int (*param_1) [16])

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  int uVar6;
  int uVar7;
  int auVar5 [16];
  ushort uVar8;
  ushort uVar10;
  ushort uVar12;
  ushort uVar14;
  int uVar16;
  int uVar17;
  int auVar9 [16];
  short sVar11;
  short sVar13;
  short sVar15;
  
  auVar9 = *param_1;
                                                  auVar9,0))) >> 0x60,0),
                   __LCPI9_1);
  auVar9 = paddsw(auVar9,__LCPI9_2);
  uVar10 = -(ushort)(0x3fff < sVar11);
  uVar12 = -(ushort)(0x1fff < sVar13);
  uVar14 = -(ushort)(0xfff < sVar15);
  auVar5 = pinsrw(auVar9,uVar1 + 0x100,3);
  auVar5 = pinsrw(auVar5,uVar2 + 0x100,5);
  auVar5 = pinsrw(auVar5,uVar3 + 0x100,6);
  auVar5 = pinsrw(auVar5,uVar4 + 0x100,7);
  auVar5 = psraw(auVar5,9);
  *(ushort *)*param_1 =
  *(ushort *)(*param_1 + 2) =
  *(ushort *)(*param_1 + 4) =
  *(ushort *)(*param_1 + 6) =
       -(ushort)(0x1eff < (short)uVar1) & 0x1f |
       ~-(ushort)(0x1eff < (short)uVar1) &
  *(ushort *)(*param_1 + 8) =
  *(ushort *)(*param_1 + 10) =
       -(ushort)(0xeff < (short)uVar2) & 0xf |
       ~-(ushort)(0xeff < (short)uVar2) &
  *(ushort *)(*param_1 + 0xc) =
       -(ushort)(0x6ff < (short)uVar3) & 7 |
       ~-(ushort)(0x6ff < (short)uVar3) &
  *(ushort *)(*param_1 + 0xe) =
       -(ushort)(0x6ff < (short)uVar4) & 7 |
       ~-(ushort)(0x6ff < (short)uVar4) &
  return;
}



void Gsm_LPC_Analysis(int8 param_1,int8 param_2)

{
  int auStack_58 [72];
  
  Autocorrelation(param_1,auStack_58);
  Reflection_coefficients(auStack_58,param_2);
  Transformation_to_Log_Area_Ratios(param_2);
  Quantization_and_coding(param_2);
  return;
}




int submain(void)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  uint uVar7;
  long lVar8;
  byte bVar9;
  int auVar10 [16];
  int uVar12;
  int uVar13;
  int auVar11 [16];
  int auVar14 [16];
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  short local_1e8;
  short sStack_1e6;
  short sStack_1e4;
  short sStack_1e2;
  short sStack_1e0;
  short sStack_1de;
  short sStack_1dc;
  short sStack_1da;
  int local_1b8;
  int uStack_1b4;
  int uStack_1b0;
  int uStack_1ac;
  int local_1a8 [80];
  int local_158 [8];
  ulong local_150 [39];
  
  uVar7 = gettimeofday((timeval *)local_158,(__timezone_ptr_t)0x0);
  if (uVar7 != 0) {
    printf("Error return from gettimeofday: %d",(ulong)uVar7);
  }
  _DAT_358b480f110f41f2 = (double)(int)local_150[0] * 1e-06 + (double)(long)local_158;
  memcpy(local_158,(void *)0x90249c8d48,0x140);
  Autocorrelation(local_158,local_1a8);
  Reflection_coefficients(local_1a8);
  Transformation_to_Log_Area_Ratios(&local_1b8);
  Quantization_and_coding(&local_1b8);
  iVar15 = 0;
  iVar16 = 0;
  iVar17 = 0;
  iVar18 = 0;
  lVar8 = 0;
  iVar19 = 0;
  iVar20 = 0;
  iVar21 = 0;
  iVar22 = 0;
  do {
    uVar1 = *(ulong *)((long)local_150 + lVar8 * 2);
    uVar2 = *(ulong *)(&DAT_d6f0f66c0760f66 + lVar8 * 2);
    uVar3 = *(ulong *)(&DAT_d6f0f66c0760f6e + lVar8 * 2);
                                                  (short)((uVar2 & 0xffffffffffff0000) >> 0x30) ==
                                                  0xffffffffffff0000) >> 0x20) ==
                                                           -(ushort)((short)uVar2 ==
                                                                    (short)*(ulong *)(local_158 +
                                                                                     lVar8 * 2))))))
                                                  ))) ^ auVar10;
                                                  0))) >> 0x60,0),
                                                  (short)((uVar3 & 0xffffffffffff0000) >> 0x30) ==
                                                  0xffffffffffff0000) >> 0x20) ==
                                                           -(ushort)((short)uVar3 == (short)uVar1)))
                                                  ))))) ^ auVar10;
                                                  0))) >> 0x60,0),
    lVar8 = lVar8 + 8;
  } while (lVar8 != 0xa0);
  uVar7 = gettimeofday((timeval *)local_1a8,(__timezone_ptr_t)0x0);
  if (uVar7 != 0) {
    printf("Error return from gettimeofday: %d",(ulong)uVar7);
  }
int gsm_norm(ulong param_1)

{
  short sVar1;
  ulong uVar2;
  int bVar3;
  
  if ((long)param_1 < 0) {
    if (param_1 < 0xffffffffc0000001) {
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



int gsm_div(short param_1,short param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  
  if (param_1 != 0) {
    lVar2 = (long)param_2;
    lVar1 = (long)param_1 * 2;
    lVar3 = 0;
    lVar4 = lVar2;
    if (lVar1 < lVar2) {
      lVar4 = lVar3;
    }
    lVar4 = (lVar1 - lVar4) * 2;
    lVar5 = lVar2;
    if (lVar4 < lVar2) {
      lVar5 = lVar3;
    }
    lVar5 = (lVar4 - lVar5) * 2;
    lVar16 = lVar2;
    if (lVar5 < lVar2) {
      lVar16 = lVar3;
    }
    lVar16 = (lVar5 - lVar16) * 2;
    lVar6 = lVar2;
    if (lVar16 < lVar2) {
      lVar6 = lVar3;
    }
    lVar6 = (lVar16 - lVar6) * 2;
    lVar7 = lVar2;
    if (lVar6 < lVar2) {
      lVar7 = lVar3;
    }
    lVar7 = (lVar6 - lVar7) * 2;
    lVar8 = lVar2;
    if (lVar7 < lVar2) {
      lVar8 = lVar3;
    }
    lVar8 = (lVar7 - lVar8) * 2;
    lVar9 = lVar2;
    if (lVar8 < lVar2) {
      lVar9 = lVar3;
    }
    lVar9 = (lVar8 - lVar9) * 2;
    lVar10 = lVar2;
    if (lVar9 < lVar2) {
      lVar10 = lVar3;
    }
    lVar10 = (lVar9 - lVar10) * 2;
    lVar11 = lVar2;
    if (lVar10 < lVar2) {
      lVar11 = lVar3;
    }
    lVar11 = (lVar10 - lVar11) * 2;
    lVar12 = lVar2;
    if (lVar11 < lVar2) {
      lVar12 = lVar3;
    }
    lVar12 = (lVar11 - lVar12) * 2;
    lVar13 = lVar2;
    if (lVar12 < lVar2) {
      lVar13 = lVar3;
    }
    lVar13 = (lVar12 - lVar13) * 2;
    lVar14 = lVar2;
    if (lVar13 < lVar2) {
      lVar14 = lVar3;
    }
    lVar14 = (lVar13 - lVar14) * 2;
    lVar15 = lVar2;
    if (lVar14 < lVar2) {
      lVar15 = lVar3;
    }
    lVar15 = (lVar14 - lVar15) * 2;
    if (lVar2 <= lVar15) {
      lVar3 = lVar2;
    }
    return (uint)(lVar2 <= (lVar15 - lVar3) * 2) +
           ((uint)(lVar2 <= lVar15) |
           (uint)(lVar2 <= lVar14) * 2 +
           ((uint)(lVar2 <= lVar13) |
           (uint)(lVar2 <= lVar12) * 2 +
           ((uint)(lVar2 <= lVar11) |
           (uint)(lVar2 <= lVar10) * 2 +
           ((uint)(lVar2 <= lVar9) |
           (uint)(lVar2 <= lVar8) * 2 +
           ((uint)(lVar2 <= lVar7) |
           (uint)(lVar2 <= lVar6) * 2 +
           ((uint)(lVar2 <= lVar16) |
           (uint)(lVar2 <= lVar4) * 4 + (uint)(lVar2 <= lVar1) * 8 + (uint)(lVar2 <= lVar5) * 2) * 4
           ) * 4) * 4) * 4) * 4) * 2;
  }
  return 0;
}



void Autocorrelation(int (*param_1) [16],int (*param_2) [16])

{
  short *psVar1;
  short *psVar2;
  int (*pauVar3) [16];
  int auVar4 [16];
  int auVar5 [16];
  int bVar6;
  uint uVar7;
  long lVar8;
  int iVar9;
  uint uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  int *puVar17;
  short sVar18;
  long lVar19;
  long lVar20;
  int uVar21;
  int auVar22 [16];
  int auVar23 [16];
  short sVar25;
  short sVar26;
  short sVar27;
  short sVar28;
  short sVar29;
  short sVar30;
  short sVar31;
  int auVar24 [16];
  short sVar32;
  short sVar33;
  short sVar34;
  short sVar35;
  short sVar36;
  short sVar37;
  short sVar38;
  short sVar39;
  int auVar40 [16];
  ushort uVar41;
  ushort uVar42;
  int local_88;
  long local_80;
  long local_78;
  long local_70;
  
  auVar22 = (int  [16])0x0;
  lVar8 = 0;
  auVar23 = (int  [16])0x0;
  do {
    auVar4 = *(int (*) [16])(*param_1 + lVar8 * 2);
    auVar5 = *(int (*) [16])(param_1[1] + lVar8 * 2);
                                                                                         ),
                                                                                -(ushort)(sVar32 < 0
                                                                                         ))))))));
                                                                                         ),
                                                                                -(ushort)(sVar18 < 0
                                                                                         ))))))));
    uVar41 = -(ushort)(sVar39 == -0x8000);
    uVar42 = -(ushort)(sVar31 == -0x8000);
    auVar22 = pmaxsw(auVar22,~auVar40 & auVar4 |
                                                                                        -0x8000) >>
                                                  sVar35 == -0x8000) >> 1,
                                                                                      -0x8000) >> 1,
                                                                     (ushort)-(ushort)(sVar32 ==
                                                                                      -0x8000) >> 1)
                                                          )))))) |
                                                                                     -0x8000),
                                                  sVar35 == -0x8000),
                                                                    -(ushort)(sVar32 == -0x8000)))))
                                                  ))) &
                                                  ,-sVar32)))))))) & auVar40);
    auVar23 = pmaxsw(auVar23,~auVar24 & auVar5 |
                                                                                        -0x8000) >>
                                                  sVar27 == -0x8000) >> 1,
                                                                                      -0x8000) >> 1,
                                                                     (ushort)-(ushort)(sVar18 ==
                                                                                      -0x8000) >> 1)
                                                          )))))) |
                                                                                     -0x8000),
                                                  sVar27 == -0x8000),
                                                                    -(ushort)(sVar18 == -0x8000)))))
                                                  ))) &
                                                  ,-sVar18)))))))) & auVar24);
    lVar8 = lVar8 + 0x10;
  } while (lVar8 != 0xa0);
  auVar22 = pmaxsw(auVar22,auVar23);
  ;
    bVar6 = 0;
    local_88 = 0;
  }
  else {
    uVar10 = uVar7 >> 8;
    if (0xff >= uVar7) {
      uVar10 = uVar7;
    }
    iVar9 = (uint)(0xff < uVar7) * 8 - (uint)*(byte *)(((ulong)uVar10 & 0xff) + 0x418dc1290204b60f);
    local_88 = iVar9 + -3;
    bVar6 = 0 < local_88;
    uVar10 = iVar9 - 4;
    if (uVar10 < 4) {
      uVar10 = 0x4000 >> ((byte)uVar10 & 0x1f);
      lVar8 = 0;
      do {
        *(short *)(*param_1 + lVar8 * 2) =
             (short)((int)*(short *)(*param_1 + lVar8 * 2) * uVar10 + 0x4000 >> 0xf);
        uVar11 = lVar8 * 2 | 2;
        *(short *)(*param_1 + uVar11) =
             (short)((int)*(short *)(*param_1 + uVar11) * uVar10 + 0x4000 >> 0xf);
        lVar8 = lVar8 + 2;
      } while (lVar8 != 0xa0);
    }
  }
  lVar13 = (long)*(short *)*param_1;
  param_2[3] = (int  [16])0x0;
  param_2[2] = (int  [16])0x0;
  param_2[1] = (int  [16])0x0;
  *param_2 = (int  [16])0x0;
  *(int8 *)param_2[4] = 0;
  lVar8 = (long)*(short *)(*param_1 + 4);
  lVar14 = (long)*(short *)(*param_1 + 6);
  lVar15 = (long)*(short *)(*param_1 + 8);
  lVar20 = (long)*(short *)(*param_1 + 10);
  lVar16 = (long)*(short *)(*param_1 + 0xc);
  lVar12 = (long)*(short *)(*param_1 + 2);
  uVar11 = (ulong)*(short *)(*param_1 + 0xe);
  local_78 = uVar11 * uVar11 +
             lVar16 * lVar16 + lVar20 * lVar20 + lVar15 * lVar15 +
             lVar14 * lVar14 + lVar8 * lVar8 + lVar12 * lVar12 + lVar13 * lVar13;
  local_70 = lVar16 * uVar11 + lVar16 * lVar20 + lVar20 * lVar15 +
             lVar15 * lVar14 + lVar14 * lVar8 + (lVar8 + lVar13) * lVar12;
  local_80 = lVar20 * uVar11 + lVar16 * lVar15 +
             lVar20 * lVar14 + lVar15 * lVar8 + lVar14 * lVar12 + lVar8 * lVar13;
  lVar19 = lVar15 * uVar11 + lVar16 * lVar14 + lVar20 * lVar8 + lVar15 * lVar12 + lVar14 * lVar13;
  lVar14 = lVar14 * uVar11 + lVar16 * lVar8 + lVar20 * lVar12 + lVar15 * lVar13;
  puVar17 = *param_1 + 0xe;
  lVar8 = lVar8 * uVar11 + lVar16 * lVar12 + lVar20 * lVar13;
  lVar15 = lVar12 * uVar11 + lVar16 * lVar13 + *(long *)param_2[3];
  lVar13 = uVar11 * lVar13 + *(long *)(param_2[3] + 8);
  iVar9 = 8;
  lVar12 = 0;
  do {
    lVar16 = (long)*(short *)(puVar17 + 2);
    sVar18 = (short)uVar11;
    psVar1 = (short *)(puVar17 + -10);
    psVar2 = (short *)(puVar17 + -0xc);
    pauVar3 = (int (*) [16])(puVar17 + -0xe);
    uVar11 = (ulong)(uint)(int)*(short *)(puVar17 + 2);
    local_78 = local_78 + lVar16 * lVar16;
    local_70 = local_70 + sVar18 * lVar16;
    local_80 = local_80 + *(short *)(puVar17 + -2) * lVar16;
    lVar19 = lVar19 + *(short *)(puVar17 + -4) * lVar16;
    lVar14 = lVar14 + *(short *)(puVar17 + -6) * lVar16;
    lVar8 = lVar8 + *(short *)(puVar17 + -8) * lVar16;
    puVar17 = puVar17 + 2;
    lVar15 = lVar15 + *psVar1 * lVar16;
    lVar13 = lVar13 + *psVar2 * lVar16;
    lVar12 = lVar12 + *(short *)*pauVar3 * lVar16;
    iVar9 = iVar9 + 1;
  } while (iVar9 != 0xa0);
  *(long *)param_2[4] = lVar12 * 2;
  *(long *)(param_2[3] + 8) = lVar13 * 2;
  *(long *)param_2[3] = lVar15 * 2;
  *(long *)(param_2[2] + 8) = lVar8 * 2;
  *(long *)param_2[2] = lVar14 * 2;
  *(long *)(param_2[1] + 8) = lVar19 * 2;
  *(long *)param_2[1] = local_80 * 2;
  *(long *)(*param_2 + 8) = local_70 * 2;
  *(long *)*param_2 = local_78 * 2;
  if (bVar6) {
    auVar22 = *param_1;
    auVar23 = param_1[1];
    auVar4 = param_1[2];
    auVar5 = param_1[3];
                                                               local_88)))),
                                                               local_88)))));
                                                               local_88)))),
                                                               local_88)))));
    *param_1 = auVar24;
    param_1[1] = auVar22;
                                                               local_88)))),
                                                               )))));
                                                               local_88)))),
                                                               )))));
    param_1[2] = auVar23;
    param_1[3] = auVar22;
    auVar22 = param_1[4];
    auVar23 = param_1[5];
                                                               local_88)))),
                                                               local_88)))));
                                                               local_88)))),
                                                               local_88)))));
    param_1[4] = auVar22;
    param_1[5] = auVar23;
    auVar22 = param_1[6];
    auVar23 = param_1[7];
                                                               local_88)))),
                                                               local_88)))));
                                                               local_88)))),
                                                               local_88)))));
    param_1[6] = auVar22;
    param_1[7] = auVar23;
    auVar22 = param_1[8];
    auVar23 = param_1[9];
                                                               local_88)))),
                                                               local_88)))));
                                                               local_88)))),
                                                               local_88)))));
    param_1[8] = auVar22;
    param_1[9] = auVar23;
    auVar22 = param_1[10];
    auVar23 = param_1[0xb];
                                                               local_88)))),
                                                               local_88)))));
                                                               local_88)))),
                                                               local_88)))));
    param_1[10] = auVar22;
    param_1[0xb] = auVar23;
    auVar22 = param_1[0xc];
    auVar23 = param_1[0xd];
                                                               local_88)))),
                                                               local_88)))));
                                                               local_88)))),
                                                               local_88)))));
    param_1[0xc] = auVar22;
    param_1[0xd] = auVar23;
    auVar22 = param_1[0xe];
    auVar23 = param_1[0xf];
                                                               local_88)))),
                                                               local_88)))));
                                                               local_88)))),
                                                               local_88)))));
    param_1[0xe] = auVar22;
    param_1[0xf] = auVar23;
    auVar22 = param_1[0x10];
    auVar23 = param_1[0x11];
                                                               local_88)))),
                                                               local_88)))));
                                                               local_88)))),
                                                               local_88)))));
    param_1[0x10] = auVar22;
    param_1[0x11] = auVar23;
    auVar22 = param_1[0x12];
    auVar23 = param_1[0x13];
                                                               local_88)))),
                                                               local_88)))));
                                                               local_88)))),
                                                               local_88)))));
    param_1[0x12] = auVar22;
    param_1[0x13] = auVar23;
  }
  return;
}




void Reflection_coefficients(ulong *param_1,int (*param_2) [16])

{
  ushort uVar1;
  uint uVar2;
  short sVar3;
  ulong uVar4;
  char cVar5;
  byte bVar6;
  short sVar7;
  long lVar8;
  size_t __n;
  short sVar9;
  short sVar10;
  ushort uVar11;
  ushort uVar12;
  short sVar13;
  ulong uVar14;
  ulong uVar15;
  short sVar16;
  ulong uVar17;
  int bVar18;
  ushort local_78 [6];
  int local_6c;
  int local_6a;
  int local_68;
  ushort auStack_58 [5];
  int local_4e;
  int local_4c;
  int local_4a;
  ulong local_40;
  long local_38;
  
  uVar17 = *param_1;
  if (uVar17 == 0) {
    return;
  }
  uVar4 = uVar17;
  if ((long)uVar17 < 0) {
    if (uVar17 < 0xffffffffc0000001) {
      bVar6 = 0;
      goto LAB_00100c81;
    }
    uVar4 = ~uVar17;
  }
  if ((short)(uVar4 >> 0x10) == 0) {
    bVar18 = (uVar4 & 0xff00) == 0;
    if (!bVar18) {
      uVar4 = uVar4 >> 8;
    }
    bVar6 = (byte)uVar4;
    cVar5 = bVar18 * '\b' + '\x0f';
  }
  else {
    bVar6 = (byte)(uVar4 >> 0x18);
    if (bVar6 == 0) {
      cVar5 = '\a';
      bVar6 = (byte)(uVar4 >> 0x10);
    }
    else {
      cVar5 = -1;
    }
  }
  bVar6 = cVar5 + *(char *)((ulong)bVar6 + 0xd349c1010204b60f);
LAB_00100c81:
  uVar17 = uVar17 << (bVar6 & 0x3f);
  uVar14 = param_1[1] << (bVar6 & 0x3f);
  uVar15 = uVar14 >> 0x10;
  local_78[1] = (ushort)(uVar14 >> 0x10);
  local_78[2] = (ushort)((param_1[2] << (bVar6 & 0x3f)) >> 0x10);
  local_78[3] = (ushort)((param_1[3] << (bVar6 & 0x3f)) >> 0x10);
  local_78[4] = (ushort)((param_1[4] << (bVar6 & 0x3f)) >> 0x10);
  local_78[5] = (ushort)((param_1[5] << (bVar6 & 0x3f)) >> 0x10);
  local_6c = (int)((param_1[6] << (bVar6 & 0x3f)) >> 0x10);
  local_6a = (int)((param_1[7] << (bVar6 & 0x3f)) >> 0x10);
  local_78[0] = (ushort)(uVar17 >> 0x10);
  local_68 = (int)((param_1[8] << (bVar6 & 0x3f)) >> 0x10);
  uVar2 = (uint)(uVar14 >> 0x10);
  bVar18 = (uVar2 & 0xffff) == 0x8000;
  uVar4 = (ulong)-uVar2;
  sVar9 = 0x7fff;
  if (bVar18) {
    uVar4 = 0x7fff;
  }
  if (-1 < (short)local_78[1]) {
    uVar4 = uVar14 >> 0x10 & 0xffffffff;
  }
  auStack_58[1] = local_78[1];
  auStack_58[2] = local_78[2];
  auStack_58[3] = local_78[3];
  auStack_58[4] = local_78[4];
  local_4e = local_78[5];
  local_4c = local_6c;
  local_4a = local_6a;
  if ((short)local_78[0] < (short)uVar4) {
    __n = 0x10;
  }
  else {
    uVar14 = 1;
    lVar8 = 0;
    uVar17 = uVar17 >> 0x10;
    do {
      sVar16 = (short)uVar17;
      local_38 = lVar8;
      sVar3 = gsm_div((int)(short)uVar4,(int)sVar16);
      sVar7 = -sVar3;
      if ((short)uVar15 < 1) {
        sVar7 = sVar3;
      }
      *(short *)*param_2 = sVar7;
      if (uVar14 == 8) {
        return;
      }
      sVar10 = (short)((int)sVar7 * (int)(short)uVar15 + 0x4000U >> 0xf);
      sVar3 = sVar10;
      if (sVar7 == -0x8000) {
        sVar3 = sVar9;
      }
      if (!bVar18) {
        sVar3 = sVar10;
      }
      local_40 = uVar17 & 0xffff0000 | (ulong)(ushort)(sVar16 + sVar3);
      if (SCARRY2(sVar16,sVar3)) {
        local_40 = (ulong)((int)(short)(sVar16 + sVar3) >> 0xf ^ 0xffff8000);
      }
      if (uVar14 < 8) {
        uVar17 = 1;
        do {
          uVar12 = auStack_58[uVar17];
          sVar16 = (short)((int)(short)uVar12 * (int)sVar7 + 0x4000U >> 0xf);
          sVar3 = sVar16;
          if ((short)uVar12 == -0x8000) {
            sVar3 = sVar9;
          }
          uVar1 = local_78[uVar17 + 1];
          sVar13 = (short)((int)(short)uVar1 * (int)sVar7 + 0x4000U >> 0xf);
          sVar10 = sVar13;
          if ((short)uVar1 == -0x8000) {
            sVar10 = sVar9;
          }
          if (sVar7 != -0x8000) {
            sVar10 = sVar13;
            sVar3 = sVar16;
          }
          uVar11 = uVar12 + sVar10;
          if (SCARRY2(uVar12,sVar10)) {
            uVar11 = (short)(uVar12 + sVar10) >> 0xf ^ 0x8000;
          }
          uVar12 = uVar1 + sVar3;
          if (SCARRY2(uVar1,sVar3)) {
            uVar12 = (short)(uVar1 + sVar3) >> 0xf ^ 0x8000;
          }
          local_78[uVar17] = uVar12;
          auStack_58[uVar17] = uVar11;
          bVar18 = uVar17 < 8 - uVar14;
          uVar17 = uVar17 + 1;
        } while (bVar18);
      }
      uVar14 = uVar14 + 1;
      param_2 = (int (*) [16])(*param_2 + 2);
      lVar8 = local_38 + 1;
      uVar15 = (ulong)local_78[1];
      bVar18 = local_78[1] == 0x8000;
      uVar2 = -(uint)local_78[1];
      if (bVar18) {
        uVar2 = 0x7fff;
      }
      uVar4 = (ulong)uVar2;
      if (-1 < (short)local_78[1]) {
        uVar4 = uVar15;
      }
      uVar17 = local_40;
    } while ((short)uVar4 <= (short)local_40);
    __n = lVar8 * -2 + 0x10;
    if (8 < (uint)uVar14) {
      return;
    }
  }
  memset(param_2,0,__n);
  return;
}



void Transformation_to_Log_Area_Ratios(ushort *param_1)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  
  uVar1 = *param_1;
  uVar3 = 0x7fff;
  if (uVar1 != 0x8000) {
    uVar3 = -uVar1;
  }
  if (-1 < (short)uVar1) {
    uVar3 = uVar1;
  }
  if ((short)uVar3 < 0x5666) {
    uVar3 = (ushort)((uint)(int)(short)uVar3 >> 1);
  }
  else if (uVar3 < 0x799a) {
    uVar3 = uVar3 + 0xd4cd;
  }
  else {
    uVar3 = uVar3 * 4 + 0x6800;
  }
  uVar2 = -uVar3;
  if (-1 < (short)uVar1) {
    uVar2 = uVar3;
  }
  *param_1 = uVar2;
  uVar1 = param_1[1];
  uVar3 = 0x7fff;
  if (uVar1 != 0x8000) {
    uVar3 = -uVar1;
  }
  if (-1 < (short)uVar1) {
    uVar3 = uVar1;
  }
  if ((short)uVar3 < 0x5666) {
    uVar3 = (ushort)((uint)(int)(short)uVar3 >> 1);
  }
  else if (uVar3 < 0x799a) {
    uVar3 = uVar3 + 0xd4cd;
  }
  else {
    uVar3 = uVar3 * 4 + 0x6800;
  }
  uVar2 = -uVar3;
  if (-1 < (short)uVar1) {
    uVar2 = uVar3;
  }
  param_1[1] = uVar2;
  uVar1 = param_1[2];
  uVar3 = 0x7fff;
  if (uVar1 != 0x8000) {
    uVar3 = -uVar1;
  }
  if (-1 < (short)uVar1) {
    uVar3 = uVar1;
  }
  if ((short)uVar3 < 0x5666) {
    uVar3 = (ushort)((uint)(int)(short)uVar3 >> 1);
  }
  else if (uVar3 < 0x799a) {
    uVar3 = uVar3 + 0xd4cd;
  }
  else {
    uVar3 = uVar3 * 4 + 0x6800;
  }
  uVar2 = -uVar3;
  if (-1 < (short)uVar1) {
    uVar2 = uVar3;
  }
  param_1[2] = uVar2;
  uVar1 = param_1[3];
  uVar3 = 0x7fff;
  if (uVar1 != 0x8000) {
    uVar3 = -uVar1;
  }
  if (-1 < (short)uVar1) {
    uVar3 = uVar1;
  }
  if ((short)uVar3 < 0x5666) {
    uVar3 = (ushort)((uint)(int)(short)uVar3 >> 1);
  }
  else if (uVar3 < 0x799a) {
    uVar3 = uVar3 + 0xd4cd;
  }
  else {
    uVar3 = uVar3 * 4 + 0x6800;
  }
  uVar2 = -uVar3;
  if (-1 < (short)uVar1) {
    uVar2 = uVar3;
  }
  param_1[3] = uVar2;
  uVar1 = param_1[4];
  uVar3 = 0x7fff;
  if (uVar1 != 0x8000) {
    uVar3 = -uVar1;
  }
  if (-1 < (short)uVar1) {
    uVar3 = uVar1;
  }
  if ((short)uVar3 < 0x5666) {
    uVar3 = (ushort)((uint)(int)(short)uVar3 >> 1);
  }
  else if (uVar3 < 0x799a) {
    uVar3 = uVar3 + 0xd4cd;
  }
  else {
    uVar3 = uVar3 * 4 + 0x6800;
  }
  uVar2 = -uVar3;
  if (-1 < (short)uVar1) {
    uVar2 = uVar3;
  }
  param_1[4] = uVar2;
  uVar1 = param_1[5];
  uVar3 = 0x7fff;
  if (uVar1 != 0x8000) {
    uVar3 = -uVar1;
  }
  if (-1 < (short)uVar1) {
    uVar3 = uVar1;
  }
  if ((short)uVar3 < 0x5666) {
    uVar3 = (ushort)((uint)(int)(short)uVar3 >> 1);
  }
  else if (uVar3 < 0x799a) {
    uVar3 = uVar3 + 0xd4cd;
  }
  else {
    uVar3 = uVar3 * 4 + 0x6800;
  }
  uVar2 = -uVar3;
  if (-1 < (short)uVar1) {
    uVar2 = uVar3;
  }
  param_1[5] = uVar2;
  uVar1 = param_1[6];
  uVar3 = 0x7fff;
  if (uVar1 != 0x8000) {
    uVar3 = -uVar1;
  }
  if (-1 < (short)uVar1) {
    uVar3 = uVar1;
  }
  if ((short)uVar3 < 0x5666) {
    uVar3 = (ushort)((uint)(int)(short)uVar3 >> 1);
  }
  else if (uVar3 < 0x799a) {
    uVar3 = uVar3 + 0xd4cd;
  }
  else {
    uVar3 = uVar3 * 4 + 0x6800;
  }
  uVar2 = -uVar3;
  if (-1 < (short)uVar1) {
    uVar2 = uVar3;
  }
  param_1[6] = uVar2;
  uVar1 = param_1[7];
  uVar3 = 0x7fff;
  if (uVar1 != 0x8000) {
    uVar3 = -uVar1;
  }
  if (-1 < (short)uVar1) {
    uVar3 = uVar1;
  }
  if ((short)uVar3 < 0x5666) {
    uVar3 = (ushort)((uint)(int)(short)uVar3 >> 1);
  }
  else if (uVar3 < 0x799a) {
    uVar3 = uVar3 + 0xd4cd;
  }
  else {
    uVar3 = uVar3 * 4 + 0x6800;
  }
  uVar2 = -uVar3;
  if (-1 < (short)uVar1) {
    uVar2 = uVar3;
  }
  param_1[7] = uVar2;
  return;
}




void Quantization_and_coding(int (*param_1) [16])

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  int uVar6;
  int uVar7;
  int auVar5 [16];
  ushort uVar8;
  ushort uVar10;
  ushort uVar12;
  ushort uVar14;
  int uVar16;
  int uVar17;
  int auVar9 [16];
  short sVar11;
  short sVar13;
  short sVar15;
  
  auVar9 = *param_1;
                                                  auVar9,0))) >> 0x60,0),
                   __LCPI9_1);
  auVar9 = paddsw(auVar9,__LCPI9_2);
  uVar10 = -(ushort)(0x3fff < sVar11);
  uVar12 = -(ushort)(0x1fff < sVar13);
  uVar14 = -(ushort)(0xfff < sVar15);
  auVar5 = pinsrw(auVar9,uVar1 + 0x100,3);
  auVar5 = pinsrw(auVar5,uVar2 + 0x100,5);
  auVar5 = pinsrw(auVar5,uVar3 + 0x100,6);
  auVar5 = pinsrw(auVar5,uVar4 + 0x100,7);
  auVar5 = psraw(auVar5,9);
  *(ushort *)*param_1 =
  *(ushort *)(*param_1 + 2) =
  *(ushort *)(*param_1 + 4) =
  *(ushort *)(*param_1 + 6) =
       -(ushort)(0x1eff < (short)uVar1) & 0x1f |
       ~-(ushort)(0x1eff < (short)uVar1) &
  *(ushort *)(*param_1 + 8) =
  *(ushort *)(*param_1 + 10) =
       -(ushort)(0xeff < (short)uVar2) & 0xf |
       ~-(ushort)(0xeff < (short)uVar2) &
  *(ushort *)(*param_1 + 0xc) =
       -(ushort)(0x6ff < (short)uVar3) & 7 |
       ~-(ushort)(0x6ff < (short)uVar3) &
  *(ushort *)(*param_1 + 0xe) =
       -(ushort)(0x6ff < (short)uVar4) & 7 |
       ~-(ushort)(0x6ff < (short)uVar4) &
  return;
}



void Gsm_LPC_Analysis(int8 param_1,int8 param_2)

{
  int auStack_58 [72];
  
  Autocorrelation(param_1,auStack_58);
  Reflection_coefficients(auStack_58,param_2);
  Transformation_to_Log_Area_Ratios(param_2);
  Quantization_and_coding(param_2);
  return;
}




int submain(void)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  uint uVar7;
  long lVar8;
  byte bVar9;
  int auVar10 [16];
  int uVar12;
  int uVar13;
  int auVar11 [16];
  int auVar14 [16];
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  short local_1e8;
  short sStack_1e6;
  short sStack_1e4;
  short sStack_1e2;
  short sStack_1e0;
  short sStack_1de;
  short sStack_1dc;
  short sStack_1da;
  int local_1b8;
  int uStack_1b4;
  int uStack_1b0;
  int uStack_1ac;
  int local_1a8 [80];
  int local_158 [8];
  ulong local_150 [39];
  
  uVar7 = gettimeofday((timeval *)local_158,(__timezone_ptr_t)0x0);
  if (uVar7 != 0) {
    printf("Error return from gettimeofday: %d",(ulong)uVar7);
  }
  _DAT_358b480f110f41f2 = (double)(int)local_150[0] * 1e-06 + (double)(long)local_158;
  memcpy(local_158,(void *)0x90249c8d48,0x140);
  Autocorrelation(local_158,local_1a8);
  Reflection_coefficients(local_1a8);
  Transformation_to_Log_Area_Ratios(&local_1b8);
  Quantization_and_coding(&local_1b8);
  iVar15 = 0;
  iVar16 = 0;
  iVar17 = 0;
  iVar18 = 0;
  lVar8 = 0;
  iVar19 = 0;
  iVar20 = 0;
  iVar21 = 0;
  iVar22 = 0;
  do {
    uVar1 = *(ulong *)((long)local_150 + lVar8 * 2);
    uVar2 = *(ulong *)(&DAT_d6f0f66c0760f66 + lVar8 * 2);
    uVar3 = *(ulong *)(&DAT_d6f0f66c0760f6e + lVar8 * 2);
                                                  (short)((uVar2 & 0xffffffffffff0000) >> 0x30) ==
                                                  0xffffffffffff0000) >> 0x20) ==
                                                           -(ushort)((short)uVar2 ==
                                                                    (short)*(ulong *)(local_158 +
                                                                                     lVar8 * 2))))))
                                                  ))) ^ auVar10;
                                                  0))) >> 0x60,0),
                                                  (short)((uVar3 & 0xffffffffffff0000) >> 0x30) ==
                                                  0xffffffffffff0000) >> 0x20) ==
                                                           -(ushort)((short)uVar3 == (short)uVar1)))
                                                  ))))) ^ auVar10;
                                                  0))) >> 0x60,0),
    lVar8 = lVar8 + 8;
  } while (lVar8 != 0xa0);
  uVar7 = gettimeofday((timeval *)local_1a8,(__timezone_ptr_t)0x0);
  if (uVar7 != 0) {
    printf("Error return from gettimeofday: %d",(ulong)uVar7);
  }
int gsm_div(short param_1,short param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  
  if (param_1 != 0) {
    lVar2 = (long)param_2;
    lVar1 = (long)param_1 * 2;
    lVar3 = 0;
    lVar4 = lVar2;
    if (lVar1 < lVar2) {
      lVar4 = lVar3;
    }
    lVar4 = (lVar1 - lVar4) * 2;
    lVar5 = lVar2;
    if (lVar4 < lVar2) {
      lVar5 = lVar3;
    }
    lVar5 = (lVar4 - lVar5) * 2;
    lVar16 = lVar2;
    if (lVar5 < lVar2) {
      lVar16 = lVar3;
    }
    lVar16 = (lVar5 - lVar16) * 2;
    lVar6 = lVar2;
    if (lVar16 < lVar2) {
      lVar6 = lVar3;
    }
    lVar6 = (lVar16 - lVar6) * 2;
    lVar7 = lVar2;
    if (lVar6 < lVar2) {
      lVar7 = lVar3;
    }
    lVar7 = (lVar6 - lVar7) * 2;
    lVar8 = lVar2;
    if (lVar7 < lVar2) {
      lVar8 = lVar3;
    }
    lVar8 = (lVar7 - lVar8) * 2;
    lVar9 = lVar2;
    if (lVar8 < lVar2) {
      lVar9 = lVar3;
    }
    lVar9 = (lVar8 - lVar9) * 2;
    lVar10 = lVar2;
    if (lVar9 < lVar2) {
      lVar10 = lVar3;
    }
    lVar10 = (lVar9 - lVar10) * 2;
    lVar11 = lVar2;
    if (lVar10 < lVar2) {
      lVar11 = lVar3;
    }
    lVar11 = (lVar10 - lVar11) * 2;
    lVar12 = lVar2;
    if (lVar11 < lVar2) {
      lVar12 = lVar3;
    }
    lVar12 = (lVar11 - lVar12) * 2;
    lVar13 = lVar2;
    if (lVar12 < lVar2) {
      lVar13 = lVar3;
    }
    lVar13 = (lVar12 - lVar13) * 2;
    lVar14 = lVar2;
    if (lVar13 < lVar2) {
      lVar14 = lVar3;
    }
    lVar14 = (lVar13 - lVar14) * 2;
    lVar15 = lVar2;
    if (lVar14 < lVar2) {
      lVar15 = lVar3;
    }
    lVar15 = (lVar14 - lVar15) * 2;
    if (lVar2 <= lVar15) {
      lVar3 = lVar2;
    }
    return (uint)(lVar2 <= (lVar15 - lVar3) * 2) +
           ((uint)(lVar2 <= lVar15) |
           (uint)(lVar2 <= lVar14) * 2 +
           ((uint)(lVar2 <= lVar13) |
           (uint)(lVar2 <= lVar12) * 2 +
           ((uint)(lVar2 <= lVar11) |
           (uint)(lVar2 <= lVar10) * 2 +
           ((uint)(lVar2 <= lVar9) |
           (uint)(lVar2 <= lVar8) * 2 +
           ((uint)(lVar2 <= lVar7) |
           (uint)(lVar2 <= lVar6) * 2 +
           ((uint)(lVar2 <= lVar16) |
           (uint)(lVar2 <= lVar4) * 4 + (uint)(lVar2 <= lVar1) * 8 + (uint)(lVar2 <= lVar5) * 2) * 4
           ) * 4) * 4) * 4) * 4) * 2;
  }
  return 0;
}



void Autocorrelation(int (*param_1) [16],int (*param_2) [16])

{
  short *psVar1;
  short *psVar2;
  int (*pauVar3) [16];
  int auVar4 [16];
  int auVar5 [16];
  int bVar6;
  uint uVar7;
  long lVar8;
  int iVar9;
  uint uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  int *puVar17;
  short sVar18;
  long lVar19;
  long lVar20;
  int uVar21;
  int auVar22 [16];
  int auVar23 [16];
  short sVar25;
  short sVar26;
  short sVar27;
  short sVar28;
  short sVar29;
  short sVar30;
  short sVar31;
  int auVar24 [16];
  short sVar32;
  short sVar33;
  short sVar34;
  short sVar35;
  short sVar36;
  short sVar37;
  short sVar38;
  short sVar39;
  int auVar40 [16];
  ushort uVar41;
  ushort uVar42;
  int local_88;
  long local_80;
  long local_78;
  long local_70;
  
  auVar22 = (int  [16])0x0;
  lVar8 = 0;
  auVar23 = (int  [16])0x0;
  do {
    auVar4 = *(int (*) [16])(*param_1 + lVar8 * 2);
    auVar5 = *(int (*) [16])(param_1[1] + lVar8 * 2);
                                                                                         ),
                                                                                -(ushort)(sVar32 < 0
                                                                                         ))))))));
                                                                                         ),
                                                                                -(ushort)(sVar18 < 0
                                                                                         ))))))));
    uVar41 = -(ushort)(sVar39 == -0x8000);
    uVar42 = -(ushort)(sVar31 == -0x8000);
    auVar22 = pmaxsw(auVar22,~auVar40 & auVar4 |
                                                                                        -0x8000) >>
                                                  sVar35 == -0x8000) >> 1,
                                                                                      -0x8000) >> 1,
                                                                     (ushort)-(ushort)(sVar32 ==
                                                                                      -0x8000) >> 1)
                                                          )))))) |
                                                                                     -0x8000),
                                                  sVar35 == -0x8000),
                                                                    -(ushort)(sVar32 == -0x8000)))))
                                                  ))) &
                                                  ,-sVar32)))))))) & auVar40);
    auVar23 = pmaxsw(auVar23,~auVar24 & auVar5 |
                                                                                        -0x8000) >>
                                                  sVar27 == -0x8000) >> 1,
                                                                                      -0x8000) >> 1,
                                                                     (ushort)-(ushort)(sVar18 ==
                                                                                      -0x8000) >> 1)
                                                          )))))) |
                                                                                     -0x8000),
                                                  sVar27 == -0x8000),
                                                                    -(ushort)(sVar18 == -0x8000)))))
                                                  ))) &
                                                  ,-sVar18)))))))) & auVar24);
    lVar8 = lVar8 + 0x10;
  } while (lVar8 != 0xa0);
  auVar22 = pmaxsw(auVar22,auVar23);
  ;
    bVar6 = 0;
    local_88 = 0;
  }
  else {
    uVar10 = uVar7 >> 8;
    if (0xff >= uVar7) {
      uVar10 = uVar7;
    }
    iVar9 = (uint)(0xff < uVar7) * 8 - (uint)*(byte *)(((ulong)uVar10 & 0xff) + 0x418dc1290204b60f);
    local_88 = iVar9 + -3;
    bVar6 = 0 < local_88;
    uVar10 = iVar9 - 4;
    if (uVar10 < 4) {
      uVar10 = 0x4000 >> ((byte)uVar10 & 0x1f);
      lVar8 = 0;
      do {
        *(short *)(*param_1 + lVar8 * 2) =
             (short)((int)*(short *)(*param_1 + lVar8 * 2) * uVar10 + 0x4000 >> 0xf);
        uVar11 = lVar8 * 2 | 2;
        *(short *)(*param_1 + uVar11) =
             (short)((int)*(short *)(*param_1 + uVar11) * uVar10 + 0x4000 >> 0xf);
        lVar8 = lVar8 + 2;
      } while (lVar8 != 0xa0);
    }
  }
  lVar13 = (long)*(short *)*param_1;
  param_2[3] = (int  [16])0x0;
  param_2[2] = (int  [16])0x0;
  param_2[1] = (int  [16])0x0;
  *param_2 = (int  [16])0x0;
  *(int8 *)param_2[4] = 0;
  lVar8 = (long)*(short *)(*param_1 + 4);
  lVar14 = (long)*(short *)(*param_1 + 6);
  lVar15 = (long)*(short *)(*param_1 + 8);
  lVar20 = (long)*(short *)(*param_1 + 10);
  lVar16 = (long)*(short *)(*param_1 + 0xc);
  lVar12 = (long)*(short *)(*param_1 + 2);
  uVar11 = (ulong)*(short *)(*param_1 + 0xe);
  local_78 = uVar11 * uVar11 +
             lVar16 * lVar16 + lVar20 * lVar20 + lVar15 * lVar15 +
             lVar14 * lVar14 + lVar8 * lVar8 + lVar12 * lVar12 + lVar13 * lVar13;
  local_70 = lVar16 * uVar11 + lVar16 * lVar20 + lVar20 * lVar15 +
             lVar15 * lVar14 + lVar14 * lVar8 + (lVar8 + lVar13) * lVar12;
  local_80 = lVar20 * uVar11 + lVar16 * lVar15 +
             lVar20 * lVar14 + lVar15 * lVar8 + lVar14 * lVar12 + lVar8 * lVar13;
  lVar19 = lVar15 * uVar11 + lVar16 * lVar14 + lVar20 * lVar8 + lVar15 * lVar12 + lVar14 * lVar13;
  lVar14 = lVar14 * uVar11 + lVar16 * lVar8 + lVar20 * lVar12 + lVar15 * lVar13;
  puVar17 = *param_1 + 0xe;
  lVar8 = lVar8 * uVar11 + lVar16 * lVar12 + lVar20 * lVar13;
  lVar15 = lVar12 * uVar11 + lVar16 * lVar13 + *(long *)param_2[3];
  lVar13 = uVar11 * lVar13 + *(long *)(param_2[3] + 8);
  iVar9 = 8;
  lVar12 = 0;
  do {
    lVar16 = (long)*(short *)(puVar17 + 2);
    sVar18 = (short)uVar11;
    psVar1 = (short *)(puVar17 + -10);
    psVar2 = (short *)(puVar17 + -0xc);
    pauVar3 = (int (*) [16])(puVar17 + -0xe);
    uVar11 = (ulong)(uint)(int)*(short *)(puVar17 + 2);
    local_78 = local_78 + lVar16 * lVar16;
    local_70 = local_70 + sVar18 * lVar16;
    local_80 = local_80 + *(short *)(puVar17 + -2) * lVar16;
    lVar19 = lVar19 + *(short *)(puVar17 + -4) * lVar16;
    lVar14 = lVar14 + *(short *)(puVar17 + -6) * lVar16;
    lVar8 = lVar8 + *(short *)(puVar17 + -8) * lVar16;
    puVar17 = puVar17 + 2;
    lVar15 = lVar15 + *psVar1 * lVar16;
    lVar13 = lVar13 + *psVar2 * lVar16;
    lVar12 = lVar12 + *(short *)*pauVar3 * lVar16;
    iVar9 = iVar9 + 1;
  } while (iVar9 != 0xa0);
  *(long *)param_2[4] = lVar12 * 2;
  *(long *)(param_2[3] + 8) = lVar13 * 2;
  *(long *)param_2[3] = lVar15 * 2;
  *(long *)(param_2[2] + 8) = lVar8 * 2;
  *(long *)param_2[2] = lVar14 * 2;
  *(long *)(param_2[1] + 8) = lVar19 * 2;
  *(long *)param_2[1] = local_80 * 2;
  *(long *)(*param_2 + 8) = local_70 * 2;
  *(long *)*param_2 = local_78 * 2;
  if (bVar6) {
    auVar22 = *param_1;
    auVar23 = param_1[1];
    auVar4 = param_1[2];
    auVar5 = param_1[3];
                                                               local_88)))),
                                                               local_88)))));
                                                               local_88)))),
                                                               local_88)))));
    *param_1 = auVar24;
    param_1[1] = auVar22;
                                                               local_88)))),
                                                               )))));
                                                               local_88)))),
                                                               )))));
    param_1[2] = auVar23;
    param_1[3] = auVar22;
    auVar22 = param_1[4];
    auVar23 = param_1[5];
                                                               local_88)))),
                                                               local_88)))));
                                                               local_88)))),
                                                               local_88)))));
    param_1[4] = auVar22;
    param_1[5] = auVar23;
    auVar22 = param_1[6];
    auVar23 = param_1[7];
                                                               local_88)))),
                                                               local_88)))));
                                                               local_88)))),
                                                               local_88)))));
    param_1[6] = auVar22;
    param_1[7] = auVar23;
    auVar22 = param_1[8];
    auVar23 = param_1[9];
                                                               local_88)))),
                                                               local_88)))));
                                                               local_88)))),
                                                               local_88)))));
    param_1[8] = auVar22;
    param_1[9] = auVar23;
    auVar22 = param_1[10];
    auVar23 = param_1[0xb];
                                                               local_88)))),
                                                               local_88)))));
                                                               local_88)))),
                                                               local_88)))));
    param_1[10] = auVar22;
    param_1[0xb] = auVar23;
    auVar22 = param_1[0xc];
    auVar23 = param_1[0xd];
                                                               local_88)))),
                                                               local_88)))));
                                                               local_88)))),
                                                               local_88)))));
    param_1[0xc] = auVar22;
    param_1[0xd] = auVar23;
    auVar22 = param_1[0xe];
    auVar23 = param_1[0xf];
                                                               local_88)))),
                                                               local_88)))));
                                                               local_88)))),
                                                               local_88)))));
    param_1[0xe] = auVar22;
    param_1[0xf] = auVar23;
    auVar22 = param_1[0x10];
    auVar23 = param_1[0x11];
                                                               local_88)))),
                                                               local_88)))));
                                                               local_88)))),
                                                               local_88)))));
    param_1[0x10] = auVar22;
    param_1[0x11] = auVar23;
    auVar22 = param_1[0x12];
    auVar23 = param_1[0x13];
                                                               local_88)))),
                                                               local_88)))));
                                                               local_88)))),
                                                               local_88)))));
    param_1[0x12] = auVar22;
    param_1[0x13] = auVar23;
  }
  return;
}




void Reflection_coefficients(ulong *param_1,int (*param_2) [16])

{
  ushort uVar1;
  uint uVar2;
  short sVar3;
  ulong uVar4;
  char cVar5;
  byte bVar6;
  short sVar7;
  long lVar8;
  size_t __n;
  short sVar9;
  short sVar10;
  ushort uVar11;
  ushort uVar12;
  short sVar13;
  ulong uVar14;
  ulong uVar15;
  short sVar16;
  ulong uVar17;
  int bVar18;
  ushort local_78 [6];
  int local_6c;
  int local_6a;
  int local_68;
  ushort auStack_58 [5];
  int local_4e;
  int local_4c;
  int local_4a;
  ulong local_40;
  long local_38;
  
  uVar17 = *param_1;
  if (uVar17 == 0) {
    return;
  }
  uVar4 = uVar17;
  if ((long)uVar17 < 0) {
    if (uVar17 < 0xffffffffc0000001) {
      bVar6 = 0;
      goto LAB_00100c81;
    }
    uVar4 = ~uVar17;
  }
  if ((short)(uVar4 >> 0x10) == 0) {
    bVar18 = (uVar4 & 0xff00) == 0;
    if (!bVar18) {
      uVar4 = uVar4 >> 8;
    }
    bVar6 = (byte)uVar4;
    cVar5 = bVar18 * '\b' + '\x0f';
  }
  else {
    bVar6 = (byte)(uVar4 >> 0x18);
    if (bVar6 == 0) {
      cVar5 = '\a';
      bVar6 = (byte)(uVar4 >> 0x10);
    }
    else {
      cVar5 = -1;
    }
  }
  bVar6 = cVar5 + *(char *)((ulong)bVar6 + 0xd349c1010204b60f);
LAB_00100c81:
  uVar17 = uVar17 << (bVar6 & 0x3f);
  uVar14 = param_1[1] << (bVar6 & 0x3f);
  uVar15 = uVar14 >> 0x10;
  local_78[1] = (ushort)(uVar14 >> 0x10);
  local_78[2] = (ushort)((param_1[2] << (bVar6 & 0x3f)) >> 0x10);
  local_78[3] = (ushort)((param_1[3] << (bVar6 & 0x3f)) >> 0x10);
  local_78[4] = (ushort)((param_1[4] << (bVar6 & 0x3f)) >> 0x10);
  local_78[5] = (ushort)((param_1[5] << (bVar6 & 0x3f)) >> 0x10);
  local_6c = (int)((param_1[6] << (bVar6 & 0x3f)) >> 0x10);
  local_6a = (int)((param_1[7] << (bVar6 & 0x3f)) >> 0x10);
  local_78[0] = (ushort)(uVar17 >> 0x10);
  local_68 = (int)((param_1[8] << (bVar6 & 0x3f)) >> 0x10);
  uVar2 = (uint)(uVar14 >> 0x10);
  bVar18 = (uVar2 & 0xffff) == 0x8000;
  uVar4 = (ulong)-uVar2;
  sVar9 = 0x7fff;
  if (bVar18) {
    uVar4 = 0x7fff;
  }
  if (-1 < (short)local_78[1]) {
    uVar4 = uVar14 >> 0x10 & 0xffffffff;
  }
  auStack_58[1] = local_78[1];
  auStack_58[2] = local_78[2];
  auStack_58[3] = local_78[3];
  auStack_58[4] = local_78[4];
  local_4e = local_78[5];
  local_4c = local_6c;
  local_4a = local_6a;
  if ((short)local_78[0] < (short)uVar4) {
    __n = 0x10;
  }
  else {
    uVar14 = 1;
    lVar8 = 0;
    uVar17 = uVar17 >> 0x10;
    do {
      sVar16 = (short)uVar17;
      local_38 = lVar8;
      sVar3 = gsm_div((int)(short)uVar4,(int)sVar16);
      sVar7 = -sVar3;
      if ((short)uVar15 < 1) {
        sVar7 = sVar3;
      }
      *(short *)*param_2 = sVar7;
      if (uVar14 == 8) {
        return;
      }
      sVar10 = (short)((int)sVar7 * (int)(short)uVar15 + 0x4000U >> 0xf);
      sVar3 = sVar10;
      if (sVar7 == -0x8000) {
        sVar3 = sVar9;
      }
      if (!bVar18) {
        sVar3 = sVar10;
      }
      local_40 = uVar17 & 0xffff0000 | (ulong)(ushort)(sVar16 + sVar3);
      if (SCARRY2(sVar16,sVar3)) {
        local_40 = (ulong)((int)(short)(sVar16 + sVar3) >> 0xf ^ 0xffff8000);
      }
      if (uVar14 < 8) {
        uVar17 = 1;
        do {
          uVar12 = auStack_58[uVar17];
          sVar16 = (short)((int)(short)uVar12 * (int)sVar7 + 0x4000U >> 0xf);
          sVar3 = sVar16;
          if ((short)uVar12 == -0x8000) {
            sVar3 = sVar9;
          }
          uVar1 = local_78[uVar17 + 1];
          sVar13 = (short)((int)(short)uVar1 * (int)sVar7 + 0x4000U >> 0xf);
          sVar10 = sVar13;
          if ((short)uVar1 == -0x8000) {
            sVar10 = sVar9;
          }
          if (sVar7 != -0x8000) {
            sVar10 = sVar13;
            sVar3 = sVar16;
          }
          uVar11 = uVar12 + sVar10;
          if (SCARRY2(uVar12,sVar10)) {
            uVar11 = (short)(uVar12 + sVar10) >> 0xf ^ 0x8000;
          }
          uVar12 = uVar1 + sVar3;
          if (SCARRY2(uVar1,sVar3)) {
            uVar12 = (short)(uVar1 + sVar3) >> 0xf ^ 0x8000;
          }
          local_78[uVar17] = uVar12;
          auStack_58[uVar17] = uVar11;
          bVar18 = uVar17 < 8 - uVar14;
          uVar17 = uVar17 + 1;
        } while (bVar18);
      }
      uVar14 = uVar14 + 1;
      param_2 = (int (*) [16])(*param_2 + 2);
      lVar8 = local_38 + 1;
      uVar15 = (ulong)local_78[1];
      bVar18 = local_78[1] == 0x8000;
      uVar2 = -(uint)local_78[1];
      if (bVar18) {
        uVar2 = 0x7fff;
      }
      uVar4 = (ulong)uVar2;
      if (-1 < (short)local_78[1]) {
        uVar4 = uVar15;
      }
      uVar17 = local_40;
    } while ((short)uVar4 <= (short)local_40);
    __n = lVar8 * -2 + 0x10;
    if (8 < (uint)uVar14) {
      return;
    }
  }
  memset(param_2,0,__n);
  return;
}



void Transformation_to_Log_Area_Ratios(ushort *param_1)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  
  uVar1 = *param_1;
  uVar3 = 0x7fff;
  if (uVar1 != 0x8000) {
    uVar3 = -uVar1;
  }
  if (-1 < (short)uVar1) {
    uVar3 = uVar1;
  }
  if ((short)uVar3 < 0x5666) {
    uVar3 = (ushort)((uint)(int)(short)uVar3 >> 1);
  }
  else if (uVar3 < 0x799a) {
    uVar3 = uVar3 + 0xd4cd;
  }
  else {
    uVar3 = uVar3 * 4 + 0x6800;
  }
  uVar2 = -uVar3;
  if (-1 < (short)uVar1) {
    uVar2 = uVar3;
  }
  *param_1 = uVar2;
  uVar1 = param_1[1];
  uVar3 = 0x7fff;
  if (uVar1 != 0x8000) {
    uVar3 = -uVar1;
  }
  if (-1 < (short)uVar1) {
    uVar3 = uVar1;
  }
  if ((short)uVar3 < 0x5666) {
    uVar3 = (ushort)((uint)(int)(short)uVar3 >> 1);
  }
  else if (uVar3 < 0x799a) {
    uVar3 = uVar3 + 0xd4cd;
  }
  else {
    uVar3 = uVar3 * 4 + 0x6800;
  }
  uVar2 = -uVar3;
  if (-1 < (short)uVar1) {
    uVar2 = uVar3;
  }
  param_1[1] = uVar2;
  uVar1 = param_1[2];
  uVar3 = 0x7fff;
  if (uVar1 != 0x8000) {
    uVar3 = -uVar1;
  }
  if (-1 < (short)uVar1) {
    uVar3 = uVar1;
  }
  if ((short)uVar3 < 0x5666) {
    uVar3 = (ushort)((uint)(int)(short)uVar3 >> 1);
  }
  else if (uVar3 < 0x799a) {
    uVar3 = uVar3 + 0xd4cd;
  }
  else {
    uVar3 = uVar3 * 4 + 0x6800;
  }
  uVar2 = -uVar3;
  if (-1 < (short)uVar1) {
    uVar2 = uVar3;
  }
  param_1[2] = uVar2;
  uVar1 = param_1[3];
  uVar3 = 0x7fff;
  if (uVar1 != 0x8000) {
    uVar3 = -uVar1;
  }
  if (-1 < (short)uVar1) {
    uVar3 = uVar1;
  }
  if ((short)uVar3 < 0x5666) {
    uVar3 = (ushort)((uint)(int)(short)uVar3 >> 1);
  }
  else if (uVar3 < 0x799a) {
    uVar3 = uVar3 + 0xd4cd;
  }
  else {
    uVar3 = uVar3 * 4 + 0x6800;
  }
  uVar2 = -uVar3;
  if (-1 < (short)uVar1) {
    uVar2 = uVar3;
  }
  param_1[3] = uVar2;
  uVar1 = param_1[4];
  uVar3 = 0x7fff;
  if (uVar1 != 0x8000) {
    uVar3 = -uVar1;
  }
  if (-1 < (short)uVar1) {
    uVar3 = uVar1;
  }
  if ((short)uVar3 < 0x5666) {
    uVar3 = (ushort)((uint)(int)(short)uVar3 >> 1);
  }
  else if (uVar3 < 0x799a) {
    uVar3 = uVar3 + 0xd4cd;
  }
  else {
    uVar3 = uVar3 * 4 + 0x6800;
  }
  uVar2 = -uVar3;
  if (-1 < (short)uVar1) {
    uVar2 = uVar3;
  }
  param_1[4] = uVar2;
  uVar1 = param_1[5];
  uVar3 = 0x7fff;
  if (uVar1 != 0x8000) {
    uVar3 = -uVar1;
  }
  if (-1 < (short)uVar1) {
    uVar3 = uVar1;
  }
  if ((short)uVar3 < 0x5666) {
    uVar3 = (ushort)((uint)(int)(short)uVar3 >> 1);
  }
  else if (uVar3 < 0x799a) {
    uVar3 = uVar3 + 0xd4cd;
  }
  else {
    uVar3 = uVar3 * 4 + 0x6800;
  }
  uVar2 = -uVar3;
  if (-1 < (short)uVar1) {
    uVar2 = uVar3;
  }
  param_1[5] = uVar2;
  uVar1 = param_1[6];
  uVar3 = 0x7fff;
  if (uVar1 != 0x8000) {
    uVar3 = -uVar1;
  }
  if (-1 < (short)uVar1) {
    uVar3 = uVar1;
  }
  if ((short)uVar3 < 0x5666) {
    uVar3 = (ushort)((uint)(int)(short)uVar3 >> 1);
  }
  else if (uVar3 < 0x799a) {
    uVar3 = uVar3 + 0xd4cd;
  }
  else {
    uVar3 = uVar3 * 4 + 0x6800;
  }
  uVar2 = -uVar3;
  if (-1 < (short)uVar1) {
    uVar2 = uVar3;
  }
  param_1[6] = uVar2;
  uVar1 = param_1[7];
  uVar3 = 0x7fff;
  if (uVar1 != 0x8000) {
    uVar3 = -uVar1;
  }
  if (-1 < (short)uVar1) {
    uVar3 = uVar1;
  }
  if ((short)uVar3 < 0x5666) {
    uVar3 = (ushort)((uint)(int)(short)uVar3 >> 1);
  }
  else if (uVar3 < 0x799a) {
    uVar3 = uVar3 + 0xd4cd;
  }
  else {
    uVar3 = uVar3 * 4 + 0x6800;
  }
  uVar2 = -uVar3;
  if (-1 < (short)uVar1) {
    uVar2 = uVar3;
  }
  param_1[7] = uVar2;
  return;
}




void Quantization_and_coding(int (*param_1) [16])

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  int uVar6;
  int uVar7;
  int auVar5 [16];
  ushort uVar8;
  ushort uVar10;
  ushort uVar12;
  ushort uVar14;
  int uVar16;
  int uVar17;
  int auVar9 [16];
  short sVar11;
  short sVar13;
  short sVar15;
  
  auVar9 = *param_1;
                                                  auVar9,0))) >> 0x60,0),
                   __LCPI9_1);
  auVar9 = paddsw(auVar9,__LCPI9_2);
  uVar10 = -(ushort)(0x3fff < sVar11);
  uVar12 = -(ushort)(0x1fff < sVar13);
  uVar14 = -(ushort)(0xfff < sVar15);
  auVar5 = pinsrw(auVar9,uVar1 + 0x100,3);
  auVar5 = pinsrw(auVar5,uVar2 + 0x100,5);
  auVar5 = pinsrw(auVar5,uVar3 + 0x100,6);
  auVar5 = pinsrw(auVar5,uVar4 + 0x100,7);
  auVar5 = psraw(auVar5,9);
  *(ushort *)*param_1 =
  *(ushort *)(*param_1 + 2) =
  *(ushort *)(*param_1 + 4) =
  *(ushort *)(*param_1 + 6) =
       -(ushort)(0x1eff < (short)uVar1) & 0x1f |
       ~-(ushort)(0x1eff < (short)uVar1) &
  *(ushort *)(*param_1 + 8) =
  *(ushort *)(*param_1 + 10) =
       -(ushort)(0xeff < (short)uVar2) & 0xf |
       ~-(ushort)(0xeff < (short)uVar2) &
  *(ushort *)(*param_1 + 0xc) =
       -(ushort)(0x6ff < (short)uVar3) & 7 |
       ~-(ushort)(0x6ff < (short)uVar3) &
  *(ushort *)(*param_1 + 0xe) =
       -(ushort)(0x6ff < (short)uVar4) & 7 |
       ~-(ushort)(0x6ff < (short)uVar4) &
  return;
}



void Gsm_LPC_Analysis(int8 param_1,int8 param_2)

{
  int auStack_58 [72];
  
  Autocorrelation(param_1,auStack_58);
  Reflection_coefficients(auStack_58,param_2);
  Transformation_to_Log_Area_Ratios(param_2);
  Quantization_and_coding(param_2);
  return;
}




int submain(void)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  uint uVar7;
  long lVar8;
  byte bVar9;
  int auVar10 [16];
  int uVar12;
  int uVar13;
  int auVar11 [16];
  int auVar14 [16];
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  short local_1e8;
  short sStack_1e6;
  short sStack_1e4;
  short sStack_1e2;
  short sStack_1e0;
  short sStack_1de;
  short sStack_1dc;
  short sStack_1da;
  int local_1b8;
  int uStack_1b4;
  int uStack_1b0;
  int uStack_1ac;
  int local_1a8 [80];
  int local_158 [8];
  ulong local_150 [39];
  
  uVar7 = gettimeofday((timeval *)local_158,(__timezone_ptr_t)0x0);
  if (uVar7 != 0) {
    printf("Error return from gettimeofday: %d",(ulong)uVar7);
  }
  _DAT_358b480f110f41f2 = (double)(int)local_150[0] * 1e-06 + (double)(long)local_158;
  memcpy(local_158,(void *)0x90249c8d48,0x140);
  Autocorrelation(local_158,local_1a8);
  Reflection_coefficients(local_1a8);
  Transformation_to_Log_Area_Ratios(&local_1b8);
  Quantization_and_coding(&local_1b8);
  iVar15 = 0;
  iVar16 = 0;
  iVar17 = 0;
  iVar18 = 0;
  lVar8 = 0;
  iVar19 = 0;
  iVar20 = 0;
  iVar21 = 0;
  iVar22 = 0;
  do {
    uVar1 = *(ulong *)((long)local_150 + lVar8 * 2);
    uVar2 = *(ulong *)(&DAT_d6f0f66c0760f66 + lVar8 * 2);
    uVar3 = *(ulong *)(&DAT_d6f0f66c0760f6e + lVar8 * 2);
                                                  (short)((uVar2 & 0xffffffffffff0000) >> 0x30) ==
                                                  0xffffffffffff0000) >> 0x20) ==
                                                           -(ushort)((short)uVar2 ==
                                                                    (short)*(ulong *)(local_158 +
                                                                                     lVar8 * 2))))))
                                                  ))) ^ auVar10;
                                                  0))) >> 0x60,0),
                                                  (short)((uVar3 & 0xffffffffffff0000) >> 0x30) ==
                                                  0xffffffffffff0000) >> 0x20) ==
                                                           -(ushort)((short)uVar3 == (short)uVar1)))
                                                  ))))) ^ auVar10;
                                                  0))) >> 0x60,0),
    lVar8 = lVar8 + 8;
  } while (lVar8 != 0xa0);
  uVar7 = gettimeofday((timeval *)local_1a8,(__timezone_ptr_t)0x0);
  if (uVar7 != 0) {
    printf("Error return from gettimeofday: %d",(ulong)uVar7);
  }
void Autocorrelation(int (*param_1) [16],int (*param_2) [16])

{
  short *psVar1;
  short *psVar2;
  int (*pauVar3) [16];
  int auVar4 [16];
  int auVar5 [16];
  int bVar6;
  uint uVar7;
  long lVar8;
  int iVar9;
  uint uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  int *puVar17;
  short sVar18;
  long lVar19;
  long lVar20;
  int uVar21;
  int auVar22 [16];
  int auVar23 [16];
  short sVar25;
  short sVar26;
  short sVar27;
  short sVar28;
  short sVar29;
  short sVar30;
  short sVar31;
  int auVar24 [16];
  short sVar32;
  short sVar33;
  short sVar34;
  short sVar35;
  short sVar36;
  short sVar37;
  short sVar38;
  short sVar39;
  int auVar40 [16];
  ushort uVar41;
  ushort uVar42;
  int local_88;
  long local_80;
  long local_78;
  long local_70;
  
  auVar22 = (int  [16])0x0;
  lVar8 = 0;
  auVar23 = (int  [16])0x0;
  do {
    auVar4 = *(int (*) [16])(*param_1 + lVar8 * 2);
    auVar5 = *(int (*) [16])(param_1[1] + lVar8 * 2);
                                                                                         ),
                                                                                -(ushort)(sVar32 < 0
                                                                                         ))))))));
                                                                                         ),
                                                                                -(ushort)(sVar18 < 0
                                                                                         ))))))));
    uVar41 = -(ushort)(sVar39 == -0x8000);
    uVar42 = -(ushort)(sVar31 == -0x8000);
    auVar22 = pmaxsw(auVar22,~auVar40 & auVar4 |
                                                                                        -0x8000) >>
                                                  sVar35 == -0x8000) >> 1,
                                                                                      -0x8000) >> 1,
                                                                     (ushort)-(ushort)(sVar32 ==
                                                                                      -0x8000) >> 1)
                                                          )))))) |
                                                                                     -0x8000),
                                                  sVar35 == -0x8000),
                                                                    -(ushort)(sVar32 == -0x8000)))))
                                                  ))) &
                                                  ,-sVar32)))))))) & auVar40);
    auVar23 = pmaxsw(auVar23,~auVar24 & auVar5 |
                                                                                        -0x8000) >>
                                                  sVar27 == -0x8000) >> 1,
                                                                                      -0x8000) >> 1,
                                                                     (ushort)-(ushort)(sVar18 ==
                                                                                      -0x8000) >> 1)
                                                          )))))) |
                                                                                     -0x8000),
                                                  sVar27 == -0x8000),
                                                                    -(ushort)(sVar18 == -0x8000)))))
                                                  ))) &
                                                  ,-sVar18)))))))) & auVar24);
    lVar8 = lVar8 + 0x10;
  } while (lVar8 != 0xa0);
  auVar22 = pmaxsw(auVar22,auVar23);
  ;
    bVar6 = 0;
    local_88 = 0;
  }
  else {
    uVar10 = uVar7 >> 8;
    if (0xff >= uVar7) {
      uVar10 = uVar7;
    }
    iVar9 = (uint)(0xff < uVar7) * 8 - (uint)*(byte *)(((ulong)uVar10 & 0xff) + 0x418dc1290204b60f);
    local_88 = iVar9 + -3;
    bVar6 = 0 < local_88;
    uVar10 = iVar9 - 4;
    if (uVar10 < 4) {
      uVar10 = 0x4000 >> ((byte)uVar10 & 0x1f);
      lVar8 = 0;
      do {
        *(short *)(*param_1 + lVar8 * 2) =
             (short)((int)*(short *)(*param_1 + lVar8 * 2) * uVar10 + 0x4000 >> 0xf);
        uVar11 = lVar8 * 2 | 2;
        *(short *)(*param_1 + uVar11) =
             (short)((int)*(short *)(*param_1 + uVar11) * uVar10 + 0x4000 >> 0xf);
        lVar8 = lVar8 + 2;
      } while (lVar8 != 0xa0);
    }
  }
  lVar13 = (long)*(short *)*param_1;
  param_2[3] = (int  [16])0x0;
  param_2[2] = (int  [16])0x0;
  param_2[1] = (int  [16])0x0;
  *param_2 = (int  [16])0x0;
  *(int8 *)param_2[4] = 0;
  lVar8 = (long)*(short *)(*param_1 + 4);
  lVar14 = (long)*(short *)(*param_1 + 6);
  lVar15 = (long)*(short *)(*param_1 + 8);
  lVar20 = (long)*(short *)(*param_1 + 10);
  lVar16 = (long)*(short *)(*param_1 + 0xc);
  lVar12 = (long)*(short *)(*param_1 + 2);
  uVar11 = (ulong)*(short *)(*param_1 + 0xe);
  local_78 = uVar11 * uVar11 +
             lVar16 * lVar16 + lVar20 * lVar20 + lVar15 * lVar15 +
             lVar14 * lVar14 + lVar8 * lVar8 + lVar12 * lVar12 + lVar13 * lVar13;
  local_70 = lVar16 * uVar11 + lVar16 * lVar20 + lVar20 * lVar15 +
             lVar15 * lVar14 + lVar14 * lVar8 + (lVar8 + lVar13) * lVar12;
  local_80 = lVar20 * uVar11 + lVar16 * lVar15 +
             lVar20 * lVar14 + lVar15 * lVar8 + lVar14 * lVar12 + lVar8 * lVar13;
  lVar19 = lVar15 * uVar11 + lVar16 * lVar14 + lVar20 * lVar8 + lVar15 * lVar12 + lVar14 * lVar13;
  lVar14 = lVar14 * uVar11 + lVar16 * lVar8 + lVar20 * lVar12 + lVar15 * lVar13;
  puVar17 = *param_1 + 0xe;
  lVar8 = lVar8 * uVar11 + lVar16 * lVar12 + lVar20 * lVar13;
  lVar15 = lVar12 * uVar11 + lVar16 * lVar13 + *(long *)param_2[3];
  lVar13 = uVar11 * lVar13 + *(long *)(param_2[3] + 8);
  iVar9 = 8;
  lVar12 = 0;
  do {
    lVar16 = (long)*(short *)(puVar17 + 2);
    sVar18 = (short)uVar11;
    psVar1 = (short *)(puVar17 + -10);
    psVar2 = (short *)(puVar17 + -0xc);
    pauVar3 = (int (*) [16])(puVar17 + -0xe);
    uVar11 = (ulong)(uint)(int)*(short *)(puVar17 + 2);
    local_78 = local_78 + lVar16 * lVar16;
    local_70 = local_70 + sVar18 * lVar16;
    local_80 = local_80 + *(short *)(puVar17 + -2) * lVar16;
    lVar19 = lVar19 + *(short *)(puVar17 + -4) * lVar16;
    lVar14 = lVar14 + *(short *)(puVar17 + -6) * lVar16;
    lVar8 = lVar8 + *(short *)(puVar17 + -8) * lVar16;
    puVar17 = puVar17 + 2;
    lVar15 = lVar15 + *psVar1 * lVar16;
    lVar13 = lVar13 + *psVar2 * lVar16;
    lVar12 = lVar12 + *(short *)*pauVar3 * lVar16;
    iVar9 = iVar9 + 1;
  } while (iVar9 != 0xa0);
  *(long *)param_2[4] = lVar12 * 2;
  *(long *)(param_2[3] + 8) = lVar13 * 2;
  *(long *)param_2[3] = lVar15 * 2;
  *(long *)(param_2[2] + 8) = lVar8 * 2;
  *(long *)param_2[2] = lVar14 * 2;
  *(long *)(param_2[1] + 8) = lVar19 * 2;
  *(long *)param_2[1] = local_80 * 2;
  *(long *)(*param_2 + 8) = local_70 * 2;
  *(long *)*param_2 = local_78 * 2;
  if (bVar6) {
    auVar22 = *param_1;
    auVar23 = param_1[1];
    auVar4 = param_1[2];
    auVar5 = param_1[3];
                                                               local_88)))),
                                                               local_88)))));
                                                               local_88)))),
                                                               local_88)))));
    *param_1 = auVar24;
    param_1[1] = auVar22;
                                                               local_88)))),
                                                               )))));
                                                               local_88)))),
                                                               )))));
    param_1[2] = auVar23;
    param_1[3] = auVar22;
    auVar22 = param_1[4];
    auVar23 = param_1[5];
                                                               local_88)))),
                                                               local_88)))));
                                                               local_88)))),
                                                               local_88)))));
    param_1[4] = auVar22;
    param_1[5] = auVar23;
    auVar22 = param_1[6];
    auVar23 = param_1[7];
                                                               local_88)))),
                                                               local_88)))));
                                                               local_88)))),
                                                               local_88)))));
    param_1[6] = auVar22;
    param_1[7] = auVar23;
    auVar22 = param_1[8];
    auVar23 = param_1[9];
                                                               local_88)))),
                                                               local_88)))));
                                                               local_88)))),
                                                               local_88)))));
    param_1[8] = auVar22;
    param_1[9] = auVar23;
    auVar22 = param_1[10];
    auVar23 = param_1[0xb];
                                                               local_88)))),
                                                               local_88)))));
                                                               local_88)))),
                                                               local_88)))));
    param_1[10] = auVar22;
    param_1[0xb] = auVar23;
    auVar22 = param_1[0xc];
    auVar23 = param_1[0xd];
                                                               local_88)))),
                                                               local_88)))));
                                                               local_88)))),
                                                               local_88)))));
    param_1[0xc] = auVar22;
    param_1[0xd] = auVar23;
    auVar22 = param_1[0xe];
    auVar23 = param_1[0xf];
                                                               local_88)))),
                                                               local_88)))));
                                                               local_88)))),
                                                               local_88)))));
    param_1[0xe] = auVar22;
    param_1[0xf] = auVar23;
    auVar22 = param_1[0x10];
    auVar23 = param_1[0x11];
                                                               local_88)))),
                                                               local_88)))));
                                                               local_88)))),
                                                               local_88)))));
    param_1[0x10] = auVar22;
    param_1[0x11] = auVar23;
    auVar22 = param_1[0x12];
    auVar23 = param_1[0x13];
                                                               local_88)))),
                                                               local_88)))));
                                                               local_88)))),
                                                               local_88)))));
    param_1[0x12] = auVar22;
    param_1[0x13] = auVar23;
  }
  return;
}




void Reflection_coefficients(ulong *param_1,int (*param_2) [16])

{
  ushort uVar1;
  uint uVar2;
  short sVar3;
  ulong uVar4;
  char cVar5;
  byte bVar6;
  short sVar7;
  long lVar8;
  size_t __n;
  short sVar9;
  short sVar10;
  ushort uVar11;
  ushort uVar12;
  short sVar13;
  ulong uVar14;
  ulong uVar15;
  short sVar16;
  ulong uVar17;
  int bVar18;
  ushort local_78 [6];
  int local_6c;
  int local_6a;
  int local_68;
  ushort auStack_58 [5];
  int local_4e;
  int local_4c;
  int local_4a;
  ulong local_40;
  long local_38;
  
  uVar17 = *param_1;
  if (uVar17 == 0) {
    return;
  }
  uVar4 = uVar17;
  if ((long)uVar17 < 0) {
    if (uVar17 < 0xffffffffc0000001) {
      bVar6 = 0;
      goto LAB_00100c81;
    }
    uVar4 = ~uVar17;
  }
  if ((short)(uVar4 >> 0x10) == 0) {
    bVar18 = (uVar4 & 0xff00) == 0;
    if (!bVar18) {
      uVar4 = uVar4 >> 8;
    }
    bVar6 = (byte)uVar4;
    cVar5 = bVar18 * '\b' + '\x0f';
  }
  else {
    bVar6 = (byte)(uVar4 >> 0x18);
    if (bVar6 == 0) {
      cVar5 = '\a';
      bVar6 = (byte)(uVar4 >> 0x10);
    }
    else {
      cVar5 = -1;
    }
  }
  bVar6 = cVar5 + *(char *)((ulong)bVar6 + 0xd349c1010204b60f);
LAB_00100c81:
  uVar17 = uVar17 << (bVar6 & 0x3f);
  uVar14 = param_1[1] << (bVar6 & 0x3f);
  uVar15 = uVar14 >> 0x10;
  local_78[1] = (ushort)(uVar14 >> 0x10);
  local_78[2] = (ushort)((param_1[2] << (bVar6 & 0x3f)) >> 0x10);
  local_78[3] = (ushort)((param_1[3] << (bVar6 & 0x3f)) >> 0x10);
  local_78[4] = (ushort)((param_1[4] << (bVar6 & 0x3f)) >> 0x10);
  local_78[5] = (ushort)((param_1[5] << (bVar6 & 0x3f)) >> 0x10);
  local_6c = (int)((param_1[6] << (bVar6 & 0x3f)) >> 0x10);
  local_6a = (int)((param_1[7] << (bVar6 & 0x3f)) >> 0x10);
  local_78[0] = (ushort)(uVar17 >> 0x10);
  local_68 = (int)((param_1[8] << (bVar6 & 0x3f)) >> 0x10);
  uVar2 = (uint)(uVar14 >> 0x10);
  bVar18 = (uVar2 & 0xffff) == 0x8000;
  uVar4 = (ulong)-uVar2;
  sVar9 = 0x7fff;
  if (bVar18) {
    uVar4 = 0x7fff;
  }
  if (-1 < (short)local_78[1]) {
    uVar4 = uVar14 >> 0x10 & 0xffffffff;
  }
  auStack_58[1] = local_78[1];
  auStack_58[2] = local_78[2];
  auStack_58[3] = local_78[3];
  auStack_58[4] = local_78[4];
  local_4e = local_78[5];
  local_4c = local_6c;
  local_4a = local_6a;
  if ((short)local_78[0] < (short)uVar4) {
    __n = 0x10;
  }
  else {
    uVar14 = 1;
    lVar8 = 0;
    uVar17 = uVar17 >> 0x10;
    do {
      sVar16 = (short)uVar17;
      local_38 = lVar8;
      sVar3 = gsm_div((int)(short)uVar4,(int)sVar16);
      sVar7 = -sVar3;
      if ((short)uVar15 < 1) {
        sVar7 = sVar3;
      }
      *(short *)*param_2 = sVar7;
      if (uVar14 == 8) {
        return;
      }
      sVar10 = (short)((int)sVar7 * (int)(short)uVar15 + 0x4000U >> 0xf);
      sVar3 = sVar10;
      if (sVar7 == -0x8000) {
        sVar3 = sVar9;
      }
      if (!bVar18) {
        sVar3 = sVar10;
      }
      local_40 = uVar17 & 0xffff0000 | (ulong)(ushort)(sVar16 + sVar3);
      if (SCARRY2(sVar16,sVar3)) {
        local_40 = (ulong)((int)(short)(sVar16 + sVar3) >> 0xf ^ 0xffff8000);
      }
      if (uVar14 < 8) {
        uVar17 = 1;
        do {
          uVar12 = auStack_58[uVar17];
          sVar16 = (short)((int)(short)uVar12 * (int)sVar7 + 0x4000U >> 0xf);
          sVar3 = sVar16;
          if ((short)uVar12 == -0x8000) {
            sVar3 = sVar9;
          }
          uVar1 = local_78[uVar17 + 1];
          sVar13 = (short)((int)(short)uVar1 * (int)sVar7 + 0x4000U >> 0xf);
          sVar10 = sVar13;
          if ((short)uVar1 == -0x8000) {
            sVar10 = sVar9;
          }
          if (sVar7 != -0x8000) {
            sVar10 = sVar13;
            sVar3 = sVar16;
          }
          uVar11 = uVar12 + sVar10;
          if (SCARRY2(uVar12,sVar10)) {
            uVar11 = (short)(uVar12 + sVar10) >> 0xf ^ 0x8000;
          }
          uVar12 = uVar1 + sVar3;
          if (SCARRY2(uVar1,sVar3)) {
            uVar12 = (short)(uVar1 + sVar3) >> 0xf ^ 0x8000;
          }
          local_78[uVar17] = uVar12;
          auStack_58[uVar17] = uVar11;
          bVar18 = uVar17 < 8 - uVar14;
          uVar17 = uVar17 + 1;
        } while (bVar18);
      }
      uVar14 = uVar14 + 1;
      param_2 = (int (*) [16])(*param_2 + 2);
      lVar8 = local_38 + 1;
      uVar15 = (ulong)local_78[1];
      bVar18 = local_78[1] == 0x8000;
      uVar2 = -(uint)local_78[1];
      if (bVar18) {
        uVar2 = 0x7fff;
      }
      uVar4 = (ulong)uVar2;
      if (-1 < (short)local_78[1]) {
        uVar4 = uVar15;
      }
      uVar17 = local_40;
    } while ((short)uVar4 <= (short)local_40);
    __n = lVar8 * -2 + 0x10;
    if (8 < (uint)uVar14) {
      return;
    }
  }
  memset(param_2,0,__n);
  return;
}



void Transformation_to_Log_Area_Ratios(ushort *param_1)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  
  uVar1 = *param_1;
  uVar3 = 0x7fff;
  if (uVar1 != 0x8000) {
    uVar3 = -uVar1;
  }
  if (-1 < (short)uVar1) {
    uVar3 = uVar1;
  }
  if ((short)uVar3 < 0x5666) {
    uVar3 = (ushort)((uint)(int)(short)uVar3 >> 1);
  }
  else if (uVar3 < 0x799a) {
    uVar3 = uVar3 + 0xd4cd;
  }
  else {
    uVar3 = uVar3 * 4 + 0x6800;
  }
  uVar2 = -uVar3;
  if (-1 < (short)uVar1) {
    uVar2 = uVar3;
  }
  *param_1 = uVar2;
  uVar1 = param_1[1];
  uVar3 = 0x7fff;
  if (uVar1 != 0x8000) {
    uVar3 = -uVar1;
  }
  if (-1 < (short)uVar1) {
    uVar3 = uVar1;
  }
  if ((short)uVar3 < 0x5666) {
    uVar3 = (ushort)((uint)(int)(short)uVar3 >> 1);
  }
  else if (uVar3 < 0x799a) {
    uVar3 = uVar3 + 0xd4cd;
  }
  else {
    uVar3 = uVar3 * 4 + 0x6800;
  }
  uVar2 = -uVar3;
  if (-1 < (short)uVar1) {
    uVar2 = uVar3;
  }
  param_1[1] = uVar2;
  uVar1 = param_1[2];
  uVar3 = 0x7fff;
  if (uVar1 != 0x8000) {
    uVar3 = -uVar1;
  }
  if (-1 < (short)uVar1) {
    uVar3 = uVar1;
  }
  if ((short)uVar3 < 0x5666) {
    uVar3 = (ushort)((uint)(int)(short)uVar3 >> 1);
  }
  else if (uVar3 < 0x799a) {
    uVar3 = uVar3 + 0xd4cd;
  }
  else {
    uVar3 = uVar3 * 4 + 0x6800;
  }
  uVar2 = -uVar3;
  if (-1 < (short)uVar1) {
    uVar2 = uVar3;
  }
  param_1[2] = uVar2;
  uVar1 = param_1[3];
  uVar3 = 0x7fff;
  if (uVar1 != 0x8000) {
    uVar3 = -uVar1;
  }
  if (-1 < (short)uVar1) {
    uVar3 = uVar1;
  }
  if ((short)uVar3 < 0x5666) {
    uVar3 = (ushort)((uint)(int)(short)uVar3 >> 1);
  }
  else if (uVar3 < 0x799a) {
    uVar3 = uVar3 + 0xd4cd;
  }
  else {
    uVar3 = uVar3 * 4 + 0x6800;
  }
  uVar2 = -uVar3;
  if (-1 < (short)uVar1) {
    uVar2 = uVar3;
  }
  param_1[3] = uVar2;
  uVar1 = param_1[4];
  uVar3 = 0x7fff;
  if (uVar1 != 0x8000) {
    uVar3 = -uVar1;
  }
  if (-1 < (short)uVar1) {
    uVar3 = uVar1;
  }
  if ((short)uVar3 < 0x5666) {
    uVar3 = (ushort)((uint)(int)(short)uVar3 >> 1);
  }
  else if (uVar3 < 0x799a) {
    uVar3 = uVar3 + 0xd4cd;
  }
  else {
    uVar3 = uVar3 * 4 + 0x6800;
  }
  uVar2 = -uVar3;
  if (-1 < (short)uVar1) {
    uVar2 = uVar3;
  }
  param_1[4] = uVar2;
  uVar1 = param_1[5];
  uVar3 = 0x7fff;
  if (uVar1 != 0x8000) {
    uVar3 = -uVar1;
  }
  if (-1 < (short)uVar1) {
    uVar3 = uVar1;
  }
  if ((short)uVar3 < 0x5666) {
    uVar3 = (ushort)((uint)(int)(short)uVar3 >> 1);
  }
  else if (uVar3 < 0x799a) {
    uVar3 = uVar3 + 0xd4cd;
  }
  else {
    uVar3 = uVar3 * 4 + 0x6800;
  }
  uVar2 = -uVar3;
  if (-1 < (short)uVar1) {
    uVar2 = uVar3;
  }
  param_1[5] = uVar2;
  uVar1 = param_1[6];
  uVar3 = 0x7fff;
  if (uVar1 != 0x8000) {
    uVar3 = -uVar1;
  }
  if (-1 < (short)uVar1) {
    uVar3 = uVar1;
  }
  if ((short)uVar3 < 0x5666) {
    uVar3 = (ushort)((uint)(int)(short)uVar3 >> 1);
  }
  else if (uVar3 < 0x799a) {
    uVar3 = uVar3 + 0xd4cd;
  }
  else {
    uVar3 = uVar3 * 4 + 0x6800;
  }
  uVar2 = -uVar3;
  if (-1 < (short)uVar1) {
    uVar2 = uVar3;
  }
  param_1[6] = uVar2;
  uVar1 = param_1[7];
  uVar3 = 0x7fff;
  if (uVar1 != 0x8000) {
    uVar3 = -uVar1;
  }
  if (-1 < (short)uVar1) {
    uVar3 = uVar1;
  }
  if ((short)uVar3 < 0x5666) {
    uVar3 = (ushort)((uint)(int)(short)uVar3 >> 1);
  }
  else if (uVar3 < 0x799a) {
    uVar3 = uVar3 + 0xd4cd;
  }
  else {
    uVar3 = uVar3 * 4 + 0x6800;
  }
  uVar2 = -uVar3;
  if (-1 < (short)uVar1) {
    uVar2 = uVar3;
  }
  param_1[7] = uVar2;
  return;
}




void Quantization_and_coding(int (*param_1) [16])

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  int uVar6;
  int uVar7;
  int auVar5 [16];
  ushort uVar8;
  ushort uVar10;
  ushort uVar12;
  ushort uVar14;
  int uVar16;
  int uVar17;
  int auVar9 [16];
  short sVar11;
  short sVar13;
  short sVar15;
  
  auVar9 = *param_1;
                                                  auVar9,0))) >> 0x60,0),
                   __LCPI9_1);
  auVar9 = paddsw(auVar9,__LCPI9_2);
  uVar10 = -(ushort)(0x3fff < sVar11);
  uVar12 = -(ushort)(0x1fff < sVar13);
  uVar14 = -(ushort)(0xfff < sVar15);
  auVar5 = pinsrw(auVar9,uVar1 + 0x100,3);
  auVar5 = pinsrw(auVar5,uVar2 + 0x100,5);
  auVar5 = pinsrw(auVar5,uVar3 + 0x100,6);
  auVar5 = pinsrw(auVar5,uVar4 + 0x100,7);
  auVar5 = psraw(auVar5,9);
  *(ushort *)*param_1 =
  *(ushort *)(*param_1 + 2) =
  *(ushort *)(*param_1 + 4) =
  *(ushort *)(*param_1 + 6) =
       -(ushort)(0x1eff < (short)uVar1) & 0x1f |
       ~-(ushort)(0x1eff < (short)uVar1) &
  *(ushort *)(*param_1 + 8) =
  *(ushort *)(*param_1 + 10) =
       -(ushort)(0xeff < (short)uVar2) & 0xf |
       ~-(ushort)(0xeff < (short)uVar2) &
  *(ushort *)(*param_1 + 0xc) =
       -(ushort)(0x6ff < (short)uVar3) & 7 |
       ~-(ushort)(0x6ff < (short)uVar3) &
  *(ushort *)(*param_1 + 0xe) =
       -(ushort)(0x6ff < (short)uVar4) & 7 |
       ~-(ushort)(0x6ff < (short)uVar4) &
  return;
}



void Gsm_LPC_Analysis(int8 param_1,int8 param_2)

{
  int auStack_58 [72];
  
  Autocorrelation(param_1,auStack_58);
  Reflection_coefficients(auStack_58,param_2);
  Transformation_to_Log_Area_Ratios(param_2);
  Quantization_and_coding(param_2);
  return;
}




int submain(void)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  uint uVar7;
  long lVar8;
  byte bVar9;
  int auVar10 [16];
  int uVar12;
  int uVar13;
  int auVar11 [16];
  int auVar14 [16];
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  short local_1e8;
  short sStack_1e6;
  short sStack_1e4;
  short sStack_1e2;
  short sStack_1e0;
  short sStack_1de;
  short sStack_1dc;
  short sStack_1da;
  int local_1b8;
  int uStack_1b4;
  int uStack_1b0;
  int uStack_1ac;
  int local_1a8 [80];
  int local_158 [8];
  ulong local_150 [39];
  
  uVar7 = gettimeofday((timeval *)local_158,(__timezone_ptr_t)0x0);
  if (uVar7 != 0) {
    printf("Error return from gettimeofday: %d",(ulong)uVar7);
  }
  _DAT_358b480f110f41f2 = (double)(int)local_150[0] * 1e-06 + (double)(long)local_158;
  memcpy(local_158,(void *)0x90249c8d48,0x140);
  Autocorrelation(local_158,local_1a8);
  Reflection_coefficients(local_1a8);
  Transformation_to_Log_Area_Ratios(&local_1b8);
  Quantization_and_coding(&local_1b8);
  iVar15 = 0;
  iVar16 = 0;
  iVar17 = 0;
  iVar18 = 0;
  lVar8 = 0;
  iVar19 = 0;
  iVar20 = 0;
  iVar21 = 0;
  iVar22 = 0;
  do {
    uVar1 = *(ulong *)((long)local_150 + lVar8 * 2);
    uVar2 = *(ulong *)(&DAT_d6f0f66c0760f66 + lVar8 * 2);
    uVar3 = *(ulong *)(&DAT_d6f0f66c0760f6e + lVar8 * 2);
                                                  (short)((uVar2 & 0xffffffffffff0000) >> 0x30) ==
                                                  0xffffffffffff0000) >> 0x20) ==
                                                           -(ushort)((short)uVar2 ==
                                                                    (short)*(ulong *)(local_158 +
                                                                                     lVar8 * 2))))))
                                                  ))) ^ auVar10;
                                                  0))) >> 0x60,0),
                                                  (short)((uVar3 & 0xffffffffffff0000) >> 0x30) ==
                                                  0xffffffffffff0000) >> 0x20) ==
                                                           -(ushort)((short)uVar3 == (short)uVar1)))
                                                  ))))) ^ auVar10;
                                                  0))) >> 0x60,0),
    lVar8 = lVar8 + 8;
  } while (lVar8 != 0xa0);
  uVar7 = gettimeofday((timeval *)local_1a8,(__timezone_ptr_t)0x0);
  if (uVar7 != 0) {
    printf("Error return from gettimeofday: %d",(ulong)uVar7);
  }
void Reflection_coefficients(ulong *param_1,int (*param_2) [16])

{
  ushort uVar1;
  uint uVar2;
  short sVar3;
  ulong uVar4;
  char cVar5;
  byte bVar6;
  short sVar7;
  long lVar8;
  size_t __n;
  short sVar9;
  short sVar10;
  ushort uVar11;
  ushort uVar12;
  short sVar13;
  ulong uVar14;
  ulong uVar15;
  short sVar16;
  ulong uVar17;
  int bVar18;
  ushort local_78 [6];
  int local_6c;
  int local_6a;
  int local_68;
  ushort auStack_58 [5];
  int local_4e;
  int local_4c;
  int local_4a;
  ulong local_40;
  long local_38;
  
  uVar17 = *param_1;
  if (uVar17 == 0) {
    return;
  }
  uVar4 = uVar17;
  if ((long)uVar17 < 0) {
    if (uVar17 < 0xffffffffc0000001) {
      bVar6 = 0;
      goto LAB_00100c81;
    }
    uVar4 = ~uVar17;
  }
  if ((short)(uVar4 >> 0x10) == 0) {
    bVar18 = (uVar4 & 0xff00) == 0;
    if (!bVar18) {
      uVar4 = uVar4 >> 8;
    }
    bVar6 = (byte)uVar4;
    cVar5 = bVar18 * '\b' + '\x0f';
  }
  else {
    bVar6 = (byte)(uVar4 >> 0x18);
    if (bVar6 == 0) {
      cVar5 = '\a';
      bVar6 = (byte)(uVar4 >> 0x10);
    }
    else {
      cVar5 = -1;
    }
  }
  bVar6 = cVar5 + *(char *)((ulong)bVar6 + 0xd349c1010204b60f);
LAB_00100c81:
  uVar17 = uVar17 << (bVar6 & 0x3f);
  uVar14 = param_1[1] << (bVar6 & 0x3f);
  uVar15 = uVar14 >> 0x10;
  local_78[1] = (ushort)(uVar14 >> 0x10);
  local_78[2] = (ushort)((param_1[2] << (bVar6 & 0x3f)) >> 0x10);
  local_78[3] = (ushort)((param_1[3] << (bVar6 & 0x3f)) >> 0x10);
  local_78[4] = (ushort)((param_1[4] << (bVar6 & 0x3f)) >> 0x10);
  local_78[5] = (ushort)((param_1[5] << (bVar6 & 0x3f)) >> 0x10);
  local_6c = (int)((param_1[6] << (bVar6 & 0x3f)) >> 0x10);
  local_6a = (int)((param_1[7] << (bVar6 & 0x3f)) >> 0x10);
  local_78[0] = (ushort)(uVar17 >> 0x10);
  local_68 = (int)((param_1[8] << (bVar6 & 0x3f)) >> 0x10);
  uVar2 = (uint)(uVar14 >> 0x10);
  bVar18 = (uVar2 & 0xffff) == 0x8000;
  uVar4 = (ulong)-uVar2;
  sVar9 = 0x7fff;
  if (bVar18) {
    uVar4 = 0x7fff;
  }
  if (-1 < (short)local_78[1]) {
    uVar4 = uVar14 >> 0x10 & 0xffffffff;
  }
  auStack_58[1] = local_78[1];
  auStack_58[2] = local_78[2];
  auStack_58[3] = local_78[3];
  auStack_58[4] = local_78[4];
  local_4e = local_78[5];
  local_4c = local_6c;
  local_4a = local_6a;
  if ((short)local_78[0] < (short)uVar4) {
    __n = 0x10;
  }
  else {
    uVar14 = 1;
    lVar8 = 0;
    uVar17 = uVar17 >> 0x10;
    do {
      sVar16 = (short)uVar17;
      local_38 = lVar8;
      sVar3 = gsm_div((int)(short)uVar4,(int)sVar16);
      sVar7 = -sVar3;
      if ((short)uVar15 < 1) {
        sVar7 = sVar3;
      }
      *(short *)*param_2 = sVar7;
      if (uVar14 == 8) {
        return;
      }
      sVar10 = (short)((int)sVar7 * (int)(short)uVar15 + 0x4000U >> 0xf);
      sVar3 = sVar10;
      if (sVar7 == -0x8000) {
        sVar3 = sVar9;
      }
      if (!bVar18) {
        sVar3 = sVar10;
      }
      local_40 = uVar17 & 0xffff0000 | (ulong)(ushort)(sVar16 + sVar3);
      if (SCARRY2(sVar16,sVar3)) {
        local_40 = (ulong)((int)(short)(sVar16 + sVar3) >> 0xf ^ 0xffff8000);
      }
      if (uVar14 < 8) {
        uVar17 = 1;
        do {
          uVar12 = auStack_58[uVar17];
          sVar16 = (short)((int)(short)uVar12 * (int)sVar7 + 0x4000U >> 0xf);
          sVar3 = sVar16;
          if ((short)uVar12 == -0x8000) {
            sVar3 = sVar9;
          }
          uVar1 = local_78[uVar17 + 1];
          sVar13 = (short)((int)(short)uVar1 * (int)sVar7 + 0x4000U >> 0xf);
          sVar10 = sVar13;
          if ((short)uVar1 == -0x8000) {
            sVar10 = sVar9;
          }
          if (sVar7 != -0x8000) {
            sVar10 = sVar13;
            sVar3 = sVar16;
          }
          uVar11 = uVar12 + sVar10;
          if (SCARRY2(uVar12,sVar10)) {
            uVar11 = (short)(uVar12 + sVar10) >> 0xf ^ 0x8000;
          }
          uVar12 = uVar1 + sVar3;
          if (SCARRY2(uVar1,sVar3)) {
            uVar12 = (short)(uVar1 + sVar3) >> 0xf ^ 0x8000;
          }
          local_78[uVar17] = uVar12;
          auStack_58[uVar17] = uVar11;
          bVar18 = uVar17 < 8 - uVar14;
          uVar17 = uVar17 + 1;
        } while (bVar18);
      }
      uVar14 = uVar14 + 1;
      param_2 = (int (*) [16])(*param_2 + 2);
      lVar8 = local_38 + 1;
      uVar15 = (ulong)local_78[1];
      bVar18 = local_78[1] == 0x8000;
      uVar2 = -(uint)local_78[1];
      if (bVar18) {
        uVar2 = 0x7fff;
      }
      uVar4 = (ulong)uVar2;
      if (-1 < (short)local_78[1]) {
        uVar4 = uVar15;
      }
      uVar17 = local_40;
    } while ((short)uVar4 <= (short)local_40);
    __n = lVar8 * -2 + 0x10;
    if (8 < (uint)uVar14) {
      return;
    }
  }
  memset(param_2,0,__n);
  return;
}



void Transformation_to_Log_Area_Ratios(ushort *param_1)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  
  uVar1 = *param_1;
  uVar3 = 0x7fff;
  if (uVar1 != 0x8000) {
    uVar3 = -uVar1;
  }
  if (-1 < (short)uVar1) {
    uVar3 = uVar1;
  }
  if ((short)uVar3 < 0x5666) {
    uVar3 = (ushort)((uint)(int)(short)uVar3 >> 1);
  }
  else if (uVar3 < 0x799a) {
    uVar3 = uVar3 + 0xd4cd;
  }
  else {
    uVar3 = uVar3 * 4 + 0x6800;
  }
  uVar2 = -uVar3;
  if (-1 < (short)uVar1) {
    uVar2 = uVar3;
  }
  *param_1 = uVar2;
  uVar1 = param_1[1];
  uVar3 = 0x7fff;
  if (uVar1 != 0x8000) {
    uVar3 = -uVar1;
  }
  if (-1 < (short)uVar1) {
    uVar3 = uVar1;
  }
  if ((short)uVar3 < 0x5666) {
    uVar3 = (ushort)((uint)(int)(short)uVar3 >> 1);
  }
  else if (uVar3 < 0x799a) {
    uVar3 = uVar3 + 0xd4cd;
  }
  else {
    uVar3 = uVar3 * 4 + 0x6800;
  }
  uVar2 = -uVar3;
  if (-1 < (short)uVar1) {
    uVar2 = uVar3;
  }
  param_1[1] = uVar2;
  uVar1 = param_1[2];
  uVar3 = 0x7fff;
  if (uVar1 != 0x8000) {
    uVar3 = -uVar1;
  }
  if (-1 < (short)uVar1) {
    uVar3 = uVar1;
  }
  if ((short)uVar3 < 0x5666) {
    uVar3 = (ushort)((uint)(int)(short)uVar3 >> 1);
  }
  else if (uVar3 < 0x799a) {
    uVar3 = uVar3 + 0xd4cd;
  }
  else {
    uVar3 = uVar3 * 4 + 0x6800;
  }
  uVar2 = -uVar3;
  if (-1 < (short)uVar1) {
    uVar2 = uVar3;
  }
  param_1[2] = uVar2;
  uVar1 = param_1[3];
  uVar3 = 0x7fff;
  if (uVar1 != 0x8000) {
    uVar3 = -uVar1;
  }
  if (-1 < (short)uVar1) {
    uVar3 = uVar1;
  }
  if ((short)uVar3 < 0x5666) {
    uVar3 = (ushort)((uint)(int)(short)uVar3 >> 1);
  }
  else if (uVar3 < 0x799a) {
    uVar3 = uVar3 + 0xd4cd;
  }
  else {
    uVar3 = uVar3 * 4 + 0x6800;
  }
  uVar2 = -uVar3;
  if (-1 < (short)uVar1) {
    uVar2 = uVar3;
  }
  param_1[3] = uVar2;
  uVar1 = param_1[4];
  uVar3 = 0x7fff;
  if (uVar1 != 0x8000) {
    uVar3 = -uVar1;
  }
  if (-1 < (short)uVar1) {
    uVar3 = uVar1;
  }
  if ((short)uVar3 < 0x5666) {
    uVar3 = (ushort)((uint)(int)(short)uVar3 >> 1);
  }
  else if (uVar3 < 0x799a) {
    uVar3 = uVar3 + 0xd4cd;
  }
  else {
    uVar3 = uVar3 * 4 + 0x6800;
  }
  uVar2 = -uVar3;
  if (-1 < (short)uVar1) {
    uVar2 = uVar3;
  }
  param_1[4] = uVar2;
  uVar1 = param_1[5];
  uVar3 = 0x7fff;
  if (uVar1 != 0x8000) {
    uVar3 = -uVar1;
  }
  if (-1 < (short)uVar1) {
    uVar3 = uVar1;
  }
  if ((short)uVar3 < 0x5666) {
    uVar3 = (ushort)((uint)(int)(short)uVar3 >> 1);
  }
  else if (uVar3 < 0x799a) {
    uVar3 = uVar3 + 0xd4cd;
  }
  else {
    uVar3 = uVar3 * 4 + 0x6800;
  }
  uVar2 = -uVar3;
  if (-1 < (short)uVar1) {
    uVar2 = uVar3;
  }
  param_1[5] = uVar2;
  uVar1 = param_1[6];
  uVar3 = 0x7fff;
  if (uVar1 != 0x8000) {
    uVar3 = -uVar1;
  }
  if (-1 < (short)uVar1) {
    uVar3 = uVar1;
  }
  if ((short)uVar3 < 0x5666) {
    uVar3 = (ushort)((uint)(int)(short)uVar3 >> 1);
  }
  else if (uVar3 < 0x799a) {
    uVar3 = uVar3 + 0xd4cd;
  }
  else {
    uVar3 = uVar3 * 4 + 0x6800;
  }
  uVar2 = -uVar3;
  if (-1 < (short)uVar1) {
    uVar2 = uVar3;
  }
  param_1[6] = uVar2;
  uVar1 = param_1[7];
  uVar3 = 0x7fff;
  if (uVar1 != 0x8000) {
    uVar3 = -uVar1;
  }
  if (-1 < (short)uVar1) {
    uVar3 = uVar1;
  }
  if ((short)uVar3 < 0x5666) {
    uVar3 = (ushort)((uint)(int)(short)uVar3 >> 1);
  }
  else if (uVar3 < 0x799a) {
    uVar3 = uVar3 + 0xd4cd;
  }
  else {
    uVar3 = uVar3 * 4 + 0x6800;
  }
  uVar2 = -uVar3;
  if (-1 < (short)uVar1) {
    uVar2 = uVar3;
  }
  param_1[7] = uVar2;
  return;
}




void Quantization_and_coding(int (*param_1) [16])

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  int uVar6;
  int uVar7;
  int auVar5 [16];
  ushort uVar8;
  ushort uVar10;
  ushort uVar12;
  ushort uVar14;
  int uVar16;
  int uVar17;
  int auVar9 [16];
  short sVar11;
  short sVar13;
  short sVar15;
  
  auVar9 = *param_1;
                                                  auVar9,0))) >> 0x60,0),
                   __LCPI9_1);
  auVar9 = paddsw(auVar9,__LCPI9_2);
  uVar10 = -(ushort)(0x3fff < sVar11);
  uVar12 = -(ushort)(0x1fff < sVar13);
  uVar14 = -(ushort)(0xfff < sVar15);
  auVar5 = pinsrw(auVar9,uVar1 + 0x100,3);
  auVar5 = pinsrw(auVar5,uVar2 + 0x100,5);
  auVar5 = pinsrw(auVar5,uVar3 + 0x100,6);
  auVar5 = pinsrw(auVar5,uVar4 + 0x100,7);
  auVar5 = psraw(auVar5,9);
  *(ushort *)*param_1 =
  *(ushort *)(*param_1 + 2) =
  *(ushort *)(*param_1 + 4) =
  *(ushort *)(*param_1 + 6) =
       -(ushort)(0x1eff < (short)uVar1) & 0x1f |
       ~-(ushort)(0x1eff < (short)uVar1) &
  *(ushort *)(*param_1 + 8) =
  *(ushort *)(*param_1 + 10) =
       -(ushort)(0xeff < (short)uVar2) & 0xf |
       ~-(ushort)(0xeff < (short)uVar2) &
  *(ushort *)(*param_1 + 0xc) =
       -(ushort)(0x6ff < (short)uVar3) & 7 |
       ~-(ushort)(0x6ff < (short)uVar3) &
  *(ushort *)(*param_1 + 0xe) =
       -(ushort)(0x6ff < (short)uVar4) & 7 |
       ~-(ushort)(0x6ff < (short)uVar4) &
  return;
}



void Gsm_LPC_Analysis(int8 param_1,int8 param_2)

{
  int auStack_58 [72];
  
  Autocorrelation(param_1,auStack_58);
  Reflection_coefficients(auStack_58,param_2);
  Transformation_to_Log_Area_Ratios(param_2);
  Quantization_and_coding(param_2);
  return;
}




int submain(void)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  uint uVar7;
  long lVar8;
  byte bVar9;
  int auVar10 [16];
  int uVar12;
  int uVar13;
  int auVar11 [16];
  int auVar14 [16];
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  short local_1e8;
  short sStack_1e6;
  short sStack_1e4;
  short sStack_1e2;
  short sStack_1e0;
  short sStack_1de;
  short sStack_1dc;
  short sStack_1da;
  int local_1b8;
  int uStack_1b4;
  int uStack_1b0;
  int uStack_1ac;
  int local_1a8 [80];
  int local_158 [8];
  ulong local_150 [39];
  
  uVar7 = gettimeofday((timeval *)local_158,(__timezone_ptr_t)0x0);
  if (uVar7 != 0) {
    printf("Error return from gettimeofday: %d",(ulong)uVar7);
  }
  _DAT_358b480f110f41f2 = (double)(int)local_150[0] * 1e-06 + (double)(long)local_158;
  memcpy(local_158,(void *)0x90249c8d48,0x140);
  Autocorrelation(local_158,local_1a8);
  Reflection_coefficients(local_1a8);
  Transformation_to_Log_Area_Ratios(&local_1b8);
  Quantization_and_coding(&local_1b8);
  iVar15 = 0;
  iVar16 = 0;
  iVar17 = 0;
  iVar18 = 0;
  lVar8 = 0;
  iVar19 = 0;
  iVar20 = 0;
  iVar21 = 0;
  iVar22 = 0;
  do {
    uVar1 = *(ulong *)((long)local_150 + lVar8 * 2);
    uVar2 = *(ulong *)(&DAT_d6f0f66c0760f66 + lVar8 * 2);
    uVar3 = *(ulong *)(&DAT_d6f0f66c0760f6e + lVar8 * 2);
                                                  (short)((uVar2 & 0xffffffffffff0000) >> 0x30) ==
                                                  0xffffffffffff0000) >> 0x20) ==
                                                           -(ushort)((short)uVar2 ==
                                                                    (short)*(ulong *)(local_158 +
                                                                                     lVar8 * 2))))))
                                                  ))) ^ auVar10;
                                                  0))) >> 0x60,0),
                                                  (short)((uVar3 & 0xffffffffffff0000) >> 0x30) ==
                                                  0xffffffffffff0000) >> 0x20) ==
                                                           -(ushort)((short)uVar3 == (short)uVar1)))
                                                  ))))) ^ auVar10;
                                                  0))) >> 0x60,0),
    lVar8 = lVar8 + 8;
  } while (lVar8 != 0xa0);
  uVar7 = gettimeofday((timeval *)local_1a8,(__timezone_ptr_t)0x0);
  if (uVar7 != 0) {
    printf("Error return from gettimeofday: %d",(ulong)uVar7);
  }
void Transformation_to_Log_Area_Ratios(ushort *param_1)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  
  uVar1 = *param_1;
  uVar3 = 0x7fff;
  if (uVar1 != 0x8000) {
    uVar3 = -uVar1;
  }
  if (-1 < (short)uVar1) {
    uVar3 = uVar1;
  }
  if ((short)uVar3 < 0x5666) {
    uVar3 = (ushort)((uint)(int)(short)uVar3 >> 1);
  }
  else if (uVar3 < 0x799a) {
    uVar3 = uVar3 + 0xd4cd;
  }
  else {
    uVar3 = uVar3 * 4 + 0x6800;
  }
  uVar2 = -uVar3;
  if (-1 < (short)uVar1) {
    uVar2 = uVar3;
  }
  *param_1 = uVar2;
  uVar1 = param_1[1];
  uVar3 = 0x7fff;
  if (uVar1 != 0x8000) {
    uVar3 = -uVar1;
  }
  if (-1 < (short)uVar1) {
    uVar3 = uVar1;
  }
  if ((short)uVar3 < 0x5666) {
    uVar3 = (ushort)((uint)(int)(short)uVar3 >> 1);
  }
  else if (uVar3 < 0x799a) {
    uVar3 = uVar3 + 0xd4cd;
  }
  else {
    uVar3 = uVar3 * 4 + 0x6800;
  }
  uVar2 = -uVar3;
  if (-1 < (short)uVar1) {
    uVar2 = uVar3;
  }
  param_1[1] = uVar2;
  uVar1 = param_1[2];
  uVar3 = 0x7fff;
  if (uVar1 != 0x8000) {
    uVar3 = -uVar1;
  }
  if (-1 < (short)uVar1) {
    uVar3 = uVar1;
  }
  if ((short)uVar3 < 0x5666) {
    uVar3 = (ushort)((uint)(int)(short)uVar3 >> 1);
  }
  else if (uVar3 < 0x799a) {
    uVar3 = uVar3 + 0xd4cd;
  }
  else {
    uVar3 = uVar3 * 4 + 0x6800;
  }
  uVar2 = -uVar3;
  if (-1 < (short)uVar1) {
    uVar2 = uVar3;
  }
  param_1[2] = uVar2;
  uVar1 = param_1[3];
  uVar3 = 0x7fff;
  if (uVar1 != 0x8000) {
    uVar3 = -uVar1;
  }
  if (-1 < (short)uVar1) {
    uVar3 = uVar1;
  }
  if ((short)uVar3 < 0x5666) {
    uVar3 = (ushort)((uint)(int)(short)uVar3 >> 1);
  }
  else if (uVar3 < 0x799a) {
    uVar3 = uVar3 + 0xd4cd;
  }
  else {
    uVar3 = uVar3 * 4 + 0x6800;
  }
  uVar2 = -uVar3;
  if (-1 < (short)uVar1) {
    uVar2 = uVar3;
  }
  param_1[3] = uVar2;
  uVar1 = param_1[4];
  uVar3 = 0x7fff;
  if (uVar1 != 0x8000) {
    uVar3 = -uVar1;
  }
  if (-1 < (short)uVar1) {
    uVar3 = uVar1;
  }
  if ((short)uVar3 < 0x5666) {
    uVar3 = (ushort)((uint)(int)(short)uVar3 >> 1);
  }
  else if (uVar3 < 0x799a) {
    uVar3 = uVar3 + 0xd4cd;
  }
  else {
    uVar3 = uVar3 * 4 + 0x6800;
  }
  uVar2 = -uVar3;
  if (-1 < (short)uVar1) {
    uVar2 = uVar3;
  }
  param_1[4] = uVar2;
  uVar1 = param_1[5];
  uVar3 = 0x7fff;
  if (uVar1 != 0x8000) {
    uVar3 = -uVar1;
  }
  if (-1 < (short)uVar1) {
    uVar3 = uVar1;
  }
  if ((short)uVar3 < 0x5666) {
    uVar3 = (ushort)((uint)(int)(short)uVar3 >> 1);
  }
  else if (uVar3 < 0x799a) {
    uVar3 = uVar3 + 0xd4cd;
  }
  else {
    uVar3 = uVar3 * 4 + 0x6800;
  }
  uVar2 = -uVar3;
  if (-1 < (short)uVar1) {
    uVar2 = uVar3;
  }
  param_1[5] = uVar2;
  uVar1 = param_1[6];
  uVar3 = 0x7fff;
  if (uVar1 != 0x8000) {
    uVar3 = -uVar1;
  }
  if (-1 < (short)uVar1) {
    uVar3 = uVar1;
  }
  if ((short)uVar3 < 0x5666) {
    uVar3 = (ushort)((uint)(int)(short)uVar3 >> 1);
  }
  else if (uVar3 < 0x799a) {
    uVar3 = uVar3 + 0xd4cd;
  }
  else {
    uVar3 = uVar3 * 4 + 0x6800;
  }
  uVar2 = -uVar3;
  if (-1 < (short)uVar1) {
    uVar2 = uVar3;
  }
  param_1[6] = uVar2;
  uVar1 = param_1[7];
  uVar3 = 0x7fff;
  if (uVar1 != 0x8000) {
    uVar3 = -uVar1;
  }
  if (-1 < (short)uVar1) {
    uVar3 = uVar1;
  }
  if ((short)uVar3 < 0x5666) {
    uVar3 = (ushort)((uint)(int)(short)uVar3 >> 1);
  }
  else if (uVar3 < 0x799a) {
    uVar3 = uVar3 + 0xd4cd;
  }
  else {
    uVar3 = uVar3 * 4 + 0x6800;
  }
  uVar2 = -uVar3;
  if (-1 < (short)uVar1) {
    uVar2 = uVar3;
  }
  param_1[7] = uVar2;
  return;
}




void Quantization_and_coding(int (*param_1) [16])

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  int uVar6;
  int uVar7;
  int auVar5 [16];
  ushort uVar8;
  ushort uVar10;
  ushort uVar12;
  ushort uVar14;
  int uVar16;
  int uVar17;
  int auVar9 [16];
  short sVar11;
  short sVar13;
  short sVar15;
  
  auVar9 = *param_1;
                                                  auVar9,0))) >> 0x60,0),
                   __LCPI9_1);
  auVar9 = paddsw(auVar9,__LCPI9_2);
  uVar10 = -(ushort)(0x3fff < sVar11);
  uVar12 = -(ushort)(0x1fff < sVar13);
  uVar14 = -(ushort)(0xfff < sVar15);
  auVar5 = pinsrw(auVar9,uVar1 + 0x100,3);
  auVar5 = pinsrw(auVar5,uVar2 + 0x100,5);
  auVar5 = pinsrw(auVar5,uVar3 + 0x100,6);
  auVar5 = pinsrw(auVar5,uVar4 + 0x100,7);
  auVar5 = psraw(auVar5,9);
  *(ushort *)*param_1 =
  *(ushort *)(*param_1 + 2) =
  *(ushort *)(*param_1 + 4) =
  *(ushort *)(*param_1 + 6) =
       -(ushort)(0x1eff < (short)uVar1) & 0x1f |
       ~-(ushort)(0x1eff < (short)uVar1) &
  *(ushort *)(*param_1 + 8) =
  *(ushort *)(*param_1 + 10) =
       -(ushort)(0xeff < (short)uVar2) & 0xf |
       ~-(ushort)(0xeff < (short)uVar2) &
  *(ushort *)(*param_1 + 0xc) =
       -(ushort)(0x6ff < (short)uVar3) & 7 |
       ~-(ushort)(0x6ff < (short)uVar3) &
  *(ushort *)(*param_1 + 0xe) =
       -(ushort)(0x6ff < (short)uVar4) & 7 |
       ~-(ushort)(0x6ff < (short)uVar4) &
  return;
}



void Gsm_LPC_Analysis(int8 param_1,int8 param_2)

{
  int auStack_58 [72];
  
  Autocorrelation(param_1,auStack_58);
  Reflection_coefficients(auStack_58,param_2);
  Transformation_to_Log_Area_Ratios(param_2);
  Quantization_and_coding(param_2);
  return;
}




int submain(void)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  uint uVar7;
  long lVar8;
  byte bVar9;
  int auVar10 [16];
  int uVar12;
  int uVar13;
  int auVar11 [16];
  int auVar14 [16];
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  short local_1e8;
  short sStack_1e6;
  short sStack_1e4;
  short sStack_1e2;
  short sStack_1e0;
  short sStack_1de;
  short sStack_1dc;
  short sStack_1da;
  int local_1b8;
  int uStack_1b4;
  int uStack_1b0;
  int uStack_1ac;
  int local_1a8 [80];
  int local_158 [8];
  ulong local_150 [39];
  
  uVar7 = gettimeofday((timeval *)local_158,(__timezone_ptr_t)0x0);
  if (uVar7 != 0) {
    printf("Error return from gettimeofday: %d",(ulong)uVar7);
  }
  _DAT_358b480f110f41f2 = (double)(int)local_150[0] * 1e-06 + (double)(long)local_158;
  memcpy(local_158,(void *)0x90249c8d48,0x140);
  Autocorrelation(local_158,local_1a8);
  Reflection_coefficients(local_1a8);
  Transformation_to_Log_Area_Ratios(&local_1b8);
  Quantization_and_coding(&local_1b8);
  iVar15 = 0;
  iVar16 = 0;
  iVar17 = 0;
  iVar18 = 0;
  lVar8 = 0;
  iVar19 = 0;
  iVar20 = 0;
  iVar21 = 0;
  iVar22 = 0;
  do {
    uVar1 = *(ulong *)((long)local_150 + lVar8 * 2);
    uVar2 = *(ulong *)(&DAT_d6f0f66c0760f66 + lVar8 * 2);
    uVar3 = *(ulong *)(&DAT_d6f0f66c0760f6e + lVar8 * 2);
                                                  (short)((uVar2 & 0xffffffffffff0000) >> 0x30) ==
                                                  0xffffffffffff0000) >> 0x20) ==
                                                           -(ushort)((short)uVar2 ==
                                                                    (short)*(ulong *)(local_158 +
                                                                                     lVar8 * 2))))))
                                                  ))) ^ auVar10;
                                                  0))) >> 0x60,0),
                                                  (short)((uVar3 & 0xffffffffffff0000) >> 0x30) ==
                                                  0xffffffffffff0000) >> 0x20) ==
                                                           -(ushort)((short)uVar3 == (short)uVar1)))
                                                  ))))) ^ auVar10;
                                                  0))) >> 0x60,0),
    lVar8 = lVar8 + 8;
  } while (lVar8 != 0xa0);
  uVar7 = gettimeofday((timeval *)local_1a8,(__timezone_ptr_t)0x0);
  if (uVar7 != 0) {
    printf("Error return from gettimeofday: %d",(ulong)uVar7);
  }
void Quantization_and_coding(int (*param_1) [16])

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  int uVar6;
  int uVar7;
  int auVar5 [16];
  ushort uVar8;
  ushort uVar10;
  ushort uVar12;
  ushort uVar14;
  int uVar16;
  int uVar17;
  int auVar9 [16];
  short sVar11;
  short sVar13;
  short sVar15;
  
  auVar9 = *param_1;
                                                  auVar9,0))) >> 0x60,0),
                   __LCPI9_1);
  auVar9 = paddsw(auVar9,__LCPI9_2);
  uVar10 = -(ushort)(0x3fff < sVar11);
  uVar12 = -(ushort)(0x1fff < sVar13);
  uVar14 = -(ushort)(0xfff < sVar15);
  auVar5 = pinsrw(auVar9,uVar1 + 0x100,3);
  auVar5 = pinsrw(auVar5,uVar2 + 0x100,5);
  auVar5 = pinsrw(auVar5,uVar3 + 0x100,6);
  auVar5 = pinsrw(auVar5,uVar4 + 0x100,7);
  auVar5 = psraw(auVar5,9);
  *(ushort *)*param_1 =
  *(ushort *)(*param_1 + 2) =
  *(ushort *)(*param_1 + 4) =
  *(ushort *)(*param_1 + 6) =
       -(ushort)(0x1eff < (short)uVar1) & 0x1f |
       ~-(ushort)(0x1eff < (short)uVar1) &
  *(ushort *)(*param_1 + 8) =
  *(ushort *)(*param_1 + 10) =
       -(ushort)(0xeff < (short)uVar2) & 0xf |
       ~-(ushort)(0xeff < (short)uVar2) &
  *(ushort *)(*param_1 + 0xc) =
       -(ushort)(0x6ff < (short)uVar3) & 7 |
       ~-(ushort)(0x6ff < (short)uVar3) &
  *(ushort *)(*param_1 + 0xe) =
       -(ushort)(0x6ff < (short)uVar4) & 7 |
       ~-(ushort)(0x6ff < (short)uVar4) &
  return;
}



void Gsm_LPC_Analysis(int8 param_1,int8 param_2)

{
  int auStack_58 [72];
  
  Autocorrelation(param_1,auStack_58);
  Reflection_coefficients(auStack_58,param_2);
  Transformation_to_Log_Area_Ratios(param_2);
  Quantization_and_coding(param_2);
  return;
}




int submain(void)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  uint uVar7;
  long lVar8;
  byte bVar9;
  int auVar10 [16];
  int uVar12;
  int uVar13;
  int auVar11 [16];
  int auVar14 [16];
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  short local_1e8;
  short sStack_1e6;
  short sStack_1e4;
  short sStack_1e2;
  short sStack_1e0;
  short sStack_1de;
  short sStack_1dc;
  short sStack_1da;
  int local_1b8;
  int uStack_1b4;
  int uStack_1b0;
  int uStack_1ac;
  int local_1a8 [80];
  int local_158 [8];
  ulong local_150 [39];
  
  uVar7 = gettimeofday((timeval *)local_158,(__timezone_ptr_t)0x0);
  if (uVar7 != 0) {
    printf("Error return from gettimeofday: %d",(ulong)uVar7);
  }
  _DAT_358b480f110f41f2 = (double)(int)local_150[0] * 1e-06 + (double)(long)local_158;
  memcpy(local_158,(void *)0x90249c8d48,0x140);
  Autocorrelation(local_158,local_1a8);
  Reflection_coefficients(local_1a8);
  Transformation_to_Log_Area_Ratios(&local_1b8);
  Quantization_and_coding(&local_1b8);
  iVar15 = 0;
  iVar16 = 0;
  iVar17 = 0;
  iVar18 = 0;
  lVar8 = 0;
  iVar19 = 0;
  iVar20 = 0;
  iVar21 = 0;
  iVar22 = 0;
  do {
    uVar1 = *(ulong *)((long)local_150 + lVar8 * 2);
    uVar2 = *(ulong *)(&DAT_d6f0f66c0760f66 + lVar8 * 2);
    uVar3 = *(ulong *)(&DAT_d6f0f66c0760f6e + lVar8 * 2);
                                                  (short)((uVar2 & 0xffffffffffff0000) >> 0x30) ==
                                                  0xffffffffffff0000) >> 0x20) ==
                                                           -(ushort)((short)uVar2 ==
                                                                    (short)*(ulong *)(local_158 +
                                                                                     lVar8 * 2))))))
                                                  ))) ^ auVar10;
                                                  0))) >> 0x60,0),
                                                  (short)((uVar3 & 0xffffffffffff0000) >> 0x30) ==
                                                  0xffffffffffff0000) >> 0x20) ==
                                                           -(ushort)((short)uVar3 == (short)uVar1)))
                                                  ))))) ^ auVar10;
                                                  0))) >> 0x60,0),
    lVar8 = lVar8 + 8;
  } while (lVar8 != 0xa0);
  uVar7 = gettimeofday((timeval *)local_1a8,(__timezone_ptr_t)0x0);
  if (uVar7 != 0) {
    printf("Error return from gettimeofday: %d",(ulong)uVar7);
  }
void Gsm_LPC_Analysis(int8 param_1,int8 param_2)

{
  int auStack_58 [72];
  
  Autocorrelation(param_1,auStack_58);
  Reflection_coefficients(auStack_58,param_2);
  Transformation_to_Log_Area_Ratios(param_2);
  Quantization_and_coding(param_2);
  return;
}




int submain(void)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  uint uVar7;
  long lVar8;
  byte bVar9;
  int auVar10 [16];
  int uVar12;
  int uVar13;
  int auVar11 [16];
  int auVar14 [16];
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  short local_1e8;
  short sStack_1e6;
  short sStack_1e4;
  short sStack_1e2;
  short sStack_1e0;
  short sStack_1de;
  short sStack_1dc;
  short sStack_1da;
  int local_1b8;
  int uStack_1b4;
  int uStack_1b0;
  int uStack_1ac;
  int local_1a8 [80];
  int local_158 [8];
  ulong local_150 [39];
  
  uVar7 = gettimeofday((timeval *)local_158,(__timezone_ptr_t)0x0);
  if (uVar7 != 0) {
    printf("Error return from gettimeofday: %d",(ulong)uVar7);
  }
  _DAT_358b480f110f41f2 = (double)(int)local_150[0] * 1e-06 + (double)(long)local_158;
  memcpy(local_158,(void *)0x90249c8d48,0x140);
  Autocorrelation(local_158,local_1a8);
  Reflection_coefficients(local_1a8);
  Transformation_to_Log_Area_Ratios(&local_1b8);
  Quantization_and_coding(&local_1b8);
  iVar15 = 0;
  iVar16 = 0;
  iVar17 = 0;
  iVar18 = 0;
  lVar8 = 0;
  iVar19 = 0;
  iVar20 = 0;
  iVar21 = 0;
  iVar22 = 0;
  do {
    uVar1 = *(ulong *)((long)local_150 + lVar8 * 2);
    uVar2 = *(ulong *)(&DAT_d6f0f66c0760f66 + lVar8 * 2);
    uVar3 = *(ulong *)(&DAT_d6f0f66c0760f6e + lVar8 * 2);
                                                  (short)((uVar2 & 0xffffffffffff0000) >> 0x30) ==
                                                  0xffffffffffff0000) >> 0x20) ==
                                                           -(ushort)((short)uVar2 ==
                                                                    (short)*(ulong *)(local_158 +
                                                                                     lVar8 * 2))))))
                                                  ))) ^ auVar10;
                                                  0))) >> 0x60,0),
                                                  (short)((uVar3 & 0xffffffffffff0000) >> 0x30) ==
                                                  0xffffffffffff0000) >> 0x20) ==
                                                           -(ushort)((short)uVar3 == (short)uVar1)))
                                                  ))))) ^ auVar10;
                                                  0))) >> 0x60,0),
    lVar8 = lVar8 + 8;
  } while (lVar8 != 0xa0);
  uVar7 = gettimeofday((timeval *)local_1a8,(__timezone_ptr_t)0x0);
  if (uVar7 != 0) {
    printf("Error return from gettimeofday: %d",(ulong)uVar7);
  }
