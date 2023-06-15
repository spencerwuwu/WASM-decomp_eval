
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <polybench.h>
#include "ghidra_base.h"
#include "ludcmp.h"
void kernel_ludcmp(int param_1,long param_2,long param_3,long param_4,long param_5)

{
  double local_48;
  int local_3c;
  int local_38;
  int local_34;
  
  for (local_34 = 0; local_34 < param_1; local_34 = local_34 + 1) {
    for (local_38 = 0; local_38 < local_34; local_38 = local_38 + 1) {
      local_48 = *(double *)(param_2 + (long)local_34 * 16000 + (long)local_38 * 8);
      for (local_3c = 0; local_3c < local_38; local_3c = local_3c + 1) {
        local_48 = (double)(*(ulong *)(param_2 + (long)local_34 * 16000 + (long)local_3c * 8) ^
                           0x8000000000000000) *
                   *(double *)(param_2 + (long)local_3c * 16000 + (long)local_38 * 8) + local_48;
      }
      *(double *)(param_2 + (long)local_34 * 16000 + (long)local_38 * 8) =
           local_48 / *(double *)(param_2 + (long)local_38 * 16000 + (long)local_38 * 8);
    }
    for (local_38 = local_34; local_38 < param_1; local_38 = local_38 + 1) {
      local_48 = *(double *)(param_2 + (long)local_34 * 16000 + (long)local_38 * 8);
      for (local_3c = 0; local_3c < local_34; local_3c = local_3c + 1) {
        local_48 = (double)(*(ulong *)(param_2 + (long)local_34 * 16000 + (long)local_3c * 8) ^
                           0x8000000000000000) *
                   *(double *)(param_2 + (long)local_3c * 16000 + (long)local_38 * 8) + local_48;
      }
      *(double *)(param_2 + (long)local_34 * 16000 + (long)local_38 * 8) = local_48;
    }
  }
  for (local_34 = 0; local_34 < param_1; local_34 = local_34 + 1) {
    local_48 = *(double *)(param_3 + (long)local_34 * 8);
    for (local_38 = 0; local_38 < local_34; local_38 = local_38 + 1) {
      local_48 = (double)(*(ulong *)(param_2 + (long)local_34 * 16000 + (long)local_38 * 8) ^
                         0x8000000000000000) * *(double *)(param_5 + (long)local_38 * 8) + local_48;
    }
    *(double *)(param_5 + (long)local_34 * 8) = local_48;
  }
  for (local_34 = param_1 + -1; -1 < local_34; local_34 = local_34 + -1) {
    local_48 = *(double *)(param_5 + (long)local_34 * 8);
    local_38 = local_34;
    while (local_38 = local_38 + 1, local_38 < param_1) {
      local_48 = (double)(*(ulong *)(param_2 + (long)local_34 * 16000 + (long)local_38 * 8) ^
                         0x8000000000000000) * *(double *)(param_4 + (long)local_38 * 8) + local_48;
    }
    *(double *)(param_4 + (long)local_34 * 8) =
         local_48 / *(double *)(param_2 + (long)local_34 * 16000 + (long)local_34 * 8);
  }
  return;
}
