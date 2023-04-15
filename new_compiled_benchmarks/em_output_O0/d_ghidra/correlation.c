#include "correlation.h"



void kernel_correlation(double param_1,int param_2,int param_3,long param_4,long param_5,
                       long param_6,long param_7)

{
  long lVar1;
  double dVar2;
  undefined8 local_58;
  int local_44;
  int local_40;
  int local_3c;
  
  for (local_40 = 0; local_40 < param_2; local_40 = local_40 + 1) {
    *(undefined8 *)(param_6 + (long)local_40 * 8) = 0;
    for (local_3c = 0; local_3c < param_3; local_3c = local_3c + 1) {
      *(double *)(param_6 + (long)local_40 * 8) =
           *(double *)(param_4 + (long)local_3c * 0x2580 + (long)local_40 * 8) +
           *(double *)(param_6 + (long)local_40 * 8);
    }
    *(double *)(param_6 + (long)local_40 * 8) = *(double *)(param_6 + (long)local_40 * 8) / param_1;
  }
  for (local_40 = 0; local_40 < param_2; local_40 = local_40 + 1) {
    *(undefined8 *)(param_7 + (long)local_40 * 8) = 0;
    for (local_3c = 0; local_3c < param_3; local_3c = local_3c + 1) {
      *(double *)(param_7 + (long)local_40 * 8) =
           (*(double *)(param_4 + (long)local_3c * 0x2580 + (long)local_40 * 8) -
           *(double *)(param_6 + (long)local_40 * 8)) *
           (*(double *)(param_4 + (long)local_3c * 0x2580 + (long)local_40 * 8) -
           *(double *)(param_6 + (long)local_40 * 8)) + *(double *)(param_7 + (long)local_40 * 8);
    }
    *(double *)(param_7 + (long)local_40 * 8) = *(double *)(param_7 + (long)local_40 * 8) / param_1;
    dVar2 = sqrt(*(double *)(param_7 + (long)local_40 * 8));
    *(double *)(param_7 + (long)local_40 * 8) = dVar2;
    if (0.1 < *(double *)(param_7 + (long)local_40 * 8)) {
      local_58 = *(undefined8 *)(param_7 + (long)local_40 * 8);
    }
    else {
      local_58 = 0x3ff0000000000000;
    }
    *(undefined8 *)(param_7 + (long)local_40 * 8) = local_58;
  }
  for (local_3c = 0; local_3c < param_3; local_3c = local_3c + 1) {
    for (local_40 = 0; local_40 < param_2; local_40 = local_40 + 1) {
      lVar1 = param_4 + (long)local_3c * 0x2580;
      *(double *)(lVar1 + (long)local_40 * 8) =
           *(double *)(lVar1 + (long)local_40 * 8) - *(double *)(param_6 + (long)local_40 * 8);
      dVar2 = sqrt(param_1);
      lVar1 = param_4 + (long)local_3c * 0x2580;
      *(double *)(lVar1 + (long)local_40 * 8) =
           *(double *)(lVar1 + (long)local_40 * 8) /
           (dVar2 * *(double *)(param_7 + (long)local_40 * 8));
    }
  }
  for (local_3c = 0; local_3c < param_2 + -1; local_3c = local_3c + 1) {
    *(undefined8 *)(param_5 + (long)local_3c * 0x2580 + (long)local_3c * 8) = 0x3ff0000000000000;
    local_40 = local_3c;
    while (local_40 = local_40 + 1, local_40 < param_2) {
      *(undefined8 *)(param_5 + (long)local_3c * 0x2580 + (long)local_40 * 8) = 0;
      for (local_44 = 0; local_44 < param_3; local_44 = local_44 + 1) {
        lVar1 = param_5 + (long)local_3c * 0x2580;
        *(double *)(lVar1 + (long)local_40 * 8) =
             *(double *)(param_4 + (long)local_44 * 0x2580 + (long)local_3c * 8) *
             *(double *)(param_4 + (long)local_44 * 0x2580 + (long)local_40 * 8) +
             *(double *)(lVar1 + (long)local_40 * 8);
      }
      *(undefined8 *)(param_5 + (long)local_40 * 0x2580 + (long)local_3c * 8) =
           *(undefined8 *)(param_5 + (long)local_3c * 0x2580 + (long)local_40 * 8);
    }
  }
  *(undefined8 *)(param_5 + (long)(param_2 + -1) * 0x2580 + (long)(param_2 + -1) * 8) =
       0x3ff0000000000000;
  return;
}



undefined8 submain(int param_1,char **param_2)

{
  int iVar1;
  void *__ptr;
  void *__ptr_00;
  void *__ptr_01;
  void *__ptr_02;
  undefined8 local_28;
  undefined4 local_20;
  undefined4 local_1c;
  char **local_18;
  int local_c;
  
  local_1c = 0x578;
  local_20 = 0x4b0;
  local_18 = param_2;
  local_c = param_1;
  __ptr = (void *)polybench_alloc_data(0x19a280,8);
  __ptr_00 = (void *)polybench_alloc_data(0x15f900,8);
  __ptr_01 = (void *)polybench_alloc_data(0x4b0,8);
  __ptr_02 = (void *)polybench_alloc_data(0x4b0,8);
  init_array(local_20,local_1c,&local_28,__ptr);
  kernel_correlation(local_28,local_20,local_1c,__ptr,__ptr_00,__ptr_01,__ptr_02);
  if (0x2a < local_c) {
    iVar1 = strcmp(*local_18,"");
    if (iVar1 == 0) {
      print_array(local_20,__ptr_00);
    }
  }
  free(__ptr);
  free(__ptr_00);
  free(__ptr_01);
  free(__ptr_02);
  return 0;
}



void init_array(undefined8 param_1,undefined8 param_2,undefined8 *param_3,long param_4)

{
  int local_28;
  int local_24;
  
  *param_3 = 0x4095e00000000000;
  for (local_24 = 0; local_24 < 0x578; local_24 = local_24 + 1) {
    for (local_28 = 0; local_28 < 0x4b0; local_28 = local_28 + 1) {
      *(double *)(param_4 + (long)local_24 * 0x2580 + (long)local_28 * 8) =
           (double)(local_24 * local_28) / 1200.0 + (double)local_24;
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void print_array(void)

{
                    // WARNING: Subroutine does not return
  fprintf(_DAT_131358d48388b48,"==BEGIN DUMP_ARRAYS==\n");
}


