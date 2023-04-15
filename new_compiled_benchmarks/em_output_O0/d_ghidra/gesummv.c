#include "gesummv.h"



void kernel_gesummv(double param_1,double param_2,int param_3,long param_4,long param_5,long param_6
                   ,long param_7,long param_8)

{
  int local_50;
  int local_4c;
  
  for (local_4c = 0; local_4c < param_3; local_4c = local_4c + 1) {
    *(undefined8 *)(param_6 + (long)local_4c * 8) = 0;
    *(undefined8 *)(param_8 + (long)local_4c * 8) = 0;
    for (local_50 = 0; local_50 < param_3; local_50 = local_50 + 1) {
      *(double *)(param_6 + (long)local_4c * 8) =
           *(double *)(param_4 + (long)local_4c * 0x28a0 + (long)local_50 * 8) *
           *(double *)(param_7 + (long)local_50 * 8) + *(double *)(param_6 + (long)local_4c * 8);
      *(double *)(param_8 + (long)local_4c * 8) =
           *(double *)(param_5 + (long)local_4c * 0x28a0 + (long)local_50 * 8) *
           *(double *)(param_7 + (long)local_50 * 8) + *(double *)(param_8 + (long)local_4c * 8);
    }
    *(double *)(param_8 + (long)local_4c * 8) =
         param_1 * *(double *)(param_6 + (long)local_4c * 8) +
         param_2 * *(double *)(param_8 + (long)local_4c * 8);
  }
  return;
}



undefined8 submain(int param_1,char **param_2)

{
  int iVar1;
  void *__ptr;
  void *__ptr_00;
  void *__ptr_01;
  void *__ptr_02;
  void *__ptr_03;
  undefined8 local_30;
  undefined8 local_28;
  undefined4 local_1c;
  char **local_18;
  int local_c;
  
  local_1c = 0x514;
  local_18 = param_2;
  local_c = param_1;
  __ptr = (void *)polybench_alloc_data(0x19c990,8);
  __ptr_00 = (void *)polybench_alloc_data(0x19c990,8);
  __ptr_01 = (void *)polybench_alloc_data(0x514,8);
  __ptr_02 = (void *)polybench_alloc_data(0x514,8);
  __ptr_03 = (void *)polybench_alloc_data(0x514,8);
  init_array(local_1c,&local_28,&local_30,__ptr,__ptr_00,__ptr_02);
  kernel_gesummv(local_28,local_30,local_1c,__ptr,__ptr_00,__ptr_01,__ptr_02,__ptr_03);
  if (0x2a < local_c) {
    iVar1 = strcmp(*local_18,"");
    if (iVar1 == 0) {
      print_array(local_1c,__ptr_03);
    }
  }
  free(__ptr);
  free(__ptr_00);
  free(__ptr_01);
  free(__ptr_02);
  free(__ptr_03);
  return 0;
}



void init_array(int param_1,undefined8 *param_2,undefined8 *param_3,long param_4,long param_5,
               long param_6)

{
  int local_40;
  int local_3c;
  
  *param_2 = 0x3ff8000000000000;
  *param_3 = 0x3ff3333333333333;
  for (local_3c = 0; local_3c < param_1; local_3c = local_3c + 1) {
    *(double *)(param_6 + (long)local_3c * 8) = (double)(local_3c % param_1) / (double)param_1;
    for (local_40 = 0; local_40 < param_1; local_40 = local_40 + 1) {
      *(double *)(param_4 + (long)local_3c * 0x28a0 + (long)local_40 * 8) =
           (double)((local_3c * local_40 + 1) % param_1) / (double)param_1;
      *(double *)(param_5 + (long)local_3c * 0x28a0 + (long)local_40 * 8) =
           (double)((local_3c * local_40 + 2) % param_1) / (double)param_1;
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void print_array(void)

{
                    // WARNING: Subroutine does not return
  fprintf(_DAT_e9358d48388b48,"==BEGIN DUMP_ARRAYS==\n");
}


