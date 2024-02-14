
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#include <polybench.h>
#include "ghidra_base.h"
#include "gramschmidt.h"
void kernel_gramschmidt(int param_1,int param_2,long param_3,long param_4,long param_5)

{
  long lVar1;
  double dVar2;
  double local_40;
  int local_34;
  int local_30;
  int local_2c;
  
  for (local_34 = 0; local_34 < param_2; local_34 = local_34 + 1) {
    local_40 = 0.0;
    for (local_2c = 0; local_2c < param_1; local_2c = local_2c + 1) {
      local_40 = *(double *)(param_3 + (long)local_2c * 0x2580 + (long)local_34 * 8) *
                 *(double *)(param_3 + (long)local_2c * 0x2580 + (long)local_34 * 8) + local_40;
    }
    dVar2 = sqrt(local_40);
    *(double *)(param_4 + (long)local_34 * 0x2580 + (long)local_34 * 8) = dVar2;
    for (local_2c = 0; local_30 = local_34, local_2c < param_1; local_2c = local_2c + 1) {
      *(double *)(param_5 + (long)local_2c * 0x2580 + (long)local_34 * 8) =
           *(double *)(param_3 + (long)local_2c * 0x2580 + (long)local_34 * 8) /
           *(double *)(param_4 + (long)local_34 * 0x2580 + (long)local_34 * 8);
    }
    while (local_30 = local_30 + 1, local_30 < param_2) {
      *(int8 *)(param_4 + (long)local_34 * 0x2580 + (long)local_30 * 8) = 0;
      for (local_2c = 0; local_2c < param_1; local_2c = local_2c + 1) {
        lVar1 = param_4 + (long)local_34 * 0x2580;
        *(double *)(lVar1 + (long)local_30 * 8) =
             *(double *)(param_5 + (long)local_2c * 0x2580 + (long)local_34 * 8) *
             *(double *)(param_3 + (long)local_2c * 0x2580 + (long)local_30 * 8) +
             *(double *)(lVar1 + (long)local_30 * 8);
      }
      for (local_2c = 0; local_2c < param_1; local_2c = local_2c + 1) {
        *(double *)(param_3 + (long)local_2c * 0x2580 + (long)local_30 * 8) =
             (double)(*(ulong *)(param_5 + (long)local_2c * 0x2580 + (long)local_34 * 8) ^
                     0x8000000000000000) *
             *(double *)(param_4 + (long)local_34 * 0x2580 + (long)local_30 * 8) +
             *(double *)(param_3 + (long)local_2c * 0x2580 + (long)local_30 * 8);
      }
    }
  }
  return;
}
