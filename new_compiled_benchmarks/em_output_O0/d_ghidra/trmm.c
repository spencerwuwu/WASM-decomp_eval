#include "trmm.h"



undefined8 submain(int param_1,char **param_2)

{
  int iVar1;
  void *__ptr;
  void *__ptr_00;
  undefined8 local_28;
  undefined4 local_20;
  undefined4 local_1c;
  char **local_18;
  int local_c;
  
  local_1c = 1000;
  local_20 = 0x4b0;
  local_18 = param_2;
  local_c = param_1;
  __ptr = (void *)polybench_alloc_data(1000000,8);
  __ptr_00 = (void *)polybench_alloc_data(1200000,8);
  init_array(local_1c,local_20,&local_28,__ptr,__ptr_00);
  kernel_trmm(local_28,local_1c,local_20,__ptr,__ptr_00);
  if (0x2a < local_c) {
    iVar1 = strcmp(*local_18,"");
    if (iVar1 == 0) {
      print_array(local_1c,local_20,__ptr_00);
    }
  }
  free(__ptr);
  free(__ptr_00);
  return 0;
}



void init_array(int param_1,int param_2,undefined8 *param_3,long param_4,long param_5)

{
  int local_30;
  int local_2c;
  
  *param_3 = 0x3ff8000000000000;
  for (local_2c = 0; local_2c < param_1; local_2c = local_2c + 1) {
    for (local_30 = 0; local_30 < local_2c; local_30 = local_30 + 1) {
      *(double *)(param_4 + (long)local_2c * 8000 + (long)local_30 * 8) =
           (double)((local_2c + local_30) % param_1) / (double)param_1;
    }
    *(undefined8 *)(param_4 + (long)local_2c * 8000 + (long)local_2c * 8) = 0x3ff0000000000000;
    for (local_30 = 0; local_30 < param_2; local_30 = local_30 + 1) {
      *(double *)(param_5 + (long)local_2c * 0x2580 + (long)local_30 * 8) =
           (double)((param_2 + (local_2c - local_30)) % param_2) / (double)param_2;
    }
  }
  return;
}



void kernel_trmm(double param_1,int param_2,int param_3,long param_4,long param_5)

{
  long lVar1;
  int local_34;
  int local_30;
  int local_2c;
  
  for (local_2c = 0; local_2c < param_2; local_2c = local_2c + 1) {
    for (local_30 = 0; local_34 = local_2c, local_30 < param_3; local_30 = local_30 + 1) {
      while (local_34 = local_34 + 1, local_34 < param_2) {
        lVar1 = param_5 + (long)local_2c * 0x2580;
        *(double *)(lVar1 + (long)local_30 * 8) =
             *(double *)(param_4 + (long)local_34 * 8000 + (long)local_2c * 8) *
             *(double *)(param_5 + (long)local_34 * 0x2580 + (long)local_30 * 8) +
             *(double *)(lVar1 + (long)local_30 * 8);
      }
      *(double *)(param_5 + (long)local_2c * 0x2580 + (long)local_30 * 8) =
           param_1 * *(double *)(param_5 + (long)local_2c * 0x2580 + (long)local_30 * 8);
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void print_array(void)

{
                    // WARNING: Subroutine does not return
  fprintf(_DAT_126358d48388b48,"==BEGIN DUMP_ARRAYS==\n");
}


