#include "jacobi-2d.h"



undefined8 submain(int param_1,char **param_2)

{
  int iVar1;
  void *__ptr;
  void *__ptr_00;
  
  __ptr = (void *)polybench_alloc_data(0x19c990,8);
  __ptr_00 = (void *)polybench_alloc_data(0x19c990,8);
  init_array(0x514,__ptr,__ptr_00);
  kernel_jacobi_2d(500,0x514,__ptr,__ptr_00);
  if (0x2a < param_1) {
    iVar1 = strcmp(*param_2,"");
    if (iVar1 == 0) {
      print_array(0x514,__ptr);
    }
  }
  free(__ptr);
  free(__ptr_00);
  return 0;
}



void init_array(int param_1,long param_2,long param_3)

{
  int local_28;
  int local_24;
  
  for (local_24 = 0; local_24 < param_1; local_24 = local_24 + 1) {
    for (local_28 = 0; local_28 < param_1; local_28 = local_28 + 1) {
      *(double *)(param_2 + (long)local_24 * 0x28a0 + (long)local_28 * 8) =
           ((double)local_24 * (double)(local_28 + 2) + 2.0) / (double)param_1;
      *(double *)(param_3 + (long)local_24 * 0x28a0 + (long)local_28 * 8) =
           ((double)local_24 * (double)(local_28 + 3) + 3.0) / (double)param_1;
    }
  }
  return;
}



void kernel_jacobi_2d(int param_1,int param_2,long param_3,long param_4)

{
  int local_2c;
  int local_28;
  int local_24;
  
  for (local_24 = 0; local_24 < param_1; local_24 = local_24 + 1) {
    for (local_28 = 1; local_28 < param_2 + -1; local_28 = local_28 + 1) {
      for (local_2c = 1; local_2c < param_2 + -1; local_2c = local_2c + 1) {
        *(double *)(param_4 + (long)local_28 * 0x28a0 + (long)local_2c * 8) =
             (*(double *)(param_3 + (long)local_28 * 0x28a0 + (long)local_2c * 8) +
              *(double *)(param_3 + (long)local_28 * 0x28a0 + (long)(local_2c + -1) * 8) +
              *(double *)(param_3 + (long)local_28 * 0x28a0 + (long)(local_2c + 1) * 8) +
              *(double *)(param_3 + (long)(local_28 + 1) * 0x28a0 + (long)local_2c * 8) +
             *(double *)(param_3 + (long)(local_28 + -1) * 0x28a0 + (long)local_2c * 8)) * 0.2;
      }
    }
    for (local_28 = 1; local_28 < param_2 + -1; local_28 = local_28 + 1) {
      for (local_2c = 1; local_2c < param_2 + -1; local_2c = local_2c + 1) {
        *(double *)(param_3 + (long)local_28 * 0x28a0 + (long)local_2c * 8) =
             (*(double *)(param_4 + (long)local_28 * 0x28a0 + (long)local_2c * 8) +
              *(double *)(param_4 + (long)local_28 * 0x28a0 + (long)(local_2c + -1) * 8) +
              *(double *)(param_4 + (long)local_28 * 0x28a0 + (long)(local_2c + 1) * 8) +
              *(double *)(param_4 + (long)(local_28 + 1) * 0x28a0 + (long)local_2c * 8) +
             *(double *)(param_4 + (long)(local_28 + -1) * 0x28a0 + (long)local_2c * 8)) * 0.2;
      }
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void print_array(void)

{
                    // WARNING: Subroutine does not return
  fprintf(_DAT_129358d48388b48,"==BEGIN DUMP_ARRAYS==\n");
}


