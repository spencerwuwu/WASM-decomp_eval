
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <polybench.h>
#include "ghidra_base.h"
#include "aes.h"
void encrypt(char *__block,int __edflag)

{
  int bVar1;
  ushort uVar2;
  long lVar3;
  int uVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  int in_EDX;
  int uVar8;
  int in_register_00000034;
  long lVar9;
  int iVar10;
  int iVar11;
  int auVar12 [16];
  int auVar13 [16];
  
  uVar4 = 6;
  uVar8 = 2;
  lVar3 = 4;
  if (in_EDX < 0x2eec0) {
    if (in_EDX < 0x1f500) {
      if (in_EDX == 0x1f480) {
        _DAT_8b480000000001c7 = 0;
LAB_00100158:
        _DAT_c9310000000401c7 = 4;
        goto LAB_00100165;
      }
      if (in_EDX != 0x1f4c0) goto LAB_00100165;
    }
    else {
      if (in_EDX != 0x1f500) {
        if (in_EDX != 0x2ee80) goto LAB_00100165;
        _DAT_a1e90000000201c7 = 2;
        goto LAB_00100158;
      }
LAB_001000b7:
      uVar4 = 8;
      uVar8 = 4;
    }
LAB_001000c1:
    _DAT_158b481689 = uVar8;
    _DAT_2eefffd810a89 = uVar4;
    if (in_EDX < 0x2ef00) {
      if (in_EDX != 0x1f4c0) {
        if (in_EDX == 0x1f500) goto LAB_00100114;
        if (in_EDX != 0x2eec0) goto LAB_00100165;
      }
LAB_0010010d:
      lVar3 = 6;
    }
    else if ((in_EDX == 0x2ef00) || (in_EDX == 0x3e900)) {
LAB_00100114:
      lVar3 = 8;
    }
    else if (in_EDX == 0x3e8c0) goto LAB_0010010d;
  }
  else if (in_EDX < 0x3e880) {
    if (in_EDX == 0x2eec0) goto LAB_001000c1;
    if (in_EDX == 0x2ef00) goto LAB_001000b7;
  }
  else {
    if (in_EDX == 0x3e880) {
      _DAT_2eeb0000000401c7 = 4;
      goto LAB_00100158;
    }
    if (in_EDX == 0x3e8c0) {
      _DAT_8b480000000400c7 = 4;
      _DAT_6b80000000600c7 = 6;
      lVar3 = 6;
    }
    else if (in_EDX == 0x3e900) goto LAB_001000b7;
  }
LAB_00100165:
  lVar6 = 0;
  do {
    lVar9 = lVar6 * 0x10;
    *(uint *)(__block + lVar9) =
         *(uint *)(__block + lVar9) ^ *(uint *)(&DAT_89488f148b419066 + lVar6 * 4);
    *(uint *)(__block + lVar9 + 4) =
         *(uint *)(__block + lVar9 + 4) ^ *(uint *)(&DAT_89488f148b419246 + lVar6 * 4);
    *(uint *)(__block + lVar9 + 8) =
         *(uint *)(__block + lVar9 + 8) ^ *(uint *)(&DAT_89488f148b419426 + lVar6 * 4);
    *(uint *)(__block + lVar9 + 0xc) =
         *(uint *)(__block + lVar9 + 0xc) ^ *(uint *)(&DAT_89488f148b419606 + lVar6 * 4);
    lVar6 = lVar6 + 1;
  } while (lVar6 != lVar3);
  iVar11 = 1;
  if (_DAT_834100000001be41 < -8) {
    iVar10 = 1;
  }
  else {
    do {
      ByteSub_ShiftRow(__block,_DAT_f2e666666666666);
      MixColumn_AddRoundKey(__block,_DAT_f2e666666666666,iVar11);
      iVar10 = iVar11 + 1;
      bVar1 = iVar11 < _DAT_834100000001be41 + 9;
      iVar11 = iVar10;
    } while (bVar1);
  }
  ByteSub_ShiftRow(__block,_DAT_623e8df8948308b);
  uVar5 = 4;
  if (in_EDX < 0x2ef00) {
    if (in_EDX != 0x1f4c0) {
      if (in_EDX == 0x1f500) goto LAB_00100267;
      if (in_EDX != 0x2eec0) goto LAB_0010026c;
    }
  }
  else {
    if ((in_EDX == 0x2ef00) || (in_EDX == 0x3e900)) {
LAB_00100267:
      uVar5 = 8;
      goto LAB_0010026c;
    }
    if (in_EDX != 0x3e8c0) goto LAB_0010026c;
  }
  uVar5 = 6;
LAB_0010026c:
  uVar7 = 0;
  do {
    lVar3 = uVar7 + iVar10 * uVar5;
    lVar6 = uVar7 * 0x10;
    *(uint *)(__block + lVar6) =
         *(uint *)(__block + lVar6) ^ *(uint *)(&DAT_89488f148b419066 + lVar3 * 4);
    *(uint *)(__block + lVar6 + 4) =
         *(uint *)(__block + lVar6 + 4) ^ *(uint *)(&DAT_89488f148b419246 + lVar3 * 4);
    *(uint *)(__block + lVar6 + 8) =
         *(uint *)(__block + lVar6 + 8) ^ *(uint *)(&DAT_89488f148b419426 + lVar3 * 4);
    *(uint *)(__block + lVar6 + 0xc) =
         *(uint *)(__block + lVar6 + 0xc) ^ *(uint *)(&DAT_89488f148b419606 + lVar3 * 4);
    uVar7 = uVar7 + 1;
  } while (uVar7 != uVar5);
                                                 -(uint)(*(int *)(__block + 0x20) == 0xdc)))) ^
                                                 -(uint)(*(int *)(__block + 0x30) == 0x19)))) ^
                                                 -(uint)(*(int *)__block == 0x39)))) ^
                                                 -(uint)(*(int *)(__block + 0x10) == 2)))) ^
  auVar12 = packsswb(auVar12,auVar13);
  uVar5 = (uint)uVar2 - (uVar2 >> 1 & 0x5555);
  uVar5 = (uVar5 >> 2 & 0x3333) + (uVar5 & 0x3333);
  uVar5 = (uVar5 >> 4) + uVar5 & 0xf0f;
  _DAT_4b6f0ff3036f0ff3 = _DAT_4b6f0ff3036f0ff3 + ((uVar5 >> 8) + uVar5 & 0xff);
  return;
}
int8 KeySchedule(int param_1,int *param_2)

