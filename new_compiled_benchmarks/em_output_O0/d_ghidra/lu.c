#include "lu.h"



void kernel_lu(int param_1,long param_2)

{
  long lVar1;
  int local_24;
  int local_20;
  int local_1c;
  
  for (local_1c = 0; local_1c < param_1; local_1c = local_1c + 1) {
    for (local_20 = 0; local_20 < local_1c; local_20 = local_20 + 1) {
      for (local_24 = 0; local_24 < local_20; local_24 = local_24 + 1) {
        lVar1 = param_2 + (long)local_1c * 16000;
        *(double *)(lVar1 + (long)local_20 * 8) =
             (double)(*(ulong *)(param_2 + (long)local_1c * 16000 + (long)local_24 * 8) ^
                     0x8000000000000000) *
             *(double *)(param_2 + (long)local_24 * 16000 + (long)local_20 * 8) +
             *(double *)(lVar1 + (long)local_20 * 8);
      }
      lVar1 = param_2 + (long)local_1c * 16000;
      *(double *)(lVar1 + (long)local_20 * 8) =
           *(double *)(lVar1 + (long)local_20 * 8) /
           *(double *)(param_2 + (long)local_20 * 16000 + (long)local_20 * 8);
    }
    for (local_20 = local_1c; local_20 < param_1; local_20 = local_20 + 1) {
      for (local_24 = 0; local_24 < local_1c; local_24 = local_24 + 1) {
        lVar1 = param_2 + (long)local_1c * 16000;
        *(double *)(lVar1 + (long)local_20 * 8) =
             (double)(*(ulong *)(param_2 + (long)local_1c * 16000 + (long)local_24 * 8) ^
                     0x8000000000000000) *
             *(double *)(param_2 + (long)local_24 * 16000 + (long)local_20 * 8) +
             *(double *)(lVar1 + (long)local_20 * 8);
      }
    }
  }
  return;
}



undefined8 submain(int param_1,char **param_2)

{
  int iVar1;
  void *__ptr;
  
  __ptr = (void *)polybench_alloc_data(4000000,8);
  init_array(2000,__ptr);
  kernel_lu(2000,__ptr);
  if (0x2a < param_1) {
    iVar1 = strcmp(*param_2,"");
    if (iVar1 == 0) {
      print_array(2000,__ptr);
    }
  }
  free(__ptr);
  return 0;
}



void init_array(int param_1,long param_2)

{
  int iVar1;
  void *__ptr;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  
  for (local_1c = 0; local_1c < param_1; local_1c = local_1c + 1) {
    for (local_20 = 0; iVar1 = local_1c, local_20 <= local_1c; local_20 = local_20 + 1) {
      *(double *)(param_2 + (long)local_1c * 16000 + (long)local_20 * 8) =
           (double)(-local_20 % param_1) / (double)param_1 + 1.0;
    }
    while (local_20 = iVar1 + 1, local_20 < param_1) {
      *(undefined8 *)(param_2 + (long)local_1c * 16000 + (long)local_20 * 8) = 0;
      iVar1 = local_20;
    }
    *(undefined8 *)(param_2 + (long)local_1c * 16000 + (long)local_1c * 8) = 0x3ff0000000000000;
  }
  __ptr = (void *)polybench_alloc_data(4000000,8);
  for (local_24 = 0; local_24 < param_1; local_24 = local_24 + 1) {
    for (local_28 = 0; local_28 < param_1; local_28 = local_28 + 1) {
      *(undefined8 *)((long)__ptr + (long)local_28 * 8 + (long)local_24 * 16000) = 0;
    }
  }
  for (local_2c = 0; local_2c < param_1; local_2c = local_2c + 1) {
    for (local_24 = 0; local_24 < param_1; local_24 = local_24 + 1) {
      for (local_28 = 0; local_28 < param_1; local_28 = local_28 + 1) {
        *(double *)((long)__ptr + (long)local_28 * 8 + (long)local_24 * 16000) =
             *(double *)(param_2 + (long)local_24 * 16000 + (long)local_2c * 8) *
             *(double *)(param_2 + (long)local_28 * 16000 + (long)local_2c * 8) +
             *(double *)((long)__ptr + (long)local_28 * 8 + (long)local_24 * 16000);
      }
    }
  }
  for (local_24 = 0; local_24 < param_1; local_24 = local_24 + 1) {
    for (local_28 = 0; local_28 < param_1; local_28 = local_28 + 1) {
      *(undefined8 *)(param_2 + (long)local_24 * 16000 + (long)local_28 * 8) =
           *(undefined8 *)((long)__ptr + (long)local_28 * 8 + (long)local_24 * 16000);
    }
  }
  free(__ptr);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void print_array(void)

{
                    // WARNING: Subroutine does not return
  fprintf(_DAT_119358d48388b48,"==BEGIN DUMP_ARRAYS==\n");
}


