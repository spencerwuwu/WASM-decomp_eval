
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <polybench.h>
#include "ghidra_base.h"
#include "seidel-2d.h"
void kernel_seidel_2d(int param_1,int param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  
  if (0 < param_1) {
    iVar4 = 0;
    do {
      if (2 < param_2) {
        uVar5 = 1;
        dVar8 = *param_3;
        do {
          uVar6 = uVar5 + 1;
          dVar1 = param_3[uVar5 * 2000];
          dVar10 = param_3[uVar5 * 2000 + 1];
          uVar7 = 1;
          dVar11 = param_3[uVar5 * 2000 + -1999];
          dVar12 = param_3[uVar5 * 2000 + 2000];
          dVar13 = param_3[uVar5 * 2000 + 0x7d1];
          dVar9 = dVar1;
          do {
            dVar2 = param_3[(uVar5 - 1) * 2000 + uVar7 + 1];
            dVar8 = dVar8 + dVar11 + dVar2 + dVar9 + dVar10;
            dVar10 = param_3[uVar5 * 2000 + uVar7 + 1];
            dVar3 = param_3[uVar6 * 2000 + uVar7 + 1];
            dVar9 = (dVar8 + dVar10 + dVar12 + dVar13 + dVar3) / 9.0;
            param_3[uVar5 * 2000 + uVar7] = dVar9;
            uVar7 = uVar7 + 1;
            dVar8 = dVar11;
            dVar11 = dVar2;
            dVar12 = dVar13;
            dVar13 = dVar3;
          } while (uVar7 != param_2 - 1);
          uVar5 = uVar6;
          dVar8 = dVar1;
        } while (uVar6 != param_2 - 1);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 != param_1);
  }
  return;
}