{
  int bVar1;
  int bVar2;
  byte bVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  int iVar7;
  uint *puVar8;
  long lVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  long lVar13;
  ulong uVar14;
  uint uVar15;
  uint uVar16;
  
  lVar5 = 4;
  if (param_1 < 0x2eec0) {
    uVar4 = 4;
    bVar1 = 1;
    if (param_1 < 0x1f500) {
      if (param_1 == 0x1f480) {
        lVar13 = 0xb;
      }
      else {
        if (param_1 != 0x1f4c0) {
          return 0xffffffff;
        }
        lVar13 = 0xd;
        lVar5 = 6;
      }
    }
    else {
      if (param_1 != 0x1f500) {
        if (param_1 != 0x2ee80) {
          return 0xffffffff;
        }
        lVar13 = 0xd;
        goto LAB_00100457;
      }
      lVar13 = 0xf;
      lVar5 = 8;
    }
    bVar3 = 0;
  }
  else {
    if (param_1 < 0x3e880) {
      if (param_1 == 0x2eec0) {
        lVar13 = 0xd;
        lVar5 = 6;
      }
      else {
        if (param_1 != 0x2ef00) {
          return 0xffffffff;
        }
        lVar13 = 0xf;
        lVar5 = 8;
      }
LAB_00100457:
      uVar4 = 6;
      bVar2 = 1;
      bVar3 = 0;
      bVar1 = 0;
      goto LAB_00100475;
    }
    if (param_1 != 0x3e880) {
      if (param_1 == 0x3e8c0) {
        lVar5 = 6;
      }
      else {
        if (param_1 != 0x3e900) {
          return 0xffffffff;
        }
        lVar5 = 8;
      }
    }
    lVar13 = 0xf;
    uVar4 = 8;
    bVar3 = 1;
    bVar1 = 0;
  }
  bVar2 = 0;
LAB_00100475:
  uVar14 = (ulong)uVar4;
  _DAT_45045e8b441a8945 = *param_2;
  _DAT_45045e8b441a8b25 = param_2[1];
  _DAT_45045e8b441a8d05 = param_2[2];
  _DAT_45045e8b441a8ee5 = param_2[3];
  _DAT_45045e8b441a8949 = param_2[4];
  _DAT_45045e8b441a8b29 = param_2[5];
  _DAT_45045e8b441a8d09 = param_2[6];
  _DAT_45045e8b441a8ee9 = param_2[7];
  _DAT_45045e8b441a894d = param_2[8];
  _DAT_45045e8b441a8b2d = param_2[9];
  _DAT_45045e8b441a8d0d = param_2[10];
  _DAT_45045e8b441a8eed = param_2[0xb];
  _DAT_45045e8b441a8951 = param_2[0xc];
  _DAT_45045e8b441a8b31 = param_2[0xd];
  _DAT_45045e8b441a8d11 = param_2[0xe];
  _DAT_45045e8b441a8ef1 = param_2[0xf];
  if (!bVar1) {
    _DAT_45045e8b441a8955 = param_2[0x10];
    _DAT_45045e8b441a8b35 = param_2[0x11];
    _DAT_45045e8b441a8d15 = param_2[0x12];
    _DAT_45045e8b441a8ef5 = param_2[0x13];
    _DAT_45045e8b441a8959 = param_2[0x14];
    _DAT_45045e8b441a8b39 = param_2[0x15];
    _DAT_45045e8b441a8d19 = param_2[0x16];
    _DAT_45045e8b441a8ef9 = param_2[0x17];
    if (!bVar2) {
      _DAT_45045e8b441a895d = param_2[0x18];
      _DAT_45045e8b441a8b3d = param_2[0x19];
      _DAT_45045e8b441a8d1d = param_2[0x1a];
      _DAT_45045e8b441a8efd = param_2[0x1b];
      _DAT_45045e8b441a8961 = param_2[0x1c];
      _DAT_45045e8b441a8b41 = param_2[0x1d];
      _DAT_45045e8b441a8d21 = param_2[0x1e];
      _DAT_45045e8b441a8f01 = param_2[0x1f];
    }
  }
  uVar6 = uVar14;
  do {
    iVar7 = (int)((uVar6 & 0xffffffff) % uVar14);
    if (iVar7 == 0) {
      iVar7 = *(int *)(uVar6 * 4 + 0x45045e8b441a8b21);
      iVar10 = iVar7 + 0xf;
      if (-1 < iVar7) {
        iVar10 = iVar7;
      }
      uVar4 = *(uint *)((long)(int)((uVar6 & 0xffffffff) / uVar14) * 4 + -0x163676b3fe0f7fc3) ^
              *(uint *)((long)(iVar10 >> 4) * 0x40 + 0x41000000001d8b4c + (long)(iVar7 % 0x10) * 4);
      iVar7 = *(int *)(uVar6 * 4 + 0x45045e8b441a8d01);
      iVar10 = iVar7 + 0xf;
      if (-1 < iVar7) {
        iVar10 = iVar7;
      }
      uVar11 = *(uint *)(uVar6 * 4 + 0x45045e8b441a8941);
      puVar8 = (uint *)((long)(iVar10 >> 4) * 0x40 + 0x41000000001d8b4c + (long)(iVar7 % 0x10) * 4);
      uVar15 = *(uint *)(uVar6 * 4 + 0x45045e8b441a8ee1);
LAB_0010065c:
      uVar12 = uVar15 + 0xf;
      if (-1 < (int)uVar15) {
        uVar12 = uVar15;
      }
      uVar16 = *puVar8;
      uVar15 = *(uint *)((long)((int)uVar12 >> 4) * 0x40 + 0x41000000001d8b4c +
                        (long)((int)uVar15 % 0x10) * 4);
      uVar12 = uVar11 + 0xf;
      if (-1 < (int)uVar11) {
        uVar12 = uVar11;
      }
      uVar11 = *(uint *)((long)((int)uVar12 >> 4) * 0x40 + 0x41000000001d8b4c +
                        (long)((int)uVar11 % 0x10) * 4);
    }
    else {
      uVar4 = *(uint *)(uVar6 * 4 + 0x45045e8b441a8941);
      uVar16 = *(uint *)(uVar6 * 4 + 0x45045e8b441a8b21);
      uVar15 = *(uint *)(uVar6 * 4 + 0x45045e8b441a8d01);
      uVar11 = *(uint *)(uVar6 * 4 + 0x45045e8b441a8ee1);
      if (!(int)(iVar7 != 4 | bVar3 ^ 1)) {
        uVar12 = uVar4 + 0xf;
        if (-1 < (int)uVar4) {
          uVar12 = uVar4;
        }
        uVar4 = *(uint *)((long)((int)uVar12 >> 4) * 0x40 + 0x41000000001d8b4c +
                         (long)((int)uVar4 % 0x10) * 4);
        uVar12 = uVar16 + 0xf;
        if (-1 < (int)uVar16) {
          uVar12 = uVar16;
        }
        puVar8 = (uint *)((long)((int)uVar12 >> 4) * 0x40 + 0x41000000001d8b4c +
                         (long)((int)uVar16 % 0x10) * 4);
        goto LAB_0010065c;
      }
    }
    lVar9 = uVar6 - uVar14;
    *(uint *)(&DAT_45045e8b441a8945 + uVar6 * 4) =
         uVar4 ^ *(uint *)(&DAT_45045e8b441a8945 + lVar9 * 4);
    *(uint *)(&DAT_45045e8b441a8b25 + uVar6 * 4) =
         uVar16 ^ *(uint *)(&DAT_45045e8b441a8b25 + lVar9 * 4);
    *(uint *)(&DAT_45045e8b441a8d05 + uVar6 * 4) =
         uVar15 ^ *(uint *)(&DAT_45045e8b441a8d05 + lVar9 * 4);
    *(uint *)(&DAT_45045e8b441a8ee5 + uVar6 * 4) =
         uVar11 ^ *(uint *)(&DAT_45045e8b441a8ee5 + lVar9 * 4);
    uVar6 = uVar6 + 1;
    if (uVar6 == lVar13 * lVar5) {
      return 0;
    }
  } while( 1 );
}
void ByteSub_ShiftRow(uint *param_1,int param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  uint *puVar5;
  
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
    puVar5 = param_1 + 0x10;
    lVar2 = 0x1c;
    lVar3 = 0x18;
    lVar4 = 0x14;
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
    puVar5 = param_1 + 8;
    lVar2 = 0x14;
    lVar3 = 0x10;
    lVar4 = 0xc;
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
    lVar2 = 0xc;
    lVar3 = 8;
    lVar4 = 4;
    puVar5 = param_1;
  }
  *puVar5 = *(uint *)((long)((int)*puVar5 >> 4) * 0x40 + 0x458a0c8b47f20149 +
                     (ulong)(*puVar5 & 0xf) * 4);
  param_1[lVar4] =
       *(uint *)((long)((int)param_1[lVar4] >> 4) * 0x40 + 0x458a0c8b47f20149 +
                (ulong)(param_1[lVar4] & 0xf) * 4);
  param_1[lVar3] =
       *(uint *)((long)((int)param_1[lVar3] >> 4) * 0x40 + 0x458a0c8b47f20149 +
                (ulong)(param_1[lVar3] & 0xf) * 4);
  param_1[lVar2] =
       *(uint *)((long)((int)param_1[lVar2] >> 4) * 0x40 + 0x458a0c8b47f20149 +
                (ulong)(param_1[lVar2] & 0xf) * 4);
  return;
}
int8 MixColumn_AddRoundKey(long param_1,uint param_2,int param_3)

