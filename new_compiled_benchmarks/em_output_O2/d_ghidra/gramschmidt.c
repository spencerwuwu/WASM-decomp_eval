#include "gramschmidt.h"



void kernel_gramschmidt(uint param_1,uint param_2,long param_3,long param_4,long param_5)

{
  ulong uVar1;
  ulong uVar2;
  double *pdVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  double dVar22;
  undefined auVar23 [16];
  ulong local_88;
  
  if (0 < (int)param_2) {
    uVar8 = (ulong)param_2;
    uVar19 = (ulong)param_1;
    uVar20 = (ulong)(param_1 & 0xfffffffe);
    local_88 = 1;
    uVar21 = 0;
    do {
      lVar15 = uVar19 * 0x2580 + -0x2578 + uVar21 * 8;
      uVar1 = param_5 + lVar15;
      lVar9 = uVar21 * 0x2588;
      uVar2 = param_5 + uVar21 * 8;
      if ((int)param_1 < 1) {
        *(undefined8 *)(uVar21 * 0x2588 + param_4) = 0;
      }
      else {
        dVar22 = 0.0;
        uVar10 = 0;
        uVar14 = 0;
        if (3 < param_1) {
          do {
            dVar4 = *(double *)(uVar10 * 0x2580 + param_3 + uVar21 * 8);
            dVar5 = *(double *)((uVar10 | 1) * 0x2580 + param_3 + uVar21 * 8);
            dVar6 = *(double *)((uVar10 | 2) * 0x2580 + param_3 + uVar21 * 8);
            dVar7 = *(double *)((uVar10 | 3) * 0x2580 + param_3 + uVar21 * 8);
            dVar22 = dVar7 * dVar7 + dVar6 * dVar6 + dVar5 * dVar5 + dVar4 * dVar4 + dVar22;
            uVar10 = uVar10 + 4;
            uVar14 = uVar14 + 4;
          } while (uVar14 != (param_1 & 0xfffffffc));
        }
        if ((ulong)(param_1 & 3) != 0) {
          uVar14 = 0;
          do {
            dVar4 = *(double *)(uVar10 * 0x2580 + param_3 + uVar21 * 8);
            dVar22 = dVar22 + dVar4 * dVar4;
            uVar10 = uVar10 + 1;
            uVar14 = uVar14 + 1;
          } while (uVar14 != (param_1 & 3));
        }
        if (dVar22 < 0.0) {
          dVar22 = sqrt(dVar22);
        }
        else {
          dVar22 = SQRT(dVar22);
        }
        lVar11 = uVar21 * 0x2580 + param_4;
        *(double *)(lVar11 + uVar21 * 8) = dVar22;
        if (0 < (int)param_1) {
          pdVar3 = (double *)(lVar11 + uVar21 * 8);
          if (param_1 < 4) {
LAB_001002e0:
            uVar10 = 0;
          }
          else {
            if (uVar2 < (ulong)(lVar15 + param_3) && param_3 + uVar21 * 8 < uVar1)
            goto LAB_001002e0;
            uVar10 = 0;
            if (param_4 + lVar9 + 8U <= uVar2 || uVar1 <= (ulong)(param_4 + lVar9)) {
              dVar22 = *pdVar3;
              uVar10 = 0;
              do {
                lVar15 = (uVar10 | 1) * 0x2580;
                auVar23 = divpd(CONCAT88(*(undefined8 *)(param_3 + lVar15 + uVar21 * 8),
                                         *(undefined8 *)(param_3 + uVar10 * 0x2580 + uVar21 * 8)),
                                CONCAT88(dVar22,dVar22));
                *(long *)(uVar10 * 0x2580 + param_5 + uVar21 * 8) = SUB168(auVar23,0);
                *(long *)(lVar15 + param_5 + uVar21 * 8) = SUB168(auVar23 >> 0x40,0);
                uVar10 = uVar10 + 2;
              } while (uVar10 != uVar20);
              uVar10 = uVar20;
              if (uVar20 == uVar19) goto LAB_00100370;
            }
          }
          uVar14 = uVar10;
          if ((param_1 & 1) != 0) {
            *(double *)(uVar10 * 0x2580 + param_5 + uVar21 * 8) =
                 *(double *)(param_3 + uVar10 * 0x2580 + uVar21 * 8) / *pdVar3;
            uVar14 = uVar10 | 1;
          }
          if (~uVar10 != -uVar19) {
            do {
              lVar15 = uVar14 * 0x2580;
              *(double *)(param_5 + lVar15 + uVar21 * 8) =
                   *(double *)(param_3 + lVar15 + uVar21 * 8) / *pdVar3;
              *(double *)(lVar15 + param_5 + 0x2580 + uVar21 * 8) =
                   *(double *)(param_3 + 0x2580 + lVar15 + uVar21 * 8) / *pdVar3;
              uVar14 = uVar14 + 2;
            } while (uVar14 != uVar19);
          }
        }
      }
LAB_00100370:
      uVar10 = uVar21 + 1;
      if (uVar10 < uVar8) {
        lVar15 = 0;
        uVar14 = local_88;
        do {
          lVar11 = uVar21 * 0x2580 + param_4;
          *(undefined8 *)(lVar11 + uVar14 * 8) = 0;
          if (0 < (int)param_1) {
            pdVar3 = (double *)(lVar11 + uVar14 * 8);
            dVar22 = 0.0;
            uVar16 = 0;
            uVar17 = 0;
            if (param_1 != 1) {
              do {
                dVar22 = *(double *)(param_5 + uVar16 * 0x2580 + uVar21 * 8) *
                         *(double *)(uVar16 * 0x2580 + param_3 + uVar14 * 8) + dVar22;
                *pdVar3 = dVar22;
                lVar11 = (uVar16 | 1) * 0x2580;
                dVar22 = *(double *)(param_5 + lVar11 + uVar21 * 8) *
                         *(double *)(lVar11 + param_3 + uVar14 * 8) + dVar22;
                *pdVar3 = dVar22;
                uVar16 = uVar16 + 2;
                uVar17 = uVar17 + 2;
              } while (uVar17 != uVar20);
            }
            if ((param_1 & 1) != 0) {
              *pdVar3 = *(double *)(param_5 + uVar16 * 0x2580 + uVar21 * 8) *
                        *(double *)(uVar16 * 0x2580 + param_3 + uVar14 * 8) + dVar22;
            }
            if (0 < (int)param_1) {
              if (param_1 < 0xe) {
                uVar18 = 0;
              }
              else {
                uVar16 = uVar21 * 8 + 8 + lVar15 * 8 + param_3;
                uVar17 = uVar19 * 0x2580 + -0x2570 + uVar21 * 8 + lVar15 * 8 + param_3;
                if (uVar16 < uVar1 && uVar2 < uVar17) {
                  uVar18 = 0;
                }
                else {
                  uVar18 = 0;
                  if ((ulong)(lVar9 + 0x10 + lVar15 * 8 + param_4) <= uVar16 ||
                      uVar17 <= (ulong)(lVar9 + 8 + lVar15 * 8 + param_4)) {
                    dVar22 = *pdVar3;
                    uVar16 = 0;
                    do {
                      lVar11 = param_3 + uVar16 * 0x2580;
                      lVar12 = (uVar16 | 1) * 0x2580;
                      lVar13 = param_3 + lVar12;
                      dVar4 = *(double *)(lVar13 + uVar14 * 8);
                      dVar5 = *(double *)(lVar12 + param_5 + uVar21 * 8);
                      *(double *)(lVar11 + uVar14 * 8) =
                           *(double *)(lVar11 + uVar14 * 8) -
                           *(double *)(uVar16 * 0x2580 + param_5 + uVar21 * 8) * dVar22;
                      *(double *)(lVar13 + uVar14 * 8) = dVar4 - dVar5 * dVar22;
                      uVar16 = uVar16 + 2;
                    } while (uVar16 != uVar20);
                    uVar18 = uVar20;
                    if (uVar20 == uVar19) goto LAB_001003d0;
                  }
                }
              }
              uVar16 = uVar18;
              if ((param_1 & 1) != 0) {
                lVar11 = param_3 + uVar18 * 0x2580;
                *(double *)(lVar11 + uVar14 * 8) =
                     *(double *)(lVar11 + uVar14 * 8) -
                     *(double *)(uVar18 * 0x2580 + param_5 + uVar21 * 8) * *pdVar3;
                uVar16 = uVar18 | 1;
              }
              if (~uVar18 != -uVar19) {
                do {
                  lVar13 = uVar16 * 0x2580;
                  *(double *)(param_3 + lVar13 + uVar14 * 8) =
                       *(double *)(param_3 + lVar13 + uVar14 * 8) -
                       *(double *)(param_5 + lVar13 + uVar21 * 8) * *pdVar3;
                  lVar11 = param_3 + 0x2580 + lVar13;
                  *(double *)(lVar11 + uVar14 * 8) =
                       *(double *)(lVar11 + uVar14 * 8) -
                       *(double *)(param_5 + 0x2580 + lVar13 + uVar21 * 8) * *pdVar3;
                  uVar16 = uVar16 + 2;
                } while (uVar16 != uVar19);
              }
            }
          }
LAB_001003d0:
          uVar14 = uVar14 + 1;
          lVar15 = lVar15 + 1;
        } while (uVar14 != uVar8);
      }
      local_88 = local_88 + 1;
      uVar21 = uVar10;
    } while (uVar10 != uVar8);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 submain(int param_1,char **param_2)

{
  void *pvVar1;
  double *pdVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  FILE *__stream;
  void *__ptr;
  void *__s;
  void *__ptr_00;
  ulong uVar8;
  void *pvVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  void *pvVar15;
  void *pvVar16;
  long lVar17;
  ulong uVar18;
  long lVar19;
  double dVar20;
  undefined auVar21 [16];
  ulong uVar22;
  ulong uVar24;
  undefined auVar23 [16];
  long local_68;
  
  __ptr = (void *)polybench_alloc_data(1200000,8);
  __s = (void *)polybench_alloc_data(0x15f900,8);
  __ptr_00 = (void *)polybench_alloc_data(1200000,8);
  auVar21 = __LCPI1_3;
  uVar8 = 0;
  do {
    lVar10 = uVar8 * 0x2580;
    pvVar1 = (void *)(lVar10 + (long)__ptr);
    if ((ulong)((long)__ptr_00 + (lVar10 - (long)pvVar1)) < 0x10) {
      lVar14 = 0;
      do {
        *(double *)((long)pvVar1 + lVar14 * 8) =
             ((double)((uint)((int)lVar14 * (int)uVar8) % 1000) / 1000.0) * 100.0 + 10.0;
        *(undefined8 *)((long)__ptr_00 + lVar14 * 8 + lVar10) = 0;
        lVar14 = lVar14 + 1;
      } while (lVar14 != 0x4b0);
    }
    else {
      lVar14 = 0;
      uVar13 = 0;
      uVar18 = 1;
      do {
        uVar22 = (uVar13 & 0xffffffff) * (uVar8 & 0xffffffff);
        uVar24 = (uVar18 & 0xffffffff) * (uVar8 & 0xffffffff);
        auVar23 = divpd(CONCAT88((double)((int)uVar24 + (int)((uVar24 & 0xffffffff) / 1000) * -1000)
                                 ,(double)((int)uVar22 + (int)((uVar22 & 0xffffffff) / 1000) * -1000
                                          )),auVar21);
        pdVar2 = (double *)((long)pvVar1 + lVar14 * 8);
        *pdVar2 = SUB168(auVar23,0) * 100.0 + 10.0;
        pdVar2[1] = SUB168(auVar23 >> 0x40,0) * 100.0 + 10.0;
        *(undefined (*) [16])((long)__ptr_00 + lVar14 * 8 + lVar10) = ZEXT816(0);
        lVar14 = lVar14 + 2;
        uVar13 = uVar13 + 2;
        uVar18 = uVar18 + 2;
      } while (lVar14 != 0x4b0);
    }
    uVar8 = uVar8 + 1;
  } while (uVar8 != 1000);
  memset(__s,0,0xafc800);
  local_68 = 1;
  uVar8 = 0;
  do {
    pvVar1 = (void *)((long)__ptr_00 + uVar8 * 8);
    pvVar9 = (void *)((long)__ptr_00 + uVar8 * 8 + 0x925688);
    lVar11 = uVar8 * 0x2588;
    lVar10 = uVar8 * 8 + 8;
    lVar14 = 0;
    dVar20 = 0.0;
    do {
      dVar3 = *(double *)((long)__ptr + uVar8 * 8 + lVar14 * 0x2580);
      dVar4 = *(double *)((long)__ptr + uVar8 * 8 + lVar14 * 0x2580 + 0x2580);
      dVar5 = *(double *)((long)__ptr + uVar8 * 8 + lVar14 * 0x2580 + 0x4b00);
      dVar6 = *(double *)((long)__ptr + uVar8 * 8 + lVar14 * 0x2580 + 0x7080);
      dVar7 = *(double *)((long)__ptr + uVar8 * 8 + lVar14 * 0x2580 + 0x9600);
      dVar20 = dVar7 * dVar7 +
               dVar6 * dVar6 + dVar5 * dVar5 + dVar4 * dVar4 + dVar3 * dVar3 + dVar20;
      lVar14 = lVar14 + 5;
    } while (lVar14 != 1000);
    if (dVar20 < 0.0) {
      dVar20 = sqrt(dVar20);
    }
    else {
      dVar20 = SQRT(dVar20);
    }
    pdVar2 = (double *)((long)__s + uVar8 * 0x2588);
    *(double *)((long)__s + uVar8 * 0x2588) = dVar20;
    if (pvVar1 < (void *)((long)__ptr + uVar8 * 8 + 0x925688) &&
        (void *)((long)__ptr + uVar8 * 8) < pvVar9) {
      uVar13 = 0;
LAB_00100a80:
      do {
        lVar14 = (uVar13 | 1) * 0x2580;
        *(double *)((long)__ptr_00 + uVar8 * 8 + uVar13 * 0x2580) =
             *(double *)((long)__ptr + uVar8 * 8 + uVar13 * 0x2580) / *pdVar2;
        *(double *)((long)__ptr_00 + uVar8 * 8 + lVar14) =
             *(double *)((long)__ptr + uVar8 * 8 + lVar14) / *pdVar2;
        uVar13 = uVar13 + 2;
      } while (uVar13 != 1000);
    }
    else {
      uVar13 = 0;
      if (pvVar1 < (void *)((long)__s + lVar11 + 8) && (void *)((long)__s + lVar11) < pvVar9)
      goto LAB_00100a80;
      dVar20 = *pdVar2;
      uVar13 = 0;
      do {
        lVar14 = (uVar13 | 1) * 0x2580;
        auVar21 = divpd(CONCAT88(*(undefined8 *)((long)__ptr + uVar8 * 8 + lVar14),
                                 *(undefined8 *)((long)__ptr + uVar8 * 8 + uVar13 * 0x2580)),
                        CONCAT88(dVar20,dVar20));
        *(long *)((long)__ptr_00 + uVar8 * 8 + uVar13 * 0x2580) = SUB168(auVar21,0);
        *(long *)((long)__ptr_00 + uVar8 * 8 + lVar14) = SUB168(auVar21 >> 0x40,0);
        uVar13 = uVar13 + 2;
      } while (uVar13 != 1000);
    }
    uVar13 = uVar8 + 1;
    if (uVar8 < 0x4af) {
      lVar12 = 0;
      lVar14 = local_68;
      do {
        pvVar15 = (void *)(lVar12 * 8 + lVar10 + (long)__ptr);
        pvVar16 = (void *)(lVar12 * 8 + 0x925688 + lVar10 + (long)__ptr);
        pdVar2 = (double *)((long)__s + lVar14 * 8 + uVar8 * 0x2580);
        *(undefined8 *)((long)__s + lVar14 * 8 + uVar8 * 0x2580) = 0;
        dVar20 = 0.0;
        uVar18 = 0;
        do {
          dVar20 = *(double *)((long)__ptr_00 + uVar8 * 8 + uVar18 * 0x2580) *
                   *(double *)((long)__ptr + lVar14 * 8 + uVar18 * 0x2580) + dVar20;
          *pdVar2 = dVar20;
          lVar19 = (uVar18 | 1) * 0x2580;
          dVar20 = *(double *)((long)__ptr_00 + uVar8 * 8 + lVar19) *
                   *(double *)((long)__ptr + lVar14 * 8 + lVar19) + dVar20;
          *pdVar2 = dVar20;
          uVar18 = uVar18 + 2;
        } while (uVar18 != 1000);
        if (pvVar1 < pvVar16 && pvVar15 < pvVar9) {
          uVar18 = 0;
LAB_00100c70:
          do {
            lVar19 = uVar18 * 0x2580;
            *(double *)((long)__ptr + lVar14 * 8 + lVar19) =
                 *(double *)((long)__ptr + lVar14 * 8 + lVar19) -
                 *(double *)((long)__ptr_00 + uVar8 * 8 + lVar19) * *pdVar2;
            lVar19 = (uVar18 | 1) * 0x2580;
            *(double *)((long)__ptr + lVar14 * 8 + lVar19) =
                 *(double *)((long)__ptr + lVar14 * 8 + lVar19) -
                 *(double *)((long)__ptr_00 + uVar8 * 8 + lVar19) * *pdVar2;
            uVar18 = uVar18 + 2;
          } while (uVar18 != 1000);
        }
        else {
          uVar18 = 0;
          if (pvVar15 < (void *)(lVar11 + 0x10 + lVar12 * 8 + (long)__s) &&
              (void *)(lVar11 + 8 + lVar12 * 8 + (long)__s) < pvVar16) goto LAB_00100c70;
          dVar20 = *pdVar2;
          uVar18 = 0;
          do {
            lVar17 = uVar18 * 0x2580;
            lVar19 = (uVar18 | 1) * 0x2580;
            dVar3 = *(double *)((long)__ptr + lVar14 * 8 + lVar19);
            dVar4 = *(double *)((long)__ptr_00 + uVar8 * 8 + lVar19);
            *(double *)((long)__ptr + lVar14 * 8 + lVar17) =
                 *(double *)((long)__ptr + lVar14 * 8 + lVar17) -
                 *(double *)((long)__ptr_00 + uVar8 * 8 + lVar17) * dVar20;
            *(double *)((long)__ptr + lVar14 * 8 + lVar19) = dVar3 - dVar4 * dVar20;
            uVar18 = uVar18 + 2;
          } while (uVar18 != 1000);
        }
        lVar14 = lVar14 + 1;
        lVar12 = lVar12 + 1;
      } while (lVar14 != 0x4b0);
    }
    __stream = _DAT_1ff3d8d48208b4c;
    local_68 = local_68 + 1;
    uVar8 = uVar13;
    if (uVar13 == 0x4b0) {
      if ((0x2a < param_1) && (**param_2 == '\0')) {
        fwrite(_L_str_1,0x16,1,_DAT_1ff3d8d48208b4c);
        lVar10 = 0;
        fprintf(__stream,"begin dump: %s",&_L_str_3);
        do {
          lVar14 = 0;
          do {
            if (((uint)(((int)lVar14 + (int)lVar10 * 0x4b0) * -0x33333333) >> 2 |
                (int)lVar14 * 0x40000000) < 0xccccccd) {
              fputc(10,__stream);
            }
            fprintf(__stream,"%0.2lf ",*(undefined8 *)((long)__s + lVar14 * 8 + lVar10 * 0x2580));
            lVar14 = lVar14 + 1;
          } while (lVar14 != 0x4b0);
          lVar10 = lVar10 + 1;
        } while (lVar10 != 0x4b0);
        lVar10 = 0;
        fprintf(__stream,"\nend   dump: %s\n",&_L_str_3);
        fprintf(__stream,"begin dump: %s",&_L_str_7);
        do {
          lVar14 = 0;
          do {
            if (((uint)(((int)lVar14 + (int)lVar10 * 0x4b0) * -0x33333333) >> 2 |
                (int)lVar14 * 0x40000000) < 0xccccccd) {
              fputc(10,__stream);
            }
            fprintf(__stream,"%0.2lf ",
                    *(undefined8 *)((long)__ptr_00 + lVar14 * 8 + lVar10 * 0x2580));
            lVar14 = lVar14 + 1;
          } while (lVar14 != 0x4b0);
          lVar10 = lVar10 + 1;
        } while (lVar10 != 1000);
        fprintf(__stream,"\nend   dump: %s\n",&_L_str_7);
        fwrite("==END   DUMP_ARRAYS==\n",0x16,1,__stream);
      }
      free(__ptr);
      free(__s);
      free(__ptr_00);
      return 0;
    }
  } while( true );
}


