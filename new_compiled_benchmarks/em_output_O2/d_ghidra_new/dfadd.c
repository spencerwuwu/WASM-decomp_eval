
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <polybench.h>
#include "ghidra_base.h"
#include "dfadd.h"
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
void float_raise(uint param_1)

{
  *puRam0000000000100047 = *puRam0000000000100047 | param_1;
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
LAB_0010016d:
    uVar1 = (uint)param_3;
    uVar6 = _DAT_4c01c98341098b45;
    if ((param_3 & 0x3ff) == 0) {
      uVar1 = 0;
      goto LAB_00100193;
    }
  }
  else {
    if ((0x7fd < (int)uVar1) || ((uVar1 == 0x7fd && ((long)(lVar4 + param_3) < 0)))) {
      DAT_483fe0c148090a80 = DAT_483fe0c148090a80 | 9;
      return lVar2 + (param_1 << 0x3f) + 0x7ff0000000000000;
    }
    if (-1 < (int)uVar1) goto LAB_0010016d;
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
      goto LAB_00100193;
    }
    param_2 = 0;
    uVar6 = _DAT_3104c983410e8b44 | 4;
  }
  uVar1 = uVar1 & 0x3ff;
  _DAT_4cc93102eb0a8945 = uVar6 | 1;
LAB_00100193:
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
        goto LAB_001002ef;
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
      goto LAB_00100411;
    }
    if (uVar3 == 0) {
      return param_3 << 0x3f | uVar9 + uVar8 >> 9;
    }
    if (uVar3 != 0x7ff) {
      uVar4 = uVar9 + uVar8 | 0x4000000000000000;
      goto LAB_00100429;
    }
    uVar4 = (param_2 | param_1) & 0xfffffffffffff;
  }
  else if (uVar3 != 0x7ff) {
    if (uVar5 == 0) {
      uVar6 = uVar6 - 1;
      if (uVar6 == 0) goto LAB_00100411;
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
LAB_00100411:
    uVar9 = (uVar8 | 0x2000000000000000) + uVar9;
    uVar8 = uVar9 * 2;
    uVar4 = uVar8;
    if (-1 >= (long)uVar8) {
      uVar4 = uVar9;
    }
    uVar3 = uVar3 - (-1 < (long)uVar8);
LAB_00100429:
    uVar9 = roundAndPackFloat64(param_3 & 0xffffffff,uVar3,uVar4);
    return uVar9;
  }
  if (uVar4 == 0) {
    return param_1;
  }
LAB_001002ef:
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
        goto LAB_00100522;
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
        goto LAB_00100522;
      }
      if (uVar3 < uVar10) goto LAB_0010066f;
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
LAB_00100522:
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
      if (uVar6 != 0) goto LAB_0010062a;
    }
    else {
      uVar3 = uVar3 | 0x4000000000000000;
LAB_0010062a:
      if (uVar6 < 0x40) {
        uVar3 = (ulong)(uVar3 << (-(byte)uVar6 & 0x3f) != 0) | uVar3 >> ((byte)uVar6 & 0x3f);
      }
      else {
        uVar3 = (ulong)(uVar3 != 0);
      }
    }
    uVar10 = uVar10 | 0x4000000000000000;
LAB_0010066f:
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
void ullong_to_double(void)

{
  return;
}
