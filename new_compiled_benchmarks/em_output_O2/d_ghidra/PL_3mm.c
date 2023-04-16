#include "PL_3mm.h"



void init_array(uint param_1,uint param_2,uint param_3,uint param_4,uint param_5,long param_6,
               long param_7,long param_8,long param_9)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  int iVar6;
  ulong uVar7;
  double dVar8;
  
  if (0 < (int)param_1) {
    dVar8 = (double)(param_1 * 5);
    uVar7 = 0;
    do {
      if (0 < (int)param_3) {
        uVar3 = 0;
        uVar4 = 0;
        iVar6 = (int)uVar7;
        if (param_3 != 1) {
          do {
            uVar1 = (uint)uVar3 * iVar6;
            lVar2 = uVar7 * 8000 + param_6;
            *(double *)(lVar2 + uVar3 * 8) =
                 (double)(int)((long)(CONCAT44((int)(uVar1 | 1) >> 0x1f,uVar1) | 1) %
                              (long)(int)param_1) / dVar8;
            *(double *)(lVar2 + (uVar3 | 1) * 8) =
                 (double)((int)(((uint)uVar3 | 1) * iVar6 + 1) % (int)param_1) / dVar8;
            uVar3 = uVar3 + 2;
            uVar4 = uVar4 + 2;
          } while (uVar4 != (param_3 & 0xfffffffe));
        }
        if ((param_3 & 1) != 0) {
          *(double *)(uVar7 * 8000 + param_6 + uVar3 * 8) =
               (double)(((int)uVar3 * iVar6 + 1) % (int)param_1) / dVar8;
        }
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 != param_1);
  }
  if (0 < (int)param_3) {
    dVar8 = (double)(param_2 * 5);
    uVar7 = 0;
    do {
      if (0 < (int)param_2) {
        uVar4 = 0;
        uVar3 = 0;
        iVar6 = (int)uVar7;
        if (param_2 != 1) {
          do {
            uVar5 = uVar4 | 1;
            lVar2 = uVar7 * 0x1c20 + param_7;
            *(double *)(lVar2 + uVar4 * 8) =
                 (double)((int)(((uint)uVar4 | 1) * iVar6 + 2) % (int)param_2) / dVar8;
            uVar4 = uVar4 + 2;
            *(double *)(lVar2 + uVar5 * 8) =
                 (double)(((int)uVar4 * iVar6 + 2) % (int)param_2) / dVar8;
            uVar3 = uVar3 + 2;
          } while (uVar3 != (param_2 & 0xfffffffe));
        }
        if ((param_2 & 1) != 0) {
          *(double *)(uVar7 * 0x1c20 + param_7 + uVar4 * 8) =
               (double)((((int)uVar4 + 1) * iVar6 + 2) % (int)param_2) / dVar8;
        }
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 != param_3);
  }
  if (0 < (int)param_2) {
    dVar8 = (double)(param_4 * 5);
    uVar7 = 0;
    do {
      if (0 < (int)param_5) {
        uVar3 = 0;
        uVar4 = 0;
        iVar6 = (int)uVar7;
        if (param_5 != 1) {
          do {
            lVar2 = uVar7 * 0x2580 + param_8;
            *(double *)(lVar2 + uVar3 * 8) =
                 (double)((((int)uVar3 + 3) * iVar6) % (int)param_4) / dVar8;
            *(double *)(lVar2 + (uVar3 | 1) * 8) =
                 (double)((((int)(uVar3 | 1) + 3) * iVar6) % (int)param_4) / dVar8;
            uVar3 = uVar3 + 2;
            uVar4 = uVar4 + 2;
          } while (uVar4 != (param_5 & 0xfffffffe));
        }
        if ((param_5 & 1) != 0) {
          *(double *)(uVar7 * 0x2580 + param_8 + uVar3 * 8) =
               (double)((((int)uVar3 + 3) * iVar6) % (int)param_4) / dVar8;
        }
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 != param_2);
  }
  if (0 < (int)param_5) {
    dVar8 = (double)(param_3 * 5);
    uVar7 = 0;
    do {
      if (0 < (int)param_4) {
        uVar3 = 0;
        uVar4 = 0;
        iVar6 = (int)uVar7;
        if (param_4 != 1) {
          do {
            lVar2 = uVar7 * 0x2260 + param_9;
            *(double *)(lVar2 + uVar3 * 8) =
                 (double)((((int)uVar3 + 2) * iVar6 + 2) % (int)param_3) / dVar8;
            *(double *)(lVar2 + (uVar3 | 1) * 8) =
                 (double)((((int)(uVar3 | 1) + 2) * iVar6 + 2) % (int)param_3) / dVar8;
            uVar3 = uVar3 + 2;
            uVar4 = uVar4 + 2;
          } while (uVar4 != (param_4 & 0xfffffffe));
        }
        if ((param_4 & 1) != 0) {
          *(double *)(uVar7 * 0x2260 + param_9 + uVar3 * 8) =
               (double)((((int)uVar3 + 2) * iVar6 + 2) % (int)param_3) / dVar8;
        }
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 != param_5);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void print_array(uint param_1,uint param_2,long param_3)

{
  FILE *__stream;
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  
  __stream = _DAT_d253d8d48188b48;
  fwrite(_L_str,0x16,1,_DAT_d253d8d48188b48);
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
          fprintf(__stream,"%0.2lf ",*(undefined8 *)(uVar2 * 0x2260 + param_3 + uVar3 * 8));
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



void kernel_3mm(uint param_1,uint param_2,uint param_3,uint param_4,uint param_5,long param_6,
               long param_7,long param_8,long param_9,long param_10,long param_11,long param_12)

{
  double *pdVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  double dVar7;
  
  if (0 < (int)param_1) {
    uVar5 = 0;
    do {
      if (0 < (int)param_2) {
        uVar6 = 0;
        do {
          lVar2 = uVar5 * 0x1c20 + param_6;
          *(undefined8 *)(lVar2 + uVar6 * 8) = 0;
          if (0 < (int)param_3) {
            pdVar1 = (double *)(lVar2 + uVar6 * 8);
            dVar7 = 0.0;
            uVar3 = 0;
            uVar4 = 0;
            if (param_3 != 1) {
              do {
                lVar2 = uVar5 * 8000 + param_7;
                dVar7 = *(double *)(lVar2 + uVar3 * 8) *
                        *(double *)(uVar3 * 0x1c20 + param_8 + uVar6 * 8) + dVar7;
                *pdVar1 = dVar7;
                dVar7 = *(double *)(lVar2 + (uVar3 | 1) * 8) *
                        *(double *)((uVar3 | 1) * 0x1c20 + param_8 + uVar6 * 8) + dVar7;
                *pdVar1 = dVar7;
                uVar3 = uVar3 + 2;
                uVar4 = uVar4 + 2;
              } while (uVar4 != (param_3 & 0xfffffffe));
            }
            if ((param_3 & 1) != 0) {
              *pdVar1 = *(double *)(uVar5 * 8000 + param_7 + uVar3 * 8) *
                        *(double *)(uVar3 * 0x1c20 + param_8 + uVar6 * 8) + dVar7;
            }
          }
          uVar6 = uVar6 + 1;
        } while (uVar6 != param_2);
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 != param_1);
  }
  if (0 < (int)param_2) {
    uVar5 = 0;
    do {
      if (0 < (int)param_4) {
        uVar6 = 0;
        do {
          lVar2 = uVar5 * 0x2260 + param_9;
          *(undefined8 *)(lVar2 + uVar6 * 8) = 0;
          if (0 < (int)param_5) {
            pdVar1 = (double *)(lVar2 + uVar6 * 8);
            dVar7 = 0.0;
            uVar4 = 0;
            uVar3 = 0;
            if (param_5 != 1) {
              do {
                lVar2 = uVar5 * 0x2580 + param_10;
                dVar7 = *(double *)(lVar2 + uVar4 * 8) *
                        *(double *)(uVar4 * 0x2260 + param_11 + uVar6 * 8) + dVar7;
                *pdVar1 = dVar7;
                dVar7 = *(double *)(lVar2 + (uVar4 | 1) * 8) *
                        *(double *)((uVar4 | 1) * 0x2260 + param_11 + uVar6 * 8) + dVar7;
                *pdVar1 = dVar7;
                uVar4 = uVar4 + 2;
                uVar3 = uVar3 + 2;
              } while (uVar3 != (param_5 & 0xfffffffe));
            }
            if ((param_5 & 1) != 0) {
              *pdVar1 = *(double *)(uVar5 * 0x2580 + param_10 + uVar4 * 8) *
                        *(double *)(uVar4 * 0x2260 + param_11 + uVar6 * 8) + dVar7;
            }
          }
          uVar6 = uVar6 + 1;
        } while (uVar6 != param_4);
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 != param_2);
  }
  if (0 < (int)param_1) {
    uVar5 = 0;
    do {
      if (0 < (int)param_4) {
        uVar6 = 0;
        do {
          lVar2 = uVar5 * 0x2260 + param_12;
          *(undefined8 *)(lVar2 + uVar6 * 8) = 0;
          if (0 < (int)param_2) {
            pdVar1 = (double *)(lVar2 + uVar6 * 8);
            dVar7 = 0.0;
            uVar3 = 0;
            uVar4 = 0;
            if (param_2 != 1) {
              do {
                lVar2 = uVar5 * 0x1c20 + param_6;
                dVar7 = *(double *)(lVar2 + uVar3 * 8) *
                        *(double *)(uVar3 * 0x2260 + param_9 + uVar6 * 8) + dVar7;
                *pdVar1 = dVar7;
                dVar7 = *(double *)(lVar2 + (uVar3 | 1) * 8) *
                        *(double *)((uVar3 | 1) * 0x2260 + param_9 + uVar6 * 8) + dVar7;
                *pdVar1 = dVar7;
                uVar3 = uVar3 + 2;
                uVar4 = uVar4 + 2;
              } while (uVar4 != (param_2 & 0xfffffffe));
            }
            if ((param_2 & 1) != 0) {
              *pdVar1 = *(double *)(uVar5 * 0x1c20 + param_6 + uVar3 * 8) *
                        *(double *)(uVar3 * 0x2260 + param_9 + uVar6 * 8) + dVar7;
            }
          }
          uVar6 = uVar6 + 1;
        } while (uVar6 != param_4);
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 != param_1);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 submain(int param_1,char **param_2)

{
  double *pdVar1;
  undefined auVar2 [16];
  void *__ptr;
  void *__ptr_00;
  void *__ptr_01;
  void *__ptr_02;
  void *__ptr_03;
  void *__ptr_04;
  void *__ptr_05;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  uint uVar8;
  double dVar9;
  undefined auVar10 [16];
  undefined auVar11 [16];
  int iVar12;
  int iVar13;
  ulong uVar14;
  undefined auVar15 [16];
  int iVar16;
  
  __ptr = (void *)polybench_alloc_data(720000,8);
  __ptr_00 = (void *)polybench_alloc_data(800000,8);
  __ptr_01 = (void *)polybench_alloc_data(900000,8);
  __ptr_02 = (void *)polybench_alloc_data(990000,8);
  __ptr_03 = (void *)polybench_alloc_data(0x107ac0,8);
  __ptr_04 = (void *)polybench_alloc_data(0x142440,8);
  __ptr_05 = (void *)polybench_alloc_data(880000,8);
  auVar11 = __LCPI3_4;
  auVar2 = __LCPI3_3;
  auVar15 = __LCPI3_1;
  lVar6 = 0;
  lVar3 = 0;
  do {
    lVar5 = 0;
    iVar7 = 0;
    do {
      uVar8 = iVar7 * (int)lVar3 + 1;
      iVar12 = (int)((ulong)uVar8 * (ulong)SUB164(auVar15,0) >> 0x20) -
               (-(uint)((int)uVar8 < 0) & SUB164(auVar15,0));
      dVar9 = (double)(uVar8 + ((iVar12 >> 8) - (iVar12 >> 0x1f)) * -800);
      auVar10 = divpd(CONCAT88((double)(int)((ulong)dVar9 >> 0x20),dVar9),auVar2);
      *(undefined (*) [16])((long)__ptr_00 + lVar5 * 8 + lVar3 * 8000) = auVar10;
      auVar10 = __LCPI3_8;
      lVar5 = lVar5 + 2;
      iVar12 = SUB164(auVar11,0);
      iVar7 = iVar7 + iVar12;
    } while (lVar5 != 1000);
    lVar3 = lVar3 + 1;
  } while (lVar3 != 800);
  uVar4 = 0;
  do {
    lVar3 = 0;
    iVar7 = 0;
    do {
      uVar8 = (iVar7 + 1) * (int)lVar6 + iVar12;
      iVar16 = (int)((ulong)uVar8 * 0x91a2b3c5 >> 0x20) - (-(uint)((int)uVar8 < 0) & 0x91a2b3c5);
      dVar9 = (double)(uVar8 + ((iVar16 >> 9) - (iVar16 >> 0x1f)) * -900);
      auVar15 = divpd(CONCAT88((double)(int)((ulong)dVar9 >> 0x20),dVar9),auVar10);
      *(undefined (*) [16])((long)__ptr_01 + lVar3 * 8 + lVar6 * 0x1c20) = auVar15;
      auVar2 = __LCPI3_13;
      auVar15 = __LCPI3_11;
      lVar3 = lVar3 + 2;
      iVar7 = iVar7 + 2;
    } while (lVar3 != 900);
    lVar6 = lVar6 + 1;
  } while (lVar6 != 1000);
  lVar3 = 0;
  do {
    lVar6 = 0;
    iVar7 = 0;
    do {
      uVar14 = (ulong)(iVar7 + 3) * (uVar4 & 0xffffffff);
      iVar16 = (int)uVar14;
      iVar13 = (int)((uVar14 & 0xffffffff) * (ulong)SUB164(auVar15,0) >> 0x20) -
               (-(uint)(iVar16 < 0) & SUB164(auVar15,0));
      dVar9 = (double)(iVar16 + ((iVar13 >> 9) - (iVar13 >> 0x1f)) * -0x44c);
      auVar11 = divpd(CONCAT88((double)(int)((ulong)dVar9 >> 0x20),dVar9),auVar2);
      *(undefined (*) [16])((long)__ptr_03 + lVar6 * 8 + uVar4 * 0x2580) = auVar11;
      auVar10 = __LCPI3_16;
      auVar11 = __LCPI3_14;
      lVar6 = lVar6 + 2;
      iVar7 = iVar7 + iVar12;
    } while (lVar6 != 0x4b0);
    uVar4 = uVar4 + 1;
  } while (uVar4 != 900);
  lVar6 = 0;
  do {
    lVar5 = 0;
    iVar7 = 0;
    do {
      iVar7 = iVar7 + iVar12;
      uVar8 = iVar7 * (int)lVar3 + iVar12;
      iVar16 = (int)((ulong)uVar8 * (ulong)SUB164(auVar11,0) >> 0x20) -
               (-(uint)((int)uVar8 < 0) & SUB164(auVar11,0));
      dVar9 = (double)(uVar8 + ((iVar16 >> 6) - (iVar16 >> 0x1f)) * -1000);
      auVar15 = divpd(CONCAT88((double)(int)((ulong)dVar9 >> 0x20),dVar9),auVar10);
      *(undefined (*) [16])((long)__ptr_04 + lVar5 * 8 + lVar3 * 0x2260) = auVar15;
      lVar5 = lVar5 + 2;
    } while (lVar5 != 0x44c);
    lVar3 = lVar3 + 1;
  } while (lVar3 != 0x4b0);
  lVar3 = 0;
  do {
    lVar5 = 0;
    do {
      pdVar1 = (double *)((long)__ptr + lVar5 * 8 + lVar6 * 0x1c20);
      *(undefined8 *)((long)__ptr + lVar5 * 8 + lVar6 * 0x1c20) = 0;
      auVar15 = (undefined  [16])0x0;
      uVar4 = 0;
      do {
        dVar9 = *(double *)((long)__ptr_00 + uVar4 * 8 + lVar6 * 8000) *
                *(double *)((long)__ptr_01 + lVar5 * 8 + uVar4 * 0x1c20) + SUB168(auVar15,0);
        *pdVar1 = dVar9;
        dVar9 = *(double *)((long)__ptr_00 + (uVar4 | 1) * 8 + lVar6 * 8000) *
                *(double *)((long)__ptr_01 + lVar5 * 8 + (uVar4 | 1) * 0x1c20) + dVar9;
        auVar15 = ZEXT816((ulong)dVar9);
        *pdVar1 = dVar9;
        uVar4 = uVar4 + 2;
      } while (uVar4 != 1000);
      lVar5 = lVar5 + 1;
    } while (lVar5 != 900);
    lVar6 = lVar6 + 1;
  } while (lVar6 != 800);
  lVar6 = 0;
  do {
    lVar5 = 0;
    do {
      pdVar1 = (double *)((long)__ptr_02 + lVar5 * 8 + lVar3 * 0x2260);
      *(undefined8 *)((long)__ptr_02 + lVar5 * 8 + lVar3 * 0x2260) = 0;
      auVar15 = ZEXT816(0);
      uVar4 = 0;
      do {
        dVar9 = *(double *)((long)__ptr_03 + uVar4 * 8 + lVar3 * 0x2580) *
                *(double *)((long)__ptr_04 + lVar5 * 8 + uVar4 * 0x2260) + SUB168(auVar15,0);
        *pdVar1 = dVar9;
        dVar9 = *(double *)((long)__ptr_03 + (uVar4 | 1) * 8 + lVar3 * 0x2580) *
                *(double *)((long)__ptr_04 + lVar5 * 8 + (uVar4 | 1) * 0x2260) + dVar9;
        auVar15 = ZEXT816((ulong)dVar9);
        *pdVar1 = dVar9;
        uVar4 = uVar4 + 2;
      } while (uVar4 != 0x4b0);
      lVar5 = lVar5 + 1;
    } while (lVar5 != 0x44c);
    lVar3 = lVar3 + 1;
  } while (lVar3 != 900);
  do {
    lVar3 = 0;
    do {
      pdVar1 = (double *)((long)__ptr_05 + lVar3 * 8 + lVar6 * 0x2260);
      *(undefined8 *)((long)__ptr_05 + lVar3 * 8 + lVar6 * 0x2260) = 0;
      auVar15 = ZEXT816(0);
      uVar4 = 0;
      do {
        dVar9 = *(double *)((long)__ptr + uVar4 * 8 + lVar6 * 0x1c20) *
                *(double *)((long)__ptr_02 + lVar3 * 8 + uVar4 * 0x2260) + SUB168(auVar15,0);
        *pdVar1 = dVar9;
        dVar9 = *(double *)((long)__ptr + (uVar4 | 1) * 8 + lVar6 * 0x1c20) *
                *(double *)((long)__ptr_02 + lVar3 * 8 + (uVar4 | 1) * 0x2260) + dVar9;
        auVar15 = ZEXT816((ulong)dVar9);
        *pdVar1 = dVar9;
        uVar4 = uVar4 + 2;
      } while (uVar4 != 900);
      lVar3 = lVar3 + 1;
    } while (lVar3 != 0x44c);
    lVar6 = lVar6 + 1;
  } while (lVar6 != 800);
  if ((0x2a < param_1) && (**param_2 == '\0')) {
    print_array(800,0x44c,__ptr_05);
  }
  free(__ptr);
  free(__ptr_00);
  free(__ptr_01);
  free(__ptr_02);
  free(__ptr_03);
  free(__ptr_04);
  free(__ptr_05);
  return 0;
}


