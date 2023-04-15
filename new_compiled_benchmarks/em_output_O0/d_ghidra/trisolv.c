#include "trisolv.h"



void kernel_trisolv(int param_1,long param_2,long param_3,long param_4)

{
  int local_30;
  int local_2c;
  
  for (local_2c = 0; local_2c < param_1; local_2c = local_2c + 1) {
    *(undefined8 *)(param_3 + (long)local_2c * 8) = *(undefined8 *)(param_4 + (long)local_2c * 8);
    for (local_30 = 0; local_30 < local_2c; local_30 = local_30 + 1) {
      *(double *)(param_3 + (long)local_2c * 8) =
           (double)(*(ulong *)(param_2 + (long)local_2c * 16000 + (long)local_30 * 8) ^
                   0x8000000000000000) * *(double *)(param_3 + (long)local_30 * 8) +
           *(double *)(param_3 + (long)local_2c * 8);
    }
    *(double *)(param_3 + (long)local_2c * 8) =
         *(double *)(param_3 + (long)local_2c * 8) /
         *(double *)(param_2 + (long)local_2c * 16000 + (long)local_2c * 8);
  }
  return;
}



undefined8 submain(int param_1,char **param_2)

{
  int iVar1;
  void *__ptr;
  void *__ptr_00;
  void *__ptr_01;
  
  __ptr = (void *)polybench_alloc_data(4000000,8);
  __ptr_00 = (void *)polybench_alloc_data(2000,8);
  __ptr_01 = (void *)polybench_alloc_data(2000,8);
  init_array(2000,__ptr,__ptr_00,__ptr_01);
  kernel_trisolv(2000,__ptr,__ptr_00,__ptr_01);
  if (0x2a < param_1) {
    iVar1 = strcmp(*param_2,"");
    if (iVar1 == 0) {
      print_array(2000,__ptr_00);
    }
  }
  free(__ptr);
  free(__ptr_00);
  free(__ptr_01);
  return 0;
}



void init_array(int param_1,long param_2,long param_3,long param_4)

{
  int local_30;
  int local_2c;
  
  for (local_2c = 0; local_2c < param_1; local_2c = local_2c + 1) {
    *(undefined8 *)(param_3 + (long)local_2c * 8) = 0xc08f380000000000;
    *(double *)(param_4 + (long)local_2c * 8) = (double)local_2c;
    for (local_30 = 0; local_30 <= local_2c; local_30 = local_30 + 1) {
      *(double *)(param_2 + (long)local_2c * 16000 + (long)local_30 * 8) =
           ((double)(((local_2c + param_1) - local_30) + 1) * 2.0) / (double)param_1;
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void print_array(int param_1,long param_2)

{
  int local_1c;
  
  fprintf(_DAT_f1358d48388b48,"==BEGIN DUMP_ARRAYS==\n");
  fprintf(_DAT_f0358d48388b48,"begin dump: %s",&_L_str_3);
  for (local_1c = 0; local_1c < param_1; local_1c = local_1c + 1) {
    fprintf(_DAT_48f0458b48388b48,"%0.2lf ",*(undefined8 *)(param_2 + (long)local_1c * 8));
    if (local_1c % 0x14 == 0) {
      fprintf(_DAT_9e358d48388b48,(char *)&_L_str_5);
    }
  }
  fprintf(_DAT_75358d48388b48,"\nend   dump: %s\n",&_L_str_3);
  fprintf(_DAT_67358d48388b48,"==END   DUMP_ARRAYS==\n");
  return;
}


