#include "fdtd-2d.h"



void kernel_fdtd_2d(int param_1,int param_2,int param_3,long param_4,long param_5,long param_6,
                   long param_7)

{
  int local_3c;
  int local_38;
  int local_34;
  
  for (local_34 = 0; local_34 < param_1; local_34 = local_34 + 1) {
    for (local_3c = 0; local_3c < param_3; local_3c = local_3c + 1) {
      *(undefined8 *)(param_5 + (long)local_3c * 8) = *(undefined8 *)(param_7 + (long)local_34 * 8);
    }
    for (local_38 = 1; local_38 < param_2; local_38 = local_38 + 1) {
      for (local_3c = 0; local_3c < param_3; local_3c = local_3c + 1) {
        *(double *)(param_5 + (long)local_38 * 0x2580 + (long)local_3c * 8) =
             (*(double *)(param_6 + (long)local_38 * 0x2580 + (long)local_3c * 8) -
             *(double *)(param_6 + (long)(local_38 + -1) * 0x2580 + (long)local_3c * 8)) * -0.5 +
             *(double *)(param_5 + (long)local_38 * 0x2580 + (long)local_3c * 8);
      }
    }
    for (local_38 = 0; local_38 < param_2; local_38 = local_38 + 1) {
      for (local_3c = 1; local_3c < param_3; local_3c = local_3c + 1) {
        *(double *)(param_4 + (long)local_38 * 0x2580 + (long)local_3c * 8) =
             (*(double *)(param_6 + (long)local_38 * 0x2580 + (long)local_3c * 8) -
             *(double *)(param_6 + (long)local_38 * 0x2580 + (long)(local_3c + -1) * 8)) * -0.5 +
             *(double *)(param_4 + (long)local_38 * 0x2580 + (long)local_3c * 8);
      }
    }
    for (local_38 = 0; local_38 < param_2 + -1; local_38 = local_38 + 1) {
      for (local_3c = 0; local_3c < param_3 + -1; local_3c = local_3c + 1) {
        *(double *)(param_6 + (long)local_38 * 0x2580 + (long)local_3c * 8) =
             (((*(double *)(param_4 + (long)local_38 * 0x2580 + (long)(local_3c + 1) * 8) -
               *(double *)(param_4 + (long)local_38 * 0x2580 + (long)local_3c * 8)) +
              *(double *)(param_5 + (long)(local_38 + 1) * 0x2580 + (long)local_3c * 8)) -
             *(double *)(param_5 + (long)local_38 * 0x2580 + (long)local_3c * 8)) * -0.7 +
             *(double *)(param_6 + (long)local_38 * 0x2580 + (long)local_3c * 8);
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
  
  __ptr = (void *)polybench_alloc_data(1200000,8);
  __ptr_00 = (void *)polybench_alloc_data(1200000,8);
  __ptr_01 = (void *)polybench_alloc_data(1200000,8);
  __ptr_02 = (void *)polybench_alloc_data(500,8);
  init_array(500,1000,0x4b0,__ptr,__ptr_00,__ptr_01,__ptr_02);
  kernel_fdtd_2d(500,1000,0x4b0,__ptr,__ptr_00,__ptr_01,__ptr_02);
  if (0x2a < param_1) {
    iVar1 = strcmp(*param_2,"");
    if (iVar1 == 0) {
      print_array(1000,0x4b0,__ptr,__ptr_00,__ptr_01);
    }
  }
  free(__ptr);
  free(__ptr_00);
  free(__ptr_01);
  free(__ptr_02);
  return 0;
}



void init_array(int param_1,int param_2,int param_3,long param_4,long param_5,long param_6,
               long param_7)

{
  int local_38;
  int local_34;
  
  for (local_34 = 0; local_34 < param_1; local_34 = local_34 + 1) {
    *(double *)(param_7 + (long)local_34 * 8) = (double)local_34;
  }
  for (local_34 = 0; local_34 < param_2; local_34 = local_34 + 1) {
    for (local_38 = 0; local_38 < param_3; local_38 = local_38 + 1) {
      *(double *)(param_4 + (long)local_34 * 0x2580 + (long)local_38 * 8) =
           ((double)local_34 * (double)(local_38 + 1)) / (double)param_2;
      *(double *)(param_5 + (long)local_34 * 0x2580 + (long)local_38 * 8) =
           ((double)local_34 * (double)(local_38 + 2)) / (double)param_3;
      *(double *)(param_6 + (long)local_34 * 0x2580 + (long)local_38 * 8) =
           ((double)local_34 * (double)(local_38 + 3)) / (double)param_2;
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void print_array(void)

{
                    // WARNING: Subroutine does not return
  fprintf(_DAT_2fe358d48388b48,"==BEGIN DUMP_ARRAYS==\n");
}


