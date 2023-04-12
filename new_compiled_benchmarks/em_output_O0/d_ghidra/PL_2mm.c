#include "PL_2mm.h"



undefined8 submain(int param_1,char **param_2)

{
  int iVar1;
  void *__ptr;
  void *__ptr_00;
  void *__ptr_01;
  void *__ptr_02;
  void *__ptr_03;
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  char **local_20;
  int local_14;
  
  local_24 = 800;
  local_28 = 900;
  local_2c = 0x44c;
  local_30 = 0x4b0;
  local_20 = param_2;
  local_14 = param_1;
  __ptr = (void *)polybench_alloc_data(720000,8);
  __ptr_00 = (void *)polybench_alloc_data(880000,8);
  __ptr_01 = (void *)polybench_alloc_data(990000,8);
  __ptr_02 = (void *)polybench_alloc_data(0x107ac0,8);
  __ptr_03 = (void *)polybench_alloc_data(960000,8);
  init_array(local_24,local_28,local_2c,local_30,&local_38,&local_40,__ptr_00,__ptr_01,__ptr_02,
             __ptr_03);
  kernel_2mm(local_38,local_40,local_24,local_28,local_2c,local_30,__ptr,__ptr_00,__ptr_01,__ptr_02,
             __ptr_03);
  if (0x2a < local_14) {
    iVar1 = strcmp(*local_20,"");
    if (iVar1 == 0) {
      print_array(local_24,local_30,__ptr_03);
    }
  }
  free(__ptr);
  free(__ptr_00);
  free(__ptr_01);
  free(__ptr_02);
  free(__ptr_03);
  return 0;
}



void init_array(int param_1,int param_2,int param_3,int param_4,undefined8 *param_5,
               undefined8 *param_6,long param_7,long param_8,long param_9,long param_10)

{
  int local_30;
  int local_2c;
  
  *param_5 = 0x3ff8000000000000;
  *param_6 = 0x3ff3333333333333;
  for (local_2c = 0; local_2c < param_1; local_2c = local_2c + 1) {
    for (local_30 = 0; local_30 < param_3; local_30 = local_30 + 1) {
      *(double *)(param_7 + (long)local_2c * 0x2260 + (long)local_30 * 8) =
           (double)((local_2c * local_30 + 1) % param_1) / (double)param_1;
    }
  }
  for (local_2c = 0; local_2c < param_3; local_2c = local_2c + 1) {
    for (local_30 = 0; local_30 < param_2; local_30 = local_30 + 1) {
      *(double *)(param_8 + (long)local_2c * 0x1c20 + (long)local_30 * 8) =
           (double)((local_2c * (local_30 + 1)) % param_2) / (double)param_2;
    }
  }
  for (local_2c = 0; local_2c < param_2; local_2c = local_2c + 1) {
    for (local_30 = 0; local_30 < param_4; local_30 = local_30 + 1) {
      *(double *)(param_9 + (long)local_2c * 0x2580 + (long)local_30 * 8) =
           (double)((local_2c * (local_30 + 3) + 1) % param_4) / (double)param_4;
    }
  }
  for (local_2c = 0; local_2c < param_1; local_2c = local_2c + 1) {
    for (local_30 = 0; local_30 < param_4; local_30 = local_30 + 1) {
      *(double *)(param_10 + (long)local_2c * 0x2580 + (long)local_30 * 8) =
           (double)((local_2c * (local_30 + 2)) % param_3) / (double)param_3;
    }
  }
  return;
}



void kernel_2mm(double param_1,double param_2,int param_3,int param_4,int param_5,int param_6,
               long param_7_00,long param_8_00,long param_7,long param_8,long param_9)

{
  long lVar1;
  int local_44;
  int local_40;
  int local_3c;
  
  for (local_3c = 0; local_3c < param_3; local_3c = local_3c + 1) {
    for (local_40 = 0; local_40 < param_4; local_40 = local_40 + 1) {
      *(undefined8 *)(param_7_00 + (long)local_3c * 0x1c20 + (long)local_40 * 8) = 0;
      for (local_44 = 0; local_44 < param_5; local_44 = local_44 + 1) {
        lVar1 = param_7_00 + (long)local_3c * 0x1c20;
        *(double *)(lVar1 + (long)local_40 * 8) =
             param_1 * *(double *)(param_8_00 + (long)local_3c * 0x2260 + (long)local_44 * 8) *
             *(double *)(param_7 + (long)local_44 * 0x1c20 + (long)local_40 * 8) +
             *(double *)(lVar1 + (long)local_40 * 8);
      }
    }
  }
  for (local_3c = 0; local_3c < param_3; local_3c = local_3c + 1) {
    for (local_40 = 0; local_40 < param_6; local_40 = local_40 + 1) {
      lVar1 = param_9 + (long)local_3c * 0x2580;
      *(double *)(lVar1 + (long)local_40 * 8) = param_2 * *(double *)(lVar1 + (long)local_40 * 8);
      for (local_44 = 0; local_44 < param_4; local_44 = local_44 + 1) {
        lVar1 = param_9 + (long)local_3c * 0x2580;
        *(double *)(lVar1 + (long)local_40 * 8) =
             *(double *)(param_7_00 + (long)local_3c * 0x1c20 + (long)local_44 * 8) *
             *(double *)(param_8 + (long)local_44 * 0x2580 + (long)local_40 * 8) +
             *(double *)(lVar1 + (long)local_40 * 8);
      }
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


