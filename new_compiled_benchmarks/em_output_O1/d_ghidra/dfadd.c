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

ulong float64_add(ulong param_1,ulong param_2)

{
  bool bVar1;
  bool bVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  bool bVar15;
  bool bVar16;
  
  uVar4 = (uint)(param_1 >> 0x20);
  uVar8 = uVar4 >> 0x14 & 0x7ff;
  uVar5 = (uint)(param_2 >> 0x20);
  uVar11 = uVar5 >> 0x14 & 0x7ff;
  iVar10 = uVar8 - uVar11;
  uVar4 = uVar4 >> 0x1f;
  if (uVar4 != -((int)uVar5 >> 0x1f)) {
    uVar12 = (param_1 & 0xfffffffffffff) << 10;
    uVar7 = (param_2 & 0xfffffffffffff) << 10;
    if (iVar10 < 1) {
      if (iVar10 < 0) {
        if (uVar11 == 0x7ff) {
          if ((param_2 & 0xfffffffffffff) == 0) {
            return (ulong)~uVar4 << 0x3f | 0x7ff0000000000000;
          }
          goto LAB_001001dd;
        }
        uVar6 = uVar12 | 0x4000000000000000;
        if (uVar8 == 0) {
          uVar6 = uVar12;
        }
        iVar10 = iVar10 + (uint)(uVar8 == 0);
        if (iVar10 != 0) {
          if (iVar10 < -0x3f) {
            uVar6 = (ulong)(uVar6 != 0);
          }
          else {
            uVar6 = (ulong)(uVar6 << ((byte)iVar10 & 0x3f) != 0) | uVar6 >> (-(byte)iVar10 & 0x3f);
          }
        }
        uVar7 = uVar7 | 0x4000000000000000;
      }
      else {
        if (uVar8 == 0) {
          uVar8 = 1;
          uVar11 = 1;
        }
        else if (uVar8 == 0x7ff) {
          if (((param_2 | param_1) & 0xfffffffffffff) == 0) {
            DAT_bf48100880 = DAT_bf48100880 | 0x10;
            return 0x7fffffffffffffff;
          }
          goto LAB_001001dd;
        }
        if (uVar7 < uVar12) goto LAB_00100408;
        uVar6 = uVar12;
        if (uVar7 <= uVar12) {
          return (ulong)(_DAT_940f40033883ff31 == 3) << 0x3f;
        }
      }
      uVar12 = uVar7 - uVar6;
      uVar4 = uVar4 ^ 1;
    }
    else {
      if (uVar8 == 0x7ff) goto joined_r0x00100295;
      uVar6 = uVar7 | 0x4000000000000000;
      if (uVar11 == 0) {
        uVar6 = uVar7;
      }
      uVar7 = uVar6;
      iVar10 = iVar10 - (uint)(uVar11 == 0);
      if (iVar10 != 0) {
        if (iVar10 < 0x40) {
          uVar7 = (ulong)(uVar7 << (-(byte)iVar10 & 0x3f) != 0) | uVar7 >> ((byte)iVar10 & 0x3f);
        }
        else {
          uVar7 = (ulong)(uVar7 != 0);
        }
      }
      uVar12 = uVar12 | 0x4000000000000000;
LAB_00100408:
      uVar11 = uVar8;
      uVar12 = uVar12 - uVar7;
    }
    bVar1 = uVar12 >> 0x20 != 0;
    uVar5 = (uint)(uVar12 >> 0x20);
    if (!bVar1) {
      uVar5 = (uint)uVar12;
    }
    uVar8 = uVar5 << 0x10;
    if (uVar5 >= 0x10000) {
      uVar8 = uVar5;
    }
    iVar9 = (uint)(uVar5 < 0x10000) * 0x10;
    iVar10 = iVar9 + 8;
    uVar5 = uVar8 << 8;
    if (0xffffff < uVar8) {
      iVar10 = iVar9;
      uVar5 = uVar8;
    }
    uVar5 = (-(uint)bVar1 | 0x1f) +
            *(int *)(countLeadingZeros32_countLeadingZerosHigh + (ulong)(uVar5 >> 0x18) * 4) +
            iVar10;
    uVar7 = roundAndPackFloat64(uVar4,~uVar5 + uVar11,uVar12 << ((byte)uVar5 & 0x3f));
    return uVar7;
  }
  uVar12 = (param_1 & 0xfffffffffffff) * 0x200;
  uVar7 = (param_2 & 0xfffffffffffff) * 0x200;
  if (iVar10 < 1) {
    if (iVar10 < 0) {
      if (uVar11 == 0x7ff) {
        if ((param_2 & 0xfffffffffffff) == 0) {
          return param_1 & 0x8000000000000000 | 0x7ff0000000000000;
        }
        goto LAB_001001dd;
      }
      if (uVar8 != 0) {
        uVar12 = uVar12 | 0x2000000000000000;
      }
      iVar10 = iVar10 + (uint)(uVar8 == 0);
      if (iVar10 != 0) {
        if (iVar10 < -0x3f) {
          uVar12 = (ulong)(uVar12 != 0);
        }
        else {
          uVar12 = (ulong)(uVar12 << ((byte)iVar10 & 0x3f) != 0) | uVar12 >> (-(byte)iVar10 & 0x3f);
        }
      }
LAB_00100390:
      lVar13 = (uVar12 | 0x2000000000000000) + uVar7;
      lVar3 = lVar13 * 2;
      lVar14 = lVar3;
      if (-1 >= lVar3) {
        lVar14 = lVar13;
      }
      uVar8 = uVar11 - (-1 < lVar3);
LAB_001003a8:
      uVar7 = roundAndPackFloat64(param_1 >> 0x3f,uVar8,lVar14);
      return uVar7;
    }
    if (uVar8 == 0) {
      return param_1 & 0x8000000000000000 | uVar7 + uVar12 >> 9;
    }
    if (uVar8 != 0x7ff) {
      lVar14 = (uVar12 | 0x4000000000000000) + uVar7;
      goto LAB_001003a8;
    }
    uVar12 = (param_2 | param_1) & 0xfffffffffffff;
  }
  else if (uVar8 != 0x7ff) {
    if (uVar11 != 0) {
      uVar7 = uVar7 | 0x2000000000000000;
    }
    iVar10 = iVar10 - (uint)(uVar11 == 0);
    uVar11 = uVar8;
    if (iVar10 != 0) {
      if (iVar10 < 0x40) {
        uVar7 = (ulong)(uVar7 << (-(byte)iVar10 & 0x3f) != 0) | uVar7 >> ((byte)iVar10 & 0x3f);
      }
      else {
        uVar7 = (ulong)(uVar7 != 0);
      }
    }
    goto LAB_00100390;
  }
joined_r0x00100295:
  if (uVar12 == 0) {
    return param_1;
  }
LAB_001001dd:
  bVar15 = (param_1 & 0x7ff8000000000000) == 0x7ff0000000000000;
  bVar1 = (param_1 & 0x7ffffffffffff) != 0;
  bVar16 = (param_2 & 0x7ff8000000000000) == 0x7ff0000000000000;
  bVar2 = (param_2 & 0x7ffffffffffff) != 0;
  if ((bVar1 && bVar15) || (bVar2 && bVar16)) {
    DAT_49c0ff4810088041 = DAT_49c0ff4810088041 | 0x10;
  }
  uVar7 = param_2 | 0x8000000000000;
  if (param_2 * 2 < 0xffe0000000000001) {
    uVar7 = param_1 | 0x8000000000000;
  }
  if (bVar1 && bVar15) {
    uVar7 = param_1 | 0x8000000000000;
  }
  if (bVar2 && bVar16) {
    uVar7 = param_2 | 0x8000000000000;
  }
  return uVar7;
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
    lVar2 = float64_add(*(undefined8 *)(&DAT_4c00000000258b4c + lVar4 * 8));
    iVar3 = iVar3 + (uint)(lVar2 != *(long *)(&DAT_8b4900401f0fed31 + lVar4 * 8));
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


