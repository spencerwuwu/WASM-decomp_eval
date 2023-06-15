
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <polybench.h>
#include "ghidra_base.h"
#include "floyd-warshall.h"
void kernel_floyd_warshall(uint param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  int *piVar3;
  uint *puVar4;
  int *piVar5;
  uint *puVar6;
  int *piVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  ulong uVar20;
  ulong uVar21;
  int iVar22;
  int iVar23;
  long lVar24;
  long lVar25;
  ulong uVar26;
  ulong uVar27;
  ulong uVar28;
  int iVar29;
  ulong uVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  
  if (0 < (int)param_1) {
    uVar20 = (ulong)param_1;
    uVar21 = (ulong)(param_1 & 0xfffffff8);
    uVar28 = 0;
    lVar24 = uVar20 * 4 + param_2;
    do {
      uVar1 = param_2 + uVar28 * 0x2bc0;
      uVar30 = 0;
      do {
        lVar25 = uVar30 * 0x2bc0;
        uVar2 = param_2 + lVar25;
        piVar3 = (int *)(uVar2 + uVar28 * 4);
        if (param_1 < 0xc) {
LAB_0010009c:
          uVar26 = 0;
LAB_0010009e:
          uVar27 = uVar26;
          if ((param_1 & 1) != 0) {
            iVar29 = *(int *)(uVar1 + uVar26 * 4) + *piVar3;
            iVar23 = *(int *)(uVar2 + uVar26 * 4);
            if (iVar23 < iVar29) {
              iVar29 = iVar23;
            }
            *(int *)(uVar2 + uVar26 * 4) = iVar29;
            uVar27 = uVar26 | 1;
          }
          if (~uVar26 != -uVar20) {
            do {
              iVar22 = *(int *)(uVar1 + uVar27 * 4) + *piVar3;
              iVar23 = *(int *)(uVar2 + uVar27 * 4);
              iVar29 = *(int *)(uVar2 + 4 + uVar27 * 4);
              if (iVar23 < iVar22) {
                iVar22 = iVar23;
              }
              *(int *)(uVar2 + uVar27 * 4) = iVar22;
              iVar23 = *(int *)(uVar1 + 4 + uVar27 * 4) + *piVar3;
              if (iVar29 < iVar23) {
                iVar23 = iVar29;
              }
              *(int *)(uVar2 + 4 + uVar27 * 4) = iVar23;
              uVar27 = uVar27 + 2;
            } while (uVar27 != uVar20);
          }
        }
        else {
          uVar27 = lVar25 + lVar24;
          if (uVar2 < uVar28 * 4 + 4 + param_2 + lVar25 && param_2 + uVar28 * 4 + lVar25 < uVar27)
          goto LAB_0010009c;
          uVar26 = 0;
          if (uVar2 < uVar28 * 0x2bc0 + lVar24 && uVar1 < uVar27) goto LAB_0010009e;
          iVar23 = *piVar3;
          uVar27 = 0;
          do {
            puVar4 = (uint *)(uVar2 + uVar27 * 4);
            uVar8 = puVar4[1];
            uVar9 = puVar4[2];
            uVar10 = puVar4[3];
            puVar6 = (uint *)(uVar2 + 0x10 + uVar27 * 4);
            uVar11 = *puVar6;
            uVar12 = puVar6[1];
            uVar13 = puVar6[2];
            uVar14 = puVar6[3];
            piVar5 = (int *)(uVar1 + uVar27 * 4);
            iVar29 = piVar5[1];
            iVar22 = piVar5[2];
            iVar15 = piVar5[3];
            piVar7 = (int *)(uVar1 + 0x10 + uVar27 * 4);
            iVar16 = *piVar7;
            iVar17 = piVar7[1];
            iVar18 = piVar7[2];
            iVar19 = piVar7[3];
            uVar35 = -(uint)((int)*puVar4 < *piVar5 + iVar23);
            uVar36 = -(uint)((int)uVar8 < iVar29 + iVar23);
            uVar37 = -(uint)((int)uVar9 < iVar22 + iVar23);
            uVar38 = -(uint)((int)uVar10 < iVar15 + iVar23);
            uVar31 = -(uint)((int)uVar11 < iVar16 + iVar23);
            uVar32 = -(uint)((int)uVar12 < iVar17 + iVar23);
            uVar33 = -(uint)((int)uVar13 < iVar18 + iVar23);
            uVar34 = -(uint)((int)uVar14 < iVar19 + iVar23);
            puVar6 = (uint *)(uVar2 + uVar27 * 4);
            *puVar6 = ~uVar35 & *piVar5 + iVar23 | *puVar4 & uVar35;
            puVar6[1] = ~uVar36 & iVar29 + iVar23 | uVar8 & uVar36;
            puVar6[2] = ~uVar37 & iVar22 + iVar23 | uVar9 & uVar37;
            puVar6[3] = ~uVar38 & iVar15 + iVar23 | uVar10 & uVar38;
            puVar4 = (uint *)(uVar2 + 0x10 + uVar27 * 4);
            *puVar4 = ~uVar31 & iVar16 + iVar23 | uVar11 & uVar31;
            puVar4[1] = ~uVar32 & iVar17 + iVar23 | uVar12 & uVar32;
            puVar4[2] = ~uVar33 & iVar18 + iVar23 | uVar13 & uVar33;
            puVar4[3] = ~uVar34 & iVar19 + iVar23 | uVar14 & uVar34;
            uVar27 = uVar27 + 8;
          } while (uVar27 != uVar21);
          uVar26 = uVar21;
          if (uVar21 != uVar20) goto LAB_0010009e;
        }
        uVar30 = uVar30 + 1;
      } while (uVar30 != uVar20);
      uVar28 = uVar28 + 1;
    } while (uVar28 != uVar20);
  }
  return;
}
