#include "heat-3d.h"



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 submain(int param_1,char **param_2)

{
  long lVar1;
  long lVar2;
  double *pdVar3;
  double *pdVar4;
  double *pdVar5;
  double *pdVar6;
  double *pdVar7;
  double *pdVar8;
  int iVar9;
  undefined auVar10 [16];
  undefined auVar11 [16];
  FILE *__stream;
  void *__ptr;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  int iVar21;
  long lVar22;
  ulong uVar23;
  ulong uVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  undefined auVar29 [16];
  undefined auVar30 [16];
  
  __ptr = (void *)polybench_alloc_data(0x1a5e00,8);
  lVar12 = polybench_alloc_data(0x1a5e00,8);
  auVar11 = __LCPI0_2;
  auVar10 = __LCPI0_0;
  lVar13 = 0;
  do {
    lVar18 = 0;
    do {
      iVar21 = (int)lVar13 + 0x78 + (int)lVar18;
      lVar2 = lVar13 * 0x1c200 + lVar12 + lVar18 * 0x3c0;
      lVar22 = lVar18 * 0x3c0 + lVar13 * 0x1c200;
      if ((ulong)((long)__ptr + (lVar22 - lVar2)) < 0x10) {
        uVar23 = 0;
        do {
          dVar28 = ((double)(iVar21 - (int)uVar23) * 10.0) / 120.0;
          *(double *)(lVar2 + uVar23 * 8) = dVar28;
          *(double *)((long)__ptr + uVar23 * 8 + lVar22) = dVar28;
          uVar24 = uVar23 | 1;
          dVar28 = ((double)(iVar21 - (int)uVar24) * 10.0) / 120.0;
          *(double *)(lVar2 + uVar24 * 8) = dVar28;
          *(double *)((long)__ptr + uVar24 * 8 + lVar22) = dVar28;
          uVar23 = uVar23 + 2;
        } while (uVar23 != 0x78);
      }
      else {
        lVar14 = 0;
        auVar29 = auVar10;
        do {
          iVar9 = iVar21 - SUB164(auVar29,0);
          dVar28 = (double)iVar9;
          auVar30 = divpd(CONCAT88((double)(int)((ulong)dVar28 >> 0x20) * 10.0,dVar28 * 10.0),
                          auVar11);
          *(undefined (*) [16])(lVar2 + lVar14 * 8) = auVar30;
          *(undefined (*) [16])((long)__ptr + lVar14 * 8 + lVar22) = auVar30;
          dVar28 = (double)(iVar9 + -2);
          auVar30 = divpd(CONCAT88((double)(int)((ulong)dVar28 >> 0x20) * 10.0,dVar28 * 10.0),
                          auVar11);
          uVar23 = lVar14 * 8 | 0x10;
          *(undefined (*) [16])(uVar23 + lVar2) = auVar30;
          *(undefined (*) [16])((long)__ptr + uVar23 + lVar22) = auVar30;
          lVar14 = lVar14 + 4;
          auVar29 = CONCAT88(SUB168(auVar29 >> 0x40,0) + 4,SUB168(auVar29,0) + 4);
        } while (lVar14 != 0x78);
      }
      lVar18 = lVar18 + 1;
    } while (lVar18 != 0x78);
    lVar13 = lVar13 + 1;
  } while (lVar13 != 0x78);
  iVar21 = 1;
  do {
    lVar18 = 0;
    lVar13 = 1;
    do {
      lVar14 = lVar18 * 0x1c200;
      lVar2 = lVar13 + 1;
      lVar19 = 0;
      lVar22 = 1;
      do {
        lVar1 = lVar22 + 1;
        lVar15 = lVar19 * 0x3c0;
        if ((ulong)(lVar12 + lVar14 + 0x1c5c8 + lVar15) <
            (ulong)((long)__ptr + lVar15 + lVar14 + 0x38b78)) {
          lVar16 = 1;
          lVar17 = 0;
          if ((ulong)(lVar12 + lVar14 + 0x1c978 + lVar15) <=
              (ulong)((long)__ptr + lVar15 + lVar14 + 0x3c8)) goto LAB_001003e0;
          do {
            lVar17 = lVar22 * 0x3c0;
            lVar20 = lVar13 * 0x1c200;
            lVar15 = lVar17 + lVar20;
            dVar28 = *(double *)((long)__ptr + lVar16 * 8 + lVar15);
            dVar25 = dVar28 * -2.0;
            *(double *)(lVar20 + lVar12 + lVar17 + lVar16 * 8) =
                 (dVar25 + *(double *)((long)__ptr + lVar16 * 8 + lVar15 + 8) +
                 *(double *)((long)__ptr + lVar16 * 8 + lVar15 + -8)) * 0.125 +
                 (*(double *)((long)__ptr + lVar16 * 8 + lVar17 + lVar2 * 0x1c200) + dVar25 +
                 *(double *)((long)__ptr + lVar16 * 8 + lVar17 + (lVar13 + -1) * 0x1c200)) * 0.125 +
                 (*(double *)((long)__ptr + lVar16 * 8 + lVar1 * 0x3c0 + lVar20) + dVar25 +
                 *(double *)((long)__ptr + lVar16 * 8 + (lVar22 + -1) * 0x3c0 + lVar20)) * 0.125 +
                 dVar28;
            lVar16 = lVar16 + 1;
          } while (lVar16 != 0x77);
        }
        else {
          lVar17 = 0;
LAB_001003e0:
          do {
            lVar16 = lVar22 * 0x3c0;
            uVar23 = lVar17 * 8 | 8;
            pdVar3 = (double *)((long)__ptr + uVar23 + lVar16 + lVar2 * 0x1c200);
            lVar20 = lVar13 * 0x1c200;
            lVar15 = lVar16 + lVar20;
            pdVar4 = (double *)((long)__ptr + uVar23 + lVar15);
            dVar28 = *pdVar4;
            dVar25 = pdVar4[1];
            dVar26 = dVar28 * -2.0;
            dVar27 = dVar25 * -2.0;
            pdVar4 = (double *)((long)__ptr + uVar23 + lVar16 + (lVar13 + -1) * 0x1c200);
            pdVar5 = (double *)((long)__ptr + uVar23 + lVar1 * 0x3c0 + lVar20);
            pdVar6 = (double *)((long)__ptr + uVar23 + (lVar22 + -1) * 0x3c0 + lVar20);
            pdVar7 = (double *)((long)__ptr + lVar17 * 8 + lVar15);
            pdVar8 = (double *)((long)__ptr + lVar17 * 8 + lVar15 + 0x10);
            lVar17 = lVar17 + 2;
            *(undefined (*) [16])(uVar23 + lVar20 + lVar12 + lVar16) =
                 CONCAT88((pdVar8[1] + dVar27 + pdVar7[1]) * 0.125 +
                          (pdVar4[1] + pdVar3[1] + dVar27) * 0.125 +
                          (pdVar6[1] + pdVar5[1] + dVar27) * 0.125 + dVar25,
                          (*pdVar8 + dVar26 + *pdVar7) * 0.125 +
                          (*pdVar4 + *pdVar3 + dVar26) * 0.125 +
                          (*pdVar6 + *pdVar5 + dVar26) * 0.125 + dVar28);
          } while (lVar17 != 0x76);
        }
        lVar19 = lVar19 + 1;
        lVar22 = lVar1;
      } while (lVar1 != 0x77);
      lVar18 = lVar18 + 1;
      lVar13 = lVar2;
    } while (lVar2 != 0x77);
    lVar18 = 0;
    lVar13 = 1;
    do {
      lVar14 = lVar18 * 0x1c200;
      lVar2 = lVar13 + 1;
      lVar19 = 0;
      lVar22 = 1;
      do {
        lVar1 = lVar22 + 1;
        lVar15 = lVar19 * 0x3c0;
        if ((ulong)((long)__ptr + lVar15 + lVar14 + 0x1c5c8) <
            (ulong)(lVar14 + 0x38b78 + lVar12 + lVar15)) {
          lVar16 = 1;
          lVar17 = 0;
          if ((ulong)((long)__ptr + lVar15 + lVar14 + 0x1c978) <=
              (ulong)(lVar12 + lVar14 + 0x3c8 + lVar15)) goto LAB_00100690;
          do {
            lVar20 = lVar22 * 0x3c0;
            lVar15 = lVar12 + lVar13 * 0x1c200;
            lVar17 = lVar15 + lVar20;
            dVar28 = *(double *)(lVar17 + lVar16 * 8);
            dVar25 = dVar28 * -2.0;
            *(double *)((long)__ptr + lVar16 * 8 + lVar20 + lVar13 * 0x1c200) =
                 (dVar25 + *(double *)(lVar17 + 8 + lVar16 * 8) +
                 *(double *)(lVar17 + -8 + lVar16 * 8)) * 0.125 +
                 (*(double *)(lVar2 * 0x1c200 + lVar12 + lVar20 + lVar16 * 8) + dVar25 +
                 *(double *)((lVar13 + -1) * 0x1c200 + lVar12 + lVar20 + lVar16 * 8)) * 0.125 +
                 (*(double *)(lVar1 * 0x3c0 + lVar15 + lVar16 * 8) + dVar25 +
                 *(double *)((lVar22 + -1) * 0x3c0 + lVar15 + lVar16 * 8)) * 0.125 + dVar28;
            lVar16 = lVar16 + 1;
          } while (lVar16 != 0x77);
        }
        else {
          lVar17 = 0;
LAB_00100690:
          do {
            lVar20 = lVar22 * 0x3c0;
            uVar23 = lVar17 * 8 | 8;
            pdVar3 = (double *)(uVar23 + lVar2 * 0x1c200 + lVar12 + lVar20);
            lVar15 = lVar12 + lVar13 * 0x1c200;
            lVar16 = lVar15 + lVar20;
            dVar28 = *(double *)(uVar23 + lVar16);
            dVar25 = ((double *)(uVar23 + lVar16))[1];
            dVar26 = dVar28 * -2.0;
            dVar27 = dVar25 * -2.0;
            pdVar4 = (double *)(uVar23 + (lVar13 + -1) * 0x1c200 + lVar12 + lVar20);
            pdVar5 = (double *)(uVar23 + lVar1 * 0x3c0 + lVar15);
            pdVar6 = (double *)(uVar23 + (lVar22 + -1) * 0x3c0 + lVar15);
            pdVar7 = (double *)(lVar16 + lVar17 * 8);
            pdVar8 = (double *)(lVar16 + 0x10 + lVar17 * 8);
            lVar17 = lVar17 + 2;
            *(undefined (*) [16])((long)__ptr + uVar23 + lVar20 + lVar13 * 0x1c200) =
                 CONCAT88((pdVar8[1] + dVar27 + pdVar7[1]) * 0.125 +
                          (pdVar4[1] + pdVar3[1] + dVar27) * 0.125 +
                          (pdVar6[1] + pdVar5[1] + dVar27) * 0.125 + dVar25,
                          (*pdVar8 + dVar26 + *pdVar7) * 0.125 +
                          (*pdVar4 + *pdVar3 + dVar26) * 0.125 +
                          (*pdVar6 + *pdVar5 + dVar26) * 0.125 + dVar28);
          } while (lVar17 != 0x76);
        }
        __stream = _DAT_1853d8d48308b4c;
        lVar19 = lVar19 + 1;
        lVar22 = lVar1;
      } while (lVar1 != 0x77);
      lVar18 = lVar18 + 1;
      lVar13 = lVar2;
    } while (lVar2 != 0x77);
    iVar21 = iVar21 + 1;
    if (iVar21 == 0x1f5) {
      if ((0x2a < param_1) && (**param_2 == '\0')) {
        fwrite(_L_str_1,0x16,1,_DAT_1853d8d48308b4c);
        lVar12 = 0;
        fprintf(__stream,"begin dump: %s",&_L_str_3);
        do {
          lVar13 = 0;
          do {
            lVar18 = 0;
            do {
              if (((uint)(((int)lVar18 + (int)lVar13 * 0x78 + (int)lVar12 * 0x3840) * -0x33333333)
                   >> 2 | (int)lVar18 * 0x40000000) < 0xccccccd) {
                fputc(10,__stream);
              }
              fprintf(__stream,"%0.2lf ",
                      *(undefined8 *)((long)__ptr + lVar18 * 8 + lVar13 * 0x3c0 + lVar12 * 0x1c200))
              ;
              lVar18 = lVar18 + 1;
            } while (lVar18 != 0x78);
            lVar13 = lVar13 + 1;
          } while (lVar13 != 0x78);
          lVar12 = lVar12 + 1;
        } while (lVar12 != 0x78);
        fprintf(__stream,"\nend   dump: %s\n",&_L_str_3);
        fwrite("==END   DUMP_ARRAYS==\n",0x16,1,__stream);
      }
      free(__ptr);
      return 0;
    }
  } while( true );
}


