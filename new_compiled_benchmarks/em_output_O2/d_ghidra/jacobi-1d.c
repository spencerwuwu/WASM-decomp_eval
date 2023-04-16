#include "jacobi-1d.h"



void kernel_jacobi_1d(int param_1,uint param_2,ulong param_3,ulong param_4)

{
  ulong uVar1;
  double *pdVar2;
  double *pdVar3;
  double *pdVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  int iVar15;
  ulong uVar16;
  
  if (0 < param_1) {
    uVar11 = (ulong)(param_2 - 1);
    uVar1 = uVar11 - 1;
    uVar12 = uVar1 & 0xfffffffffffffffc;
    iVar15 = 0;
    do {
      if (2 < (int)param_2) {
        uVar16 = 1;
        if (uVar1 < 4 || param_3 < param_4 + uVar11 * 8 && param_4 + 8 < param_3 + uVar11 * 8 + 8) {
LAB_00100134:
          uVar13 = uVar16;
          if ((param_2 & 1) != 0) {
            pdVar2 = (double *)((param_3 - 8) + uVar16 * 8);
            uVar13 = uVar16 + 1;
            *(double *)(param_4 + uVar16 * 8) =
                 (pdVar2[1] + *pdVar2 + *(double *)(param_3 + 8 + uVar16 * 8)) * 0.33333;
          }
          if (~uVar16 != -uVar11) {
            do {
              pdVar2 = (double *)((param_3 - 8) + uVar13 * 8);
              *(double *)(param_4 + uVar13 * 8) =
                   (pdVar2[1] + *pdVar2 + *(double *)(param_3 + 8 + uVar13 * 8)) * 0.33333;
              pdVar2 = (double *)(param_3 + uVar13 * 8);
              *(double *)(param_4 + 8 + uVar13 * 8) =
                   (pdVar2[1] + *pdVar2 + *(double *)(param_3 + 0x10 + uVar13 * 8)) * 0.33333;
              uVar13 = uVar13 + 2;
            } while (uVar13 != uVar11);
          }
        }
        else {
          uVar16 = 0;
          do {
            pdVar2 = (double *)(param_3 + uVar16 * 8);
            pdVar3 = (double *)(param_3 + 0x10 + uVar16 * 8);
            dVar5 = *pdVar3;
            dVar6 = pdVar3[1];
            uVar14 = uVar16 * 8 | 8;
            pdVar3 = (double *)(param_3 + 0x10 + uVar14);
            dVar7 = *pdVar3;
            dVar8 = pdVar3[1];
            uVar13 = uVar16 * 8 | 0x10;
            pdVar3 = (double *)(param_3 + uVar13);
            pdVar4 = (double *)(param_3 + 0x10 + uVar13);
            dVar9 = *pdVar4;
            dVar10 = pdVar4[1];
            *(undefined (*) [16])(param_4 + uVar14) =
                 CONCAT88((pdVar3[1] + ((double *)(param_3 + uVar14))[1] + pdVar2[1]) * 0.33333,
                          (*pdVar3 + *(double *)(param_3 + uVar14) + *pdVar2) * 0.33333);
            *(undefined (*) [16])(param_4 + 0x10 + uVar14) =
                 CONCAT88((dVar10 + dVar8 + dVar6) * 0.33333,(dVar9 + dVar7 + dVar5) * 0.33333);
            uVar16 = uVar16 + 4;
          } while (uVar16 != uVar12);
          uVar16 = uVar12 + 1;
          if (uVar1 != uVar12) goto LAB_00100134;
        }
        if (2 < (int)param_2) {
          uVar16 = 1;
          if (3 < uVar1 &&
              (param_4 + uVar11 * 8 + 8 <= param_3 + 8 || param_3 + uVar11 * 8 <= param_4)) {
            uVar16 = 0;
            do {
              pdVar2 = (double *)(param_4 + uVar16 * 8);
              pdVar3 = (double *)(param_4 + 0x10 + uVar16 * 8);
              dVar5 = *pdVar3;
              dVar6 = pdVar3[1];
              uVar14 = uVar16 * 8 | 8;
              pdVar3 = (double *)(param_4 + 0x10 + uVar14);
              dVar7 = *pdVar3;
              dVar8 = pdVar3[1];
              uVar13 = uVar16 * 8 | 0x10;
              pdVar3 = (double *)(param_4 + uVar13);
              pdVar4 = (double *)(param_4 + 0x10 + uVar13);
              dVar9 = *pdVar4;
              dVar10 = pdVar4[1];
              *(undefined (*) [16])(param_3 + uVar14) =
                   CONCAT88((pdVar3[1] + ((double *)(param_4 + uVar14))[1] + pdVar2[1]) * 0.33333,
                            (*pdVar3 + *(double *)(param_4 + uVar14) + *pdVar2) * 0.33333);
              *(undefined (*) [16])(param_3 + 0x10 + uVar14) =
                   CONCAT88((dVar10 + dVar8 + dVar6) * 0.33333,(dVar9 + dVar7 + dVar5) * 0.33333);
              uVar16 = uVar16 + 4;
            } while (uVar16 != uVar12);
            uVar16 = uVar12 + 1;
            if (uVar1 == uVar12) goto LAB_00100090;
          }
          uVar13 = uVar16;
          if ((param_2 & 1) != 0) {
            pdVar2 = (double *)((param_4 - 8) + uVar16 * 8);
            uVar13 = uVar16 + 1;
            *(double *)(param_3 + uVar16 * 8) =
                 (pdVar2[1] + *pdVar2 + *(double *)(param_4 + 8 + uVar16 * 8)) * 0.33333;
          }
          if (~uVar16 != -uVar11) {
            do {
              pdVar2 = (double *)((param_4 - 8) + uVar13 * 8);
              *(double *)(param_3 + uVar13 * 8) =
                   (pdVar2[1] + *pdVar2 + *(double *)(param_4 + 8 + uVar13 * 8)) * 0.33333;
              pdVar2 = (double *)(param_4 + uVar13 * 8);
              *(double *)(param_3 + 8 + uVar13 * 8) =
                   (pdVar2[1] + *pdVar2 + *(double *)(param_4 + 0x10 + uVar13 * 8)) * 0.33333;
              uVar13 = uVar13 + 2;
            } while (uVar13 != uVar11);
          }
        }
      }
LAB_00100090:
      iVar15 = iVar15 + 1;
    } while (iVar15 != param_1);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 submain(int param_1,char **param_2)

{
  double *pdVar1;
  double *pdVar2;
  double *pdVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined auVar9 [16];
  undefined auVar10 [16];
  FILE *__stream;
  void *__ptr;
  void *__ptr_00;
  ulong uVar11;
  ulong uVar12;
  int iVar13;
  long lVar14;
  int iVar15;
  double dVar16;
  undefined auVar17 [16];
  double dVar18;
  
  __ptr = (void *)polybench_alloc_data(2000,8);
  __ptr_00 = (void *)polybench_alloc_data(2000,8);
  auVar10 = __LCPI1_4;
  auVar9 = __LCPI1_2;
  uVar11 = 0;
  if ((ulong)((long)__ptr_00 - (long)__ptr) < 0x10) {
    do {
      *(double *)((long)__ptr + uVar11 * 8) = ((double)(int)uVar11 + 2.0) / 2000.0;
      *(double *)((long)__ptr_00 + uVar11 * 8) = ((double)(int)uVar11 + 3.0) / 2000.0;
      uVar12 = uVar11 | 1;
      *(double *)((long)__ptr + uVar12 * 8) = ((double)(int)uVar12 + 2.0) / 2000.0;
      *(double *)((long)__ptr_00 + uVar12 * 8) = ((double)(int)uVar12 + 3.0) / 2000.0;
      uVar11 = uVar11 + 2;
    } while (uVar11 != 2000);
  }
  else {
    iVar13 = 0;
    iVar15 = 1;
    do {
      auVar17 = divpd(CONCAT88((double)iVar15 + 2.0,(double)iVar13 + 2.0),auVar9);
      *(undefined (*) [16])((long)__ptr + uVar11 * 8) = auVar17;
      auVar17 = divpd(CONCAT88((double)iVar15 + 3.0,(double)iVar13 + 3.0),auVar9);
      dVar16 = (double)(iVar13 + SUB164(auVar10,0));
      dVar18 = (double)(int)((ulong)dVar16 >> 0x20);
      *(undefined (*) [16])((long)__ptr_00 + uVar11 * 8) = auVar17;
      auVar17 = divpd(CONCAT88(dVar18 + 2.0,dVar16 + 2.0),auVar9);
      uVar12 = uVar11 * 8 | 0x10;
      *(undefined (*) [16])((long)__ptr + uVar12) = auVar17;
      auVar17 = divpd(CONCAT88(dVar18 + 3.0,dVar16 + 3.0),auVar9);
      *(undefined (*) [16])((long)__ptr_00 + uVar12) = auVar17;
      uVar11 = uVar11 + 4;
      iVar13 = iVar13 + 4;
      iVar15 = iVar15 + 4;
    } while (uVar11 != 2000);
  }
  iVar13 = 0;
  do {
    lVar14 = 1;
    if ((void *)((long)__ptr_00 + 0x3e78U) <= __ptr || (long)__ptr + 16000U <= (long)__ptr_00 + 8U)
    {
      lVar14 = 0;
      do {
        pdVar1 = (double *)((long)__ptr + lVar14 * 8);
        pdVar2 = (double *)((long)__ptr + lVar14 * 8 + 0x10);
        dVar18 = *pdVar2;
        dVar4 = pdVar2[1];
        uVar12 = lVar14 * 8 | 8;
        pdVar2 = (double *)((long)__ptr + uVar12 + 0x10);
        dVar5 = *pdVar2;
        dVar6 = pdVar2[1];
        uVar11 = lVar14 * 8 | 0x10;
        pdVar2 = (double *)((long)__ptr + uVar11);
        pdVar3 = (double *)((long)__ptr + uVar11 + 0x10);
        dVar7 = *pdVar3;
        dVar8 = pdVar3[1];
        dVar16 = (pdVar2[1] + ((double *)((long)__ptr + uVar12))[1] + pdVar1[1]) * 0.33333;
        *(undefined (*) [16])((long)__ptr_00 + uVar12) =
             CONCAT412((int)((ulong)dVar16 >> 0x20),
                       CONCAT48(SUB84(dVar16,0),
                                (*pdVar2 + *(double *)((long)__ptr + uVar12) + *pdVar1) * 0.33333));
        *(undefined (*) [16])((long)__ptr_00 + uVar12 + 0x10) =
             CONCAT88((dVar8 + dVar6 + dVar4) * 0.33333,(dVar7 + dVar5 + dVar18) * 0.33333);
        lVar14 = lVar14 + 4;
      } while (lVar14 != 0x7cc);
      lVar14 = 0x7cd;
    }
    do {
      pdVar1 = (double *)((long)__ptr + lVar14 * 8 + -8);
      *(double *)((long)__ptr_00 + lVar14 * 8) =
           (pdVar1[1] + *pdVar1 + *(double *)((long)__ptr + lVar14 * 8 + 8)) * 0.33333;
      pdVar1 = (double *)((long)__ptr + lVar14 * 8);
      *(double *)((long)__ptr_00 + lVar14 * 8 + 8) =
           (pdVar1[1] + *pdVar1 + *(double *)((long)__ptr + lVar14 * 8 + 0x10)) * 0.33333;
      lVar14 = lVar14 + 2;
    } while (lVar14 != 1999);
    lVar14 = 1;
    if ((void *)((long)__ptr + 0x3e78U) <= __ptr_00 || (long)__ptr_00 + 16000U <= (long)__ptr + 8U)
    {
      lVar14 = 0;
      do {
        pdVar1 = (double *)((long)__ptr_00 + lVar14 * 8);
        pdVar2 = (double *)((long)__ptr_00 + lVar14 * 8 + 0x10);
        dVar18 = *pdVar2;
        dVar4 = pdVar2[1];
        uVar12 = lVar14 * 8 | 8;
        pdVar2 = (double *)((long)__ptr_00 + uVar12 + 0x10);
        dVar5 = *pdVar2;
        dVar6 = pdVar2[1];
        uVar11 = lVar14 * 8 | 0x10;
        pdVar2 = (double *)((long)__ptr_00 + uVar11);
        pdVar3 = (double *)((long)__ptr_00 + uVar11 + 0x10);
        dVar7 = *pdVar3;
        dVar8 = pdVar3[1];
        dVar16 = (pdVar2[1] + ((double *)((long)__ptr_00 + uVar12))[1] + pdVar1[1]) * 0.33333;
        *(undefined (*) [16])((long)__ptr + uVar12) =
             CONCAT412((int)((ulong)dVar16 >> 0x20),
                       CONCAT48(SUB84(dVar16,0),
                                (*pdVar2 + *(double *)((long)__ptr_00 + uVar12) + *pdVar1) * 0.33333
                               ));
        *(undefined (*) [16])((long)__ptr + uVar12 + 0x10) =
             CONCAT88((dVar8 + dVar6 + dVar4) * 0.33333,(dVar7 + dVar5 + dVar18) * 0.33333);
        lVar14 = lVar14 + 4;
      } while (lVar14 != 0x7cc);
      lVar14 = 0x7cd;
    }
    do {
      pdVar1 = (double *)((long)__ptr_00 + lVar14 * 8 + -8);
      *(double *)((long)__ptr + lVar14 * 8) =
           (pdVar1[1] + *pdVar1 + *(double *)((long)__ptr_00 + lVar14 * 8 + 8)) * 0.33333;
      pdVar1 = (double *)((long)__ptr_00 + lVar14 * 8);
      *(double *)((long)__ptr + lVar14 * 8 + 8) =
           (pdVar1[1] + *pdVar1 + *(double *)((long)__ptr_00 + lVar14 * 8 + 0x10)) * 0.33333;
      __stream = _DAT_1653d8d48388b4c;
      lVar14 = lVar14 + 2;
    } while (lVar14 != 1999);
    iVar13 = iVar13 + 1;
  } while (iVar13 != 500);
  if ((0x2a < param_1) && (**param_2 == '\0')) {
    fwrite(_L_str_1,0x16,1,_DAT_1653d8d48388b4c);
    lVar14 = 0;
    fprintf(__stream,"begin dump: %s",&_L_str_3);
    do {
      if ((ushort)((ushort)((short)lVar14 * -0x3333) >> 2 | (short)lVar14 * 0x4000) < 0xccd) {
        fputc(10,__stream);
      }
      fprintf(__stream,"%0.2lf ",*(undefined8 *)((long)__ptr + lVar14 * 8));
      lVar14 = lVar14 + 1;
    } while (lVar14 != 2000);
    fprintf(__stream,"\nend   dump: %s\n",&_L_str_3);
    fwrite("==END   DUMP_ARRAYS==\n",0x16,1,__stream);
  }
  free(__ptr);
  free(__ptr_00);
  return 0;
}


