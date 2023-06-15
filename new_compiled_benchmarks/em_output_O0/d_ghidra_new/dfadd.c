
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
  ulong local_28;
  
  local_28 = param_1;
  if (param_2 != 0) {
    if (param_2 < 0x40) {
      local_28 = param_1 >> ((byte)param_2 & 0x3f) |
                 (long)(int)(uint)(param_1 << (-(byte)param_2 & 0x3f) != 0);
    }
    else {
      local_28 = (ulong)(int)(uint)(param_1 != 0);
    }
  }
  *param_3 = local_28;
  return;
}
void float_raise(uint param_1)

{
  _DAT_48559066c35d0889 = param_1 | _DAT_58b48080b;
  return;
}
int float64_is_nan(long param_1)

{
  return 0xffe0000000000000 < (ulong)(param_1 << 1);
}
int float64_is_signaling_nan(ulong param_1)

{
  int local_11;
  
  local_11 = 0;
  if ((param_1 >> 0x33 & 0xfff) == 0xffe) {
    local_11 = (param_1 & 0x7ffffffffffff) != 0;
  }
  return local_11;
}
ulong extractFloat64Frac(ulong param_1)

{
  return param_1 & 0xfffffffffffff;
}
ulong extractFloat64Exp(ulong param_1)

{
  return param_1 >> 0x34 & 0x7ff;
}
ulong extractFloat64Sign(ulong param_1)

{
  return param_1 >> 0x3f;
}
long packFloat64(int param_1,int param_2,long param_3)

{
  return ((long)param_1 << 0x3f) + ((long)param_2 << 0x34) + param_3;
}
long roundAndPackFloat64(int param_1,uint param_2,ulong param_3)

{
  long lVar1;
  int bVar2;
  uint local_34;
  int local_30;
  ulong local_20;
  uint local_18;
  int local_14;
  
  bVar2 = _DAT_e47d83e44589008b == 0;
  local_30 = 0x200;
  if (!bVar2) {
    if (_DAT_e47d83e44589008b == 1) {
      local_30 = 0;
    }
    else {
      local_30 = 0x3ff;
      if (param_1 == 0) {
        if (_DAT_e47d83e44589008b == 3) {
          local_30 = 0;
        }
      }
      else if (_DAT_e47d83e44589008b == 2) {
        local_30 = 0;
      }
    }
  }
  local_34 = (uint)param_3 & 0x3ff;
  local_20 = param_3;
  local_18 = param_2;
  local_14 = param_1;
  if (0x7fc < (param_2 & 0xffff)) {
    if ((0x7fd < (int)param_2) || ((param_2 == 0x7fd && ((long)(param_3 + (long)local_30) < 0)))) {
      float_raise(9);
      lVar1 = packFloat64(local_14,0x7ff,0);
      return lVar1 - (int)(uint)(local_30 == 0);
    }
    if ((int)param_2 < 0) {
      shift64RightJamming(param_3,-param_2,&local_20);
      local_18 = 0;
      local_34 = (uint)local_20 & 0x3ff;
      if ((local_20 & 0x3ff) != 0) {
        float_raise(4);
      }
    }
  }
  if (local_34 != 0) {
    _DAT_6348e8458b480889 = _DAT_58b4801c983088b | 1;
  }
  local_20 = (long)(int)((local_34 == 0x200 && bVar2) ^ 0xffffffff) &
             local_20 + (long)local_30 >> 10;
  if (local_20 == 0) {
    local_18 = 0;
  }
  lVar1 = packFloat64(local_14,local_18,local_20);
  return lVar1;
}
void normalizeRoundAndPackFloat64(int param_1,int param_2,long param_3)

{
  int iVar1;
  
  iVar1 = countLeadingZeros64(param_3);
  roundAndPackFloat64(param_1,param_2 - (iVar1 + -1),param_3 << ((byte)(iVar1 + -1) & 0x3f));
  return;
}
int countLeadingZeros64(ulong param_1)

