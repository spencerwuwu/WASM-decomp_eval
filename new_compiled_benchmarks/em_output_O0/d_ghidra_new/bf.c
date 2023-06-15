
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <polybench.h>
#include "ghidra_base.h"
#include "bf.h"
void local_memcpy(int8 *param_1,int8 *param_2,int param_3)

{
  int8 *local_30;
  int8 *local_28;
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
  int uVar1;
  int uVar2;
  int uVar3;
  int *puVar4;
  int *puVar5;
  int in_register_00000034;
  int *local_50;
  int8 local_48;
  int8 local_40;
  ulong local_30;
  long local_28;
  int local_1c;
  int *local_18;
  int local_c;
  
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
    *(int8 *)(local_28 + (long)local_1c * 8) = local_48;
    *(int8 *)(local_28 + (long)(local_1c + 1) * 8) = local_40;
  }
  local_28 = 0xec45c7e0458948;
  for (local_1c = 0; local_1c < 0x400; local_1c = local_1c + 2) {
    BF_encrypt((uint *)&local_48,(BF_KEY *)0x1);
    *(int8 *)(local_28 + (long)local_1c * 8) = local_48;
    *(int8 *)(local_28 + (long)(local_1c + 1) * 8) = local_40;
  }
  return;
}
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
