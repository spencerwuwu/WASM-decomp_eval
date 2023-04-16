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



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 submain(int param_1,char **param_2)

{
  uint *puVar1;
  void *pvVar2;
  void *pvVar3;
  int *piVar4;
  uint *puVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  ulong uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  undefined auVar16 [16];
  FILE *__stream;
  void *__ptr;
  long lVar17;
  ulong uVar18;
  long lVar19;
  void *pvVar20;
  int iVar21;
  int iVar22;
  ulong uVar23;
  uint uVar24;
  ulong uVar25;
  uint uVar26;
  uint uVar27;
  ulong uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  int iVar34;
  int iVar36;
  ulong uVar37;
  long lVar38;
  undefined auVar35 [16];
  ulong uVar39;
  long lVar41;
  undefined auVar40 [16];
  uint uVar42;
  uint uVar44;
  uint uVar45;
  long lVar46;
  undefined auVar43 [16];
  uint uVar47;
  int iVar48;
  
  __ptr = (void *)polybench_alloc_data(0x77a100,4);
  auVar16 = __LCPI1_4;
  lVar17 = 0;
  uVar18 = 0;
  do {
    lVar19 = 0;
    uVar25 = 0;
    uVar28 = 1;
    iVar22 = 2;
    uVar39 = 3;
    do {
      uVar23 = (uVar28 & 0xffffffff) * (uVar18 & 0xffffffff);
      iVar21 = iVar22 * (int)uVar18;
      uVar37 = (uVar39 & 0xffffffff) * (uVar18 & 0xffffffff);
      iVar8 = (int)uVar37;
      uVar10 = (uVar25 & 0xffffffff) * (uVar18 & 0xffffffff) & 0xffffffff;
      iVar14 = (int)((uVar37 & 0xffffffff) * 0x24924925 >> 0x20);
      iVar48 = (int)uVar10;
      iVar15 = (int)((SUB168(CONCAT412(iVar8,CONCAT48(iVar21,uVar23 << 0x20)) >> 0x40,0) &
                     0xffffffff) * 0x24924925 >> 0x20);
      iVar34 = (int)(uVar10 * 0x24924925 >> 0x20);
      iVar36 = (int)((uVar23 & 0xffffffff) * 0x24924925 >> 0x20);
      iVar7 = iVar22 + (int)uVar18;
      iVar9 = (int)(uVar39 + uVar18);
      uVar10 = uVar25 + uVar18 & 0xffffffff;
      lVar46 = uVar28 + uVar18 << 0x20;
      uVar37 = uVar28 + uVar18 & 0xffffffff;
      lVar38 = (SUB168(CONCAT412(iVar9,CONCAT48(iVar7,lVar46)) >> 0x40,0) & 0xffffffff) * 0xc4ec4ec5
      ;
      lVar41 = (SUB168(CONCAT412(iVar9,CONCAT48(iVar7,lVar46)) >> 0x40,0) & 0xffffffff) * 0xb6db6db7
      ;
      auVar35 = CONCAT88(SUB168(CONCAT412(iVar9 * -0x3b13b13b,CONCAT48((int)lVar38,lVar38 << 0x20))
                                >> 0x40,0),
                         uVar10 * 0xc4ec4ec5 & 0xffffffff | uVar37 * 0xc4ec4ec5 << 0x20) ^ auVar16;
      auVar40 = CONCAT88(SUB168(CONCAT412(iVar9 * -0x49249249,CONCAT48((int)lVar41,lVar41 << 0x20))
                                >> 0x40,0),
                         uVar10 * 0xb6db6db7 & 0xffffffff | uVar37 * 0xb6db6db7 << 0x20) ^ auVar16;
      lVar46 = (SUB168(CONCAT412(iVar9,CONCAT48(iVar7,lVar46)) >> 0x40,0) & 0xffffffff) * 0xba2e8ba3
      ;
      auVar43 = CONCAT88(SUB168(CONCAT412(iVar9 * -0x45d1745d,CONCAT48((int)lVar46,lVar46 << 0x20))
                                >> 0x40,0),
                         uVar10 * 0xba2e8ba3 & 0xffffffff | uVar37 * 0xba2e8ba3 << 0x20) ^ auVar16;
      uVar42 = -(uint)(-0x68ba2e8c < SUB164(auVar43,0)) ^ 0xffffffff |
               -(uint)(-0x5b6db6dc < SUB164(auVar40,0)) ^ 0xffffffff |
               -(uint)(-0x6c4ec4ed < SUB164(auVar35,0)) ^ 0xffffffff;
      uVar44 = -(uint)(-0x68ba2e8c < SUB164(auVar43 >> 0x20,0)) ^ 0xffffffff |
               -(uint)(-0x5b6db6dc < SUB164(auVar40 >> 0x20,0)) ^ 0xffffffff |
               -(uint)(-0x6c4ec4ed < SUB164(auVar35 >> 0x20,0)) ^ 0xffffffff;
      uVar45 = -(uint)(-0x68ba2e8c < SUB164(auVar43 >> 0x40,0)) ^ 0xffffffff |
               -(uint)(-0x5b6db6dc < SUB164(auVar40 >> 0x40,0)) ^ 0xffffffff |
               -(uint)(-0x6c4ec4ed < SUB164(auVar35 >> 0x40,0)) ^ 0xffffffff;
      uVar47 = -(uint)(-0x68ba2e8c < SUB164(auVar43 >> 0x60,0)) ^ 0xffffffff |
               -(uint)(-0x5b6db6dc < SUB164(auVar40 >> 0x60,0)) ^ 0xffffffff |
               -(uint)(-0x6c4ec4ed < SUB164(auVar35 >> 0x60,0)) ^ 0xffffffff;
      puVar1 = (uint *)((long)__ptr + lVar19 * 4 + uVar18 * 0x2bc0);
      *puVar1 = uVar42 & 999 |
                ~uVar42 & (((uint)(iVar48 - iVar34) >> 1) + iVar34 >> 2) * -7 + iVar48 + 1;
      puVar1[1] = uVar44 & 999 |
                  ~uVar44 & (((uint)((int)uVar23 - iVar36) >> 1) + iVar36 >> 2) * -7 + (int)uVar23 +
                            1;
      puVar1[2] = uVar45 & 999 |
                  ~uVar45 & (((uint)(iVar21 - iVar15) >> 1) + iVar15 >> 2) * -7 + iVar21 + 1;
      puVar1[3] = uVar47 & 999 |
                  ~uVar47 & (((uint)(iVar8 - iVar14) >> 1) + iVar14 >> 2) * -7 + iVar8 + 1;
      lVar19 = lVar19 + 4;
      uVar25 = uVar25 + 4;
      uVar28 = uVar28 + 4;
      iVar22 = iVar22 + 4;
      uVar39 = uVar39 + 4;
    } while (lVar19 != 0xaf0);
    uVar18 = uVar18 + 1;
  } while (uVar18 != 0xaf0);
  do {
    pvVar2 = (void *)((long)__ptr + lVar17 * 0x2bc0);
    lVar19 = 0;
    do {
      lVar46 = lVar19 * 0x2bc0;
      pvVar3 = (void *)((long)__ptr + lVar46);
      piVar4 = (int *)((long)pvVar3 + lVar17 * 4);
      pvVar20 = (void *)((long)__ptr + lVar46 + 0x2bc0);
      if (pvVar3 < (void *)((long)__ptr + lVar46 + lVar17 * 4 + 4) &&
          (void *)((long)__ptr + lVar46 + lVar17 * 4) < pvVar20) {
        lVar46 = 0;
LAB_00100580:
        do {
          iVar22 = *(int *)((long)pvVar3 + lVar46 * 4);
          iVar21 = *(int *)((long)pvVar2 + lVar46 * 4) + *piVar4;
          if (iVar22 < iVar21) {
            iVar21 = iVar22;
          }
          *(int *)((long)pvVar3 + lVar46 * 4) = iVar21;
          uVar18 = lVar46 * 4 | 4;
          iVar22 = *(int *)(uVar18 + (long)pvVar2) + *piVar4;
          if (*(int *)(uVar18 + (long)pvVar3) < iVar22) {
            iVar22 = *(int *)(uVar18 + (long)pvVar3);
          }
          *(int *)(uVar18 + (long)pvVar3) = iVar22;
          lVar46 = lVar46 + 2;
        } while (lVar46 != 0xaf0);
      }
      else {
        lVar46 = 0;
        if (pvVar2 < pvVar20 && pvVar3 < (void *)((long)__ptr + lVar17 * 0x2bc0 + 0x2bc0))
        goto LAB_00100580;
        iVar22 = *piVar4;
        lVar46 = 0;
        do {
          puVar1 = (uint *)((long)pvVar3 + lVar46 * 4);
          uVar42 = puVar1[1];
          uVar44 = puVar1[2];
          uVar45 = puVar1[3];
          puVar5 = (uint *)((long)pvVar3 + lVar46 * 4 + 0x10);
          uVar47 = *puVar5;
          uVar11 = puVar5[1];
          uVar12 = puVar5[2];
          uVar13 = puVar5[3];
          piVar4 = (int *)((long)pvVar2 + lVar46 * 4);
          iVar21 = piVar4[1];
          iVar7 = piVar4[2];
          iVar8 = piVar4[3];
          piVar6 = (int *)((long)pvVar2 + lVar46 * 4 + 0x10);
          iVar9 = *piVar6;
          iVar14 = piVar6[1];
          iVar15 = piVar6[2];
          iVar34 = piVar6[3];
          uVar30 = -(uint)((int)*puVar1 < *piVar4 + iVar22);
          uVar31 = -(uint)((int)uVar42 < iVar21 + iVar22);
          uVar32 = -(uint)((int)uVar44 < iVar7 + iVar22);
          uVar33 = -(uint)((int)uVar45 < iVar8 + iVar22);
          uVar24 = -(uint)((int)uVar47 < iVar9 + iVar22);
          uVar26 = -(uint)((int)uVar11 < iVar14 + iVar22);
          uVar27 = -(uint)((int)uVar12 < iVar15 + iVar22);
          uVar29 = -(uint)((int)uVar13 < iVar34 + iVar22);
          puVar5 = (uint *)((long)pvVar3 + lVar46 * 4);
          *puVar5 = ~uVar30 & *piVar4 + iVar22 | *puVar1 & uVar30;
          puVar5[1] = ~uVar31 & iVar21 + iVar22 | uVar42 & uVar31;
          puVar5[2] = ~uVar32 & iVar7 + iVar22 | uVar44 & uVar32;
          puVar5[3] = ~uVar33 & iVar8 + iVar22 | uVar45 & uVar33;
          puVar1 = (uint *)((long)pvVar3 + lVar46 * 4 + 0x10);
          *puVar1 = ~uVar24 & iVar9 + iVar22 | uVar47 & uVar24;
          puVar1[1] = ~uVar26 & iVar14 + iVar22 | uVar11 & uVar26;
          puVar1[2] = ~uVar27 & iVar15 + iVar22 | uVar12 & uVar27;
          puVar1[3] = ~uVar29 & iVar34 + iVar22 | uVar13 & uVar29;
          lVar46 = lVar46 + 8;
        } while (lVar46 != 0xaf0);
      }
      __stream = _DAT_19b3d8d48308b4c;
      lVar19 = lVar19 + 1;
    } while (lVar19 != 0xaf0);
    lVar17 = lVar17 + 1;
    if (lVar17 == 0xaf0) {
      if ((0x2a < param_1) && (**param_2 == '\0')) {
        fwrite("==BEGIN DUMP_ARRAYS==\n",0x16,1,_DAT_19b3d8d48308b4c);
        fprintf(__stream,"begin dump: %s",&_L_str_3);
        lVar17 = 0;
        do {
          lVar19 = 0;
          do {
            if (((uint)(((int)lVar19 + (int)lVar17 * 0xaf0) * -0x33333333) >> 2 |
                (int)lVar19 * 0x40000000) < 0xccccccd) {
              fputc(10,__stream);
            }
            fprintf(__stream,(char *)&_L_str_5,
                    (ulong)*(uint *)((long)__ptr + lVar19 * 4 + lVar17 * 0x2bc0));
            lVar19 = lVar19 + 1;
          } while (lVar19 != 0xaf0);
          lVar17 = lVar17 + 1;
        } while (lVar17 != 0xaf0);
        fprintf(__stream,"\nend   dump: %s\n",&_L_str_3);
        fwrite("==END   DUMP_ARRAYS==\n",0x16,1,__stream);
      }
      free(__ptr);
      return 0;
    }
  } while( true );
}