{
  int *puVar1;
  uint *puVar2;
  uint *puVar3;
  ulong uVar4;
  int uVar5;
  int uVar6;
  int uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  int8 uVar13;
  int auVar14 [16];
  int iVar15;
  int iVar17;
  int iVar18;
  int auVar16 [16];
  int iVar19;
  int auVar20 [16];
  int auVar21 [16];
  int auVar22 [16];
  int auVar23 [16];
  int8 uVar24;
  int iVar27;
  int auVar25 [16];
  int auVar26 [16];
  int iVar28;
  int auVar29 [16];
  int auVar30 [16];
  int auVar31 [16];
  int8 uStack_88;
  int8 uStack_80;
  int8 auStack_78 [2];
  int auStack_68 [26];
  
  if (0 < (int)param_2) {
    if (3 < param_2) {
      uVar8 = (ulong)(param_2 & 0xfffffffc);
      uVar11 = 0;
      do {
        lVar9 = uVar11 * 0x10;
        auVar14 = *(int (*) [16])(param_1 + lVar9);
        puVar2 = (uint *)(param_1 + 0x10 + lVar9);
        auVar20 = *(int (*) [16])(param_1 + 0x20 + lVar9);
        puVar3 = (uint *)(param_1 + 0x30 + lVar9);
                                  ));
        auVar25 = auVar16 & __LCPI4_0;
        auVar29 = (auVar22 ^ auVar23) & __LCPI4_3;
        auVar25 = auVar22 ^ auVar23 ^ (~auVar25 & auVar20 | (auVar20 ^ __LCPI4_2) & auVar25);
        lVar9 = uVar11 + (long)(int)(param_3 * param_2);
        auVar26 = *(int (*) [16])(lVar9 * 4 + 0x841f0f2e666666) ^ auVar21 ^ auVar14 ^
                  ((auVar25 ^ __LCPI4_2) & auVar29 | ~auVar29 & auVar25);
        auVar25 = auVar23 & __LCPI4_0;
        auVar30 = (auVar29 ^ auVar21) & __LCPI4_3;
        auVar25 = auVar29 ^ auVar21 ^ ((auVar22 ^ __LCPI4_2) & auVar25 | ~auVar25 & auVar22);
        auVar31 = *(int (*) [16])(lVar9 * 4 + 0x841f0f2e666846) ^ auVar16 ^ auVar14 ^
                  ((auVar25 ^ __LCPI4_2) & auVar30 | ~auVar30 & auVar25);
        auVar25 = auVar21 & __LCPI4_0;
        auVar30 = (auVar22 ^ auVar14) & __LCPI4_3;
        auVar25 = auVar22 ^ auVar14 ^ ((auVar29 ^ __LCPI4_2) & auVar25 | ~auVar25 & auVar29);
        auVar29 = *(int (*) [16])(lVar9 * 4 + 0x841f0f2e666a26) ^ auVar16 ^ auVar23 ^
                  ((auVar25 ^ __LCPI4_2) & auVar30 | ~auVar30 & auVar25);
        auVar14 = auVar14 & __LCPI4_0;
        auVar25 = ((auVar22 ^ __LCPI4_2) & auVar14 | ~auVar14 & auVar22) ^ auVar20 ^ auVar16;
        auVar14 = (auVar20 ^ auVar16) & __LCPI4_3;
        auVar14 = *(int (*) [16])(lVar9 * 4 + 0x841f0f2e666c06) ^ auVar23 ^ auVar21 ^
                  ((auVar25 ^ __LCPI4_2) & auVar14 | ~auVar14 & auVar25);
        ;
        ;
        auStack_78[uVar11 * 2] =
        auStack_78[uVar11 * 2 + 1] =
        uVar11 = uVar11 + 4;
        if (uVar11 == uVar8) goto joined_r0x001012b9;
      } while( 1 );
    }
    uVar8 = 0;
    do {
      auVar14 = *(int (*) [16])(param_1 + uVar8 * 0x10);
      auVar20 = auVar14 & __LCPI4_0;
      lVar9 = uVar8 + (long)(int)(param_3 * param_2);
      auVar20 = ((auVar16 ^ __LCPI4_2) & auVar20 | ~auVar20 & auVar16) ^ auVar14;
      auVar14 = auVar14 & __LCPI4_3;
      *(int (*) [16])(&uStack_88 + uVar8 * 2) =
                             *(int *)(lVar9 * 4 + 0x1272056f1326)),
                             *(int *)(lVar9 * 4 + 0x1272056f0f66))) ^
           ((auVar20 ^ __LCPI4_2) & auVar14 | ~auVar14 & auVar20);
      uVar8 = uVar8 + 1;
