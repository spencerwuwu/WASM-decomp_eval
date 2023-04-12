#include "cholesky.h"



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 submain(int param_1,char **param_2)

{
  void *pvVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  FILE *__stream;
  double *__ptr;
  ulong uVar14;
  void *__s;
  long lVar15;
  double *pdVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  ulong uVar21;
  double *pdVar22;
  ulong uVar23;
  double *pdVar24;
  ulong uVar25;
  int iVar26;
  double dVar27;
  undefined auVar28 [16];
  undefined auVar29 [16];
  
  __ptr = (double *)polybench_alloc_data(4000000);
  uVar25 = 1;
  uVar23 = 0;
  auVar29 = __LCPI0_3;
  do {
    uVar21 = uVar23 + 1;
    if (uVar23 == 0) {
      uVar14 = 0;
LAB_00100100:
      do {
        __ptr[uVar23 * 2000 + uVar14] = (double)-(int)uVar14 / 2000.0 + 1.0;
        uVar14 = uVar14 + 1;
      } while (uVar14 != uVar25);
    }
    else {
      uVar14 = uVar21 & 0xfffffffffffffffe;
      uVar17 = 0;
      iVar26 = 0;
      do {
        auVar28 = divpd(CONCAT88((double)(int)((ulong)(double)-iVar26 >> 0x20),(double)-iVar26),
                        CONCAT88(0x409f400000000000,0x409f400000000000));
        *(undefined (*) [16])(__ptr + uVar23 * 2000 + uVar17) =
             CONCAT88(SUB168(auVar28 >> 0x40,0) + 1.0,SUB168(auVar28,0) + 1.0);
        uVar17 = uVar17 + 2;
        iVar26 = iVar26 + SUB164(auVar29,0);
      } while (uVar17 != uVar14);
      if (uVar21 != uVar14) goto LAB_00100100;
    }
    if (uVar23 < 1999) {
      memset(__ptr + uVar23 * 0x7d1 + 1,0,(uVar23 * -8 + 0x3e70 & 0x7fffffff8) + 8);
      auVar29 = __LCPI0_3;
    }
    __ptr[uVar23 * 0x7d1] = 1.0;
    uVar25 = uVar25 + 1;
    uVar23 = uVar21;
    if (uVar21 == 2000) {
      __s = (void *)polybench_alloc_data(4000000);
      memset(__s,0,32000000);
      lVar15 = 0;
      do {
        lVar20 = 0;
        do {
          pdVar16 = __ptr + lVar20 * 2000 + lVar15;
          pdVar24 = (double *)((long)__s + lVar20 * 16000 + 16000);
          pdVar22 = (double *)(lVar20 * 16000 + (long)__s);
          if (pdVar22 < __ptr + lVar15 + 0x3d0131 && __ptr + lVar15 < pdVar24) {
            uVar23 = 0;
LAB_00100330:
            do {
              pdVar22[uVar23] = *pdVar16 * __ptr[uVar23 * 2000 + lVar15] + pdVar22[uVar23];
              uVar25 = uVar23 | 1;
              pdVar22[uVar25] = *pdVar16 * __ptr[uVar25 * 2000 + lVar15] + pdVar22[uVar25];
              uVar23 = uVar23 + 2;
            } while (uVar23 != 2000);
          }
          else {
            uVar23 = 0;
            if (pdVar22 < __ptr + lVar15 + lVar20 * 2000 + 1 &&
                __ptr + lVar15 + lVar20 * 2000 < pdVar24) goto LAB_00100330;
            dVar27 = *pdVar16;
            uVar23 = 0;
            do {
              dVar4 = __ptr[(uVar23 | 2) * 2000 + lVar15];
              dVar5 = __ptr[(uVar23 | 3) * 2000 + lVar15];
              dVar6 = (pdVar22 + uVar23 + 2)[1];
              *(undefined (*) [16])(pdVar22 + uVar23) =
                   CONCAT88(__ptr[(uVar23 | 1) * 2000 + lVar15] * dVar27 + (pdVar22 + uVar23)[1],
                            __ptr[uVar23 * 2000 + lVar15] * dVar27 + pdVar22[uVar23]);
              *(undefined (*) [16])(pdVar22 + uVar23 + 2) =
                   CONCAT88(dVar5 * dVar27 + dVar6,dVar4 * dVar27 + pdVar22[uVar23 + 2]);
              uVar23 = uVar23 + 4;
            } while (uVar23 != 2000);
          }
          lVar20 = lVar20 + 1;
        } while (lVar20 != 2000);
        lVar15 = lVar15 + 1;
        if (lVar15 == 2000) {
          lVar15 = 0;
          do {
            lVar20 = lVar15 * 16000;
            pvVar1 = (void *)(lVar20 + (long)__s);
            lVar19 = 0;
            lVar18 = 0;
            if ((ulong)((long)__ptr + (lVar20 - (long)pvVar1)) < 0x20) {
              do {
                uVar23 = lVar18 * 8;
                __ptr[lVar15 * 2000 + lVar18] = *(double *)((long)pvVar1 + lVar18 * 8);
                *(undefined8 *)((long)__ptr + (uVar23 | 8) + lVar20) =
                     *(undefined8 *)((uVar23 | 8) + (long)pvVar1);
                *(undefined8 *)((long)__ptr + (uVar23 | 0x10) + lVar20) =
                     *(undefined8 *)((uVar23 | 0x10) + (long)pvVar1);
                *(undefined8 *)((long)__ptr + (uVar23 | 0x18) + lVar20) =
                     *(undefined8 *)((uVar23 | 0x18) + (long)pvVar1);
                lVar18 = lVar18 + 4;
              } while (lVar18 != 2000);
            }
            else {
              do {
                puVar2 = (undefined4 *)((long)pvVar1 + lVar19 * 8);
                uVar7 = puVar2[1];
                uVar8 = puVar2[2];
                uVar9 = puVar2[3];
                puVar3 = (undefined4 *)((long)pvVar1 + lVar19 * 8 + 0x10);
                uVar10 = *puVar3;
                uVar11 = puVar3[1];
                uVar12 = puVar3[2];
                uVar13 = puVar3[3];
                pdVar16 = __ptr + lVar15 * 2000 + lVar19;
                *(undefined4 *)pdVar16 = *puVar2;
                *(undefined4 *)((long)pdVar16 + 4) = uVar7;
                *(undefined4 *)(pdVar16 + 1) = uVar8;
                *(undefined4 *)((long)pdVar16 + 0xc) = uVar9;
                pdVar16 = __ptr + lVar15 * 2000 + lVar19 + 2;
                *(undefined4 *)pdVar16 = uVar10;
                *(undefined4 *)((long)pdVar16 + 4) = uVar11;
                *(undefined4 *)(pdVar16 + 1) = uVar12;
                *(undefined4 *)((long)pdVar16 + 0xc) = uVar13;
                uVar23 = lVar19 * 8 | 0x20;
                puVar2 = (undefined4 *)(uVar23 + (long)pvVar1);
                uVar7 = puVar2[1];
                uVar8 = puVar2[2];
                uVar9 = puVar2[3];
                auVar29 = *(undefined (*) [16])(uVar23 + 0x10 + (long)pvVar1);
                puVar3 = (undefined4 *)((long)__ptr + uVar23 + lVar20);
                *puVar3 = *puVar2;
                puVar3[1] = uVar7;
                puVar3[2] = uVar8;
                puVar3[3] = uVar9;
                *(undefined (*) [16])((long)__ptr + uVar23 + 0x10 + lVar20) = auVar29;
                lVar19 = lVar19 + 8;
              } while (lVar19 != 2000);
            }
            lVar15 = lVar15 + 1;
          } while (lVar15 != 2000);
          free(__s);
          uVar23 = 0;
          do {
            if (uVar23 == 0) {
              dVar27 = *__ptr;
            }
            else {
              pdVar16 = __ptr + uVar23 * 2000;
              uVar25 = 0;
              do {
                if (uVar25 == 0) {
                  dVar27 = *pdVar16;
                }
                else {
                  pdVar22 = pdVar16 + uVar25;
                  dVar27 = pdVar16[uVar25];
                  if (uVar25 == 1) {
                    lVar15 = 0;
                  }
                  else {
                    lVar15 = 0;
                    uVar21 = 0;
                    do {
                      dVar27 = dVar27 - pdVar16[lVar15] * __ptr[uVar25 * 2000 + lVar15];
                      *pdVar22 = dVar27;
                      uVar14 = lVar15 * 8 | 8;
                      dVar27 = dVar27 - *(double *)(uVar14 + (long)pdVar16) *
                                        *(double *)((long)__ptr + uVar14 + uVar25 * 16000);
                      *pdVar22 = dVar27;
                      lVar15 = lVar15 + 2;
                      uVar21 = uVar21 + 2;
                    } while (uVar21 != (uVar25 & 0x7ffffffffffffffe));
                  }
                  if ((uVar25 & 1) != 0) {
                    dVar27 = dVar27 - pdVar16[lVar15] * __ptr[uVar25 * 2000 + lVar15];
                    *pdVar22 = dVar27;
                  }
                }
                pdVar16[uVar25] = dVar27 / __ptr[uVar25 * 0x7d1];
                uVar25 = uVar25 + 1;
              } while (uVar25 != uVar23);
              pdVar22 = pdVar16 + uVar23;
              dVar27 = pdVar16[uVar23];
              if (uVar23 == 1) {
                lVar15 = 0;
              }
              else {
                lVar15 = 0;
                uVar25 = 0;
                do {
                  dVar27 = dVar27 - pdVar16[lVar15] * pdVar16[lVar15];
                  *pdVar22 = dVar27;
                  dVar4 = *(double *)((lVar15 * 8 | 8U) + (long)pdVar16);
                  dVar27 = dVar27 - dVar4 * dVar4;
                  *pdVar22 = dVar27;
                  lVar15 = lVar15 + 2;
                  uVar25 = uVar25 + 2;
                } while (uVar25 != (uVar23 & 0x7ffffffffffffffe));
              }
              if ((uVar23 & 1) != 0) {
                dVar27 = dVar27 - pdVar16[lVar15] * pdVar16[lVar15];
                *pdVar22 = dVar27;
              }
            }
            if (dVar27 < 0.0) {
              dVar27 = sqrt(dVar27);
            }
            else {
              dVar27 = SQRT(dVar27);
            }
            __ptr[uVar23 * 0x7d1] = dVar27;
            __stream = _DAT_1323d8d48308b4c;
            uVar23 = uVar23 + 1;
          } while (uVar23 != 2000);
          if ((0x2a < param_1) && (**param_2 == '\0')) {
            lVar15 = 1;
            fwrite(_L_str_1,0x16,1,_DAT_1323d8d48308b4c);
            lVar20 = 0;
            fprintf(__stream,"begin dump: %s",&_L_str_3);
            do {
              lVar18 = 0;
              do {
                if (((uint)(((int)lVar18 + (int)lVar20 * 2000) * -0x33333333) >> 2 |
                    (int)lVar18 * 0x40000000) < 0xccccccd) {
                  fputc(10,__stream);
                }
                fprintf(__stream,"%0.2lf ",__ptr[lVar20 * 2000 + lVar18]);
                lVar18 = lVar18 + 1;
              } while (lVar18 != lVar15);
              lVar20 = lVar20 + 1;
              lVar15 = lVar15 + 1;
            } while (lVar20 != 2000);
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


