
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <polybench.h>
#include "ghidra_base.h"
#include "jacobi-2d.h"
void kernel_jacobi_2d(int param_1,int param_2,long param_3,long param_4)

{
  int local_2c;
  int local_28;
  int local_24;
  
  for (local_24 = 0; local_24 < param_1; local_24 = local_24 + 1) {
    for (local_28 = 1; local_28 < param_2 + -1; local_28 = local_28 + 1) {
      for (local_2c = 1; local_2c < param_2 + -1; local_2c = local_2c + 1) {
        *(double *)(param_4 + (long)local_28 * 0x28a0 + (long)local_2c * 8) =
             (*(double *)(param_3 + (long)local_28 * 0x28a0 + (long)local_2c * 8) +
              *(double *)(param_3 + (long)local_28 * 0x28a0 + (long)(local_2c + -1) * 8) +
              *(double *)(param_3 + (long)local_28 * 0x28a0 + (long)(local_2c + 1) * 8) +
              *(double *)(param_3 + (long)(local_28 + 1) * 0x28a0 + (long)local_2c * 8) +
             *(double *)(param_3 + (long)(local_28 + -1) * 0x28a0 + (long)local_2c * 8)) * 0.2;
      }
    }
    for (local_28 = 1; local_28 < param_2 + -1; local_28 = local_28 + 1) {
      for (local_2c = 1; local_2c < param_2 + -1; local_2c = local_2c + 1) {
        *(double *)(param_3 + (long)local_28 * 0x28a0 + (long)local_2c * 8) =
             (*(double *)(param_4 + (long)local_28 * 0x28a0 + (long)local_2c * 8) +
              *(double *)(param_4 + (long)local_28 * 0x28a0 + (long)(local_2c + -1) * 8) +
              *(double *)(param_4 + (long)local_28 * 0x28a0 + (long)(local_2c + 1) * 8) +
              *(double *)(param_4 + (long)(local_28 + 1) * 0x28a0 + (long)local_2c * 8) +
             *(double *)(param_4 + (long)(local_28 + -1) * 0x28a0 + (long)local_2c * 8)) * 0.2;
      }
    }
  }
  return;
}
