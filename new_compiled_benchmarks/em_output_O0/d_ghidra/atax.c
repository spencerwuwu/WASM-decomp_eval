#include "atax.h"



void init_array(int param_1,int param_2,long param_3,long param_4)

{
  int local_28;
  int local_24;
  
  for (local_24 = 0; local_24 < param_2; local_24 = local_24 + 1) {
    *(double *)(param_4 + (long)local_24 * 8) = (double)local_24 / (double)param_2 + 1.0;
  }
  for (local_24 = 0; local_24 < param_1; local_24 = local_24 + 1) {
    for (local_28 = 0; local_28 < param_2; local_28 = local_28 + 1) {
      *(double *)(param_3 + (long)local_24 * 0x41a0 + (long)local_28 * 8) =
           (double)((local_24 + local_28) % param_2) / (double)(param_1 * 5);
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void print_array(void)

{
                    // WARNING: Subroutine does not return
  fprintf(_DAT_340358d48388b48,_L_str);
}



void kernel_atax(int param_1,int param_2,long param_3,long param_4,long param_5,long param_6)

{
  int local_38;
  int local_34;
  
  for (local_34 = 0; local_34 < param_2; local_34 = local_34 + 1) {
    *(undefined8 *)(param_5 + (long)local_34 * 8) = 0;
  }
  for (local_34 = 0; local_34 < param_1; local_34 = local_34 + 1) {
    *(undefined8 *)(param_6 + (long)local_34 * 8) = 0;
    for (local_38 = 0; local_38 < param_2; local_38 = local_38 + 1) {
      *(double *)(param_6 + (long)local_34 * 8) =
           *(double *)(param_3 + (long)local_34 * 0x41a0 + (long)local_38 * 8) *
           *(double *)(param_4 + (long)local_38 * 8) + *(double *)(param_6 + (long)local_34 * 8);
    }
    for (local_38 = 0; local_38 < param_2; local_38 = local_38 + 1) {
      *(double *)(param_5 + (long)local_38 * 8) =
           *(double *)(param_3 + (long)local_34 * 0x41a0 + (long)local_38 * 8) *
           *(double *)(param_6 + (long)local_34 * 8) + *(double *)(param_5 + (long)local_38 * 8);
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
  
  __ptr = (void *)polybench_alloc_data(0x3ce1f0,8);
  __ptr_00 = (void *)polybench_alloc_data(0x834,8);
  __ptr_01 = (void *)polybench_alloc_data(0x834,8);
  __ptr_02 = (void *)polybench_alloc_data(0x76c,8);
  init_array(0x76c,0x834,__ptr,__ptr_00);
  kernel_atax(0x76c,0x834,__ptr,__ptr_00,__ptr_01,__ptr_02);
  if (0x2a < param_1) {
    iVar1 = strcmp(*param_2,"");
    if (iVar1 == 0) {
      print_array(0x834,__ptr_01);
    }
  }
  free(__ptr);
  free(__ptr_00);
  free(__ptr_01);
  free(__ptr_02);
  return 0;
}


