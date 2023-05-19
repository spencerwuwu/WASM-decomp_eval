#include "heat-3d.h"



void kernel_heat_3d(undefined8 param_1,int param_2,long param_3,long param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  double *pdVar4;
  long lVar5;
  long lVar6;
  double *pdVar7;
  double *pdVar8;
  double *pdVar9;
  double *pdVar10;
  double *pdVar11;
  double dVar12;
  ulong uVar13;
  ulong uVar14;
  int iVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  long lVar19;
  ulong uVar20;
  long lVar21;
  long lVar22;
  ulong uVar23;
  long lVar24;
  ulong uVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  
  uVar13 = (ulong)(param_2 - 1);
  lVar5 = uVar13 * 8 + 0x1c5c0;
  lVar6 = uVar13 * 8 + 0x387c0;
  uVar1 = uVar13 - 1;
  uVar20 = uVar1 & 0xfffffffffffffffe;
  iVar15 = 1;
  do {
    if (2 < param_2) {
      lVar16 = 0;
      uVar25 = 1;
      do {
        lVar21 = lVar16 * 0x1c200;
        uVar2 = uVar25 + 1;
        lVar22 = 0;
        uVar23 = 1;
        do {
          uVar3 = uVar23 + 1;
          uVar14 = 1;
          if (uVar1 < 2) {
LAB_001002a0:
            do {
              lVar19 = uVar23 * 0x3c0;
              lVar17 = param_3 + uVar25 * 0x1c200;
              lVar24 = lVar17 + lVar19;
              dVar12 = *(double *)(lVar24 + uVar14 * 8);
              dVar26 = dVar12 * -2.0;
              *(double *)(uVar25 * 0x1c200 + param_4 + lVar19 + uVar14 * 8) =
                   (dVar26 + *(double *)(lVar24 + 8 + uVar14 * 8) +
                   *(double *)(lVar24 + -8 + uVar14 * 8)) * 0.125 +
                   (*(double *)(uVar2 * 0x1c200 + param_3 + lVar19 + uVar14 * 8) + dVar26 +
                   *(double *)((uVar25 - 1) * 0x1c200 + param_3 + lVar19 + uVar14 * 8)) * 0.125 +
                   (*(double *)(uVar3 * 0x3c0 + lVar17 + uVar14 * 8) + dVar26 +
                   *(double *)((uVar23 - 1) * 0x3c0 + lVar17 + uVar14 * 8)) * 0.125 + dVar12;
              uVar14 = uVar14 + 1;
            } while (uVar14 != uVar13);
          }
          else {
            lVar17 = lVar22 * 0x3c0;
            if ((ulong)(param_4 + lVar21 + 0x1c5c8 + lVar17) <
                (ulong)(param_3 + lVar6 + lVar21 + lVar17)) {
              uVar18 = 0;
              if ((ulong)(param_3 + lVar21 + 0x3c8 + lVar17) <
                  (ulong)(param_4 + lVar5 + lVar21 + lVar17)) goto LAB_001002a0;
            }
            else {
              uVar18 = 0;
            }
            do {
              lVar24 = uVar23 * 0x3c0;
              uVar14 = uVar18 * 8 | 8;
              pdVar8 = (double *)(uVar14 + uVar2 * 0x1c200 + param_3 + lVar24);
              lVar17 = param_3 + uVar25 * 0x1c200;
              pdVar9 = (double *)(uVar14 + (uVar25 - 1) * 0x1c200 + param_3 + lVar24);
              pdVar10 = (double *)(uVar14 + uVar3 * 0x3c0 + lVar17);
              pdVar11 = (double *)(uVar14 + (uVar23 - 1) * 0x3c0 + lVar17);
              lVar17 = lVar17 + lVar24;
              dVar12 = *(double *)(uVar14 + lVar17);
              dVar26 = ((double *)(uVar14 + lVar17))[1];
              pdVar4 = (double *)(lVar17 + uVar18 * 8);
              pdVar7 = (double *)(lVar17 + 0x10 + uVar18 * 8);
              dVar27 = dVar12 * -2.0;
              dVar28 = dVar26 * -2.0;
              *(undefined (*) [16])(uVar14 + uVar25 * 0x1c200 + param_4 + lVar24) =
                   CONCAT88((pdVar7[1] + dVar28 + pdVar4[1]) * 0.125 +
                            (pdVar9[1] + pdVar8[1] + dVar28) * 0.125 +
                            (pdVar11[1] + pdVar10[1] + dVar28) * 0.125 + dVar26,
                            (*pdVar7 + dVar27 + *pdVar4) * 0.125 +
                            (*pdVar9 + *pdVar8 + dVar27) * 0.125 +
                            (*pdVar11 + *pdVar10 + dVar27) * 0.125 + dVar12);
              uVar18 = uVar18 + 2;
            } while (uVar18 != uVar20);
            uVar14 = uVar1 | 1;
            if (uVar1 != uVar20) goto LAB_001002a0;
          }
          lVar22 = lVar22 + 1;
          uVar23 = uVar3;
        } while (uVar3 != uVar13);
        lVar16 = lVar16 + 1;
        uVar25 = uVar2;
      } while (uVar2 != uVar13);
      if (2 < param_2) {
        lVar16 = 0;
        uVar25 = 1;
        do {
          lVar21 = lVar16 * 0x1c200;
          uVar2 = uVar25 + 1;
          lVar22 = 0;
          uVar23 = 1;
          do {
            uVar3 = uVar23 + 1;
            uVar14 = 1;
            if (uVar1 < 2) {
LAB_00100570:
              do {
                lVar19 = uVar23 * 0x3c0;
                lVar17 = param_4 + uVar25 * 0x1c200;
                lVar24 = lVar17 + lVar19;
                dVar12 = *(double *)(lVar24 + uVar14 * 8);
                dVar26 = dVar12 * -2.0;
                *(double *)(uVar25 * 0x1c200 + param_3 + lVar19 + uVar14 * 8) =
                     (dVar26 + *(double *)(lVar24 + 8 + uVar14 * 8) +
                     *(double *)(lVar24 + -8 + uVar14 * 8)) * 0.125 +
                     (*(double *)(uVar2 * 0x1c200 + param_4 + lVar19 + uVar14 * 8) + dVar26 +
                     *(double *)((uVar25 - 1) * 0x1c200 + param_4 + lVar19 + uVar14 * 8)) * 0.125 +
                     (*(double *)(uVar3 * 0x3c0 + lVar17 + uVar14 * 8) + dVar26 +
                     *(double *)((uVar23 - 1) * 0x3c0 + lVar17 + uVar14 * 8)) * 0.125 + dVar12;
                uVar14 = uVar14 + 1;
              } while (uVar14 != uVar13);
            }
            else {
              lVar17 = lVar22 * 0x3c0;
              if ((ulong)(param_3 + lVar21 + 0x1c5c8 + lVar17) <
                  (ulong)(param_4 + lVar6 + lVar21 + lVar17)) {
                uVar18 = 0;
                if ((ulong)(param_4 + lVar21 + 0x3c8 + lVar17) <
                    (ulong)(param_3 + lVar5 + lVar21 + lVar17)) goto LAB_00100570;
              }
              else {
                uVar18 = 0;
              }
              do {
                lVar24 = uVar23 * 0x3c0;
                uVar14 = uVar18 * 8 | 8;
                pdVar8 = (double *)(uVar14 + uVar2 * 0x1c200 + param_4 + lVar24);
                lVar17 = param_4 + uVar25 * 0x1c200;
                pdVar9 = (double *)(uVar14 + (uVar25 - 1) * 0x1c200 + param_4 + lVar24);
                pdVar10 = (double *)(uVar14 + uVar3 * 0x3c0 + lVar17);
                pdVar11 = (double *)(uVar14 + (uVar23 - 1) * 0x3c0 + lVar17);
                lVar17 = lVar17 + lVar24;
                dVar12 = *(double *)(uVar14 + lVar17);
                dVar26 = ((double *)(uVar14 + lVar17))[1];
                pdVar4 = (double *)(lVar17 + uVar18 * 8);
                pdVar7 = (double *)(lVar17 + 0x10 + uVar18 * 8);
                dVar27 = dVar12 * -2.0;
                dVar28 = dVar26 * -2.0;
                *(undefined (*) [16])(uVar14 + uVar25 * 0x1c200 + param_3 + lVar24) =
                     CONCAT88((pdVar7[1] + dVar28 + pdVar4[1]) * 0.125 +
                              (pdVar9[1] + pdVar8[1] + dVar28) * 0.125 +
                              (pdVar11[1] + pdVar10[1] + dVar28) * 0.125 + dVar26,
                              (*pdVar7 + dVar27 + *pdVar4) * 0.125 +
                              (*pdVar9 + *pdVar8 + dVar27) * 0.125 +
                              (*pdVar11 + *pdVar10 + dVar27) * 0.125 + dVar12);
                uVar18 = uVar18 + 2;
              } while (uVar18 != uVar20);
              uVar14 = uVar1 | 1;
              if (uVar1 != uVar20) goto LAB_00100570;
            }
            lVar22 = lVar22 + 1;
            uVar23 = uVar3;
          } while (uVar3 != uVar13);
          lVar16 = lVar16 + 1;
          uVar25 = uVar2;
        } while (uVar2 != uVar13);
      }
    }
    iVar15 = iVar15 + 1;
    if (iVar15 == 0x1f5) {
      return;
    }
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 submain(int param_1,char **param_2)

{
  long lVar1;
  long lVar2;
  undefined auVar3 [16];
  FILE *__stream;
  void *__ptr;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  double dVar12;
  int iVar13;
  undefined auVar14 [16];
  
  __ptr = (void *)polybench_alloc_data(0x1a5e00,8);
  lVar4 = polybench_alloc_data(0x1a5e00,8);
  auVar3 = __LCPI1_2;
  lVar5 = 0;
  do {
    lVar10 = lVar5 + 0x78;
    lVar7 = 0;
    do {
      iVar8 = (int)lVar10 + (int)lVar7;
      lVar1 = lVar5 * 0x1c200 + lVar4 + lVar7 * 0x3c0;
      lVar2 = lVar7 * 0x3c0 + lVar5 * 0x1c200;
      if ((ulong)((long)__ptr + (lVar2 - lVar1)) < 0x10) {
        uVar6 = 0;
        do {
          dVar12 = ((double)(iVar8 - (int)uVar6) * 10.0) / 120.0;
          *(double *)(lVar1 + uVar6 * 8) = dVar12;
          *(double *)((long)__ptr + uVar6 * 8 + lVar2) = dVar12;
          uVar11 = uVar6 | 1;
          dVar12 = ((double)(iVar8 - (int)uVar11) * 10.0) / 120.0;
          *(double *)(lVar1 + uVar11 * 8) = dVar12;
          *(double *)((long)__ptr + uVar11 * 8 + lVar2) = dVar12;
          uVar6 = uVar6 + 2;
        } while (uVar6 != 0x78);
      }
      else {
        lVar9 = 0;
        iVar13 = 0;
        do {
          dVar12 = (double)(iVar8 - iVar13);
          auVar14 = divpd(CONCAT88((double)(int)((ulong)dVar12 >> 0x20) * 10.0,dVar12 * 10.0),auVar3
                         );
          *(undefined (*) [16])(lVar1 + lVar9 * 8) = auVar14;
          *(undefined (*) [16])((long)__ptr + lVar9 * 8 + lVar2) = auVar14;
          dVar12 = (double)((iVar8 - iVar13) + -2);
          auVar14 = divpd(CONCAT88((double)(int)((ulong)dVar12 >> 0x20) * 10.0,dVar12 * 10.0),auVar3
                         );
          uVar6 = lVar9 * 8 | 0x10;
          *(undefined (*) [16])(uVar6 + lVar1) = auVar14;
          *(undefined (*) [16])((long)__ptr + uVar6 + lVar2) = auVar14;
          lVar9 = lVar9 + 4;
          iVar13 = iVar13 + 4;
        } while (lVar9 != 0x78);
      }
      lVar7 = lVar7 + 1;
    } while (lVar7 != 0x78);
    lVar5 = lVar5 + 1;
  } while (lVar5 != 0x78);
  kernel_heat_3d(lVar10,0x78,__ptr,lVar4);
  __stream = _DAT_1843d8d48308b4c;
  if ((0x2a < param_1) && (**param_2 == '\0')) {
    fwrite(_L_str_1,0x16,1,_DAT_1843d8d48308b4c);
    lVar4 = 0;
    fprintf(__stream,"begin dump: %s",&_L_str_3);
    do {
      lVar5 = 0;
      do {
        lVar10 = 0;
        do {
          if (((uint)(((int)lVar5 * 0x78 + (int)lVar4 * 0x3840 + (int)lVar10) * -0x33333333) >> 2 |
              (int)lVar10 * 0x40000000) < 0xccccccd) {
            fputc(10,__stream);
          }
          fprintf(__stream,"%0.2lf ",
                  *(undefined8 *)((long)__ptr + lVar10 * 8 + lVar5 * 0x3c0 + lVar4 * 0x1c200));
          lVar10 = lVar10 + 1;
        } while (lVar10 != 0x78);
        lVar5 = lVar5 + 1;
      } while (lVar5 != 0x78);
      lVar4 = lVar4 + 1;
    } while (lVar4 != 0x78);
    fprintf(__stream,"\nend   dump: %s\n",&_L_str_3);
    fwrite("==END   DUMP_ARRAYS==\n",0x16,1,__stream);
  }
  free(__ptr);
  return 0;
}


