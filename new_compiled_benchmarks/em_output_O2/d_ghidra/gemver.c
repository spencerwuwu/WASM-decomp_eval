#include "gemver.h"



void kernel_gemver(double param_1,double param_2,uint param_3,long param_4,long param_5,
                  ulong param_6,long param_7_00,ulong param_8_00,long param_7,ulong param_8,
                  long param_9,ulong param_10)

{
  double *pdVar1;
  double *pdVar2;
  double *pdVar3;
  double *pdVar4;
  double *pdVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  double dVar20;
  
  if ((int)param_3 < 1) {
    return;
  }
  uVar12 = (ulong)param_3;
  uVar14 = (ulong)(param_3 & 0xfffffffc);
  uVar19 = 0;
  do {
    if (param_3 < 10) {
      uVar17 = 0;
LAB_00100078:
      uVar13 = uVar17;
      if ((param_3 & 1) != 0) {
        lVar16 = uVar19 * 16000 + param_4;
        *(double *)(lVar16 + uVar17 * 8) =
             *(double *)(param_7_00 + uVar19 * 8) * *(double *)(param_8_00 + uVar17 * 8) +
             *(double *)(param_5 + uVar19 * 8) * *(double *)(param_6 + uVar17 * 8) +
             *(double *)(lVar16 + uVar17 * 8);
        uVar13 = uVar17 | 1;
      }
      if (uVar12 - 1 != uVar17) {
        do {
          lVar16 = uVar19 * 16000 + param_4;
          *(double *)(lVar16 + uVar13 * 8) =
               *(double *)(param_7_00 + uVar19 * 8) * *(double *)(param_8_00 + uVar13 * 8) +
               *(double *)(param_5 + uVar19 * 8) * *(double *)(param_6 + uVar13 * 8) +
               *(double *)(lVar16 + uVar13 * 8);
          *(double *)(lVar16 + 8 + uVar13 * 8) =
               *(double *)(param_7_00 + uVar19 * 8) * *(double *)(param_8_00 + 8 + uVar13 * 8) +
               *(double *)(param_5 + uVar19 * 8) * *(double *)(param_6 + 8 + uVar13 * 8) +
               *(double *)(lVar16 + 8 + uVar13 * 8);
          uVar13 = uVar13 + 2;
        } while (uVar13 != uVar12);
      }
    }
    else {
      uVar18 = uVar12 * 8 + param_4 + uVar19 * 16000;
      uVar13 = uVar19 * 16000 + param_4;
      if (((uVar13 < param_5 + uVar19 * 8 + 8 && param_5 + uVar19 * 8 < uVar18) ||
          (uVar13 < param_6 + uVar12 * 8 && param_6 < uVar18)) ||
         (uVar13 < param_7_00 + uVar19 * 8 + 8 && param_7_00 + uVar19 * 8 < uVar18)) {
        uVar17 = 0;
        goto LAB_00100078;
      }
      uVar17 = 0;
      if (uVar13 < param_8_00 + uVar12 * 8 && param_8_00 < uVar18) goto LAB_00100078;
      dVar20 = *(double *)(param_5 + uVar19 * 8);
      dVar6 = *(double *)(param_7_00 + uVar19 * 8);
      uVar18 = 0;
      do {
        pdVar5 = (double *)(uVar13 + uVar18 * 8);
        pdVar3 = (double *)(uVar13 + 0x10 + uVar18 * 8);
        dVar7 = pdVar3[1];
        pdVar1 = (double *)(param_6 + uVar18 * 8);
        pdVar2 = (double *)(param_6 + 0x10 + uVar18 * 8);
        dVar8 = *pdVar2;
        dVar9 = pdVar2[1];
        pdVar2 = (double *)(param_8_00 + uVar18 * 8);
        pdVar4 = (double *)(param_8_00 + 0x10 + uVar18 * 8);
        dVar10 = *pdVar4;
        dVar11 = pdVar4[1];
        *(undefined (*) [16])(uVar13 + uVar18 * 8) =
             CONCAT88(pdVar2[1] * dVar6 + pdVar1[1] * dVar20 + pdVar5[1],
                      *pdVar2 * dVar6 + *pdVar1 * dVar20 + *pdVar5);
        *(undefined (*) [16])(uVar13 + 0x10 + uVar18 * 8) =
             CONCAT88(dVar11 * dVar6 + dVar9 * dVar20 + dVar7,
                      dVar10 * dVar6 + dVar8 * dVar20 + *pdVar3);
        uVar18 = uVar18 + 4;
      } while (uVar18 != uVar14);
      uVar17 = uVar14;
      if (uVar14 != uVar12) goto LAB_00100078;
    }
    uVar19 = uVar19 + 1;
  } while (uVar19 != uVar12);
  if ((int)param_3 < 1) {
    return;
  }
  uVar19 = 0;
  do {
    dVar20 = *(double *)(param_8 + uVar19 * 8);
    uVar14 = 0;
    uVar13 = 0;
    if (uVar12 != 1) {
      do {
        dVar20 = *(double *)(uVar14 * 16000 + param_4 + uVar19 * 8) * param_2 *
                 *(double *)(param_9 + uVar14 * 8) + dVar20;
        *(double *)(param_8 + uVar19 * 8) = dVar20;
        dVar20 = *(double *)((uVar14 | 1) * 16000 + param_4 + uVar19 * 8) * param_2 *
                 *(double *)(param_9 + (uVar14 | 1) * 8) + dVar20;
        *(double *)(param_8 + uVar19 * 8) = dVar20;
        uVar14 = uVar14 + 2;
        uVar13 = uVar13 + 2;
      } while (uVar13 != (param_3 & 0xfffffffe));
    }
    if ((param_3 & 1) != 0) {
      *(double *)(param_8 + uVar19 * 8) =
           *(double *)(uVar14 * 16000 + param_4 + uVar19 * 8) * param_2 *
           *(double *)(param_9 + uVar14 * 8) + dVar20;
    }
    uVar19 = uVar19 + 1;
  } while (uVar19 != uVar12);
  if ((int)param_3 < 1) {
    return;
  }
  if (param_3 < 6) {
    uVar19 = 0;
  }
  else if ((param_8 < param_10 + uVar12 * 8) && (param_10 < param_8 + uVar12 * 8)) {
    uVar19 = 0;
  }
  else {
    uVar19 = (ulong)(param_3 & 0xfffffffc);
    uVar14 = 0;
    do {
      pdVar1 = (double *)(param_8 + uVar14 * 8);
      pdVar3 = (double *)(param_8 + 0x10 + uVar14 * 8);
      dVar20 = pdVar3[1];
      pdVar2 = (double *)(param_10 + uVar14 * 8);
      pdVar4 = (double *)(param_10 + 0x10 + uVar14 * 8);
      dVar6 = *pdVar4;
      dVar7 = pdVar4[1];
      *(undefined (*) [16])(param_8 + uVar14 * 8) =
           CONCAT88(pdVar2[1] + pdVar1[1],*pdVar2 + *pdVar1);
      *(undefined (*) [16])(param_8 + 0x10 + uVar14 * 8) = CONCAT88(dVar7 + dVar20,dVar6 + *pdVar3);
      uVar14 = uVar14 + 4;
    } while (uVar14 != uVar19);
    if (uVar19 == uVar12) goto LAB_00100482;
  }
  uVar14 = ~uVar19;
  if ((param_3 & 3) != 0) {
    uVar13 = 0;
    do {
      *(double *)(param_8 + uVar19 * 8) =
           *(double *)(param_8 + uVar19 * 8) + *(double *)(param_10 + uVar19 * 8);
      uVar19 = uVar19 + 1;
      uVar13 = uVar13 + 1;
    } while (uVar13 != (uVar12 & 3));
  }
  if (2 < uVar14 + uVar12) {
    do {
      *(double *)(param_8 + uVar19 * 8) =
           *(double *)(param_8 + uVar19 * 8) + *(double *)(param_10 + uVar19 * 8);
      *(double *)(param_8 + 8 + uVar19 * 8) =
           *(double *)(param_8 + 8 + uVar19 * 8) + *(double *)(param_10 + 8 + uVar19 * 8);
      *(double *)(param_8 + 0x10 + uVar19 * 8) =
           *(double *)(param_8 + 0x10 + uVar19 * 8) + *(double *)(param_10 + 0x10 + uVar19 * 8);
      *(double *)(param_8 + 0x18 + uVar19 * 8) =
           *(double *)(param_8 + 0x18 + uVar19 * 8) + *(double *)(param_10 + 0x18 + uVar19 * 8);
      uVar19 = uVar19 + 4;
    } while (uVar19 != uVar12);
  }
LAB_00100482:
  if (0 < (int)param_3) {
    uVar19 = 0;
    do {
      dVar20 = *(double *)(param_7 + uVar19 * 8);
      lVar16 = 0;
      uVar14 = 0;
      if (uVar12 != 1) {
        do {
          lVar15 = uVar19 * 16000 + param_4;
          dVar20 = *(double *)(lVar15 + lVar16 * 8) * param_1 * *(double *)(param_8 + lVar16 * 8) +
                   dVar20;
          *(double *)(param_7 + uVar19 * 8) = dVar20;
          uVar13 = lVar16 * 8 | 8;
          dVar20 = *(double *)(uVar13 + lVar15) * param_1 * *(double *)(param_8 + uVar13) + dVar20;
          *(double *)(param_7 + uVar19 * 8) = dVar20;
          lVar16 = lVar16 + 2;
          uVar14 = uVar14 + 2;
        } while (uVar14 != (param_3 & 0xfffffffe));
      }
      if ((param_3 & 1) != 0) {
        *(double *)(param_7 + uVar19 * 8) =
             *(double *)(uVar19 * 16000 + param_4 + lVar16 * 8) * param_1 *
             *(double *)(param_8 + lVar16 * 8) + dVar20;
      }
      uVar19 = uVar19 + 1;
    } while (uVar19 != uVar12);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 submain(int param_1,char **param_2)

{
  double *pdVar1;
  double *pdVar2;
  double *pdVar3;
  double *pdVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined auVar12 [16];
  FILE *__stream;
  void *__ptr;
  void *__ptr_00;
  void *__ptr_01;
  void *__ptr_02;
  void *__ptr_03;
  void *__ptr_04;
  void *__ptr_05;
  void *__ptr_06;
  void *__ptr_07;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  void *pvVar17;
  long lVar18;
  void *pvVar19;
  double dVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar25;
  undefined auVar24 [16];
  
  __ptr = (void *)polybench_alloc_data(4000000,8);
  __ptr_00 = (void *)polybench_alloc_data(2000,8);
  __ptr_01 = (void *)polybench_alloc_data(2000,8);
  __ptr_02 = (void *)polybench_alloc_data(2000,8);
  __ptr_03 = (void *)polybench_alloc_data(2000,8);
  __ptr_04 = (void *)polybench_alloc_data(2000,8);
  __ptr_05 = (void *)polybench_alloc_data(2000,8);
  __ptr_06 = (void *)polybench_alloc_data(2000,8);
  __ptr_07 = (void *)polybench_alloc_data(2000,8);
  auVar12 = __LCPI1_9;
  uVar13 = 0;
  do {
    *(double *)((long)__ptr_00 + uVar13 * 8) = (double)(int)uVar13;
    uVar15 = uVar13 + 1;
    dVar20 = (double)(int)uVar15 / 2000.0;
    *(double *)((long)__ptr_02 + uVar13 * 8) = dVar20 * 0.5;
    *(double *)((long)__ptr_01 + uVar13 * 8) = dVar20 * 0.25;
    *(double *)((long)__ptr_03 + uVar13 * 8) = dVar20 / 6.0;
    *(double *)((long)__ptr_06 + uVar13 * 8) = dVar20 * 0.125;
    *(double *)((long)__ptr_07 + uVar13 * 8) = dVar20 / 9.0;
    *(undefined8 *)((long)__ptr_05 + uVar13 * 8) = 0;
    *(undefined8 *)((long)__ptr_04 + uVar13 * 8) = 0;
    lVar14 = 0;
    uVar21 = 0;
    uVar22 = 1;
    do {
      uVar23 = (uVar21 & 0xffffffff) * (uVar13 & 0xffffffff);
      uVar25 = (uVar22 & 0xffffffff) * (uVar13 & 0xffffffff);
      auVar24 = divpd(CONCAT88((double)((int)uVar25 + (int)((uVar25 & 0xffffffff) / 2000) * -2000),
                               (double)((int)uVar23 + (int)((uVar23 & 0xffffffff) / 2000) * -2000)),
                      auVar12);
      *(undefined (*) [16])((long)__ptr + lVar14 * 8 + uVar13 * 16000) = auVar24;
      lVar14 = lVar14 + 2;
      uVar21 = uVar21 + 2;
      uVar22 = uVar22 + 2;
    } while (lVar14 != 2000);
    uVar13 = uVar15;
  } while (uVar15 != 2000);
  lVar14 = 0;
  lVar16 = 0;
  do {
    pvVar19 = (void *)((long)__ptr + lVar16 * 16000 + 16000);
    pvVar17 = (void *)(lVar16 * 16000 + (long)__ptr);
    if (((pvVar17 < (void *)((long)__ptr_00 + lVar16 * 8 + 8) &&
          (void *)((long)__ptr_00 + lVar16 * 8) < pvVar19) ||
        (pvVar17 < (void *)((long)__ptr_01 + 16000U) && __ptr_01 < pvVar19)) ||
       (pvVar17 < (void *)((long)__ptr_02 + lVar16 * 8 + 8) &&
        (void *)((long)__ptr_02 + lVar16 * 8) < pvVar19)) {
      lVar18 = 0;
LAB_00100970:
      do {
        *(double *)((long)pvVar17 + lVar18 * 8) =
             *(double *)((long)__ptr_02 + lVar16 * 8) * *(double *)((long)__ptr_03 + lVar18 * 8) +
             *(double *)((long)__ptr_00 + lVar16 * 8) * *(double *)((long)__ptr_01 + lVar18 * 8) +
             *(double *)((long)pvVar17 + lVar18 * 8);
        uVar13 = lVar18 * 8 | 8;
        *(double *)(uVar13 + (long)pvVar17) =
             *(double *)((long)__ptr_02 + lVar16 * 8) * *(double *)((long)__ptr_03 + uVar13) +
             *(double *)((long)__ptr_00 + lVar16 * 8) * *(double *)((long)__ptr_01 + uVar13) +
             *(double *)(uVar13 + (long)pvVar17);
        lVar18 = lVar18 + 2;
      } while (lVar18 != 2000);
    }
    else {
      lVar18 = 0;
      if (pvVar17 < (void *)((long)__ptr_03 + 16000U) && __ptr_03 < pvVar19) goto LAB_00100970;
      dVar20 = *(double *)((long)__ptr_00 + lVar16 * 8);
      dVar5 = *(double *)((long)__ptr_02 + lVar16 * 8);
      lVar18 = 0;
      do {
        pdVar1 = (double *)((long)pvVar17 + lVar18 * 8);
        pdVar2 = (double *)((long)pvVar17 + lVar18 * 8 + 0x10);
        dVar6 = *pdVar2;
        dVar7 = pdVar2[1];
        pdVar2 = (double *)((long)__ptr_01 + lVar18 * 8);
        pdVar3 = (double *)((long)__ptr_01 + lVar18 * 8 + 0x10);
        dVar8 = *pdVar3;
        dVar9 = pdVar3[1];
        pdVar4 = (double *)((long)__ptr_03 + lVar18 * 8);
        pdVar3 = (double *)((long)__ptr_03 + lVar18 * 8 + 0x10);
        dVar10 = *pdVar3;
        dVar11 = pdVar3[1];
        *(undefined (*) [16])((long)pvVar17 + lVar18 * 8) =
             CONCAT88(pdVar4[1] * dVar5 + pdVar2[1] * dVar20 + pdVar1[1],
                      *pdVar4 * dVar5 + *pdVar2 * dVar20 + *pdVar1);
        *(undefined (*) [16])((long)pvVar17 + lVar18 * 8 + 0x10) =
             CONCAT88(dVar11 * dVar5 + dVar9 * dVar20 + dVar7,
                      dVar10 * dVar5 + dVar8 * dVar20 + dVar6);
        lVar18 = lVar18 + 4;
      } while (lVar18 != 2000);
    }
    lVar16 = lVar16 + 1;
    if (lVar16 == 2000) {
      do {
        dVar20 = *(double *)((long)__ptr_05 + lVar14 * 8);
        uVar13 = 0;
        do {
          dVar20 = *(double *)((long)__ptr + lVar14 * 8 + uVar13 * 16000) * 1.2 *
                   *(double *)((long)__ptr_06 + uVar13 * 8) + dVar20;
          *(double *)((long)__ptr_05 + lVar14 * 8) = dVar20;
          dVar20 = *(double *)((long)__ptr + lVar14 * 8 + (uVar13 | 1) * 16000) * 1.2 *
                   *(double *)((long)__ptr_06 + (uVar13 | 1) * 8) + dVar20;
          *(double *)((long)__ptr_05 + lVar14 * 8) = dVar20;
          uVar13 = uVar13 + 2;
        } while (uVar13 != 2000);
        lVar14 = lVar14 + 1;
      } while (lVar14 != 2000);
      lVar14 = 0;
      if ((__ptr_05 < (void *)((long)__ptr_07 + 16000U)) &&
         (__ptr_07 < (void *)((long)__ptr_05 + 16000))) {
        do {
          uVar13 = lVar14 * 8;
          *(double *)((long)__ptr_05 + lVar14 * 8) =
               *(double *)((long)__ptr_05 + lVar14 * 8) + *(double *)((long)__ptr_07 + lVar14 * 8);
          uVar15 = uVar13 | 8;
          *(double *)((long)__ptr_05 + uVar15) =
               *(double *)((long)__ptr_05 + uVar15) + *(double *)((long)__ptr_07 + uVar15);
          uVar15 = uVar13 | 0x10;
          *(double *)((long)__ptr_05 + uVar15) =
               *(double *)((long)__ptr_05 + uVar15) + *(double *)((long)__ptr_07 + uVar15);
          uVar13 = uVar13 | 0x18;
          *(double *)((long)__ptr_05 + uVar13) =
               *(double *)((long)__ptr_05 + uVar13) + *(double *)((long)__ptr_07 + uVar13);
          lVar14 = lVar14 + 4;
        } while (lVar14 != 2000);
      }
      else {
        do {
          pdVar1 = (double *)((long)__ptr_05 + lVar14 * 8);
          pdVar2 = (double *)((long)__ptr_05 + lVar14 * 8 + 0x10);
          dVar20 = *pdVar2;
          dVar5 = pdVar2[1];
          pdVar2 = (double *)((long)__ptr_07 + lVar14 * 8);
          pdVar3 = (double *)((long)__ptr_07 + lVar14 * 8 + 0x10);
          dVar6 = *pdVar3;
          dVar7 = pdVar3[1];
          *(undefined (*) [16])((long)__ptr_05 + lVar14 * 8) =
               CONCAT88(pdVar2[1] + pdVar1[1],*pdVar2 + *pdVar1);
          *(undefined (*) [16])((long)__ptr_05 + lVar14 * 8 + 0x10) =
               CONCAT88(dVar7 + dVar5,dVar6 + dVar20);
          uVar13 = lVar14 * 8 | 0x20;
          pdVar1 = (double *)((long)__ptr_05 + uVar13 + 0x10);
          dVar20 = pdVar1[1];
          pdVar2 = (double *)((long)__ptr_07 + uVar13 + 0x10);
          dVar5 = *pdVar2;
          dVar6 = pdVar2[1];
          *(undefined (*) [16])((long)__ptr_05 + uVar13) =
               CONCAT88(((double *)((long)__ptr_07 + uVar13))[1] +
                        ((double *)((long)__ptr_05 + uVar13))[1],
                        *(double *)((long)__ptr_07 + uVar13) + *(double *)((long)__ptr_05 + uVar13))
          ;
          *(undefined (*) [16])((long)__ptr_05 + uVar13 + 0x10) =
               CONCAT88(dVar6 + dVar20,dVar5 + *pdVar1);
          lVar14 = lVar14 + 8;
        } while (lVar14 != 2000);
      }
      lVar14 = 0;
      do {
        dVar20 = *(double *)((long)__ptr_04 + lVar14 * 8);
        lVar16 = 0;
        do {
          dVar20 = *(double *)((long)__ptr + lVar16 * 8 + lVar14 * 16000) * 1.5 *
                   *(double *)((long)__ptr_05 + lVar16 * 8) + dVar20;
          *(double *)((long)__ptr_04 + lVar14 * 8) = dVar20;
          uVar13 = lVar16 * 8 | 8;
          dVar20 = *(double *)((long)__ptr + uVar13 + lVar14 * 16000) * 1.5 *
                   *(double *)((long)__ptr_05 + uVar13) + dVar20;
          *(double *)((long)__ptr_04 + lVar14 * 8) = dVar20;
          __stream = _DAT_48240c8948088b48;
          lVar16 = lVar16 + 2;
        } while (lVar16 != 2000);
        lVar14 = lVar14 + 1;
      } while (lVar14 != 2000);
      if ((0x2a < param_1) && (**param_2 == '\0')) {
        fwrite("==BEGIN DUMP_ARRAYS==\n",0x16,1,_DAT_48240c8948088b48);
        fprintf(__stream,"begin dump: %s",&_L_str_3);
        lVar14 = 0;
        do {
          if ((ushort)((ushort)((short)lVar14 * -0x3333) >> 2 | (short)lVar14 * 0x4000) < 0xccd) {
            fputc(10,__stream);
          }
          fprintf(__stream,"%0.2lf ",*(undefined8 *)((long)__ptr_04 + lVar14 * 8));
          lVar14 = lVar14 + 1;
        } while (lVar14 != 2000);
        fprintf(__stream,"\nend   dump: %s\n",&_L_str_3);
        fwrite("==END   DUMP_ARRAYS==\n",0x16,1,__stream);
      }
      free(__ptr);
      free(__ptr_00);
      free(__ptr_01);
      free(__ptr_02);
      free(__ptr_03);
      free(__ptr_04);
      free(__ptr_05);
      free(__ptr_06);
      free(__ptr_07);
      return 0;
    }
  } while( true );
}


