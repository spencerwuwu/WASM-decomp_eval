
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <polybench.h>
#include "ghidra_base.h"
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
