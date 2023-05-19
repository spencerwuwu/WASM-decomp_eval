#include "aes.h"



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void encrypt(char *__block,int __edflag)

{
  bool bVar1;
  uint uVar2;
  long lVar3;
  undefined4 uVar4;
  long lVar5;
  ulong uVar6;
  int in_EDX;
  undefined4 uVar7;
  undefined4 in_register_00000034;
  long lVar8;
  int iVar9;
  int iVar10;
  
  KeySchedule(in_EDX,CONCAT44(in_register_00000034,__edflag));
  lVar3 = 4;
  if (in_EDX < 0x2eec0) {
    uVar4 = 4;
    if (in_EDX < 0x1f500) {
      uVar7 = 0;
      if (in_EDX != 0x1f480) {
        if (in_EDX == 0x1f4c0) goto LAB_001000ac;
        goto LAB_00100126;
      }
    }
    else if (in_EDX == 0x1f500) {
LAB_001000a5:
      uVar4 = 8;
LAB_001000c9:
      uVar7 = 4;
    }
    else {
      if (in_EDX != 0x2ee80) goto LAB_00100126;
      uVar7 = 2;
    }
LAB_001000ce:
    _DAT_158b481689 = uVar7;
    _DAT_2eefffd810a89 = uVar4;
    if (in_EDX < 0x2ef00) {
      if (in_EDX != 0x1f4c0) {
        if (in_EDX == 0x1f500) goto LAB_00100121;
        if (in_EDX != 0x2eec0) goto LAB_00100126;
      }
LAB_0010011a:
      lVar3 = 6;
    }
    else if ((in_EDX == 0x2ef00) || (in_EDX == 0x3e900)) {
LAB_00100121:
      lVar3 = 8;
    }
    else if (in_EDX == 0x3e8c0) goto LAB_0010011a;
  }
  else if (in_EDX < 0x3e880) {
    if (in_EDX == 0x2eec0) {
LAB_001000ac:
      uVar4 = 6;
      uVar7 = 2;
      goto LAB_001000ce;
    }
    if (in_EDX == 0x2ef00) goto LAB_001000a5;
  }
  else {
    if (in_EDX == 0x3e880) {
      uVar7 = 4;
      uVar4 = 4;
      goto LAB_001000ce;
    }
    if (in_EDX == 0x3e8c0) {
      uVar4 = 6;
      goto LAB_001000c9;
    }
    if (in_EDX == 0x3e900) goto LAB_001000a5;
  }
LAB_00100126:
  lVar5 = 0;
  do {
    lVar8 = lVar5 * 0x10;
    *(uint *)(__block + lVar8) =
         *(uint *)(__block + lVar8) ^ *(uint *)(&DAT_ce89488f148b4190 + lVar5 * 4);
    *(uint *)(__block + lVar8 + 4) =
         *(uint *)(__block + lVar8 + 4) ^ *(uint *)(&DAT_ce89488f148b4370 + lVar5 * 4);
    *(uint *)(__block + lVar8 + 8) =
         *(uint *)(__block + lVar8 + 8) ^ *(uint *)(&DAT_ce89488f148b4550 + lVar5 * 4);
    *(uint *)(__block + lVar8 + 0xc) =
         *(uint *)(__block + lVar8 + 0xc) ^ *(uint *)(&DAT_ce89488f148b4730 + lVar5 * 4);
    lVar5 = lVar5 + 1;
  } while (lVar5 != lVar3);
  iVar10 = 1;
  if (_DAT_834100000001be41 < -8) {
    iVar9 = 1;
  }
  else {
    do {
      ByteSub_ShiftRow(__block,_DAT_f2e666666666666);
      MixColumn_AddRoundKey(__block,_DAT_f2e666666666666,iVar10);
      iVar9 = iVar10 + 1;
      bVar1 = iVar10 < _DAT_834100000001be41 + 9;
      iVar10 = iVar9;
    } while (bVar1);
  }
  ByteSub_ShiftRow(__block,_DAT_4a3e8df8948308b);
  uVar2 = 4;
  if (in_EDX < 0x2ef00) {
    if (in_EDX != 0x1f4c0) {
      if (in_EDX == 0x1f500) goto LAB_00100227;
      if (in_EDX != 0x2eec0) goto LAB_0010022c;
    }
  }
  else {
    if ((in_EDX == 0x2ef00) || (in_EDX == 0x3e900)) {
LAB_00100227:
      uVar2 = 8;
      goto LAB_0010022c;
    }
    if (in_EDX != 0x3e8c0) goto LAB_0010022c;
  }
  uVar2 = 6;
LAB_0010022c:
  uVar6 = 0;
  do {
    lVar3 = uVar6 + iVar9 * uVar2;
    lVar5 = uVar6 * 0x10;
    *(uint *)(__block + lVar5) =
         *(uint *)(__block + lVar5) ^ *(uint *)(&DAT_ce89488f148b4190 + lVar3 * 4);
    *(uint *)(__block + lVar5 + 4) =
         *(uint *)(__block + lVar5 + 4) ^ *(uint *)(&DAT_ce89488f148b4370 + lVar3 * 4);
    *(uint *)(__block + lVar5 + 8) =
         *(uint *)(__block + lVar5 + 8) ^ *(uint *)(&DAT_ce89488f148b4550 + lVar3 * 4);
    *(uint *)(__block + lVar5 + 0xc) =
         *(uint *)(__block + lVar5 + 0xc) ^ *(uint *)(&DAT_ce89488f148b4730 + lVar3 * 4);
    uVar6 = uVar6 + 1;
  } while (uVar6 != uVar2);
  lVar3 = 0;
  do {
    _DAT_60358d48d231088b =
         _DAT_60358d48d231088b + (uint)(*(int *)(__block + lVar3 * 4) != (&DAT_001020f0)[lVar3]);
    lVar3 = lVar3 + 1;
  } while (lVar3 != 0x10);
  return;
}



