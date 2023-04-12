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
  uint uVar3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  bool bVar16;
  bool bVar17;
  
  uVar7 = param_1 >> 0x3f;
  uVar5 = (uint)(param_1 >> 0x20);
  uVar8 = uVar5 >> 0x14 & 0x7ff;
  uVar3 = (uint)(param_2 >> 0x20);
  uVar12 = uVar3 >> 0x14 & 0x7ff;
  uVar10 = uVar8 - uVar12;
  if (-((int)uVar5 >> 0x1f) == -((int)uVar3 >> 0x1f)) {
    uVar13 = (param_1 & 0xfffffffffffff) * 0x200;
    uVar6 = (param_2 & 0xfffffffffffff) * 0x200;
    if ((int)uVar10 < 1) {
      if ((int)uVar10 < 0) {
        if (uVar12 == 0x7ff) {
          if ((param_2 & 0xfffffffffffff) == 0) {
            return param_1 & 0x8000000000000000 | 0x7ff0000000000000;
          }
          goto LAB_0010019e;
        }
        if (uVar8 != 0) {
          uVar13 = uVar13 | 0x2000000000000000;
        }
        iVar11 = uVar10 + (uVar8 == 0);
        if (iVar11 != 0) {
          if ((uint)-iVar11 < 0x40) {
            uVar13 = (ulong)(uVar13 << ((byte)iVar11 & 0x3f) != 0) |
                     uVar13 >> ((byte)-iVar11 & 0x3f);
          }
          else {
            uVar13 = (ulong)(uVar13 != 0);
          }
        }
        goto LAB_0010033a;
      }
      if (uVar8 == 0) {
        return param_1 & 0x8000000000000000 | uVar6 + uVar13 >> 9;
      }
      if (uVar8 != 0x7ff) {
        lVar15 = (uVar13 | 0x4000000000000000) + uVar6;
        goto LAB_00100352;
      }
      uVar13 = (param_2 | param_1) & 0xfffffffffffff;
    }
    else if (uVar8 != 0x7ff) {
      if (uVar12 == 0) {
        uVar10 = uVar10 - 1;
        uVar12 = uVar8;
        if (uVar10 == 0) goto LAB_0010033a;
      }
      else {
        uVar6 = uVar6 | 0x2000000000000000;
      }
      if (uVar10 < 0x40) {
        uVar6 = (ulong)(uVar6 << (-(byte)uVar10 & 0x3f) != 0) | uVar6 >> ((byte)uVar10 & 0x3f);
        uVar12 = uVar8;
      }
      else {
        uVar6 = (ulong)(uVar6 != 0);
        uVar12 = uVar8;
      }
LAB_0010033a:
      lVar14 = (uVar13 | 0x2000000000000000) + uVar6;
      lVar4 = lVar14 * 2;
      lVar15 = lVar4;
      if (-1 >= lVar4) {
        lVar15 = lVar14;
      }
      uVar8 = uVar12 - (-1 < lVar4);
LAB_00100352:
      uVar7 = roundAndPackFloat64(uVar7,uVar8,lVar15);
      return uVar7;
    }
joined_r0x00100252:
    if (uVar13 == 0) {
      return param_1;
    }
LAB_0010019e:
    bVar16 = (param_1 & 0x7ff8000000000000) == 0x7ff0000000000000;
    bVar1 = (param_1 & 0x7ffffffffffff) != 0;
    bVar17 = (param_2 & 0x7ff8000000000000) == 0x7ff0000000000000;
    bVar2 = (param_2 & 0x7ffffffffffff) != 0;
    if ((bVar1 && bVar16) || (bVar2 && bVar17)) {
      DAT_49c1ff4810088041 = DAT_49c1ff4810088041 | 0x10;
    }
    uVar7 = param_2 | 0x8000000000000;
    if (param_2 * 2 < 0xffe0000000000001) {
      uVar7 = param_1 | 0x8000000000000;
    }
    if (bVar1 && bVar16) {
      uVar7 = param_1 | 0x8000000000000;
    }
    if (bVar2 && bVar17) {
      uVar7 = param_2 | 0x8000000000000;
    }
    return uVar7;
  }
  uVar13 = (param_1 & 0xfffffffffffff) << 10;
  uVar6 = (param_2 & 0xfffffffffffff) << 10;
  if ((int)uVar10 < 1) {
    if ((int)uVar10 < 0) {
      if (uVar12 == 0x7ff) {
        if ((param_2 & 0xfffffffffffff) == 0) {
          return (ulong)(uint)~-((int)uVar5 >> 0x1f) << 0x3f | 0x7ff0000000000000;
        }
        goto LAB_0010019e;
      }
      uVar7 = uVar13 | 0x4000000000000000;
      if (uVar8 == 0) {
        uVar7 = uVar13;
      }
      iVar11 = uVar10 + (uVar8 == 0);
      if (iVar11 != 0) {
        if ((uint)-iVar11 < 0x40) {
          uVar7 = (ulong)(uVar7 << ((byte)iVar11 & 0x3f) != 0) | uVar7 >> ((byte)-iVar11 & 0x3f);
        }
        else {
          uVar7 = (ulong)(uVar7 != 0);
        }
      }
      uVar6 = uVar6 | 0x4000000000000000;
    }
    else {
      if (uVar8 == 0) {
        uVar8 = 1;
        uVar12 = 1;
      }
      else if (uVar8 == 0x7ff) {
        if (((param_2 | param_1) & 0xfffffffffffff) == 0) {
          DAT_b848100880 = DAT_b848100880 | 0x10;
          return 0x7fffffffffffffff;
        }
        goto LAB_0010019e;
      }
      if (uVar6 < uVar13) goto LAB_001003d7;
      uVar7 = uVar13;
      if (uVar6 <= uVar13) {
        return (ulong)(_DAT_c0940f033983c031 == 3) << 0x3f;
      }
    }
    uVar13 = uVar6 - uVar7;
    uVar7 = (ulong)(uVar5 >> 0x1f ^ 1);
  }
  else {
    if (uVar8 == 0x7ff) goto joined_r0x00100252;
    if (uVar12 == 0) {
      uVar10 = uVar10 - 1;
      if (uVar10 != 0) goto LAB_00100360;
    }
    else {
      uVar6 = uVar6 | 0x4000000000000000;
LAB_00100360:
      if (uVar10 < 0x40) {
        uVar6 = (ulong)(uVar6 << (-(byte)uVar10 & 0x3f) != 0) | uVar6 >> ((byte)uVar10 & 0x3f);
      }
      else {
        uVar6 = (ulong)(uVar6 != 0);
      }
    }
    uVar13 = uVar13 | 0x4000000000000000;
LAB_001003d7:
    uVar12 = uVar8;
    uVar13 = uVar13 - uVar6;
  }
  bVar1 = uVar13 >> 0x20 != 0;
  uVar5 = (uint)(uVar13 >> 0x20);
  if (!bVar1) {
    uVar5 = (uint)uVar13;
  }
  uVar3 = uVar5 << 0x10;
  if (uVar5 >= 0x10000) {
    uVar3 = uVar5;
  }
  iVar9 = (uint)(uVar5 < 0x10000) * 0x10;
  iVar11 = iVar9 + 8;
  uVar5 = uVar3 << 8;
  if (0xffffff < uVar3) {
    iVar11 = iVar9;
    uVar5 = uVar3;
  }
  uVar5 = (-(uint)bVar1 | 0x1f) +
          *(int *)(countLeadingZeros32_countLeadingZerosHigh + (ulong)(uVar5 >> 0x18) * 4) + iVar11;
  uVar7 = roundAndPackFloat64(uVar7,~uVar5 + uVar12,uVar13 << ((byte)uVar5 & 0x3f));
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
  long lVar4;
  ulong uVar5;
  uint uVar6;
  bool bVar7;
  
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
LAB_001006bd:
    uVar1 = (uint)param_3;
    uVar6 = _DAT_4c01c98341098b45;
    if ((param_3 & 0x3ff) == 0) {
      uVar1 = 0;
      goto LAB_001006e3;
    }
  }
  else {
    if ((0x7fd < (int)uVar1) || ((uVar1 == 0x7fd && ((long)(lVar4 + param_3) < 0)))) {
      DAT_483fe0c148090a80 = DAT_483fe0c148090a80 | 9;
      return lVar2 + (param_1 << 0x3f) + 0x7ff0000000000000;
    }
    if (-1 < (int)uVar1) goto LAB_001006bd;
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
      goto LAB_001006e3;
    }
    param_2 = 0;
    uVar6 = _DAT_3104c983410e8b44 | 4;
  }
  uVar1 = uVar1 & 0x3ff;
  _DAT_4cc93102eb0a8945 = uVar6 | 1;
LAB_001006e3:
  uVar5 = ~(ulong)((_DAT_ff831174ff85398b | uVar1 ^ 0x200) == 0) & param_3 + lVar4 >> 10;
  uVar3 = param_2 << 0x34;
  if (uVar5 == 0) {
    uVar3 = uVar5;
  }
  return (param_1 << 0x3f | uVar5) + uVar3;
}


