#include "sha_driver.h"



void local_memset(long param_1,undefined4 param_2,int param_3,int param_4)

{
  bool bVar1;
  int iVar2;
  undefined4 *puVar3;
  long lVar4;
  
  if (3 < param_3) {
    lVar4 = 0;
    if (0 < param_4) {
      lVar4 = (ulong)(param_4 - 1) * 4 + 4;
    }
    puVar3 = (undefined4 *)(param_1 + lVar4);
    iVar2 = param_3 + 3;
    if (-1 < param_3) {
      iVar2 = param_3;
    }
    iVar2 = iVar2 >> 2;
    do {
      *puVar3 = param_2;
      puVar3 = puVar3 + 1;
      bVar1 = 1 < iVar2;
      iVar2 = iVar2 + -1;
    } while (bVar1);
  }
  return;
}



void local_memcpy(undefined4 *param_1,undefined4 *param_2,int param_3)

{
  undefined4 uVar1;
  bool bVar2;
  int iVar3;
  
  if (3 < param_3) {
    iVar3 = param_3 + 3;
    if (-1 < param_3) {
      iVar3 = param_3;
    }
    iVar3 = iVar3 >> 2;
    do {
      uVar1 = *param_2;
      param_2 = param_2 + 1;
      *param_1 = uVar1;
      param_1 = param_1 + 1;
      bVar2 = 1 < iVar3;
      iVar3 = iVar3 + -1;
    } while (bVar2);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void sha_init(void)

{
  _DAT_e1f01040c700290f = 0x67452301;
  uRame1f01040c7002913 = 0xefcdab89;
  uRame1f01040c7002917 = 0x98badcfe;
  uRame1f01040c700291b = 0x10325476;
  _DAT_e1f01040c700291f = 0xc3d2e1f0;
  _DAT_8b480000000000c7 = 0;
  _DAT_66c30000000000c7 = 0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void sha_update(undefined4 *param_1,uint param_2)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  bool bVar7;
  
  bVar7 = CARRY4(param_2 * 8,_DAT_f50c8d42);
  _DAT_f50c8d42 = param_2 * 8 + _DAT_f50c8d42;
  if (bVar7) {
    _DAT_c1f08944088902ff = _DAT_c1f08944088902ff + 1;
  }
  _DAT_557c40fe83410101 = _DAT_557c40fe83410101 + (param_2 >> 0x1d);
  uVar3 = param_2;
  if ((int)param_2 < 0x40) {
    if ((int)param_2 < 4) {
      return;
    }
  }
  else {
    do {
      puVar5 = (undefined4 *)&DAT_841f0f2e6666;
      puVar6 = param_1;
      uVar2 = 0x10;
      do {
        uVar1 = *puVar6;
        puVar6 = puVar6 + 1;
        *puVar5 = uVar1;
        puVar5 = puVar5 + 1;
        bVar7 = 1 < uVar2;
        uVar2 = uVar2 - 1;
      } while (bVar7);
      sha_transform();
      param_1 = param_1 + 0x10;
      param_2 = uVar3 - 0x40;
      bVar7 = 0x7f < (int)uVar3;
      uVar3 = param_2;
    } while (bVar7);
    if ((int)param_2 < 4) {
      return;
    }
  }
  uVar3 = param_2 + 3;
  if (-1 < (int)param_2) {
    uVar3 = param_2;
  }
  puVar6 = (undefined4 *)&DAT_338bff508d001f0f;
  iVar4 = (int)uVar3 >> 2;
  do {
    uVar1 = *param_1;
    param_1 = param_1 + 1;
    *puVar6 = uVar1;
    puVar6 = puVar6 + 1;
    bVar7 = 1 < iVar4;
    iVar4 = iVar4 + -1;
  } while (bVar7);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void sha_final(void)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  int iVar7;
  
  uVar2 = _DAT_8303e8c1d889288b;
  uVar1 = _DAT_58b48188b;
  uVar3 = _DAT_58b48188b >> 3 & 0x3f;
  uVar6 = (ulong)uVar3;
  *(undefined4 *)(&DAT_808e04c741 + uVar6 * 4) = 0x80;
  if (uVar3 < 0x38) {
    if (uVar3 < 0x34) {
      iVar7 = 0x3a - uVar3;
      if (-1 < (int)(0x37 - uVar3)) {
        iVar7 = 0x37 - uVar3;
      }
      iVar7 = iVar7 >> 2;
      iVar4 = 1;
      if (iVar7 < 1) {
        iVar4 = iVar7;
      }
      memset((void *)(uVar6 * 4 + 0x808e04c745),0,(ulong)(uint)(iVar7 - iVar4) * 4 + 4);
    }
  }
  else {
    uVar3 = uVar3 ^ 0x3f;
    if (3 < uVar3) {
      uVar5 = 1;
      if (uVar3 >> 2 == 0) {
        uVar5 = uVar3 >> 2;
      }
      memset((void *)(uVar6 * 4 + 0x808e04c745),0,(ulong)((uVar3 >> 2) - uVar5) * 4 + 4);
    }
    sha_transform();
    _DAT_808e04c761 = ZEXT816(0);
    _DAT_808e04c751 = ZEXT816(0);
    _DAT_808e04c741 = ZEXT816(0);
    _DAT_808e04c771 = 0;
  }
  _DAT_808e04c779 = uVar2;
  _DAT_808e04c77d = uVar1;
  sha_transform();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void sha_stream(void)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar7;
  long lVar8;
  bool bVar9;
  ulong uVar6;
  
  _DAT_e1f01040c700290f = 0x67452301;
  uRame1f01040c7002913 = 0xefcdab89;
  uRame1f01040c7002917 = 0x98badcfe;
  uRame1f01040c700291b = 0x10325476;
  _DAT_e1f01040c700291f = 0xc3d2e1f0;
  _DAT_8b4c0000000003c7 = 0;
  _DAT_450000000006c741 = 0;
  lVar8 = 0;
  do {
    sha_update(lVar8 * 0x2000 + -0x76b343cb74bc70);
    uVar2 = _DAT_8b4c0000000003c7;
    uVar1 = _DAT_450000000006c741;
    bVar9 = lVar8 == 0;
    lVar8 = lVar8 + 1;
  } while (bVar9);
  uVar3 = _DAT_8b4c0000000003c7 >> 3 & 0x3f;
  uVar6 = (ulong)uVar3;
  *(undefined4 *)(&DAT_808604c741 + uVar6 * 4) = 0x80;
  if (uVar3 < 0x38) {
    if (uVar3 < 0x34) {
      iVar7 = 0x3a - uVar3;
      if (-1 < (int)(0x37 - uVar3)) {
        iVar7 = 0x37 - uVar3;
      }
      iVar7 = iVar7 >> 2;
      iVar5 = 1;
      if (iVar7 < 1) {
        iVar5 = iVar7;
      }
      memset((void *)(uVar6 * 4 + 0x808604c745),0,(ulong)(uint)(iVar7 - iVar5) * 4 + 4);
    }
  }
  else {
    uVar3 = uVar3 ^ 0x3f;
    if (3 < uVar3) {
      uVar4 = 1;
      if (uVar3 >> 2 == 0) {
        uVar4 = uVar3 >> 2;
      }
      memset((void *)(uVar6 * 4 + 0x808604c745),0,(ulong)((uVar3 >> 2) - uVar4) * 4 + 4);
    }
    sha_transform();
    _DAT_808604c761 = ZEXT816(0);
    _DAT_808604c751 = ZEXT816(0);
    _DAT_808604c741 = ZEXT816(0);
    _DAT_808604c771 = 0;
  }
  _DAT_808604c779 = uVar1;
  _DAT_808604c77d = uVar2;
  sha_transform();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int submain(void)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  undefined local_20 [16];
  
  iVar3 = 0;
  uVar1 = gettimeofday((timeval *)local_20,(__timezone_ptr_t)0x0);
  if (uVar1 != 0) {
    printf("Error return from gettimeofday: %d",(ulong)uVar1);
  }
  _DAT_fe6de80e110f41f2 = (double)local_20._8_4_ * 1e-06 + (double)local_20._0_8_;
  sha_stream();
  lVar2 = 0;
  do {
    iVar3 = iVar3 + (uint)(*(int *)(&DAT_31000000000d8b48 + lVar2 * 4) !=
                          *(int *)(&DAT_f2e66666666d231 + lVar2 * 4));
    lVar2 = lVar2 + 1;
  } while (lVar2 != 5);
  uVar1 = gettimeofday((timeval *)local_20,(__timezone_ptr_t)0x0);
  if (uVar1 != 0) {
    printf("Error return from gettimeofday: %d",(ulong)uVar1);
  }
  _DAT_5c0f41f200110ff2 = (double)local_20._8_4_ * 1e-06 + (double)local_20._0_8_;
  printf("%0.6f\n",_DAT_5c0f41f200110ff2 - _DAT_fe6de80e110f41f2);
  return iVar3;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void sha_transform(void)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint auStack_1b8 [8];
  uint auStack_198 [5];
  uint auStack_184 [85];
  
  auStack_184[15] = _DAT_f1048280f00283f;
  auStack_184[16] = uRam0f1048280f002843;
  auStack_184[17] = uRam0f1048280f002847;
  auStack_184[18] = uRam0f1048280f00284b;
  auStack_184[11] = _DAT_f1048280f00282f;
  auStack_184[12] = uRam0f1048280f002833;
  auStack_184[13] = uRam0f1048280f002837;
  auStack_184[14] = uRam0f1048280f00283b;
  auStack_184[7] = _DAT_f1048280f00281f;
  auStack_184[8] = uRam0f1048280f002823;
  auStack_184[9] = uRam0f1048280f002827;
  auStack_184[10] = uRam0f1048280f00282b;
  auStack_184[3] = _DAT_f1048280f00280f;
  auStack_184[4] = uRam0f1048280f002813;
  auStack_184[5] = uRam0f1048280f002817;
  auStack_184[6] = uRam0f1048280f00281b;
  lVar1 = 0x10;
  do {
    auStack_184[lVar1 + 3] =
         auStack_198[lVar1] ^ auStack_184[lVar1] ^ auStack_1b8[lVar1 + 2] ^ auStack_1b8[lVar1];
    lVar1 = lVar1 + 1;
  } while (lVar1 != 0x50);
  lVar1 = 0;
  uVar9 = _DAT_708b04788b008b54;
  uVar2 = _DAT_708b04788b008b50;
  uVar5 = _DAT_708b04788b008b4c;
  uVar8 = _DAT_708b04788b008b48;
  uVar6 = _DAT_708b04788b008b44;
  do {
    uVar7 = uVar6;
    uVar4 = uVar5;
    uVar3 = uVar2;
    uVar6 = auStack_184[lVar1 + 3] +
            (~uVar8 & uVar3) + uVar9 + (uVar4 & uVar8) + (uVar7 << 5 | uVar7 >> 0x1b) + 0x5a827999;
    uVar5 = uVar8 << 0x1e | uVar8 >> 2;
    lVar1 = lVar1 + 1;
    uVar9 = uVar3;
    uVar2 = uVar4;
    uVar8 = uVar7;
  } while (lVar1 != 0x14);
  lVar1 = 0x14;
  do {
    uVar9 = uVar4;
    uVar2 = uVar6;
    uVar4 = uVar5;
    uVar6 = (uVar4 ^ uVar7 ^ uVar9) + (uVar2 << 5 | uVar2 >> 0x1b) + uVar3 + auStack_184[lVar1 + 3]
            + 0x6ed9eba1;
    uVar5 = uVar7 << 0x1e | uVar7 >> 2;
    lVar1 = lVar1 + 1;
    uVar7 = uVar2;
    uVar3 = uVar9;
  } while (lVar1 != 0x28);
  lVar1 = 0x28;
  do {
    uVar8 = uVar4;
    uVar7 = uVar6;
    uVar4 = uVar5;
    uVar6 = auStack_184[lVar1 + 3] +
            (uVar8 & uVar4 | (uVar8 | uVar4) & uVar2) + (uVar7 << 5 | uVar7 >> 0x1b) + uVar9 +
            0x8f1bbcdc;
    uVar5 = uVar2 << 0x1e | uVar2 >> 2;
    lVar1 = lVar1 + 1;
    uVar9 = uVar8;
    uVar2 = uVar7;
  } while (lVar1 != 0x3c);
  lVar1 = 0x3c;
  do {
    uVar2 = uVar4;
    uVar9 = uVar6;
    uVar4 = uVar5;
    uVar6 = (uVar4 ^ uVar7 ^ uVar2) + (uVar9 << 5 | uVar9 >> 0x1b) + uVar8 + auStack_184[lVar1 + 3]
            + 0xca62c1d6;
    uVar5 = uVar7 << 0x1e | uVar7 >> 2;
    lVar1 = lVar1 + 1;
    uVar8 = uVar2;
    uVar7 = uVar9;
  } while (lVar1 != 0x50);
  _DAT_708b04788b008b44 = uVar6 + _DAT_708b04788b008b44;
  _DAT_708b04788b008b48 = uVar9 + _DAT_708b04788b008b48;
  _DAT_708b04788b008b4c = uVar5 + _DAT_708b04788b008b4c;
  _DAT_708b04788b008b50 = uVar4 + _DAT_708b04788b008b50;
  _DAT_708b04788b008b54 = uVar2 + _DAT_708b04788b008b54;
  return;
}


