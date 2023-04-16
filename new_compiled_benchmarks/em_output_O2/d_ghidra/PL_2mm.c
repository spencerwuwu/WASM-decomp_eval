#include "PL_2mm.h"



ulong init_array(uint param_1,uint param_2,uint param_3,uint param_4,undefined8 *param_5,
                undefined8 *param_6,long param_7,long param_8,long param_9,long param_10)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  int iVar8;
  ulong uVar9;
  ulong uVar10;
  double dVar11;
  
  *param_5 = 0x3ff8000000000000;
  *param_6 = 0x3ff3333333333333;
  uVar3 = (ulong)param_1;
  uVar4 = uVar3;
  if (0 < (int)param_1) {
    dVar11 = (double)param_1;
    uVar9 = 0;
    do {
      if (0 < (int)param_3) {
        uVar10 = 0;
        uVar6 = 0;
        iVar8 = (int)uVar9;
        if (param_3 != 1) {
          do {
            uVar1 = (uint)uVar10 * iVar8;
            lVar7 = uVar9 * 0x2260 + param_7;
            *(double *)(lVar7 + uVar10 * 8) =
                 (double)(int)((long)(CONCAT44((int)(uVar1 | 1) >> 0x1f,uVar1) | 1) %
                              (long)(int)param_1) / dVar11;
            iVar2 = ((uint)uVar10 | 1) * iVar8 + 1;
            uVar4 = (long)iVar2 / (long)(int)param_1 & 0xffffffff;
            *(double *)(lVar7 + (uVar10 | 1) * 8) = (double)(iVar2 % (int)param_1) / dVar11;
            uVar10 = uVar10 + 2;
            uVar6 = uVar6 + 2;
          } while (uVar6 != (param_3 & 0xfffffffe));
        }
        if ((param_3 & 1) != 0) {
          uVar4 = uVar9 * 0x2260 + param_7;
          *(double *)(uVar4 + uVar10 * 8) =
               (double)(((int)uVar10 * iVar8 + 1) % (int)param_1) / dVar11;
        }
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 != uVar3);
  }
  if (0 < (int)param_3) {
    dVar11 = (double)param_2;
    uVar9 = 0;
    do {
      if (0 < (int)param_2) {
        uVar6 = 0;
        uVar10 = 0;
        iVar8 = (int)uVar9;
        if (param_2 != 1) {
          do {
            uVar5 = uVar6 | 1;
            lVar7 = uVar9 * 0x1c20 + param_8;
            *(double *)(lVar7 + uVar6 * 8) =
                 (double)((int)(((uint)uVar6 | 1) * iVar8) % (int)param_2) / dVar11;
            uVar6 = uVar6 + 2;
            iVar2 = (int)uVar6 * iVar8;
            uVar4 = (long)iVar2 / (long)(int)param_2 & 0xffffffff;
            *(double *)(lVar7 + uVar5 * 8) = (double)(iVar2 % (int)param_2) / dVar11;
            uVar10 = uVar10 + 2;
          } while (uVar10 != (param_2 & 0xfffffffe));
        }
        if ((param_2 & 1) != 0) {
          uVar4 = uVar9 * 0x1c20 + param_8;
          *(double *)(uVar4 + uVar6 * 8) =
               (double)((((int)uVar6 + 1) * iVar8) % (int)param_2) / dVar11;
        }
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 != param_3);
  }
  if (0 < (int)param_2) {
    dVar11 = (double)param_4;
    uVar9 = 0;
    do {
      if (0 < (int)param_4) {
        uVar10 = 0;
        uVar6 = 0;
        iVar8 = (int)uVar9;
        if (param_4 != 1) {
          do {
            lVar7 = uVar9 * 0x2580 + param_9;
            *(double *)(lVar7 + uVar10 * 8) =
                 (double)((((int)uVar10 + 3) * iVar8 + 1) % (int)param_4) / dVar11;
            uVar1 = ((int)(uVar10 | 1) + 3) * iVar8;
            uVar5 = CONCAT44((int)(uVar1 | 1) >> 0x1f,uVar1) | 1;
            uVar4 = (long)uVar5 / (long)(int)param_4 & 0xffffffff;
            *(double *)(lVar7 + (uVar10 | 1) * 8) =
                 (double)(int)((long)uVar5 % (long)(int)param_4) / dVar11;
            uVar10 = uVar10 + 2;
            uVar6 = uVar6 + 2;
          } while (uVar6 != (param_4 & 0xfffffffe));
        }
        if ((param_4 & 1) != 0) {
          uVar4 = uVar9 * 0x2580 + param_9;
          *(double *)(uVar4 + uVar10 * 8) =
               (double)((((int)uVar10 + 3) * iVar8 + 1) % (int)param_4) / dVar11;
        }
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 != param_2);
  }
  if (0 < (int)param_1) {
    dVar11 = (double)param_3;
    uVar9 = 0;
    do {
      if (0 < (int)param_4) {
        uVar6 = 0;
        uVar10 = 0;
        iVar8 = (int)uVar9;
        if (param_4 != 1) {
          do {
            lVar7 = uVar9 * 0x2580 + param_10;
            *(double *)(lVar7 + uVar6 * 8) =
                 (double)((((int)uVar6 + 2) * iVar8) % (int)param_3) / dVar11;
            iVar2 = ((int)(uVar6 | 1) + 2) * iVar8;
            uVar4 = (long)iVar2 / (long)(int)param_3 & 0xffffffff;
            *(double *)(lVar7 + (uVar6 | 1) * 8) = (double)(iVar2 % (int)param_3) / dVar11;
            uVar6 = uVar6 + 2;
            uVar10 = uVar10 + 2;
          } while (uVar10 != (param_4 & 0xfffffffe));
        }
        if ((param_4 & 1) != 0) {
          uVar4 = uVar9 * 0x2580 + param_10;
          *(double *)(uVar4 + uVar6 * 8) =
               (double)((((int)uVar6 + 2) * iVar8) % (int)param_3) / dVar11;
        }
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 != uVar3);
  }
  return uVar4;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void print_array(uint param_1,uint param_2,long param_3)

{
  FILE *__stream;
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  
  __stream = _DAT_b353d8d48188b48;
  fwrite(_L_str,0x16,1,_DAT_b353d8d48188b48);
  fprintf(__stream,"begin dump: %s",&_L_str_2);
  if (0 < (int)param_1) {
    uVar2 = 0;
    do {
      if (0 < (int)param_2) {
        uVar3 = 0;
        do {
          iVar1 = (int)uVar3 + (int)uVar2 * param_1;
          if ((iVar1 * -0x33333333 + 0x19999998U >> 2 | iVar1 * 0x40000000) < 0xccccccd) {
            fputc(10,__stream);
          }
          fprintf(__stream,"%0.2lf ",*(undefined8 *)(uVar2 * 0x2580 + param_3 + uVar3 * 8));
          uVar3 = uVar3 + 1;
        } while (uVar3 != param_2);
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 != param_1);
  }
  fprintf(__stream,"\nend   dump: %s\n",&_L_str_2);
  fwrite("==END   DUMP_ARRAYS==\n",0x16,1,__stream);
  return;
}



void kernel_2mm(double param_1,double param_2,uint param_3,uint param_4,uint param_5,uint param_6,
               long param_7_00,long param_8_00,long param_7,long param_8,long param_9)

{
  double *pdVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  double dVar7;
  
  if (0 < (int)param_3) {
    uVar6 = 0;
    do {
      if (0 < (int)param_4) {
        uVar5 = 0;
        do {
          lVar2 = uVar6 * 0x1c20 + param_7_00;
          *(undefined8 *)(lVar2 + uVar5 * 8) = 0;
          if (0 < (int)param_5) {
            pdVar1 = (double *)(lVar2 + uVar5 * 8);
            dVar7 = 0.0;
            uVar4 = 0;
            uVar3 = 0;
            if (param_5 != 1) {
              do {
                lVar2 = uVar6 * 0x2260 + param_8_00;
                dVar7 = *(double *)(lVar2 + uVar4 * 8) * param_1 *
                        *(double *)(uVar4 * 0x1c20 + param_7 + uVar5 * 8) + dVar7;
                *pdVar1 = dVar7;
                dVar7 = *(double *)(lVar2 + (uVar4 | 1) * 8) * param_1 *
                        *(double *)((uVar4 | 1) * 0x1c20 + param_7 + uVar5 * 8) + dVar7;
                *pdVar1 = dVar7;
                uVar4 = uVar4 + 2;
                uVar3 = uVar3 + 2;
              } while (uVar3 != (param_5 & 0xfffffffe));
            }
            if ((param_5 & 1) != 0) {
              *pdVar1 = *(double *)(uVar6 * 0x2260 + param_8_00 + uVar4 * 8) * param_1 *
                        *(double *)(uVar4 * 0x1c20 + param_7 + uVar5 * 8) + dVar7;
            }
          }
          uVar5 = uVar5 + 1;
        } while (uVar5 != param_4);
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 != param_3);
    if (0 < (int)param_3) {
      uVar6 = 0;
      do {
        if (0 < (int)param_6) {
          uVar5 = 0;
          do {
            lVar2 = uVar6 * 0x2580 + param_9;
            dVar7 = *(double *)(lVar2 + uVar5 * 8) * param_2;
            *(double *)(lVar2 + uVar5 * 8) = dVar7;
            if (0 < (int)param_4) {
              pdVar1 = (double *)(lVar2 + uVar5 * 8);
              uVar4 = 0;
              uVar3 = 0;
              if (param_4 != 1) {
                do {
                  lVar2 = uVar6 * 0x1c20 + param_7_00;
                  dVar7 = *(double *)(lVar2 + uVar4 * 8) *
                          *(double *)(uVar4 * 0x2580 + param_8 + uVar5 * 8) + dVar7;
                  *pdVar1 = dVar7;
                  dVar7 = *(double *)(lVar2 + (uVar4 | 1) * 8) *
                          *(double *)((uVar4 | 1) * 0x2580 + param_8 + uVar5 * 8) + dVar7;
                  *pdVar1 = dVar7;
                  uVar4 = uVar4 + 2;
                  uVar3 = uVar3 + 2;
                } while (uVar3 != (param_4 & 0xfffffffe));
              }
              if ((param_4 & 1) != 0) {
                *pdVar1 = *(double *)(uVar6 * 0x1c20 + param_7_00 + uVar4 * 8) *
                          *(double *)(uVar4 * 0x2580 + param_8 + uVar5 * 8) + dVar7;
              }
            }
            uVar5 = uVar5 + 1;
          } while (uVar5 != param_6);
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 != param_3);
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 submain(int param_1,char **param_2)

{
  double *pdVar1;
  undefined auVar2 [16];
  undefined auVar3 [16];
  void *__ptr;
  void *__ptr_00;
  void *__ptr_01;
  void *__ptr_02;
  void *__ptr_03;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  int iVar9;
  ulong uVar10;
  uint uVar11;
  int iVar12;
  double dVar13;
  undefined auVar14 [16];
  int iVar15;
  uint uVar16;
  undefined auVar17 [16];
  int iVar18;
  ulong uVar19;
  
  __ptr = (void *)polybench_alloc_data(720000,8);
  __ptr_00 = (void *)polybench_alloc_data(880000,8);
  __ptr_01 = (void *)polybench_alloc_data(990000,8);
  __ptr_02 = (void *)polybench_alloc_data(0x107ac0,8);
  __ptr_03 = (void *)polybench_alloc_data(960000,8);
  auVar2 = __LCPI3_3;
  auVar17 = __LCPI3_1;
  uVar4 = 0;
  lVar5 = 0;
  do {
    lVar6 = 0;
    iVar9 = 0;
    do {
      uVar11 = iVar9 * (int)lVar5 + 1;
      iVar15 = (int)((ulong)uVar11 * (ulong)SUB164(auVar17,0) >> 0x20) -
               (-(uint)((int)uVar11 < 0) & SUB164(auVar17,0));
      dVar13 = (double)(uVar11 + ((iVar15 >> 8) - (iVar15 >> 0x1f)) * -800);
      auVar14 = divpd(CONCAT88((double)(int)((ulong)dVar13 >> 0x20),dVar13),auVar2);
      *(undefined (*) [16])((long)__ptr_00 + lVar6 * 8 + lVar5 * 0x2260) = auVar14;
      auVar3 = __LCPI3_8;
      auVar14 = __LCPI3_6;
      lVar6 = lVar6 + 2;
      iVar9 = iVar9 + 2;
    } while (lVar6 != 0x44c);
    lVar5 = lVar5 + 1;
  } while (lVar5 != 800);
  lVar5 = 0;
  do {
    lVar6 = 0;
    iVar9 = 0;
    do {
      uVar19 = (ulong)(iVar9 + 1) * (uVar4 & 0xffffffff);
      iVar15 = (int)uVar19;
      iVar18 = (int)((uVar19 & 0xffffffff) * (ulong)SUB164(auVar14,0) >> 0x20) -
               (-(uint)(iVar15 < 0) & SUB164(auVar14,0));
      dVar13 = (double)(iVar15 + ((iVar18 >> 9) - (iVar18 >> 0x1f)) * -900);
      auVar17 = divpd(CONCAT88((double)(int)((ulong)dVar13 >> 0x20),dVar13),auVar3);
      *(undefined (*) [16])((long)__ptr_01 + lVar6 * 8 + uVar4 * 0x1c20) = auVar17;
      auVar2 = __LCPI3_13;
      auVar17 = __LCPI3_11;
      lVar6 = lVar6 + 2;
      iVar9 = iVar9 + 2;
    } while (lVar6 != 900);
    uVar4 = uVar4 + 1;
  } while (uVar4 != 0x44c);
  uVar4 = 0;
  do {
    lVar6 = 0;
    iVar9 = 0;
    do {
      uVar11 = (iVar9 + 3) * (int)lVar5 + 1;
      iVar15 = (int)((ulong)uVar11 * (ulong)SUB164(auVar17,0) >> 0x20) -
               (-(uint)((int)uVar11 < 0) & SUB164(auVar17,0));
      dVar13 = (double)(uVar11 + ((iVar15 >> 7) - (iVar15 >> 0x1f)) * -0x4b0);
      auVar14 = divpd(CONCAT88((double)(int)((ulong)dVar13 >> 0x20),dVar13),auVar2);
      *(undefined (*) [16])((long)__ptr_02 + lVar6 * 8 + lVar5 * 0x2580) = auVar14;
      auVar3 = __LCPI3_16;
      auVar14 = __LCPI3_14;
      lVar6 = lVar6 + 2;
      iVar9 = iVar9 + 2;
    } while (lVar6 != 0x4b0);
    lVar5 = lVar5 + 1;
  } while (lVar5 != 900);
  lVar5 = 0;
  do {
    lVar6 = 0;
    uVar11 = 0;
    iVar9 = 1;
    do {
      uVar11 = uVar11 + 2;
      iVar9 = iVar9 + 2;
      uVar10 = (ulong)uVar11 * (uVar4 & 0xffffffff);
      uVar16 = iVar9 * SUB164(ZEXT816(uVar4 << 0x20) >> 0x20,0);
      uVar19 = uVar10 & 0xffffffff;
      uVar8 = SUB164(auVar14,0);
      iVar12 = (int)uVar19;
      auVar17 = ZEXT816(CONCAT44(-(uint)((long)(uVar19 | (ulong)uVar16 << 0x20) < 0),
                                 -(uint)(iVar12 < 0))) & auVar14;
      iVar15 = (int)((uVar10 & 0xffffffff) * (ulong)uVar8 >> 0x20) - SUB164(auVar17,0);
      iVar18 = (int)((ulong)uVar16 * (ulong)uVar8 >> 0x20) - SUB164(auVar17 >> 0x20,0);
      auVar17 = divpd(CONCAT88((double)(uVar16 + ((iVar18 >> 9) - (iVar18 >> 0x1f)) * -0x44c),
                               (double)(iVar12 + ((iVar15 >> 9) - (iVar15 >> 0x1f)) * -0x44c)),
                      auVar3);
      *(undefined (*) [16])((long)__ptr_03 + lVar6 * 8 + uVar4 * 0x2580) = auVar17;
      lVar6 = lVar6 + 2;
    } while (lVar6 != 0x4b0);
    uVar4 = uVar4 + 1;
  } while (uVar4 != 800);
  lVar6 = 0;
  do {
    lVar7 = 0;
    do {
      pdVar1 = (double *)((long)__ptr + lVar7 * 8 + lVar5 * 0x1c20);
      *(undefined8 *)((long)__ptr + lVar7 * 8 + lVar5 * 0x1c20) = 0;
      auVar17 = (undefined  [16])0x0;
      uVar4 = 0;
      do {
        dVar13 = *(double *)((long)__ptr_00 + uVar4 * 8 + lVar5 * 0x2260) * 1.5 *
                 *(double *)((long)__ptr_01 + lVar7 * 8 + uVar4 * 0x1c20) + SUB168(auVar17,0);
        *pdVar1 = dVar13;
        dVar13 = *(double *)((long)__ptr_00 + (uVar4 | 1) * 8 + lVar5 * 0x2260) * 1.5 *
                 *(double *)((long)__ptr_01 + lVar7 * 8 + (uVar4 | 1) * 0x1c20) + dVar13;
        auVar17 = ZEXT816((ulong)dVar13);
        *pdVar1 = dVar13;
        uVar4 = uVar4 + 2;
      } while (uVar4 != 0x44c);
      lVar7 = lVar7 + 1;
    } while (lVar7 != 900);
    lVar5 = lVar5 + 1;
  } while (lVar5 != 800);
  do {
    lVar5 = 0;
    do {
      pdVar1 = (double *)((long)__ptr_03 + lVar5 * 8 + lVar6 * 0x2580);
      dVar13 = *(double *)((long)__ptr_03 + lVar5 * 8 + lVar6 * 0x2580) * 1.2;
      *(double *)((long)__ptr_03 + lVar5 * 8 + lVar6 * 0x2580) = dVar13;
      uVar4 = 0;
      do {
        dVar13 = *(double *)((long)__ptr + uVar4 * 8 + lVar6 * 0x1c20) *
                 *(double *)((long)__ptr_02 + lVar5 * 8 + uVar4 * 0x2580) + dVar13;
        *pdVar1 = dVar13;
        dVar13 = *(double *)((long)__ptr + (uVar4 | 1) * 8 + lVar6 * 0x1c20) *
                 *(double *)((long)__ptr_02 + lVar5 * 8 + (uVar4 | 1) * 0x2580) + dVar13;
        *pdVar1 = dVar13;
        uVar4 = uVar4 + 2;
      } while (uVar4 != 900);
      lVar5 = lVar5 + 1;
    } while (lVar5 != 0x4b0);
    lVar6 = lVar6 + 1;
  } while (lVar6 != 800);
  if ((0x2a < param_1) && (**param_2 == '\0')) {
    print_array(800,0x4b0,__ptr_03);
  }
  free(__ptr);
  free(__ptr_00);
  free(__ptr_01);
  free(__ptr_02);
  free(__ptr_03);
  return 0;
}


