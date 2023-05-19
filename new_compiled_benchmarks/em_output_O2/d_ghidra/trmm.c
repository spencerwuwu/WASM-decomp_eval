#include "trmm.h"



void kernel_trmm(double param_1,uint param_2,uint param_3,long param_4,long param_5)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  double dVar8;
  
  if (0 < (int)param_2) {
    uVar2 = (ulong)param_2;
    uVar4 = 1;
    uVar5 = 0;
    do {
      uVar1 = uVar5 + 1;
      if (0 < (int)param_3) {
        uVar6 = 0;
        do {
          lVar3 = uVar5 * 0x2580 + param_5;
          dVar8 = *(double *)(lVar3 + uVar6 * 8);
          if (uVar1 < uVar2) {
            uVar7 = uVar4;
            do {
              dVar8 = dVar8 + *(double *)(uVar7 * 8000 + param_4 + uVar5 * 8) *
                              *(double *)(uVar7 * 0x2580 + param_5 + uVar6 * 8);
              *(double *)(lVar3 + uVar6 * 8) = dVar8;
              uVar7 = uVar7 + 1;
            } while (uVar7 != uVar2);
          }
          *(double *)(lVar3 + uVar6 * 8) = dVar8 * param_1;
          uVar6 = uVar6 + 1;
        } while (uVar6 != param_3);
      }
      uVar4 = uVar4 + 1;
      uVar5 = uVar1;
    } while (uVar1 != uVar2);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 submain(int param_1,char **param_2)

{
  double *pdVar1;
  undefined auVar2 [16];
  undefined auVar3 [16];
  FILE *__stream;
  void *__ptr;
  void *__ptr_00;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  undefined auVar10 [16];
  long lVar11;
  double dVar12;
  ulong uVar14;
  undefined auVar13 [16];
  
  __ptr = (void *)polybench_alloc_data(1000000,8);
  __ptr_00 = (void *)polybench_alloc_data();
  auVar3 = __LCPI1_8;
  auVar2 = __LCPI1_7;
  uVar4 = 0;
  uVar5 = 0;
  do {
    auVar10 = __LCPI1_3;
    if (uVar5 != 0) {
      if (uVar5 == 1) {
        uVar6 = 0;
      }
      else {
        uVar6 = uVar5 & 0x7ffffffffffffffe;
        uVar9 = 0;
        lVar7 = 0;
        lVar11 = 1;
        do {
          uVar14 = lVar11 + SUB168(CONCAT412((int)(uVar5 >> 0x20),CONCAT48((int)uVar5,uVar5)) >>
                                   0x40,0);
          auVar13 = divpd(CONCAT88((double)((int)uVar14 +
                                           (int)((uVar14 & 0xffffffff) / 1000) * -1000),
                                   (double)((int)(lVar7 + uVar5) +
                                           (int)((lVar7 + uVar5 & 0xffffffff) / 1000) * -1000)),
                          auVar10);
          *(undefined (*) [16])((long)__ptr + uVar9 * 8 + uVar5 * 8000) = auVar13;
          uVar9 = uVar9 + 2;
          lVar7 = lVar7 + 2;
          lVar11 = lVar11 + 2;
        } while (uVar9 != uVar6);
        if (uVar5 == uVar6) goto LAB_0010024f;
      }
      do {
        *(double *)((long)__ptr + uVar6 * 8 + uVar5 * 8000) =
             (double)((uint)((int)uVar6 + (int)uVar5) % 1000) / 1000.0;
        uVar6 = uVar6 + 1;
      } while (uVar6 != uVar5);
    }
LAB_0010024f:
    *(undefined8 *)(uVar5 * 0x1f48 + (long)__ptr) = 0x3ff0000000000000;
    lVar7 = 0;
    lVar11 = 0;
    do {
      uVar6 = (uVar5 + 0x4b0) - lVar11;
      dVar12 = (double)((int)uVar6 - (int)((uVar6 & 0xffffffff) / 0x4b0) * SUB164(auVar2,0));
      auVar13 = divpd(CONCAT88((double)(int)((ulong)dVar12 >> 0x20),dVar12),auVar3);
      dVar12 = (double)((int)(uVar6 - 2) -
                       (int)((uVar6 - 2 & 0xffffffff) / 0x4b0) * SUB164(auVar2,0));
      auVar10 = divpd(CONCAT88((double)(int)((ulong)dVar12 >> 0x20),dVar12),auVar3);
      *(undefined (*) [16])((long)__ptr_00 + lVar7 * 8 + uVar5 * 0x2580) = auVar13;
      *(undefined (*) [16])((long)__ptr_00 + (lVar7 * 8 | 0x10U) + uVar5 * 0x2580) = auVar10;
      lVar7 = lVar7 + 4;
      lVar11 = lVar11 + 4;
    } while (lVar7 != 0x4b0);
    uVar5 = uVar5 + 1;
    if (uVar5 == 1000) {
      lVar7 = 1;
      do {
        lVar11 = 0;
        do {
          pdVar1 = (double *)((long)__ptr_00 + lVar11 * 8 + uVar4 * 0x2580);
          dVar12 = *(double *)((long)__ptr_00 + lVar11 * 8 + uVar4 * 0x2580);
          lVar8 = lVar7;
          if (uVar4 < 999) {
            do {
              dVar12 = dVar12 + *(double *)((long)__ptr + uVar4 * 8 + lVar8 * 8000) *
                                *(double *)((long)__ptr_00 + lVar11 * 8 + lVar8 * 0x2580);
              *pdVar1 = dVar12;
              lVar8 = lVar8 + 1;
            } while (lVar8 != 1000);
          }
          *pdVar1 = dVar12 * 1.5;
          __stream = _DAT_17b3d8d48388b4c;
          lVar11 = lVar11 + 1;
        } while (lVar11 != 0x4b0);
        uVar4 = uVar4 + 1;
        lVar7 = lVar7 + 1;
      } while (uVar4 != 1000);
      if ((0x2a < param_1) && (**param_2 == '\0')) {
        fwrite(_L_str_1,0x16,1,_DAT_17b3d8d48388b4c);
        lVar7 = 0;
        fprintf(__stream,"begin dump: %s",&_L_str_3);
        do {
          lVar11 = 0;
          do {
            if (((uint)(((int)lVar11 + (int)lVar7 * 1000) * -0x33333333) >> 2 |
                (int)lVar11 * 0x40000000) < 0xccccccd) {
              fputc(10,__stream);
            }
            fprintf(__stream,"%0.2lf ",*(undefined8 *)((long)__ptr_00 + lVar11 * 8 + lVar7 * 0x2580)
                   );
            lVar11 = lVar11 + 1;
          } while (lVar11 != 0x4b0);
          lVar7 = lVar7 + 1;
        } while (lVar7 != 1000);
        fprintf(__stream,"\nend   dump: %s\n",&_L_str_3);
        fwrite("==END   DUMP_ARRAYS==\n",0x16,1,__stream);
      }
      free(__ptr);
      free(__ptr_00);
      return 0;
    }
  } while( true );
}