joined_r0x001012b9:
    } while (uVar8 != param_2);
    if (0 < (int)param_2) {
      if (param_2 < 4) {
        lVar9 = 0;
      }
      else {
        lVar9 = 0;
        uVar8 = 0;
        do {
          uVar11 = lVar9 * 0x10;
          uVar5 = *(int *)((long)&uStack_88 + uVar11 + 4);
          uVar6 = *(int *)(&uStack_80 + lVar9 * 2);
          uVar7 = *(int *)((long)auStack_78 + (uVar11 - 4));
          puVar1 = (int *)(param_1 + uVar11);
          *puVar1 = *(int *)(&uStack_88 + lVar9 * 2);
          puVar1[1] = uVar5;
          puVar1[2] = uVar6;
          puVar1[3] = uVar7;
          uVar12 = uVar11 | 0x10;
          uVar5 = *(int *)((long)&uStack_88 + uVar12 + 4);
          uVar6 = *(int *)((long)&uStack_80 + uVar12);
          uVar7 = *(int *)((long)auStack_78 + (uVar12 - 4));
          puVar1 = (int *)(param_1 + uVar12);
          *puVar1 = *(int *)((long)&uStack_88 + uVar12);
          puVar1[1] = uVar5;
          puVar1[2] = uVar6;
          puVar1[3] = uVar7;
          uVar12 = uVar11 | 0x20;
          uVar5 = *(int *)((long)&uStack_88 + uVar12 + 4);
          uVar6 = *(int *)((long)&uStack_80 + uVar12);
          uVar7 = *(int *)((long)auStack_78 + (uVar12 - 4));
          puVar1 = (int *)(param_1 + uVar12);
          *puVar1 = *(int *)((long)&uStack_88 + uVar12);
          puVar1[1] = uVar5;
          puVar1[2] = uVar6;
          puVar1[3] = uVar7;
          uVar11 = uVar11 | 0x30;
          uVar5 = *(int *)((long)&uStack_88 + uVar11 + 4);
          uVar6 = *(int *)((long)&uStack_80 + uVar11);
          uVar7 = *(int *)((long)auStack_78 + (uVar11 - 4));
          puVar1 = (int *)(param_1 + uVar11);
          *puVar1 = *(int *)((long)&uStack_88 + uVar11);
          puVar1[1] = uVar5;
          puVar1[2] = uVar6;
          puVar1[3] = uVar7;
          lVar9 = lVar9 + 4;
          uVar8 = uVar8 + 4;
        } while (uVar8 != (param_2 & 0xfffffffc));
      }
      if ((ulong)(param_2 & 3) != 0) {
        uVar8 = 0;
        do {
          lVar10 = lVar9 * 0x10;
          uVar5 = *(int *)((long)&uStack_88 + lVar10 + 4);
          uVar6 = *(int *)(&uStack_80 + lVar9 * 2);
          uVar7 = *(int *)((long)auStack_78 + lVar10 + -4);
          puVar1 = (int *)(param_1 + lVar10);
          *puVar1 = *(int *)(&uStack_88 + lVar9 * 2);
          puVar1[1] = uVar5;
          puVar1[2] = uVar6;
          puVar1[3] = uVar7;
          lVar9 = lVar9 + 1;
          uVar8 = uVar8 + 1;
        } while (uVar8 != (param_2 & 3));
      }
    }
  }
  return 0;
}
int8 AddRoundKey(long param_1,int param_2,int param_3)

