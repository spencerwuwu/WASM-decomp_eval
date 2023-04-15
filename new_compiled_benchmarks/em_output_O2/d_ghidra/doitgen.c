#include "doitgen.h"



void kernel_doitgen(uint param_1,uint param_2,uint param_3,long param_4,long param_5,long param_6)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  double dVar18;
  ulong local_60;
  
  if (0 < (int)param_1) {
    uVar14 = (ulong)param_3;
    uVar10 = (ulong)(param_3 & 0xfffffffc);
    local_60 = 0;
    do {
      if (0 < (int)param_2) {
        lVar15 = local_60 * 0x2bc00;
        uVar11 = 0;
        do {
          if (0 < (int)param_3) {
            lVar9 = uVar11 * 0x500;
            uVar12 = 0;
            do {
              *(undefined8 *)(param_6 + uVar12 * 8) = 0;
              dVar18 = 0.0;
              uVar16 = 0;
              uVar13 = 0;
              if (param_3 != 1) {
                do {
                  lVar17 = param_4 + lVar9 + lVar15;
                  dVar18 = *(double *)(lVar17 + uVar16 * 8) *
                           *(double *)(uVar16 * 0x500 + param_5 + uVar12 * 8) + dVar18;
                  *(double *)(param_6 + uVar12 * 8) = dVar18;
                  dVar18 = *(double *)(lVar17 + (uVar16 | 1) * 8) *
                           *(double *)((uVar16 | 1) * 0x500 + param_5 + uVar12 * 8) + dVar18;
                  *(double *)(param_6 + uVar12 * 8) = dVar18;
                  uVar16 = uVar16 + 2;
                  uVar13 = uVar13 + 2;
                } while (uVar13 != (param_3 & 0xfffffffe));
              }
              if ((param_3 & 1) != 0) {
                *(double *)(param_6 + uVar12 * 8) =
                     *(double *)(param_4 + lVar9 + lVar15 + uVar16 * 8) *
                     *(double *)(uVar16 * 0x500 + param_5 + uVar12 * 8) + dVar18;
              }
              uVar12 = uVar12 + 1;
            } while (uVar12 != uVar14);
            if (0 < (int)param_3) {
              if (param_3 < 6) {
                uVar12 = 0;
              }
              else {
                uVar13 = 0;
                uVar12 = 0;
                if (0x1f < (ulong)((lVar15 + param_4 + lVar9) - param_6)) {
                  do {
                    puVar1 = (undefined8 *)(param_6 + uVar13 * 8);
                    uVar4 = puVar1[1];
                    puVar3 = (undefined4 *)(param_6 + 0x10 + uVar13 * 8);
                    uVar5 = *puVar3;
                    uVar6 = puVar3[1];
                    uVar7 = puVar3[2];
                    uVar8 = puVar3[3];
                    lVar17 = param_4 + lVar9 + lVar15;
                    puVar2 = (undefined8 *)(lVar17 + uVar13 * 8);
                    *puVar2 = *puVar1;
                    puVar2[1] = uVar4;
                    puVar3 = (undefined4 *)(lVar17 + 0x10 + uVar13 * 8);
                    *puVar3 = uVar5;
                    puVar3[1] = uVar6;
                    puVar3[2] = uVar7;
                    puVar3[3] = uVar8;
                    uVar13 = uVar13 + 4;
                  } while (uVar13 != uVar10);
                  uVar12 = uVar10;
                  if (uVar10 == uVar14) goto LAB_00100090;
                }
              }
              uVar13 = ~uVar12;
              if ((ulong)(param_3 & 3) != 0) {
                uVar16 = 0;
                do {
                  *(undefined8 *)(param_4 + lVar9 + lVar15 + uVar12 * 8) =
                       *(undefined8 *)(param_6 + uVar12 * 8);
                  uVar12 = uVar12 + 1;
                  uVar16 = uVar16 + 1;
                } while (uVar16 != (param_3 & 3));
              }
              if (2 < uVar13 + uVar14) {
                do {
                  lVar17 = param_4 + lVar9 + lVar15;
                  *(undefined8 *)(lVar17 + uVar12 * 8) = *(undefined8 *)(param_6 + uVar12 * 8);
                  *(undefined8 *)(lVar17 + 8 + uVar12 * 8) =
                       *(undefined8 *)(param_6 + 8 + uVar12 * 8);
                  *(undefined8 *)(lVar17 + 0x10 + uVar12 * 8) =
                       *(undefined8 *)(param_6 + 0x10 + uVar12 * 8);
                  *(undefined8 *)(lVar17 + 0x18 + uVar12 * 8) =
                       *(undefined8 *)(param_6 + 0x18 + uVar12 * 8);
                  uVar12 = uVar12 + 4;
                } while (uVar12 != uVar14);
              }
            }
          }
LAB_00100090:
          uVar11 = uVar11 + 1;
        } while (uVar11 != param_2);
      }
      local_60 = local_60 + 1;
    } while (local_60 != param_1);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 submain(int param_1,char **param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  long lVar10;
  FILE *__stream;
  void *__ptr;
  void *__ptr_00;
  void *__ptr_01;
  long lVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  long lVar19;
  ulong uVar20;
  undefined auVar18 [16];
  double dVar21;
  undefined auVar22 [16];
  undefined auVar23 [16];
  ulong uVar24;
  ulong uVar25;
  
  __ptr = (void *)polybench_alloc_data(0x334500,8);
  __ptr_00 = (void *)polybench_alloc_data(0xa0,8);
  __ptr_01 = (void *)polybench_alloc_data(0x6400,8);
  auVar18 = __LCPI1_3;
  uVar12 = 0;
  lVar11 = 0;
  do {
    lVar13 = 0;
    do {
      lVar14 = lVar13 * lVar11;
      lVar15 = 0;
      lVar16 = 0;
      lVar19 = 1;
      do {
        uVar24 = lVar16 + lVar14;
        uVar25 = lVar19 + SUB168(CONCAT412((int)((ulong)lVar14 >> 0x20),CONCAT48((int)lVar14,lVar14)
                                          ) >> 0x40,0) + 2;
        dVar21 = (double)((int)uVar24 + (int)((uVar24 & 0xffffffff) / 0xa0) * -0xa0);
        auVar22 = divpd(CONCAT88((double)(int)((ulong)dVar21 >> 0x20),dVar21),auVar18);
        lVar10 = lVar11 * 0x2bc00 + lVar13 * 0x500;
        auVar23 = divpd(CONCAT88((double)((int)uVar25 + (int)((uVar25 & 0xffffffff) / 0xa0) * -0xa0)
                                 ,(double)((int)(uVar24 + 2) +
                                          (int)((uVar24 + 2 & 0xffffffff) / 0xa0) * -0xa0)),auVar18)
        ;
        *(undefined (*) [16])((long)__ptr + lVar15 * 8 + lVar10) = auVar22;
        *(undefined (*) [16])((long)__ptr + (lVar15 * 8 | 0x10U) + lVar10) = auVar23;
        auVar22 = __LCPI1_3;
        lVar15 = lVar15 + 4;
        lVar16 = lVar16 + 4;
        lVar19 = lVar19 + 4;
      } while (lVar15 != 0xa0);
      lVar13 = lVar13 + 1;
    } while (lVar13 != 0x8c);
    lVar11 = lVar11 + 1;
  } while (lVar11 != 0x96);
  lVar11 = 0;
  do {
    lVar13 = 0;
    uVar24 = 0;
    uVar25 = 1;
    do {
      uVar17 = (uVar24 & 0xffffffff) * (uVar12 & 0xffffffff);
      uVar20 = (uVar25 & 0xffffffff) * (uVar12 & 0xffffffff);
      auVar18 = divpd(CONCAT88((double)((int)uVar20 + (int)((uVar20 & 0xffffffff) / 0xa0) * -0xa0),
                               (double)((int)uVar17 + (int)((uVar17 & 0xffffffff) / 0xa0) * -0xa0)),
                      auVar22);
      *(undefined (*) [16])((long)__ptr_01 + lVar13 * 8 + uVar12 * 0x500) = auVar18;
      lVar13 = lVar13 + 2;
      uVar24 = uVar24 + 2;
      uVar25 = uVar25 + 2;
    } while (lVar13 != 0xa0);
    uVar12 = uVar12 + 1;
  } while (uVar12 != 0xa0);
  do {
    lVar13 = 0;
    do {
      lVar16 = 0;
      do {
        *(undefined8 *)((long)__ptr_00 + lVar16 * 8) = 0;
        auVar18 = (undefined  [16])0x0;
        uVar12 = 0;
        do {
          lVar19 = lVar11 * 0x2bc00 + lVar13 * 0x500;
          dVar21 = *(double *)((long)__ptr + uVar12 * 8 + lVar19) *
                   *(double *)((long)__ptr_01 + lVar16 * 8 + uVar12 * 0x500) + SUB168(auVar18,0);
          *(double *)((long)__ptr_00 + lVar16 * 8) = dVar21;
          dVar21 = *(double *)((long)__ptr + (uVar12 | 1) * 8 + lVar19) *
                   *(double *)((long)__ptr_01 + lVar16 * 8 + (uVar12 | 1) * 0x500) + dVar21;
          auVar18 = ZEXT816((ulong)dVar21);
          *(double *)((long)__ptr_00 + lVar16 * 8) = dVar21;
          uVar12 = uVar12 + 2;
        } while (uVar12 != 0xa0);
        lVar16 = lVar16 + 1;
      } while (lVar16 != 0xa0);
      lVar16 = 0;
      lVar14 = 0;
      if ((ulong)((long)__ptr + ((lVar13 * 0x500 + lVar11 * 0x2bc00) - (long)__ptr_00)) < 0x20) {
        do {
          *(undefined8 *)((long)__ptr + lVar14 * 8 + lVar19) =
               *(undefined8 *)((long)__ptr_00 + lVar14 * 8);
          *(undefined8 *)((long)__ptr + lVar14 * 8 + lVar19 + 8) =
               *(undefined8 *)((long)__ptr_00 + lVar14 * 8 + 8);
          *(undefined8 *)((long)__ptr + lVar14 * 8 + lVar19 + 0x10) =
               *(undefined8 *)((long)__ptr_00 + lVar14 * 8 + 0x10);
          *(undefined8 *)((long)__ptr + lVar14 * 8 + lVar19 + 0x18) =
               *(undefined8 *)((long)__ptr_00 + lVar14 * 8 + 0x18);
          *(undefined8 *)((long)__ptr + lVar14 * 8 + lVar19 + 0x20) =
               *(undefined8 *)((long)__ptr_00 + lVar14 * 8 + 0x20);
          lVar14 = lVar14 + 5;
        } while (lVar14 != 0xa0);
      }
      else {
        do {
          puVar1 = (undefined4 *)((long)__ptr_00 + lVar16 * 8);
          uVar3 = puVar1[1];
          uVar4 = puVar1[2];
          uVar5 = puVar1[3];
          puVar2 = (undefined4 *)((long)__ptr_00 + lVar16 * 8 + 0x10);
          uVar6 = *puVar2;
          uVar7 = puVar2[1];
          uVar8 = puVar2[2];
          uVar9 = puVar2[3];
          puVar2 = (undefined4 *)((long)__ptr + lVar16 * 8 + lVar19);
          *puVar2 = *puVar1;
          puVar2[1] = uVar3;
          puVar2[2] = uVar4;
          puVar2[3] = uVar5;
          puVar1 = (undefined4 *)((long)__ptr + lVar16 * 8 + lVar19 + 0x10);
          *puVar1 = uVar6;
          puVar1[1] = uVar7;
          puVar1[2] = uVar8;
          puVar1[3] = uVar9;
          uVar12 = lVar16 * 8 | 0x20;
          puVar1 = (undefined4 *)((long)__ptr_00 + uVar12);
          uVar3 = puVar1[1];
          uVar4 = puVar1[2];
          uVar5 = puVar1[3];
          puVar2 = (undefined4 *)((long)__ptr_00 + uVar12 + 0x10);
          uVar6 = *puVar2;
          uVar7 = puVar2[1];
          uVar8 = puVar2[2];
          uVar9 = puVar2[3];
          puVar2 = (undefined4 *)((long)__ptr + uVar12 + lVar19);
          *puVar2 = *puVar1;
          puVar2[1] = uVar3;
          puVar2[2] = uVar4;
          puVar2[3] = uVar5;
          puVar1 = (undefined4 *)((long)__ptr + uVar12 + 0x10 + lVar19);
          *puVar1 = uVar6;
          puVar1[1] = uVar7;
          puVar1[2] = uVar8;
          puVar1[3] = uVar9;
          lVar16 = lVar16 + 8;
        } while (lVar16 != 0xa0);
      }
      __stream = _DAT_19a3d8d48208b4c;
      lVar13 = lVar13 + 1;
    } while (lVar13 != 0x8c);
    lVar11 = lVar11 + 1;
  } while (lVar11 != 0x96);
  if ((0x2a < param_1) && (**param_2 == '\0')) {
    fwrite("==BEGIN DUMP_ARRAYS==\n",0x16,1,_DAT_19a3d8d48208b4c);
    lVar11 = 0;
    fprintf(__stream,"begin dump: %s",&_L_str_3);
    do {
      lVar13 = 0;
      do {
        lVar16 = 0;
        do {
          if (((uint)(((int)lVar16 + (int)lVar13 * 0xa0 + (int)lVar11 * 0x5780) * -0x33333333) >> 2
              | (int)lVar16 * 0x40000000) < 0xccccccd) {
            fputc(10,__stream);
          }
          fprintf(__stream,"%0.2lf ",
                  *(undefined8 *)((long)__ptr + lVar16 * 8 + lVar11 * 0x2bc00 + lVar13 * 0x500));
          lVar16 = lVar16 + 1;
        } while (lVar16 != 0xa0);
        lVar13 = lVar13 + 1;
      } while (lVar13 != 0x8c);
      lVar11 = lVar11 + 1;
    } while (lVar11 != 0x96);
    fprintf(__stream,"\nend   dump: %s\n",&_L_str_3);
    fwrite("==END   DUMP_ARRAYS==\n",0x16,1,__stream);
  }
  free(__ptr);
  free(__ptr_00);
  free(__ptr_01);
  return 0;
}


