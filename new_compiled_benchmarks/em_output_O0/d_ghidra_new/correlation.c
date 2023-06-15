
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <polybench.h>
#include "ghidra_base.h"
#include "correlation.h"
void kernel_correlation(double param_1,int param_2,int param_3,long param_4,long param_5,
                       long param_6,long param_7)

{
  long lVar1;
  double dVar2;
  int8 local_58;
  int local_44;
  int local_40;
  int local_3c;
  
  for (local_40 = 0; local_40 < param_2; local_40 = local_40 + 1) {
    *(int8 *)(param_6 + (long)local_40 * 8) = 0;
    for (local_3c = 0; local_3c < param_3; local_3c = local_3c + 1) {
      *(double *)(param_6 + (long)local_40 * 8) =
           *(double *)(param_4 + (long)local_3c * 0x2580 + (long)local_40 * 8) +
           *(double *)(param_6 + (long)local_40 * 8);
    }
    *(double *)(param_6 + (long)local_40 * 8) = *(double *)(param_6 + (long)local_40 * 8) / param_1;
  }
  for (local_40 = 0; local_40 < param_2; local_40 = local_40 + 1) {
    *(int8 *)(param_7 + (long)local_40 * 8) = 0;
    for (local_3c = 0; local_3c < param_3; local_3c = local_3c + 1) {
      *(double *)(param_7 + (long)local_40 * 8) =
           (*(double *)(param_4 + (long)local_3c * 0x2580 + (long)local_40 * 8) -
           *(double *)(param_6 + (long)local_40 * 8)) *
           (*(double *)(param_4 + (long)local_3c * 0x2580 + (long)local_40 * 8) -
           *(double *)(param_6 + (long)local_40 * 8)) + *(double *)(param_7 + (long)local_40 * 8);
    }
    *(double *)(param_7 + (long)local_40 * 8) = *(double *)(param_7 + (long)local_40 * 8) / param_1;
    dVar2 = sqrt(*(double *)(param_7 + (long)local_40 * 8));
    *(double *)(param_7 + (long)local_40 * 8) = dVar2;
    if (0.1 < *(double *)(param_7 + (long)local_40 * 8)) {
      local_58 = *(int8 *)(param_7 + (long)local_40 * 8);
    }
    else {
      local_58 = 0x3ff0000000000000;
    }
    *(int8 *)(param_7 + (long)local_40 * 8) = local_58;
  }
  for (local_3c = 0; local_3c < param_3; local_3c = local_3c + 1) {
    for (local_40 = 0; local_40 < param_2; local_40 = local_40 + 1) {
      lVar1 = param_4 + (long)local_3c * 0x2580;
      *(double *)(lVar1 + (long)local_40 * 8) =
           *(double *)(lVar1 + (long)local_40 * 8) - *(double *)(param_6 + (long)local_40 * 8);
      dVar2 = sqrt(param_1);
      lVar1 = param_4 + (long)local_3c * 0x2580;
      *(double *)(lVar1 + (long)local_40 * 8) =
           *(double *)(lVar1 + (long)local_40 * 8) /
           (dVar2 * *(double *)(param_7 + (long)local_40 * 8));
    }
  }
  for (local_3c = 0; local_3c < param_2 + -1; local_3c = local_3c + 1) {
    *(int8 *)(param_5 + (long)local_3c * 0x2580 + (long)local_3c * 8) = 0x3ff0000000000000;
    local_40 = local_3c;
    while (local_40 = local_40 + 1, local_40 < param_2) {
      *(int8 *)(param_5 + (long)local_3c * 0x2580 + (long)local_40 * 8) = 0;
      for (local_44 = 0; local_44 < param_3; local_44 = local_44 + 1) {
        lVar1 = param_5 + (long)local_3c * 0x2580;
        *(double *)(lVar1 + (long)local_40 * 8) =
             *(double *)(param_4 + (long)local_44 * 0x2580 + (long)local_3c * 8) *
             *(double *)(param_4 + (long)local_44 * 0x2580 + (long)local_40 * 8) +
             *(double *)(lVar1 + (long)local_40 * 8);
      }
      *(int8 *)(param_5 + (long)local_40 * 0x2580 + (long)local_3c * 8) =
           *(int8 *)(param_5 + (long)local_3c * 0x2580 + (long)local_40 * 8);
    }
  }
  *(int8 *)(param_5 + (long)(param_2 + -1) * 0x2580 + (long)(param_2 + -1) * 8) =
       0x3ff0000000000000;
  return;
}