{
  int iVar1;
  int local_14;
  ulong local_10;
  
  local_14 = 0;
  if (param_1 < 0x100000000) {
    local_14 = 0x20;
    local_10 = param_1;
  }
  else {
    local_10 = param_1 >> 0x20;
  }
  iVar1 = countLeadingZeros32(local_10 & 0xffffffff);
  return iVar1 + local_14;
}
int countLeadingZeros32(uint param_1)

{
  int local_10;
  uint local_c;
  
  local_10 = 0;
  local_c = param_1;
  if (param_1 < 0x10000) {
    local_10 = 0x10;
    local_c = param_1 << 0x10;
  }
  if (local_c < 0x1000000) {
    local_10 = local_10 + 8;
    local_c = local_c << 8;
  }
  return *(int *)(countLeadingZeros32_countLeadingZerosHigh + (ulong)(local_c >> 0x18) * 4) +
         local_10;
}
int8 addFloat64Sigs(int8 param_1,int8 param_2,int param_3)

{
  int iVar1;
  int8 uVar2;
  int local_4c;
  long local_48;
  ulong local_40;
  ulong local_38;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int8 local_20;
  int8 local_18;
  
  local_24 = param_3;
  local_20 = param_2;
  local_18 = param_1;
  local_38 = extractFloat64Frac(param_1);
  local_28 = extractFloat64Exp(local_18);
  local_40 = extractFloat64Frac(local_20);
  local_2c = extractFloat64Exp(local_20);
  local_4c = local_28 - local_2c;
  local_38 = local_38 * 0x200;
  local_40 = local_40 * 0x200;
  if (local_4c < 1) {
    if (-1 < local_4c) {
      if (local_28 == 0x7ff) {
        if ((local_38 | local_40) != 0) {
          uVar2 = propagateFloat64NaN(local_18,local_20);
          return uVar2;
        }
        return local_18;
      }
      if (local_28 == 0) {
        uVar2 = packFloat64(local_24,0,local_38 + local_40 >> 9);
        return uVar2;
      }
      local_48 = local_38 + 0x4000000000000000 + local_40;
      local_30 = local_28;
      iVar1 = local_30;
      goto LAB_001006eb;
    }
    if (local_2c == 0x7ff) {
      if (local_40 != 0) {
        uVar2 = propagateFloat64NaN(local_18,local_20);
        return uVar2;
      }
      uVar2 = packFloat64(local_24,0x7ff,0);
      return uVar2;
    }
    if (local_28 == 0) {
      local_4c = local_4c + 1;
    }
    else {
      local_38 = local_38 | 0x2000000000000000;
    }
    shift64RightJamming(local_38,-local_4c,&local_38);
    local_30 = local_2c;
  }
  else {
    if (local_28 == 0x7ff) {
      if (local_38 != 0) {
        uVar2 = propagateFloat64NaN(local_18,local_20);
        return uVar2;
      }
      return local_18;
    }
    if (local_2c == 0) {
      local_4c = local_4c + -1;
    }
    else {
      local_40 = local_40 | 0x2000000000000000;
    }
    shift64RightJamming(local_40,local_4c,&local_40);
    local_30 = local_28;
  }
  local_38 = local_38 | 0x2000000000000000;
  local_48 = (local_38 + local_40) * 2;
  iVar1 = local_30 + -1;
  if (local_48 < 0) {
    local_48 = local_38 + local_40;
    iVar1 = local_30;
  }
LAB_001006eb:
  local_30 = iVar1;
  uVar2 = roundAndPackFloat64(local_24,local_30,local_48);
  return uVar2;
}
ulong propagateFloat64NaN(ulong param_1,ulong param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  ulong local_40;
  ulong local_38;
  ulong local_30;
  
  float64_is_nan(param_1);
  uVar1 = float64_is_signaling_nan(param_1);
  iVar2 = float64_is_nan(param_2);
  uVar3 = float64_is_signaling_nan(param_2);
  local_40 = param_1 | 0x8000000000000;
  local_30 = param_2 | 0x8000000000000;
  if ((uVar1 | uVar3) != 0) {
    float_raise(0x10);
  }
  if (uVar3 == 0) {
    local_38 = local_40;
    if (uVar1 == 0) {
      if (iVar2 != 0) {
        local_40 = local_30;
      }
      local_38 = local_40;
    }
    local_30 = local_38;
  }
  return local_30;
}
int8 subFloat64Sigs(int8 param_1,int8 param_2,uint param_3)

