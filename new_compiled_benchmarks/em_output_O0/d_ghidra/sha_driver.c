#include "sha_driver.h"



void local_memset(undefined4 *param_1,undefined4 param_2,int param_3,int param_4)

{
  int local_2c;
  undefined4 *local_28;
  int local_1c;
  
  local_2c = param_3 / 4;
  local_28 = param_1;
  local_1c = param_4;
  while (0 < local_1c) {
    local_28 = local_28 + 1;
    local_1c = local_1c + -1;
  }
  while (0 < local_2c) {
    *local_28 = param_2;
    local_2c = local_2c + -1;
    local_28 = local_28 + 1;
  }
  return;
}



void local_memcpy(undefined4 *param_1,undefined4 *param_2,int param_3)

{
  int local_38;
  undefined4 *local_30;
  undefined4 *local_28;
  
  local_38 = param_3 / 4;
  local_30 = param_2;
  local_28 = param_1;
  while (0 < local_38) {
    *local_28 = *local_30;
    local_28 = local_28 + 1;
    local_38 = local_38 + -1;
    local_30 = local_30 + 1;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void sha_transform(void)

{
  int iVar1;
  long lVar2;
  uint auStack_168 [81];
  uint local_24;
  uint local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  int local_c;
  
  for (local_c = 0; local_c < 0x10; local_c = local_c + 1) {
    auStack_168[local_c] = *(uint *)((long)local_c * 4 + -0x7603ba9cb777f375);
  }
  for (local_c = 0x10; local_c < 0x50; local_c = local_c + 1) {
    auStack_168[local_c] =
         auStack_168[local_c + -3] ^ auStack_168[local_c + -8] ^ auStack_168[local_c + -0xe] ^
         auStack_168[local_c + -0x10];
  }
  local_14 = _DAT_58b48f44589008b;
  local_18 = _DAT_8b48f0458904408f;
  local_1c = _DAT_8b48ec4589084093;
  local_20 = _DAT_8b48e845890c4097;
  local_24 = _DAT_45c7e4458910409b;
  for (local_c = 0; local_c < 0x14; local_c = local_c + 1) {
    iVar1 = (local_14 << 5 | local_14 >> 0x1b) +
            (local_18 & local_1c | (local_18 ^ 0xffffffff) & local_20) + local_24;
    lVar2 = (long)local_c;
    local_24 = local_20;
    local_20 = local_1c;
    local_1c = local_18 << 0x1e | local_18 >> 2;
    local_18 = local_14;
    local_14 = iVar1 + auStack_168[lVar2] + 0x5a827999;
  }
  for (local_c = 0x14; local_c < 0x28; local_c = local_c + 1) {
    iVar1 = (local_14 << 5 | local_14 >> 0x1b) + (local_18 ^ local_1c ^ local_20) + local_24;
    lVar2 = (long)local_c;
    local_24 = local_20;
    local_20 = local_1c;
    local_1c = local_18 << 0x1e | local_18 >> 2;
    local_18 = local_14;
    local_14 = iVar1 + auStack_168[lVar2] + 0x6ed9eba1;
  }
  for (local_c = 0x28; local_c < 0x3c; local_c = local_c + 1) {
    iVar1 = (local_14 << 5 | local_14 >> 0x1b) +
            (local_18 & (local_1c | local_20) | local_1c & local_20) + local_24;
    lVar2 = (long)local_c;
    local_24 = local_20;
    local_20 = local_1c;
    local_1c = local_18 << 0x1e | local_18 >> 2;
    local_18 = local_14;
    local_14 = iVar1 + auStack_168[lVar2] + 0x8f1bbcdc;
  }
  for (local_c = 0x3c; local_c < 0x50; local_c = local_c + 1) {
    iVar1 = (local_14 << 5 | local_14 >> 0x1b) + (local_18 ^ local_1c ^ local_20) + local_24;
    lVar2 = (long)local_c;
    local_24 = local_20;
    local_20 = local_1c;
    local_1c = local_18 << 0x1e | local_18 >> 2;
    local_18 = local_14;
    local_14 = iVar1 + auStack_168[lVar2] + 0xca62c1d6;
  }
  _DAT_58b48f04d8b0889 = local_14 + _DAT_58b480803;
  _DAT_8b48ec4d8b04488d = local_18 + _DAT_58b48044807;
  _DAT_8b48e84d8b084891 = local_1c + _DAT_58b4808480b;
  _DAT_8b48e44d8b0c4895 = local_20 + _DAT_58b480c480f;
  _DAT_e0c48148104899 = local_24 + _DAT_58b48104813;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void sha_init(void)

{
  _DAT_8b486745230100c7 = 0x67452301;
  _DAT_48efcdab890440cb = 0xefcdab89;
  _DAT_4898badcfe0840cf = 0x98badcfe;
  _DAT_48103254760c40d3 = 0x10325476;
  _DAT_48c3d2e1f01040d7 = 0xc3d2e1f0;
  _DAT_8b480000000000c7 = 0;
  _DAT_c35d0000000000c7 = 0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void sha_update(long param_1,uint param_2)

{
  uint local_14;
  long local_10;
  
  if (_DAT_3e1c1f44d8b008b + param_2 * 8 < _DAT_15830f013b) {
    _DAT_3e1c1f44d8b0889 = _DAT_58b4801c183088b + 1;
  }
  _DAT_1de9c1f44d8b0889 = param_2 * 8 + _DAT_58b480803;
  _DAT_8c0f40f47d830889 = (param_2 >> 0x1d) + _DAT_58b480803;
  local_10 = param_1;
  for (local_14 = param_2; 0x3f < (int)local_14; local_14 = local_14 - 0x40) {
    local_memcpy(0xfa9de800000040ba,local_10,0x40);
    sha_transform();
    local_10 = local_10 + 0x40;
  }
  local_memcpy(0xc48348fffffa6be8,local_10,local_14);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void sha_final(void)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar2 = _DAT_f8458bf44589008b;
  uVar1 = _DAT_58b48f84589008b;
  uVar3 = _DAT_58b48f84589008b >> 3 & 0x3f;
  uVar4 = uVar3 + 1;
  *(undefined4 *)((long)(int)uVar3 * 4 + -0x7cffffff7f77fb39) = 0x80;
  if (uVar4 < 0x39) {
    local_memset(0x8bfffff92de8f631,0,0x38 - uVar4,uVar4);
  }
  else {
    local_memset(0xe8fffff965e8f631,0,0x40 - uVar4,uVar4);
    sha_transform();
    local_memset(0x8900000038bac931,0,0x38);
  }
  _DAT_8b48f84d8b3848c1 = uVar2;
  _DAT_fffffa8ee83c48c5 = uVar1;
  sha_transform();
  return;
}



void sha_stream(void)

{
  int local_10;
  
  sha_init();
  for (local_10 = 0; local_10 < 2; local_10 = local_10 + 1) {
    sha_update((long)local_10 * 0x2000 + 0x48c801480de1c148,
               *(undefined4 *)((long)local_10 * 4 + 0x6348fc458988048b));
  }
  sha_final();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int submain(void)

{
  int local_10;
  int local_c;
  
  local_10 = 0;
  _DAT_ffff6ce800110ff2 = rtclock();
  sha_stream();
  for (local_c = 0; local_c < 5; local_c = local_c + 1) {
    local_10 = (uint)(*(int *)((long)local_c * 4 + 0x48fc55634888048b) !=
                     *(int *)((long)local_c * 4 + 0x124c0950f91043b)) + local_10;
  }
  _DAT_58b4800110ff2 = rtclock();
  printf("%0.6f\n",_DAT_58b4800100ff2 - _DAT_163d8d48005c0ff2);
  return local_10;
}



double rtclock(void)

{
  uint uVar1;
  undefined local_18 [16];
  
  uVar1 = gettimeofday((timeval *)local_18,(__timezone_ptr_t)0x0);
  if (uVar1 != 0) {
    printf("Error return from gettimeofday: %d",(ulong)uVar1);
  }
  return (double)local_18._8_4_ * 1e-06 + (double)local_18._0_8_;
}