undefined8 KeySchedule(int param_1,long param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  byte bVar5;
  ulong uVar6;
  undefined4 *puVar7;
  long lVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  uint local_38 [6];
  
  lVar8 = 4;
  if (param_1 < 0x2eec0) {
    uVar9 = 4;
    if (param_1 < 0x1f500) {
      if (param_1 == 0x1f480) {
        lVar12 = 0xb;
      }
      else {
        if (param_1 != 0x1f4c0) {
          return 0xffffffff;
        }
        lVar12 = 0xd;
        lVar8 = 6;
      }
    }
    else {
      if (param_1 != 0x1f500) {
        if (param_1 != 0x2ee80) {
          return 0xffffffff;
        }
        lVar12 = 0xd;
        goto LAB_0010039e;
      }
      lVar12 = 0xf;
      lVar8 = 8;
    }
  }
  else {
    if (0x3e87f < param_1) {
      if (param_1 != 0x3e880) {
        if (param_1 == 0x3e8c0) {
          lVar8 = 6;
        }
        else {
          if (param_1 != 0x3e900) {
            return 0xffffffff;
          }
          lVar8 = 8;
        }
      }
      lVar12 = 0xf;
      uVar9 = 8;
      bVar5 = 1;
      goto LAB_001003b2;
    }
    if (param_1 == 0x2eec0) {
      lVar12 = 0xd;
      lVar8 = 6;
    }
    else {
      if (param_1 != 0x2ef00) {
        return 0xffffffff;
      }
      lVar12 = 0xf;
      lVar8 = 8;
    }
LAB_0010039e:
    uVar9 = 6;
  }
  bVar5 = 0;
LAB_001003b2:
  uVar13 = (ulong)uVar9;
  uVar6 = 0;
  do {
    lVar14 = 0;
    do {
      *(undefined4 *)(&DAT_841f0f2e666666 + uVar6 * 4 + lVar14 * 0x1e0) =
           *(undefined4 *)(param_2 + (lVar14 + uVar6 * 4) * 4);
      lVar14 = lVar14 + 1;
    } while (lVar14 != 4);
    uVar6 = uVar6 + 1;
  } while (uVar6 != uVar13);
  uVar6 = uVar13;
  do {
    iVar10 = (int)((uVar6 & 0xffffffff) % uVar13);
    if (iVar10 == 0) {
      iVar1 = *(int *)(uVar6 * 4 + 0x841f0f2e666842);
      iVar11 = iVar1 + 0xf;
      if (-1 < iVar1) {
        iVar11 = iVar1;
      }
      iVar2 = *(int *)(uVar6 * 4 + 0x841f0f2e666a22);
      iVar3 = iVar2 + 0xf;
      if (-1 < iVar2) {
        iVar3 = iVar2;
      }
      local_38[0] = *(uint *)((long)(int)((uVar6 & 0xffffffff) / uVar13) * 4 + -0x6f3676b3fe0f7fc3)
                    ^ *(uint *)((long)(iVar11 >> 4) * 0x40 + 0x41000000001d8b48 +
                               (long)(iVar1 % 0x10) * 4);
      local_38[1] = *(undefined4 *)
                     ((long)(iVar3 >> 4) * 0x40 + 0x41000000001d8b48 + (long)(iVar2 % 0x10) * 4);
      iVar1 = *(int *)(uVar6 * 4 + 0x841f0f2e666c02);
      iVar11 = iVar1 + 0xf;
      if (-1 < iVar1) {
        iVar11 = iVar1;
      }
      local_38[2] = *(undefined4 *)
                     ((long)(iVar11 >> 4) * 0x40 + 0x41000000001d8b48 + (long)(iVar1 % 0x10) * 4);
      iVar1 = *(int *)(uVar6 * 4 + 0x841f0f2e666662);
      iVar11 = iVar1 + 0xf;
      if (-1 < iVar1) {
        iVar11 = iVar1;
      }
      puVar7 = (undefined4 *)
               ((long)(iVar11 >> 4) * 0x40 + 0x41000000001d8b48 + (long)(iVar1 % 0x10) * 4);
    }
    else {
      local_38[0] = *(uint *)(uVar6 * 4 + 0x841f0f2e666662);
      local_38[1] = *(undefined4 *)(uVar6 * 4 + 0x841f0f2e666842);
      local_38[2] = *(undefined4 *)(uVar6 * 4 + 0x841f0f2e666a22);
      puVar7 = (undefined4 *)((uVar6 - 1) * 4 + 0x841f0f2e666c06);
    }
    local_38[3] = *puVar7;
    if (!(bool)(iVar10 != 4 | bVar5 ^ 1)) {
      lVar14 = 0;
      do {
        uVar9 = local_38[lVar14];
        uVar4 = uVar9 + 0xf;
        if (-1 < (int)uVar9) {
          uVar4 = uVar9;
        }
        local_38[lVar14] =
             *(uint *)((long)((int)uVar4 >> 4) * 0x40 + 0x41000000001d8b48 +
                      (long)((int)uVar9 % 0x10) * 4);
        lVar14 = lVar14 + 1;
      } while (lVar14 != 4);
    }
    lVar14 = 0;
    do {
      *(uint *)(&DAT_841f0f2e666666 + uVar6 * 4 + lVar14 * 0x1e0) =
           local_38[lVar14] ^ *(uint *)(&DAT_841f0f2e666666 + (uVar6 - uVar13) * 4 + lVar14 * 0x1e0)
      ;
      lVar14 = lVar14 + 1;
    } while (lVar14 != 4);
    uVar6 = uVar6 + 1;
  } while (uVar6 != lVar12 * lVar8);
  return 0;
}



undefined8 AddRoundKey(long param_1,int param_2,int param_3)

{
  long lVar1;
  uint *puVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  
  uVar3 = 4;
  if (param_2 < 0x2ef00) {
    if (param_2 != 0x1f4c0) {
      if (param_2 == 0x1f500) goto LAB_00100616;
      if (param_2 != 0x2eec0) goto LAB_0010061b;
    }
  }
  else {
    if ((param_2 == 0x2ef00) || (param_2 == 0x3e900)) {
LAB_00100616:
      uVar3 = 8;
      goto LAB_0010061b;
    }
    if (param_2 != 0x3e8c0) goto LAB_0010061b;
  }
  uVar3 = 6;
LAB_0010061b:
  uVar4 = 0;
  do {
    lVar1 = uVar4 + (long)(int)(param_3 * uVar3);
    lVar5 = uVar4 * 0x10;
    *(uint *)(param_1 + lVar5) =
         *(uint *)(param_1 + lVar5) ^ *(uint *)(lVar1 * 4 + 0xa048d4c00401f0f);
    puVar2 = (uint *)(param_1 + 4 + lVar5);
    *puVar2 = *puVar2 ^ *(uint *)(lVar1 * 4 + 0xa048d4c004020ef);
    puVar2 = (uint *)(param_1 + 8 + lVar5);
    *puVar2 = *puVar2 ^ *(uint *)(lVar1 * 4 + 0xa048d4c004022cf);
    puVar2 = (uint *)(param_1 + 0xc + lVar5);
    *puVar2 = *puVar2 ^ *(uint *)(lVar1 * 4 + 0xa048d4c004024af);
    uVar4 = uVar4 + 1;
  } while (uVar4 != uVar3);
  return 0;
}



void ByteSub_ShiftRow(uint *param_1,int param_2)

