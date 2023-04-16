#include "seidel-2d.h"



void kernel_seidel_2d(int param_1,int param_2,long param_3)

{
  int local_24;
  int local_20;
  int local_1c;
  
  for (local_1c = 0; local_1c <= param_1 + -1; local_1c = local_1c + 1) {
    for (local_20 = 1; local_20 <= param_2 + -2; local_20 = local_20 + 1) {
      for (local_24 = 1; local_24 <= param_2 + -2; local_24 = local_24 + 1) {
        *(double *)(param_3 + (long)local_20 * 16000 + (long)local_24 * 8) =
             (*(double *)(param_3 + (long)(local_20 + -1) * 16000 + (long)(local_24 + -1) * 8) +
              *(double *)(param_3 + (long)(local_20 + -1) * 16000 + (long)local_24 * 8) +
              *(double *)(param_3 + (long)(local_20 + -1) * 16000 + (long)(local_24 + 1) * 8) +
              *(double *)(param_3 + (long)local_20 * 16000 + (long)(local_24 + -1) * 8) +
              *(double *)(param_3 + (long)local_20 * 16000 + (long)local_24 * 8) +
              *(double *)(param_3 + (long)local_20 * 16000 + (long)(local_24 + 1) * 8) +
              *(double *)(param_3 + (long)(local_20 + 1) * 16000 + (long)(local_24 + -1) * 8) +
              *(double *)(param_3 + (long)(local_20 + 1) * 16000 + (long)local_24 * 8) +
             *(double *)(param_3 + (long)(local_20 + 1) * 16000 + (long)(local_24 + 1) * 8)) / 9.0;
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
  kernel_seidel_2d(500,2000,__ptr);
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
  int local_20;
  int local_1c;
  
  for (local_1c = 0; local_1c < param_1; local_1c = local_1c + 1) {
    for (local_20 = 0; local_20 < param_1; local_20 = local_20 + 1) {
      *(double *)(param_2 + (long)local_1c * 16000 + (long)local_20 * 8) =
           ((double)local_1c * (double)(local_20 + 2) + 2.0) / (double)param_1;
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


