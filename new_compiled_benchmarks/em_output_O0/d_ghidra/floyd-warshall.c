#include "floyd-warshall.h"



void kernel_floyd_warshall(int param_1,long param_2)

{
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  
  for (local_24 = 0; local_24 < param_1; local_24 = local_24 + 1) {
    for (local_1c = 0; local_1c < param_1; local_1c = local_1c + 1) {
      for (local_20 = 0; local_20 < param_1; local_20 = local_20 + 1) {
        if (*(int *)(param_2 + (long)local_1c * 0x2bc0 + (long)local_20 * 4) <
            *(int *)(param_2 + (long)local_1c * 0x2bc0 + (long)local_24 * 4) +
            *(int *)(param_2 + (long)local_24 * 0x2bc0 + (long)local_20 * 4)) {
          local_28 = *(int *)(param_2 + (long)local_1c * 0x2bc0 + (long)local_20 * 4);
        }
        else {
          local_28 = *(int *)(param_2 + (long)local_1c * 0x2bc0 + (long)local_24 * 4) +
                     *(int *)(param_2 + (long)local_24 * 0x2bc0 + (long)local_20 * 4);
        }
        *(int *)(param_2 + (long)local_1c * 0x2bc0 + (long)local_20 * 4) = local_28;
      }
    }
  }
  return;
}



undefined8 submain(int param_1,char **param_2)

{
  int iVar1;
  void *__ptr;
  
  __ptr = (void *)polybench_alloc_data(0x77a100,4);
  init_array(0xaf0,__ptr);
  kernel_floyd_warshall(0xaf0,__ptr);
  if (0x2a < param_1) {
    iVar1 = strcmp(*param_2,"");
    if (iVar1 == 0) {
      print_array(0xaf0,__ptr);
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
      *(int *)(param_2 + (long)local_1c * 0x2bc0 + (long)local_20 * 4) =
           (local_1c * local_20) % 7 + 1;
      if ((((local_1c + local_20) % 0xd == 0) || ((local_1c + local_20) % 7 == 0)) ||
         ((local_1c + local_20) % 0xb == 0)) {
        *(undefined4 *)(param_2 + (long)local_1c * 0x2bc0 + (long)local_20 * 4) = 999;
      }
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void print_array(void)

{
                    // WARNING: Subroutine does not return
  fprintf(_DAT_10f358d48388b48,"==BEGIN DUMP_ARRAYS==\n");
}


