#include "syrk.h"



undefined8 submain(int param_1,char **param_2)

{
  int iVar1;
  void *__ptr;
  void *__ptr_00;
  undefined8 local_30;
  undefined8 local_28;
  undefined4 local_20;
  undefined4 local_1c;
  char **local_18;
  int local_c;
  
  local_1c = 0x4b0;
  local_20 = 1000;
  local_18 = param_2;
  local_c = param_1;
  __ptr = (void *)polybench_alloc_data(0x15f900,8);
  __ptr_00 = (void *)polybench_alloc_data(1200000,8);
  init_array(local_1c,local_20,&local_28,&local_30,__ptr,__ptr_00);
  kernel_syrk(local_28,local_30,local_1c,local_20,__ptr,__ptr_00);
  if (0x2a < local_c) {
    iVar1 = strcmp(*local_18,"");
    if (iVar1 == 0) {
      print_array(local_1c,__ptr);
    }
  }
  free(__ptr);
  free(__ptr_00);
  return 0;
}



void init_array(int param_1,int param_2,undefined8 *param_3,undefined8 *param_4,long param_5,
               long param_6)

{
  int local_38;
  int local_34;
  
  *param_3 = 0x3ff8000000000000;
  *param_4 = 0x3ff3333333333333;
  for (local_34 = 0; local_34 < param_1; local_34 = local_34 + 1) {
    for (local_38 = 0; local_38 < param_2; local_38 = local_38 + 1) {
      *(double *)(param_6 + (long)local_34 * 8000 + (long)local_38 * 8) =
           (double)((local_34 * local_38 + 1) % param_1) / (double)param_1;
    }
  }
  for (local_34 = 0; local_34 < param_1; local_34 = local_34 + 1) {
    for (local_38 = 0; local_38 < param_1; local_38 = local_38 + 1) {
      *(double *)(param_5 + (long)local_34 * 0x2580 + (long)local_38 * 8) =
           (double)((local_34 * local_38 + 2) % param_2) / (double)param_2;
    }
  }
  return;
}



void kernel_syrk(double param_1,double param_2,int param_3,int param_4,long param_5,long param_6)

{
  long lVar1;
  int local_3c;
  int local_38;
  int local_34;
  
  for (local_34 = 0; local_34 < param_3; local_34 = local_34 + 1) {
    for (local_38 = 0; local_38 <= local_34; local_38 = local_38 + 1) {
      lVar1 = param_5 + (long)local_34 * 0x2580;
      *(double *)(lVar1 + (long)local_38 * 8) = param_2 * *(double *)(lVar1 + (long)local_38 * 8);
    }
    for (local_3c = 0; local_3c < param_4; local_3c = local_3c + 1) {
      for (local_38 = 0; local_38 <= local_34; local_38 = local_38 + 1) {
        lVar1 = param_5 + (long)local_34 * 0x2580;
        *(double *)(lVar1 + (long)local_38 * 8) =
             param_1 * *(double *)(param_6 + (long)local_34 * 8000 + (long)local_3c * 8) *
             *(double *)(param_6 + (long)local_38 * 8000 + (long)local_3c * 8) +
             *(double *)(lVar1 + (long)local_38 * 8);
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


