
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <polybench.h>
#include "ghidra_base.h"
#include "nussinov.h"
void kernel_nussinov(int param_1,long param_2,long param_3)

{
  int iVar1;
  int iVar2;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  
  for (local_24 = param_1 + -1; iVar1 = local_24, -1 < local_24; local_24 = local_24 + -1) {
    while (local_28 = iVar1 + 1, local_28 < param_1) {
      if (-1 < iVar1) {
        if (*(int *)(param_3 + (long)local_24 * 10000 + (long)local_28 * 4) <
            *(int *)(param_3 + (long)local_24 * 10000 + (long)iVar1 * 4)) {
          local_30 = *(int *)(param_3 + (long)local_24 * 10000 + (long)iVar1 * 4);
        }
        else {
          local_30 = *(int *)(param_3 + (long)local_24 * 10000 + (long)local_28 * 4);
        }
        *(int *)(param_3 + (long)local_24 * 10000 + (long)local_28 * 4) = local_30;
      }
      if (local_24 + 1 < param_1) {
        if (*(int *)(param_3 + (long)local_24 * 10000 + (long)local_28 * 4) <
            *(int *)(param_3 + (long)(local_24 + 1) * 10000 + (long)local_28 * 4)) {
          local_34 = *(int *)(param_3 + (long)(local_24 + 1) * 10000 + (long)local_28 * 4);
        }
        else {
          local_34 = *(int *)(param_3 + (long)local_24 * 10000 + (long)local_28 * 4);
        }
        *(int *)(param_3 + (long)local_24 * 10000 + (long)local_28 * 4) = local_34;
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
            local_3c = *(int *)(param_3 + (long)(local_24 + 1) * 10000 + (long)iVar1 * 4);
          }
          else {
            local_3c = *(int *)(param_3 + (long)local_24 * 10000 + (long)local_28 * 4);
          }
          *(int *)(param_3 + (long)local_24 * 10000 + (long)local_28 * 4) = local_3c;
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
