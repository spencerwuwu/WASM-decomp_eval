#include "gemm.h"



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 submain(int param_1,char **param_2)

{
  void *pvVar1;
  double *pdVar2;
  double *pdVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  FILE *__stream;
  void *__ptr;
  void *__ptr_00;
  void *__ptr_01;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  void *pvVar13;
  void *pvVar14;
  int iVar15;
  long lVar16;
  double dVar17;
  ulong uVar18;
  undefined auVar19 [16];
  ulong uVar21;
  undefined auVar20 [16];
  
  __ptr = (void *)polybench_alloc_data(1100000,8);
  __ptr_00 = (void *)polybench_alloc_data(1200000,8);
  __ptr_01 = (void *)polybench_alloc_data(0x142440,8);
  auVar20 = __LCPI0_3;
  uVar9 = 0;
  lVar10 = 0;
  do {
    lVar11 = 0;
    iVar15 = 0;
    do {
      dVar17 = (double)((iVar15 * (int)lVar10 + 1U) % 1000);
      auVar19 = divpd(CONCAT88((double)(int)((ulong)dVar17 >> 0x20),dVar17),auVar20);
      *(undefined (*) [16])((long)__ptr + lVar11 * 8 + lVar10 * 0x2260) = auVar19;
      auVar19 = __LCPI0_7;
      lVar11 = lVar11 + 2;
      iVar15 = iVar15 + 2;
    } while (lVar11 != 0x44c);
    lVar10 = lVar10 + 1;
  } while (lVar10 != 1000);
  lVar10 = 0;
  do {
    lVar12 = 0;
    lVar11 = 0;
    lVar16 = 1;
    do {
      uVar18 = (lVar11 + 1U & 0xffffffff) * (uVar9 & 0xffffffff);
      uVar21 = (lVar16 - SUB168(CONCAT412(0xffffffff,CONCAT48(0xffffffff,0xffffffffffffffff)) >>
                                0x40,0) & 0xffffffffU) * (uVar9 & 0xffffffff);
      auVar20 = divpd(CONCAT88((double)((int)uVar21 + (int)((uVar21 & 0xffffffff) / 0x4b0) * -0x4b0)
                               ,(double)((int)uVar18 + (int)((uVar18 & 0xffffffff) / 0x4b0) * -0x4b0
                                        )),auVar19);
      *(undefined (*) [16])((long)__ptr_00 + lVar12 * 8 + uVar9 * 0x2580) = auVar20;
      auVar20 = __LCPI0_10;
      lVar12 = lVar12 + 2;
      lVar11 = lVar11 + 2;
      lVar16 = lVar16 + 2;
    } while (lVar12 != 0x4b0);
    uVar9 = uVar9 + 1;
  } while (uVar9 != 1000);
  lVar11 = 0;
  do {
    lVar16 = 0;
    iVar15 = 0;
    do {
      iVar15 = iVar15 + 2;
      dVar17 = (double)((uint)(iVar15 * (int)lVar10) % 0x44c);
      auVar19 = divpd(CONCAT88((double)(int)((ulong)dVar17 >> 0x20),dVar17),auVar20);
      *(undefined (*) [16])((long)__ptr_01 + lVar16 * 8 + lVar10 * 0x2260) = auVar19;
      lVar16 = lVar16 + 2;
    } while (lVar16 != 0x44c);
    lVar10 = lVar10 + 1;
  } while (lVar10 != 0x4b0);
  do {
    pvVar1 = (void *)((long)__ptr + lVar11 * 0x2260);
    pvVar13 = (void *)((long)__ptr + lVar11 * 0x2260 + 0x2260);
    lVar10 = lVar11 * 0x2580;
    uVar9 = 0;
    while( true ) {
      pdVar2 = (double *)((long)pvVar1 + uVar9 * 8);
      dVar17 = pdVar2[1];
      pdVar3 = (double *)((long)pvVar1 + uVar9 * 8 + 0x10);
      dVar4 = *pdVar3;
      dVar5 = pdVar3[1];
      pdVar3 = (double *)((long)pvVar1 + uVar9 * 8);
      *pdVar3 = *pdVar2 * 1.2;
      pdVar3[1] = dVar17 * 1.2;
      pdVar2 = (double *)((long)pvVar1 + uVar9 * 8 + 0x10);
      *pdVar2 = dVar4 * 1.2;
      pdVar2[1] = dVar5 * 1.2;
      uVar18 = uVar9 | 4;
      if (uVar18 == 0x44c) break;
      pdVar2 = (double *)((long)pvVar1 + uVar18 * 8);
      dVar17 = pdVar2[1];
      pdVar3 = (double *)((long)pvVar1 + uVar18 * 8 + 0x10);
      dVar4 = *pdVar3;
      dVar5 = pdVar3[1];
      pdVar3 = (double *)((long)pvVar1 + uVar18 * 8);
      *pdVar3 = *pdVar2 * 1.2;
      pdVar3[1] = dVar17 * 1.2;
      pdVar2 = (double *)((long)pvVar1 + uVar18 * 8 + 0x10);
      *pdVar2 = dVar4 * 1.2;
      pdVar2[1] = dVar5 * 1.2;
      uVar9 = uVar9 + 8;
    }
    lVar16 = 0;
    do {
      pdVar2 = (double *)((long)__ptr_00 + lVar16 * 8 + lVar10);
      pvVar14 = (void *)(lVar16 * 0x2260 + (long)__ptr_01);
      if (pvVar1 < (void *)(lVar10 + 8 + lVar16 * 8 + (long)__ptr_00) &&
          (void *)(lVar10 + lVar16 * 8 + (long)__ptr_00) < pvVar13) {
        lVar12 = 0;
LAB_001004a0:
        do {
          *(double *)((long)pvVar1 + lVar12 * 8) =
               *pdVar2 * 1.5 * *(double *)((long)pvVar14 + lVar12 * 8) +
               *(double *)((long)pvVar1 + lVar12 * 8);
          uVar9 = lVar12 * 8 | 8;
          *(double *)(uVar9 + (long)pvVar1) =
               *pdVar2 * 1.5 * *(double *)(uVar9 + (long)pvVar14) +
               *(double *)(uVar9 + (long)pvVar1);
          lVar12 = lVar12 + 2;
        } while (lVar12 != 0x44c);
      }
      else {
        lVar12 = 0;
        if (pvVar1 < (void *)((long)__ptr_01 + lVar16 * 0x2260 + 0x2260) && pvVar14 < pvVar13)
        goto LAB_001004a0;
        dVar17 = *pdVar2 * 1.5;
        lVar12 = 0;
        do {
          pdVar2 = (double *)((long)pvVar14 + lVar12 * 8);
          dVar4 = pdVar2[1];
          pdVar3 = (double *)((long)pvVar14 + lVar12 * 8 + 0x10);
          dVar5 = *pdVar3;
          dVar6 = pdVar3[1];
          auVar20 = *(undefined (*) [16])((long)pvVar1 + lVar12 * 8);
          pdVar3 = (double *)((long)pvVar1 + lVar12 * 8 + 0x10);
          dVar7 = *pdVar3;
          dVar8 = pdVar3[1];
          pdVar3 = (double *)((long)pvVar1 + lVar12 * 8);
          *pdVar3 = *pdVar2 * dVar17 + SUB168(auVar20,0);
          pdVar3[1] = dVar4 * dVar17 + SUB168(auVar20 >> 0x40,0);
          *(undefined (*) [16])((long)pvVar1 + lVar12 * 8 + 0x10) =
               CONCAT88(dVar6 * dVar17 + dVar8,dVar5 * dVar17 + dVar7);
          lVar12 = lVar12 + 4;
        } while (lVar12 != 0x44c);
      }
      __stream = _DAT_1983d8d48208b4c;
      lVar16 = lVar16 + 1;
    } while (lVar16 != 0x4b0);
    lVar11 = lVar11 + 1;
    if (lVar11 == 1000) {
      if ((0x2a < param_1) && (**param_2 == '\0')) {
        fwrite(_L_str_1,0x16,1,_DAT_1983d8d48208b4c);
        lVar10 = 0;
        fprintf(__stream,"begin dump: %s",&_L_str_3);
        do {
          lVar11 = 0;
          do {
            if (((uint)(((int)lVar11 + (int)lVar10 * 1000) * -0x33333333) >> 2 |
                (int)lVar11 * 0x40000000) < 0xccccccd) {
              fputc(10,__stream);
            }
            fprintf(__stream,"%0.2lf ",*(undefined8 *)((long)__ptr + lVar11 * 8 + lVar10 * 0x2260));
            lVar11 = lVar11 + 1;
          } while (lVar11 != 0x44c);
          lVar10 = lVar10 + 1;
        } while (lVar10 != 1000);
        fprintf(__stream,"\nend   dump: %s\n",&_L_str_3);
        fwrite("==END   DUMP_ARRAYS==\n",0x16,1,__stream);
      }
      free(__ptr);
      free(__ptr_00);
      free(__ptr_01);
      return 0;
    }
  } while( true );
}