{
  ulong uVar1;
  ulong uVar2;
  int8 uVar3;
  int local_4c;
  long local_48;
  ulong local_40;
  ulong local_38;
  int local_30;
  int local_2c;
  int local_28;
  uint local_24;
  int8 local_20;
  int8 local_18;
  
  local_24 = param_3;
  local_20 = param_2;
  local_18 = param_1;
  local_38 = extractFloat64Frac(param_1);
  local_28 = extractFloat64Exp(local_18);
  local_40 = extractFloat64Frac(local_20);
  local_2c = extractFloat64Exp(local_20);
  local_4c = local_28 - local_2c;
  uVar1 = local_38 << 10;
  uVar2 = local_40 << 10;
  if (local_4c < 1) {
    if (local_4c < 0) {
      if (local_2c == 0x7ff) {
        if (uVar2 != 0) {
          local_40 = uVar2;
          local_38 = uVar1;
          uVar3 = propagateFloat64NaN(local_18,local_20);
          return uVar3;
        }
        local_40 = uVar2;
        local_38 = uVar1;
        uVar3 = packFloat64(local_24 ^ 1,0x7ff,0);
        return uVar3;
      }
      if (local_28 == 0) {
        local_4c = local_4c + 1;
        local_38 = uVar1;
      }
      else {
        local_38 = uVar1 | 0x4000000000000000;
      }
      local_40 = uVar2;
      shift64RightJamming(local_38,-local_4c,&local_38);
      local_40 = local_40 | 0x4000000000000000;
    }
    else {
      if (local_28 == 0x7ff) {
        if (((local_38 | local_40) & 0x3fffffffffffff) != 0) {
          local_40 = uVar2;
          local_38 = uVar1;
          uVar3 = propagateFloat64NaN(local_18,local_20);
          return uVar3;
        }
        local_40 = uVar2;
        local_38 = uVar1;
        float_raise(0x10);
        return 0x7fffffffffffffff;
      }
      if (local_28 == 0) {
        local_28 = 1;
        local_2c = 1;
      }
      local_40 = uVar2;
      local_38 = uVar1;
      if (uVar2 < uVar1) goto LAB_00100a7b;
      if (uVar2 <= uVar1) {
        uVar3 = packFloat64(_DAT_124c0940f033883 == 3,0,0);
        return uVar3;
      }
    }
    local_48 = local_40 - local_38;
    local_30 = local_2c;
    local_24 = local_24 ^ 1;
  }
  else {
    if (local_28 == 0x7ff) {
      if (uVar1 != 0) {
        local_40 = uVar2;
        local_38 = uVar1;
        uVar3 = propagateFloat64NaN(local_18,local_20);
        return uVar3;
      }
      return local_18;
    }
    if (local_2c == 0) {
      local_4c = local_4c + -1;
      local_40 = uVar2;
    }
    else {
      local_40 = uVar2 | 0x4000000000000000;
    }
    local_38 = uVar1;
    shift64RightJamming(local_40,local_4c,&local_40);
    local_38 = local_38 | 0x4000000000000000;
LAB_00100a7b:
    local_48 = local_38 - local_40;
    local_30 = local_28;
  }
  local_30 = local_30 + -1;
  uVar3 = normalizeRoundAndPackFloat64(local_24,local_30,local_48);
  return uVar3;
}
int8 float64_add(int8 param_1,int8 param_2)

{
  int iVar1;
  int iVar2;
  int8 local_10;
  
  iVar1 = extractFloat64Sign(param_1);
  iVar2 = extractFloat64Sign(param_2);
  if (iVar1 == iVar2) {
    local_10 = addFloat64Sigs(param_1,param_2,iVar1);
  }
  else {
    local_10 = subFloat64Sigs(param_1,param_2,iVar1);
  }
  return local_10;
}
int8 ullong_to_double(void)

{
  int8 local_20;
  
  return local_20;
}
