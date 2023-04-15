#include "gemver.h"



void kernel_gemver(double param_1,double param_2,int param_3,long param_4,long param_5,long param_6,
                  long param_7_00,long param_8_00,long param_7,long param_8,long param_9,
                  long param_10)

{
  int local_50;
  int local_4c;
  
  for (local_4c = 0; local_4c < param_3; local_4c = local_4c + 1) {
    for (local_50 = 0; local_50 < param_3; local_50 = local_50 + 1) {
      *(double *)(param_4 + (long)local_4c * 16000 + (long)local_50 * 8) =
           *(double *)(param_7_00 + (long)local_4c * 8) *
           *(double *)(param_8_00 + (long)local_50 * 8) +
           *(double *)(param_5 + (long)local_4c * 8) * *(double *)(param_6 + (long)local_50 * 8) +
           *(double *)(param_4 + (long)local_4c * 16000 + (long)local_50 * 8);
    }
  }
  for (local_4c = 0; local_4c < param_3; local_4c = local_4c + 1) {
    for (local_50 = 0; local_50 < param_3; local_50 = local_50 + 1) {
      *(double *)(param_8 + (long)local_4c * 8) =
           param_2 * *(double *)(param_4 + (long)local_50 * 16000 + (long)local_4c * 8) *
           *(double *)(param_9 + (long)local_50 * 8) + *(double *)(param_8 + (long)local_4c * 8);
    }
  }
  for (local_4c = 0; local_4c < param_3; local_4c = local_4c + 1) {
    *(double *)(param_8 + (long)local_4c * 8) =
         *(double *)(param_8 + (long)local_4c * 8) + *(double *)(param_10 + (long)local_4c * 8);
  }
  for (local_4c = 0; local_4c < param_3; local_4c = local_4c + 1) {
    for (local_50 = 0; local_50 < param_3; local_50 = local_50 + 1) {
      *(double *)(param_7 + (long)local_4c * 8) =
           param_1 * *(double *)(param_4 + (long)local_4c * 16000 + (long)local_50 * 8) *
           *(double *)(param_8 + (long)local_50 * 8) + *(double *)(param_7 + (long)local_4c * 8);
    }
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
  void *__ptr_04;
  void *__ptr_05;
  void *__ptr_06;
  void *__ptr_07;
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_34;
  char **local_30;
  int local_24;
  
  local_34 = 2000;
  local_30 = param_2;
  local_24 = param_1;
  __ptr = (void *)polybench_alloc_data(4000000,8);
  __ptr_00 = (void *)polybench_alloc_data(2000,8);
  __ptr_01 = (void *)polybench_alloc_data(2000,8);
  __ptr_02 = (void *)polybench_alloc_data(2000,8);
  __ptr_03 = (void *)polybench_alloc_data(2000,8);
  __ptr_04 = (void *)polybench_alloc_data(2000,8);
  __ptr_05 = (void *)polybench_alloc_data(2000,8);
  __ptr_06 = (void *)polybench_alloc_data(2000,8);
  __ptr_07 = (void *)polybench_alloc_data(2000,8);
  init_array(local_34,&local_40,&local_48,__ptr,__ptr_00,__ptr_01,__ptr_02,__ptr_03,__ptr_04,
             __ptr_05,__ptr_06,__ptr_07);
  kernel_gemver(local_40,local_48,local_34,__ptr,__ptr_00,__ptr_01,__ptr_02,__ptr_03,__ptr_04,
                __ptr_05,__ptr_06,__ptr_07);
  if (0x2a < local_24) {
    iVar1 = strcmp(*local_30,"");
    if (iVar1 == 0) {
      print_array(local_34,__ptr_04);
    }
  }
  free(__ptr);
  free(__ptr_00);
  free(__ptr_01);
  free(__ptr_02);
  free(__ptr_03);
  free(__ptr_04);
  free(__ptr_05);
  free(__ptr_06);
  free(__ptr_07);
  return 0;
}



void init_array(int param_1,undefined8 *param_2,undefined8 *param_3,long param_4,long param_5,
               long param_6,long param_7,long param_8,long param_9,long param_10,long param_11,
               long param_12)

{
  double dVar1;
  int local_40;
  int local_3c;
  
  *param_2 = 0x3ff8000000000000;
  *param_3 = 0x3ff3333333333333;
  dVar1 = (double)param_1;
  for (local_3c = 0; local_3c < param_1; local_3c = local_3c + 1) {
    *(double *)(param_5 + (long)local_3c * 8) = (double)local_3c;
    *(double *)(param_7 + (long)local_3c * 8) = ((double)(local_3c + 1) / dVar1) / 2.0;
    *(double *)(param_6 + (long)local_3c * 8) = ((double)(local_3c + 1) / dVar1) / 4.0;
    *(double *)(param_8 + (long)local_3c * 8) = ((double)(local_3c + 1) / dVar1) / 6.0;
    *(double *)(param_11 + (long)local_3c * 8) = ((double)(local_3c + 1) / dVar1) / 8.0;
    *(double *)(param_12 + (long)local_3c * 8) = ((double)(local_3c + 1) / dVar1) / 9.0;
    *(undefined8 *)(param_10 + (long)local_3c * 8) = 0;
    *(undefined8 *)(param_9 + (long)local_3c * 8) = 0;
    for (local_40 = 0; local_40 < param_1; local_40 = local_40 + 1) {
      *(double *)(param_4 + (long)local_3c * 16000 + (long)local_40 * 8) =
           (double)((local_3c * local_40) % param_1) / (double)param_1;
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void print_array(void)

{
                    // WARNING: Subroutine does not return
  fprintf(_DAT_111358d48388b48,"==BEGIN DUMP_ARRAYS==\n");
}


