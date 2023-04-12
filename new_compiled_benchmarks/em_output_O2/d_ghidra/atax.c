#include "atax.h"



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
  FILE *__stream;
  void *__ptr;
  void *__ptr_00;
  void *__s;
  void *__ptr_01;
  long lVar10;
  long lVar11;
  long lVar12;
  int iVar13;
  int iVar14;
  undefined auVar15 [16];
  long lVar16;
  double dVar17;
  undefined auVar18 [16];
  undefined auVar19 [16];
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  
  __ptr = (void *)polybench_alloc_data(0x3ce1f0,8);
  __ptr_00 = (void *)polybench_alloc_data(0x834,8);
  __s = (void *)polybench_alloc_data(0x834,8);
  __ptr_01 = (void *)polybench_alloc_data(0x76c,8);
  auVar18 = __LCPI0_1;
  iVar13 = 0;
  iVar14 = 1;
  lVar10 = 0;
  lVar11 = 0;
  do {
    auVar15 = divpd(CONCAT88((double)iVar14,(double)iVar13),auVar18);
    pdVar1 = (double *)((long)__ptr_00 + lVar11 * 8);
    *pdVar1 = SUB168(auVar15,0) + 1.0;
    pdVar1[1] = SUB168(auVar15 >> 0x40,0) + 1.0;
    auVar15 = divpd(CONCAT88((double)(int)((ulong)(double)(iVar13 + 2) >> 0x20),(double)(iVar13 + 2)
                            ),auVar18);
    pdVar1 = (double *)((long)__ptr_00 + lVar11 * 8 + 0x10);
    *pdVar1 = SUB168(auVar15,0) + 1.0;
    pdVar1[1] = SUB168(auVar15 >> 0x40,0) + 1.0;
    auVar15 = divpd(CONCAT88((double)(int)((ulong)(double)(iVar13 + 4) >> 0x20),(double)(iVar13 + 4)
                            ),auVar18);
    pdVar1 = (double *)((long)__ptr_00 + lVar11 * 8 + 0x20);
    *pdVar1 = SUB168(auVar15,0) + 1.0;
    pdVar1[1] = SUB168(auVar15 >> 0x40,0) + 1.0;
    auVar9 = __LCPI0_10;
    auVar15 = __LCPI0_9;
    lVar11 = lVar11 + 6;
    iVar13 = iVar13 + 6;
    iVar14 = iVar14 + 6;
  } while (lVar11 != 0x834);
  do {
    lVar12 = 0;
    lVar11 = 0;
    lVar16 = 1;
    do {
      uVar20 = lVar11 + lVar10;
      uVar21 = uVar20 + SUB168(auVar9,0);
      uVar22 = lVar16 + SUB168(CONCAT412((int)((ulong)lVar10 >> 0x20),CONCAT48((int)lVar10,lVar10))
                               >> 0x40,0) + SUB168(auVar9 >> 0x40,0);
      dVar17 = (double)((int)uVar20 + (int)((uVar20 & 0xffffffff) / 0x834) * -0x834);
      auVar18 = divpd(CONCAT88((double)(int)((ulong)dVar17 >> 0x20),dVar17),auVar15);
      auVar19 = divpd(CONCAT88((double)((int)uVar22 + (int)((uVar22 & 0xffffffff) / 0x834) * -0x834)
                               ,(double)((int)uVar21 + (int)((uVar21 & 0xffffffff) / 0x834) * -0x834
                                        )),auVar15);
      *(undefined (*) [16])((long)__ptr + lVar12 * 8 + lVar10 * 0x41a0) = auVar18;
      *(undefined (*) [16])((long)__ptr + (lVar12 * 8 | 0x10U) + lVar10 * 0x41a0) = auVar19;
      lVar12 = lVar12 + 4;
      lVar11 = lVar11 + 4;
      lVar16 = lVar16 + 4;
    } while (lVar12 != 0x834);
    lVar10 = lVar10 + 1;
  } while (lVar10 != 0x76c);
  lVar10 = 0;
  memset(__s,0,0x41a0);
  do {
    pvVar2 = (void *)((long)__ptr + lVar10 * 0x41a0);
    *(undefined8 *)((long)__ptr_01 + lVar10 * 8) = 0;
    dVar17 = 0.0;
    lVar11 = 0;
    do {
      dVar17 = *(double *)((long)pvVar2 + lVar11 * 8) * *(double *)((long)__ptr_00 + lVar11 * 8) +
               dVar17;
      *(double *)((long)__ptr_01 + lVar10 * 8) = dVar17;
      dVar17 = *(double *)((long)pvVar2 + lVar11 * 8 + 8) *
               *(double *)((long)__ptr_00 + lVar11 * 8 + 8) + dVar17;
      *(double *)((long)__ptr_01 + lVar10 * 8) = dVar17;
      dVar17 = *(double *)((long)pvVar2 + lVar11 * 8 + 0x10) *
               *(double *)((long)__ptr_00 + lVar11 * 8 + 0x10) + dVar17;
      *(double *)((long)__ptr_01 + lVar10 * 8) = dVar17;
      lVar11 = lVar11 + 3;
    } while (lVar11 != 0x834);
    if (__s < (void *)((long)__ptr + lVar10 * 0x41a0 + 0x41a0) &&
        pvVar2 < (void *)((long)__s + 0x41a0U)) {
      lVar11 = 0;
LAB_00100390:
      do {
        *(double *)((long)__s + lVar11 * 8) =
             *(double *)((long)pvVar2 + lVar11 * 8) * *(double *)((long)__ptr_01 + lVar10 * 8) +
             *(double *)((long)__s + lVar11 * 8);
        uVar20 = lVar11 * 8 | 8;
        *(double *)((long)__s + uVar20) =
             *(double *)(uVar20 + (long)pvVar2) * *(double *)((long)__ptr_01 + lVar10 * 8) +
             *(double *)((long)__s + uVar20);
        lVar11 = lVar11 + 2;
      } while (lVar11 != 0x834);
    }
    else {
      lVar11 = 0;
      if (__s < (void *)((long)__ptr_01 + lVar10 * 8 + 8) &&
          (void *)((long)__ptr_01 + lVar10 * 8) < (void *)((long)__s + 0x41a0U)) goto LAB_00100390;
      dVar17 = *(double *)((long)__ptr_01 + lVar10 * 8);
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
             CONCAT88(pdVar3[1] * dVar17 + pdVar1[1],*pdVar3 * dVar17 + *pdVar1);
        *(undefined (*) [16])((long)__s + lVar11 * 8 + 0x10) =
             CONCAT88(dVar8 * dVar17 + dVar6,dVar7 * dVar17 + dVar5);
        lVar11 = lVar11 + 4;
      } while (lVar11 != 0x834);
    }
    __stream = _DAT_1713d8d48288b4c;
    lVar10 = lVar10 + 1;
    if (lVar10 == 0x76c) {
      if ((0x2a < param_1) && (**param_2 == '\0')) {
        fwrite("==BEGIN DUMP_ARRAYS==\n",0x16,1,_DAT_1713d8d48288b4c);
        lVar10 = 0;
        fprintf(__stream,"begin dump: %s",&_L_str_3);
        do {
          if ((ushort)((ushort)((short)lVar10 * -0x3333) >> 2 | (short)lVar10 * 0x4000) < 0xccd) {
            fputc(10,__stream);
          }
          fprintf(__stream,"%0.2lf ",*(undefined8 *)((long)__s + lVar10 * 8));
          lVar10 = lVar10 + 1;
        } while (lVar10 != 0x834);
        fprintf(__stream,"\nend   dump: %s\n",&_L_str_3);
        fwrite("==END   DUMP_ARRAYS==\n",0x16,1,__stream);
      }
      free(__ptr);
      free(__ptr_00);
      free(__s);
      free(__ptr_01);
      return 0;
    }
  } while( true );
}


