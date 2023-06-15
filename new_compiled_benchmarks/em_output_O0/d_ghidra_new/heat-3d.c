
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <polybench.h>
#include "ghidra_base.h"
#include "heat-3d.h"
void kernel_heat_3d(int8 param_1,int param_2,long param_3,long param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  
  for (local_24 = 1; local_24 < 0x1f5; local_24 = local_24 + 1) {
    for (local_28 = 1; local_28 < param_2 + -1; local_28 = local_28 + 1) {
      for (local_2c = 1; local_2c < param_2 + -1; local_2c = local_2c + 1) {
        for (local_30 = 1; local_30 < param_2 + -1; local_30 = local_30 + 1) {
          dVar1 = *(double *)
                   (param_3 + (long)local_28 * 0x1c200 + (long)local_2c * 0x3c0 + (long)local_30 * 8
                   );
          dVar2 = *(double *)
                   (param_3 + (long)local_28 * 0x1c200 + (long)local_2c * 0x3c0 + (long)local_30 * 8
                   );
          dVar3 = *(double *)
                   (param_3 + (long)local_28 * 0x1c200 + (long)local_2c * 0x3c0 + (long)local_30 * 8
                   );
          *(double *)
           (param_4 + (long)local_28 * 0x1c200 + (long)local_2c * 0x3c0 + (long)local_30 * 8) =
               ((*(double *)
                  (param_3 + (long)local_28 * 0x1c200 + (long)local_2c * 0x3c0 +
                  (long)(local_30 + 1) * 8) - (dVar3 + dVar3)) +
               *(double *)
                (param_3 + (long)local_28 * 0x1c200 + (long)local_2c * 0x3c0 +
                (long)(local_30 + -1) * 8)) * 0.125 +
               ((*(double *)
                  (param_3 + (long)(local_28 + 1) * 0x1c200 + (long)local_2c * 0x3c0 +
                  (long)local_30 * 8) - (dVar1 + dVar1)) +
               *(double *)
                (param_3 + (long)(local_28 + -1) * 0x1c200 + (long)local_2c * 0x3c0 +
                (long)local_30 * 8)) * 0.125 +
               ((*(double *)
                  (param_3 + (long)local_28 * 0x1c200 + (long)(local_2c + 1) * 0x3c0 +
                  (long)local_30 * 8) - (dVar2 + dVar2)) +
               *(double *)
                (param_3 + (long)local_28 * 0x1c200 + (long)(local_2c + -1) * 0x3c0 +
                (long)local_30 * 8)) * 0.125 +
               *(double *)
                (param_3 + (long)local_28 * 0x1c200 + (long)local_2c * 0x3c0 + (long)local_30 * 8);
        }
      }
    }
    for (local_28 = 1; local_28 < param_2 + -1; local_28 = local_28 + 1) {
      for (local_2c = 1; local_2c < param_2 + -1; local_2c = local_2c + 1) {
        for (local_30 = 1; local_30 < param_2 + -1; local_30 = local_30 + 1) {
          dVar1 = *(double *)
                   (param_4 + (long)local_28 * 0x1c200 + (long)local_2c * 0x3c0 + (long)local_30 * 8
                   );
          dVar2 = *(double *)
                   (param_4 + (long)local_28 * 0x1c200 + (long)local_2c * 0x3c0 + (long)local_30 * 8
                   );
          dVar3 = *(double *)
                   (param_4 + (long)local_28 * 0x1c200 + (long)local_2c * 0x3c0 + (long)local_30 * 8
                   );
          *(double *)
           (param_3 + (long)local_28 * 0x1c200 + (long)local_2c * 0x3c0 + (long)local_30 * 8) =
               ((*(double *)
                  (param_4 + (long)local_28 * 0x1c200 + (long)local_2c * 0x3c0 +
                  (long)(local_30 + 1) * 8) - (dVar3 + dVar3)) +
               *(double *)
                (param_4 + (long)local_28 * 0x1c200 + (long)local_2c * 0x3c0 +
                (long)(local_30 + -1) * 8)) * 0.125 +
               ((*(double *)
                  (param_4 + (long)(local_28 + 1) * 0x1c200 + (long)local_2c * 0x3c0 +
                  (long)local_30 * 8) - (dVar1 + dVar1)) +
               *(double *)
                (param_4 + (long)(local_28 + -1) * 0x1c200 + (long)local_2c * 0x3c0 +
                (long)local_30 * 8)) * 0.125 +
               ((*(double *)
                  (param_4 + (long)local_28 * 0x1c200 + (long)(local_2c + 1) * 0x3c0 +
                  (long)local_30 * 8) - (dVar2 + dVar2)) +
               *(double *)
                (param_4 + (long)local_28 * 0x1c200 + (long)(local_2c + -1) * 0x3c0 +
                (long)local_30 * 8)) * 0.125 +
               *(double *)
                (param_4 + (long)local_28 * 0x1c200 + (long)local_2c * 0x3c0 + (long)local_30 * 8);
        }
      }
    }
  }
  return;
}
