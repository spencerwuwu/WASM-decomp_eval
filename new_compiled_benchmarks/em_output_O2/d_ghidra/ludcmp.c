#include "ludcmp.h"



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 submain(int param_1,char **param_2)

{
  double *pdVar1;
  undefined4 *puVar2;
  double *pdVar3;
  undefined4 *puVar4;
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
  void *__ptr_00;
  void *__ptr_01;
  void *__ptr_02;
  ulong uVar15;
  void *__s;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  void *pvVar23;
  void *pvVar24;
  ulong uVar25;
  bool bVar26;
  int iVar27;
  double dVar28;
  undefined auVar29 [16];
  undefined auVar30 [16];
  
  __ptr = (void *)polybench_alloc_data(4000000,8);
  __ptr_00 = (void *)polybench_alloc_data(2000,8);
  __ptr_01 = (void *)polybench_alloc_data(2000,8);
  __ptr_02 = (void *)polybench_alloc_data(2000);
  auVar29 = __LCPI0_1;
  uVar18 = 0;
  if ((((ulong)((long)__ptr_02 - (long)__ptr_01) < 0x10) ||
      ((ulong)((long)__ptr_00 - (long)__ptr_01) < 0x10)) ||
     ((ulong)((long)__ptr_00 - (long)__ptr_02) < 0x10)) {
    do {
      *(undefined8 *)((long)__ptr_01 + uVar18 * 8) = 0;
      *(undefined8 *)((long)__ptr_02 + uVar18 * 8) = 0;
      uVar25 = uVar18 | 1;
      *(double *)((long)__ptr_00 + uVar18 * 8) = ((double)(int)uVar25 / 2000.0) * 0.5 + 4.0;
      *(undefined8 *)((long)__ptr_01 + uVar25 * 8) = 0;
      *(undefined8 *)((long)__ptr_02 + uVar25 * 8) = 0;
      uVar18 = uVar18 + 2;
      *(double *)((long)__ptr_00 + uVar25 * 8) = ((double)(int)uVar18 / 2000.0) * 0.5 + 4.0;
    } while (uVar18 != 2000);
  }
  else {
    iVar27 = 0;
    do {
      *(undefined (*) [16])((long)__ptr_01 + uVar18 * 8) = ZEXT816(0);
      *(undefined (*) [16])((long)__ptr_02 + uVar18 * 8) = ZEXT816(0);
      auVar30 = divpd(CONCAT88((double)(int)((ulong)(double)(iVar27 + 1) >> 0x20),
                               (double)(iVar27 + 1)),auVar29);
      pdVar1 = (double *)((long)__ptr_00 + uVar18 * 8);
      *pdVar1 = SUB168(auVar30,0) * 0.5 + 4.0;
      pdVar1[1] = SUB168(auVar30 >> 0x40,0) * 0.5 + 4.0;
      uVar18 = uVar18 + 2;
      iVar27 = iVar27 + 2;
    } while (uVar18 != 2000);
  }
  uVar25 = 1;
  uVar18 = 0;
  auVar29 = __LCPI0_10;
  do {
    uVar19 = uVar18 + 1;
    if (uVar18 == 0) {
      uVar15 = 0;
LAB_00100260:
      do {
        *(double *)((long)__ptr + uVar15 * 8 + uVar18 * 16000) = (double)-(int)uVar15 / 2000.0 + 1.0
        ;
        uVar15 = uVar15 + 1;
      } while (uVar15 != uVar25);
    }
    else {
      uVar15 = uVar19 & 0xfffffffffffffffe;
      uVar17 = 0;
      iVar27 = 0;
      do {
        auVar30 = divpd(CONCAT88((double)(int)((ulong)(double)-iVar27 >> 0x20),(double)-iVar27),
                        CONCAT88(0x409f400000000000,0x409f400000000000));
        *(undefined (*) [16])((long)__ptr + uVar17 * 8 + uVar18 * 16000) =
             CONCAT88(SUB168(auVar30 >> 0x40,0) + 1.0,SUB168(auVar30,0) + 1.0);
        uVar17 = uVar17 + 2;
        iVar27 = iVar27 + SUB164(auVar29,0);
      } while (uVar17 != uVar15);
      if (uVar19 != uVar15) goto LAB_00100260;
    }
    if (uVar18 < 1999) {
      memset((void *)(uVar18 * 0x3e88 + 8 + (long)__ptr),0,(uVar18 * -8 + 0x3e70 & 0x7fffffff8) + 8)
      ;
      auVar29 = __LCPI0_10;
    }
    *(undefined8 *)(uVar18 * 0x3e88 + (long)__ptr) = 0x3ff0000000000000;
    uVar25 = uVar25 + 1;
    uVar18 = uVar19;
    if (uVar19 == 2000) {
      __s = (void *)polybench_alloc_data(4000000);
      memset(__s,0,32000000);
      lVar16 = 0;
      do {
        lVar21 = 0;
        do {
          lVar22 = lVar21 * 16000;
          pdVar1 = (double *)((long)__ptr + lVar16 * 8 + lVar22);
          pvVar24 = (void *)((long)__s + lVar22 + 16000);
          pvVar23 = (void *)(lVar22 + (long)__s);
          if (pvVar23 < (void *)((long)__ptr + lVar16 * 8 + 0x1e80988) &&
              (void *)((long)__ptr + lVar16 * 8) < pvVar24) {
            uVar18 = 0;
LAB_001004a0:
            do {
              *(double *)((long)pvVar23 + uVar18 * 8) =
                   *pdVar1 * *(double *)((long)__ptr + lVar16 * 8 + uVar18 * 16000) +
                   *(double *)((long)pvVar23 + uVar18 * 8);
              uVar25 = uVar18 | 1;
              *(double *)((long)pvVar23 + uVar25 * 8) =
                   *pdVar1 * *(double *)((long)__ptr + lVar16 * 8 + uVar25 * 16000) +
                   *(double *)((long)pvVar23 + uVar25 * 8);
              uVar18 = uVar18 + 2;
            } while (uVar18 != 2000);
          }
          else {
            uVar18 = 0;
            if (pvVar23 < (void *)((long)__ptr + lVar22 + lVar16 * 8 + 8) &&
                (void *)((long)__ptr + lVar22 + lVar16 * 8) < pvVar24) goto LAB_001004a0;
            dVar28 = *pdVar1;
            uVar18 = 0;
            do {
              dVar5 = *(double *)((long)__ptr + lVar16 * 8 + (uVar18 | 2) * 16000);
              pdVar1 = (double *)((long)pvVar23 + uVar18 * 8);
              pdVar3 = (double *)((long)pvVar23 + uVar18 * 8 + 0x10);
              dVar7 = *pdVar3;
              dVar6 = *(double *)((long)__ptr + lVar16 * 8 + (uVar18 | 3) * 16000) * dVar28 +
                      pdVar3[1];
              *(undefined (*) [16])((long)pvVar23 + uVar18 * 8) =
                   CONCAT88(*(double *)((long)__ptr + lVar16 * 8 + (uVar18 | 1) * 16000) * dVar28 +
                            pdVar1[1],
                            *(double *)((long)__ptr + lVar16 * 8 + uVar18 * 16000) * dVar28 +
                            *pdVar1);
              *(undefined (*) [16])((long)pvVar23 + uVar18 * 8 + 0x10) =
                   CONCAT412((int)((ulong)dVar6 >> 0x20),
                             CONCAT48(SUB84(dVar6,0),dVar5 * dVar28 + dVar7));
              uVar18 = uVar18 + 4;
            } while (uVar18 != 2000);
          }
          lVar21 = lVar21 + 1;
        } while (lVar21 != 2000);
        lVar16 = lVar16 + 1;
        if (lVar16 == 2000) {
          lVar16 = 0;
          do {
            lVar21 = lVar16 * 16000;
            pvVar23 = (void *)(lVar21 + (long)__s);
            lVar20 = 0;
            lVar22 = 0;
            if ((ulong)((long)__ptr + (lVar21 - (long)pvVar23)) < 0x20) {
              do {
                uVar18 = lVar22 * 8;
                *(undefined8 *)((long)__ptr + lVar22 * 8 + lVar21) =
                     *(undefined8 *)((long)pvVar23 + lVar22 * 8);
                *(undefined8 *)((long)__ptr + (uVar18 | 8) + lVar21) =
                     *(undefined8 *)((uVar18 | 8) + (long)pvVar23);
                *(undefined8 *)((long)__ptr + (uVar18 | 0x10) + lVar21) =
                     *(undefined8 *)((uVar18 | 0x10) + (long)pvVar23);
                *(undefined8 *)((long)__ptr + (uVar18 | 0x18) + lVar21) =
                     *(undefined8 *)((uVar18 | 0x18) + (long)pvVar23);
                lVar22 = lVar22 + 4;
              } while (lVar22 != 2000);
            }
            else {
              do {
                puVar2 = (undefined4 *)((long)pvVar23 + lVar20 * 8);
                uVar8 = puVar2[1];
                uVar9 = puVar2[2];
                uVar10 = puVar2[3];
                puVar4 = (undefined4 *)((long)pvVar23 + lVar20 * 8 + 0x10);
                uVar11 = *puVar4;
                uVar12 = puVar4[1];
                uVar13 = puVar4[2];
                uVar14 = puVar4[3];
                puVar4 = (undefined4 *)((long)__ptr + lVar20 * 8 + lVar21);
                *puVar4 = *puVar2;
                puVar4[1] = uVar8;
                puVar4[2] = uVar9;
                puVar4[3] = uVar10;
                puVar2 = (undefined4 *)((long)__ptr + lVar20 * 8 + lVar21 + 0x10);
                *puVar2 = uVar11;
                puVar2[1] = uVar12;
                puVar2[2] = uVar13;
                puVar2[3] = uVar14;
                uVar18 = lVar20 * 8 | 0x20;
                puVar2 = (undefined4 *)(uVar18 + (long)pvVar23);
                uVar8 = puVar2[1];
                uVar9 = puVar2[2];
                uVar10 = puVar2[3];
                auVar29 = *(undefined (*) [16])(uVar18 + 0x10 + (long)pvVar23);
                puVar4 = (undefined4 *)((long)__ptr + uVar18 + lVar21);
                *puVar4 = *puVar2;
                puVar4[1] = uVar8;
                puVar4[2] = uVar9;
                puVar4[3] = uVar10;
                *(undefined (*) [16])((long)__ptr + uVar18 + 0x10 + lVar21) = auVar29;
                lVar20 = lVar20 + 8;
              } while (lVar20 != 2000);
            }
            lVar16 = lVar16 + 1;
          } while (lVar16 != 2000);
          free(__s);
          uVar18 = 0;
          uVar25 = 0;
          do {
            if (uVar25 != 0) {
              uVar19 = 0;
              do {
                dVar28 = *(double *)((long)__ptr + uVar19 * 8 + uVar25 * 16000);
                if (uVar19 != 0) {
                  if (uVar19 == 1) {
                    uVar15 = 0;
                  }
                  else {
                    uVar15 = 0;
                    uVar17 = 0;
                    do {
                      dVar28 = (dVar28 - *(double *)((long)__ptr + uVar15 * 8 + uVar25 * 16000) *
                                         *(double *)((long)__ptr + uVar19 * 8 + uVar15 * 16000)) -
                               *(double *)((long)__ptr + (uVar15 | 1) * 8 + uVar25 * 16000) *
                               *(double *)((long)__ptr + uVar19 * 8 + (uVar15 | 1) * 16000);
                      uVar15 = uVar15 + 2;
                      uVar17 = uVar17 + 2;
                    } while (uVar17 != (uVar19 & 0x7ffffffffffffffe));
                  }
                  if ((uVar19 & 1) != 0) {
                    dVar28 = dVar28 - *(double *)((long)__ptr + uVar15 * 8 + uVar25 * 16000) *
                                      *(double *)((long)__ptr + uVar19 * 8 + uVar15 * 16000);
                  }
                }
                *(double *)((long)__ptr + uVar19 * 8 + uVar25 * 16000) =
                     dVar28 / *(double *)(uVar19 * 0x3e88 + (long)__ptr);
                uVar19 = uVar19 + 1;
              } while (uVar19 != uVar25);
            }
            uVar19 = uVar25;
            do {
              dVar28 = *(double *)((long)__ptr + uVar19 * 8 + uVar25 * 16000);
              if (uVar25 != 0) {
                uVar15 = 0;
                uVar17 = 0;
                if (uVar25 != 1) {
                  do {
                    dVar28 = (dVar28 - *(double *)((long)__ptr + uVar15 * 8 + uVar25 * 16000) *
                                       *(double *)((long)__ptr + uVar19 * 8 + uVar15 * 16000)) -
                             *(double *)((long)__ptr + (uVar15 | 1) * 8 + uVar25 * 16000) *
                             *(double *)((long)__ptr + uVar19 * 8 + (uVar15 | 1) * 16000);
                    uVar15 = uVar15 + 2;
                    uVar17 = uVar17 + 2;
                  } while (uVar17 != (uVar25 & 0x7ffffffffffffffe));
                }
                if ((uVar25 & 1) != 0) {
                  dVar28 = dVar28 - *(double *)((long)__ptr + uVar15 * 8 + uVar25 * 16000) *
                                    *(double *)((long)__ptr + uVar19 * 8 + uVar15 * 16000);
                }
              }
              *(double *)((long)__ptr + uVar19 * 8 + uVar25 * 16000) = dVar28;
              uVar19 = uVar19 + 1;
            } while (uVar19 != 2000);
            uVar25 = uVar25 + 1;
          } while (uVar25 != 2000);
          uVar25 = 0;
          do {
            dVar28 = *(double *)((long)__ptr_00 + uVar18 * 8);
            if (uVar18 != 0) {
              if (uVar18 == 1) {
                lVar16 = 0;
              }
              else {
                lVar16 = 0;
                uVar19 = 0;
                do {
                  uVar15 = lVar16 * 8 | 8;
                  dVar28 = (dVar28 - *(double *)((long)__ptr + lVar16 * 8 + uVar18 * 16000) *
                                     *(double *)((long)__ptr_02 + lVar16 * 8)) -
                           *(double *)((long)__ptr + uVar15 + uVar18 * 16000) *
                           *(double *)((long)__ptr_02 + uVar15);
                  lVar16 = lVar16 + 2;
                  uVar19 = uVar19 + 2;
                } while (uVar19 != (uVar18 & 0x7ffffffffffffffe));
              }
              if ((uVar18 & 1) != 0) {
                dVar28 = dVar28 - *(double *)((long)__ptr + lVar16 * 8 + uVar18 * 16000) *
                                  *(double *)((long)__ptr_02 + lVar16 * 8);
              }
            }
            *(double *)((long)__ptr_02 + uVar18 * 8) = dVar28;
            uVar18 = uVar18 + 1;
          } while (uVar18 != 2000);
          uVar18 = 1999;
          do {
            dVar28 = *(double *)((long)__ptr_02 + uVar18 * 8);
            if (uVar18 < 1999) {
              uVar19 = uVar18;
              if ((uVar25 & 1) != 0) {
                dVar28 = dVar28 - *(double *)((long)__ptr + uVar18 * 0x3e88 + 8) *
                                  *(double *)((long)__ptr_01 + uVar18 * 8 + 8);
                uVar19 = uVar18 + 1;
              }
              if (uVar25 != 1) {
                do {
                  lVar16 = uVar19 * 8;
                  lVar21 = uVar19 * 8;
                  lVar22 = uVar19 * 8;
                  lVar20 = uVar19 * 8;
                  uVar19 = uVar19 + 2;
                  dVar28 = (dVar28 - *(double *)((long)__ptr + lVar16 + uVar18 * 16000 + 8) *
                                     *(double *)((long)__ptr_01 + lVar22 + 8)) -
                           *(double *)((long)__ptr + lVar21 + uVar18 * 16000 + 0x10) *
                           *(double *)((long)__ptr_01 + lVar20 + 0x10);
                } while (uVar19 != 1999);
              }
            }
            *(double *)((long)__ptr_01 + uVar18 * 8) =
                 dVar28 / *(double *)(uVar18 * 0x3e88 + (long)__ptr);
            __stream = _DAT_15c3d8d48288b4c;
            uVar25 = uVar25 + 1;
            bVar26 = uVar18 != 0;
            uVar18 = uVar18 - 1;
          } while (bVar26);
          if ((0x2a < param_1) && (**param_2 == '\0')) {
            fwrite(_L_str_1,0x16,1,_DAT_15c3d8d48288b4c);
            lVar16 = 0;
            fprintf(__stream,"begin dump: %s",&_L_str_3);
            do {
              if ((ushort)((ushort)((short)lVar16 * -0x3333) >> 2 | (short)lVar16 * 0x4000) < 0xccd)
              {
                fputc(10,__stream);
              }
              fprintf(__stream,"%0.2lf ",*(undefined8 *)((long)__ptr_01 + lVar16 * 8));
              lVar16 = lVar16 + 1;
            } while (lVar16 != 2000);
            fprintf(__stream,"\nend   dump: %s\n",&_L_str_3);
            fwrite("==END   DUMP_ARRAYS==\n",0x16,1,__stream);
          }
          free(__ptr);
          free(__ptr_00);
          free(__ptr_01);
          free(__ptr_02);
          return 0;
        }
      } while( true );
    }
  } while( true );
}


