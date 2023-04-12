#include "deriche.h"



undefined8 submain(int param_1,char **param_2)

{
  int iVar1;
  void *__ptr;
  void *__ptr_00;
  void *__ptr_01;
  void *__ptr_02;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  char **local_18;
  int local_c;
  
  local_1c = 0x1000;
  local_20 = 0x870;
  local_18 = param_2;
  local_c = param_1;
  __ptr = (void *)polybench_alloc_data(0x870000,4);
  __ptr_00 = (void *)polybench_alloc_data(0x870000,4);
  __ptr_01 = (void *)polybench_alloc_data(0x870000,4);
  __ptr_02 = (void *)polybench_alloc_data(0x870000,4);
  init_array(local_1c,local_20,&local_24,__ptr,__ptr_00);
  kernel_deriche(local_24,local_1c,local_20,__ptr,__ptr_00,__ptr_01,__ptr_02);
  if (0x2a < local_c) {
    iVar1 = strcmp(*local_18,"");
    if (iVar1 == 0) {
      print_array(local_1c,local_20,__ptr_00);
    }
  }
  free(__ptr);
  free(__ptr_00);
  free(__ptr_01);
  free(__ptr_02);
  return 0;
}



void init_array(int param_1,int param_2,undefined4 *param_3,long param_4)

{
  int local_30;
  int local_2c;
  
  *param_3 = 0x3e800000;
  for (local_2c = 0; local_2c < param_1; local_2c = local_2c + 1) {
    for (local_30 = 0; local_30 < param_2; local_30 = local_30 + 1) {
      *(float *)(param_4 + (long)local_2c * 0x21c0 + (long)local_30 * 4) =
           (float)((local_2c * 0x139 + local_30 * 0x3df) % 0x10000) / 65535.0;
    }
  }
  return;
}



void kernel_deriche(float param_1,int param_2,int param_3,long param_4,long param_5,long param_6,
                   long param_7)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  int local_40;
  int local_3c;
  
  fVar1 = expf((float)((uint)param_1 ^ 0x80000000));
  fVar2 = expf((float)((uint)param_1 ^ 0x80000000));
  fVar3 = expf((float)((uint)param_1 ^ 0x80000000));
  fVar4 = expf(param_1 * 2.0);
  fVar2 = ((1.0 - fVar1) * (1.0 - fVar2)) / ((param_1 * 2.0 * fVar3 + 1.0) - fVar4);
  fVar1 = expf((float)((uint)param_1 ^ 0x80000000));
  fVar3 = fVar2 * fVar1 * (param_1 - 1.0);
  fVar1 = expf((float)((uint)param_1 ^ 0x80000000));
  fVar4 = fVar2 * fVar1 * (param_1 + 1.0);
  fVar5 = expf(param_1 * -2.0);
  fVar5 = (float)((uint)fVar2 ^ 0x80000000) * fVar5;
  fVar6 = powf(2.0,(float)((uint)param_1 ^ 0x80000000));
  fVar1 = expf(param_1 * -2.0);
  fVar1 = (float)((uint)fVar1 ^ 0x80000000);
  for (local_3c = 0; local_3c < param_2; local_3c = local_3c + 1) {
    local_4c = 0.0;
    local_50 = 0.0;
    local_44 = 0.0;
    for (local_40 = 0; local_40 < param_3; local_40 = local_40 + 1) {
      *(float *)(param_6 + (long)local_3c * 0x21c0 + (long)local_40 * 4) =
           fVar1 * local_50 +
           fVar6 * local_4c +
           fVar2 * *(float *)(param_4 + (long)local_3c * 0x21c0 + (long)local_40 * 4) +
           fVar3 * local_44;
      local_44 = *(float *)(param_4 + (long)local_3c * 0x21c0 + (long)local_40 * 4);
      local_50 = local_4c;
      local_4c = *(float *)(param_6 + (long)local_3c * 0x21c0 + (long)local_40 * 4);
    }
  }
  for (local_3c = 0; local_3c < param_2; local_3c = local_3c + 1) {
    local_64 = 0.0;
    local_68 = 0.0;
    local_54 = 0.0;
    local_58 = 0.0;
    for (local_40 = param_3 + -1; -1 < local_40; local_40 = local_40 + -1) {
      *(float *)(param_7 + (long)local_3c * 0x21c0 + (long)local_40 * 4) =
           fVar1 * local_68 + fVar6 * local_64 + fVar4 * local_54 + fVar5 * local_58;
      local_58 = local_54;
      local_54 = *(float *)(param_4 + (long)local_3c * 0x21c0 + (long)local_40 * 4);
      local_68 = local_64;
      local_64 = *(float *)(param_7 + (long)local_3c * 0x21c0 + (long)local_40 * 4);
    }
  }
  for (local_3c = 0; local_3c < param_2; local_3c = local_3c + 1) {
    for (local_40 = 0; local_40 < param_3; local_40 = local_40 + 1) {
      *(float *)(param_5 + (long)local_3c * 0x21c0 + (long)local_40 * 4) =
           (*(float *)(param_6 + (long)local_3c * 0x21c0 + (long)local_40 * 4) +
           *(float *)(param_7 + (long)local_3c * 0x21c0 + (long)local_40 * 4)) * 1.0;
    }
  }
  for (local_40 = 0; local_40 < param_3; local_40 = local_40 + 1) {
    local_48 = 0.0;
    local_4c = 0.0;
    local_50 = 0.0;
    for (local_3c = 0; local_3c < param_2; local_3c = local_3c + 1) {
      *(float *)(param_6 + (long)local_3c * 0x21c0 + (long)local_40 * 4) =
           fVar1 * local_50 +
           fVar6 * local_4c +
           fVar2 * *(float *)(param_5 + (long)local_3c * 0x21c0 + (long)local_40 * 4) +
           fVar3 * local_48;
      local_48 = *(float *)(param_5 + (long)local_3c * 0x21c0 + (long)local_40 * 4);
      local_50 = local_4c;
      local_4c = *(float *)(param_6 + (long)local_3c * 0x21c0 + (long)local_40 * 4);
    }
  }
  for (local_40 = 0; local_40 < param_3; local_40 = local_40 + 1) {
    local_5c = 0.0;
    local_60 = 0.0;
    local_64 = 0.0;
    local_68 = 0.0;
    for (local_3c = param_2 + -1; -1 < local_3c; local_3c = local_3c + -1) {
      *(float *)(param_7 + (long)local_3c * 0x21c0 + (long)local_40 * 4) =
           fVar1 * local_68 + fVar6 * local_64 + fVar4 * local_5c + fVar5 * local_60;
      local_60 = local_5c;
      local_5c = *(float *)(param_5 + (long)local_3c * 0x21c0 + (long)local_40 * 4);
      local_68 = local_64;
      local_64 = *(float *)(param_7 + (long)local_3c * 0x21c0 + (long)local_40 * 4);
    }
  }
  for (local_3c = 0; local_3c < param_2; local_3c = local_3c + 1) {
    for (local_40 = 0; local_40 < param_3; local_40 = local_40 + 1) {
      *(float *)(param_5 + (long)local_3c * 0x21c0 + (long)local_40 * 4) =
           (*(float *)(param_6 + (long)local_3c * 0x21c0 + (long)local_40 * 4) +
           *(float *)(param_7 + (long)local_3c * 0x21c0 + (long)local_40 * 4)) * 1.0;
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void print_array(void)

{
                    // WARNING: Subroutine does not return
  fprintf(_DAT_12a358d48388b48,"==BEGIN DUMP_ARRAYS==\n");
}