{
  long lVar1;
  uint *puVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  
  uVar3 = 4;
  if (param_2 < 0x2ef00) {
    if (param_2 != 0x1f4c0) {
      if (param_2 == 0x1f500) goto LAB_001007d6;
      if (param_2 != 0x2eec0) goto LAB_001007db;
    }
  }
  else {
    if ((param_2 == 0x2ef00) || (param_2 == 0x3e900)) {
LAB_001007d6:
      uVar3 = 8;
      goto LAB_001007db;
    }
    if (param_2 != 0x3e8c0) goto LAB_001007db;
  }
  uVar3 = 6;
LAB_001007db:
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
int decrypt(EVP_PKEY_CTX *ctx,uchar *out,size_t *outlen,uchar *in,size_t inlen)

{
  int bVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  int auVar10 [16];
  int auVar11 [16];
  
  iVar3 = (int)outlen;
  KeySchedule((ulong)outlen & 0xffffffff);
  iVar4 = _DAT_8100000004b9008b;
  if (iVar3 < 0x2eec0) {
    if (iVar3 < 0x1f500) {
      if (iVar3 != 0x1f480) {
        if (iVar3 == 0x1f4c0) goto LAB_00101552;
        goto LAB_00101610;
      }
      _DAT_8b480000000a00c7 = 10;
      _DAT_4b90000000400c7 = 4;
      uVar6 = 4;
      iVar4 = 10;
    }
    else {
      if (iVar3 == 0x1f500) goto LAB_00101576;
      if (iVar3 != 0x2ee80) goto LAB_00101610;
      _DAT_8b480000000c00c7 = 0xc;
      _DAT_4b90000000400c7 = 4;
      uVar6 = 4;
      iVar4 = 0xc;
    }
  }
  else {
    if (iVar3 < 0x3e880) {
      if (iVar3 == 0x2eec0) {
LAB_00101552:
        _DAT_8b480000000c00c7 = 0xc;
        _DAT_cb80000000600c7 = 6;
        iVar4 = 0xc;
      }
      else {
        if (iVar3 != 0x2ef00) goto LAB_00101610;
LAB_00101576:
        _DAT_8b480000000e00c7 = 0xe;
        _DAT_eb80000000800c7 = 8;
        iVar4 = 0xe;
      }
LAB_00101610:
      uVar6 = 4;
      if (iVar3 < 0x2eec0) {
        if (iVar3 != 0x1f4c0) {
          if (iVar3 == 0x1f500) goto LAB_00101647;
          goto LAB_00101653;
        }
      }
      else if (iVar3 != 0x3e8c0) {
        if (iVar3 == 0x2ef00) {
LAB_00101647:
          uVar6 = 8;
          goto LAB_00101653;
        }
        if (iVar3 != 0x2eec0) goto LAB_00101653;
      }
    }
    else {
      if (iVar3 == 0x3e880) {
        _DAT_8b480000000e00c7 = 0xe;
        _DAT_4b90000000400c7 = 4;
        uVar6 = 4;
        iVar4 = 0xe;
        goto LAB_00101653;
      }
      if (iVar3 != 0x3e8c0) {
        if (iVar3 != 0x3e900) goto LAB_00101610;
        _DAT_8b480000000e00c7 = 0xe;
        _DAT_eb80000000800c7 = 8;
        iVar4 = 0xe;
        goto LAB_00101647;
      }
      _DAT_8b480000000e00c7 = 0xe;
      _DAT_eb80000000600c7 = 6;
      iVar4 = 0xe;
    }
    uVar6 = 6;
  }
LAB_00101653:
  uVar7 = 0;
  do {
    lVar5 = uVar7 + (long)(int)(iVar4 * uVar6);
    lVar9 = uVar7 * 0x10;
    *(uint *)(ctx + lVar9) = *(uint *)(ctx + lVar9) ^ *(uint *)(&DAT_841f0f2e66666666 + lVar5 * 4);
    *(uint *)(ctx + lVar9 + 4) =
         *(uint *)(ctx + lVar9 + 4) ^ *(uint *)(&DAT_841f0f2e66666846 + lVar5 * 4);
    *(uint *)(ctx + lVar9 + 8) =
         *(uint *)(ctx + lVar9 + 8) ^ *(uint *)(&DAT_841f0f2e66666a26 + lVar5 * 4);
    *(uint *)(ctx + lVar9 + 0xc) =
         *(uint *)(ctx + lVar9 + 0xc) ^ *(uint *)(&DAT_841f0f2e66666c06 + lVar5 * 4);
    uVar7 = uVar7 + 1;
  } while (uVar7 != uVar6);
  InversShiftRow_ByteSub(ctx,_DAT_e8df894824348b41);
  uVar6 = _DAT_7c02fd8341288b44;
  if (1 < (int)_DAT_7c02fd8341288b44) {
    do {
      AddRoundKey_InversMixColumn(ctx,_DAT_e8df894824348b41,uVar6 - 1);
      InversShiftRow_ByteSub(ctx,_DAT_e8df894824348b41);
      bVar1 = 2 < uVar6;
      uVar6 = uVar6 - 1;
    } while (bVar1);
  }
  lVar5 = 4;
  if (iVar3 < 0x2ef00) {
    if (iVar3 != 0x1f4c0) {
      if (iVar3 == 0x1f500) goto LAB_0010174e;
      if (iVar3 != 0x2eec0) goto LAB_00101753;
    }
  }
  else {
    if ((iVar3 == 0x2ef00) || (iVar3 == 0x3e900)) {
LAB_0010174e:
      lVar5 = 8;
      goto LAB_00101753;
    }
    if (iVar3 != 0x3e8c0) goto LAB_00101753;
  }
  lVar5 = 6;
LAB_00101753:
  lVar9 = 0;
  do {
    lVar8 = lVar9 * 0x10;
    *(uint *)(ctx + lVar8) = *(uint *)(ctx + lVar8) ^ *(uint *)(&DAT_841f0f2e66666666 + lVar9 * 4);
    *(uint *)(ctx + lVar8 + 4) =
         *(uint *)(ctx + lVar8 + 4) ^ *(uint *)(&DAT_841f0f2e66666846 + lVar9 * 4);
    *(uint *)(ctx + lVar8 + 8) =
         *(uint *)(ctx + lVar8 + 8) ^ *(uint *)(&DAT_841f0f2e66666a26 + lVar9 * 4);
    *(uint *)(ctx + lVar8 + 0xc) =
         *(uint *)(ctx + lVar8 + 0xc) ^ *(uint *)(&DAT_841f0f2e66666c06 + lVar9 * 4);
    lVar9 = lVar9 + 1;
  } while (lVar9 != lVar5);
                                                 -(uint)(*(int *)(ctx + 0x20) == 0x31)))) ^
                                                 -(uint)(*(int *)(ctx + 0x30) == 0xe0)))) ^
                                                 -(uint)(*(int *)ctx == 0x32)))) ^
                                                 -(uint)(*(int *)(ctx + 0x10) == 0x88)))) ^
  auVar10 = packsswb(auVar10,auVar11);
  uVar6 = (uint)uVar2 - (uVar2 >> 1 & 0x5555);
  uVar6 = (uVar6 >> 2 & 0x3333) + (uVar6 & 0x3333);
  uVar6 = (uVar6 >> 4) + uVar6 & 0xf0f;
  _DAT_4b6f0ff3036f0ff3 = _DAT_4b6f0ff3036f0ff3 + ((uVar6 >> 8) + uVar6 & 0xff);
  return 0;
}
void InversShiftRow_ByteSub(uint *param_1,int param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  uint *puVar5;
  
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
    puVar5 = param_1 + 0x10;
    lVar2 = 0x1c;
    lVar3 = 0x18;
    lVar4 = 0x14;
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
    puVar5 = param_1 + 8;
    lVar2 = 0x14;
    lVar3 = 0x10;
    lVar4 = 0xc;
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
    lVar2 = 0xc;
    lVar3 = 8;
    lVar4 = 4;
    puVar5 = param_1;
  }
  *puVar5 = *(uint *)((long)((int)*puVar5 >> 4) * 0x40 + 0x458a0c8b47f20149 +
                     (ulong)(*puVar5 & 0xf) * 4);
  param_1[lVar4] =
       *(uint *)((long)((int)param_1[lVar4] >> 4) * 0x40 + 0x458a0c8b47f20149 +
                (ulong)(param_1[lVar4] & 0xf) * 4);
  param_1[lVar3] =
       *(uint *)((long)((int)param_1[lVar3] >> 4) * 0x40 + 0x458a0c8b47f20149 +
                (ulong)(param_1[lVar3] & 0xf) * 4);
  param_1[lVar2] =
       *(uint *)((long)((int)param_1[lVar2] >> 4) * 0x40 + 0x458a0c8b47f20149 +
                (ulong)(param_1[lVar2] & 0xf) * 4);
  return;
}
int8 AddRoundKey_InversMixColumn(long param_1,uint param_2,int param_3)

