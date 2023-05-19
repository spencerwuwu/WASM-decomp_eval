#include "ludcmp.h"



void kernel_ludcmp(int param_1,long param_2,long param_3,long param_4,long param_5)

{
  double local_48;
  int local_3c;
  int local_38;
  int local_34;
  
  for (local_34 = 0; local_34 < param_1; local_34 = local_34 + 1) {
    for (local_38 = 0; local_38 < local_34; local_38 = local_38 + 1) {
      local_48 = *(double *)(param_2 + (long)local_34 * 16000 + (long)local_38 * 8);
      for (local_3c = 0; local_3c < local_38; local_3c = local_3c + 1) {
        local_48 = (double)(*(ulong *)(param_2 + (long)local_34 * 16000 + (long)local_3c * 8) ^
                           0x8000000000000000) *
                   *(double *)(param_2 + (long)local_3c * 16000 + (long)local_38 * 8) + local_48;
      }
      *(double *)(param_2 + (long)local_34 * 16000 + (long)local_38 * 8) =
           local_48 / *(double *)(param_2 + (long)local_38 * 16000 + (long)local_38 * 8);
    }
    for (local_38 = local_34; local_38 < param_1; local_38 = local_38 + 1) {
      local_48 = *(double *)(param_2 + (long)local_34 * 16000 + (long)local_38 * 8);
      for (local_3c = 0; local_3c < local_34; local_3c = local_3c + 1) {
        local_48 = (double)(*(ulong *)(param_2 + (long)local_34 * 16000 + (long)local_3c * 8) ^
                           0x8000000000000000) *
                   *(double *)(param_2 + (long)local_3c * 16000 + (long)local_38 * 8) + local_48;
      }
      *(double *)(param_2 + (long)local_34 * 16000 + (long)local_38 * 8) = local_48;
    }
  }
  for (local_34 = 0; local_34 < param_1; local_34 = local_34 + 1) {
    local_48 = *(double *)(param_3 + (long)local_34 * 8);
    for (local_38 = 0; local_38 < local_34; local_38 = local_38 + 1) {
      local_48 = (double)(*(ulong *)(param_2 + (long)local_34 * 16000 + (long)local_38 * 8) ^
                         0x8000000000000000) * *(double *)(param_5 + (long)local_38 * 8) + local_48;
    }
    *(double *)(param_5 + (long)local_34 * 8) = local_48;
  }
  for (local_34 = param_1 + -1; -1 < local_34; local_34 = local_34 + -1) {
    local_48 = *(double *)(param_5 + (long)local_34 * 8);
    local_38 = local_34;
    while (local_38 = local_38 + 1, local_38 < param_1) {
      local_48 = (double)(*(ulong *)(param_2 + (long)local_34 * 16000 + (long)local_38 * 8) ^
                         0x8000000000000000) * *(double *)(param_4 + (long)local_38 * 8) + local_48;
    }
    *(double *)(param_4 + (long)local_34 * 8) =
         local_48 / *(double *)(param_2 + (long)local_34 * 16000 + (long)local_34 * 8);
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
  
  __ptr = (void *)polybench_alloc_data(4000000,8);
  __ptr_00 = (void *)polybench_alloc_data(2000,8);
  __ptr_01 = (void *)polybench_alloc_data(2000,8);
  __ptr_02 = (void *)polybench_alloc_data(2000,8);
  init_array(2000,__ptr,__ptr_00,__ptr_01,__ptr_02);
  kernel_ludcmp(2000,__ptr,__ptr_00,__ptr_01,__ptr_02);
  if (0x2a < param_1) {
    iVar1 = strcmp(*param_2,"");
    if (iVar1 == 0) {
      print_array(2000,__ptr_01);
    }
  }
  free(__ptr);
  free(__ptr_00);
  free(__ptr_01);
  free(__ptr_02);
  return 0;
}



void init_array(int param_1,long param_2,long param_3,long param_4,long param_5)

{
  int iVar1;
  void *__ptr;
  int local_4c;
  int local_48;
  int local_44;
  int local_38;
  int local_34;
  
  for (local_34 = 0; local_34 < param_1; local_34 = local_34 + 1) {
    *(undefined8 *)(param_4 + (long)local_34 * 8) = 0;
    *(undefined8 *)(param_5 + (long)local_34 * 8) = 0;
    *(double *)(param_3 + (long)local_34 * 8) =
         ((double)(local_34 + 1) / (double)param_1) / 2.0 + 4.0;
  }
  for (local_34 = 0; local_34 < param_1; local_34 = local_34 + 1) {
    for (local_38 = 0; iVar1 = local_34, local_38 <= local_34; local_38 = local_38 + 1) {
      *(double *)(param_2 + (long)local_34 * 16000 + (long)local_38 * 8) =
           (double)(-local_38 % param_1) / (double)param_1 + 1.0;
    }
    while (local_38 = iVar1 + 1, local_38 < param_1) {
      *(undefined8 *)(param_2 + (long)local_34 * 16000 + (long)local_38 * 8) = 0;
      iVar1 = local_38;
    }
    *(undefined8 *)(param_2 + (long)local_34 * 16000 + (long)local_34 * 8) = 0x3ff0000000000000;
  }
  __ptr = (void *)polybench_alloc_data(4000000,8);
  for (local_44 = 0; local_44 < param_1; local_44 = local_44 + 1) {
    for (local_48 = 0; local_48 < param_1; local_48 = local_48 + 1) {
      *(undefined8 *)((long)__ptr + (long)local_48 * 8 + (long)local_44 * 16000) = 0;
    }
  }
  for (local_4c = 0; local_4c < param_1; local_4c = local_4c + 1) {
    for (local_44 = 0; local_44 < param_1; local_44 = local_44 + 1) {
      for (local_48 = 0; local_48 < param_1; local_48 = local_48 + 1) {
        *(double *)((long)__ptr + (long)local_48 * 8 + (long)local_44 * 16000) =
             *(double *)(param_2 + (long)local_44 * 16000 + (long)local_4c * 8) *
             *(double *)(param_2 + (long)local_48 * 16000 + (long)local_4c * 8) +
             *(double *)((long)__ptr + (long)local_48 * 8 + (long)local_44 * 16000);
      }
    }
  }
  for (local_44 = 0; local_44 < param_1; local_44 = local_44 + 1) {
    for (local_48 = 0; local_48 < param_1; local_48 = local_48 + 1) {
      *(undefined8 *)(param_2 + (long)local_44 * 16000 + (long)local_48 * 8) =
           *(undefined8 *)((long)__ptr + (long)local_48 * 8 + (long)local_44 * 16000);
    }
  }
  free(__ptr);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void print_array(void)

{
                    // WARNING: Subroutine does not return
  fprintf(_DAT_f1358d48388b48,"==BEGIN DUMP_ARRAYS==\n");
}