{
  uint uVar1;
  
  if (param_2 == 8) {
    uVar1 = *(uint *)((long)((int)param_1[1] >> 4) * 0x40 + 0x778b96148bc60148 +
                     (ulong)(param_1[1] & 0xf) * 4);
    param_1[1] = *(uint *)((long)((int)param_1[5] >> 4) * 0x40 + 0x778b96148bc60148 +
                          (ulong)(param_1[5] & 0xf) * 4);
    param_1[5] = *(uint *)((long)((int)param_1[9] >> 4) * 0x40 + 0x778b96148bc60148 +
                          (ulong)(param_1[9] & 0xf) * 4);
    param_1[9] = *(uint *)((long)((int)param_1[0xd] >> 4) * 0x40 + 0x778b96148bc60148 +
                          (ulong)(param_1[0xd] & 0xf) * 4);
    param_1[0xd] = *(uint *)((long)((int)param_1[0x11] >> 4) * 0x40 + 0x778b96148bc60148 +
                            (ulong)(param_1[0x11] & 0xf) * 4);
    param_1[0x11] =
         *(uint *)((long)((int)param_1[0x15] >> 4) * 0x40 + 0x778b96148bc60148 +
                  (ulong)(param_1[0x15] & 0xf) * 4);
    param_1[0x15] =
         *(uint *)((long)((int)param_1[0x19] >> 4) * 0x40 + 0x778b96148bc60148 +
                  (ulong)(param_1[0x19] & 0xf) * 4);
    param_1[0x19] =
         *(uint *)((long)((int)param_1[0x1d] >> 4) * 0x40 + 0x778b96148bc60148 +
                  (ulong)(param_1[0x1d] & 0xf) * 4);
    param_1[0x1d] = uVar1;
    uVar1 = *(uint *)((long)((int)param_1[2] >> 4) * 0x40 + 0x778b96148bc60148 +
                     (ulong)(param_1[2] & 0xf) * 4);
    param_1[2] = *(uint *)((long)((int)param_1[0xe] >> 4) * 0x40 + 0x778b96148bc60148 +
                          (ulong)(param_1[0xe] & 0xf) * 4);
    param_1[0xe] = *(uint *)((long)((int)param_1[0x1a] >> 4) * 0x40 + 0x778b96148bc60148 +
                            (ulong)(param_1[0x1a] & 0xf) * 4);
    param_1[0x1a] =
         *(uint *)((long)((int)param_1[6] >> 4) * 0x40 + 0x778b96148bc60148 +
                  (ulong)(param_1[6] & 0xf) * 4);
    param_1[6] = *(uint *)((long)((int)param_1[0x12] >> 4) * 0x40 + 0x778b96148bc60148 +
                          (ulong)(param_1[0x12] & 0xf) * 4);
    param_1[0x12] =
         *(uint *)((long)((int)param_1[0x1e] >> 4) * 0x40 + 0x778b96148bc60148 +
                  (ulong)(param_1[0x1e] & 0xf) * 4);
    param_1[0x1e] =
         *(uint *)((long)((int)param_1[10] >> 4) * 0x40 + 0x778b96148bc60148 +
                  (ulong)(param_1[10] & 0xf) * 4);
    param_1[10] = *(uint *)((long)((int)param_1[0x16] >> 4) * 0x40 + 0x778b96148bc60148 +
                           (ulong)(param_1[0x16] & 0xf) * 4);
    param_1[0x16] = uVar1;
    uVar1 = *(uint *)((long)((int)param_1[3] >> 4) * 0x40 + 0x778b96148bc60148 +
                     (ulong)(param_1[3] & 0xf) * 4);
    param_1[3] = *(uint *)((long)((int)param_1[0x13] >> 4) * 0x40 + 0x778b96148bc60148 +
                          (ulong)(param_1[0x13] & 0xf) * 4);
    param_1[0x13] = uVar1;
    uVar1 = *(uint *)((long)((int)param_1[7] >> 4) * 0x40 + 0x778b96148bc60148 +
                     (ulong)(param_1[7] & 0xf) * 4);
    param_1[7] = *(uint *)((long)((int)param_1[0x17] >> 4) * 0x40 + 0x778b96148bc60148 +
                          (ulong)(param_1[0x17] & 0xf) * 4);
    param_1[0x17] = uVar1;
    uVar1 = *(uint *)((long)((int)param_1[0xb] >> 4) * 0x40 + 0x778b96148bc60148 +
                     (ulong)(param_1[0xb] & 0xf) * 4);
    param_1[0xb] = *(uint *)((long)((int)param_1[0x1b] >> 4) * 0x40 + 0x778b96148bc60148 +
                            (ulong)(param_1[0x1b] & 0xf) * 4);
    param_1[0x1b] = uVar1;
    uVar1 = *(uint *)((long)((int)param_1[0xf] >> 4) * 0x40 + 0x778b96148bc60148 +
                     (ulong)(param_1[0xf] & 0xf) * 4);
    param_1[0xf] = *(uint *)((long)((int)param_1[0x1f] >> 4) * 0x40 + 0x778b96148bc60148 +
                            (ulong)(param_1[0x1f] & 0xf) * 4);
    param_1[0x1f] = uVar1;
    *param_1 = *(uint *)((long)((int)*param_1 >> 4) * 0x40 + 0x778b96148bc60148 +
                        (ulong)(*param_1 & 0xf) * 4);
    param_1[4] = *(uint *)((long)((int)param_1[4] >> 4) * 0x40 + 0x778b96148bc60148 +
                          (ulong)(param_1[4] & 0xf) * 4);
    param_1[8] = *(uint *)((long)((int)param_1[8] >> 4) * 0x40 + 0x778b96148bc60148 +
                          (ulong)(param_1[8] & 0xf) * 4);
    param_1[0xc] = *(uint *)((long)((int)param_1[0xc] >> 4) * 0x40 + 0x778b96148bc60148 +
                            (ulong)(param_1[0xc] & 0xf) * 4);
    param_1[0x10] =
         *(uint *)((long)((int)param_1[0x10] >> 4) * 0x40 + 0x778b96148bc60148 +
                  (ulong)(param_1[0x10] & 0xf) * 4);
    param_1[0x14] =
         *(uint *)((long)((int)param_1[0x14] >> 4) * 0x40 + 0x778b96148bc60148 +
                  (ulong)(param_1[0x14] & 0xf) * 4);
    param_1[0x18] =
         *(uint *)((long)((int)param_1[0x18] >> 4) * 0x40 + 0x778b96148bc60148 +
                  (ulong)(param_1[0x18] & 0xf) * 4);
    param_1 = param_1 + 0x1c;
  }
  else if (param_2 == 6) {
    uVar1 = *(uint *)((long)((int)param_1[1] >> 4) * 0x40 + 0x778b96148bc60148 +
                     (ulong)(param_1[1] & 0xf) * 4);
    param_1[1] = *(uint *)((long)((int)param_1[5] >> 4) * 0x40 + 0x778b96148bc60148 +
                          (ulong)(param_1[5] & 0xf) * 4);
    param_1[5] = *(uint *)((long)((int)param_1[9] >> 4) * 0x40 + 0x778b96148bc60148 +
                          (ulong)(param_1[9] & 0xf) * 4);
    param_1[9] = *(uint *)((long)((int)param_1[0xd] >> 4) * 0x40 + 0x778b96148bc60148 +
                          (ulong)(param_1[0xd] & 0xf) * 4);
    param_1[0xd] = *(uint *)((long)((int)param_1[0x11] >> 4) * 0x40 + 0x778b96148bc60148 +
                            (ulong)(param_1[0x11] & 0xf) * 4);
    param_1[0x11] =
         *(uint *)((long)((int)param_1[0x15] >> 4) * 0x40 + 0x778b96148bc60148 +
                  (ulong)(param_1[0x15] & 0xf) * 4);
    param_1[0x15] = uVar1;
    uVar1 = *(uint *)((long)((int)param_1[2] >> 4) * 0x40 + 0x778b96148bc60148 +
                     (ulong)(param_1[2] & 0xf) * 4);
    param_1[2] = *(uint *)((long)((int)param_1[10] >> 4) * 0x40 + 0x778b96148bc60148 +
                          (ulong)(param_1[10] & 0xf) * 4);
    param_1[10] = *(uint *)((long)((int)param_1[0x12] >> 4) * 0x40 + 0x778b96148bc60148 +
                           (ulong)(param_1[0x12] & 0xf) * 4);
    param_1[0x12] = uVar1;
    uVar1 = *(uint *)((long)((int)param_1[6] >> 4) * 0x40 + 0x778b96148bc60148 +
                     (ulong)(param_1[6] & 0xf) * 4);
    param_1[6] = *(uint *)((long)((int)param_1[0xe] >> 4) * 0x40 + 0x778b96148bc60148 +
                          (ulong)(param_1[0xe] & 0xf) * 4);
    param_1[0xe] = *(uint *)((long)((int)param_1[0x16] >> 4) * 0x40 + 0x778b96148bc60148 +
                            (ulong)(param_1[0x16] & 0xf) * 4);
    param_1[0x16] = uVar1;
    uVar1 = *(uint *)((long)((int)param_1[3] >> 4) * 0x40 + 0x778b96148bc60148 +
                     (ulong)(param_1[3] & 0xf) * 4);
    param_1[3] = *(uint *)((long)((int)param_1[0xf] >> 4) * 0x40 + 0x778b96148bc60148 +
                          (ulong)(param_1[0xf] & 0xf) * 4);
    param_1[0xf] = uVar1;
    uVar1 = *(uint *)((long)((int)param_1[7] >> 4) * 0x40 + 0x778b96148bc60148 +
                     (ulong)(param_1[7] & 0xf) * 4);
    param_1[7] = *(uint *)((long)((int)param_1[0x13] >> 4) * 0x40 + 0x778b96148bc60148 +
                          (ulong)(param_1[0x13] & 0xf) * 4);
    param_1[0x13] = uVar1;
    uVar1 = *(uint *)((long)((int)param_1[0xb] >> 4) * 0x40 + 0x778b96148bc60148 +
                     (ulong)(param_1[0xb] & 0xf) * 4);
    param_1[0xb] = *(uint *)((long)((int)param_1[0x17] >> 4) * 0x40 + 0x778b96148bc60148 +
                            (ulong)(param_1[0x17] & 0xf) * 4);
    param_1[0x17] = uVar1;
    *param_1 = *(uint *)((long)((int)*param_1 >> 4) * 0x40 + 0x778b96148bc60148 +
                        (ulong)(*param_1 & 0xf) * 4);
    param_1[4] = *(uint *)((long)((int)param_1[4] >> 4) * 0x40 + 0x778b96148bc60148 +
                          (ulong)(param_1[4] & 0xf) * 4);
    param_1[8] = *(uint *)((long)((int)param_1[8] >> 4) * 0x40 + 0x778b96148bc60148 +
                          (ulong)(param_1[8] & 0xf) * 4);
    param_1[0xc] = *(uint *)((long)((int)param_1[0xc] >> 4) * 0x40 + 0x778b96148bc60148 +
                            (ulong)(param_1[0xc] & 0xf) * 4);
    param_1[0x10] =
         *(uint *)((long)((int)param_1[0x10] >> 4) * 0x40 + 0x778b96148bc60148 +
                  (ulong)(param_1[0x10] & 0xf) * 4);
    param_1 = param_1 + 0x14;
  }
  else {
    if (param_2 != 4) {
      return;
    }
    uVar1 = *(uint *)((long)((int)param_1[1] >> 4) * 0x40 + 0x778b96148bc60148 +
                     (ulong)(param_1[1] & 0xf) * 4);
    param_1[1] = *(uint *)((long)((int)param_1[5] >> 4) * 0x40 + 0x778b96148bc60148 +
                          (ulong)(param_1[5] & 0xf) * 4);
    param_1[5] = *(uint *)((long)((int)param_1[9] >> 4) * 0x40 + 0x778b96148bc60148 +
                          (ulong)(param_1[9] & 0xf) * 4);
    param_1[9] = *(uint *)((long)((int)param_1[0xd] >> 4) * 0x40 + 0x778b96148bc60148 +
                          (ulong)(param_1[0xd] & 0xf) * 4);
    param_1[0xd] = uVar1;
    uVar1 = *(uint *)((long)((int)param_1[2] >> 4) * 0x40 + 0x778b96148bc60148 +
                     (ulong)(param_1[2] & 0xf) * 4);
    param_1[2] = *(uint *)((long)((int)param_1[10] >> 4) * 0x40 + 0x778b96148bc60148 +
                          (ulong)(param_1[10] & 0xf) * 4);
    param_1[10] = uVar1;
    uVar1 = *(uint *)((long)((int)param_1[6] >> 4) * 0x40 + 0x778b96148bc60148 +
                     (ulong)(param_1[6] & 0xf) * 4);
    param_1[6] = *(uint *)((long)((int)param_1[0xe] >> 4) * 0x40 + 0x778b96148bc60148 +
                          (ulong)(param_1[0xe] & 0xf) * 4);
    param_1[0xe] = uVar1;
    uVar1 = *(uint *)((long)((int)param_1[3] >> 4) * 0x40 + 0x778b96148bc60148 +
                     (ulong)(param_1[3] & 0xf) * 4);
    param_1[3] = *(uint *)((long)((int)param_1[0xf] >> 4) * 0x40 + 0x778b96148bc60148 +
                          (ulong)(param_1[0xf] & 0xf) * 4);
    param_1[0xf] = *(uint *)((long)((int)param_1[0xb] >> 4) * 0x40 + 0x778b96148bc60148 +
                            (ulong)(param_1[0xb] & 0xf) * 4);
    param_1[0xb] = *(uint *)((long)((int)param_1[7] >> 4) * 0x40 + 0x778b96148bc60148 +
                            (ulong)(param_1[7] & 0xf) * 4);
    param_1[7] = uVar1;
    *param_1 = *(uint *)((long)((int)*param_1 >> 4) * 0x40 + 0x778b96148bc60148 +
                        (ulong)(*param_1 & 0xf) * 4);
    param_1[4] = *(uint *)((long)((int)param_1[4] >> 4) * 0x40 + 0x778b96148bc60148 +
                          (ulong)(param_1[4] & 0xf) * 4);
    param_1[8] = *(uint *)((long)((int)param_1[8] >> 4) * 0x40 + 0x778b96148bc60148 +
                          (ulong)(param_1[8] & 0xf) * 4);
    param_1 = param_1 + 0xc;
  }
  *param_1 = *(uint *)((long)((int)*param_1 >> 4) * 0x40 + 0x6666c3078981048b +
                      (ulong)(*param_1 & 0xf) * 4);
  return;
}



