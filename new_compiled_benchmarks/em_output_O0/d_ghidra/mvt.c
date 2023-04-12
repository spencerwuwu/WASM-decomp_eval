#include "mvt.h"



undefined8 submain(int param_1,char **param_2)

{
  int iVar1;
  void *__ptr;
  void *__ptr_00;
  void *__ptr_01;
  void *__ptr_02;
  void *__ptr_03;
  
  __ptr = (void *)polybench_alloc_data(4000000,8);
  __ptr_00 = (void *)polybench_alloc_data(2000,8);
  __ptr_01 = (void *)polybench_alloc_data(2000,8);
  __ptr_02 = (void *)polybench_alloc_data(2000,8);
  __ptr_03 = (void *)polybench_alloc_data(2000,8);
  init_array(2000,__ptr_00,__ptr_01,__ptr_02,__ptr_03,__ptr);
  kernel_mvt(2000,__ptr_00,__ptr_01,__ptr_02,__ptr_03,__ptr);
  if (0x2a < param_1) {
    iVar1 = strcmp(*param_2,"");
    if (iVar1 == 0) {
      print_array(2000,__ptr_00,__ptr_01);
    }
  }
  free(__ptr);
  free(__ptr_00);
  free(__ptr_01);
  free(__ptr_02);
  free(__ptr_03);
  return 0;
}



void init_array(int param_1,long param_2,long param_3,long param_4,long param_5,long param_6)

{
  int local_40;
  int local_3c;
  
  for (local_3c = 0; local_3c < param_1; local_3c = local_3c + 1) {
    *(double *)(param_2 + (long)local_3c * 8) = (double)(local_3c % param_1) / (double)param_1;
    *(double *)(param_3 + (long)local_3c * 8) = (double)((local_3c + 1) % param_1) / (double)param_1
    ;
    *(double *)(param_4 + (long)local_3c * 8) = (double)((local_3c + 3) % param_1) / (double)param_1
    ;
    *(double *)(param_5 + (long)local_3c * 8) = (double)((local_3c + 4) % param_1) / (double)param_1
    ;
    for (local_40 = 0; local_40 < param_1; local_40 = local_40 + 1) {
      *(double *)(param_6 + (long)local_3c * 16000 + (long)local_40 * 8) =
           (double)((local_3c * local_40) % param_1) / (double)param_1;
    }
  }
  return;
}



void kernel_mvt(int param_1,long param_2,long param_3,long param_4,long param_5,long param_6)

{
  int local_40;
  int local_3c;
  
  for (local_3c = 0; local_3c < param_1; local_3c = local_3c + 1) {
    for (local_40 = 0; local_40 < param_1; local_40 = local_40 + 1) {
      *(double *)(param_2 + (long)local_3c * 8) =
           *(double *)(param_6 + (long)local_3c * 16000 + (long)local_40 * 8) *
           *(double *)(param_4 + (long)local_40 * 8) + *(double *)(param_2 + (long)local_3c * 8);
    }
  }
  for (local_3c = 0; local_3c < param_1; local_3c = local_3c + 1) {
    for (local_40 = 0; local_40 < param_1; local_40 = local_40 + 1) {
      *(double *)(param_3 + (long)local_3c * 8) =
           *(double *)(param_6 + (long)local_40 * 16000 + (long)local_3c * 8) *
           *(double *)(param_5 + (long)local_40 * 8) + *(double *)(param_3 + (long)local_3c * 8);
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


