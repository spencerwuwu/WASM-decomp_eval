
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <polybench.h>
#include "ghidra_base.h"
#include "dfdiv.h"
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
void add128(long param_1,ulong param_2,long param_3,long param_4,long *param_5,ulong *param_6)

{
  *param_6 = param_2 + param_4;
  *param_5 = param_1 + param_3 + (long)(int)(uint)(param_2 + param_4 < param_2);
  return;
}
void sub128(long param_1,ulong param_2,long param_3,ulong param_4,long *param_5,long *param_6)

{
  *param_6 = param_2 - param_4;
  *param_5 = (param_1 - param_3) - (long)(int)(uint)(param_2 < param_4);
  return;
}
void mul64To128(ulong param_1,ulong param_2,long *param_3,ulong *param_4)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar1 = (uint)(param_1 >> 0x20);
  uVar2 = (uint)(param_2 >> 0x20);
  uVar3 = (ulong)uVar1 * (param_2 & 0xffffffff);
  uVar4 = uVar3 + (param_1 & 0xffffffff) * (ulong)uVar2;
  uVar5 = (uVar4 << 0x20) + (param_1 & 0xffffffff) * (param_2 & 0xffffffff);
  *param_4 = uVar5;
  *param_3 = (long)(int)(uint)(uVar5 < uVar4 << 0x20) +
             ((long)(int)(uint)(uVar4 < uVar3) << 0x20) + (uVar4 >> 0x20) +
             (ulong)uVar1 * (ulong)uVar2;
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
void normalizeFloat64Subnormal(long param_1,int *param_2,long *param_3)

{
  int iVar1;
  
  iVar1 = countLeadingZeros64(param_1);
  *param_3 = param_1 << ((byte)(iVar1 + -0xb) & 0x3f);
  *param_2 = 1 - (iVar1 + -0xb);
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
int8 float64_div(int8 param_1,int8 param_2)

{
  int8 uVar1;
  ulong uVar2;
  int8 local_70;
  int8 local_68;
  long local_60;
  long local_58;
  ulong local_50;
  ulong local_48;
  ulong local_40;
  int local_38;
  int local_34;
  int local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  int8 local_20;
  int8 local_18;
  int8 local_10;
  
  local_20 = param_2;
  local_18 = param_1;
  local_40 = extractFloat64Frac(param_1);
  local_30 = extractFloat64Exp(local_18);
  local_24 = extractFloat64Sign(local_18);
  local_48 = extractFloat64Frac(local_20);
  local_34 = extractFloat64Exp(local_20);
  local_28 = extractFloat64Sign(local_20);
  local_2c = local_24 ^ local_28;
  if (local_30 == 0x7ff) {
    if (local_40 == 0) {
      if (local_34 == 0x7ff) {
        if (local_48 == 0) {
          float_raise(0x10);
          local_10 = 0x7fffffffffffffff;
        }
        else {
          local_10 = propagateFloat64NaN(local_18,local_20);
        }
      }
      else {
        local_10 = packFloat64(local_2c,0x7ff,0);
      }
    }
    else {
      local_10 = propagateFloat64NaN(local_18,local_20);
    }
  }
  else if (local_34 == 0x7ff) {
    if (local_48 == 0) {
      local_10 = packFloat64(local_2c,0,0);
    }
    else {
      local_10 = propagateFloat64NaN(local_18,local_20);
    }
  }
  else {
    if (local_34 == 0) {
      if (local_48 == 0) {
        if (((long)local_30 | local_40) == 0) {
          float_raise(0x10);
          return 0x7fffffffffffffff;
        }
        float_raise(2);
        uVar1 = packFloat64(local_2c,0x7ff,0);
        return uVar1;
      }
      normalizeFloat64Subnormal(local_48,&local_34,&local_48);
    }
    if (local_30 == 0) {
      if (local_40 == 0) {
        uVar1 = packFloat64(local_2c,0,0);
        return uVar1;
      }
      normalizeFloat64Subnormal(local_40,&local_30,&local_40);
    }
    local_38 = (local_30 - local_34) + 0x3fd;
    uVar2 = local_40 | 0x10000000000000;
    local_40 = uVar2 * 0x400;
    local_48 = (local_48 | 0x10000000000000) << 0xb;
    if (local_48 <= uVar2 * 0x800) {
      local_40 = local_40 >> 1;
      local_38 = (local_30 - local_34) + 0x3fe;
    }
    local_50 = estimateDiv128To64(local_40,0,local_48);
    if ((local_50 & 0x1ff) < 3) {
      mul64To128(local_48,local_50,&local_68,&local_70);
      sub128(local_40,0,local_68,local_70,&local_58,&local_60);
      while (local_58 < 0) {
        local_50 = local_50 - 1;
        add128(local_58,local_60,0,local_48,&local_58,&local_60);
      }
      local_50 = (long)(int)(uint)(local_60 != 0) | local_50;
    }
    local_10 = roundAndPackFloat64(local_2c,local_38,local_50);
  }
  return local_10;
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
ulong estimateDiv128To64(ulong param_1,int8 param_2,ulong param_3)

{
  ulong local_70;
  ulong local_68;
  ulong local_60;
  int8 local_58;
  int8 local_50;
  ulong local_48;
  long local_40;
  long local_38;
  ulong local_30;
  ulong local_28;
  int8 local_20;
  ulong local_18;
  ulong local_10;
  
  if (param_1 < param_3) {
    local_30 = param_3 >> 0x20;
    if (param_1 < (param_3 & 0xffffffff00000000)) {
      local_68 = param_1 / local_30 << 0x20;
    }
    else {
      local_68 = 0xffffffff00000000;
    }
    local_60 = local_68;
    local_28 = param_3;
    local_20 = param_2;
    local_18 = param_1;
    mul64To128(param_3,local_68,&local_50,&local_58);
    sub128(local_18,local_20,local_50,local_58,&local_40,&local_48);
    while (local_40 < 0) {
      local_60 = local_60 - 0x100000000;
      local_38 = local_28 << 0x20;
      add128(local_40,local_48,local_30,local_38,&local_40,&local_48);
    }
    local_70 = local_40 << 0x20 | local_48 >> 0x20;
    if (local_70 < local_30 << 0x20) {
      local_70 = local_70 / local_30;
    }
    else {
      local_70 = 0xffffffff;
    }
    local_10 = local_70 | local_60;
  }
  else {
    local_10 = 0xffffffffffffffff;
  }
  return local_10;
}
int8 ullong_to_double(void)

{
  int8 local_20;
  
  return local_20;
}
