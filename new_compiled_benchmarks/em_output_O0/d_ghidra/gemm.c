#include "gemm.h"



void kernel_gemm(double param_1,double param_2,int param_3,int param_4,int param_5,long param_6,
                long param_7,long param_8)

{
  long lVar1;
  int local_4c;
  int local_48;
  int local_44;
  
  for (local_44 = 0; local_44 < param_3; local_44 = local_44 + 1) {
    for (local_48 = 0; local_48 < param_4; local_48 = local_48 + 1) {
      lVar1 = param_6 + (long)local_44 * 0x2260;
      *(double *)(lVar1 + (long)local_48 * 8) = param_2 * *(double *)(lVar1 + (long)local_48 * 8);
    }
    for (local_4c = 0; local_4c < param_5; local_4c = local_4c + 1) {
      for (local_48 = 0; local_48 < param_4; local_48 = local_48 + 1) {
        lVar1 = param_6 + (long)local_44 * 0x2260;
        *(double *)(lVar1 + (long)local_48 * 8) =
             param_1 * *(double *)(param_7 + (long)local_44 * 0x2580 + (long)local_4c * 8) *
             *(double *)(param_8 + (long)local_4c * 0x2260 + (long)local_48 * 8) +
             *(double *)(lVar1 + (long)local_48 * 8);
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
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  char **local_18;
  int local_c;
  
  local_1c = 1000;
  local_20 = 0x44c;
  local_24 = 0x4b0;
  local_18 = param_2;
  local_c = param_1;
  __ptr = (void *)polybench_alloc_data(1100000,8);
  __ptr_00 = (void *)polybench_alloc_data(1200000,8);
  __ptr_01 = (void *)polybench_alloc_data(0x142440,8);
  init_array(local_1c,local_20,local_24,&local_30,&local_38,__ptr,__ptr_00,__ptr_01);
  kernel_gemm(local_30,local_38,local_1c,local_20,local_24,__ptr,__ptr_00,__ptr_01);
  if (0x2a < local_c) {
    iVar1 = strcmp(*local_18,"");
    if (iVar1 == 0) {
      print_array(local_1c,local_20,__ptr);
    }
  }
  free(__ptr);
  free(__ptr_00);
  free(__ptr_01);
  return 0;
}



void init_array(int param_1,int param_2,int param_3,undefined8 *param_4,undefined8 *param_5,
               long param_6,long param_7,long param_8)

{
  int local_38;
  int local_34;
  
  *param_4 = 0x3ff8000000000000;
  *param_5 = 0x3ff3333333333333;
  for (local_34 = 0; local_34 < param_1; local_34 = local_34 + 1) {
    for (local_38 = 0; local_38 < param_2; local_38 = local_38 + 1) {
      *(double *)(param_6 + (long)local_34 * 0x2260 + (long)local_38 * 8) =
           (double)((local_34 * local_38 + 1) % param_1) / (double)param_1;
    }
  }
  for (local_34 = 0; local_34 < param_1; local_34 = local_34 + 1) {
    for (local_38 = 0; local_38 < param_3; local_38 = local_38 + 1) {
      *(double *)(param_7 + (long)local_34 * 0x2580 + (long)local_38 * 8) =
           (double)((local_34 * (local_38 + 1)) % param_3) / (double)param_3;
    }
  }
  for (local_34 = 0; local_34 < param_3; local_34 = local_34 + 1) {
    for (local_38 = 0; local_38 < param_2; local_38 = local_38 + 1) {
      *(double *)(param_8 + (long)local_34 * 0x2260 + (long)local_38 * 8) =
           (double)((local_34 * (local_38 + 2)) % param_2) / (double)param_2;
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


