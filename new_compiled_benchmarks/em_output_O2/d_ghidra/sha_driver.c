#include "sha_driver.h"



void local_memset(long param_1,undefined4 param_2,int param_3,int param_4)

{
  undefined4 *puVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  undefined4 *puVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  
  iVar3 = param_3 + 3;
  if (-1 < param_3) {
    iVar3 = param_3;
  }
  lVar6 = 0;
  if (0 < param_4) {
    lVar6 = (ulong)(param_4 - 1) * 4 + 4;
  }
  if (3 < param_3) {
    iVar3 = iVar3 >> 2;
    puVar5 = (undefined4 *)(param_1 + lVar6);
    if (6 < iVar3 - 1U) {
      uVar4 = (ulong)(iVar3 - 1U) + 1;
      uVar7 = uVar4 & 0xfffffffffffffff8;
      iVar3 = iVar3 - (int)uVar7;
      uVar8 = 0;
      do {
        puVar1 = puVar5 + uVar8;
        *puVar1 = param_2;
        puVar1[1] = param_2;
        puVar1[2] = param_2;
        puVar1[3] = param_2;
        puVar1 = puVar5 + uVar8 + 4;
        *puVar1 = param_2;
        puVar1[1] = param_2;
        puVar1[2] = param_2;
        puVar1[3] = param_2;
        uVar8 = uVar8 + 8;
      } while (uVar8 != uVar7);
      puVar5 = puVar5 + uVar7;
      if (uVar4 == uVar7) {
        return;
      }
    }
    do {
      *puVar5 = param_2;
      bVar2 = 1 < iVar3;
      puVar5 = puVar5 + 1;
      iVar3 = iVar3 + -1;
    } while (bVar2);
  }
  return;
}



void local_memcpy(undefined4 *param_1,undefined4 *param_2,uint param_3)

