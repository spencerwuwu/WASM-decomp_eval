#include "doitgen.h"



void kernel_doitgen(int param_1,int param_2,int param_3,long param_4,long param_5,long param_6)

{
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  
  for (local_34 = 0; local_34 < param_1; local_34 = local_34 + 1) {
    for (local_38 = 0; local_38 < param_2; local_38 = local_38 + 1) {
      for (local_3c = 0; local_3c < param_3; local_3c = local_3c + 1) {
        *(undefined8 *)(param_6 + (long)local_3c * 8) = 0;
        for (local_40 = 0; local_40 < param_3; local_40 = local_40 + 1) {
          *(double *)(param_6 + (long)local_3c * 8) =
               *(double *)
                (param_4 + (long)local_34 * 0x2bc00 + (long)local_38 * 0x500 + (long)local_40 * 8) *
               *(double *)(param_5 + (long)local_40 * 0x500 + (long)local_3c * 8) +
               *(double *)(param_6 + (long)local_3c * 8);
        }
      }
      for (local_3c = 0; local_3c < param_3; local_3c = local_3c + 1) {
        *(undefined8 *)
         (param_4 + (long)local_34 * 0x2bc00 + (long)local_38 * 0x500 + (long)local_3c * 8) =
             *(undefined8 *)(param_6 + (long)local_3c * 8);
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
  
  __ptr = (void *)polybench_alloc_data(0x334500,8);
  __ptr_00 = (void *)polybench_alloc_data(0xa0,8);
  __ptr_01 = (void *)polybench_alloc_data(0x6400,8);
  init_array(0x96,0x8c,0xa0,__ptr,__ptr_01);
  kernel_doitgen(0x96,0x8c,0xa0,__ptr,__ptr_01,__ptr_00);
  if (0x2a < param_1) {
    iVar1 = strcmp(*param_2,"");
    if (iVar1 == 0) {
      print_array(0x96,0x8c,0xa0,__ptr);
    }
  }
  free(__ptr);
  free(__ptr_00);
  free(__ptr_01);
  return 0;
}



void init_array(int param_1,int param_2,int param_3,long param_4,long param_5)

{
  int local_34;
  int local_30;
  int local_2c;
  
  for (local_2c = 0; local_2c < param_1; local_2c = local_2c + 1) {
    for (local_30 = 0; local_30 < param_2; local_30 = local_30 + 1) {
      for (local_34 = 0; local_34 < param_3; local_34 = local_34 + 1) {
        *(double *)
         (param_4 + (long)local_2c * 0x2bc00 + (long)local_30 * 0x500 + (long)local_34 * 8) =
             (double)((local_2c * local_30 + local_34) % param_3) / (double)param_3;
      }
    }
  }
  for (local_2c = 0; local_2c < param_3; local_2c = local_2c + 1) {
    for (local_30 = 0; local_30 < param_3; local_30 = local_30 + 1) {
      *(double *)(param_5 + (long)local_2c * 0x500 + (long)local_30 * 8) =
           (double)((local_2c * local_30) % param_3) / (double)param_3;
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void print_array(void)

{
                    // WARNING: Subroutine does not return
  fprintf(_DAT_152358d48388b48,"==BEGIN DUMP_ARRAYS==\n");
}


