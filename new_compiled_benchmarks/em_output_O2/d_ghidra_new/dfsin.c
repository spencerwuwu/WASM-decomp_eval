
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
  long lVar4;
  ulong uVar5;
  uint uVar6;
  int bVar7;
  
  param_1 = param_1 & 0xffffffff;
  if (_DAT_ff831174ff85398b == 0) {
    lVar4 = 0x200;
    lVar2 = 0;
  }
  else if (_DAT_ff831174ff85398b == 1) {
    lVar2 = -1;
    lVar4 = 0;
  }
  else {
    if ((int)param_1 == 0) {
      bVar7 = _DAT_ff831174ff85398b == 3;
    }
    else {
      bVar7 = _DAT_ff831174ff85398b == 2;
    }
    lVar4 = 0x3ff;
    if (bVar7) {
      lVar4 = 0;
    }
    lVar2 = -(ulong)bVar7;
  }
  uVar1 = (uint)param_2;
  if ((uVar1 & 0xffff) < 0x7fd) {
LAB_001002ad:
    uVar1 = (uint)param_3;
    uVar6 = _DAT_4c01c98341098b45;
    if ((param_3 & 0x3ff) == 0) {
      uVar1 = 0;
      goto LAB_001002d3;
    }
  }
  else {
    if ((0x7fd < (int)uVar1) || ((uVar1 == 0x7fd && ((long)(lVar4 + param_3) < 0)))) {
      DAT_483fe0c148090a80 = DAT_483fe0c148090a80 | 9;
      return lVar2 + (param_1 << 0x3f) + 0x7ff0000000000000;
    }
    if (-1 < (int)uVar1) goto LAB_001002ad;
    if (-uVar1 < 0x40) {
      param_3 = (ulong)(param_3 << ((byte)param_2 & 0x3f) != 0) | param_3 >> ((byte)-uVar1 & 0x3f);
    }
    else {
      param_3 = (ulong)(param_3 != 0);
    }
    uVar1 = (uint)param_3;
    if ((param_3 & 0x3ff) == 0) {
      uVar1 = 0;
      param_2 = 0;
      goto LAB_001002d3;
    }
    param_2 = 0;
    uVar6 = _DAT_3104c983410e8b44 | 4;
  }
  uVar1 = uVar1 & 0x3ff;
  _DAT_4cc93102eb0a8945 = uVar6 | 1;
LAB_001002d3:
  uVar5 = ~(ulong)((_DAT_ff831174ff85398b | uVar1 ^ 0x200) == 0) & param_3 + lVar4 >> 10;
  uVar3 = param_2 << 0x34;
  if (uVar5 == 0) {
    uVar3 = uVar5;
  }
  return (param_1 << 0x3f | uVar5) + uVar3;
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
  uint uVar6;
  int iVar7;
  ulong uVar8;
  ulong uVar9;
  int bVar10;
  int bVar11;
  
  uVar3 = (uint)(param_1 >> 0x34) & 0x7ff;
  uVar5 = (uint)(param_2 >> 0x34) & 0x7ff;
  uVar4 = param_1 & 0xfffffffffffff;
  uVar8 = uVar4 * 0x200;
  uVar9 = (param_2 & 0xfffffffffffff) * 0x200;
  uVar6 = uVar3 - uVar5;
  if (uVar6 == 0 || uVar3 < uVar5) {
    if ((int)uVar6 < 0) {
      if (uVar5 == 0x7ff) {
        if ((param_2 & 0xfffffffffffff) == 0) {
          return param_3 << 0x3f | 0x7ff0000000000000;
        }
        goto LAB_0010049f;
      }
      if (uVar3 != 0) {
        uVar8 = uVar8 | 0x2000000000000000;
      }
      iVar7 = uVar6 + (uVar3 == 0);
      uVar3 = uVar5;
      if (iVar7 != 0) {
        if ((uint)-iVar7 < 0x40) {
          uVar8 = (ulong)(uVar8 << ((byte)iVar7 & 0x3f) != 0) | uVar8 >> ((byte)-iVar7 & 0x3f);
        }
        else {
          uVar8 = (ulong)(uVar8 != 0);
        }
      }
      goto LAB_001005c1;
    }
    if (uVar3 == 0) {
      return param_3 << 0x3f | uVar9 + uVar8 >> 9;
    }
    if (uVar3 != 0x7ff) {
      uVar4 = uVar9 + uVar8 | 0x4000000000000000;
      goto LAB_001005d9;
    }
    uVar4 = (param_2 | param_1) & 0xfffffffffffff;
  }
  else if (uVar3 != 0x7ff) {
    if (uVar5 == 0) {
      uVar6 = uVar6 - 1;
      if (uVar6 == 0) goto LAB_001005c1;
    }
    else {
      uVar9 = uVar9 | 0x2000000000000000;
    }
    if (uVar6 < 0x40) {
      uVar9 = (ulong)(uVar9 << (-(byte)uVar6 & 0x3f) != 0) | uVar9 >> ((byte)uVar6 & 0x3f);
    }
    else {
      uVar9 = (ulong)(uVar9 != 0);
    }
LAB_001005c1:
    uVar9 = (uVar8 | 0x2000000000000000) + uVar9;
    uVar8 = uVar9 * 2;
    uVar4 = uVar8;
    if (-1 >= (long)uVar8) {
      uVar4 = uVar9;
    }
    uVar3 = uVar3 - (-1 < (long)uVar8);
LAB_001005d9:
    uVar9 = roundAndPackFloat64(param_3 & 0xffffffff,uVar3,uVar4);
    return uVar9;
  }
  if (uVar4 == 0) {
    return param_1;
  }