{
  long lVar1;
  int *puVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  int uVar6;
  int uVar7;
  int uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar22;
  uint uVar23;
  int auVar21 [16];
  uint auStack_b8 [34];
  
  if (0 < (int)param_2) {
    uVar9 = 0;
    do {
      lVar10 = uVar9 + (long)(int)(param_3 * param_2);
      lVar13 = uVar9 * 0x10;
      *(uint *)(param_1 + lVar13) =
           *(uint *)(param_1 + lVar13) ^ *(uint *)(lVar10 * 4 + 0x841f0f2e666666);
      puVar3 = (uint *)(param_1 + 4 + lVar13);
      *puVar3 = *puVar3 ^ *(uint *)(lVar10 * 4 + 0x841f0f2e666846);
      puVar3 = (uint *)(param_1 + 8 + lVar13);
      *puVar3 = *puVar3 ^ *(uint *)(lVar10 * 4 + 0x841f0f2e666a26);
      puVar3 = (uint *)(param_1 + 0xc + lVar13);
      *puVar3 = *puVar3 ^ *(uint *)(lVar10 * 4 + 0x841f0f2e666c06);
      uVar9 = uVar9 + 1;
    } while (uVar9 != param_2);
    if (0 < (int)param_2) {
      uVar9 = 0;
      do {
        uVar11 = uVar9 * 4 & 0xffffffff;
        lVar10 = 0;
        do {
          lVar1 = lVar10 + uVar9 * 4;
          lVar13 = lVar10 + 1;
          uVar14 = *(uint *)(param_1 + lVar1 * 4);
          uVar5 = uVar14 * 2 ^ 0x11b;
          if ((uVar14 & 0x7fffff80) != 0x80) {
            uVar5 = uVar14 * 2;
          }
          uVar4 = *(uint *)(param_1 + ((uint)lVar13 & 3 | uVar11) * 4);
          uVar20 = uVar4 * 2 ^ 0x11b;
          if ((uVar4 & 0x7fffff80) != 0x80) {
            uVar20 = uVar4 * 2;
          }
          uVar16 = (uVar5 ^ uVar14) * 2;
          uVar5 = *(uint *)(param_1 + ((int)lVar10 + 2U & 3 | uVar11) * 4);
          uVar14 = uVar14 ^ ((uVar16 ^ 0x11b) & uVar19 | ~uVar19 & uVar16);
          uVar16 = uVar4 ^ ((uVar20 * 2 ^ 0x11b) & uVar22 | ~uVar22 & uVar20 * 2);
          uVar20 = uVar5 * 2 ^ 0x11b;
          if ((uVar5 & 0x7fffff80) != 0x80) {
            uVar20 = uVar5 * 2;
          }
          uVar19 = *(uint *)(param_1 + ((int)lVar10 - 1U & 3 | uVar11) * 4);
          uVar22 = uVar19 * 2 ^ 0x11b;
          if ((uVar19 & 0x7fffff80) != 0x80) {
            uVar22 = uVar19 * 2;
          }
          uVar15 = (uVar20 ^ uVar5) * 2;
          uVar20 = (uVar15 ^ 0x11b) & uVar20 | ~uVar20 & uVar15;
          uVar22 = (uVar22 * 2 ^ 0x11b) & uVar23 | ~uVar23 & uVar22 * 2;
          uVar15 = -(uint)((uVar14 & 0x7fffff80) == 0x80);
          uVar23 = -(uint)((uVar16 & 0x7fffff80) == 0x80);
          uVar17 = -(uint)((uVar20 & 0x7fffff80) == 0x80);
          uVar18 = -(uint)((uVar22 & 0x7fffff80) == 0x80);
          uVar14 = uVar14 * 2;
          uVar16 = uVar16 * 2;
          uVar20 = uVar20 * 2;
          uVar22 = uVar22 * 2;
          auStack_b8[lVar1] =
               uVar4 ^ uVar5 ^ uVar19 ^
               ((uVar22 ^ 0x11b) & uVar18 | ~uVar18 & uVar22) ^
               ((uVar16 ^ 0x11b) & uVar23 | ~uVar23 & uVar16) ^
               ((uVar20 ^ 0x11b) & uVar17 | ~uVar17 & uVar20) ^
               ((uVar14 ^ 0x11b) & uVar15 | ~uVar15 & uVar14);
          lVar10 = lVar13;
        } while (lVar13 != 4);
        uVar9 = uVar9 + 1;
      } while (uVar9 != param_2);
      if (0 < (int)param_2) {
        if (param_2 < 4) {
          lVar10 = 0;
        }
        else {
          lVar10 = 0;
          uVar9 = 0;
          do {
            uVar11 = lVar10 * 0x10;
            uVar14 = auStack_b8[lVar10 * 4 + 1];
            uVar5 = auStack_b8[lVar10 * 4 + 2];
            uVar4 = auStack_b8[lVar10 * 4 + 3];
            puVar3 = (uint *)(param_1 + uVar11);
            *puVar3 = auStack_b8[lVar10 * 4];
            puVar3[1] = uVar14;
            puVar3[2] = uVar5;
            puVar3[3] = uVar4;
            uVar12 = uVar11 | 0x10;
            uVar6 = *(int *)((long)auStack_b8 + uVar12 + 4);
            uVar7 = *(int *)((long)auStack_b8 + uVar12 + 8);
            uVar8 = *(int *)((long)auStack_b8 + uVar12 + 0xc);
            puVar2 = (int *)(param_1 + uVar12);
            *puVar2 = *(int *)((long)auStack_b8 + uVar12);
            puVar2[1] = uVar6;
            puVar2[2] = uVar7;
            puVar2[3] = uVar8;
            uVar12 = uVar11 | 0x20;
            uVar6 = *(int *)((long)auStack_b8 + uVar12 + 4);
            uVar7 = *(int *)((long)auStack_b8 + uVar12 + 8);
            uVar8 = *(int *)((long)auStack_b8 + uVar12 + 0xc);
            puVar2 = (int *)(param_1 + uVar12);
            *puVar2 = *(int *)((long)auStack_b8 + uVar12);
            puVar2[1] = uVar6;
            puVar2[2] = uVar7;
            puVar2[3] = uVar8;
            uVar11 = uVar11 | 0x30;
            uVar6 = *(int *)((long)auStack_b8 + uVar11 + 4);
            uVar7 = *(int *)((long)auStack_b8 + uVar11 + 8);
            uVar8 = *(int *)((long)auStack_b8 + uVar11 + 0xc);
            puVar2 = (int *)(param_1 + uVar11);
            *puVar2 = *(int *)((long)auStack_b8 + uVar11);
            puVar2[1] = uVar6;
            puVar2[2] = uVar7;
            puVar2[3] = uVar8;
            lVar10 = lVar10 + 4;
            uVar9 = uVar9 + 4;
          } while (uVar9 != (param_2 & 0xfffffffc));
        }
        if ((ulong)(param_2 & 3) != 0) {
          uVar9 = 0;
          do {
            uVar14 = auStack_b8[lVar10 * 4 + 1];
            uVar5 = auStack_b8[lVar10 * 4 + 2];
            uVar4 = auStack_b8[lVar10 * 4 + 3];
            puVar3 = (uint *)(param_1 + lVar10 * 0x10);
            *puVar3 = auStack_b8[lVar10 * 4];
            puVar3[1] = uVar14;
            puVar3[2] = uVar5;
            puVar3[3] = uVar4;
            lVar10 = lVar10 + 1;
            uVar9 = uVar9 + 1;
          } while (uVar9 != (param_2 & 3));
        }
      }
    }
  }
  return 0;
}
int SubByte(int param_1)

