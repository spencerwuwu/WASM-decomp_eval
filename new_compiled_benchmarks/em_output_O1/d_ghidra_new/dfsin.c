
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <polybench.h>
#include "ghidra_base.h"
#include "dfsin.h"
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
void shift64ExtraRightJamming(ulong param_1,ulong param_2,int param_3,ulong *param_4,ulong *param_5)

{
  if (param_3 != 0) {
    if (param_3 < 0x40) {
      param_2 = (ulong)(param_2 != 0) | param_1 << (-(byte)param_3 & 0x3f);
      param_1 = param_1 >> ((byte)param_3 & 0x3f);
    }
    else {
      if (param_3 == 0x40) {
        param_2 = param_2 != 0 | param_1;
      }
      else {
        param_2 = (ulong)((param_2 | param_1) != 0);
      }
      param_1 = 0;
    }
  }
  *param_5 = param_2;
  *param_4 = param_1;
  return;
}
void add128(long param_1,ulong param_2,long param_3,ulong param_4,long *param_5,long *param_6)

{
  *param_6 = param_2 + param_4;
  *param_5 = param_1 + param_3 + (ulong)CARRY8(param_2,param_4);
  return;
}
void sub128(long param_1,ulong param_2,long param_3,ulong param_4,long *param_5,long *param_6)

