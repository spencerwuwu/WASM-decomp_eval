#include "lu.h"



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 submain(int param_1,char **param_2)

{
  undefined4 *puVar1;
  double *pdVar2;
  undefined4 *puVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  FILE *__stream;
  void *__ptr;
  ulong uVar15;
  void *__s;
  long lVar16;
  ulong uVar17;
  double *pdVar18;
  long lVar19;
  long lVar20;
  ulong uVar21;
  long lVar22;
  void *pvVar23;
  ulong uVar24;
  void *pvVar25;
  ulong uVar26;
  int iVar27;
  double dVar28;
  undefined auVar29 [16];
  undefined auVar30 [16];
  
  __ptr = (void *)polybench_alloc_data(4000000);
  uVar26 = 1;
  uVar24 = 0;
  auVar30 = __LCPI0_3;
  do {
    uVar21 = uVar24 + 1;
    if (uVar24 == 0) {
      uVar15 = 0;
LAB_00100100:
      do {
        *(double *)((long)__ptr + uVar15 * 8 + uVar24 * 16000) = (double)-(int)uVar15 / 2000.0 + 1.0
        ;
        uVar15 = uVar15 + 1;
      } while (uVar15 != uVar26);
    }
    else {
      uVar15 = uVar21 & 0xfffffffffffffffe;
      uVar17 = 0;
      iVar27 = 0;
      do {
        auVar29 = divpd(CONCAT88((double)(int)((ulong)(double)-iVar27 >> 0x20),(double)-iVar27),
                        CONCAT88(0x409f400000000000,0x409f400000000000));
        *(undefined (*) [16])((long)__ptr + uVar17 * 8 + uVar24 * 16000) =
             CONCAT88(SUB168(auVar29 >> 0x40,0) + 1.0,SUB168(auVar29,0) + 1.0);
        uVar17 = uVar17 + 2;
        iVar27 = iVar27 + SUB164(auVar30,0);
      } while (uVar17 != uVar15);
      if (uVar21 != uVar15) goto LAB_00100100;
    }
    if (uVar24 < 1999) {
      memset((void *)(uVar24 * 0x3e88 + 8 + (long)__ptr),0,(uVar24 * -8 + 0x3e70 & 0x7fffffff8) + 8)
      ;
      auVar30 = __LCPI0_3;
    }
    *(undefined8 *)(uVar24 * 0x3e88 + (long)__ptr) = 0x3ff0000000000000;
    uVar26 = uVar26 + 1;
    uVar24 = uVar21;
    if (uVar21 == 2000) {
      __s = (void *)polybench_alloc_data(4000000);
      memset(__s,0,32000000);
      lVar16 = 0;
      do {
        lVar20 = 0;
        do {
          lVar22 = lVar20 * 16000;
          pdVar18 = (double *)((long)__ptr + lVar16 * 8 + lVar22);
          pvVar25 = (void *)((long)__s + lVar22 + 16000);
          pvVar23 = (void *)(lVar22 + (long)__s);
          if (pvVar23 < (void *)((long)__ptr + lVar16 * 8 + 0x1e80988) &&
              (void *)((long)__ptr + lVar16 * 8) < pvVar25) {
            uVar24 = 0;
LAB_00100330:
            do {
              *(double *)((long)pvVar23 + uVar24 * 8) =
                   *pdVar18 * *(double *)((long)__ptr + lVar16 * 8 + uVar24 * 16000) +
                   *(double *)((long)pvVar23 + uVar24 * 8);
              uVar26 = uVar24 | 1;
              *(double *)((long)pvVar23 + uVar26 * 8) =
                   *pdVar18 * *(double *)((long)__ptr + lVar16 * 8 + uVar26 * 16000) +
                   *(double *)((long)pvVar23 + uVar26 * 8);
              uVar24 = uVar24 + 2;
            } while (uVar24 != 2000);
          }
          else {
            uVar24 = 0;
            if (pvVar23 < (void *)((long)__ptr + lVar22 + lVar16 * 8 + 8) &&
                (void *)((long)__ptr + lVar22 + lVar16 * 8) < pvVar25) goto LAB_00100330;
            dVar28 = *pdVar18;
            uVar24 = 0;
            do {
              dVar4 = *(double *)((long)__ptr + lVar16 * 8 + (uVar24 | 2) * 16000);
              dVar5 = *(double *)((long)__ptr + lVar16 * 8 + (uVar24 | 3) * 16000);
              pdVar18 = (double *)((long)pvVar23 + uVar24 * 8);
              pdVar2 = (double *)((long)pvVar23 + uVar24 * 8 + 0x10);
              dVar6 = *pdVar2;
              dVar7 = pdVar2[1];
              *(undefined (*) [16])((long)pvVar23 + uVar24 * 8) =
                   CONCAT88(*(double *)((long)__ptr + lVar16 * 8 + (uVar24 | 1) * 16000) * dVar28 +
                            pdVar18[1],
                            *(double *)((long)__ptr + lVar16 * 8 + uVar24 * 16000) * dVar28 +
                            *pdVar18);
              *(undefined (*) [16])((long)pvVar23 + uVar24 * 8 + 0x10) =
                   CONCAT88(dVar5 * dVar28 + dVar7,dVar4 * dVar28 + dVar6);
              uVar24 = uVar24 + 4;
            } while (uVar24 != 2000);
          }
          lVar20 = lVar20 + 1;
        } while (lVar20 != 2000);
        lVar16 = lVar16 + 1;
        if (lVar16 == 2000) {
          lVar16 = 0;
          do {
            lVar20 = lVar16 * 16000;
            pvVar23 = (void *)(lVar20 + (long)__s);
            lVar19 = 0;
            lVar22 = 0;
            if ((ulong)((long)__ptr + (lVar20 - (long)pvVar23)) < 0x20) {
              do {
                uVar24 = lVar22 * 8;
                *(undefined8 *)((long)__ptr + lVar22 * 8 + lVar20) =
                     *(undefined8 *)((long)pvVar23 + lVar22 * 8);
                *(undefined8 *)((long)__ptr + (uVar24 | 8) + lVar20) =
                     *(undefined8 *)((uVar24 | 8) + (long)pvVar23);
                *(undefined8 *)((long)__ptr + (uVar24 | 0x10) + lVar20) =
                     *(undefined8 *)((uVar24 | 0x10) + (long)pvVar23);
                *(undefined8 *)((long)__ptr + (uVar24 | 0x18) + lVar20) =
                     *(undefined8 *)((uVar24 | 0x18) + (long)pvVar23);
                lVar22 = lVar22 + 4;
              } while (lVar22 != 2000);
            }
            else {
              do {
                puVar1 = (undefined4 *)((long)pvVar23 + lVar19 * 8);
                uVar8 = puVar1[1];
                uVar9 = puVar1[2];
                uVar10 = puVar1[3];
                puVar3 = (undefined4 *)((long)pvVar23 + lVar19 * 8 + 0x10);
                uVar11 = *puVar3;
                uVar12 = puVar3[1];
                uVar13 = puVar3[2];
                uVar14 = puVar3[3];
                puVar3 = (undefined4 *)((long)__ptr + lVar19 * 8 + lVar20);
                *puVar3 = *puVar1;
                puVar3[1] = uVar8;
                puVar3[2] = uVar9;
                puVar3[3] = uVar10;
                puVar1 = (undefined4 *)((long)__ptr + lVar19 * 8 + lVar20 + 0x10);
                *puVar1 = uVar11;
                puVar1[1] = uVar12;
                puVar1[2] = uVar13;
                puVar1[3] = uVar14;
                uVar24 = lVar19 * 8 | 0x20;
                puVar1 = (undefined4 *)(uVar24 + (long)pvVar23);
                uVar8 = puVar1[1];
                uVar9 = puVar1[2];
                uVar10 = puVar1[3];
                auVar30 = *(undefined (*) [16])(uVar24 + 0x10 + (long)pvVar23);
                puVar3 = (undefined4 *)((long)__ptr + uVar24 + lVar20);
                *puVar3 = *puVar1;
                puVar3[1] = uVar8;
                puVar3[2] = uVar9;
                puVar3[3] = uVar10;
                *(undefined (*) [16])((long)__ptr + uVar24 + 0x10 + lVar20) = auVar30;
                lVar19 = lVar19 + 8;
              } while (lVar19 != 2000);
            }
            lVar16 = lVar16 + 1;
          } while (lVar16 != 2000);
          free(__s);
          uVar24 = 0;
          do {
            if (uVar24 != 0) {
              pdVar18 = (double *)(uVar24 * 16000 + (long)__ptr);
              uVar26 = 0;
              do {
                if (uVar26 == 0) {
                  dVar28 = *pdVar18;
                }
                else {
                  pdVar2 = pdVar18 + uVar26;
                  dVar28 = pdVar18[uVar26];
                  if (uVar26 == 1) {
                    uVar21 = 0;
                  }
                  else {
                    uVar21 = 0;
                    uVar15 = 0;
                    do {
                      dVar28 = dVar28 - pdVar18[uVar21] *
                                        *(double *)((long)__ptr + uVar26 * 8 + uVar21 * 16000);
                      *pdVar2 = dVar28;
                      dVar28 = dVar28 - pdVar18[uVar21 | 1] *
                                        *(double *)((long)__ptr + uVar26 * 8 + (uVar21 | 1) * 16000)
                      ;
                      *pdVar2 = dVar28;
                      uVar21 = uVar21 + 2;
                      uVar15 = uVar15 + 2;
                    } while (uVar15 != (uVar26 & 0x7ffffffffffffffe));
                  }
                  if ((uVar26 & 1) != 0) {
                    dVar28 = dVar28 - pdVar18[uVar21] *
                                      *(double *)((long)__ptr + uVar26 * 8 + uVar21 * 16000);
                    *pdVar2 = dVar28;
                  }
                }
                pdVar18[uVar26] = dVar28 / *(double *)(uVar26 * 0x3e88 + (long)__ptr);
                uVar26 = uVar26 + 1;
              } while (uVar26 != uVar24);
            }
            uVar26 = uVar24;
            do {
              if (uVar24 != 0) {
                pdVar18 = (double *)((long)__ptr + uVar26 * 8 + uVar24 * 16000);
                dVar28 = *(double *)((long)__ptr + uVar26 * 8 + uVar24 * 16000);
                uVar21 = 0;
                uVar15 = 0;
                if (uVar24 != 1) {
                  do {
                    dVar28 = dVar28 - *(double *)((long)__ptr + uVar21 * 8 + uVar24 * 16000) *
                                      *(double *)((long)__ptr + uVar26 * 8 + uVar21 * 16000);
                    *pdVar18 = dVar28;
                    dVar28 = dVar28 - *(double *)((long)__ptr + (uVar21 | 1) * 8 + uVar24 * 16000) *
                                      *(double *)((long)__ptr + uVar26 * 8 + (uVar21 | 1) * 16000);
                    *pdVar18 = dVar28;
                    uVar21 = uVar21 + 2;
                    uVar15 = uVar15 + 2;
                  } while (uVar15 != (uVar24 & 0x7ffffffffffffffe));
                }
                if ((uVar24 & 1) != 0) {
                  *pdVar18 = dVar28 - *(double *)((long)__ptr + uVar21 * 8 + uVar24 * 16000) *
                                      *(double *)((long)__ptr + uVar26 * 8 + uVar21 * 16000);
                }
              }
              __stream = _DAT_1283d8d48308b4c;
              uVar26 = uVar26 + 1;
            } while (uVar26 != 2000);
            uVar24 = uVar24 + 1;
          } while (uVar24 != 2000);
          if ((0x2a < param_1) && (**param_2 == '\0')) {
            fwrite(_L_str_1,0x16,1,_DAT_1283d8d48308b4c);
            lVar16 = 0;
            fprintf(__stream,"begin dump: %s",&_L_str_3);
            do {
              lVar20 = 0;
              do {
                if (((uint)(((int)lVar20 + (int)lVar16 * 2000) * -0x33333333) >> 2 |
                    (int)lVar20 * 0x40000000) < 0xccccccd) {
                  fputc(10,__stream);
                }
                fprintf(__stream,"%0.2lf ",
                        *(undefined8 *)((long)__ptr + lVar20 * 8 + lVar16 * 16000));
                lVar20 = lVar20 + 1;
              } while (lVar20 != 2000);
              lVar16 = lVar16 + 1;
            } while (lVar16 != 2000);
            fprintf(__stream,"\nend   dump: %s\n",&_L_str_3);
            fwrite("==END   DUMP_ARRAYS==\n",0x16,1,__stream);
          }
          free(__ptr);
          return 0;
        }
      } while( true );
    }
  } while( true );
}


