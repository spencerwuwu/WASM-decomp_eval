#include "floyd-warshall.h"



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
  auVar16 = __LCPI0_4;
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
LAB_00100390:
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
        goto LAB_00100390;
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