{
  *param_6 = param_2 - param_4;
  *param_5 = (param_1 - param_3) - (ulong)(param_2 < param_4);
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
  *puRam0000000000100117 = *puRam0000000000100117 | param_1;
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
void normalizeRoundAndPackFloat64(int8 param_1,int param_2,ulong param_3)

{
  int bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  bVar1 = param_3 >> 0x20 != 0;
  uVar3 = (uint)(param_3 >> 0x20);
  if (!bVar1) {
    uVar3 = (uint)param_3;
  }
  uVar2 = uVar3 << 0x10;
  if (uVar3 >= 0x10000) {
    uVar2 = uVar3;
  }
  iVar5 = (uint)(uVar3 < 0x10000) * 0x10;
  iVar4 = iVar5 + 8;
  uVar3 = uVar2 << 8;
  if (0xffffff < uVar2) {
    iVar4 = iVar5;
    uVar3 = uVar2;
  }
  iVar4 = (-(uint)bVar1 | 0x1f) + iVar4 +
          *(int *)(countLeadingZeros32_countLeadingZerosHigh + (ulong)(uVar3 >> 0x18) * 4);
  roundAndPackFloat64(param_1,param_2 - iVar4,param_3 << ((byte)iVar4 & 0x3f));
  return;
}
long int32_to_float64(uint param_1)

{
  uint uVar1;
  ulong uVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  int iVar6;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar5 = (ulong)-param_1;
  if (0 < (int)param_1) {
    uVar5 = (ulong)param_1;
  }
  uVar4 = (uint)uVar5;
  uVar2 = (ulong)(uVar4 << 0x10);
  if (uVar4 >= 0x10000) {
    uVar2 = uVar5;
  }
  iVar6 = (uint)(uVar4 < 0x10000) * 0x10;
  uVar1 = (uint)uVar2;
  iVar3 = iVar6 + 8;
  uVar4 = uVar1 << 8;
  if (0xffffff < uVar1) {
    iVar3 = iVar6;
    uVar4 = uVar1;
  }
  return ((ulong)(0x41d - (iVar3 + *(int *)(countLeadingZeros32_countLeadingZerosHigh +
                                           (ulong)(uVar4 >> 0x18) * 4))) << 0x34) +
         ((ulong)(param_1 >> 0x1f) << 0x3f) +
         (uVar5 << ((char)(iVar3 + *(int *)(countLeadingZeros32_countLeadingZerosHigh +
                                           (ulong)(uVar4 >> 0x18) * 4)) + 0x15U & 0x3f));
}
ulong addFloat64Sigs(ulong param_1,ulong param_2,ulong param_3)

{
  int bVar1;
  int bVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  int iVar6;
  ulong uVar7;
  ulong uVar8;
  int bVar9;
  int bVar10;
  
  uVar3 = (uint)(param_1 >> 0x34) & 0x7ff;
  uVar5 = (uint)(param_2 >> 0x34) & 0x7ff;
  uVar4 = param_1 & 0xfffffffffffff;
  uVar7 = uVar4 * 0x200;
  uVar8 = (param_2 & 0xfffffffffffff) * 0x200;
  iVar6 = uVar3 - uVar5;
  if (iVar6 == 0 || uVar3 < uVar5) {
    if (iVar6 < 0) {
      if (uVar5 == 0x7ff) {
        if ((param_2 & 0xfffffffffffff) == 0) {
          return param_3 << 0x3f | 0x7ff0000000000000;
        }
        goto LAB_0010048f;
      }
      if (uVar3 != 0) {
        uVar7 = uVar7 | 0x2000000000000000;
      }
      iVar6 = iVar6 + (uint)(uVar3 == 0);
      uVar3 = uVar5;
      if (iVar6 != 0) {
        if (iVar6 < -0x3f) {
          uVar7 = (ulong)(uVar7 != 0);
        }
        else {
          uVar7 = (ulong)(uVar7 << ((byte)iVar6 & 0x3f) != 0) | uVar7 >> (-(byte)iVar6 & 0x3f);
        }
      }
      goto LAB_001005b6;
    }
    if (uVar3 == 0) {
      return param_3 << 0x3f | uVar8 + uVar7 >> 9;
    }
    if (uVar3 != 0x7ff) {
      uVar4 = uVar8 + uVar7 | 0x4000000000000000;
      goto LAB_001005ce;
    }
    uVar4 = (param_2 | param_1) & 0xfffffffffffff;
  }
  else if (uVar3 != 0x7ff) {
    if (uVar5 != 0) {
      uVar8 = uVar8 | 0x2000000000000000;
    }
    iVar6 = iVar6 - (uint)(uVar5 == 0);
    if (iVar6 != 0) {
      if (iVar6 < 0x40) {
        uVar8 = (ulong)(uVar8 << (-(byte)iVar6 & 0x3f) != 0) | uVar8 >> ((byte)iVar6 & 0x3f);
      }
      else {
        uVar8 = (ulong)(uVar8 != 0);
      }
    }
LAB_001005b6:
    uVar8 = (uVar7 | 0x2000000000000000) + uVar8;
    uVar7 = uVar8 * 2;
    uVar4 = uVar7;
    if (-1 >= (long)uVar7) {
      uVar4 = uVar8;
    }
    uVar3 = uVar3 - (-1 < (long)uVar7);
LAB_001005ce:
    uVar8 = roundAndPackFloat64(param_3 & 0xffffffff,uVar3,uVar4);
    return uVar8;
  }
  if (uVar4 == 0) {
    return param_1;
  }
LAB_0010048f:
  bVar9 = (param_1 & 0x7ff8000000000000) == 0x7ff0000000000000;
  bVar1 = (param_1 & 0x7ffffffffffff) != 0;
  bVar10 = (param_2 & 0x7ff8000000000000) == 0x7ff0000000000000;
  bVar2 = (param_2 & 0x7ffffffffffff) != 0;
  if ((bVar1 && bVar9) || (bVar2 && bVar10)) {
    DAT_49c0ff4810088041 = DAT_49c0ff4810088041 | 0x10;
  }
  uVar8 = param_2 | 0x8000000000000;
  if (param_2 * 2 < 0xffe0000000000001) {
    uVar8 = param_1 | 0x8000000000000;
  }
  if (bVar1 && bVar9) {
    uVar8 = param_1 | 0x8000000000000;
  }
  if (bVar2 && bVar10) {
    uVar8 = param_2 | 0x8000000000000;
  }
  return uVar8;
}
ulong subFloat64Sigs(ulong param_1,ulong param_2,uint param_3)

{
  int bVar1;
  int bVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  ulong uVar10;
  int bVar11;
  int bVar12;
  
  uVar6 = (uint)(param_1 >> 0x34) & 0x7ff;
  uVar9 = (uint)(param_2 >> 0x34) & 0x7ff;
  uVar10 = (param_1 & 0xfffffffffffff) << 10;
  uVar4 = (param_2 & 0xfffffffffffff) << 10;
  iVar7 = uVar6 - uVar9;
  if (iVar7 == 0 || uVar6 < uVar9) {
    if (iVar7 < 0) {
      if (uVar9 == 0x7ff) {
        if ((param_2 & 0xfffffffffffff) == 0) {
          return (ulong)~param_3 << 0x3f | 0x7ff0000000000000;
        }
        goto LAB_001006c2;
      }
      uVar5 = uVar10 | 0x4000000000000000;
      if (uVar6 == 0) {
        uVar5 = uVar10;
      }
      iVar7 = iVar7 + (uint)(uVar6 == 0);
      if (iVar7 != 0) {
        if (iVar7 < -0x3f) {
          uVar5 = (ulong)(uVar5 != 0);
        }
        else {
          uVar5 = (ulong)(uVar5 << ((byte)iVar7 & 0x3f) != 0) | uVar5 >> (-(byte)iVar7 & 0x3f);
        }
      }
      uVar4 = uVar4 | 0x4000000000000000;
    }
    else {
      if (uVar6 == 0) {
        uVar6 = 1;
        uVar9 = 1;
      }
      else if (uVar6 == 0x7ff) {
        if (((param_2 | param_1) & 0xfffffffffffff) == 0) {
          DAT_c68948c6eb100880 = DAT_c68948c6eb100880 | 0x10;
          return 0x7fffffffffffffff;
        }
        goto LAB_001006c2;
      }
      if (uVar4 < uVar10) goto LAB_0010081c;
      uVar5 = uVar10;
      if (uVar4 <= uVar10) {
        if (_DAT_ffffffffffffb948 != 3) {
          return 0;
        }
        return 0x8000000000000000;
      }
    }
    uVar10 = uVar4 - uVar5;
    param_3 = param_3 ^ 1;
  }
  else {
    if (uVar6 == 0x7ff) {
      if ((param_1 & 0xfffffffffffff) == 0) {
        return param_1;
      }
LAB_001006c2:
      bVar11 = (param_1 & 0x7ff8000000000000) == 0x7ff0000000000000;
      bVar1 = (param_1 & 0x7ffffffffffff) != 0;
      bVar12 = (param_2 & 0x7ff8000000000000) == 0x7ff0000000000000;
      bVar2 = (param_2 & 0x7ffffffffffff) != 0;
      if ((bVar1 && bVar11) || (bVar2 && bVar12)) {
        DAT_49c0ff4810088041 = DAT_49c0ff4810088041 | 0x10;
      }
      uVar4 = param_2 | 0x8000000000000;
      if (param_2 * 2 < 0xffe0000000000001) {
        uVar4 = param_1 | 0x8000000000000;
      }
      if (bVar1 && bVar11) {
        uVar4 = param_1 | 0x8000000000000;
      }
      if (bVar2 && bVar12) {
        uVar4 = param_2 | 0x8000000000000;
      }
      return uVar4;
    }
    uVar5 = uVar4 | 0x4000000000000000;
    if (uVar9 == 0) {
      uVar5 = uVar4;
    }
    uVar4 = uVar5;
    iVar7 = iVar7 - (uint)(uVar9 == 0);
    if (iVar7 != 0) {
      if (iVar7 < 0x40) {
        uVar4 = (ulong)(uVar4 << (-(byte)iVar7 & 0x3f) != 0) | uVar4 >> ((byte)iVar7 & 0x3f);
      }
      else {
        uVar4 = (ulong)(uVar4 != 0);
      }
    }
    uVar10 = uVar10 | 0x4000000000000000;
LAB_0010081c:
    uVar10 = uVar10 - uVar4;
    uVar9 = uVar6;
  }
  bVar1 = uVar10 >> 0x20 != 0;
  uVar6 = (uint)(uVar10 >> 0x20);
  if (!bVar1) {
    uVar6 = (uint)uVar10;
  }
  uVar3 = uVar6 << 0x10;
  if (uVar6 >= 0x10000) {
    uVar3 = uVar6;
  }
  iVar8 = (uint)(uVar6 < 0x10000) * 0x10;
  iVar7 = iVar8 + 8;
  uVar6 = uVar3 << 8;
  if (0xffffff < uVar3) {
    iVar7 = iVar8;
    uVar6 = uVar3;
  }
  uVar6 = (-(uint)bVar1 | 0x1f) +
          *(int *)(countLeadingZeros32_countLeadingZerosHigh + (ulong)(uVar6 >> 0x18) * 4) + iVar7;
  uVar4 = roundAndPackFloat64(param_3,~uVar6 + uVar9,uVar10 << ((byte)uVar6 & 0x3f));
  return uVar4;
}
void float64_add(int8 param_1,int8 param_2)

{
  if ((uint)((ulong)param_1 >> 0x3f) == -(int)((long)param_2 >> 0x3f)) {
    addFloat64Sigs();
    return;
  }
  subFloat64Sigs();
  return;
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
LAB_001009c4:
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
joined_r0x0010099b:
    if (uVar7 != 0) {
      return uVar10 & 0x8000000000000000 | 0x7ff0000000000000;
    }
    DAT_c35bc8ff48100980 = DAT_c35bc8ff48100980 | 0x10;
    return 0x7fffffffffffffff;
  }
  if (uVar4 == 0x7ff) {
    if (uVar7 != 0) goto LAB_001009c4;
    uVar7 = uVar3 >> 0x14 & 0x7ff | uVar11;
    goto joined_r0x0010099b;
  }
  if (uVar14 == 0) {
    if (uVar11 == 0) goto LAB_00100c13;
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
LAB_00100c13:
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
ulong float64_div(ulong param_1,ulong param_2)

{
  int bVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  uint uVar6;
  ulong uVar7;
  int iVar8;
  ulong uVar9;
  ulong uVar10;
  uint uVar11;
  ulong uVar12;
  ulong uVar13;
  uint uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  int bVar20;
  int bVar21;
  int bVar22;
  
  uVar15 = param_1 & 0xfffffffffffff;
  uVar2 = (uint)(param_1 >> 0x20);
  uVar14 = uVar2 >> 0x14 & 0x7ff;
  uVar13 = param_2 & 0xfffffffffffff;
  uVar3 = (uint)(param_2 >> 0x34) & 0x7ff;
  uVar10 = param_2 ^ param_1;
  if (uVar14 == 0x7ff) {
    if (uVar15 == 0) {
      if (uVar3 != 0x7ff) goto LAB_00100f37;
      if (uVar13 == 0) {
        DAT_b848100880 = DAT_b848100880 | 0x10;
        return 0x7fffffffffffffff;
      }
    }
LAB_00100cb9:
    bVar21 = (param_1 & 0x7ff8000000000000) == 0x7ff0000000000000;
    bVar1 = (param_1 & 0x7ffffffffffff) != 0;
    bVar22 = (param_2 & 0x7ff8000000000000) == 0x7ff0000000000000;
    bVar20 = (param_2 & 0x7ffffffffffff) != 0;
    if ((bVar1 && bVar21) || (bVar20 && bVar22)) {
      DAT_49c0ff4810088041 = DAT_49c0ff4810088041 | 0x10;
    }
    uVar10 = param_2 | 0x8000000000000;
    if (param_2 * 2 < 0xffe0000000000001) {
      uVar10 = param_1 | 0x8000000000000;
    }
    if (bVar1 && bVar21) {
      uVar10 = param_1 | 0x8000000000000;
    }
    if (!bVar20 || !bVar22) {
      return uVar10;
    }
    return param_2 | 0x8000000000000;
  }
  if (uVar3 == 0) {
    if (uVar13 == 0) {
      if ((uVar2 >> 0x14 & 0x7ff | uVar15) == 0) {
        _DAT_104840f118b = _DAT_104840f118b | 0x10;
        return 0x7fffffffffffffff;
      }
      _DAT_104840f118b = _DAT_104840f118b | 2;
LAB_00100f37:
      return uVar10 & 0x8000000000000000 | 0x7ff0000000000000;
    }
    bVar1 = uVar13 >> 0x20 == 0;
    uVar2 = (uint)(uVar13 >> 0x20);
    if (bVar1) {
      uVar2 = (uint)param_2;
    }
    uVar3 = uVar2 << 0x10;
    if (uVar2 >= 0x10000) {
      uVar3 = uVar2;
    }
    uVar11 = (uint)(uVar2 < 0x10000) * 0x10;
    uVar6 = uVar11 + 8;
    uVar2 = uVar3 << 8;
    if (0xffffff < uVar3) {
      uVar6 = uVar11;
      uVar2 = uVar3;
    }
    iVar8 = (uVar6 | (uint)bVar1 << 5) +
            *(int *)(countLeadingZeros32_countLeadingZerosHigh + (ulong)(uVar2 >> 0x18) * 4);
    uVar13 = uVar13 << ((char)iVar8 - 0xbU & 0x3f);
    uVar3 = 0xc - iVar8;
  }
  else if (uVar3 == 0x7ff) {
    if (uVar13 != 0) goto LAB_00100cb9;
    goto LAB_00100ef2;
  }
  if (uVar14 == 0) {
    if (uVar15 == 0) {
LAB_00100ef2:
      return uVar10 & 0x8000000000000000;
    }
    bVar1 = uVar15 >> 0x20 == 0;
    uVar2 = (uint)(uVar15 >> 0x20);
    if (bVar1) {
      uVar2 = (uint)param_1;
    }
    uVar14 = uVar2 << 0x10;
    if (uVar2 >= 0x10000) {
      uVar14 = uVar2;
    }
    uVar11 = (uint)(uVar2 < 0x10000) * 0x10;
    uVar6 = uVar11 + 8;
    uVar2 = uVar14 << 8;
    if (0xffffff < uVar14) {
      uVar6 = uVar11;
      uVar2 = uVar14;
    }
    iVar8 = (uVar6 | (uint)bVar1 << 5) +
            *(int *)(countLeadingZeros32_countLeadingZerosHigh + (ulong)(uVar2 >> 0x18) * 4);
    uVar15 = uVar15 << ((char)iVar8 - 0xbU & 0x3f);
    uVar14 = 0xc - iVar8;
  }
  uVar12 = uVar15 << 10 | 0x4000000000000000;
  uVar7 = uVar13 << 0xb;
  uVar16 = uVar7 | 0x8000000000000000;
  bVar1 = uVar16 <= uVar12 * 2;
  uVar12 = uVar12 >> bVar1;
  uVar15 = 0xffffffffffffffff;
  if (uVar12 < uVar16) {
    uVar18 = uVar16 >> 0x20;
    uVar4 = uVar7 & 0xffffffff00000000 | 0x8000000000000000;
    uVar9 = 0xffffffff00000000;
    if (uVar12 < uVar4) {
      uVar9 = uVar12 / uVar18 << 0x20;
    }
    uVar17 = (uVar7 & 0xffffffff) * (uVar9 >> 0x20);
    uVar19 = uVar9 * uVar16;
    uVar15 = -uVar19;
    lVar5 = ((uVar12 - ((uVar17 >> 0x20) + (uVar9 >> 0x20) * uVar18)) - (ulong)(uVar19 != 0)) -
            (ulong)(uVar19 < uVar17 << 0x20);
    if (lVar5 < 0) {
      do {
        uVar9 = uVar9 - 0x100000000;
        bVar20 = CARRY8(uVar15,uVar13 << 0x2b);
        uVar15 = uVar15 + (uVar13 << 0x2b);
        lVar5 = lVar5 + uVar18 + (ulong)bVar20;
      } while (lVar5 < 0);
    }
    uVar13 = uVar15 >> 0x20 | lVar5 << 0x20;
    uVar15 = 0xffffffff;
    if (uVar13 < uVar4) {
      uVar15 = uVar13 / uVar18;
    }
    uVar15 = uVar15 | uVar9;
  }
  if (((uint)uVar15 & 0x1ff) < 3) {
    uVar9 = (uVar7 & 0xffffffff) * (uVar15 >> 0x20);
    uVar7 = (uVar15 & 0xffffffff) * (uVar16 >> 0x20);
    uVar4 = uVar7 + uVar9;
    uVar18 = uVar15 * uVar16;
    uVar13 = -uVar18;
    for (lVar5 = (((uVar12 - (uVar18 != 0)) -
                  ((uVar4 >> 0x20) + (uVar15 >> 0x20) * (uVar16 >> 0x20))) +
                  ((ulong)!CARRY8(uVar7,uVar9) << 0x20) + -0x100000000) -
                 (ulong)(uVar18 < uVar4 << 0x20); lVar5 < 0; lVar5 = lVar5 + (ulong)bVar20) {
      uVar15 = uVar15 - 1;
      bVar20 = CARRY8(uVar13,uVar16);
      uVar13 = uVar13 + uVar16;
    }
    uVar15 = uVar15 | uVar13 != 0;
  }
  uVar10 = roundAndPackFloat64(uVar10 >> 0x3f,(uint)bVar1 + (uVar14 - uVar3) + 0x3fd,uVar15);
  return uVar10;
}
byte float64_le(ulong param_1,ulong param_2)

{
  int iVar1;
  int bVar2;
  int bVar3;
  
  if ((((~param_1 & 0x7ff0000000000000) != 0) || ((param_1 & 0xfffffffffffff) == 0)) &&
     (((~param_2 & 0x7ff0000000000000) != 0 || ((param_2 & 0xfffffffffffff) == 0)))) {
    iVar1 = (int)((long)param_1 >> 0x3f);
    if (-iVar1 == -(int)((long)param_2 >> 0x3f)) {
      bVar2 = param_1 == param_2;
      bVar3 = -(uint)(param_1 < param_2) != iVar1;
    }
    else {
      bVar2 = (long)param_1 < 0;
      bVar3 = ((param_2 | param_1) & 0x7fffffffffffffff) == 0;
    }
    return bVar3 | bVar2;
  }
  DAT_c0b60fc031100880 = DAT_c0b60fc031100880 | 0x10;
  return 0;
}
byte float64_ge(ulong param_1,ulong param_2)

{
  int iVar1;
  int bVar2;
  int bVar3;
  
  if ((((~param_2 & 0x7ff0000000000000) != 0) || ((param_2 & 0xfffffffffffff) == 0)) &&
     (((~param_1 & 0x7ff0000000000000) != 0 || ((param_1 & 0xfffffffffffff) == 0)))) {
    iVar1 = (int)((long)param_2 >> 0x3f);
    if (-iVar1 == -(int)((long)param_1 >> 0x3f)) {
      bVar2 = param_2 == param_1;
      bVar3 = -(uint)(param_2 < param_1) != iVar1;
    }
    else {
      bVar2 = (long)param_2 < 0;
      bVar3 = ((param_1 | param_2) & 0x7fffffffffffffff) == 0;
    }
    return bVar3 | bVar2;
  }
  DAT_c0b60fc031100880 = DAT_c0b60fc031100880 | 0x10;
  return 0;
}
ulong float64_neg(ulong param_1)

{
  return param_1 ^ 0x8000000000000000;
}
ulong float64_abs(ulong param_1)

{
  return param_1 & 0x7fffffffffffffff;
}
ulong local_sin(ulong param_1)

{
  uint uVar1;
  ulong uVar2;
  int8 uVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  uint uVar7;
  int iVar8;
  int bVar9;
  
  uVar2 = float64_mul(param_1,param_1);
  lVar6 = 1;
  uVar5 = param_1;
  while( 1 ) {
    uVar3 = float64_mul(uVar5,uVar2 ^ 0x8000000000000000);
    uVar5 = (lVar6 * 2 + 1) * lVar6 * 2;
    bVar9 = (short)(uVar5 >> 0x10) == 0;
    uVar7 = (uint)uVar5 << 0x10;
    if (!bVar9) {
      uVar7 = (uint)uVar5;
    }
    iVar8 = (uint)bVar9 * 0x10;
    iVar4 = iVar8 + 8;
    uVar1 = uVar7 << 8;
    if (0xffffff < uVar7) {
      iVar4 = iVar8;
      uVar1 = uVar7;
    }
    uVar5 = float64_div(uVar3,((ulong)(0x41d - (iVar4 + *(int *)(
                                                  countLeadingZeros32_countLeadingZerosHigh +
                                                  (ulong)(uVar1 >> 0x18) * 4))) << 0x34) +
                              ((uVar5 & 0xffffffff) <<
                              ((char)(iVar4 + *(int *)(countLeadingZeros32_countLeadingZerosHigh +
                                                      (ulong)(uVar1 >> 0x18) * 4)) + 0x15U & 0x3f)))
    ;
    if ((uint)(param_1 >> 0x3f) == -(int)((long)uVar5 >> 0x3f)) {
      param_1 = addFloat64Sigs();
    }
    else {
      param_1 = subFloat64Sigs(param_1,uVar5);
    }
    if (((~uVar5 & 0x7ff0000000000000) == 0) && ((uVar5 & 0xfffffffffffff) != 0)) break;
    lVar6 = lVar6 + 1;
    if ((uVar5 & 0x7fffffffffffffff) < 0x3ee4f8b588e368f1) {
      return param_1;
    }
  }
  DAT_8348f0894c100880 = DAT_8348f0894c100880 | 0x10;
  return param_1;
}
void ullong_to_double(void)

{
  return;
}
