#include "bicg.h"



undefined8 submain(int param_1,char **param_2)

{
  int iVar1;
  void *__ptr;
  void *__ptr_00;
  void *__ptr_01;
  void *__ptr_02;
  void *__ptr_03;
  
  __ptr = (void *)polybench_alloc_data(0x3ce1f0,8);
  __ptr_00 = (void *)polybench_alloc_data(0x76c,8);
  __ptr_01 = (void *)polybench_alloc_data(0x834,8);
  __ptr_02 = (void *)polybench_alloc_data(0x76c,8);
  __ptr_03 = (void *)polybench_alloc_data(0x834,8);
  init_array(0x76c,0x834,__ptr,__ptr_03,__ptr_02);
  kernel_bicg(0x76c,0x834,__ptr,__ptr_00,__ptr_01,__ptr_02,__ptr_03);
  if (0x2a < param_1) {
    iVar1 = strcmp(*param_2,"");
    if (iVar1 == 0) {
      print_array(0x76c,0x834,__ptr_00,__ptr_01);
    }
  }
  free(__ptr);
  free(__ptr_00);
  free(__ptr_01);
  free(__ptr_02);
  free(__ptr_03);
  return 0;
}



void init_array(int param_1,int param_2,long param_3,long param_4,long param_5)

{
  int local_30;
  int local_2c;
  
  for (local_2c = 0; local_2c < param_1; local_2c = local_2c + 1) {
    *(double *)(param_5 + (long)local_2c * 8) = (double)(local_2c % param_1) / (double)param_1;
  }
  for (local_2c = 0; local_2c < param_2; local_2c = local_2c + 1) {
    *(double *)(param_4 + (long)local_2c * 8) = (double)(local_2c % param_2) / (double)param_2;
    for (local_30 = 0; local_30 < param_1; local_30 = local_30 + 1) {
      *(double *)(param_3 + (long)local_2c * 0x3b60 + (long)local_30 * 8) =
           (double)((local_2c * (local_30 + 1)) % param_2) / (double)param_2;
    }
  }
  return;
}



void kernel_bicg(int param_1,int param_2,long param_3,long param_4,long param_5,long param_6,
                long param_7)

{
  int local_38;
  int local_34;
  
  for (local_34 = 0; local_34 < param_1; local_34 = local_34 + 1) {
    *(undefined8 *)(param_4 + (long)local_34 * 8) = 0;
  }
  for (local_34 = 0; local_34 < param_2; local_34 = local_34 + 1) {
    *(undefined8 *)(param_5 + (long)local_34 * 8) = 0;
    for (local_38 = 0; local_38 < param_1; local_38 = local_38 + 1) {
      *(double *)(param_4 + (long)local_38 * 8) =
           *(double *)(param_7 + (long)local_34 * 8) *
           *(double *)(param_3 + (long)local_34 * 0x3b60 + (long)local_38 * 8) +
           *(double *)(param_4 + (long)local_38 * 8);
      *(double *)(param_5 + (long)local_34 * 8) =
           *(double *)(param_3 + (long)local_34 * 0x3b60 + (long)local_38 * 8) *
           *(double *)(param_6 + (long)local_38 * 8) + *(double *)(param_5 + (long)local_34 * 8);
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void print_array(void)

{
                    // WARNING: Subroutine does not return
  fprintf(_DAT_186358d48388b48,"==BEGIN DUMP_ARRAYS==\n");
}


