
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <polybench.h>
#include "ghidra_base.h"
#include "jacobi-1d.h"
void kernel_jacobi_1d(int param_1,int param_2,long param_3,long param_4)

{
  int local_28;
  int local_24;
  
  for (local_24 = 0; local_24 < param_1; local_24 = local_24 + 1) {
    for (local_28 = 1; local_28 < param_2 + -1; local_28 = local_28 + 1) {
      *(double *)(param_4 + (long)local_28 * 8) =
           (*(double *)(param_3 + (long)(local_28 + -1) * 8) +
            *(double *)(param_3 + (long)local_28 * 8) +
           *(double *)(param_3 + (long)(local_28 + 1) * 8)) * 0.33333;
    }
    for (local_28 = 1; local_28 < param_2 + -1; local_28 = local_28 + 1) {
      *(double *)(param_3 + (long)local_28 * 8) =
           (*(double *)(param_4 + (long)(local_28 + -1) * 8) +
            *(double *)(param_4 + (long)local_28 * 8) +
           *(double *)(param_4 + (long)(local_28 + 1) * 8)) * 0.33333;
    }
  }
  return;
}
