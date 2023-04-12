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

ulong float64_mul(ulong param_1,ulong param_2)

{
  bool bVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  uint uVar9;
  uint uVar10;
  ulong uVar11;
  int iVar12;
  ulong uVar13;
  uint uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  bool bVar18;
  bool bVar19;
  bool bVar20;
  
  uVar2 = 0x7fffffffffffffff;
  uVar8 = param_1 & 0xfffffffffffff;
  uVar7 = (uint)(param_1 >> 0x20);
  uVar9 = uVar7 >> 0x14 & 0x7ff;
  uVar15 = param_2 & 0xfffffffffffff;
  uVar14 = (uint)(param_2 >> 0x20);
  uVar6 = uVar14 >> 0x14 & 0x7ff;
  uVar13 = (param_2 ^ param_1) & 0x8000000000000000;
  if (uVar9 == 0x7ff) {
    if ((uVar8 != 0) || ((uVar15 != 0 && (uVar6 == 0x7ff)))) {
LAB_001001d0:
      bVar18 = (param_1 & 0x7ff8000000000000) == 0x7ff0000000000000;
      bVar20 = (param_1 & 0x7ffffffffffff) != 0;
      bVar19 = (param_2 & 0x7ff8000000000000) == 0x7ff0000000000000;
      bVar1 = (param_2 & 0x7ffffffffffff) != 0;
      if ((bVar20 && bVar18) || (bVar1 && bVar19)) {
        DAT_49c0ff4810088041 = DAT_49c0ff4810088041 | 0x10;
      }
      uVar15 = param_2 | 0x8000000000000;
      if (param_2 * 2 < 0xffe0000000000001) {
        uVar15 = param_1 | 0x8000000000000;
      }
      if (bVar20 && bVar18) {
        uVar15 = param_1 | 0x8000000000000;
      }
      if (!bVar1 || !bVar19) {
        return uVar15;
      }
      return param_2 | 0x8000000000000;
    }
    uVar15 = uVar14 >> 0x14 & 0x7ff | uVar15;
joined_r0x00100282:
    if (uVar15 == 0) {
      DAT_a6e9100980 = DAT_a6e9100980 | 0x10;
    }
    else {
      uVar2 = uVar13 | 0x7ff0000000000000;
    }
    return uVar2;
  }
  if (uVar6 == 0x7ff) {
    if (uVar15 != 0) goto LAB_001001d0;
    uVar15 = uVar7 >> 0x14 & 0x7ff | uVar8;
    goto joined_r0x00100282;
  }
  if (uVar9 == 0) {
    if (uVar8 == 0) {
      return uVar13;
    }
    bVar20 = uVar8 >> 0x20 == 0;
    uVar7 = (uint)(uVar8 >> 0x20);
    if (bVar20) {
      uVar7 = (uint)param_1;
    }
    uVar14 = uVar7 << 0x10;
    if (uVar7 >= 0x10000) {
      uVar14 = uVar7;
    }
    uVar10 = (uint)(uVar7 < 0x10000) * 0x10;
    uVar9 = uVar10 + 8;
    uVar7 = uVar14 << 8;
    if (0xffffff < uVar14) {
      uVar9 = uVar10;
      uVar7 = uVar14;
    }
    iVar12 = (uVar9 | (uint)bVar20 << 5) +
             *(int *)(countLeadingZeros32_countLeadingZerosHigh + (ulong)(uVar7 >> 0x18) * 4);
    uVar8 = uVar8 << ((char)iVar12 - 0xbU & 0x3f);
    uVar9 = 0xc - iVar12;
  }
  if (uVar6 == 0) {
    if (uVar15 == 0) {
      return uVar13;
    }
    bVar20 = uVar15 >> 0x20 == 0;
    uVar7 = (uint)(uVar15 >> 0x20);
    if (bVar20) {
      uVar7 = (uint)param_2;
    }
    uVar14 = uVar7 << 0x10;
    if (uVar7 >= 0x10000) {
      uVar14 = uVar7;
    }
    uVar10 = (uint)(uVar7 < 0x10000) * 0x10;
    uVar6 = uVar10 + 8;
    uVar7 = uVar14 << 8;
    if (0xffffff < uVar14) {
      uVar6 = uVar10;
      uVar7 = uVar14;
    }
    iVar12 = (uVar6 | (uint)bVar20 << 5) +
             *(int *)(countLeadingZeros32_countLeadingZerosHigh + (ulong)(uVar7 >> 0x18) * 4);
    uVar15 = uVar15 << ((char)iVar12 - 0xbU & 0x3f);
    uVar6 = 0xc - iVar12;
  }
  uVar2 = uVar8 << 10 | 0x4000000000000000;
  uVar17 = uVar15 << 0xb | 0x8000000000000000;
  uVar4 = uVar2 >> 0x20;
  uVar11 = uVar17 >> 0x20;
  uVar8 = (uVar8 << 10 & 0xffffffff) * uVar11;
  uVar15 = (uVar15 << 0xb & 0xffffffff) * uVar4;
  uVar16 = uVar15 + uVar8;
  uVar17 = uVar17 * uVar2;
  uVar2 = (ulong)(uVar17 != 0) |
          (uVar16 >> 0x20) + uVar11 * uVar4 + ((ulong)CARRY8(uVar15,uVar8) << 0x20) +
          (ulong)(uVar17 < uVar16 << 0x20);
  uVar15 = uVar2 * 2;
  uVar8 = uVar15;
  if (-1 >= (long)uVar15) {
    uVar8 = uVar2;
  }
  uVar7 = ((uVar6 + uVar9) - (uint)(-1 < (long)uVar15)) - 0x3ff;
  uVar15 = (ulong)uVar7;
  if (_DAT_ff831074ff85388b == 0) {
    lVar3 = 0x200;
    lVar5 = 0;
  }
  else if (_DAT_ff831074ff85388b == 1) {
    lVar5 = -1;
    lVar3 = 0;
  }
  else {
    if ((long)(param_2 ^ param_1) < 0) {
      bVar20 = _DAT_ff831074ff85388b == 2;
    }
    else {
      bVar20 = _DAT_ff831074ff85388b == 3;
    }
    lVar3 = 0x3ff;
    if (bVar20) {
      lVar3 = 0;
    }
    lVar5 = -(ulong)bVar20;
  }
  if ((uVar7 & 0xffff) < 0x7fd) {
LAB_00100482:
    uVar7 = (uint)uVar8;
    uVar14 = _DAT_4c01c98341098b45;
    if ((uVar8 & 0x3ff) == 0) {
      uVar7 = 0;
      goto LAB_001004a8;
    }
  }
  else {
    if ((0x7fd < (int)uVar7) || ((uVar7 == 0x7fd && ((long)(lVar3 + uVar8) < 0)))) {
      DAT_b848090880 = DAT_b848090880 | 9;
      return (uVar13 | 0x7ff0000000000000) + lVar5;
    }
    if (-1 < (int)uVar7) goto LAB_00100482;
    if (-uVar7 < 0x40) {
      uVar8 = (ulong)(uVar8 << ((byte)uVar7 & 0x3f) != 0) | uVar8 >> ((byte)-uVar7 & 0x3f);
    }
    else {
      uVar8 = (ulong)(uVar8 != 0);
    }
    uVar7 = (uint)uVar8;
    if ((uVar8 & 0x3ff) == 0) {
      uVar7 = 0;
      uVar15 = 0;
      goto LAB_001004a8;
    }
    uVar15 = 0;
    uVar14 = _DAT_3104c983410a8b44 | 4;
  }
  uVar7 = uVar7 & 0x3ff;
  _DAT_48c93102eb0a8945 = uVar14 | 1;
LAB_001004a8:
  uVar8 = ~(ulong)((_DAT_ff831074ff85388b | uVar7 ^ 0x200) == 0) & uVar8 + lVar3 >> 10;
  uVar15 = uVar15 << 0x34;
  if (uVar8 == 0) {
    uVar15 = uVar8;
  }
  return (uVar8 | uVar13) + uVar15;
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
    lVar2 = float64_mul(*(undefined8 *)(&DAT_4c00000000258b4c + lVar4 * 8));
    iVar3 = iVar3 + (uint)(lVar2 != *(long *)(&DAT_8b4900401f0fed31 + lVar4 * 8));
    lVar4 = lVar4 + 1;
  } while (lVar4 != 0x14);
  uVar1 = gettimeofday((timeval *)local_40,(__timezone_ptr_t)0x0);
  if (uVar1 != 0) {
    printf("Error return from gettimeofday: %d",(ulong)uVar1);
  }
  _DAT_5c0f41f200110ff2 = (double)local_40._8_4_ * 1e-06 + (double)local_40._0_8_;
  printf("%0.6f\n",_DAT_5c0f41f200110ff2 - _DAT_3d8b4c0e110f41f2);
  return iVar3;
}


