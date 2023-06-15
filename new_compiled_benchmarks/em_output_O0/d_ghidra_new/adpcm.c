
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <polybench.h>
#include "ghidra_base.h"
#include "adpcm.h"
int abs(int __x)

{
  int local_10;
  
  local_10 = __x;
  if (__x < 0) {
    local_10 = -__x;
  }
  return local_10;
}
void encode(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  long local_40;
  long local_38;
  int *local_30;
  int *local_28;
  int *local_20;
  int local_14;
  
  local_38 = (long)_DAT_e0458b48e0458948 * (long)_DAT_58b48e8458948;
  local_28 = (int *)&DAT_e0458b48e0458950;
  local_20 = (int *)&DAT_58b48e8458950;
  local_40 = (long)_DAT_e0458b48e045894c * (long)_DAT_58b48e845894c;
  for (local_14 = 0; local_14 < 10; local_14 = local_14 + 1) {
    piVar1 = local_28 + 1;
    piVar2 = local_20 + 1;
    local_38 = (long)*local_28 * (long)*local_20 + local_38;
    local_28 = local_28 + 2;
    local_20 = local_20 + 2;
    local_40 = (long)*piVar1 * (long)*piVar2 + local_40;
  }
  local_38 = (long)*local_28 * (long)*local_20 + local_38;
  local_40 = (long)local_28[1] * (long)local_20[1] + local_40;
  piVar1 = local_28 + 1;
  local_30 = local_28;
  for (local_14 = 0; local_28 = piVar1, local_30 = local_30 + -1, local_14 < 0x16;
      local_14 = local_14 + 1) {
    *local_28 = *local_30;
    piVar1 = local_28 + -1;
  }
  *local_28 = param_1;
  local_28[-1] = param_2;
  _DAT_2b48d0458b480889 = (int)(local_38 + local_40 >> 0xf);
  _DAT_3d8b480889 = (int)(local_38 - local_40 >> 0xf);
  filtez(0xe800000000358b48,0x48c189000004b5e8);
}
long filtez(int *param_1,int *param_2)

{
  long local_28;
  int local_1c;
  int *local_18;
  int *local_10;
  
  local_28 = (long)*param_1 * (long)*param_2;
  local_18 = param_2 + 1;
  local_10 = param_1 + 1;
  for (local_1c = 1; local_1c < 6; local_1c = local_1c + 1) {
    local_28 = (long)*local_10 * (long)*local_18 + local_28;
    local_18 = local_18 + 1;
    local_10 = local_10 + 1;
  }
  return local_28 >> 0xe;
}
long filtep(int param_1,int param_2,int param_3,int param_4)

{
  return (long)param_4 * (long)(param_3 << 1) + (long)param_2 * (long)(param_1 << 1) >> 0xf;
}
int quantl(int param_1,int param_2)

{
  int iVar1;
  int local_18;
  int local_14;
  
  iVar1 = abs(param_1);
  local_18 = 0;
  while ((local_18 < 0x1e &&
         ((long)*(int *)((long)local_18 * 4 + -0x7b29cb777fb9cb8) * (long)param_2 >> 0xf <
          (long)iVar1))) {
    local_18 = local_18 + 1;
  }
  if (param_1 < 0) {
    local_14 = *(int *)((long)local_18 * 4 + 0x458bf4458988048b);
  }
  else {
    local_14 = *(int *)((long)local_18 * 4 + 0x11e9f4458988048b);
  }
  return local_14;
}
int logscl(int param_1,int param_2)

{
  int local_10;
  
  local_10 = (int)((long)param_2 * 0x7f >> 7) +
             *(int *)((long)(param_1 >> 2) * 4 + 0x7d83f84589910403);
  if (local_10 < 0) {
    local_10 = 0;
  }
  if (0x4800 < local_10) {
    local_10 = 0x4800;
  }
  return local_10;
}
int scalel(int param_1,char param_2)

{
  return (*(int *)((long)(int)(param_1 >> 6 & 0x1f) * 4 + -0x3e7c07b27477fb75) >>
         ((param_2 + '\x01') - (char)(param_1 >> 0xb) & 0x1fU)) << 3;
}
void upzero(int param_1,int *param_2,long param_3)

{
  int local_28;
  int local_24;
  
  if (param_1 == 0) {
    for (local_24 = 0; local_24 < 6; local_24 = local_24 + 1) {
      *(int *)(param_3 + (long)local_24 * 4) =
           (int)((ulong)((long)*(int *)(param_3 + (long)local_24 * 4) * 0xff) >> 8);
    }
  }
  else {
    for (local_24 = 0; local_24 < 6; local_24 = local_24 + 1) {
      if ((long)param_1 * (long)param_2[local_24] < 0) {
        local_28 = -0x80;
      }
      else {
        local_28 = 0x80;
      }
      *(int *)(param_3 + (long)local_24 * 4) =
           local_28 + (int)((ulong)((long)*(int *)(param_3 + (long)local_24 * 4) * 0xff) >> 8);
    }
  }
  param_2[5] = param_2[4];
  param_2[4] = param_2[3];
  param_2[3] = param_2[2];
  param_2[2] = param_2[1];
  param_2[1] = *param_2;
  *param_2 = param_1;
  return;
}
int uppol2(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  int local_34;
  int local_30;
  long local_28;
  
  local_28 = (long)param_1 * 4;
  if (-1 < (long)param_3 * (long)param_4) {
    local_28 = (long)param_1 * -4;
  }
  local_30 = (int)(local_28 >> 7);
  if ((long)param_3 * (long)param_5 < 0) {
    local_30 = local_30 + -0x80;
  }
  else {
    local_30 = local_30 + 0x80;
  }
  local_34 = local_30 + (int)((long)param_2 * 0x7f >> 7);
  if (0x3000 < local_34) {
    local_34 = 0x3000;
  }
  if (local_34 < -0x3000) {
    local_34 = -0x3000;
  }
  return local_34;
}
int uppol1(int param_1,int param_2,int param_3,int param_4)

{
  int local_28;
  
  local_28 = (int)((ulong)((long)param_1 * 0xff) >> 8);
  if ((long)param_3 * (long)param_4 < 0) {
    local_28 = local_28 + -0xc0;
  }
  else {
    local_28 = local_28 + 0xc0;
  }
  param_2 = 0x3c00 - param_2;
  if (param_2 < local_28) {
    local_28 = param_2;
  }
  if ((local_28,-param_2) != local_28 + param_2 < 0) {
    local_28 = -param_2;
  }
  return local_28;
}
int logsch(int param_1,int param_2)

{
  int local_10;
  
  local_10 = (int)((long)param_2 * 0x7f >> 7) + *(int *)((long)param_1 * 4 + 0x7d83f84589910403);
  if (local_10 < 0) {
    local_10 = 0;
  }
  if (0x5800 < local_10) {
    local_10 = 0x5800;
  }
  return local_10;
}
void decode(uint param_1)

{
  _DAT_6f9c1fc4d8b0889 = param_1 & 0x3f;
  _DAT_3d8b480889 = (int)param_1 >> 6;
  filtez(0xe800000000358b48,0x48c189fffffa74e8);
}