{
  int iVar1;
  
  iVar1 = param_1 + 0xf;
  if (-1 < param_1) {
    iVar1 = param_1;
  }
  return *(int *)
          ((long)(iVar1 >> 4) * 0x40 + -0x7be0f0993c7efb75 + (long)(param_1 % 0x10) * 4);
}
int8 aes_main(void)

{
  uchar *in_RCX;
  size_t in_R8;
  
  _DAT_32405280f03290f = 0x32;
  uRam032405280f032913 = 0x43;
  uRam032405280f032917 = 0xf6;
  uRam032405280f03291b = 0xa8;
  _DAT_32405280f03291f = 0x88;
  uRam032405280f032923 = 0x5a;
  uRam032405280f032927 = 0x30;
  uRam032405280f03292b = 0x8d;
  _DAT_32405280f03292f = 0x31;
  uRam032405280f032933 = 0x31;
  uRam032405280f032937 = 0x98;
  uRam032405280f03293b = 0xa2;
  _DAT_32405280f03293f = 0xe0;
  uRam032405280f032943 = 0x37;
  uRam032405280f032947 = 7;
  uRam032405280f03294b = 0x34;
  _DAT_3105280f06290f41 = 0x2b;
  uRam3105280f06290f45 = 0x7e;
  uRam3105280f06290f49 = 0x15;
  uRam3105280f06290f4d = 0x16;
  _DAT_3105280f06290f51 = 0x28;
  uRam3105280f06290f55 = 0xae;
  uRam3105280f06290f59 = 0xd2;
  uRam3105280f06290f5d = 0xa6;
  _DAT_3105280f06290f61 = 0xab;
  uRam3105280f06290f65 = 0xf7;
  uRam3105280f06290f69 = 0x15;
  uRam3105280f06290f6d = 0x88;
  _DAT_3105280f06290f71 = 9;
  uRam3105280f06290f75 = 0xcf;
  uRam3105280f06290f79 = 0x4f;
  uRam3105280f06290f7d = 0x3c;
  encrypt(&DAT_32405280f03290f,0x6290f41);
  decrypt((EVP_PKEY_CTX *)&DAT_32405280f03290f,&DAT_3105280f06290f41,(size_t *)0x1f480,in_RCX,in_R8)
  ;
  return 0;
}
