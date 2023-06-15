
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <polybench.h>
#include "ghidra_base.h"
#include "dfmul.h"
void shift64RightJamming(ulong param_1,int param_2,ulong *param_3)

{
  if (param_2 != 0) {
    if (param_2 < 0x40) {
      *param_3 = (ulong)(param_1 << (-(byte)param_2 & 0x3f) != 0) |
                 param_1 >> ((byte)param_2 & 0x3f);
      return;
    }
    param_1 = (ulong)(param_1 != 0);
  }
  *param_3 = param_1;
  return;
}
void mul64To128(ulong param_1,ulong param_2,long *param_3,ulong *param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar1 = (param_1 & 0xffffffff) * (param_2 >> 0x20);
  uVar2 = (param_2 & 0xffffffff) * (param_1 >> 0x20);
  uVar3 = uVar2 + uVar1;
  *param_4 = param_2 * param_1;
  *param_3 = (uVar3 >> 0x20) + (param_2 >> 0x20) * (param_1 >> 0x20) +
             ((ulong)CARRY8(uVar2,uVar1) << 0x20) + (ulong)(param_2 * param_1 < uVar3 << 0x20);
  return;
}
void float_raise(uint param_1)

{
  *puRam0000000000100097 = *puRam0000000000100097 | param_1;
  return;
}
int float64_is_nan(long param_1)

{
  return 0xffe0000000000000 < (ulong)(param_1 * 2);
}
int float64_is_signaling_nan(ulong param_1)

{
  return (param_1 & 0x7ffffffffffff) != 0 && (param_1 & 0x7ff8000000000000) == 0x7ff0000000000000;
}
ulong extractFloat64Frac(ulong param_1)

{
  return param_1 & 0xfffffffffffff;
}
uint extractFloat64Exp(int8 param_1)

{
  return (uint)((ulong)param_1 >> 0x34) & 0x7ff;
}
ulong extractFloat64Sign(ulong param_1)

{
  return param_1 >> 0x3f;
}
void normalizeFloat64Subnormal(ulong param_1,int *param_2,long *param_3)

{
  int bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  bVar1 = param_1 >> 0x20 == 0;
  uVar3 = (uint)(param_1 >> 0x20);
  if (bVar1) {
    uVar3 = (uint)param_1;
  }
  uVar2 = uVar3 << 0x10;
  if (uVar3 >= 0x10000) {
    uVar2 = uVar3;
  }
  uVar4 = (uint)(uVar3 < 0x10000) * 0x10;
  uVar5 = uVar4 + 8;
  uVar3 = uVar2 << 8;
  if (0xffffff < uVar2) {
    uVar5 = uVar4;
    uVar3 = uVar2;
  }
  iVar6 = (uVar5 | (uint)bVar1 << 5) +
          *(int *)(countLeadingZeros32_countLeadingZerosHigh + (ulong)(uVar3 >> 0x18) * 4);
  *param_3 = param_1 << ((char)iVar6 - 0xbU & 0x3f);
  *param_2 = 0xc - iVar6;
  return;
}
long packFloat64(long param_1,long param_2,long param_3)

{
  return (param_1 << 0x3f) + param_3 + (param_2 << 0x34);
}
long roundAndPackFloat64(ulong param_1,long param_2,ulong param_3)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  uint uVar6;
  int bVar7;
  
  param_1 = param_1 & 0xffffffff;
  if (_DAT_ff831174ff85398b == 0) {
    lVar5 = 0x200;
    lVar2 = 0;
  }
  else if (_DAT_ff831174ff85398b == 1) {
    lVar2 = -1;
    lVar5 = 0;
  }
  else {
    if ((int)param_1 == 0) {
      bVar7 = _DAT_ff831174ff85398b == 3;
    }
    else {
      bVar7 = _DAT_ff831174ff85398b == 2;
    }
    lVar5 = 0x3ff;
    if (bVar7) {
      lVar5 = 0;
    }
    lVar2 = -(ulong)bVar7;
  }
  uVar6 = (uint)param_3 & 0x3ff;
  uVar1 = (uint)param_2;
  if (0x7fc < (uVar1 & 0xffff)) {
    if ((0x7fd < (int)uVar1) || ((uVar1 == 0x7fd && ((long)(lVar5 + param_3) < 0)))) {
      DAT_483fe0c148090a80 = DAT_483fe0c148090a80 | 9;
      return lVar2 + (param_1 << 0x3f) + 0x7ff0000000000000;
    }
    if ((int)uVar1 < 0) {
      if ((int)uVar1 < -0x3f) {
        param_3 = (ulong)(param_3 != 0);
      }
      else {
        param_3 = (ulong)(param_3 << ((byte)param_2 & 0x3f) != 0) |
                  param_3 >> (-(byte)param_2 & 0x3f);
      }
      param_2 = 0;
      uVar6 = (uint)param_3 & 0x3ff;
      if ((param_3 & 0x3ff) == 0) {
        uVar6 = 0;
      }
      else {
        DAT_c9314503eb040980 = DAT_c9314503eb040980 | 4;
      }
    }
  }
  if (uVar6 != 0) {
    DAT_c148c2014c010980 = DAT_c148c2014c010980 | 1;
  }
  uVar3 = ~(ulong)((_DAT_ff831174ff85398b | uVar6 ^ 0x200) == 0) & param_3 + lVar5 >> 10;
  uVar4 = param_2 << 0x34;
  if (uVar3 == 0) {
    uVar4 = uVar3;
  }
  return (param_1 << 0x3f | uVar3) + uVar4;
}
ulong float64_mul(ulong param_1,ulong param_2)

