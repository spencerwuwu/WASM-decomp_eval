#include "mips.h"



// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint submain(void)

{
  ulong uVar1;
  int iVar2;
  uint uVar3;
  byte bVar4;
  ulong uVar5;
  long lVar6;
  uint uVar7;
  int iVar8;
  ulong uVar9;
  uint uVar10;
  int iVar11;
  short sVar12;
  uint uVar13;
  uint uVar14;
  ulong uVar15;
  bool bVar16;
  undefined local_1c8 [16];
  undefined local_1b8 [16];
  undefined local_1a8 [16];
  undefined local_198 [16];
  undefined local_188 [16];
  undefined local_178 [16];
  undefined local_168 [16];
  undefined local_158 [16];
  undefined local_148 [16];
  undefined local_138 [264];
  
  uVar15 = 0;
  uVar3 = gettimeofday((timeval *)local_138,(__timezone_ptr_t)0x0);
  if (uVar3 != 0) {
    printf("Error return from gettimeofday: %d",(ulong)uVar3);
  }
  _DAT_1d8b480e110f41f2 = (double)local_138._8_4_ * 1e-06 + (double)local_138._0_8_;
  _DAT_f660000000003c7 = 0;
  local_1c8 = ZEXT816(0);
  local_1b8 = ZEXT816(0);
  local_1a8 = ZEXT816(0);
  local_198 = ZEXT816(0);
  local_188 = ZEXT816(0);
  local_178 = ZEXT816(0);
  local_168 = ZEXT816(0);
  local_158 = ZEXT816(0x7fffeffc00000000);
  memcpy(local_138,(void *)0x9024bc8d48,0x100);
  uVar5 = 0x400000;
  uVar9 = 0;
  iVar8 = 0;
  do {
    uVar1 = *(ulong *)(&DAT_48000003ba158d48 + (ulong)((uint)(uVar5 >> 2) & 0x3f) * 8);
    iVar11 = (int)uVar5;
    uVar10 = iVar11 + 4;
    uVar3 = (uint)uVar1;
    uVar5 = (uVar1 & 0xffffffff) >> 0x1a;
    iVar2 = (int)uVar5;
    if (iVar2 == 3) {
      local_158 = CONCAT412(uVar10,local_158._0_12_);
LAB_001000f5:
      uVar5 = (ulong)(uVar3 * 4 & 0xffffffc);
      goto switchD_001001bb_caseD_2;
    }
    if (iVar2 == 2) goto LAB_001000f5;
    uVar14 = (uint)(uVar1 >> 0x10);
    if (uVar5 != 0) {
      uVar5 = 0;
      uVar7 = uVar14 & 0x1f;
      uVar13 = (uint)((uVar1 & 0xffffffff) >> 0x15) & 0x1f;
      sVar12 = (short)uVar1;
      switch(iVar2) {
      case 1:
        if (*(int *)(local_1c8 + (ulong)uVar13 * 4) < 0) break;
LAB_001001f6:
        uVar5 = (ulong)(uint)(iVar11 + sVar12 * 4);
      default:
        goto switchD_001001bb_caseD_2;
      case 4:
        if (*(int *)(local_1c8 + (ulong)uVar13 * 4) == *(int *)(local_1c8 + (ulong)uVar7 * 4))
        goto LAB_001001f6;
        break;
      case 5:
        if (*(int *)(local_1c8 + (ulong)uVar13 * 4) != *(int *)(local_1c8 + (ulong)uVar7 * 4))
        goto LAB_001001f6;
        break;
      case 9:
        uVar3 = (int)sVar12 + *(int *)(local_1c8 + (ulong)uVar13 * 4);
        goto LAB_0010037d;
      case 10:
        uVar3 = (uint)(*(int *)(local_1c8 + (ulong)uVar13 * 4) < (int)sVar12);
        goto LAB_001003af;
      case 0xb:
        bVar16 = *(uint *)(local_1c8 + (ulong)uVar13 * 4) < (uVar3 & 0xffff);
        goto LAB_001003ab;
      case 0xc:
        uVar3 = *(ushort *)(local_1c8 + (ulong)uVar13 * 4) & uVar3;
        goto LAB_00100343;
      case 0xd:
        uVar3 = uVar3 & 0xffff | *(uint *)(local_1c8 + (ulong)uVar13 * 4);
        goto LAB_0010037d;
      case 0xe:
        uVar3 = uVar3 & 0xffff;
        goto LAB_00100379;
      case 0xf:
        *(uint *)(local_1c8 + (ulong)uVar7 * 4) = uVar3 << 0x10;
        break;
      case 0x23:
        uVar3 = *(uint *)(local_138 +
                         (ulong)(*(int *)(local_1c8 + (ulong)uVar13 * 4) + uVar3 >> 2 & 0x3f) * 4);
LAB_00100343:
        *(uint *)(local_1c8 + (ulong)uVar7 * 4) = uVar3;
        break;
      case 0x2b:
        *(undefined4 *)
         (local_138 + (ulong)(*(int *)(local_1c8 + (ulong)uVar13 * 4) + uVar3 >> 2 & 0x3f) * 4) =
             *(undefined4 *)(local_1c8 + (ulong)uVar7 * 4);
      }
      goto LAB_001003d0;
    }
    uVar5 = 0;
    bVar4 = (byte)((uVar1 & 0xffffffff) >> 6) & 0x1f;
    uVar7 = (uint)((uVar1 & 0xffffffff) >> 0xb) & 0x1f;
    uVar14 = uVar14 & 0x1f;
    uVar13 = uVar3 >> 0x15 & 0x1f;
    switch(uVar3 & 0x3f) {
    case 0:
      iVar11 = *(int *)(local_1c8 + (ulong)uVar14 * 4);
      goto LAB_001002d3;
    default:
      goto switchD_001001bb_caseD_2;
    case 2:
      uVar3 = *(int *)(local_1c8 + (ulong)uVar14 * 4) >> bVar4;
      break;
    case 4:
      iVar11 = *(int *)(local_1c8 + (ulong)uVar14 * 4);
      bVar4 = local_1c8[(ulong)uVar13 * 4];
LAB_001002d3:
      uVar3 = iVar11 << (bVar4 & 0x1f);
      break;
    case 6:
      uVar3 = *(int *)(local_1c8 + (ulong)uVar14 * 4) >> (local_1c8[(ulong)uVar13 * 4] & 0x1f);
      break;
    case 8:
      uVar5 = (ulong)*(uint *)(local_1c8 + (ulong)uVar13 * 4);
      goto switchD_001001bb_caseD_2;
    case 0x10:
      *(int *)(local_1c8 + (ulong)uVar7 * 4) = (int)uVar9;
      goto LAB_001003d0;
    case 0x12:
      *(int *)(local_1c8 + (ulong)uVar7 * 4) = (int)uVar15;
      goto LAB_001003d0;
    case 0x18:
      uVar5 = (ulong)*(int *)(local_1c8 + (ulong)uVar13 * 4);
      uVar15 = (ulong)*(int *)(local_1c8 + (ulong)uVar14 * 4);
      goto LAB_001003c4;
    case 0x19:
      uVar5 = (ulong)*(uint *)(local_1c8 + (ulong)uVar13 * 4);
      uVar15 = (ulong)*(uint *)(local_1c8 + (ulong)uVar14 * 4);
LAB_001003c4:
      uVar15 = uVar15 * uVar5;
      uVar9 = uVar15 >> 0x20;
      goto LAB_001003d0;
    case 0x21:
      uVar3 = *(int *)(local_1c8 + (ulong)uVar14 * 4) + *(int *)(local_1c8 + (ulong)uVar13 * 4);
      break;
    case 0x23:
      uVar3 = *(int *)(local_1c8 + (ulong)uVar13 * 4) - *(int *)(local_1c8 + (ulong)uVar14 * 4);
      goto LAB_00100343;
    case 0x24:
      uVar3 = *(uint *)(local_1c8 + (ulong)uVar14 * 4) & *(uint *)(local_1c8 + (ulong)uVar13 * 4);
      break;
    case 0x25:
      uVar3 = *(uint *)(local_1c8 + (ulong)uVar14 * 4) | *(uint *)(local_1c8 + (ulong)uVar13 * 4);
      break;
    case 0x26:
      uVar3 = *(uint *)(local_1c8 + (ulong)uVar14 * 4);
LAB_00100379:
      uVar3 = uVar3 ^ *(uint *)(local_1c8 + (ulong)uVar13 * 4);
      break;
    case 0x2a:
      uVar3 = (uint)(*(int *)(local_1c8 + (ulong)uVar13 * 4) <
                    *(int *)(local_1c8 + (ulong)uVar14 * 4));
      goto LAB_001003af;
    case 0x2b:
      bVar16 = *(uint *)(local_1c8 + (ulong)uVar13 * 4) < *(uint *)(local_1c8 + (ulong)uVar14 * 4);
LAB_001003ab:
      uVar3 = (uint)bVar16;
LAB_001003af:
      *(uint *)(local_1c8 + (ulong)uVar7 * 4) = uVar3;
      goto LAB_001003d0;
    }
LAB_0010037d:
    *(uint *)(local_1c8 + (ulong)uVar7 * 4) = uVar3;
LAB_001003d0:
    uVar5 = (ulong)uVar10;
switchD_001001bb_caseD_2:
    local_1c8 = ZEXT1216(local_1c8._4_12_) << 0x20;
    iVar8 = iVar8 + 1;
    if ((int)uVar5 == 0) {
      _DAT_f660000000003c7 = (uint)(iVar8 != 0x263);
      lVar6 = 0;
      do {
        _DAT_f660000000003c7 =
             _DAT_f660000000003c7 +
             (*(int *)(local_138 + lVar6 * 4) != *(int *)(&DAT_908cb48b9066 + lVar6 * 4));
        lVar6 = lVar6 + 1;
      } while (lVar6 != 8);
      uVar3 = gettimeofday((timeval *)local_148,(__timezone_ptr_t)0x0);
      if (uVar3 != 0) {
        printf("Error return from gettimeofday: %d",(ulong)uVar3);
      }
      _DAT_5c0f41f200110ff2 = (double)local_148._8_4_ * 1e-06 + (double)local_148._0_8_;
      printf("%0.6f\n",SUB84(_DAT_5c0f41f200110ff2 - _DAT_1d8b480e110f41f2,0));
      return _DAT_f660000000003c7;
    }
  } while( true );
}


