
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <polybench.h>
#include "ghidra_base.h"
#include "trisolv.h"
void kernel_trisolv(int param_1,long param_2,long param_3,long param_4)

{
  int local_30;
  int local_2c;
  
  for (local_2c = 0; local_2c < param_1; local_2c = local_2c + 1) {
    *(int8 *)(param_3 + (long)local_2c * 8) = *(int8 *)(param_4 + (long)local_2c * 8);
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