{
  int bVar1;
  int bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  int iVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  uint uVar14;
  ulong uVar15;
  uint uVar16;
  int bVar17;
  int bVar18;
  
  uVar11 = param_1 & 0xfffffffffffff;
  uVar3 = (uint)(param_1 >> 0x20);
  uVar14 = uVar3 >> 0x14 & 0x7ff;
  uVar7 = param_2 & 0xfffffffffffff;
  uVar5 = (uint)(param_2 >> 0x20);
  uVar4 = uVar5 >> 0x14 & 0x7ff;
  uVar10 = param_2 ^ param_1;
  if (uVar14 == 0x7ff) {
    if ((uVar11 != 0) || ((uVar7 != 0 && (uVar4 == 0x7ff)))) {
LAB_00100364:
      bVar17 = (param_1 & 0x7ff8000000000000) == 0x7ff0000000000000;
      bVar1 = (param_1 & 0x7ffffffffffff) != 0;
      bVar18 = (param_2 & 0x7ff8000000000000) == 0x7ff0000000000000;
      bVar2 = (param_2 & 0x7ffffffffffff) != 0;
      if ((bVar1 && bVar17) || (bVar2 && bVar18)) {
        DAT_49c0ff4810088041 = DAT_49c0ff4810088041 | 0x10;
      }
      uVar7 = param_2 | 0x8000000000000;
      if (param_2 * 2 < 0xffe0000000000001) {
        uVar7 = param_1 | 0x8000000000000;
      }
      if (bVar1 && bVar17) {
        uVar7 = param_1 | 0x8000000000000;
      }
      if (bVar2 && bVar18) {
        uVar7 = param_2 | 0x8000000000000;
      }
      return uVar7;
    }
    uVar7 = uVar5 >> 0x14 & 0x7ff | uVar7;
joined_r0x0010033b:
    if (uVar7 != 0) {
      return uVar10 & 0x8000000000000000 | 0x7ff0000000000000;
    }
    DAT_c35bc8ff48100980 = DAT_c35bc8ff48100980 | 0x10;
    return 0x7fffffffffffffff;
  }
  if (uVar4 == 0x7ff) {
    if (uVar7 != 0) goto LAB_00100364;
    uVar7 = uVar3 >> 0x14 & 0x7ff | uVar11;
    goto joined_r0x0010033b;
  }
  if (uVar14 == 0) {
    if (uVar11 == 0) goto LAB_001005b3;
    bVar1 = uVar11 >> 0x20 == 0;
    uVar3 = (uint)(uVar11 >> 0x20);
    if (bVar1) {
      uVar3 = (uint)param_1;
    }
    uVar5 = uVar3 << 0x10;
    if (uVar3 >= 0x10000) {
      uVar5 = uVar3;
    }
    uVar16 = (uint)(uVar3 < 0x10000) * 0x10;
    uVar14 = uVar16 + 8;
    uVar3 = uVar5 << 8;
    if (0xffffff < uVar5) {
      uVar14 = uVar16;
      uVar3 = uVar5;
    }
    iVar8 = (uVar14 | (uint)bVar1 << 5) +
            *(int *)(countLeadingZeros32_countLeadingZerosHigh + (ulong)(uVar3 >> 0x18) * 4);
    uVar11 = uVar11 << ((char)iVar8 - 0xbU & 0x3f);
    uVar14 = 0xc - iVar8;
  }
  if (uVar4 == 0) {
    if (uVar7 == 0) {
LAB_001005b3:
      return uVar10 & 0x8000000000000000;
    }
    bVar1 = uVar7 >> 0x20 == 0;
    uVar3 = (uint)(uVar7 >> 0x20);
    if (bVar1) {
      uVar3 = (uint)param_2;
    }
    uVar5 = uVar3 << 0x10;
    if (uVar3 >= 0x10000) {
      uVar5 = uVar3;
    }
    uVar16 = (uint)(uVar3 < 0x10000) * 0x10;
    uVar4 = uVar16 + 8;
    uVar3 = uVar5 << 8;
    if (0xffffff < uVar5) {
      uVar4 = uVar16;
      uVar3 = uVar5;
    }
    iVar8 = (uVar4 | (uint)bVar1 << 5) +
            *(int *)(countLeadingZeros32_countLeadingZerosHigh + (ulong)(uVar3 >> 0x18) * 4);
    uVar7 = uVar7 << ((char)iVar8 - 0xbU & 0x3f);
    uVar4 = 0xc - iVar8;
  }
  uVar6 = uVar11 << 10 | 0x4000000000000000;
  uVar13 = uVar7 << 0xb | 0x8000000000000000;
  uVar9 = uVar6 >> 0x20;
  uVar15 = uVar13 >> 0x20;
  uVar12 = (uVar11 << 10 & 0xffffffff) * uVar15;
  uVar7 = (uVar7 << 0xb & 0xffffffff) * uVar9;
  uVar11 = uVar7 + uVar12;
  uVar13 = uVar13 * uVar6;
  uVar6 = (ulong)(uVar13 != 0) |
          (uVar11 >> 0x20) + uVar15 * uVar9 + ((ulong)CARRY8(uVar7,uVar12) << 0x20) +
          (ulong)(uVar13 < uVar11 << 0x20);
  uVar7 = uVar6 * 2;
  uVar11 = uVar7;
  if (-1 >= (long)uVar7) {
    uVar11 = uVar6;
  }
  uVar7 = roundAndPackFloat64(uVar10 >> 0x3f,((uVar4 + uVar14) - (uint)(-1 < (long)uVar7)) + -0x3ff,
                              uVar11);
  return uVar7;
}
void ullong_to_double(void)

{
  return;
}
