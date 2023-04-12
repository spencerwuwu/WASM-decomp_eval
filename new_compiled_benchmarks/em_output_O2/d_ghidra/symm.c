#include "symm.h"



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 submain(int param_1,char **param_2)

{
  void *pvVar1;
  undefined4 *puVar2;
  FILE *__stream;
  void *__ptr;
  void *__ptr_00;
  void *__ptr_01;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  double dVar14;
  long lVar15;
  undefined auVar16 [16];
  undefined auVar17 [16];
  undefined auVar18 [16];
  ulong uVar19;
  
  __ptr = (void *)polybench_alloc_data(1200000,8);
  __ptr_00 = (void *)polybench_alloc_data(1000000,8);
  __ptr_01 = (void *)polybench_alloc_data(1200000,8);
  auVar17 = __LCPI0_3;
  lVar3 = 0;
  do {
    lVar7 = lVar3 + 0x4b0;
    lVar5 = lVar3 * 0x2580;
    pvVar1 = (void *)(lVar5 + (long)__ptr);
    if ((ulong)((long)__ptr_01 + (lVar5 - (long)pvVar1)) < 0x10) {
      lVar9 = 0;
      do {
        *(double *)((long)pvVar1 + lVar9 * 8) =
             (double)((uint)((int)lVar9 + (int)lVar3) % 100) / 1000.0;
        *(double *)((long)__ptr_01 + lVar9 * 8 + lVar5) =
             (double)((uint)((int)lVar7 - (int)lVar9) % 100) / 1000.0;
        lVar9 = lVar9 + 1;
      } while (lVar9 != 0x4b0);
    }
    else {
      lVar8 = 0;
      lVar9 = 0;
      lVar15 = 1;
      do {
        uVar19 = SUB168(CONCAT412((int)((ulong)lVar7 >> 0x20),CONCAT48((int)lVar7,lVar7)) >> 0x40,0)
                 - lVar15;
        dVar14 = (double)((int)(lVar9 + lVar3) + (int)((lVar9 + lVar3 & 0xffffffffU) / 100) * -100);
        auVar16 = divpd(CONCAT88((double)(int)((ulong)dVar14 >> 0x20),dVar14),auVar17);
        auVar18 = divpd(CONCAT88((double)((int)uVar19 + (int)((uVar19 & 0xffffffff) / 100) * -100),
                                 (double)((int)(lVar7 - lVar9) +
                                         (int)((lVar7 - lVar9 & 0xffffffffU) / 100) * -100)),auVar17
                       );
        *(undefined (*) [16])((long)pvVar1 + lVar8 * 8) = auVar16;
        *(undefined (*) [16])((long)__ptr_01 + lVar8 * 8 + lVar5) = auVar18;
        lVar8 = lVar8 + 2;
        lVar9 = lVar9 + 2;
        lVar15 = lVar15 + 2;
      } while (lVar8 != 0x4b0);
    }
    auVar16 = __LCPI0_3;
    lVar3 = lVar3 + 1;
  } while (lVar3 != 1000);
  uVar6 = 1;
  lVar3 = 0;
  uVar19 = 0;
  do {
    if (1 < uVar6) {
      uVar4 = uVar6 & 0x7ffffffffffffffe;
      uVar10 = 0;
      lVar7 = 0;
      lVar5 = 1;
      do {
        uVar11 = lVar5 + SUB168(CONCAT412((int)(uVar19 >> 0x20),CONCAT48((int)uVar19,uVar19)) >>
                                0x40,0);
        auVar17 = divpd(CONCAT88((double)((int)uVar11 + (int)((uVar11 & 0xffffffff) / 100) * -100),
                                 (double)((int)(lVar7 + uVar19) +
                                         (int)((lVar7 + uVar19 & 0xffffffff) / 100) * -100)),auVar16
                       );
        *(undefined (*) [16])((long)__ptr_00 + uVar10 * 8 + uVar19 * 8000) = auVar17;
        uVar10 = uVar10 + 2;
        lVar7 = lVar7 + 2;
        lVar5 = lVar5 + 2;
        if (uVar10 == uVar4) goto joined_r0x0010033c;
      } while( true );
    }
    uVar4 = 0;
    do {
      *(double *)((long)__ptr_00 + uVar4 * 8 + uVar19 * 8000) =
           (double)((uint)((int)uVar4 + (int)uVar19) % 100) / 1000.0;
      uVar4 = uVar4 + 1;
joined_r0x0010033c:
    } while (uVar6 != uVar4);
                    // WARNING: Read-only address (ram,0x00100670) is written
    uVar4 = uVar19 + 1;
    if (uVar19 < 999) {
      uVar11 = 999 - uVar19;
      uVar10 = uVar6;
      if (3 < uVar11) {
        uVar12 = uVar11 & 0xfffffffffffffffc;
        uVar10 = uVar6 + uVar12;
        uVar13 = 0;
        do {
          puVar2 = (undefined4 *)((long)__ptr_00 + (uVar6 + uVar13) * 8 + uVar19 * 8000);
          *puVar2 = 0;
          puVar2[1] = 0xc08f3800;
          puVar2[2] = 0;
          puVar2[3] = 0xc08f3800;
          puVar2 = (undefined4 *)((long)__ptr_00 + (uVar6 + uVar13) * 8 + uVar19 * 8000 + 0x10);
          *puVar2 = 0;
          puVar2[1] = 0xc08f3800;
          puVar2[2] = 0;
          puVar2[3] = 0xc08f3800;
          uVar13 = uVar13 + 4;
        } while (uVar13 != uVar12);
        if (uVar11 == uVar12) goto LAB_00100280;
      }
      do {
        *(undefined8 *)((long)__ptr_00 + uVar10 * 8 + uVar19 * 8000) = 0xc08f380000000000;
        uVar10 = uVar10 + 1;
      } while (uVar10 != 1000);
    }
LAB_00100280:
    uVar6 = uVar6 + 1;
    uVar19 = uVar4;
    if (uVar4 == 1000) {
      do {
        lVar7 = 0;
        do {
          if (lVar3 == 0) {
            dVar14 = 0.0;
          }
          else {
            dVar14 = 0.0;
            lVar5 = 0;
            do {
              lVar9 = lVar5 * 0x2580;
              *(double *)((long)__ptr + lVar7 * 8 + lVar9) =
                   *(double *)((long)__ptr_01 + lVar7 * 8 + lVar3 * 0x2580) * 1.5 *
                   *(double *)((long)__ptr_00 + lVar5 * 8 + lVar3 * 8000) +
                   *(double *)((long)__ptr + lVar7 * 8 + lVar9);
              dVar14 = dVar14 + *(double *)((long)__ptr_01 + lVar7 * 8 + lVar9) *
                                *(double *)((long)__ptr_00 + lVar5 * 8 + lVar3 * 8000);
              lVar5 = lVar5 + 1;
            } while (lVar5 != lVar3);
          }
          lVar5 = lVar3 * 0x2580;
          *(double *)((long)__ptr + lVar7 * 8 + lVar5) =
               dVar14 * 1.5 +
               *(double *)((long)__ptr + lVar7 * 8 + lVar5) * 1.2 +
               *(double *)((long)__ptr_01 + lVar7 * 8 + lVar5) * 1.5 *
               *(double *)((long)__ptr_00 + lVar3 * 0x1f48);
          __stream = _DAT_1653d8d48208b4c;
          lVar7 = lVar7 + 1;
        } while (lVar7 != 0x4b0);
        lVar3 = lVar3 + 1;
      } while (lVar3 != 1000);
      if ((0x2a < param_1) && (**param_2 == '\0')) {
        fwrite(_L_str_1,0x16,1,_DAT_1653d8d48208b4c);
        lVar3 = 0;
        fprintf(__stream,"begin dump: %s",&_L_str_3);
        do {
          lVar7 = 0;
          do {
            if (((uint)(((int)lVar7 + (int)lVar3 * 1000) * -0x33333333) >> 2 |
                (int)lVar7 * 0x40000000) < 0xccccccd) {
              fputc(10,__stream);
            }
            fprintf(__stream,"%0.2lf ",*(undefined8 *)((long)__ptr + lVar7 * 8 + lVar3 * 0x2580));
            lVar7 = lVar7 + 1;
          } while (lVar7 != 0x4b0);
          lVar3 = lVar3 + 1;
        } while (lVar3 != 1000);
        fprintf(__stream,"\nend   dump: %s\n",&_L_str_3);
        fwrite("==END   DUMP_ARRAYS==\n",0x16,1,__stream);
      }
      free(__ptr);
      free(__ptr_00);
      free(__ptr_01);
      return 0;
    }
  } while( true );
}


