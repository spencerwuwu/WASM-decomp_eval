
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <polybench.h>
#include "ghidra_base.h"
#include "adi.h"
void kernel_adi(int param_1,int param_2,long param_3,long param_4,long param_5,long param_6)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  int local_3c;
  int local_38;
  int local_34;
  
  dVar1 = ((1.0 / (double)param_1) * 2.0) / ((1.0 / (double)param_2) * (1.0 / (double)param_2));
  dVar2 = ((1.0 / (double)param_1) * 1.0) / ((1.0 / (double)param_2) * (1.0 / (double)param_2));
  dVar3 = (double)((ulong)dVar1 ^ 0x8000000000000000) / 2.0;
  dVar1 = dVar1 + 1.0;
  dVar4 = (double)((ulong)dVar2 ^ 0x8000000000000000) / 2.0;
  dVar2 = dVar2 + 1.0;
  for (local_34 = 1; local_34 <= param_1; local_34 = local_34 + 1) {
    for (local_38 = 1; local_38 < param_2 + -1; local_38 = local_38 + 1) {
      *(int8 *)(param_4 + (long)local_38 * 8) = 0x3ff0000000000000;
      *(int8 *)(param_5 + (long)local_38 * 8000) = 0;
      *(int8 *)(param_6 + (long)local_38 * 8000) =
           *(int8 *)(param_4 + (long)local_38 * 8);
      for (local_3c = 1; local_3c < param_2 + -1; local_3c = local_3c + 1) {
        *(double *)(param_5 + (long)local_38 * 8000 + (long)local_3c * 8) =
             (double)((ulong)dVar3 ^ 0x8000000000000000) /
             (dVar3 * *(double *)(param_5 + (long)local_38 * 8000 + (long)(local_3c + -1) * 8) +
             dVar1);
        *(double *)(param_6 + (long)local_38 * 8000 + (long)local_3c * 8) =
             ((double)((ulong)dVar3 ^ 0x8000000000000000) *
              *(double *)(param_6 + (long)local_38 * 8000 + (long)(local_3c + -1) * 8) +
             (double)((ulong)dVar4 ^ 0x8000000000000000) *
             *(double *)(param_3 + (long)local_3c * 8000 + (long)(local_38 + 1) * 8) +
             (double)((ulong)dVar4 ^ 0x8000000000000000) *
             *(double *)(param_3 + (long)local_3c * 8000 + (long)(local_38 + -1) * 8) +
             (dVar4 + dVar4 + 1.0) *
             *(double *)(param_3 + (long)local_3c * 8000 + (long)local_38 * 8)) /
             (dVar3 * *(double *)(param_5 + (long)local_38 * 8000 + (long)(local_3c + -1) * 8) +
             dVar1);
      }
      *(int8 *)(param_4 + (long)(param_2 + -1) * 8000 + (long)local_38 * 8) =
           0x3ff0000000000000;
      for (local_3c = param_2 + -2; 0 < local_3c; local_3c = local_3c + -1) {
        *(double *)(param_4 + (long)local_3c * 8000 + (long)local_38 * 8) =
             *(double *)(param_5 + (long)local_38 * 8000 + (long)local_3c * 8) *
             *(double *)(param_4 + (long)(local_3c + 1) * 8000 + (long)local_38 * 8) +
             *(double *)(param_6 + (long)local_38 * 8000 + (long)local_3c * 8);
      }
    }
    for (local_38 = 1; local_38 < param_2 + -1; local_38 = local_38 + 1) {
      *(int8 *)(param_3 + (long)local_38 * 8000) = 0x3ff0000000000000;
      *(int8 *)(param_5 + (long)local_38 * 8000) = 0;
      *(int8 *)(param_6 + (long)local_38 * 8000) =
           *(int8 *)(param_3 + (long)local_38 * 8000);
      for (local_3c = 1; local_3c < param_2 + -1; local_3c = local_3c + 1) {
        *(double *)(param_5 + (long)local_38 * 8000 + (long)local_3c * 8) =
             (double)((ulong)dVar4 ^ 0x8000000000000000) /
             (dVar4 * *(double *)(param_5 + (long)local_38 * 8000 + (long)(local_3c + -1) * 8) +
             dVar2);
        *(double *)(param_6 + (long)local_38 * 8000 + (long)local_3c * 8) =
             ((double)((ulong)dVar4 ^ 0x8000000000000000) *
              *(double *)(param_6 + (long)local_38 * 8000 + (long)(local_3c + -1) * 8) +
             (double)((ulong)dVar3 ^ 0x8000000000000000) *
             *(double *)(param_4 + (long)(local_38 + 1) * 8000 + (long)local_3c * 8) +
             (double)((ulong)dVar3 ^ 0x8000000000000000) *
             *(double *)(param_4 + (long)(local_38 + -1) * 8000 + (long)local_3c * 8) +
             (dVar3 + dVar3 + 1.0) *
             *(double *)(param_4 + (long)local_38 * 8000 + (long)local_3c * 8)) /
             (dVar4 * *(double *)(param_5 + (long)local_38 * 8000 + (long)(local_3c + -1) * 8) +
             dVar2);
      }
      *(int8 *)(param_3 + (long)local_38 * 8000 + (long)(param_2 + -1) * 8) =
           0x3ff0000000000000;
      for (local_3c = param_2 + -2; 0 < local_3c; local_3c = local_3c + -1) {
        *(double *)(param_3 + (long)local_38 * 8000 + (long)local_3c * 8) =
             *(double *)(param_5 + (long)local_38 * 8000 + (long)local_3c * 8) *
             *(double *)(param_3 + (long)local_38 * 8000 + (long)(local_3c + 1) * 8) +
             *(double *)(param_6 + (long)local_38 * 8000 + (long)local_3c * 8);
      }
    }
  }
  return;
}
