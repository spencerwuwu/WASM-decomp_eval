#include "ludcmp.h"



void kernel_ludcmp(uint param_1,long param_2,long param_3,long param_4,long param_5)

{
  bool bVar1;
  ulong uVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  double dVar10;
  
  if (0 < (int)param_1) {
    uVar2 = (ulong)param_1;
    uVar5 = 0;
    do {
      if (uVar5 != 0) {
        uVar6 = 0;
        do {
          lVar4 = uVar5 * 16000 + param_2;
          dVar10 = *(double *)(lVar4 + uVar6 * 8);
          if (uVar6 != 0) {
            if (uVar6 == 1) {
              uVar8 = 0;
            }
            else {
              uVar8 = 0;
              uVar7 = 0;
              do {
                dVar10 = (dVar10 - *(double *)(lVar4 + uVar8 * 8) *
                                   *(double *)(uVar8 * 16000 + param_2 + uVar6 * 8)) -
                         *(double *)(lVar4 + (uVar8 | 1) * 8) *
                         *(double *)((uVar8 | 1) * 16000 + param_2 + uVar6 * 8);
                uVar8 = uVar8 + 2;
                uVar7 = uVar7 + 2;
              } while (uVar7 != (uVar6 & 0x7ffffffffffffffe));
            }
            if ((uVar6 & 1) != 0) {
              dVar10 = dVar10 - *(double *)(lVar4 + uVar8 * 8) *
                                *(double *)(uVar8 * 16000 + param_2 + uVar6 * 8);
            }
          }
          *(double *)(lVar4 + uVar6 * 8) = dVar10 / *(double *)(uVar6 * 0x3e88 + param_2);
          uVar6 = uVar6 + 1;
        } while (uVar6 != uVar5);
      }
      uVar6 = uVar5;
      do {
        lVar4 = uVar5 * 16000 + param_2;
        dVar10 = *(double *)(lVar4 + uVar6 * 8);
        if (uVar5 != 0) {
          uVar8 = 0;
          uVar7 = 0;
          if (uVar5 != 1) {
            do {
              dVar10 = (dVar10 - *(double *)(lVar4 + uVar8 * 8) *
                                 *(double *)(uVar8 * 16000 + param_2 + uVar6 * 8)) -
                       *(double *)(lVar4 + (uVar8 | 1) * 8) *
                       *(double *)((uVar8 | 1) * 16000 + param_2 + uVar6 * 8);
              uVar8 = uVar8 + 2;
              uVar7 = uVar7 + 2;
            } while (uVar7 != (uVar5 & 0x7ffffffffffffffe));
          }
          if ((uVar5 & 1) != 0) {
            dVar10 = dVar10 - *(double *)(lVar4 + uVar8 * 8) *
                              *(double *)(uVar8 * 16000 + param_2 + uVar6 * 8);
          }
        }
        *(double *)(lVar4 + uVar6 * 8) = dVar10;
        uVar6 = uVar6 + 1;
      } while (uVar6 != uVar2);
      uVar5 = uVar5 + 1;
    } while (uVar5 != uVar2);
    if (0 < (int)param_1) {
      uVar5 = 0;
      do {
        dVar10 = *(double *)(param_3 + uVar5 * 8);
        if (uVar5 != 0) {
          if (uVar5 == 1) {
            lVar4 = 0;
          }
          else {
            lVar4 = 0;
            uVar6 = 0;
            do {
              lVar9 = uVar5 * 16000 + param_2;
              uVar7 = lVar4 * 8 | 8;
              dVar10 = (dVar10 - *(double *)(lVar9 + lVar4 * 8) * *(double *)(param_5 + lVar4 * 8))
                       - *(double *)(uVar7 + lVar9) * *(double *)(param_5 + uVar7);
              lVar4 = lVar4 + 2;
              uVar6 = uVar6 + 2;
            } while (uVar6 != (uVar5 & 0x7ffffffffffffffe));
          }
          if ((uVar5 & 1) != 0) {
            dVar10 = dVar10 - *(double *)(uVar5 * 16000 + param_2 + lVar4 * 8) *
                              *(double *)(param_5 + lVar4 * 8);
          }
        }
        *(double *)(param_5 + uVar5 * 8) = dVar10;
        uVar5 = uVar5 + 1;
      } while (uVar5 != uVar2);
      if (0 < (int)param_1) {
        uVar3 = 0;
        uVar5 = uVar2;
        uVar6 = uVar2;
        do {
          uVar7 = uVar6 - 1;
          uVar8 = uVar7 & 0xffffffff;
          dVar10 = *(double *)(param_5 + uVar8 * 8);
          if ((long)uVar5 < (long)uVar2) {
            if ((uVar3 & 1) != 0) {
              dVar10 = dVar10 - *(double *)(uVar8 * 16000 + param_2 + uVar6 * 8) *
                                *(double *)(param_4 + uVar6 * 8);
              uVar6 = uVar6 + 1;
            }
            if (uVar3 != 1) {
              do {
                lVar4 = uVar8 * 16000 + param_2;
                dVar10 = (dVar10 - *(double *)(lVar4 + uVar6 * 8) * *(double *)(param_4 + uVar6 * 8)
                         ) - *(double *)(lVar4 + 8 + uVar6 * 8) *
                             *(double *)(param_4 + 8 + uVar6 * 8);
                uVar6 = uVar6 + 2;
              } while ((uint)uVar6 != param_1);
            }
          }
          *(double *)(param_4 + uVar8 * 8) = dVar10 / *(double *)(uVar8 * 0x3e88 + param_2);
          uVar3 = uVar3 + 1;
          bVar1 = 1 < (long)uVar5;
          uVar5 = uVar5 - 1;
          uVar6 = uVar7;
        } while (bVar1);
      }
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 submain(int param_1,char **param_2)

{
  ulong uVar1;
  double *pdVar2;
  undefined4 *puVar3;
  double *pdVar4;
  undefined4 *puVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  FILE *__stream;
  void *__ptr;
  void *__ptr_00;
  void *__ptr_01;
  void *__ptr_02;
  ulong uVar17;
  void *__s;
  long lVar18;
  ulong uVar19;
  ulong uVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  void *pvVar24;
  ulong uVar25;
  void *pvVar26;
  int iVar27;
  undefined auVar28 [16];
  undefined auVar29 [16];
  
  __ptr = (void *)polybench_alloc_data(4000000,8);
  __ptr_00 = (void *)polybench_alloc_data(2000,8);
  __ptr_01 = (void *)polybench_alloc_data(2000,8);
  __ptr_02 = (void *)polybench_alloc_data(2000);
  auVar28 = __LCPI1_1;
  uVar20 = 0;
  if ((((ulong)((long)__ptr_02 - (long)__ptr_01) < 0x10) ||
      ((ulong)((long)__ptr_00 - (long)__ptr_01) < 0x10)) ||
     ((ulong)((long)__ptr_00 - (long)__ptr_02) < 0x10)) {
    do {
      *(undefined8 *)((long)__ptr_01 + uVar20 * 8) = 0;
      *(undefined8 *)((long)__ptr_02 + uVar20 * 8) = 0;
      uVar25 = uVar20 | 1;
      *(double *)((long)__ptr_00 + uVar20 * 8) = ((double)(int)uVar25 / 2000.0) * 0.5 + 4.0;
      *(undefined8 *)((long)__ptr_01 + uVar25 * 8) = 0;
      *(undefined8 *)((long)__ptr_02 + uVar25 * 8) = 0;
      uVar20 = uVar20 + 2;
      *(double *)((long)__ptr_00 + uVar25 * 8) = ((double)(int)uVar20 / 2000.0) * 0.5 + 4.0;
    } while (uVar20 != 2000);
  }
  else {
    iVar27 = 0;
    do {
      *(undefined (*) [16])((long)__ptr_01 + uVar20 * 8) = ZEXT816(0);
      *(undefined (*) [16])((long)__ptr_02 + uVar20 * 8) = ZEXT816(0);
      auVar29 = divpd(CONCAT88((double)(int)((ulong)(double)(iVar27 + 1) >> 0x20),
                               (double)(iVar27 + 1)),auVar28);
      pdVar2 = (double *)((long)__ptr_00 + uVar20 * 8);
      *pdVar2 = SUB168(auVar29,0) * 0.5 + 4.0;
      pdVar2[1] = SUB168(auVar29 >> 0x40,0) * 0.5 + 4.0;
      uVar20 = uVar20 + 2;
      iVar27 = iVar27 + 2;
    } while (uVar20 != 2000);
  }
  uVar25 = 1;
  uVar20 = 0;
  auVar28 = __LCPI1_10;
  do {
    uVar1 = uVar20 + 1;
    if (uVar20 == 0) {
      uVar17 = 0;
LAB_001005d0:
      do {
        *(double *)((long)__ptr + uVar17 * 8 + uVar20 * 16000) = (double)-(int)uVar17 / 2000.0 + 1.0
        ;
        uVar17 = uVar17 + 1;
      } while (uVar17 != uVar25);
    }
    else {
      uVar17 = uVar1 & 0xfffffffffffffffe;
      uVar19 = 0;
      iVar27 = 0;
      do {
        auVar29 = divpd(CONCAT88((double)(int)((ulong)(double)-iVar27 >> 0x20),(double)-iVar27),
                        CONCAT88(0x409f400000000000,0x409f400000000000));
        *(undefined (*) [16])((long)__ptr + uVar19 * 8 + uVar20 * 16000) =
             CONCAT88(SUB168(auVar29 >> 0x40,0) + 1.0,SUB168(auVar29,0) + 1.0);
        uVar19 = uVar19 + 2;
        iVar27 = iVar27 + SUB164(auVar28,0);
      } while (uVar19 != uVar17);
      if (uVar1 != uVar17) goto LAB_001005d0;
    }
    if (uVar20 < 1999) {
      memset((void *)(uVar20 * 0x3e88 + 8 + (long)__ptr),0,(uVar20 * -8 + 0x3e70 & 0x7fffffff8) + 8)
      ;
      auVar28 = __LCPI1_10;
    }
    *(undefined8 *)(uVar20 * 0x3e88 + (long)__ptr) = 0x3ff0000000000000;
    uVar25 = uVar25 + 1;
    uVar20 = uVar1;
    if (uVar1 == 2000) {
      __s = (void *)polybench_alloc_data(4000000);
      memset(__s,0,32000000);
      lVar18 = 0;
      do {
        lVar22 = 0;
        do {
          lVar23 = lVar22 * 16000;
          pdVar2 = (double *)((long)__ptr + lVar18 * 8 + lVar23);
          pvVar26 = (void *)((long)__s + lVar23 + 16000);
          pvVar24 = (void *)(lVar23 + (long)__s);
          if (pvVar24 < (void *)((long)__ptr + lVar18 * 8 + 0x1e80988) &&
              (void *)((long)__ptr + lVar18 * 8) < pvVar26) {
            uVar20 = 0;
LAB_00100810:
            do {
              *(double *)((long)pvVar24 + uVar20 * 8) =
                   *pdVar2 * *(double *)((long)__ptr + lVar18 * 8 + uVar20 * 16000) +
                   *(double *)((long)pvVar24 + uVar20 * 8);
              uVar25 = uVar20 | 1;
              *(double *)((long)pvVar24 + uVar25 * 8) =
                   *pdVar2 * *(double *)((long)__ptr + lVar18 * 8 + uVar25 * 16000) +
                   *(double *)((long)pvVar24 + uVar25 * 8);
              uVar20 = uVar20 + 2;
            } while (uVar20 != 2000);
          }
          else {
            uVar20 = 0;
            if (pvVar24 < (void *)((long)__ptr + lVar23 + lVar18 * 8 + 8) &&
                (void *)((long)__ptr + lVar23 + lVar18 * 8) < pvVar26) goto LAB_00100810;
            dVar6 = *pdVar2;
            uVar20 = 0;
            do {
              dVar7 = *(double *)((long)__ptr + lVar18 * 8 + (uVar20 | 2) * 16000);
              pdVar2 = (double *)((long)pvVar24 + uVar20 * 8);
              pdVar4 = (double *)((long)pvVar24 + uVar20 * 8 + 0x10);
              dVar9 = *pdVar4;
              dVar8 = *(double *)((long)__ptr + lVar18 * 8 + (uVar20 | 3) * 16000) * dVar6 +
                      pdVar4[1];
              *(undefined (*) [16])((long)pvVar24 + uVar20 * 8) =
                   CONCAT88(*(double *)((long)__ptr + lVar18 * 8 + (uVar20 | 1) * 16000) * dVar6 +
                            pdVar2[1],
                            *(double *)((long)__ptr + lVar18 * 8 + uVar20 * 16000) * dVar6 + *pdVar2
                           );
              *(undefined (*) [16])((long)pvVar24 + uVar20 * 8 + 0x10) =
                   CONCAT412((int)((ulong)dVar8 >> 0x20),
                             CONCAT48(SUB84(dVar8,0),dVar7 * dVar6 + dVar9));
              uVar20 = uVar20 + 4;
            } while (uVar20 != 2000);
          }
          lVar22 = lVar22 + 1;
        } while (lVar22 != 2000);
        lVar18 = lVar18 + 1;
        if (lVar18 == 2000) {
          lVar18 = 0;
          do {
            lVar22 = lVar18 * 16000;
            pvVar24 = (void *)(lVar22 + (long)__s);
            lVar21 = 0;
            lVar23 = 0;
            if ((ulong)((long)__ptr + (lVar22 - (long)pvVar24)) < 0x20) {
              do {
                uVar20 = lVar23 * 8;
                *(undefined8 *)((long)__ptr + lVar23 * 8 + lVar22) =
                     *(undefined8 *)((long)pvVar24 + lVar23 * 8);
                *(undefined8 *)((long)__ptr + (uVar20 | 8) + lVar22) =
                     *(undefined8 *)((uVar20 | 8) + (long)pvVar24);
                *(undefined8 *)((long)__ptr + (uVar20 | 0x10) + lVar22) =
                     *(undefined8 *)((uVar20 | 0x10) + (long)pvVar24);
                *(undefined8 *)((long)__ptr + (uVar20 | 0x18) + lVar22) =
                     *(undefined8 *)((uVar20 | 0x18) + (long)pvVar24);
                lVar23 = lVar23 + 4;
              } while (lVar23 != 2000);
            }
            else {
              do {
                puVar3 = (undefined4 *)((long)pvVar24 + lVar21 * 8);
                uVar10 = puVar3[1];
                uVar11 = puVar3[2];
                uVar12 = puVar3[3];
                puVar5 = (undefined4 *)((long)pvVar24 + lVar21 * 8 + 0x10);
                uVar13 = *puVar5;
                uVar14 = puVar5[1];
                uVar15 = puVar5[2];
                uVar16 = puVar5[3];
                puVar5 = (undefined4 *)((long)__ptr + lVar21 * 8 + lVar22);
                *puVar5 = *puVar3;
                puVar5[1] = uVar10;
                puVar5[2] = uVar11;
                puVar5[3] = uVar12;
                puVar3 = (undefined4 *)((long)__ptr + lVar21 * 8 + lVar22 + 0x10);
                *puVar3 = uVar13;
                puVar3[1] = uVar14;
                puVar3[2] = uVar15;
                puVar3[3] = uVar16;
                uVar20 = lVar21 * 8 | 0x20;
                puVar3 = (undefined4 *)(uVar20 + (long)pvVar24);
                uVar10 = puVar3[1];
                uVar11 = puVar3[2];
                uVar12 = puVar3[3];
                auVar28 = *(undefined (*) [16])(uVar20 + 0x10 + (long)pvVar24);
                puVar5 = (undefined4 *)((long)__ptr + uVar20 + lVar22);
                *puVar5 = *puVar3;
                puVar5[1] = uVar10;
                puVar5[2] = uVar11;
                puVar5[3] = uVar12;
                *(undefined (*) [16])((long)__ptr + uVar20 + 0x10 + lVar22) = auVar28;
                lVar21 = lVar21 + 8;
              } while (lVar21 != 2000);
            }
            lVar18 = lVar18 + 1;
          } while (lVar18 != 2000);
          free(__s);
          kernel_ludcmp(2000,__ptr,__ptr_00,__ptr_01,__ptr_02);
          __stream = _DAT_1713d8d48288b4c;
          if ((0x2a < param_1) && (**param_2 == '\0')) {
            fwrite(_L_str_1,0x16,1,_DAT_1713d8d48288b4c);
            lVar18 = 0;
            fprintf(__stream,"begin dump: %s",&_L_str_3);
            do {
              if ((ushort)((ushort)((short)lVar18 * -0x3333) >> 2 | (short)lVar18 * 0x4000) < 0xccd)
              {
                fputc(10,__stream);
              }
              fprintf(__stream,"%0.2lf ",*(undefined8 *)((long)__ptr_01 + lVar18 * 8));
              lVar18 = lVar18 + 1;
            } while (lVar18 != 2000);
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


