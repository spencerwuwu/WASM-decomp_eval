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



bool float64_is_nan(long param_1)

{
  return 0xffe0000000000000 < (ulong)(param_1 * 2);
}



bool float64_is_signaling_nan(ulong param_1)

{
  return (param_1 & 0x7ffffffffffff) != 0 && (param_1 & 0x7ff8000000000000) == 0x7ff0000000000000;
}



ulong extractFloat64Frac(ulong param_1)

{
  return param_1 & 0xfffffffffffff;
}



uint extractFloat64Exp(undefined8 param_1)

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



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

long roundAndPackFloat64(ulong param_1,long param_2,ulong param_3)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  uint uVar6;
  bool bVar7;
  
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



void normalizeRoundAndPackFloat64(undefined8 param_1,int param_2,ulong param_3)

{
  bool bVar1;
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
  bool bVar1;
  bool bVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  int iVar6;
  ulong uVar7;
  ulong uVar8;
  bool bVar9;
  bool bVar10;
  
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
        goto LAB_001002df;
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
      goto LAB_00100406;
    }
    if (uVar3 == 0) {
      return param_3 << 0x3f | uVar8 + uVar7 >> 9;
    }
    if (uVar3 != 0x7ff) {
      uVar4 = uVar8 + uVar7 | 0x4000000000000000;
      goto LAB_0010041e;
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
LAB_00100406:
    uVar8 = (uVar7 | 0x2000000000000000) + uVar8;
    uVar7 = uVar8 * 2;
    uVar4 = uVar7;
    if (-1 >= (long)uVar7) {
      uVar4 = uVar8;
    }
    uVar3 = uVar3 - (-1 < (long)uVar7);
LAB_0010041e:
    uVar8 = roundAndPackFloat64(param_3 & 0xffffffff,uVar3,uVar4);
    return uVar8;
  }
  if (uVar4 == 0) {
    return param_1;
  }
LAB_001002df:
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



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

ulong subFloat64Sigs(ulong param_1,ulong param_2,uint param_3)

{
  bool bVar1;
  bool bVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  ulong uVar10;
  bool bVar11;
  bool bVar12;
  
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
        goto LAB_00100512;
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
        goto LAB_00100512;
      }
      if (uVar4 < uVar10) goto LAB_0010066c;
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
LAB_00100512:
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
LAB_0010066c:
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



void float64_add(undefined8 param_1,undefined8 param_2)

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



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int submain(void)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  undefined local_40 [16];
  
  iVar3 = 0;
  uVar1 = gettimeofday((timeval *)local_40,(__timezone_ptr_t)0x0);
  if (uVar1 != 0) {
    printf("Error return from gettimeofday: %d",(ulong)uVar1);
  }
  _DAT_3d8b4c0e110f41f2 = (double)local_40._8_4_ * 1e-06 + (double)local_40._0_8_;
  lVar4 = 0;
  do {
    if ((uint)((ulong)*(undefined8 *)(&DAT_4c00000000258b4c + lVar4 * 8) >> 0x3f) ==
        -(int)((long)*(undefined8 *)(&DAT_31000000002d8b4c + lVar4 * 8) >> 0x3f)) {
      lVar2 = addFloat64Sigs();
    }
    else {
      lVar2 = subFloat64Sigs();
    }
    iVar3 = iVar3 + (uint)(lVar2 != *(long *)(&DAT_abe890661cebed31 + lVar4 * 8));
    lVar4 = lVar4 + 1;
  } while (lVar4 != 0x2e);
  uVar1 = gettimeofday((timeval *)local_40,(__timezone_ptr_t)0x0);
  if (uVar1 != 0) {
    printf("Error return from gettimeofday: %d",(ulong)uVar1);
  }
  _DAT_5c0f41f200110ff2 = (double)local_40._8_4_ * 1e-06 + (double)local_40._0_8_;
  printf("%0.6f\n",_DAT_5c0f41f200110ff2 - _DAT_3d8b4c0e110f41f2);
  return iVar3;
}


