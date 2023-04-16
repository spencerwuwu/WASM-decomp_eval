#include "atax.h"



void init_array(uint param_1,uint param_2,long param_3,long param_4)

{
  double *pdVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  double dVar6;
  int iVar7;
  int iVar8;
  undefined auVar9 [16];
  
  if (0 < (int)param_2) {
    dVar6 = (double)param_2;
    if (param_2 == 1) {
      uVar2 = 0;
    }
    else {
      uVar2 = (ulong)(param_2 & 0xfffffffe);
      iVar7 = 0;
      iVar8 = 1;
      uVar3 = 0;
      do {
        auVar9 = divpd(CONCAT88((double)iVar8,(double)iVar7),
                       CONCAT412((int)((ulong)dVar6 >> 0x20),CONCAT48(SUB84(dVar6,0),dVar6)));
        pdVar1 = (double *)(param_4 + uVar3 * 8);
        *pdVar1 = SUB168(auVar9,0) + 1.0;
        pdVar1[1] = SUB168(auVar9 >> 0x40,0) + 1.0;
        uVar3 = uVar3 + 2;
        iVar7 = iVar7 + 2;
        iVar8 = iVar8 + 2;
      } while (uVar3 != uVar2);
      if (uVar2 == param_2) goto LAB_0010009c;
    }
    do {
      *(double *)(param_4 + uVar2 * 8) = (double)(int)uVar2 / dVar6 + 1.0;
      uVar2 = uVar2 + 1;
    } while (uVar2 != param_2);
  }
LAB_0010009c:
  if (0 < (int)param_1) {
    dVar6 = (double)(param_1 * 5);
    uVar2 = 0;
    do {
      if (0 < (int)param_2) {
        uVar4 = 0;
        uVar3 = 0;
        iVar7 = (int)uVar2;
        if (param_2 != 1) {
          do {
            lVar5 = uVar2 * 0x41a0 + param_3;
            *(double *)(lVar5 + uVar4 * 8) = (double)(((int)uVar4 + iVar7) % (int)param_2) / dVar6;
            *(double *)(lVar5 + (uVar4 | 1) * 8) =
                 (double)(((int)(uVar4 | 1) + iVar7) % (int)param_2) / dVar6;
            uVar4 = uVar4 + 2;
            uVar3 = uVar3 + 2;
          } while (uVar3 != (param_2 & 0xfffffffe));
        }
        if ((param_2 & 1) != 0) {
          *(double *)(uVar2 * 0x41a0 + param_3 + uVar4 * 8) =
               (double)(((int)uVar4 + iVar7) % (int)param_2) / dVar6;
        }
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 != param_1);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void print_array(uint param_1,long param_2)

{
  FILE *__stream;
  ulong uVar1;
  
  __stream = _DAT_8b73d8d48188b48;
  fwrite(_L_str,0x16,1,_DAT_8b73d8d48188b48);
  fprintf(__stream,"begin dump: %s",&_L_str_2);
  if (0 < (int)param_1) {
    uVar1 = 0;
    do {
      if (((uint)((int)uVar1 * -0x33333333) >> 2 | (int)uVar1 * 0x40000000) < 0xccccccd) {
        fputc(10,__stream);
      }
      fprintf(__stream,"%0.2lf ",*(undefined8 *)(param_2 + uVar1 * 8));
      uVar1 = uVar1 + 1;
    } while (uVar1 != param_1);
  }
  fprintf(__stream,"\nend   dump: %s\n",&_L_str_2);
  fwrite("==END   DUMP_ARRAYS==\n",0x16,1,__stream);
  return;
}



void kernel_atax(uint param_1,uint param_2,long param_3,long param_4,void *param_5,long param_6)

{
  void *pvVar1;
  void *pvVar2;
  double *pdVar3;
  double *pdVar4;
  double *pdVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  double dVar16;
  
  uVar15 = (ulong)param_2;
  if (0 < (int)param_2) {
    memset(param_5,0,uVar15 * 8);
  }
  if (0 < (int)param_1) {
    pvVar1 = (void *)((long)param_5 + uVar15 * 8);
    uVar12 = (ulong)(param_2 & 0xfffffffc);
    uVar14 = 0;
    do {
      *(undefined8 *)(param_6 + uVar14 * 8) = 0;
      if (0 < (int)param_2) {
        pvVar2 = (void *)(param_3 + uVar14 * 0x41a0);
        dVar16 = 0.0;
        lVar10 = 0;
        uVar11 = 0;
        if (param_2 != 1) {
          do {
            dVar16 = *(double *)((long)pvVar2 + lVar10 * 8) * *(double *)(param_4 + lVar10 * 8) +
                     dVar16;
            *(double *)(param_6 + uVar14 * 8) = dVar16;
            uVar13 = lVar10 * 8 | 8;
            dVar16 = *(double *)(uVar13 + (long)pvVar2) * *(double *)(param_4 + uVar13) + dVar16;
            *(double *)(param_6 + uVar14 * 8) = dVar16;
            lVar10 = lVar10 + 2;
            uVar11 = uVar11 + 2;
          } while (uVar11 != (param_2 & 0xfffffffe));
        }
        if ((param_2 & 1) != 0) {
          *(double *)(param_6 + uVar14 * 8) =
               *(double *)((long)pvVar2 + lVar10 * 8) * *(double *)(param_4 + lVar10 * 8) + dVar16;
        }
        if (0 < (int)param_2) {
          if (param_2 < 8) {
            uVar11 = 0;
          }
          else if (param_5 < (void *)(uVar14 * 0x41a0 + uVar15 * 8 + param_3) && pvVar2 < pvVar1) {
            uVar11 = 0;
          }
          else {
            uVar11 = 0;
            if ((void *)(param_6 + uVar14 * 8 + 8) <= param_5 ||
                pvVar1 <= (void *)(param_6 + uVar14 * 8)) {
              dVar16 = *(double *)(param_6 + uVar14 * 8);
              uVar11 = 0;
              do {
                pdVar3 = (double *)((long)param_5 + uVar11 * 8);
                pdVar4 = (double *)((long)param_5 + uVar11 * 8 + 0x10);
                dVar6 = *pdVar4;
                dVar7 = pdVar4[1];
                pdVar4 = (double *)((long)pvVar2 + uVar11 * 8);
                pdVar5 = (double *)((long)pvVar2 + uVar11 * 8 + 0x10);
                dVar8 = *pdVar5;
                dVar9 = pdVar5[1];
                *(undefined (*) [16])((long)param_5 + uVar11 * 8) =
                     CONCAT88(pdVar4[1] * dVar16 + pdVar3[1],*pdVar4 * dVar16 + *pdVar3);
                *(undefined (*) [16])((long)param_5 + uVar11 * 8 + 0x10) =
                     CONCAT88(dVar9 * dVar16 + dVar7,dVar8 * dVar16 + dVar6);
                uVar11 = uVar11 + 4;
              } while (uVar11 != uVar12);
              uVar11 = uVar12;
              if (uVar12 == uVar15) goto LAB_001002e0;
            }
          }
          uVar13 = uVar11;
          if ((param_2 & 1) != 0) {
            *(double *)((long)param_5 + uVar11 * 8) =
                 *(double *)((long)pvVar2 + uVar11 * 8) * *(double *)(param_6 + uVar14 * 8) +
                 *(double *)((long)param_5 + uVar11 * 8);
            uVar13 = uVar11 | 1;
          }
          if (~uVar11 != -uVar15) {
            do {
              *(double *)((long)param_5 + uVar13 * 8) =
                   *(double *)((long)pvVar2 + uVar13 * 8) * *(double *)(param_6 + uVar14 * 8) +
                   *(double *)((long)param_5 + uVar13 * 8);
              *(double *)((long)param_5 + uVar13 * 8 + 8) =
                   *(double *)((long)pvVar2 + uVar13 * 8 + 8) * *(double *)(param_6 + uVar14 * 8) +
                   *(double *)((long)param_5 + uVar13 * 8 + 8);
              uVar13 = uVar13 + 2;
            } while (uVar13 != uVar15);
          }
        }
      }
LAB_001002e0:
      uVar14 = uVar14 + 1;
    } while (uVar14 != param_1);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 submain(int param_1,char **param_2)

{
  double *pdVar1;
  void *pvVar2;
  double *pdVar3;
  double *pdVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined auVar9 [16];
  void *__ptr;
  void *__ptr_00;
  void *__s;
  void *__ptr_01;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  int iVar14;
  int iVar15;
  undefined auVar16 [16];
  long lVar17;
  double dVar18;
  undefined auVar19 [16];
  undefined auVar20 [16];
  ulong uVar21;
  ulong uVar22;
  int iVar23;
  ulong uVar24;
  int iVar25;
  
  __ptr = (void *)polybench_alloc_data(0x3ce1f0,8);
  __ptr_00 = (void *)polybench_alloc_data(0x834,8);
  __s = (void *)polybench_alloc_data(0x834,8);
  __ptr_01 = (void *)polybench_alloc_data(0x76c,8);
  auVar19 = __LCPI3_1;
  iVar14 = 0;
  iVar15 = 1;
  lVar10 = 0;
  lVar11 = 0;
  do {
    auVar16 = divpd(CONCAT88((double)iVar15,(double)iVar14),auVar19);
    pdVar1 = (double *)((long)__ptr_00 + lVar11 * 8);
    *pdVar1 = SUB168(auVar16,0) + 1.0;
    pdVar1[1] = SUB168(auVar16 >> 0x40,0) + 1.0;
    auVar16 = divpd(CONCAT88((double)(int)((ulong)(double)(iVar14 + 2) >> 0x20),(double)(iVar14 + 2)
                            ),auVar19);
    pdVar1 = (double *)((long)__ptr_00 + lVar11 * 8 + 0x10);
    *pdVar1 = SUB168(auVar16,0) + 1.0;
    pdVar1[1] = SUB168(auVar16 >> 0x40,0) + 1.0;
    auVar16 = divpd(CONCAT88((double)(int)((ulong)(double)(iVar14 + 4) >> 0x20),(double)(iVar14 + 4)
                            ),auVar19);
    pdVar1 = (double *)((long)__ptr_00 + lVar11 * 8 + 0x20);
    *pdVar1 = SUB168(auVar16,0) + 1.0;
    pdVar1[1] = SUB168(auVar16 >> 0x40,0) + 1.0;
    auVar9 = __LCPI3_10;
    auVar16 = __LCPI3_9;
    lVar11 = lVar11 + 6;
    iVar14 = iVar14 + 6;
    iVar15 = iVar15 + 6;
  } while (lVar11 != 0x834);
  do {
    lVar12 = 0;
    lVar11 = 0;
    lVar17 = 1;
    do {
      uVar21 = lVar11 + lVar10;
      iVar14 = (int)((uVar21 & 0xffffffff) * 0x7cd49a17 >> 0x20) -
               (-(uint)((int)uVar21 < 0) & 0x7cd49a17);
      uVar22 = uVar21 + SUB168(auVar9,0);
      uVar24 = lVar17 + SUB168(CONCAT412((int)((ulong)lVar10 >> 0x20),CONCAT48((int)lVar10,lVar10))
                               >> 0x40,0) + SUB168(auVar9 >> 0x40,0);
      uVar13 = uVar22 & 0xffffffff;
      iVar25 = (int)uVar13;
      iVar15 = (int)((uVar22 & 0xffffffff) * 0x7cd49a17 >> 0x20) -
               (-(uint)(iVar25 < 0) & 0x7cd49a17);
      iVar23 = (int)((uVar24 & 0xffffffff) * 0x7cd49a17 >> 0x20) -
               (-(uint)((long)(uVar13 | uVar24 << 0x20) < 0) & 0x7cd49a17);
      dVar18 = (double)((int)uVar21 + ((iVar14 >> 10) - (iVar14 >> 0x1f)) * -0x834);
      auVar19 = divpd(CONCAT88((double)(int)((ulong)dVar18 >> 0x20),dVar18),auVar16);
      auVar20 = divpd(CONCAT88((double)((int)uVar24 + ((iVar23 >> 10) - (iVar23 >> 0x1f)) * -0x834),
                               (double)(iVar25 + ((iVar15 >> 10) - (iVar15 >> 0x1f)) * -0x834)),
                      auVar16);
      *(undefined (*) [16])((long)__ptr + lVar12 * 8 + lVar10 * 0x41a0) = auVar19;
      *(undefined (*) [16])((long)__ptr + (lVar12 * 8 | 0x10U) + lVar10 * 0x41a0) = auVar20;
      lVar12 = lVar12 + 4;
      lVar11 = lVar11 + 4;
      lVar17 = lVar17 + 4;
    } while (lVar12 != 0x834);
    lVar10 = lVar10 + 1;
  } while (lVar10 != 0x76c);
  lVar10 = 0;
  memset(__s,0,0x41a0);
  do {
    pvVar2 = (void *)((long)__ptr + lVar10 * 0x41a0);
    *(undefined8 *)((long)__ptr_01 + lVar10 * 8) = 0;
    dVar18 = 0.0;
    lVar11 = 0;
    do {
      dVar18 = *(double *)((long)pvVar2 + lVar11 * 8) * *(double *)((long)__ptr_00 + lVar11 * 8) +
               dVar18;
      *(double *)((long)__ptr_01 + lVar10 * 8) = dVar18;
      dVar18 = *(double *)((long)pvVar2 + lVar11 * 8 + 8) *
               *(double *)((long)__ptr_00 + lVar11 * 8 + 8) + dVar18;
      *(double *)((long)__ptr_01 + lVar10 * 8) = dVar18;
      dVar18 = *(double *)((long)pvVar2 + lVar11 * 8 + 0x10) *
               *(double *)((long)__ptr_00 + lVar11 * 8 + 0x10) + dVar18;
      *(double *)((long)__ptr_01 + lVar10 * 8) = dVar18;
      lVar11 = lVar11 + 3;
    } while (lVar11 != 0x834);
    if (__s < (void *)((long)__ptr + lVar10 * 0x41a0 + 0x41a0) &&
        pvVar2 < (void *)((long)__s + 0x41a0U)) {
      lVar11 = 0;
LAB_001008b0:
      do {
        *(double *)((long)__s + lVar11 * 8) =
             *(double *)((long)pvVar2 + lVar11 * 8) * *(double *)((long)__ptr_01 + lVar10 * 8) +
             *(double *)((long)__s + lVar11 * 8);
        uVar13 = lVar11 * 8 | 8;
        *(double *)((long)__s + uVar13) =
             *(double *)(uVar13 + (long)pvVar2) * *(double *)((long)__ptr_01 + lVar10 * 8) +
             *(double *)((long)__s + uVar13);
        lVar11 = lVar11 + 2;
      } while (lVar11 != 0x834);
    }
    else {
      lVar11 = 0;
      if (__s < (void *)(lVar10 * 8 + 8 + (long)__ptr_01) &&
          (void *)((long)__ptr_01 + lVar10 * 8) < (void *)((long)__s + 0x41a0U)) goto LAB_001008b0;
      dVar18 = *(double *)((long)__ptr_01 + lVar10 * 8);
      lVar11 = 0;
      do {
        pdVar1 = (double *)((long)__s + lVar11 * 8);
        pdVar3 = (double *)((long)__s + lVar11 * 8 + 0x10);
        dVar5 = *pdVar3;
        dVar6 = pdVar3[1];
        pdVar3 = (double *)((long)pvVar2 + lVar11 * 8);
        pdVar4 = (double *)((long)pvVar2 + lVar11 * 8 + 0x10);
        dVar7 = *pdVar4;
        dVar8 = pdVar4[1];
        *(undefined (*) [16])((long)__s + lVar11 * 8) =
             CONCAT88(pdVar3[1] * dVar18 + pdVar1[1],*pdVar3 * dVar18 + *pdVar1);
        *(undefined (*) [16])((long)__s + lVar11 * 8 + 0x10) =
             CONCAT88(dVar8 * dVar18 + dVar6,dVar7 * dVar18 + dVar5);
        lVar11 = lVar11 + 4;
      } while (lVar11 != 0x834);
    }
    lVar10 = lVar10 + 1;
    if (lVar10 == 0x76c) {
      if ((0x2a < param_1) && (**param_2 == '\0')) {
        print_array(0x834,__s);
      }
      free(__ptr);
      free(__ptr_00);
      free(__s);
      free(__ptr_01);
      return 0;
    }
  } while( true );
}


