
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <polybench.h>
#include "ghidra_base.h"
#include "atax.h"
void kernel_atax(int param_1,int param_2,long param_3,long param_4,long param_5,long param_6)

{
  int local_38;
  int local_34;
  
  for (local_34 = 0; local_34 < param_2; local_34 = local_34 + 1) {
    *(int8 *)(param_5 + (long)local_34 * 8) = 0;
  }
  for (local_34 = 0; local_34 < param_1; local_34 = local_34 + 1) {
    *(int8 *)(param_6 + (long)local_34 * 8) = 0;
    for (local_38 = 0; local_38 < param_2; local_38 = local_38 + 1) {
      *(double *)(param_6 + (long)local_34 * 8) =
           *(double *)(param_3 + (long)local_34 * 0x41a0 + (long)local_38 * 8) *
           *(double *)(param_4 + (long)local_38 * 8) + *(double *)(param_6 + (long)local_34 * 8);
    }
    for (local_38 = 0; local_38 < param_2; local_38 = local_38 + 1) {
      *(double *)(param_5 + (long)local_38 * 8) =
           *(double *)(param_3 + (long)local_34 * 0x41a0 + (long)local_38 * 8) *
           *(double *)(param_6 + (long)local_34 * 8) + *(double *)(param_5 + (long)local_38 * 8);
    }
  }
  return;
}
