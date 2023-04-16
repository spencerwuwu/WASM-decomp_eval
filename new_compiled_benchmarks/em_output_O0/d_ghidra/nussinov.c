#include "nussinov.h"



void kernel_nussinov(int param_1,long param_2,long param_3)

{
  int iVar1;
  int iVar2;
  int local_40;
  undefined4 local_3c;
  int local_38;
  undefined4 local_34;
  undefined4 local_30;
  int local_2c;
  int local_28;
  int local_24;
  
  for (local_24 = param_1 + -1; iVar1 = local_24, -1 < local_24; local_24 = local_24 + -1) {
    while (local_28 = iVar1 + 1, local_28 < param_1) {
      if (-1 < iVar1) {
        if (*(int *)(param_3 + (long)local_24 * 10000 + (long)local_28 * 4) <
            *(int *)(param_3 + (long)local_24 * 10000 + (long)iVar1 * 4)) {
          local_30 = *(undefined4 *)(param_3 + (long)local_24 * 10000 + (long)iVar1 * 4);
        }
        else {
          local_30 = *(undefined4 *)(param_3 + (long)local_24 * 10000 + (long)local_28 * 4);
        }
        *(undefined4 *)(param_3 + (long)local_24 * 10000 + (long)local_28 * 4) = local_30;
      }
      if (local_24 + 1 < param_1) {
        if (*(int *)(param_3 + (long)local_24 * 10000 + (long)local_28 * 4) <
            *(int *)(param_3 + (long)(local_24 + 1) * 10000 + (long)local_28 * 4)) {
          local_34 = *(undefined4 *)(param_3 + (long)(local_24 + 1) * 10000 + (long)local_28 * 4);
        }
        else {
          local_34 = *(undefined4 *)(param_3 + (long)local_24 * 10000 + (long)local_28 * 4);
        }
        *(undefined4 *)(param_3 + (long)local_24 * 10000 + (long)local_28 * 4) = local_34;
      }
      iVar2 = local_24;
      if ((-1 < iVar1) && (local_24 + 1 < param_1)) {
        if (local_24 < iVar1) {
          if (*(int *)(param_3 + (long)local_24 * 10000 + (long)local_28 * 4) <
              (int)(*(int *)(param_3 + (long)(local_24 + 1) * 10000 + (long)iVar1 * 4) +
                   (uint)((int)*(char *)(param_2 + local_24) + (int)*(char *)(param_2 + local_28) ==
                         3))) {
            local_38 = *(int *)(param_3 + (long)(local_24 + 1) * 10000 + (long)iVar1 * 4) +
                       (uint)((int)*(char *)(param_2 + local_24) +
                              (int)*(char *)(param_2 + local_28) == 3);
          }
          else {
            local_38 = *(int *)(param_3 + (long)local_24 * 10000 + (long)local_28 * 4);
          }
          *(int *)(param_3 + (long)local_24 * 10000 + (long)local_28 * 4) = local_38;
        }
        else {
          if (*(int *)(param_3 + (long)local_24 * 10000 + (long)local_28 * 4) <
              *(int *)(param_3 + (long)(local_24 + 1) * 10000 + (long)iVar1 * 4)) {
            local_3c = *(undefined4 *)(param_3 + (long)(local_24 + 1) * 10000 + (long)iVar1 * 4);
          }
          else {
            local_3c = *(undefined4 *)(param_3 + (long)local_24 * 10000 + (long)local_28 * 4);
          }
          *(undefined4 *)(param_3 + (long)local_24 * 10000 + (long)local_28 * 4) = local_3c;
        }
      }
      while (local_2c = iVar2 + 1, iVar1 = local_28, local_2c < local_28) {
        if (*(int *)(param_3 + (long)local_24 * 10000 + (long)local_28 * 4) <
            *(int *)(param_3 + (long)local_24 * 10000 + (long)local_2c * 4) +
            *(int *)(param_3 + (long)(iVar2 + 2) * 10000 + (long)local_28 * 4)) {
          local_40 = *(int *)(param_3 + (long)local_24 * 10000 + (long)local_2c * 4) +
                     *(int *)(param_3 + (long)(iVar2 + 2) * 10000 + (long)local_28 * 4);
        }
        else {
          local_40 = *(int *)(param_3 + (long)local_24 * 10000 + (long)local_28 * 4);
        }
        *(int *)(param_3 + (long)local_24 * 10000 + (long)local_28 * 4) = local_40;
        iVar2 = local_2c;
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
  
  __ptr = (void *)polybench_alloc_data(0x9c4,1);
  __ptr_00 = (void *)polybench_alloc_data(0x5f5e10,4);
  init_array(0x9c4,__ptr,__ptr_00);
  kernel_nussinov(0x9c4,__ptr,__ptr_00);
  if (0x2a < param_1) {
    iVar1 = strcmp(*param_2,"");
    if (iVar1 == 0) {
      print_array(0x9c4,__ptr_00);
    }
  }
  free(__ptr);
  free(__ptr_00);
  return 0;
}



void init_array(int param_1,long param_2,long param_3)

{
  int local_28;
  int local_24;
  
  for (local_24 = 0; local_24 < param_1; local_24 = local_24 + 1) {
    *(char *)(param_2 + local_24) = (char)((local_24 + 1) % 4);
  }
  for (local_24 = 0; local_24 < param_1; local_24 = local_24 + 1) {
    for (local_28 = 0; local_28 < param_1; local_28 = local_28 + 1) {
      *(undefined4 *)(param_3 + (long)local_24 * 10000 + (long)local_28 * 4) = 0;
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void print_array(void)

{
                    // WARNING: Subroutine does not return
  fprintf(_DAT_110358d48388b48,"==BEGIN DUMP_ARRAYS==\n");
}