undefined8 MixColumn_AddRoundKey(long param_1,uint param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  ulong uVar10;
  uint uVar11;
  long lVar12;
  uint uVar13;
  uint auStack_b8 [34];
  
  if (0 < (int)param_2) {
    uVar10 = 0;
    do {
      lVar12 = uVar10 * 0x10;
      uVar1 = *(uint *)(param_1 + lVar12);
      uVar6 = uVar1 * 2;
      uVar13 = uVar6 ^ 0x11b;
      if ((uVar1 & 0x7fffff80) != 0x80) {
        uVar13 = uVar6;
      }
      auStack_b8[uVar10 * 4] = uVar13;
      uVar2 = *(uint *)(param_1 + 4 + lVar12);
      uVar4 = uVar2 * 2;
      uVar13 = uVar4 ^ uVar2 ^ uVar13;
      uVar8 = uVar13 ^ 0x11b;
      if (((uVar4 ^ uVar2) & 0xffffff00) != 0x100) {
        uVar8 = uVar13;
      }
      auStack_b8[uVar10 * 4] = uVar8;
      uVar13 = *(uint *)(param_1 + 8 + lVar12);
      uVar3 = *(uint *)(param_1 + 0xc + lVar12);
      lVar12 = uVar10 + (long)(int)(param_3 * param_2);
      uVar11 = uVar4 ^ 0x11b;
      if ((uVar2 & 0x7fffff80) != 0x80) {
        uVar11 = uVar4;
      }
      uVar5 = uVar13 * 2;
      uVar11 = uVar5 ^ uVar13 ^ uVar11;
      uVar4 = uVar11 ^ 0x11b;
      if (((uVar5 ^ uVar13) & 0xffffff00) != 0x100) {
        uVar4 = uVar11;
      }
      uVar11 = *(uint *)(lVar12 * 4 + 0x1e0b8ac8d26);
      uVar9 = uVar5 ^ 0x11b;
      if ((uVar13 & 0x7fffff80) != 0x80) {
        uVar9 = uVar5;
      }
      uVar7 = uVar3 * 2;
      uVar9 = uVar7 ^ uVar3 ^ uVar9;
      uVar5 = uVar9 ^ 0x11b;
      if (((uVar7 ^ uVar3) & 0xffffff00) != 0x100) {
        uVar5 = uVar9;
      }
      auStack_b8[uVar10 * 4] = *(uint *)(lVar12 * 4 + 0x44f53144b82c8b42) ^ uVar13 ^ uVar3 ^ uVar8;
      uVar8 = *(uint *)(lVar12 * 4 + 0x3c0bd943706);
      uVar9 = uVar7 ^ 0x11b;
      if ((uVar3 & 0x7fffff80) != 0x80) {
        uVar9 = uVar7;
      }
      auStack_b8[uVar10 * 4 + 1] = uVar11 ^ uVar1 ^ uVar3 ^ uVar4;
      uVar9 = uVar9 ^ uVar6 ^ uVar1;
      uVar4 = uVar9 ^ 0x11b;
      if (((uVar6 ^ uVar1) & 0xffffff00) != 0x100) {
        uVar4 = uVar9;
      }
      auStack_b8[uVar10 * 4 + 2] = uVar1 ^ uVar8 ^ uVar2 ^ uVar5;
      auStack_b8[uVar10 * 4 + 3] = uVar2 ^ *(uint *)(lVar12 * 4 + 0x3c0bd9438e6) ^ uVar13 ^ uVar4;
      uVar10 = uVar10 + 1;
    } while (uVar10 != param_2);
  }
  if (0 < (int)param_2) {
    uVar10 = 0;
    do {
      lVar12 = uVar10 * 0x10;
      *(uint *)(param_1 + lVar12) = auStack_b8[uVar10 * 4];
      *(uint *)(param_1 + 4 + lVar12) = auStack_b8[uVar10 * 4 + 1];
      *(uint *)(param_1 + 8 + lVar12) = auStack_b8[uVar10 * 4 + 2];
      *(uint *)(param_1 + 0xc + lVar12) = auStack_b8[uVar10 * 4 + 3];
      uVar10 = uVar10 + 1;
    } while (uVar10 != param_2);
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int decrypt(EVP_PKEY_CTX *ctx,uchar *out,size_t *outlen,uchar *in,size_t inlen)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  long lVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  int iVar10;
  
  iVar2 = (int)outlen;
  KeySchedule((ulong)outlen & 0xffffffff);
  uVar4 = 4;
  uVar3 = _DAT_d8b480a89;
  if (iVar2 < 0x2eec0) {
    if (iVar2 < 0x1f500) {
      uVar3 = 10;
      uVar4 = 4;
      if ((iVar2 != 0x1f480) && (uVar3 = _DAT_d8b480a89, uVar4 = _DAT_358b4c0189, iVar2 == 0x1f4c0))
      goto LAB_00101125;
    }
    else {
      if (iVar2 == 0x1f500) {
LAB_0010111e:
        uVar4 = 8;
        goto LAB_00101136;
      }
      uVar4 = _DAT_358b4c0189;
      if (iVar2 == 0x2ee80) {
        uVar3 = 0xc;
        uVar4 = 4;
      }
    }
  }
  else if (iVar2 < 0x3e880) {
    if (iVar2 == 0x2eec0) {
LAB_00101125:
      uVar3 = 0xc;
      uVar4 = 6;
    }
    else {
      uVar4 = _DAT_358b4c0189;
      if (iVar2 == 0x2ef00) goto LAB_0010111e;
    }
  }
  else {
    if (iVar2 != 0x3e880) {
      if (iVar2 != 0x3e8c0) {
        uVar4 = _DAT_358b4c0189;
        if (iVar2 == 0x3e900) goto LAB_0010111e;
        goto LAB_0010114d;
      }
      uVar4 = 6;
    }
LAB_00101136:
    uVar3 = 0xe;
  }
LAB_0010114d:
  _DAT_358b4c0189 = uVar4;
  _DAT_d8b480a89 = uVar3;
  lVar5 = (long)_DAT_4b9066349;
  uVar6 = 4;
  if (iVar2 < 0x2ef00) {
    if (iVar2 != 0x1f4c0) {
      if (iVar2 == 0x1f500) goto LAB_0010119d;
      if (iVar2 != 0x2eec0) goto LAB_001011a2;
    }
LAB_00101196:
    uVar6 = 6;
  }
  else if ((iVar2 == 0x2ef00) || (iVar2 == 0x3e900)) {
LAB_0010119d:
    uVar6 = 8;
  }
  else if (iVar2 == 0x3e8c0) goto LAB_00101196;
LAB_001011a2:
  uVar8 = 0;
  do {
    lVar7 = uVar8 + lVar5 * (ulong)uVar6;
    lVar9 = uVar8 * 0x10;
    *(uint *)(ctx + lVar9) = *(uint *)(ctx + lVar9) ^ *(uint *)(&DAT_f2e666666666666 + lVar7 * 4);
    *(uint *)(ctx + lVar9 + 4) =
         *(uint *)(ctx + lVar9 + 4) ^ *(uint *)(&DAT_f2e666666666846 + lVar7 * 4);
    *(uint *)(ctx + lVar9 + 8) =
         *(uint *)(ctx + lVar9 + 8) ^ *(uint *)(&DAT_f2e666666666a26 + lVar7 * 4);
    *(uint *)(ctx + lVar9 + 0xc) =
         *(uint *)(ctx + lVar9 + 0xc) ^ *(uint *)(&DAT_f2e666666666c06 + lVar7 * 4);
    uVar8 = uVar8 + 1;
  } while (uVar8 != uVar6);
  InversShiftRow_ByteSub(ctx,_DAT_e8df894824348b41);
  iVar10 = _DAT_4b9066349;
  if (1 < _DAT_4b9066349) {
    do {
      AddRoundKey_InversMixColumn(ctx,_DAT_e8df894824348b41,iVar10 + -1);
      InversShiftRow_ByteSub(ctx,_DAT_e8df894824348b41);
      bVar1 = 2 < iVar10;
      iVar10 = iVar10 + -1;
    } while (bVar1);
  }
  lVar5 = 4;
  if (iVar2 < 0x2ef00) {
    if (iVar2 != 0x1f4c0) {
      if (iVar2 == 0x1f500) goto LAB_0010128e;
      if (iVar2 != 0x2eec0) goto LAB_00101293;
    }
  }
  else {
    if ((iVar2 == 0x2ef00) || (iVar2 == 0x3e900)) {
LAB_0010128e:
      lVar5 = 8;
      goto LAB_00101293;
    }
    if (iVar2 != 0x3e8c0) goto LAB_00101293;
  }
  lVar5 = 6;
LAB_00101293:
  lVar7 = 0;
  do {
    lVar9 = lVar7 * 0x10;
    *(uint *)(ctx + lVar9) = *(uint *)(ctx + lVar9) ^ *(uint *)(&DAT_f2e666666666666 + lVar7 * 4);
    *(uint *)(ctx + lVar9 + 4) =
         *(uint *)(ctx + lVar9 + 4) ^ *(uint *)(&DAT_f2e666666666846 + lVar7 * 4);
    *(uint *)(ctx + lVar9 + 8) =
         *(uint *)(ctx + lVar9 + 8) ^ *(uint *)(&DAT_f2e666666666a26 + lVar7 * 4);
    *(uint *)(ctx + lVar9 + 0xc) =
         *(uint *)(ctx + lVar9 + 0xc) ^ *(uint *)(&DAT_f2e666666666c06 + lVar7 * 4);
    lVar7 = lVar7 + 1;
  } while (lVar7 != lVar5);
  lVar5 = 0;
  do {
    _DAT_44358d48d231088b =
         _DAT_44358d48d231088b + (uint)(*(int *)(ctx + lVar5 * 4) != (&DAT_00102130)[lVar5]);
    lVar5 = lVar5 + 1;
  } while (lVar5 != 0x10);
  return 0;
}



void InversShiftRow_ByteSub(uint *param_1,int param_2)

{
  uint uVar1;
  
  if (param_2 == 8) {
    uVar1 = *(uint *)((long)((int)param_1[0x1d] >> 4) * 0x40 + 0x578b8a0c8bc20148 +
                     (ulong)(param_1[0x1d] & 0xf) * 4);
    param_1[0x1d] =
         *(uint *)((long)((int)param_1[0x19] >> 4) * 0x40 + 0x578b8a0c8bc20148 +
                  (ulong)(param_1[0x19] & 0xf) * 4);
    param_1[0x19] =
         *(uint *)((long)((int)param_1[0x15] >> 4) * 0x40 + 0x578b8a0c8bc20148 +
                  (ulong)(param_1[0x15] & 0xf) * 4);
    param_1[0x15] =
         *(uint *)((long)((int)param_1[0x11] >> 4) * 0x40 + 0x578b8a0c8bc20148 +
                  (ulong)(param_1[0x11] & 0xf) * 4);
    param_1[0x11] =
         *(uint *)((long)((int)param_1[0xd] >> 4) * 0x40 + 0x578b8a0c8bc20148 +
                  (ulong)(param_1[0xd] & 0xf) * 4);
    param_1[0xd] = *(uint *)((long)((int)param_1[9] >> 4) * 0x40 + 0x578b8a0c8bc20148 +
                            (ulong)(param_1[9] & 0xf) * 4);
    param_1[9] = *(uint *)((long)((int)param_1[5] >> 4) * 0x40 + 0x578b8a0c8bc20148 +
                          (ulong)(param_1[5] & 0xf) * 4);
    param_1[5] = *(uint *)((long)((int)param_1[1] >> 4) * 0x40 + 0x578b8a0c8bc20148 +
                          (ulong)(param_1[1] & 0xf) * 4);
    param_1[1] = uVar1;
    uVar1 = *(uint *)((long)((int)param_1[0x1e] >> 4) * 0x40 + 0x578b8a0c8bc20148 +
                     (ulong)(param_1[0x1e] & 0xf) * 4);
    param_1[0x1e] =
         *(uint *)((long)((int)param_1[0x12] >> 4) * 0x40 + 0x578b8a0c8bc20148 +
                  (ulong)(param_1[0x12] & 0xf) * 4);
    param_1[0x12] =
         *(uint *)((long)((int)param_1[6] >> 4) * 0x40 + 0x578b8a0c8bc20148 +
                  (ulong)(param_1[6] & 0xf) * 4);
    param_1[6] = *(uint *)((long)((int)param_1[0x1a] >> 4) * 0x40 + 0x578b8a0c8bc20148 +
                          (ulong)(param_1[0x1a] & 0xf) * 4);
    param_1[0x1a] =
         *(uint *)((long)((int)param_1[0xe] >> 4) * 0x40 + 0x578b8a0c8bc20148 +
                  (ulong)(param_1[0xe] & 0xf) * 4);
    param_1[0xe] = *(uint *)((long)((int)param_1[2] >> 4) * 0x40 + 0x578b8a0c8bc20148 +
                            (ulong)(param_1[2] & 0xf) * 4);
    param_1[2] = *(uint *)((long)((int)param_1[0x16] >> 4) * 0x40 + 0x578b8a0c8bc20148 +
                          (ulong)(param_1[0x16] & 0xf) * 4);
    param_1[0x16] =
         *(uint *)((long)((int)param_1[10] >> 4) * 0x40 + 0x578b8a0c8bc20148 +
                  (ulong)(param_1[10] & 0xf) * 4);
    param_1[10] = uVar1;
    uVar1 = *(uint *)((long)((int)param_1[0x1f] >> 4) * 0x40 + 0x578b8a0c8bc20148 +
                     (ulong)(param_1[0x1f] & 0xf) * 4);
    param_1[0x1f] =
         *(uint *)((long)((int)param_1[0xf] >> 4) * 0x40 + 0x578b8a0c8bc20148 +
                  (ulong)(param_1[0xf] & 0xf) * 4);
    param_1[0xf] = uVar1;
    uVar1 = *(uint *)((long)((int)param_1[0x1b] >> 4) * 0x40 + 0x578b8a0c8bc20148 +
                     (ulong)(param_1[0x1b] & 0xf) * 4);
    param_1[0x1b] =
         *(uint *)((long)((int)param_1[0xb] >> 4) * 0x40 + 0x578b8a0c8bc20148 +
                  (ulong)(param_1[0xb] & 0xf) * 4);
    param_1[0xb] = uVar1;
    uVar1 = *(uint *)((long)((int)param_1[0x17] >> 4) * 0x40 + 0x578b8a0c8bc20148 +
                     (ulong)(param_1[0x17] & 0xf) * 4);
    param_1[0x17] =
         *(uint *)((long)((int)param_1[7] >> 4) * 0x40 + 0x578b8a0c8bc20148 +
                  (ulong)(param_1[7] & 0xf) * 4);
    param_1[7] = uVar1;
    uVar1 = *(uint *)((long)((int)param_1[0x13] >> 4) * 0x40 + 0x578b8a0c8bc20148 +
                     (ulong)(param_1[0x13] & 0xf) * 4);
    param_1[0x13] =
         *(uint *)((long)((int)param_1[3] >> 4) * 0x40 + 0x578b8a0c8bc20148 +
                  (ulong)(param_1[3] & 0xf) * 4);
    param_1[3] = uVar1;
    *param_1 = *(uint *)((long)((int)*param_1 >> 4) * 0x40 + 0x578b8a0c8bc20148 +
                        (ulong)(*param_1 & 0xf) * 4);
    param_1[4] = *(uint *)((long)((int)param_1[4] >> 4) * 0x40 + 0x578b8a0c8bc20148 +
                          (ulong)(param_1[4] & 0xf) * 4);
    param_1[8] = *(uint *)((long)((int)param_1[8] >> 4) * 0x40 + 0x578b8a0c8bc20148 +
                          (ulong)(param_1[8] & 0xf) * 4);
    param_1[0xc] = *(uint *)((long)((int)param_1[0xc] >> 4) * 0x40 + 0x578b8a0c8bc20148 +
                            (ulong)(param_1[0xc] & 0xf) * 4);
    param_1[0x10] =
         *(uint *)((long)((int)param_1[0x10] >> 4) * 0x40 + 0x578b8a0c8bc20148 +
                  (ulong)(param_1[0x10] & 0xf) * 4);
    param_1[0x14] =
         *(uint *)((long)((int)param_1[0x14] >> 4) * 0x40 + 0x578b8a0c8bc20148 +
                  (ulong)(param_1[0x14] & 0xf) * 4);
    param_1[0x18] =
         *(uint *)((long)((int)param_1[0x18] >> 4) * 0x40 + 0x578b8a0c8bc20148 +
                  (ulong)(param_1[0x18] & 0xf) * 4);
    param_1 = param_1 + 0x1c;
  }
  else if (param_2 == 6) {
    uVar1 = *(uint *)((long)((int)param_1[0x15] >> 4) * 0x40 + 0x578b8a0c8bc20148 +
                     (ulong)(param_1[0x15] & 0xf) * 4);
    param_1[0x15] =
         *(uint *)((long)((int)param_1[0x11] >> 4) * 0x40 + 0x578b8a0c8bc20148 +
                  (ulong)(param_1[0x11] & 0xf) * 4);
    param_1[0x11] =
         *(uint *)((long)((int)param_1[0xd] >> 4) * 0x40 + 0x578b8a0c8bc20148 +
                  (ulong)(param_1[0xd] & 0xf) * 4);
    param_1[0xd] = *(uint *)((long)((int)param_1[9] >> 4) * 0x40 + 0x578b8a0c8bc20148 +
                            (ulong)(param_1[9] & 0xf) * 4);
    param_1[9] = *(uint *)((long)((int)param_1[5] >> 4) * 0x40 + 0x578b8a0c8bc20148 +
                          (ulong)(param_1[5] & 0xf) * 4);
    param_1[5] = *(uint *)((long)((int)param_1[1] >> 4) * 0x40 + 0x578b8a0c8bc20148 +
                          (ulong)(param_1[1] & 0xf) * 4);
    param_1[1] = uVar1;
    uVar1 = *(uint *)((long)((int)param_1[0x16] >> 4) * 0x40 + 0x578b8a0c8bc20148 +
                     (ulong)(param_1[0x16] & 0xf) * 4);
    param_1[0x16] =
         *(uint *)((long)((int)param_1[0xe] >> 4) * 0x40 + 0x578b8a0c8bc20148 +
                  (ulong)(param_1[0xe] & 0xf) * 4);
    param_1[0xe] = *(uint *)((long)((int)param_1[6] >> 4) * 0x40 + 0x578b8a0c8bc20148 +
                            (ulong)(param_1[6] & 0xf) * 4);
    param_1[6] = uVar1;
    uVar1 = *(uint *)((long)((int)param_1[0x12] >> 4) * 0x40 + 0x578b8a0c8bc20148 +
                     (ulong)(param_1[0x12] & 0xf) * 4);
    param_1[0x12] =
         *(uint *)((long)((int)param_1[10] >> 4) * 0x40 + 0x578b8a0c8bc20148 +
                  (ulong)(param_1[10] & 0xf) * 4);
    param_1[10] = *(uint *)((long)((int)param_1[2] >> 4) * 0x40 + 0x578b8a0c8bc20148 +
                           (ulong)(param_1[2] & 0xf) * 4);
    param_1[2] = uVar1;
    uVar1 = *(uint *)((long)((int)param_1[0xf] >> 4) * 0x40 + 0x578b8a0c8bc20148 +
                     (ulong)(param_1[0xf] & 0xf) * 4);
    param_1[0xf] = *(uint *)((long)((int)param_1[3] >> 4) * 0x40 + 0x578b8a0c8bc20148 +
                            (ulong)(param_1[3] & 0xf) * 4);
    param_1[3] = uVar1;
    uVar1 = *(uint *)((long)((int)param_1[0x13] >> 4) * 0x40 + 0x578b8a0c8bc20148 +
                     (ulong)(param_1[0x13] & 0xf) * 4);
    param_1[0x13] =
         *(uint *)((long)((int)param_1[7] >> 4) * 0x40 + 0x578b8a0c8bc20148 +
                  (ulong)(param_1[7] & 0xf) * 4);
    param_1[7] = uVar1;
    uVar1 = *(uint *)((long)((int)param_1[0x17] >> 4) * 0x40 + 0x578b8a0c8bc20148 +
                     (ulong)(param_1[0x17] & 0xf) * 4);
    param_1[0x17] =
         *(uint *)((long)((int)param_1[0xb] >> 4) * 0x40 + 0x578b8a0c8bc20148 +
                  (ulong)(param_1[0xb] & 0xf) * 4);
    param_1[0xb] = uVar1;
    *param_1 = *(uint *)((long)((int)*param_1 >> 4) * 0x40 + 0x578b8a0c8bc20148 +
                        (ulong)(*param_1 & 0xf) * 4);
    param_1[4] = *(uint *)((long)((int)param_1[4] >> 4) * 0x40 + 0x578b8a0c8bc20148 +
                          (ulong)(param_1[4] & 0xf) * 4);
    param_1[8] = *(uint *)((long)((int)param_1[8] >> 4) * 0x40 + 0x578b8a0c8bc20148 +
                          (ulong)(param_1[8] & 0xf) * 4);
    param_1[0xc] = *(uint *)((long)((int)param_1[0xc] >> 4) * 0x40 + 0x578b8a0c8bc20148 +
                            (ulong)(param_1[0xc] & 0xf) * 4);
    param_1[0x10] =
         *(uint *)((long)((int)param_1[0x10] >> 4) * 0x40 + 0x578b8a0c8bc20148 +
                  (ulong)(param_1[0x10] & 0xf) * 4);
    param_1 = param_1 + 0x14;
  }
  else {
    if (param_2 != 4) {
      return;
    }
    uVar1 = *(uint *)((long)((int)param_1[0xd] >> 4) * 0x40 + 0x4f8b8a148bc20148 +
                     (ulong)(param_1[0xd] & 0xf) * 4);
    param_1[0xd] = *(uint *)((long)((int)param_1[9] >> 4) * 0x40 + 0x4f8b8a148bc20148 +
                            (ulong)(param_1[9] & 0xf) * 4);
    param_1[9] = *(uint *)((long)((int)param_1[5] >> 4) * 0x40 + 0x4f8b8a148bc20148 +
                          (ulong)(param_1[5] & 0xf) * 4);
    param_1[5] = *(uint *)((long)((int)param_1[1] >> 4) * 0x40 + 0x4f8b8a148bc20148 +
                          (ulong)(param_1[1] & 0xf) * 4);
    param_1[1] = uVar1;
    uVar1 = *(uint *)((long)((int)param_1[0xe] >> 4) * 0x40 + 0x4f8b8a148bc20148 +
                     (ulong)(param_1[0xe] & 0xf) * 4);
    param_1[0xe] = *(uint *)((long)((int)param_1[6] >> 4) * 0x40 + 0x4f8b8a148bc20148 +
                            (ulong)(param_1[6] & 0xf) * 4);
    param_1[6] = uVar1;
    uVar1 = *(uint *)((long)((int)param_1[2] >> 4) * 0x40 + 0x4f8b8a148bc20148 +
                     (ulong)(param_1[2] & 0xf) * 4);
    param_1[2] = *(uint *)((long)((int)param_1[10] >> 4) * 0x40 + 0x4f8b8a148bc20148 +
                          (ulong)(param_1[10] & 0xf) * 4);
    param_1[10] = uVar1;
    uVar1 = *(uint *)((long)((int)param_1[0xf] >> 4) * 0x40 + 0x4f8b8a148bc20148 +
                     (ulong)(param_1[0xf] & 0xf) * 4);
    param_1[0xf] = *(uint *)((long)((int)param_1[3] >> 4) * 0x40 + 0x4f8b8a148bc20148 +
                            (ulong)(param_1[3] & 0xf) * 4);
    param_1[3] = *(uint *)((long)((int)param_1[7] >> 4) * 0x40 + 0x4f8b8a148bc20148 +
                          (ulong)(param_1[7] & 0xf) * 4);
    param_1[7] = *(uint *)((long)((int)param_1[0xb] >> 4) * 0x40 + 0x4f8b8a148bc20148 +
                          (ulong)(param_1[0xb] & 0xf) * 4);
    param_1[0xb] = uVar1;
    *param_1 = *(uint *)((long)((int)*param_1 >> 4) * 0x40 + 0x4f8b8a148bc20148 +
                        (ulong)(*param_1 & 0xf) * 4);
    param_1[4] = *(uint *)((long)((int)param_1[4] >> 4) * 0x40 + 0x4f8b8a148bc20148 +
                          (ulong)(param_1[4] & 0xf) * 4);
    param_1[8] = *(uint *)((long)((int)param_1[8] >> 4) * 0x40 + 0x4f8b8a148bc20148 +
                          (ulong)(param_1[8] & 0xf) * 4);
    param_1 = param_1 + 0xc;
  }
  *param_1 = *(uint *)((long)((int)*param_1 >> 4) * 0x40 + 0x6666c3078981048b +
                      (ulong)(*param_1 & 0xf) * 4);
  return;
}



undefined8 AddRoundKey_InversMixColumn(long param_1,uint param_2,int param_3)

{
  long lVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  uint uVar8;
  uint uVar9;
  ulong uVar10;
  long lVar11;
  uint uVar12;
  uint auStack_a8 [32];
  
  uVar5 = (ulong)param_2;
  if (0 < (int)param_2) {
    uVar6 = 0;
    do {
      lVar7 = uVar6 + (long)(int)(param_3 * param_2);
      lVar11 = uVar6 * 0x10;
      *(uint *)(param_1 + lVar11) =
           *(uint *)(param_1 + lVar11) ^ *(uint *)(lVar7 * 4 + 0x470a0c8d4c001f0f);
      puVar2 = (uint *)(param_1 + 4 + lVar11);
      *puVar2 = *puVar2 ^ *(uint *)(lVar7 * 4 + 0x470a0c8d4c0020ef);
      puVar2 = (uint *)(param_1 + 8 + lVar11);
      *puVar2 = *puVar2 ^ *(uint *)(lVar7 * 4 + 0x470a0c8d4c0022cf);
      puVar2 = (uint *)(param_1 + 0xc + lVar11);
      *puVar2 = *puVar2 ^ *(uint *)(lVar7 * 4 + 0x470a0c8d4c0024af);
      uVar6 = uVar6 + 1;
    } while (uVar6 != uVar5);
  }
  if (0 < (int)param_2) {
    uVar6 = 0;
    do {
      uVar10 = uVar6 * 4 & 0xffffffff;
      lVar7 = 0;
      do {
        lVar11 = lVar7 + uVar6 * 4;
        uVar3 = *(uint *)(param_1 + lVar11 * 4);
        uVar9 = uVar3 * 2 ^ 0x11b;
        if ((uVar3 & 0x7fffff80) != 0x80) {
          uVar9 = uVar3 * 2;
        }
        uVar8 = (uVar9 ^ uVar3) * 2;
        uVar12 = uVar8 ^ 0x11b;
        if (((uVar9 ^ uVar3) & 0x7fffff80) != 0x80) {
          uVar12 = uVar8;
        }
        uVar9 = (uVar12 ^ uVar3) * 2;
        uVar8 = uVar9 ^ 0x11b;
        if (((uVar12 ^ uVar3) & 0x7fffff80) != 0x80) {
          uVar8 = uVar9;
        }
        auStack_a8[lVar11] = uVar8;
        lVar1 = lVar7 + 1;
        uVar3 = *(uint *)(param_1 + ((uint)lVar1 & 3 | uVar10) * 4);
        uVar9 = uVar3 * 2 ^ 0x11b;
        if ((uVar3 & 0x7fffff80) != 0x80) {
          uVar9 = uVar3 * 2;
        }
        uVar12 = uVar9 * 2 ^ 0x11b;
        if ((uVar9 & 0x7fffff80) != 0x80) {
          uVar12 = uVar9 * 2;
        }
        uVar4 = (uVar12 ^ uVar3) * 2;
        uVar9 = uVar4 ^ 0x11b;
        if (((uVar12 ^ uVar3) & 0x7fffff80) != 0x80) {
          uVar9 = uVar4;
        }
        uVar9 = uVar8 ^ uVar3 ^ uVar9;
        auStack_a8[lVar11] = uVar9;
        uVar3 = *(uint *)(param_1 + ((int)lVar7 + 2U & 3 | uVar10) * 4);
        uVar8 = uVar3 * 2 ^ 0x11b;
        if ((uVar3 & 0x7fffff80) != 0x80) {
          uVar8 = uVar3 * 2;
        }
        uVar4 = (uVar8 ^ uVar3) * 2;
        uVar12 = uVar4 ^ 0x11b;
        if (((uVar8 ^ uVar3) & 0x7fffff80) != 0x80) {
          uVar12 = uVar4;
        }
        uVar8 = uVar12 * 2 ^ 0x11b;
        if ((uVar12 & 0x7fffff80) != 0x80) {
          uVar8 = uVar12 * 2;
        }
        uVar9 = uVar8 ^ uVar3 ^ uVar9;
        auStack_a8[lVar11] = uVar9;
        uVar3 = *(uint *)(param_1 + ((int)lVar7 - 1U & 3 | uVar10) * 4);
        uVar8 = uVar3 * 2 ^ 0x11b;
        if ((uVar3 & 0x7fffff80) != 0x80) {
          uVar8 = uVar3 * 2;
        }
        uVar12 = uVar8 * 2 ^ 0x11b;
        if ((uVar8 & 0x7fffff80) != 0x80) {
          uVar12 = uVar8 * 2;
        }
        uVar8 = uVar12 * 2 ^ 0x11b;
        if ((uVar12 & 0x7fffff80) != 0x80) {
          uVar8 = uVar12 * 2;
        }
        auStack_a8[lVar11] = uVar8 ^ uVar3 ^ uVar9;
        lVar7 = lVar1;
      } while (lVar1 != 4);
      uVar6 = uVar6 + 1;
    } while (uVar6 != uVar5);
  }
  if (0 < (int)param_2) {
    uVar6 = 0;
    do {
      lVar7 = uVar6 * 0x10;
      *(uint *)(param_1 + lVar7) = auStack_a8[uVar6 * 4];
      *(uint *)(param_1 + 4 + lVar7) = auStack_a8[uVar6 * 4 + 1];
      *(uint *)(param_1 + 8 + lVar7) = auStack_a8[uVar6 * 4 + 2];
      *(uint *)(param_1 + 0xc + lVar7) = auStack_a8[uVar6 * 4 + 3];
      uVar6 = uVar6 + 1;
    } while (uVar6 != uVar5);
  }
  return 0;
}



undefined4 SubByte(int param_1)

{
  int iVar1;
  
  iVar1 = param_1 + 0xf;
  if (-1 < param_1) {
    iVar1 = param_1;
  }
  return *(undefined4 *)
          ((long)(iVar1 >> 4) * 0x40 + -0x7be0f0993c7efb75 + (long)(param_1 % 0x10) * 4);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 aes_main(void)

{
  uchar *in_RCX;
  size_t in_R8;
  
  _DAT_1f405280f03290f = 0x32;
  uRam01f405280f032913 = 0x43;
  uRam01f405280f032917 = 0xf6;
  uRam01f405280f03291b = 0xa8;
  _DAT_1f405280f03291f = 0x88;
  uRam01f405280f032923 = 0x5a;
  uRam01f405280f032927 = 0x30;
  uRam01f405280f03292b = 0x8d;
  _DAT_1f405280f03292f = 0x31;
  uRam01f405280f032933 = 0x31;
  uRam01f405280f032937 = 0x98;
  uRam01f405280f03293b = 0xa2;
  _DAT_1f405280f03293f = 0xe0;
  uRam01f405280f032943 = 0x37;
  uRam01f405280f032947 = 7;
  uRam01f405280f03294b = 0x34;
  _DAT_105280f06290f41 = 0x2b;
  uRam0105280f06290f45 = 0x7e;
  uRam0105280f06290f49 = 0x15;
  uRam0105280f06290f4d = 0x16;
  _DAT_105280f06290f51 = 0x28;
  uRam0105280f06290f55 = 0xae;
  uRam0105280f06290f59 = 0xd2;
  uRam0105280f06290f5d = 0xa6;
  _DAT_105280f06290f61 = 0xab;
  uRam0105280f06290f65 = 0xf7;
  uRam0105280f06290f69 = 0x15;
  uRam0105280f06290f6d = 0x88;
  _DAT_105280f06290f71 = 9;
  uRam0105280f06290f75 = 0xcf;
  uRam0105280f06290f79 = 0x4f;
  uRam0105280f06290f7d = 0x3c;
  encrypt(&DAT_1f405280f03290f,0x6290f41);
  decrypt((EVP_PKEY_CTX *)&DAT_1f405280f03290f,&DAT_105280f06290f41,(size_t *)0x1f480,in_RCX,in_R8);
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 submain(void)

{
  uint uVar1;
  uchar *in_RCX;
  size_t in_R8;
  undefined local_30 [16];
  
  _DAT_480000000007c741 = 0;
  uVar1 = gettimeofday((timeval *)local_30,(__timezone_ptr_t)0x0);
  if (uVar1 != 0) {
    printf("Error return from gettimeofday: %d",(ulong)uVar1);
  }
  _DAT_280f240c110f41f2 = (double)local_30._8_4_ * 1e-06 + (double)local_30._0_8_;
  _DAT_17905280f03290f = 0x32;
  uRam017905280f032913 = 0x43;
  uRam017905280f032917 = 0xf6;
  uRam017905280f03291b = 0xa8;
  _DAT_17905280f03291f = 0x88;
  uRam017905280f032923 = 0x5a;
  uRam017905280f032927 = 0x30;
  uRam017905280f03292b = 0x8d;
  _DAT_17905280f03292f = 0x31;
  uRam017905280f032933 = 0x31;
  uRam017905280f032937 = 0x98;
  uRam017905280f03293b = 0xa2;
  _DAT_17905280f03293f = 0xe0;
  uRam017905280f032943 = 0x37;
  uRam017905280f032947 = 7;
  uRam017905280f03294b = 0x34;
  _DAT_8605280f06290f41 = 0x2b;
  uRam8605280f06290f45 = 0x7e;
  uRam8605280f06290f49 = 0x15;
  uRam8605280f06290f4d = 0x16;
  _DAT_8605280f06290f51 = 0x28;
  uRam8605280f06290f55 = 0xae;
  uRam8605280f06290f59 = 0xd2;
  uRam8605280f06290f5d = 0xa6;
  _DAT_8605280f06290f61 = 0xab;
  uRam8605280f06290f65 = 0xf7;
  uRam8605280f06290f69 = 0x15;
  uRam8605280f06290f6d = 0x88;
  _DAT_8605280f06290f71 = 9;
  uRam8605280f06290f75 = 0xcf;
  uRam8605280f06290f79 = 0x4f;
  uRam8605280f06290f7d = 0x3c;
  encrypt(&DAT_17905280f03290f,0x6290f41);
  decrypt((EVP_PKEY_CTX *)&DAT_17905280f03290f,&DAT_8605280f06290f41,(size_t *)0x1f480,in_RCX,in_R8)
  ;
  uVar1 = gettimeofday((timeval *)local_30,(__timezone_ptr_t)0x0);
  if (uVar1 != 0) {
    printf("Error return from gettimeofday: %d",(ulong)uVar1);
  }
  _DAT_5c0f41f200110ff2 = (double)local_30._8_4_ * 1e-06 + (double)local_30._0_8_;
  printf("%0.6f\n",SUB84(_DAT_5c0f41f200110ff2 - _DAT_280f240c110f41f2,0));
  return _DAT_480000000007c741;
}