{
  undefined4 uVar1;
  bool bVar2;
  uint uVar3;
  
  if (3 < (int)param_3) {
    uVar3 = param_3 >> 2;
    do {
      uVar1 = *param_2;
      param_2 = param_2 + 1;
      *param_1 = uVar1;
      param_1 = param_1 + 1;
      bVar2 = 1 < uVar3;
      uVar3 = uVar3 - 1;
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
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  bool bVar7;
  
  bVar7 = CARRY4(_DAT_f50c8d42,param_2 * 8);
  _DAT_f50c8d42 = _DAT_f50c8d42 + param_2 * 8;
  _DAT_48321108011deec1 = _DAT_48321108011deec1 + (param_2 >> 0x1d) + (uint)bVar7;
  uVar4 = param_2;
  if ((int)param_2 < 0x40) {
    if ((int)param_2 < 4) {
      return;
    }
  }
  else {
    do {
      puVar5 = (undefined4 *)&DAT_841f0f2e6666;
      puVar6 = param_1;
      iVar3 = 0x10;
      do {
        *puVar5 = *puVar6;
        puVar1 = puVar6 + 1;
        puVar6 = puVar6 + 2;
        puVar5[1] = *puVar1;
        puVar5 = puVar5 + 2;
        bVar7 = iVar3 != 2;
        iVar3 = iVar3 + -2;
      } while (bVar7);
      sha_transform();
      param_1 = param_1 + 0x10;
      param_2 = uVar4 - 0x40;
      bVar7 = 0x7f < (int)uVar4;
      uVar4 = param_2;
    } while (bVar7);
    if ((int)param_2 < 4) {
      return;
    }
  }
  puVar6 = (undefined4 *)&DAT_ff508d0000441f0f;
  uVar4 = param_2 >> 2;
  do {
    uVar2 = *param_1;
    param_1 = param_1 + 1;
    *puVar6 = uVar2;
    puVar6 = puVar6 + 1;
    bVar7 = 1 < uVar4;
    uVar4 = uVar4 - 1;
  } while (bVar7);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void sha_final(void)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  ulong uVar4;
  
  uVar2 = _DAT_8303e8c1d889288b;
  uVar1 = _DAT_58b48188b;
  uVar3 = _DAT_58b48188b >> 3 & 0x3f;
  uVar4 = (ulong)uVar3;
  *(undefined4 *)(&DAT_808604c741 + uVar4 * 4) = 0x80;
  if (uVar3 < 0x38) {
    if (uVar3 < 0x34) {
      memset(&DAT_808604c745 + uVar4 * 4,0,(ulong)((0x37 - uVar3 >> 2) - 1) * 4 + 4);
    }
  }
  else {
    if (3 < (uVar3 ^ 0x3c)) {
      *(undefined4 *)(&DAT_808604c745 + uVar4 * 4) = 0;
    }
    sha_transform();
    _DAT_808604c761 = ZEXT816(0);
    _DAT_808604c751 = ZEXT816(0);
    _DAT_808604c741 = ZEXT816(0);
    _DAT_808604c771 = 0;
  }
  _DAT_808604c779 = uVar2;
  _DAT_808604c77d = uVar1;
  sha_transform();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void sha_stream(void)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  
  _DAT_e1f01040c700290f = 0x67452301;
  uRame1f01040c7002913 = 0xefcdab89;
  uRame1f01040c7002917 = 0x98badcfe;
  uRame1f01040c700291b = 0x10325476;
  _DAT_e1f01040c700291f = 0xc3d2e1f0;
  _DAT_4c0000000006c741 = 0;
  _DAT_480000000007c741 = 0;
  sha_update(0x2000bedf8948,0x2000);
  sha_update(0x2000bedfa948);
  uVar2 = _DAT_4c0000000006c741;
  uVar1 = _DAT_480000000007c741;
  uVar3 = _DAT_4c0000000006c741 >> 3 & 0x3f;
  uVar4 = (ulong)uVar3;
  *(undefined4 *)(&DAT_808604c741 + uVar4 * 4) = 0x80;
  if (uVar3 < 0x38) {
    if (uVar3 < 0x34) {
      memset(&DAT_808604c745 + uVar4 * 4,0,(ulong)((0x37 - uVar3 >> 2) - 1) * 4 + 4);
    }
  }
  else {
    if (3 < (uVar3 ^ 0x3c)) {
      *(undefined4 *)(&DAT_808604c745 + uVar4 * 4) = 0;
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

char submain(void)

{
  int iVar1;
  uint uVar2;
  undefined4 in_ECX;
  undefined4 uVar3;
  byte bVar4;
  undefined local_38 [16];
  int local_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  
  iVar1 = gettimeofday((timeval *)local_38,(__timezone_ptr_t)0x0);
  if (iVar1 != 0) {
    printf("Error return from gettimeofday: %d");
  }
  _DAT_feb2e80e110f41f2 = (double)local_38._8_4_ * 1e-06 + (double)local_38._0_8_;
  sha_stream();
  iVar1 = _DAT_102444290f00281f;
  local_28 = _DAT_102444290f00280f;
  iStack_24 = iRam102444290f002813;
  iStack_20 = iRam102444290f002817;
  iStack_1c = iRam102444290f00281b;
  uVar2 = gettimeofday((timeval *)local_38,(__timezone_ptr_t)0x0);
  if (uVar2 != 0) {
    printf("Error return from gettimeofday: %d",(ulong)uVar2);
  }
  uVar3 = movmskps(in_ECX,CONCAT412(-(uint)(iStack_1c == 0x63f7ba43),
                                    CONCAT48(-(uint)(iStack_20 == 0x2c412112),
                                             CONCAT44(-(uint)(iStack_24 == -0x6c236b7b),
                                                      -(uint)(local_28 == 0x6a5a37)))));
  bVar4 = (byte)uVar3 ^ 0xf;
  bVar4 = bVar4 - (bVar4 >> 1 & 5);
  bVar4 = (bVar4 >> 2 & 0x33) + (bVar4 & 0x33);
  _DAT_5c0f41f200110ff2 = (double)local_38._8_4_ * 1e-06 + (double)local_38._0_8_;
  printf("%0.6f\n",_DAT_5c0f41f200110ff2 - _DAT_feb2e80e110f41f2);
  return ((bVar4 >> 4) + bVar4 & 0xf) + (iVar1 != -0x528c06de);
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
  uVar6 = _DAT_708b04788b008b50;
  uVar7 = _DAT_708b04788b008b54;
  uVar2 = _DAT_708b04788b008b4c;
  uVar4 = _DAT_708b04788b008b48;
  uVar8 = _DAT_708b04788b008b44;
  do {
    uVar3 = uVar2;
    uVar5 = uVar4 << 0x1e | uVar4 >> 2;
    uVar4 = auStack_184[lVar1 + 3] +
            (~uVar4 & uVar6) + uVar7 + (uVar3 & uVar4) + (uVar8 << 5 | uVar8 >> 0x1b) + 0x5a827999;
    uVar2 = uVar8 << 0x1e | uVar8 >> 2;
    uVar8 = *(int *)((long)auStack_184 + (lVar1 * 4 | 4U) + 0xc) +
            (~uVar8 & uVar3) + (uVar5 & uVar8) + uVar6 + (uVar4 * 0x20 | uVar4 >> 0x1b) + 0x5a827999
    ;
    lVar1 = lVar1 + 2;
    uVar6 = uVar5;
    uVar7 = uVar3;
  } while (lVar1 != 0x14);
  lVar1 = 0x14;
  do {
    uVar7 = uVar2;
    uVar6 = uVar4 << 0x1e | uVar4 >> 2;
    uVar4 = auStack_184[lVar1 + 3] + (uVar7 ^ uVar4 ^ uVar5) + (uVar8 << 5 | uVar8 >> 0x1b) + uVar3
            + 0x6ed9eba1;
    uVar2 = uVar8 << 0x1e | uVar8 >> 2;
    uVar8 = *(int *)((long)auStack_184 + (lVar1 * 4 | 4U) + 0xc) +
            (uVar8 ^ uVar7 ^ uVar6) + uVar5 + (uVar4 * 0x20 | uVar4 >> 0x1b) + 0x6ed9eba1;
    lVar1 = lVar1 + 2;
    uVar5 = uVar6;
    uVar3 = uVar7;
  } while (lVar1 != 0x28);
  lVar1 = 0x28;
  do {
    uVar3 = uVar2;
    uVar5 = uVar4 << 0x1e | uVar4 >> 2;
    uVar4 = auStack_184[lVar1 + 3] +
            (uVar6 & uVar3 | (uVar6 | uVar3) & uVar4) + (uVar8 << 5 | uVar8 >> 0x1b) + uVar7 +
            0x8f1bbcdc;
    uVar2 = uVar8 << 0x1e | uVar8 >> 2;
    uVar8 = (uVar3 & uVar5 | (uVar3 | uVar5) & uVar8) + uVar6 + (uVar4 * 0x20 | uVar4 >> 0x1b) +
            *(int *)((long)auStack_184 + (lVar1 * 4 | 4U) + 0xc) + 0x8f1bbcdc;
    lVar1 = lVar1 + 2;
    uVar6 = uVar5;
    uVar7 = uVar3;
  } while (lVar1 != 0x3c);
  lVar1 = 0x3c;
  do {
    uVar6 = uVar2;
    uVar7 = uVar4 << 0x1e | uVar4 >> 2;
    uVar4 = auStack_184[lVar1 + 3] + (uVar6 ^ uVar4 ^ uVar5) + (uVar8 << 5 | uVar8 >> 0x1b) + uVar3
            + 0xca62c1d6;
    uVar2 = uVar8 << 0x1e | uVar8 >> 2;
    uVar8 = *(int *)((long)auStack_184 + (lVar1 * 4 | 4U) + 0xc) +
            (uVar8 ^ uVar6 ^ uVar7) + uVar5 + (uVar4 * 0x20 | uVar4 >> 0x1b) + 0xca62c1d6;
    lVar1 = lVar1 + 2;
    uVar5 = uVar7;
    uVar3 = uVar6;
  } while (lVar1 != 0x50);
  _DAT_708b04788b008b44 = uVar8 + _DAT_708b04788b008b44;
  _DAT_708b04788b008b48 = uVar4 + _DAT_708b04788b008b48;
  _DAT_708b04788b008b4c = uVar2 + _DAT_708b04788b008b4c;
  _DAT_708b04788b008b50 = uVar7 + _DAT_708b04788b008b50;
  _DAT_708b04788b008b54 = uVar6 + _DAT_708b04788b008b54;
  return;
}