LAB_0010049f:
  bVar10 = (param_1 & 0x7ff8000000000000) == 0x7ff0000000000000;
  bVar1 = (param_1 & 0x7ffffffffffff) != 0;
  bVar11 = (param_2 & 0x7ff8000000000000) == 0x7ff0000000000000;
  bVar2 = (param_2 & 0x7ffffffffffff) != 0;
  if ((bVar1 && bVar10) || (bVar2 && bVar11)) {
    DAT_49c0ff4810088041 = DAT_49c0ff4810088041 | 0x10;
  }
  uVar9 = param_2 | 0x8000000000000;
  if (param_2 * 2 < 0xffe0000000000001) {
    uVar9 = param_1 | 0x8000000000000;
  }
  if (bVar1 && bVar10) {
    uVar9 = param_1 | 0x8000000000000;
  }
  if (bVar2 && bVar11) {
    uVar9 = param_2 | 0x8000000000000;
  }
  return uVar9;
}
ulong subFloat64Sigs(ulong param_1,ulong param_2,uint param_3)

{
  int bVar1;
  int bVar2;
  ulong uVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  ulong uVar10;
  int bVar11;
  int bVar12;
  
  uVar5 = (uint)(param_1 >> 0x34) & 0x7ff;
  uVar9 = (uint)(param_2 >> 0x34) & 0x7ff;
  uVar10 = (param_1 & 0xfffffffffffff) << 10;
  uVar3 = (param_2 & 0xfffffffffffff) << 10;
  uVar6 = uVar5 - uVar9;
  if (uVar6 == 0 || uVar5 < uVar9) {
    if ((int)uVar6 < 0) {
      if (uVar9 == 0x7ff) {
        if ((param_2 & 0xfffffffffffff) == 0) {
          return (ulong)~param_3 << 0x3f | 0x7ff0000000000000;
        }
        goto LAB_001006d2;
      }
      uVar4 = uVar10 | 0x4000000000000000;
      if (uVar5 == 0) {
        uVar4 = uVar10;
      }
      iVar7 = uVar6 + (uVar5 == 0);
      if (iVar7 != 0) {
        if ((uint)-iVar7 < 0x40) {
          uVar4 = (ulong)(uVar4 << ((byte)iVar7 & 0x3f) != 0) | uVar4 >> ((byte)-iVar7 & 0x3f);
        }
        else {
          uVar4 = (ulong)(uVar4 != 0);
        }
      }
      uVar3 = uVar3 | 0x4000000000000000;
    }
    else {
      if (uVar5 == 0) {
        uVar5 = 1;
        uVar9 = 1;
      }
      else if (uVar5 == 0x7ff) {
        if (((param_2 | param_1) & 0xfffffffffffff) == 0) {
          DAT_c98545c6eb100880 = DAT_c98545c6eb100880 | 0x10;
          return 0x7fffffffffffffff;
        }
        goto LAB_001006d2;
      }
      if (uVar3 < uVar10) goto LAB_0010081f;
      uVar4 = uVar10;
      if (uVar3 <= uVar10) {
        if (_DAT_ffffffffffffb948 != 3) {
          return 0;
        }
        return 0x8000000000000000;
      }
    }
    uVar10 = uVar3 - uVar4;
    param_3 = param_3 ^ 1;
  }
  else {
    if (uVar5 == 0x7ff) {
      if ((param_1 & 0xfffffffffffff) == 0) {
        return param_1;
      }
LAB_001006d2:
      bVar11 = (param_1 & 0x7ff8000000000000) == 0x7ff0000000000000;
      bVar1 = (param_1 & 0x7ffffffffffff) != 0;
      bVar12 = (param_2 & 0x7ff8000000000000) == 0x7ff0000000000000;
      bVar2 = (param_2 & 0x7ffffffffffff) != 0;
      if ((bVar1 && bVar11) || (bVar2 && bVar12)) {
        DAT_49c0ff4810088041 = DAT_49c0ff4810088041 | 0x10;
      }
      uVar3 = param_2 | 0x8000000000000;
      if (param_2 * 2 < 0xffe0000000000001) {
        uVar3 = param_1 | 0x8000000000000;
      }
      if (bVar1 && bVar11) {
        uVar3 = param_1 | 0x8000000000000;
      }
      if (bVar2 && bVar12) {
        uVar3 = param_2 | 0x8000000000000;
      }
      return uVar3;
    }
    if (uVar9 == 0) {
      uVar6 = uVar6 - 1;
      if (uVar6 != 0) goto LAB_001007da;
    }
    else {
      uVar3 = uVar3 | 0x4000000000000000;
LAB_001007da:
      if (uVar6 < 0x40) {
        uVar3 = (ulong)(uVar3 << (-(byte)uVar6 & 0x3f) != 0) | uVar3 >> ((byte)uVar6 & 0x3f);
      }
      else {
        uVar3 = (ulong)(uVar3 != 0);
      }
    }
    uVar10 = uVar10 | 0x4000000000000000;
LAB_0010081f:
    uVar10 = uVar10 - uVar3;
    uVar9 = uVar5;
  }
  bVar1 = uVar10 >> 0x20 != 0;
  uVar5 = (uint)(uVar10 >> 0x20);
  if (!bVar1) {
    uVar5 = (uint)uVar10;
  }
  uVar6 = uVar5 << 0x10;
  if (uVar5 >= 0x10000) {
    uVar6 = uVar5;
  }
  iVar8 = (uint)(uVar5 < 0x10000) * 0x10;
  iVar7 = iVar8 + 8;
  uVar5 = uVar6 << 8;
  if (0xffffff < uVar6) {
    iVar7 = iVar8;
    uVar5 = uVar6;
  }
  uVar5 = (-(uint)bVar1 | 0x1f) +
          *(int *)(countLeadingZeros32_countLeadingZerosHigh + (ulong)(uVar5 >> 0x18) * 4) + iVar7;
  uVar3 = roundAndPackFloat64(param_3,~uVar5 + uVar9,uVar10 << ((byte)uVar5 & 0x3f));
  return uVar3;
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
  uint uVar5;
  ulong uVar6;
  uint uVar7;
  ulong uVar8;
  uint uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  int iVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  ulong uVar19;
  int bVar20;
  int bVar21;
  int bVar22;
  
  uVar12 = param_1 & 0xfffffffffffff;
  uVar2 = (uint)(param_1 >> 0x20);
  uVar3 = uVar2 >> 0x14 & 0x7ff;
  uVar11 = param_2 & 0xfffffffffffff;
  uVar9 = (uint)(param_2 >> 0x34) & 0x7ff;
  uVar8 = param_2 ^ param_1;
  if (uVar3 == 0x7ff) {
    if (uVar12 == 0) {
      if (uVar9 != 0x7ff) goto LAB_00100f03;
      if (uVar11 == 0) {
        DAT_b848100880 = DAT_b848100880 | 0x10;
        return 0x7fffffffffffffff;
      }
    }
LAB_00100cbb:
    bVar21 = (param_1 & 0x7ff8000000000000) == 0x7ff0000000000000;
    bVar1 = (param_1 & 0x7ffffffffffff) != 0;
    bVar22 = (param_2 & 0x7ff8000000000000) == 0x7ff0000000000000;
    bVar20 = (param_2 & 0x7ffffffffffff) != 0;
    if ((bVar1 && bVar21) || (bVar20 && bVar22)) {
      DAT_49c0ff4810088041 = DAT_49c0ff4810088041 | 0x10;
    }
    uVar8 = param_2 | 0x8000000000000;
    if (param_2 * 2 < 0xffe0000000000001) {
      uVar8 = param_1 | 0x8000000000000;
    }
    if (bVar1 && bVar21) {
      uVar8 = param_1 | 0x8000000000000;
    }
    if (!bVar20 || !bVar22) {
      return uVar8;
    }
    return param_2 | 0x8000000000000;
  }
  if (uVar9 == 0) {
    if (uVar11 == 0) {
      if ((uVar2 >> 0x14 & 0x7ff | uVar12) == 0) {
        _DAT_af840f118b = _DAT_af840f118b | 0x10;
        return 0x7fffffffffffffff;
      }
      _DAT_af840f118b = _DAT_af840f118b | 2;
LAB_00100f03:
      return uVar8 & 0x8000000000000000 | 0x7ff0000000000000;
    }
    bVar1 = uVar11 >> 0x20 == 0;
    uVar2 = (uint)(uVar11 >> 0x20);
    if (bVar1) {
      uVar2 = (uint)param_2;
    }
    uVar9 = uVar2 << 0x10;
    if (uVar2 >= 0x10000) {
      uVar9 = uVar2;
    }
    uVar7 = (uint)(uVar2 < 0x10000) * 0x10;
    uVar5 = uVar7 + 8;
    uVar2 = uVar9 << 8;
    if (0xffffff < uVar9) {
      uVar5 = uVar7;
      uVar2 = uVar9;
    }
    iVar14 = (uVar5 | (uint)bVar1 << 5) +
             *(int *)(countLeadingZeros32_countLeadingZerosHigh + (ulong)(uVar2 >> 0x18) * 4);
    uVar11 = uVar11 << ((char)iVar14 - 0xbU & 0x3f);
    uVar9 = 0xc - iVar14;
  }
  else if (uVar9 == 0x7ff) {
    if (uVar11 != 0) goto LAB_00100cbb;
    goto LAB_00100ebe;
  }
  if (uVar3 == 0) {
    if (uVar12 == 0) {
LAB_00100ebe:
      return uVar8 & 0x8000000000000000;
    }
    bVar1 = uVar12 >> 0x20 == 0;
    uVar2 = (uint)(uVar12 >> 0x20);
    if (bVar1) {
      uVar2 = (uint)param_1;
    }
    uVar3 = uVar2 << 0x10;
    if (uVar2 >= 0x10000) {
      uVar3 = uVar2;
    }
    uVar7 = (uint)(uVar2 < 0x10000) * 0x10;
    uVar5 = uVar7 + 8;
    uVar2 = uVar3 << 8;
    if (0xffffff < uVar3) {
      uVar5 = uVar7;
      uVar2 = uVar3;
    }
    iVar14 = (uVar5 | (uint)bVar1 << 5) +
             *(int *)(countLeadingZeros32_countLeadingZerosHigh + (ulong)(uVar2 >> 0x18) * 4);
    uVar12 = uVar12 << ((char)iVar14 - 0xbU & 0x3f);
    uVar3 = 0xc - iVar14;
  }
  uVar10 = uVar12 << 10 | 0x4000000000000000;
  uVar15 = uVar11 << 0xb;
  uVar13 = uVar15 | 0x8000000000000000;
  bVar1 = uVar13 <= uVar10 * 2;
  uVar10 = uVar10 >> bVar1;
  uVar12 = 0xffffffffffffffff;
  if (uVar10 < uVar13) {
    uVar17 = uVar13 >> 0x20;
    uVar19 = uVar15 & 0xffffffff00000000 | 0x8000000000000000;
    uVar12 = 0xffffffff00000000;
    if (uVar10 < uVar19) {
      uVar12 = uVar10;
      if (uVar10 >> 0x20 == 0) {
        uVar12 = uVar10 & 0xffffffff;
      }
      uVar12 = uVar12 / uVar17 << 0x20;
    }
    uVar16 = (uVar12 >> 0x20) * (uVar15 & 0xffffffff);
    uVar6 = uVar12 * uVar13;
    uVar4 = -uVar6;
    uVar6 = ((uVar10 - ((uVar16 >> 0x20) + (uVar12 >> 0x20) * uVar17)) - (ulong)(uVar6 != 0)) -
            (ulong)(uVar6 < uVar16 << 0x20);
    if ((long)uVar6 < 0) {
      do {
        uVar12 = uVar12 - 0x100000000;
        bVar20 = CARRY8(uVar4,uVar11 << 0x2b);
        uVar4 = uVar4 + (uVar11 << 0x2b);
        uVar6 = uVar6 + uVar17 + (ulong)bVar20;
      } while ((long)uVar6 < 0);
    }
    uVar16 = uVar4 >> 0x20 | uVar6 << 0x20;
    uVar11 = 0xffffffff;
    if (uVar16 < uVar19) {
      if ((uVar6 & 0xffffffff) == 0) {
        uVar11 = (uVar4 >> 0x20) / uVar17;
      }
      else {
        uVar11 = uVar16 / uVar17;
      }
    }
    uVar12 = uVar11 | uVar12;
    if (((uint)uVar11 & 0x1ff) < 3) {
      uVar19 = (uVar15 & 0xffffffff) * (uVar12 >> 0x20);
      uVar11 = (uVar11 & 0xffffffff) * uVar17;
      lVar18 = 0;
      uVar15 = uVar11 + uVar19;
      if (CARRY8(uVar11,uVar19)) {
        lVar18 = -0x100000000;
      }
      uVar19 = uVar12 * uVar13;
      uVar11 = -uVar19;
      for (lVar18 = (((uVar10 - (uVar19 != 0)) - ((uVar15 >> 0x20) + (uVar12 >> 0x20) * uVar17)) +
                    lVar18) - (ulong)(uVar19 < uVar15 << 0x20); lVar18 < 0;
          lVar18 = lVar18 + (ulong)bVar20) {
        uVar12 = uVar12 - 1;
        bVar20 = CARRY8(uVar11,uVar13);
        uVar11 = uVar11 + uVar13;
      }
      uVar12 = uVar12 | uVar11 != 0;
    }
  }
  uVar8 = roundAndPackFloat64(uVar8 >> 0x3f,(uint)bVar1 + (uVar3 - uVar9) + 0x3fd,uVar12);
  return uVar8;
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
  uint uVar2;
  ulong uVar3;
  int8 uVar4;
  ulong uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  
  uVar3 = float64_mul(param_1,param_1);
  iVar8 = 1;
  uVar5 = param_1;
  while( 1 ) {
    uVar4 = float64_mul(uVar5,uVar3 ^ 0x8000000000000000);
    uVar7 = (iVar8 * 2 + 1) * iVar8 * 2;
    uVar1 = uVar7 * 0x10000;
    if (uVar7 >= 0x10000) {
      uVar1 = uVar7;
    }
    iVar9 = (uint)(uVar7 < 0x10000) * 0x10;
    iVar6 = iVar9 + 8;
    uVar2 = uVar1 << 8;
    if (0xffffff < uVar1) {
      iVar6 = iVar9;
      uVar2 = uVar1;
    }
    uVar5 = float64_div(uVar4,((ulong)(0x41d - (iVar6 + *(int *)(
                                                  countLeadingZeros32_countLeadingZerosHigh +
                                                  (ulong)(uVar2 >> 0x18) * 4))) << 0x34) +
                              ((ulong)uVar7 <<
                              ((char)(iVar6 + *(int *)(countLeadingZeros32_countLeadingZerosHigh +
                                                      (ulong)(uVar2 >> 0x18) * 4)) + 0x15U & 0x3f)))
    ;
    if ((uint)(param_1 >> 0x3f) == -(int)((long)uVar5 >> 0x3f)) {
      param_1 = addFloat64Sigs();
    }
    else {
      param_1 = subFloat64Sigs(param_1,uVar5);
    }
    if (((~uVar5 & 0x7ff0000000000000) == 0) && ((uVar5 & 0xfffffffffffff) != 0)) break;
    iVar8 = iVar8 + 1;
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
