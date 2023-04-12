#include "jacobi-2d.h"



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 submain(int param_1,char **param_2)

{
  long lVar1;
  void *pvVar2;
  double *pdVar3;
  double *pdVar4;
  double *pdVar5;
  double *pdVar6;
  double *pdVar7;
  double *pdVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  undefined auVar18 [16];
  undefined auVar19 [16];
  FILE *__stream;
  int iVar20;
  void *__ptr;
  void *__ptr_00;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  ulong uVar27;
  ulong uVar28;
  double dVar29;
  int iVar30;
  int iVar31;
  undefined auVar32 [16];
  
  __ptr = (void *)polybench_alloc_data(0x19c990,8);
  __ptr_00 = (void *)polybench_alloc_data(0x19c990,8);
  auVar19 = __LCPI0_3;
  auVar18 = __LCPI0_1;
  lVar21 = 0;
  do {
    dVar29 = (double)(int)lVar21;
    lVar22 = lVar21 * 0x28a0;
    pvVar2 = (void *)(lVar22 + (long)__ptr);
    if ((ulong)((long)__ptr_00 + (lVar22 - (long)pvVar2)) < 0x10) {
      lVar23 = 0;
      do {
        *(double *)((long)pvVar2 + lVar23 * 8) = ((double)((int)lVar23 + 2) * dVar29 + 2.0) / 1300.0
        ;
        *(double *)((long)__ptr_00 + lVar23 * 8 + lVar22) =
             ((double)((int)lVar23 + 3) * dVar29 + 3.0) / 1300.0;
        lVar23 = lVar23 + 1;
      } while (lVar23 != 0x514);
    }
    else {
      lVar23 = 0;
      iVar20 = 0;
      iVar31 = 1;
      do {
        iVar30 = iVar20 + SUB164(auVar18,0);
        iVar31 = iVar31 + SUB164(auVar18 >> 0x20,0);
        auVar32 = divpd(CONCAT88((double)iVar31 * dVar29 + 2.0,(double)iVar30 * dVar29 + 2.0),
                        auVar19);
        *(undefined (*) [16])((long)pvVar2 + lVar23 * 8) = auVar32;
        auVar32 = divpd(CONCAT88((double)(int)((ulong)(double)(iVar20 + 3) >> 0x20) * dVar29 + 3.0,
                                 (double)(iVar20 + 3) * dVar29 + 3.0),auVar19);
        *(undefined (*) [16])((long)__ptr_00 + lVar23 * 8 + lVar22) = auVar32;
        lVar23 = lVar23 + 2;
        iVar20 = iVar30;
      } while (lVar23 != 0x514);
    }
    lVar21 = lVar21 + 1;
  } while (lVar21 != 0x514);
  iVar20 = 0;
  do {
    lVar22 = 0;
    lVar21 = 1;
    do {
      lVar23 = lVar21 + 1;
      lVar1 = lVar21 + -1;
      lVar24 = lVar22 * 0x28a0;
      if ((ulong)((long)__ptr_00 + lVar24 + 0x28a8) < (ulong)((long)__ptr + lVar24 + 0x79d8)) {
        lVar25 = 0;
        lVar26 = 1;
        if ((ulong)((long)__ptr_00 + lVar24 + 0x5138) <= (ulong)((long)__ptr + lVar24 + 8))
        goto LAB_00100240;
      }
      else {
        lVar25 = 0;
LAB_00100240:
        do {
          lVar24 = lVar21 * 0x28a0;
          uVar27 = lVar25 * 8 | 8;
          pdVar3 = (double *)((long)__ptr + uVar27 + lVar24);
          pdVar4 = (double *)((long)__ptr + uVar27 + 0x10 + lVar24);
          dVar29 = *pdVar4;
          dVar9 = pdVar4[1];
          pdVar4 = (double *)((long)__ptr + lVar25 * 8 + lVar24);
          pdVar5 = (double *)((long)__ptr + lVar25 * 8 + lVar24 + 0x10);
          dVar10 = *pdVar5;
          dVar11 = pdVar5[1];
          uVar28 = lVar25 * 8 | 0x10;
          pdVar5 = (double *)((long)__ptr + uVar28 + lVar24);
          pdVar6 = (double *)((long)__ptr + uVar28 + 0x10 + lVar24);
          dVar12 = *pdVar6;
          dVar13 = pdVar6[1];
          pdVar6 = (double *)((long)__ptr + uVar27 + lVar23 * 0x28a0);
          pdVar7 = (double *)((long)__ptr + uVar27 + 0x10 + lVar23 * 0x28a0);
          dVar14 = *pdVar7;
          dVar15 = pdVar7[1];
          pdVar7 = (double *)((long)__ptr + uVar27 + lVar1 * 0x28a0);
          pdVar8 = (double *)((long)__ptr + uVar27 + 0x10 + lVar1 * 0x28a0);
          dVar16 = *pdVar8;
          dVar17 = pdVar8[1];
          *(undefined (*) [16])((long)__ptr_00 + uVar27 + lVar24) =
               CONCAT88((pdVar7[1] + pdVar6[1] + pdVar5[1] + pdVar4[1] + pdVar3[1]) * 0.2,
                        (*pdVar7 + *pdVar6 + *pdVar5 + *pdVar4 + *pdVar3) * 0.2);
          *(undefined (*) [16])((long)__ptr_00 + uVar27 + 0x10 + lVar24) =
               CONCAT88((dVar17 + dVar15 + dVar13 + dVar11 + dVar9) * 0.2,
                        (dVar16 + dVar14 + dVar12 + dVar10 + dVar29) * 0.2);
          lVar25 = lVar25 + 4;
        } while (lVar25 != 0x510);
        lVar26 = 0x511;
      }
      do {
        lVar24 = lVar21 * 0x28a0;
        pdVar3 = (double *)((long)__ptr + lVar26 * 8 + lVar24 + -8);
        *(double *)((long)__ptr_00 + lVar26 * 8 + lVar24) =
             (pdVar3[1] + *pdVar3 + *(double *)((long)__ptr + lVar26 * 8 + lVar24 + 8) +
              *(double *)((long)__ptr + lVar26 * 8 + lVar23 * 0x28a0) +
             *(double *)((long)__ptr + lVar26 * 8 + lVar1 * 0x28a0)) * 0.2;
        lVar26 = lVar26 + 1;
      } while (lVar26 != 0x513);
      lVar22 = lVar22 + 1;
      lVar21 = lVar23;
    } while (lVar23 != 0x513);
    lVar22 = 0;
    lVar21 = 1;
    do {
      lVar23 = lVar21 + 1;
      lVar1 = lVar21 + -1;
      lVar24 = lVar22 * 0x28a0;
      if ((ulong)((long)__ptr + lVar24 + 0x28a8) < (ulong)((long)__ptr_00 + lVar24 + 0x79d8)) {
        lVar25 = 0;
        lVar26 = 1;
        if ((ulong)((long)__ptr + lVar24 + 0x5138) <= (ulong)((long)__ptr_00 + lVar24 + 8))
        goto LAB_00100400;
      }
      else {
        lVar25 = 0;
LAB_00100400:
        do {
          lVar24 = lVar21 * 0x28a0;
          uVar27 = lVar25 * 8 | 8;
          pdVar3 = (double *)((long)__ptr_00 + uVar27 + lVar24);
          pdVar4 = (double *)((long)__ptr_00 + uVar27 + 0x10 + lVar24);
          dVar29 = *pdVar4;
          dVar9 = pdVar4[1];
          pdVar4 = (double *)((long)__ptr_00 + lVar25 * 8 + lVar24);
          pdVar5 = (double *)((long)__ptr_00 + lVar25 * 8 + lVar24 + 0x10);
          dVar10 = *pdVar5;
          dVar11 = pdVar5[1];
          uVar28 = lVar25 * 8 | 0x10;
          pdVar5 = (double *)((long)__ptr_00 + uVar28 + lVar24);
          pdVar6 = (double *)((long)__ptr_00 + uVar28 + 0x10 + lVar24);
          dVar12 = *pdVar6;
          dVar13 = pdVar6[1];
          pdVar6 = (double *)((long)__ptr_00 + uVar27 + lVar23 * 0x28a0);
          pdVar7 = (double *)((long)__ptr_00 + uVar27 + 0x10 + lVar23 * 0x28a0);
          dVar14 = *pdVar7;
          dVar15 = pdVar7[1];
          pdVar7 = (double *)((long)__ptr_00 + uVar27 + lVar1 * 0x28a0);
          pdVar8 = (double *)((long)__ptr_00 + uVar27 + 0x10 + lVar1 * 0x28a0);
          dVar16 = *pdVar8;
          dVar17 = pdVar8[1];
          *(undefined (*) [16])((long)__ptr + uVar27 + lVar24) =
               CONCAT88((pdVar7[1] + pdVar6[1] + pdVar5[1] + pdVar4[1] + pdVar3[1]) * 0.2,
                        (*pdVar7 + *pdVar6 + *pdVar5 + *pdVar4 + *pdVar3) * 0.2);
          *(undefined (*) [16])((long)__ptr + uVar27 + 0x10 + lVar24) =
               CONCAT88((dVar17 + dVar15 + dVar13 + dVar11 + dVar9) * 0.2,
                        (dVar16 + dVar14 + dVar12 + dVar10 + dVar29) * 0.2);
          lVar25 = lVar25 + 4;
        } while (lVar25 != 0x510);
        lVar26 = 0x511;
      }
      do {
        lVar24 = lVar21 * 0x28a0;
        pdVar3 = (double *)((long)__ptr_00 + lVar26 * 8 + lVar24 + -8);
        *(double *)((long)__ptr + lVar26 * 8 + lVar24) =
             (pdVar3[1] + *pdVar3 + *(double *)((long)__ptr_00 + lVar26 * 8 + lVar24 + 8) +
              *(double *)((long)__ptr_00 + lVar26 * 8 + lVar23 * 0x28a0) +
             *(double *)((long)__ptr_00 + lVar26 * 8 + lVar1 * 0x28a0)) * 0.2;
        __stream = _DAT_15f3d8d48388b4c;
        lVar26 = lVar26 + 1;
      } while (lVar26 != 0x513);
      lVar22 = lVar22 + 1;
      lVar21 = lVar23;
    } while (lVar23 != 0x513);
    iVar20 = iVar20 + 1;
    if (iVar20 == 500) {
      if ((0x2a < param_1) && (**param_2 == '\0')) {
        fwrite(_L_str_1,0x16,1,_DAT_15f3d8d48388b4c);
        lVar21 = 0;
        fprintf(__stream,"begin dump: %s",&_L_str_3);
        do {
          lVar22 = 0;
          do {
            if (((uint)(((int)lVar22 + (int)lVar21 * 0x514) * -0x33333333) >> 2 |
                (int)lVar22 * 0x40000000) < 0xccccccd) {
              fputc(10,__stream);
            }
            fprintf(__stream,"%0.2lf ",*(undefined8 *)((long)__ptr + lVar22 * 8 + lVar21 * 0x28a0));
            lVar22 = lVar22 + 1;
          } while (lVar22 != 0x514);
          lVar21 = lVar21 + 1;
        } while (lVar21 != 0x514);
        fprintf(__stream,"\nend   dump: %s\n",&_L_str_3);
        fwrite("==END   DUMP_ARRAYS==\n",0x16,1,__stream);
      }
      free(__ptr);
      free(__ptr_00);
      return 0;
    }
  } while( true );
}


