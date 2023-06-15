
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <polybench.h>
#include "ghidra_base.h"
#include "PL_3mm.h"
void kernel_3mm(int param_1,int param_2,int param_3,int param_4,int param_5,long param_6,
               long param_7,long param_8,long param_9,long param_10,long param_11,long param_12)

{
  long lVar1;
  int local_34;
  int local_30;
  int local_2c;
  
  for (local_2c = 0; local_2c < param_1; local_2c = local_2c + 1) {
    for (local_30 = 0; local_30 < param_2; local_30 = local_30 + 1) {
      *(int8 *)(param_6 + (long)local_2c * 0x1c20 + (long)local_30 * 8) = 0;
      for (local_34 = 0; local_34 < param_3; local_34 = local_34 + 1) {
        lVar1 = param_6 + (long)local_2c * 0x1c20;
        *(double *)(lVar1 + (long)local_30 * 8) =
             *(double *)(param_7 + (long)local_2c * 8000 + (long)local_34 * 8) *
             *(double *)(param_8 + (long)local_34 * 0x1c20 + (long)local_30 * 8) +
             *(double *)(lVar1 + (long)local_30 * 8);
      }
    }
  }
  for (local_2c = 0; local_2c < param_2; local_2c = local_2c + 1) {
    for (local_30 = 0; local_30 < param_4; local_30 = local_30 + 1) {
      *(int8 *)(param_9 + (long)local_2c * 0x2260 + (long)local_30 * 8) = 0;
      for (local_34 = 0; local_34 < param_5; local_34 = local_34 + 1) {
        lVar1 = param_9 + (long)local_2c * 0x2260;
        *(double *)(lVar1 + (long)local_30 * 8) =
             *(double *)(param_10 + (long)local_2c * 0x2580 + (long)local_34 * 8) *
             *(double *)(param_11 + (long)local_34 * 0x2260 + (long)local_30 * 8) +
             *(double *)(lVar1 + (long)local_30 * 8);
      }
    }
  }
  for (local_2c = 0; local_2c < param_1; local_2c = local_2c + 1) {
    for (local_30 = 0; local_30 < param_4; local_30 = local_30 + 1) {
      *(int8 *)(param_12 + (long)local_2c * 0x2260 + (long)local_30 * 8) = 0;
      for (local_34 = 0; local_34 < param_2; local_34 = local_34 + 1) {
        lVar1 = param_12 + (long)local_2c * 0x2260;
        *(double *)(lVar1 + (long)local_30 * 8) =
             *(double *)(param_6 + (long)local_2c * 0x1c20 + (long)local_34 * 8) *
             *(double *)(param_9 + (long)local_34 * 0x2260 + (long)local_30 * 8) +
             *(double *)(lVar1 + (long)local_30 * 8);
      }
    }
  }
  return;
}
