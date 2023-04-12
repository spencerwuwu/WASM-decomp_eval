#include "bf.h"



void local_memcpy(undefined8 *param_1,undefined8 *param_2,int param_3)

{
  undefined8 *local_30;
  undefined8 *local_28;
  int local_1c;
  
  local_30 = param_2;
  local_28 = param_1;
  local_1c = param_3;
  while (0 < local_1c) {
    *local_28 = *local_30;
    local_28 = local_28 + 1;
    local_30 = local_30 + 1;
    local_1c = local_1c + -1;
  }
  return;
}



void BF_set_key(BF_KEY *key,int len,uchar *data)

{
  undefined uVar1;
  undefined uVar2;
  undefined uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined4 in_register_00000034;
  undefined *local_50;
  undefined8 local_48;
  undefined8 local_40;
  ulong local_30;
  long local_28;
  int local_1c;
  undefined *local_18;
  int local_c;
  
  local_18 = (undefined *)CONCAT44(in_register_00000034,len);
  local_c = (int)key;
  local_memcpy(0xba00000000358b48,0xff79e800000012ba,0x12);
  local_memcpy(0xba00000000358b48,0xff61e800000400ba,0x400);
  local_28 = 0x48fc7d83e0458948;
  if (0x48 < local_c) {
    local_c = 0x48;
  }
  local_50 = local_18;
  puVar4 = local_18 + local_c;
  for (local_1c = 0; local_1c < 0x12; local_1c = local_1c + 1) {
    puVar5 = local_50 + 1;
    uVar1 = *local_50;
    local_50 = puVar5;
    if (puVar4 <= puVar5) {
      local_50 = local_18;
    }
    puVar5 = local_50 + 1;
    uVar2 = *local_50;
    local_50 = puVar5;
    if (puVar4 <= puVar5) {
      local_50 = local_18;
    }
    puVar5 = local_50 + 1;
    uVar3 = *local_50;
    local_50 = puVar5;
    if (puVar4 <= puVar5) {
      local_50 = local_18;
    }
    puVar5 = local_50 + 1;
    local_30 = (ulong)CONCAT31(CONCAT21(CONCAT11(uVar1,uVar2),uVar3),*local_50);
    local_50 = puVar5;
    if (puVar4 <= puVar5) {
      local_50 = local_18;
    }
    *(ulong *)((long)local_1c * 8 + 0x48fc7d83e0458948) =
         local_30 ^ *(ulong *)((long)local_1c * 8 + 0x48fc7d83e0458948);
  }
  local_48 = 0;
  local_40 = 0;
  for (local_1c = 0; local_1c < 0x12; local_1c = local_1c + 2) {
    BF_encrypt((uint *)&local_48,(BF_KEY *)0x1);
    *(undefined8 *)(local_28 + (long)local_1c * 8) = local_48;
    *(undefined8 *)(local_28 + (long)(local_1c + 1) * 8) = local_40;
  }
  local_28 = 0xec45c7e0458948;
  for (local_1c = 0; local_1c < 0x400; local_1c = local_1c + 2) {
    BF_encrypt((uint *)&local_48,(BF_KEY *)0x1);
    *(undefined8 *)(local_28 + (long)local_1c * 8) = local_48;
    *(undefined8 *)(local_28 + (long)(local_1c + 1) * 8) = local_40;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void BF_encrypt(uint *data,BF_KEY *key)

{
  ulong uVar1;
  ulong uVar2;
  ulong local_28;
  ulong local_20;
  
  if ((int)key == 0) {
    uVar1 = _DAT_58b48d84589d0 ^ *(ulong *)data;
    uVar2 = (*(long *)((uVar1 >> 0x18) * 8 + -0x7ba74b72fba76b8) +
             *(long *)(((uVar1 >> 0x10 & 0xff) + 0x100) * 8 + -0x7ba74b72fba76b8) ^
            *(ulong *)(((uVar1 >> 8 & 0xff) + 0x200) * 8 + -0x7ba74b72fba76b8)) +
            *(long *)(((uVar1 & 0xff) + 0x300) * 8 + -0x7ba74b72fba76b8) & 0xffffffff ^
            _DAT_58b48d84589c8 ^ *(ulong *)(data + 2);
    uVar1 = (*(long *)((uVar2 >> 0x18) * 8 + -0x7ba74b72fba76b8) +
             *(long *)(((uVar2 >> 0x10 & 0xff) + 0x100) * 8 + -0x7ba74b72fba76b8) ^
            *(ulong *)(((uVar2 >> 8 & 0xff) + 0x200) * 8 + -0x7ba74b72fba76b8)) +
            *(long *)(((uVar2 & 0xff) + 0x300) * 8 + -0x7ba74b72fba76b8) & 0xffffffff ^
            _DAT_58b48d84589c0 ^ uVar1;
    uVar1 = (*(long *)((uVar1 >> 0x18) * 8 + -0x7ba74b72fba76b8) +
             *(long *)(((uVar1 >> 0x10 & 0xff) + 0x100) * 8 + -0x7ba74b72fba76b8) ^
            *(ulong *)(((uVar1 >> 8 & 0xff) + 0x200) * 8 + -0x7ba74b72fba76b8)) +
            *(long *)(((uVar1 & 0xff) + 0x300) * 8 + -0x7ba74b72fba76b8) & 0xffffffff ^
            _DAT_58b48d84589b8 ^ uVar2;
    uVar1 = (*(long *)((uVar1 >> 0x18) * 8 + -0x7ba74b72fba76b8) +
             *(long *)(((uVar1 >> 0x10 & 0xff) + 0x100) * 8 + -0x7ba74b72fba76b8) ^
            *(ulong *)(((uVar1 >> 8 & 0xff) + 0x200) * 8 + -0x7ba74b72fba76b8)) +
            *(long *)(((uVar1 & 0xff) + 0x300) * 8 + -0x7ba74b72fba76b8) & 0xffffffff ^
            _DAT_58b48d84589b0 ^ uVar1;
    uVar1 = (*(long *)((uVar1 >> 0x18) * 8 + -0x7ba74b72fba76b8) +
             *(long *)(((uVar1 >> 0x10 & 0xff) + 0x100) * 8 + -0x7ba74b72fba76b8) ^
            *(ulong *)(((uVar1 >> 8 & 0xff) + 0x200) * 8 + -0x7ba74b72fba76b8)) +
            *(long *)(((uVar1 & 0xff) + 0x300) * 8 + -0x7ba74b72fba76b8) & 0xffffffff ^
            _DAT_58b48d84589a8 ^ uVar1;
    uVar1 = (*(long *)((uVar1 >> 0x18) * 8 + -0x7ba74b72fba76b8) +
             *(long *)(((uVar1 >> 0x10 & 0xff) + 0x100) * 8 + -0x7ba74b72fba76b8) ^
            *(ulong *)(((uVar1 >> 8 & 0xff) + 0x200) * 8 + -0x7ba74b72fba76b8)) +
            *(long *)(((uVar1 & 0xff) + 0x300) * 8 + -0x7ba74b72fba76b8) & 0xffffffff ^
            _DAT_58b48d84589a0 ^ uVar1;
    uVar1 = (*(long *)((uVar1 >> 0x18) * 8 + -0x7ba74b72fba76b8) +
             *(long *)(((uVar1 >> 0x10 & 0xff) + 0x100) * 8 + -0x7ba74b72fba76b8) ^
            *(ulong *)(((uVar1 >> 8 & 0xff) + 0x200) * 8 + -0x7ba74b72fba76b8)) +
            *(long *)(((uVar1 & 0xff) + 0x300) * 8 + -0x7ba74b72fba76b8) & 0xffffffff ^
            _DAT_58b48d8458998 ^ uVar1;
    uVar1 = (*(long *)((uVar1 >> 0x18) * 8 + -0x7ba74b72fba76b8) +
             *(long *)(((uVar1 >> 0x10 & 0xff) + 0x100) * 8 + -0x7ba74b72fba76b8) ^
            *(ulong *)(((uVar1 >> 8 & 0xff) + 0x200) * 8 + -0x7ba74b72fba76b8)) +
            *(long *)(((uVar1 & 0xff) + 0x300) * 8 + -0x7ba74b72fba76b8) & 0xffffffff ^
            _DAT_58b48d8458990 ^ uVar1;
    uVar1 = (*(long *)((uVar1 >> 0x18) * 8 + -0x7ba74b72fba76b8) +
             *(long *)(((uVar1 >> 0x10 & 0xff) + 0x100) * 8 + -0x7ba74b72fba76b8) ^
            *(ulong *)(((uVar1 >> 8 & 0xff) + 0x200) * 8 + -0x7ba74b72fba76b8)) +
            *(long *)(((uVar1 & 0xff) + 0x300) * 8 + -0x7ba74b72fba76b8) & 0xffffffff ^
            _DAT_58b48d8458988 ^ uVar1;
    uVar1 = (*(long *)((uVar1 >> 0x18) * 8 + -0x7ba74b72fba76b8) +
             *(long *)(((uVar1 >> 0x10 & 0xff) + 0x100) * 8 + -0x7ba74b72fba76b8) ^
            *(ulong *)(((uVar1 >> 8 & 0xff) + 0x200) * 8 + -0x7ba74b72fba76b8)) +
            *(long *)(((uVar1 & 0xff) + 0x300) * 8 + -0x7ba74b72fba76b8) & 0xffffffff ^
            _DAT_58b48d8458980 ^ uVar1;
    uVar1 = (*(long *)((uVar1 >> 0x18) * 8 + -0x7ba74b72fba76b8) +
             *(long *)(((uVar1 >> 0x10 & 0xff) + 0x100) * 8 + -0x7ba74b72fba76b8) ^
            *(ulong *)(((uVar1 >> 8 & 0xff) + 0x200) * 8 + -0x7ba74b72fba76b8)) +
            *(long *)(((uVar1 & 0xff) + 0x300) * 8 + -0x7ba74b72fba76b8) & 0xffffffff ^
            _DAT_58b48d8458978 ^ uVar1;
    uVar1 = (*(long *)((uVar1 >> 0x18) * 8 + -0x7ba74b72fba76b8) +
             *(long *)(((uVar1 >> 0x10 & 0xff) + 0x100) * 8 + -0x7ba74b72fba76b8) ^
            *(ulong *)(((uVar1 >> 8 & 0xff) + 0x200) * 8 + -0x7ba74b72fba76b8)) +
            *(long *)(((uVar1 & 0xff) + 0x300) * 8 + -0x7ba74b72fba76b8) & 0xffffffff ^
            _DAT_58b48d8458970 ^ uVar1;
    uVar1 = (*(long *)((uVar1 >> 0x18) * 8 + -0x7ba74b72fba76b8) +
             *(long *)(((uVar1 >> 0x10 & 0xff) + 0x100) * 8 + -0x7ba74b72fba76b8) ^
            *(ulong *)(((uVar1 >> 8 & 0xff) + 0x200) * 8 + -0x7ba74b72fba76b8)) +
            *(long *)(((uVar1 & 0xff) + 0x300) * 8 + -0x7ba74b72fba76b8) & 0xffffffff ^
            _DAT_58b48d8458968 ^ uVar1;
    uVar1 = (*(long *)((uVar1 >> 0x18) * 8 + -0x7ba74b72fba76b8) +
             *(long *)(((uVar1 >> 0x10 & 0xff) + 0x100) * 8 + -0x7ba74b72fba76b8) ^
            *(ulong *)(((uVar1 >> 8 & 0xff) + 0x200) * 8 + -0x7ba74b72fba76b8)) +
            *(long *)(((uVar1 & 0xff) + 0x300) * 8 + -0x7ba74b72fba76b8) & 0xffffffff ^
            _DAT_58b48d8458960 ^ uVar1;
    local_28 = (*(long *)((uVar1 >> 0x18) * 8 + -0x7ba74b72fba76b8) +
                *(long *)(((uVar1 >> 0x10 & 0xff) + 0x100) * 8 + -0x7ba74b72fba76b8) ^
               *(ulong *)(((uVar1 >> 8 & 0xff) + 0x200) * 8 + -0x7ba74b72fba76b8)) +
               *(long *)(((uVar1 & 0xff) + 0x300) * 8 + -0x7ba74b72fba76b8) & 0xffffffff ^
               _DAT_58b48d8458958 ^ uVar1;
    local_20 = (*(long *)((local_28 >> 0x18) * 8 + -0x7ba74b72fba76b8) +
                *(long *)(((local_28 >> 0x10 & 0xff) + 0x100) * 8 + -0x7ba74b72fba76b8) ^
               *(ulong *)(((local_28 >> 8 & 0xff) + 0x200) * 8 + -0x7ba74b72fba76b8)) +
               *(long *)(((local_28 & 0xff) + 0x300) * 8 + -0x7ba74b72fba76b8) & 0xffffffff ^
               _DAT_58b48d8458950 ^ uVar1;
    local_28 = _DAT_58b48d8458948 ^ local_28;
  }
  else {
    uVar1 = _DAT_58b48d8458948 ^ *(ulong *)data;
    uVar2 = (*(long *)((uVar1 >> 0x18) * 8 + -0x7ba74b72fba76b8) +
             *(long *)(((uVar1 >> 0x10 & 0xff) + 0x100) * 8 + -0x7ba74b72fba76b8) ^
            *(ulong *)(((uVar1 >> 8 & 0xff) + 0x200) * 8 + -0x7ba74b72fba76b8)) +
            *(long *)(((uVar1 & 0xff) + 0x300) * 8 + -0x7ba74b72fba76b8) & 0xffffffff ^
            _DAT_58b48d8458950 ^ *(ulong *)(data + 2);
    uVar1 = (*(long *)((uVar2 >> 0x18) * 8 + -0x7ba74b72fba76b8) +
             *(long *)(((uVar2 >> 0x10 & 0xff) + 0x100) * 8 + -0x7ba74b72fba76b8) ^
            *(ulong *)(((uVar2 >> 8 & 0xff) + 0x200) * 8 + -0x7ba74b72fba76b8)) +
            *(long *)(((uVar2 & 0xff) + 0x300) * 8 + -0x7ba74b72fba76b8) & 0xffffffff ^
            _DAT_58b48d8458958 ^ uVar1;
    uVar1 = (*(long *)((uVar1 >> 0x18) * 8 + -0x7ba74b72fba76b8) +
             *(long *)(((uVar1 >> 0x10 & 0xff) + 0x100) * 8 + -0x7ba74b72fba76b8) ^
            *(ulong *)(((uVar1 >> 8 & 0xff) + 0x200) * 8 + -0x7ba74b72fba76b8)) +
            *(long *)(((uVar1 & 0xff) + 0x300) * 8 + -0x7ba74b72fba76b8) & 0xffffffff ^
            _DAT_58b48d8458960 ^ uVar2;
    uVar1 = (*(long *)((uVar1 >> 0x18) * 8 + -0x7ba74b72fba76b8) +
             *(long *)(((uVar1 >> 0x10 & 0xff) + 0x100) * 8 + -0x7ba74b72fba76b8) ^
            *(ulong *)(((uVar1 >> 8 & 0xff) + 0x200) * 8 + -0x7ba74b72fba76b8)) +
            *(long *)(((uVar1 & 0xff) + 0x300) * 8 + -0x7ba74b72fba76b8) & 0xffffffff ^
            _DAT_58b48d8458968 ^ uVar1;
    uVar1 = (*(long *)((uVar1 >> 0x18) * 8 + -0x7ba74b72fba76b8) +
             *(long *)(((uVar1 >> 0x10 & 0xff) + 0x100) * 8 + -0x7ba74b72fba76b8) ^
            *(ulong *)(((uVar1 >> 8 & 0xff) + 0x200) * 8 + -0x7ba74b72fba76b8)) +
            *(long *)(((uVar1 & 0xff) + 0x300) * 8 + -0x7ba74b72fba76b8) & 0xffffffff ^
            _DAT_58b48d8458970 ^ uVar1;
    uVar1 = (*(long *)((uVar1 >> 0x18) * 8 + -0x7ba74b72fba76b8) +
             *(long *)(((uVar1 >> 0x10 & 0xff) + 0x100) * 8 + -0x7ba74b72fba76b8) ^
            *(ulong *)(((uVar1 >> 8 & 0xff) + 0x200) * 8 + -0x7ba74b72fba76b8)) +
            *(long *)(((uVar1 & 0xff) + 0x300) * 8 + -0x7ba74b72fba76b8) & 0xffffffff ^
            _DAT_58b48d8458978 ^ uVar1;
    uVar1 = (*(long *)((uVar1 >> 0x18) * 8 + -0x7ba74b72fba76b8) +
             *(long *)(((uVar1 >> 0x10 & 0xff) + 0x100) * 8 + -0x7ba74b72fba76b8) ^
            *(ulong *)(((uVar1 >> 8 & 0xff) + 0x200) * 8 + -0x7ba74b72fba76b8)) +
            *(long *)(((uVar1 & 0xff) + 0x300) * 8 + -0x7ba74b72fba76b8) & 0xffffffff ^
            _DAT_58b48d8458980 ^ uVar1;
    uVar1 = (*(long *)((uVar1 >> 0x18) * 8 + -0x7ba74b72fba76b8) +
             *(long *)(((uVar1 >> 0x10 & 0xff) + 0x100) * 8 + -0x7ba74b72fba76b8) ^
            *(ulong *)(((uVar1 >> 8 & 0xff) + 0x200) * 8 + -0x7ba74b72fba76b8)) +
            *(long *)(((uVar1 & 0xff) + 0x300) * 8 + -0x7ba74b72fba76b8) & 0xffffffff ^
            _DAT_58b48d8458988 ^ uVar1;
    uVar1 = (*(long *)((uVar1 >> 0x18) * 8 + -0x7ba74b72fba76b8) +
             *(long *)(((uVar1 >> 0x10 & 0xff) + 0x100) * 8 + -0x7ba74b72fba76b8) ^
            *(ulong *)(((uVar1 >> 8 & 0xff) + 0x200) * 8 + -0x7ba74b72fba76b8)) +
            *(long *)(((uVar1 & 0xff) + 0x300) * 8 + -0x7ba74b72fba76b8) & 0xffffffff ^
            _DAT_58b48d8458990 ^ uVar1;
    uVar1 = (*(long *)((uVar1 >> 0x18) * 8 + -0x7ba74b72fba76b8) +
             *(long *)(((uVar1 >> 0x10 & 0xff) + 0x100) * 8 + -0x7ba74b72fba76b8) ^
            *(ulong *)(((uVar1 >> 8 & 0xff) + 0x200) * 8 + -0x7ba74b72fba76b8)) +
            *(long *)(((uVar1 & 0xff) + 0x300) * 8 + -0x7ba74b72fba76b8) & 0xffffffff ^
            _DAT_58b48d8458998 ^ uVar1;
    uVar1 = (*(long *)((uVar1 >> 0x18) * 8 + -0x7ba74b72fba76b8) +
             *(long *)(((uVar1 >> 0x10 & 0xff) + 0x100) * 8 + -0x7ba74b72fba76b8) ^
            *(ulong *)(((uVar1 >> 8 & 0xff) + 0x200) * 8 + -0x7ba74b72fba76b8)) +
            *(long *)(((uVar1 & 0xff) + 0x300) * 8 + -0x7ba74b72fba76b8) & 0xffffffff ^
            _DAT_58b48d84589a0 ^ uVar1;
    uVar1 = (*(long *)((uVar1 >> 0x18) * 8 + -0x7ba74b72fba76b8) +
             *(long *)(((uVar1 >> 0x10 & 0xff) + 0x100) * 8 + -0x7ba74b72fba76b8) ^
            *(ulong *)(((uVar1 >> 8 & 0xff) + 0x200) * 8 + -0x7ba74b72fba76b8)) +
            *(long *)(((uVar1 & 0xff) + 0x300) * 8 + -0x7ba74b72fba76b8) & 0xffffffff ^
            _DAT_58b48d84589a8 ^ uVar1;
    uVar1 = (*(long *)((uVar1 >> 0x18) * 8 + -0x7ba74b72fba76b8) +
             *(long *)(((uVar1 >> 0x10 & 0xff) + 0x100) * 8 + -0x7ba74b72fba76b8) ^
            *(ulong *)(((uVar1 >> 8 & 0xff) + 0x200) * 8 + -0x7ba74b72fba76b8)) +
            *(long *)(((uVar1 & 0xff) + 0x300) * 8 + -0x7ba74b72fba76b8) & 0xffffffff ^
            _DAT_58b48d84589b0 ^ uVar1;
    uVar1 = (*(long *)((uVar1 >> 0x18) * 8 + -0x7ba74b72fba76b8) +
             *(long *)(((uVar1 >> 0x10 & 0xff) + 0x100) * 8 + -0x7ba74b72fba76b8) ^
            *(ulong *)(((uVar1 >> 8 & 0xff) + 0x200) * 8 + -0x7ba74b72fba76b8)) +
            *(long *)(((uVar1 & 0xff) + 0x300) * 8 + -0x7ba74b72fba76b8) & 0xffffffff ^
            _DAT_58b48d84589b8 ^ uVar1;
    local_28 = (*(long *)((uVar1 >> 0x18) * 8 + -0x7ba74b72fba76b8) +
                *(long *)(((uVar1 >> 0x10 & 0xff) + 0x100) * 8 + -0x7ba74b72fba76b8) ^
               *(ulong *)(((uVar1 >> 8 & 0xff) + 0x200) * 8 + -0x7ba74b72fba76b8)) +
               *(long *)(((uVar1 & 0xff) + 0x300) * 8 + -0x7ba74b72fba76b8) & 0xffffffff ^
               _DAT_58b48d84589c0 ^ uVar1;
    local_20 = (*(long *)((local_28 >> 0x18) * 8 + -0x7ba74b72fba76b8) +
                *(long *)(((local_28 >> 0x10 & 0xff) + 0x100) * 8 + -0x7ba74b72fba76b8) ^
               *(ulong *)(((local_28 >> 8 & 0xff) + 0x200) * 8 + -0x7ba74b72fba76b8)) +
               *(long *)(((local_28 & 0xff) + 0x300) * 8 + -0x7ba74b72fba76b8) & 0xffffffff ^
               _DAT_58b48d84589c8 ^ uVar1;
    local_28 = _DAT_58b48d84589d0 ^ local_28;
  }
  *(ulong *)(data + 2) = local_20 & 0xffffffff;
  *(ulong *)data = local_28 & 0xffffffff;
  return;
}



void BF_cfb64_encrypt(uchar *in,uchar *out,long length,BF_KEY *schedule,uchar *ivec,int *num,int enc
                     )

{
  byte bVar1;
  byte bVar2;
  long lVar3;
  BF_KEY *local_80;
  ulong local_78;
  ulong local_70;
  long local_60;
  uint local_54;
  ulong local_50;
  ulong local_48;
  ulong local_40;
  int local_34;
  uint *local_30;
  BF_KEY *local_28;
  long local_20;
  byte *local_18;
  byte *local_10;
  
  local_34 = (int)num;
  local_54 = *(uint *)ivec;
  local_80 = schedule;
  local_60 = length;
  local_30 = (uint *)ivec;
  local_28 = schedule;
  local_20 = length;
  local_18 = out;
  local_10 = in;
  if (local_34 == 0) {
    while (lVar3 = local_60 + -1, local_60 != 0) {
      local_60 = lVar3;
      if (local_54 == 0) {
        local_78 = (ulong)*(byte *)((long)local_80->P + 3) |
                   (ulong)*(byte *)((long)local_80->P + 2) << 8 |
                   (ulong)*(byte *)((long)local_80->P + 1) << 0x10 |
                   (ulong)*(byte *)local_80->P << 0x18;
        local_70 = (ulong)*(byte *)((long)local_80->P + 7) |
                   (ulong)*(byte *)((long)local_80->P + 6) << 8 |
                   (ulong)*(byte *)((long)local_80->P + 5) << 0x10 |
                   (ulong)*(byte *)(local_80->P + 1) << 0x18;
        local_48 = local_70;
        local_40 = local_78;
        BF_encrypt((uint *)&local_78,(BF_KEY *)0x1);
        *(char *)local_28->P = (char)(local_78 >> 0x18);
        *(char *)((long)local_28->P + 1) = (char)(local_78 >> 0x10);
        *(char *)((long)local_28->P + 2) = (char)(local_78 >> 8);
        *(char *)((long)local_28->P + 3) = (char)local_78;
        local_50 = local_70;
        *(char *)(local_28->P + 1) = (char)(local_70 >> 0x18);
        *(char *)((long)local_28->P + 5) = (char)(local_70 >> 0x10);
        *(char *)((long)local_28->P + 6) = (char)(local_70 >> 8);
        *(char *)((long)local_28->P + 7) = (char)local_70;
        local_80 = local_28;
      }
      bVar2 = *local_10;
      bVar1 = *(byte *)((long)local_80->P + (long)(int)local_54);
      *(byte *)((long)local_80->P + (long)(int)local_54) = bVar2;
      *local_18 = bVar1 ^ bVar2;
      local_54 = local_54 + 1 & 7;
      local_18 = local_18 + 1;
      local_10 = local_10 + 1;
    }
  }
  else {
    while (lVar3 = local_60 + -1, local_60 != 0) {
      local_60 = lVar3;
      if (local_54 == 0) {
        local_78 = (ulong)*(byte *)((long)local_80->P + 3) |
                   (ulong)*(byte *)((long)local_80->P + 2) << 8 |
                   (ulong)*(byte *)((long)local_80->P + 1) << 0x10 |
                   (ulong)*(byte *)local_80->P << 0x18;
        local_70 = (ulong)*(byte *)((long)local_80->P + 7) |
                   (ulong)*(byte *)((long)local_80->P + 6) << 8 |
                   (ulong)*(byte *)((long)local_80->P + 5) << 0x10 |
                   (ulong)*(byte *)(local_80->P + 1) << 0x18;
        local_48 = local_70;
        local_40 = local_78;
        BF_encrypt((uint *)&local_78,(BF_KEY *)0x1);
        *(char *)local_28->P = (char)(local_78 >> 0x18);
        *(char *)((long)local_28->P + 1) = (char)(local_78 >> 0x10);
        *(char *)((long)local_28->P + 2) = (char)(local_78 >> 8);
        *(char *)((long)local_28->P + 3) = (char)local_78;
        local_50 = local_70;
        *(char *)(local_28->P + 1) = (char)(local_70 >> 0x18);
        *(char *)((long)local_28->P + 5) = (char)(local_70 >> 0x10);
        *(char *)((long)local_28->P + 6) = (char)(local_70 >> 8);
        *(char *)((long)local_28->P + 7) = (char)local_70;
        local_80 = local_28;
      }
      bVar2 = *local_10 ^ *(byte *)((long)local_80->P + (long)(int)local_54);
      *local_18 = bVar2;
      *(byte *)((long)local_80->P + (long)(int)local_54) = bVar2;
      local_54 = local_54 + 1 & 7;
      local_18 = local_18 + 1;
      local_10 = local_10 + 1;
    }
  }
  *local_30 = local_54;
  return;
}



int blowfish_main(undefined8 param_1,undefined8 param_2,uchar *param_3)

{
  int in_stack_ffffffffffffff68;
  int local_8c;
  int local_84;
  int local_80;
  int local_7c;
  int local_78;
  undefined4 local_74;
  undefined local_70 [8];
  uchar local_68 [48];
  uchar local_38 [40];
  undefined local_10 [8];
  
  local_74 = 0;
  local_80 = 0;
  local_84 = 0;
  local_8c = 0;
  for (local_78 = 0; local_78 < 8; local_78 = local_78 + 1) {
    local_10[local_78] = 0;
    local_70[local_78] = 0;
  }
  BF_set_key((BF_KEY *)0x8,(int)local_10,param_3);
  while (local_78 = 0, local_80 < 0x1450) {
    while (local_80 < 0x1450 && local_78 < 0x28) {
      local_38[local_78] = *(uchar *)((long)local_80 + -0x3d766fba74f7f376);
      local_80 = local_80 + 1;
      local_78 = local_78 + 1;
    }
    BF_cfb64_encrypt(local_38,local_68,(long)local_78,(BF_KEY *)local_70,(uchar *)&local_74,
                     (int *)0x1,in_stack_ffffffffffffff68);
    for (local_7c = 0; local_7c < local_78; local_7c = local_7c + 1) {
      local_8c = (uint)(local_68[local_7c] != *(uchar *)((long)local_84 + -0x6af037c6eef349f1)) +
                 local_8c;
      local_84 = local_84 + 1;
    }
  }
  return local_8c;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 submain(void)

{
  undefined4 uVar1;
  
  _DAT_fffe5ce800110ff2 = rtclock();
  uVar1 = blowfish_main();
  _DAT_58b4800110ff2 = rtclock();
  printf("%0.6f\n",_DAT_58b4800100ff2 - _DAT_4c3d8d48005c0ff2);
  return uVar1;
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


