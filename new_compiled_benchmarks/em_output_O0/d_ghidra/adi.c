#include "adi.h"



undefined8 submain(int param_1,char **param_2)

{
  int iVar1;
  void *__ptr;
  void *__ptr_00;
  void *__ptr_01;
  void *__ptr_02;
  
  __ptr = (void *)polybench_alloc_data(1000000,8);
  __ptr_00 = (void *)polybench_alloc_data(1000000,8);
  __ptr_01 = (void *)polybench_alloc_data(1000000,8);
  __ptr_02 = (void *)polybench_alloc_data(1000000,8);
  init_array(1000,__ptr);
  kernel_adi(500,1000,__ptr,__ptr_00,__ptr_01,__ptr_02);
  if (0x2a < param_1) {
    iVar1 = strcmp(*param_2,"");
    if (iVar1 == 0) {
      print_array(1000,__ptr);
    }
  }
  free(__ptr);
  free(__ptr_00);
  free(__ptr_01);
  free(__ptr_02);
  return 0;
}



void init_array(int param_1,long param_2)

{
  int local_20;
  int local_1c;
  
  for (local_1c = 0; local_1c < param_1; local_1c = local_1c + 1) {
    for (local_20 = 0; local_20 < param_1; local_20 = local_20 + 1) {
      *(double *)(param_2 + (long)local_1c * 8000 + (long)local_20 * 8) =
           (double)((local_1c + param_1) - local_20) / (double)param_1;
    }
  }
  return;
}



void kernel_adi(int param_1,int param_2,long param_3,long param_4,long param_5,long param_6)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  int local_3c;
  int local_38;
  int local_34;
  
  dVar1 = ((1.0 / (double)param_1) * 2.0) / ((1.0 / (double)param_2) * (1.0 / (double)param_2));
  dVar2 = ((1.0 / (double)param_1) * 1.0) / ((1.0 / (double)param_2) * (1.0 / (double)param_2));
  dVar3 = (double)((ulong)dVar1 ^ 0x8000000000000000) / 2.0;
  dVar1 = dVar1 + 1.0;
  dVar4 = (double)((ulong)dVar2 ^ 0x8000000000000000) / 2.0;
  dVar2 = dVar2 + 1.0;
  for (local_34 = 1; local_34 <= param_1; local_34 = local_34 + 1) {
    for (local_38 = 1; local_38 < param_2 + -1; local_38 = local_38 + 1) {
      *(undefined8 *)(param_4 + (long)local_38 * 8) = 0x3ff0000000000000;
      *(undefined8 *)(param_5 + (long)local_38 * 8000) = 0;
      *(undefined8 *)(param_6 + (long)local_38 * 8000) =
           *(undefined8 *)(param_4 + (long)local_38 * 8);
      for (local_3c = 1; local_3c < param_2 + -1; local_3c = local_3c + 1) {
        *(double *)(param_5 + (long)local_38 * 8000 + (long)local_3c * 8) =
             (double)((ulong)dVar3 ^ 0x8000000000000000) /
             (dVar3 * *(double *)(param_5 + (long)local_38 * 8000 + (long)(local_3c + -1) * 8) +
             dVar1);
        *(double *)(param_6 + (long)local_38 * 8000 + (long)local_3c * 8) =
             ((double)((ulong)dVar3 ^ 0x8000000000000000) *
              *(double *)(param_6 + (long)local_38 * 8000 + (long)(local_3c + -1) * 8) +
             (double)((ulong)dVar4 ^ 0x8000000000000000) *
             *(double *)(param_3 + (long)local_3c * 8000 + (long)(local_38 + 1) * 8) +
             (double)((ulong)dVar4 ^ 0x8000000000000000) *
             *(double *)(param_3 + (long)local_3c * 8000 + (long)(local_38 + -1) * 8) +
             (dVar4 + dVar4 + 1.0) *
             *(double *)(param_3 + (long)local_3c * 8000 + (long)local_38 * 8)) /
             (dVar3 * *(double *)(param_5 + (long)local_38 * 8000 + (long)(local_3c + -1) * 8) +
             dVar1);
      }
      *(undefined8 *)(param_4 + (long)(param_2 + -1) * 8000 + (long)local_38 * 8) =
           0x3ff0000000000000;
      for (local_3c = param_2 + -2; 0 < local_3c; local_3c = local_3c + -1) {
        *(double *)(param_4 + (long)local_3c * 8000 + (long)local_38 * 8) =
             *(double *)(param_5 + (long)local_38 * 8000 + (long)local_3c * 8) *
             *(double *)(param_4 + (long)(local_3c + 1) * 8000 + (long)local_38 * 8) +
             *(double *)(param_6 + (long)local_38 * 8000 + (long)local_3c * 8);
      }
    }
    for (local_38 = 1; local_38 < param_2 + -1; local_38 = local_38 + 1) {
      *(undefined8 *)(param_3 + (long)local_38 * 8000) = 0x3ff0000000000000;
      *(undefined8 *)(param_5 + (long)local_38 * 8000) = 0;
      *(undefined8 *)(param_6 + (long)local_38 * 8000) =
           *(undefined8 *)(param_3 + (long)local_38 * 8000);
      for (local_3c = 1; local_3c < param_2 + -1; local_3c = local_3c + 1) {
        *(double *)(param_5 + (long)local_38 * 8000 + (long)local_3c * 8) =
             (double)((ulong)dVar4 ^ 0x8000000000000000) /
             (dVar4 * *(double *)(param_5 + (long)local_38 * 8000 + (long)(local_3c + -1) * 8) +
             dVar2);
        *(double *)(param_6 + (long)local_38 * 8000 + (long)local_3c * 8) =
             ((double)((ulong)dVar4 ^ 0x8000000000000000) *
              *(double *)(param_6 + (long)local_38 * 8000 + (long)(local_3c + -1) * 8) +
             (double)((ulong)dVar3 ^ 0x8000000000000000) *
             *(double *)(param_4 + (long)(local_38 + 1) * 8000 + (long)local_3c * 8) +
             (double)((ulong)dVar3 ^ 0x8000000000000000) *
             *(double *)(param_4 + (long)(local_38 + -1) * 8000 + (long)local_3c * 8) +
             (dVar3 + dVar3 + 1.0) *
             *(double *)(param_4 + (long)local_38 * 8000 + (long)local_3c * 8)) /
             (dVar4 * *(double *)(param_5 + (long)local_38 * 8000 + (long)(local_3c + -1) * 8) +
             dVar2);
      }
      *(undefined8 *)(param_3 + (long)local_38 * 8000 + (long)(param_2 + -1) * 8) =
           0x3ff0000000000000;
      for (local_3c = param_2 + -2; 0 < local_3c; local_3c = local_3c + -1) {
        *(double *)(param_3 + (long)local_38 * 8000 + (long)local_3c * 8) =
             *(double *)(param_5 + (long)local_38 * 8000 + (long)local_3c * 8) *
             *(double *)(param_3 + (long)local_38 * 8000 + (long)(local_3c + 1) * 8) +
             *(double *)(param_6 + (long)local_38 * 8000 + (long)local_3c * 8);
      }
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void print_array(void)

{
                    // WARNING: Subroutine does not return
  fprintf(_DAT_121358d48388b48,"==BEGIN DUMP_ARRAYS==\n");
}


