#include "gramschmidt.h"



undefined8 submain(int param_1,char **param_2)

{
  int iVar1;
  void *__ptr;
  void *__ptr_00;
  void *__ptr_01;
  
  __ptr = (void *)polybench_alloc_data(1200000,8);
  __ptr_00 = (void *)polybench_alloc_data(0x15f900,8);
  __ptr_01 = (void *)polybench_alloc_data(1200000,8);
  init_array(1000,0x4b0,__ptr,__ptr_00,__ptr_01);
  kernel_gramschmidt(1000,0x4b0,__ptr,__ptr_00,__ptr_01);
  if (0x2a < param_1) {
    iVar1 = strcmp(*param_2,"");
    if (iVar1 == 0) {
      print_array(1000,0x4b0,__ptr,__ptr_00,__ptr_01);
    }
  }
  free(__ptr);
  free(__ptr_00);
  free(__ptr_01);
  return 0;
}



void init_array(int param_1,int param_2,long param_3,long param_4,long param_5)

{
  int local_30;
  int local_2c;
  
  for (local_2c = 0; local_2c < param_1; local_2c = local_2c + 1) {
    for (local_30 = 0; local_30 < param_2; local_30 = local_30 + 1) {
      *(double *)(param_3 + (long)local_2c * 0x2580 + (long)local_30 * 8) =
           ((double)((local_2c * local_30) % param_1) / (double)param_1) * 100.0 + 10.0;
      *(undefined8 *)(param_5 + (long)local_2c * 0x2580 + (long)local_30 * 8) = 0;
    }
  }
  for (local_2c = 0; local_2c < param_2; local_2c = local_2c + 1) {
    for (local_30 = 0; local_30 < param_2; local_30 = local_30 + 1) {
      *(undefined8 *)(param_4 + (long)local_2c * 0x2580 + (long)local_30 * 8) = 0;
    }
  }
  return;
}



void kernel_gramschmidt(int param_1,int param_2,long param_3,long param_4,long param_5)

{
  long lVar1;
  double dVar2;
  double local_40;
  int local_34;
  int local_30;
  int local_2c;
  
  for (local_34 = 0; local_34 < param_2; local_34 = local_34 + 1) {
    local_40 = 0.0;
    for (local_2c = 0; local_2c < param_1; local_2c = local_2c + 1) {
      local_40 = *(double *)(param_3 + (long)local_2c * 0x2580 + (long)local_34 * 8) *
                 *(double *)(param_3 + (long)local_2c * 0x2580 + (long)local_34 * 8) + local_40;
    }
    dVar2 = sqrt(local_40);
    *(double *)(param_4 + (long)local_34 * 0x2580 + (long)local_34 * 8) = dVar2;
    for (local_2c = 0; local_30 = local_34, local_2c < param_1; local_2c = local_2c + 1) {
      *(double *)(param_5 + (long)local_2c * 0x2580 + (long)local_34 * 8) =
           *(double *)(param_3 + (long)local_2c * 0x2580 + (long)local_34 * 8) /
           *(double *)(param_4 + (long)local_34 * 0x2580 + (long)local_34 * 8);
    }
    while (local_30 = local_30 + 1, local_30 < param_2) {
      *(undefined8 *)(param_4 + (long)local_34 * 0x2580 + (long)local_30 * 8) = 0;
      for (local_2c = 0; local_2c < param_1; local_2c = local_2c + 1) {
        lVar1 = param_4 + (long)local_34 * 0x2580;
        *(double *)(lVar1 + (long)local_30 * 8) =
             *(double *)(param_5 + (long)local_2c * 0x2580 + (long)local_34 * 8) *
             *(double *)(param_3 + (long)local_2c * 0x2580 + (long)local_30 * 8) +
             *(double *)(lVar1 + (long)local_30 * 8);
      }
      for (local_2c = 0; local_2c < param_1; local_2c = local_2c + 1) {
        *(double *)(param_3 + (long)local_2c * 0x2580 + (long)local_30 * 8) =
             (double)(*(ulong *)(param_5 + (long)local_2c * 0x2580 + (long)local_34 * 8) ^
                     0x8000000000000000) *
             *(double *)(param_4 + (long)local_34 * 0x2580 + (long)local_30 * 8) +
             *(double *)(param_3 + (long)local_2c * 0x2580 + (long)local_30 * 8);
      }
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void print_array(void)

{
                    // WARNING: Subroutine does not return
  fprintf(_DAT_20e358d48388b48,"==BEGIN DUMP_ARRAYS==\n");
}


