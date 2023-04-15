#include "PL_3mm.h"



void init_array(int param_1,int param_2,int param_3,int param_4,int param_5,long param_6,
               long param_7,long param_8,long param_9)

{
  int local_30;
  int local_2c;
  
  for (local_2c = 0; local_2c < param_1; local_2c = local_2c + 1) {
    for (local_30 = 0; local_30 < param_3; local_30 = local_30 + 1) {
      *(double *)(param_6 + (long)local_2c * 8000 + (long)local_30 * 8) =
           (double)((local_2c * local_30 + 1) % param_1) / (double)(param_1 * 5);
    }
  }
  for (local_2c = 0; local_2c < param_3; local_2c = local_2c + 1) {
    for (local_30 = 0; local_30 < param_2; local_30 = local_30 + 1) {
      *(double *)(param_7 + (long)local_2c * 0x1c20 + (long)local_30 * 8) =
           (double)((local_2c * (local_30 + 1) + 2) % param_2) / (double)(param_2 * 5);
    }
  }
  for (local_2c = 0; local_2c < param_2; local_2c = local_2c + 1) {
    for (local_30 = 0; local_30 < param_5; local_30 = local_30 + 1) {
      *(double *)(param_8 + (long)local_2c * 0x2580 + (long)local_30 * 8) =
           (double)((local_2c * (local_30 + 3)) % param_4) / (double)(param_4 * 5);
    }
  }
  for (local_2c = 0; local_2c < param_5; local_2c = local_2c + 1) {
    for (local_30 = 0; local_30 < param_4; local_30 = local_30 + 1) {
      *(double *)(param_9 + (long)local_2c * 0x2260 + (long)local_30 * 8) =
           (double)((local_2c * (local_30 + 2) + 2) % param_3) / (double)(param_3 * 5);
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void print_array(void)

{
                    // WARNING: Subroutine does not return
  fprintf(_DAT_5d1358d48388b48,"==BEGIN DUMP_ARRAYS==\n");
}



void kernel_3mm(int param_1,int param_2,int param_3,int param_4,int param_5,long param_6,
               long param_7,long param_8,long param_9,long param_10,long param_11,long param_12)

{
  long lVar1;
  int local_34;
  int local_30;
  int local_2c;
  
  for (local_2c = 0; local_2c < param_1; local_2c = local_2c + 1) {
    for (local_30 = 0; local_30 < param_2; local_30 = local_30 + 1) {
      *(undefined8 *)(param_6 + (long)local_2c * 0x1c20 + (long)local_30 * 8) = 0;
      for (local_34 = 0; local_34 < param_3; local_34 = local_34 + 1) {
        lVar1 = param_6 + (long)local_2c * 0x1c20;
        *(double *)(lVar1 + (long)local_30 * 8) =
             *(double *)(param_7 + (long)local_2c * 8000 + (long)local_34 * 8) *
             *(double *)(param_8 + (long)local_34 * 0x1c20 + (long)local_30 * 8) +
             *(double *)(lVar1 + (long)local_30 * 8);
      }
    }
  }
  for (local_2c = 0; local_2c < param_2; local_2c = local_2c + 1) {
    for (local_30 = 0; local_30 < param_4; local_30 = local_30 + 1) {
      *(undefined8 *)(param_9 + (long)local_2c * 0x2260 + (long)local_30 * 8) = 0;
      for (local_34 = 0; local_34 < param_5; local_34 = local_34 + 1) {
        lVar1 = param_9 + (long)local_2c * 0x2260;
        *(double *)(lVar1 + (long)local_30 * 8) =
             *(double *)(param_10 + (long)local_2c * 0x2580 + (long)local_34 * 8) *
             *(double *)(param_11 + (long)local_34 * 0x2260 + (long)local_30 * 8) +
             *(double *)(lVar1 + (long)local_30 * 8);
      }
    }
  }
  for (local_2c = 0; local_2c < param_1; local_2c = local_2c + 1) {
    for (local_30 = 0; local_30 < param_4; local_30 = local_30 + 1) {
      *(undefined8 *)(param_12 + (long)local_2c * 0x2260 + (long)local_30 * 8) = 0;
      for (local_34 = 0; local_34 < param_2; local_34 = local_34 + 1) {
        lVar1 = param_12 + (long)local_2c * 0x2260;
        *(double *)(lVar1 + (long)local_30 * 8) =
             *(double *)(param_6 + (long)local_2c * 0x1c20 + (long)local_34 * 8) *
             *(double *)(param_9 + (long)local_34 * 0x2260 + (long)local_30 * 8) +
             *(double *)(lVar1 + (long)local_30 * 8);
      }
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
  
  __ptr = (void *)polybench_alloc_data(720000,8);
  __ptr_00 = (void *)polybench_alloc_data(800000,8);
  __ptr_01 = (void *)polybench_alloc_data(900000,8);
  __ptr_02 = (void *)polybench_alloc_data(990000,8);
  __ptr_03 = (void *)polybench_alloc_data(0x107ac0,8);
  __ptr_04 = (void *)polybench_alloc_data(0x142440,8);
  __ptr_05 = (void *)polybench_alloc_data(880000,8);
  init_array(800,900,1000,0x44c,0x4b0,__ptr_00,__ptr_01,__ptr_03,__ptr_04);
  kernel_3mm(800,900,1000,0x44c,0x4b0,__ptr,__ptr_00,__ptr_01,__ptr_02,__ptr_03,__ptr_04,__ptr_05);
  if (0x2a < param_1) {
    iVar1 = strcmp(*param_2,"");
    if (iVar1 == 0) {
      print_array(800,0x44c,__ptr_05);
    }
  }
  free(__ptr);
  free(__ptr_00);
  free(__ptr_01);
  free(__ptr_02);
  free(__ptr_03);
  free(__ptr_04);
  free(__ptr_05);
  return 0;
}


