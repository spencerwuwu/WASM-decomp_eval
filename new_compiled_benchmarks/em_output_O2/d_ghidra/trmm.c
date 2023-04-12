#include "trmm.h"



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
  ulong uVar8;
  undefined auVar9 [16];
  long lVar10;
  double dVar11;
  ulong uVar13;
  undefined auVar12 [16];
  
  __ptr = (void *)polybench_alloc_data(1000000,8);
  __ptr_00 = (void *)polybench_alloc_data();
  auVar3 = __LCPI0_8;
  auVar2 = __LCPI0_7;
  uVar4 = 0;
  uVar5 = 0;
  do {
    auVar9 = __LCPI0_3;
    if (uVar5 != 0) {
      if (uVar5 == 1) {
        uVar6 = 0;
      }
      else {
        uVar6 = uVar5 & 0x7ffffffffffffffe;
        uVar8 = 0;
        lVar7 = 0;
        lVar10 = 1;
        do {
          uVar13 = lVar10 + SUB168(CONCAT412((int)(uVar5 >> 0x20),CONCAT48((int)uVar5,uVar5)) >>
                                   0x40,0);
          auVar12 = divpd(CONCAT88((double)((int)uVar13 +
                                           (int)((uVar13 & 0xffffffff) / 1000) * -1000),
                                   (double)((int)(lVar7 + uVar5) +
                                           (int)((lVar7 + uVar5 & 0xffffffff) / 1000) * -1000)),
                          auVar9);
          *(undefined (*) [16])((long)__ptr + uVar8 * 8 + uVar5 * 8000) = auVar12;
          uVar8 = uVar8 + 2;
          lVar7 = lVar7 + 2;
          lVar10 = lVar10 + 2;
        } while (uVar8 != uVar6);
        if (uVar5 == uVar6) goto LAB_0010019f;
      }
      do {
        *(double *)((long)__ptr + uVar6 * 8 + uVar5 * 8000) =
             (double)((uint)((int)uVar6 + (int)uVar5) % 1000) / 1000.0;
        uVar6 = uVar6 + 1;
      } while (uVar6 != uVar5);
    }
LAB_0010019f:
    *(undefined8 *)(uVar5 * 0x1f48 + (long)__ptr) = 0x3ff0000000000000;
    lVar7 = 0;
    lVar10 = 0;
    do {
      uVar6 = (uVar5 + 0x4b0) - lVar10;
      dVar11 = (double)((int)uVar6 - (int)((uVar6 & 0xffffffff) / 0x4b0) * SUB164(auVar2,0));
      auVar12 = divpd(CONCAT88((double)(int)((ulong)dVar11 >> 0x20),dVar11),auVar3);
      dVar11 = (double)((int)(uVar6 - 2) -
                       (int)((uVar6 - 2 & 0xffffffff) / 0x4b0) * SUB164(auVar2,0));
      auVar9 = divpd(CONCAT88((double)(int)((ulong)dVar11 >> 0x20),dVar11),auVar3);
      *(undefined (*) [16])((long)__ptr_00 + lVar7 * 8 + uVar5 * 0x2580) = auVar12;
      *(undefined (*) [16])((long)__ptr_00 + (lVar7 * 8 | 0x10U) + uVar5 * 0x2580) = auVar9;
      lVar7 = lVar7 + 4;
      lVar10 = lVar10 + 4;
    } while (lVar7 != 0x4b0);
    uVar5 = uVar5 + 1;
    if (uVar5 == 1000) {
      do {
        lVar7 = 0;
        do {
          pdVar1 = (double *)((long)__ptr_00 + lVar7 * 8 + uVar4 * 0x2580);
          dVar11 = *(double *)((long)__ptr_00 + lVar7 * 8 + uVar4 * 0x2580);
          uVar5 = uVar4;
          if (uVar4 < 999) {
            do {
              uVar5 = uVar5 + 1;
              dVar11 = dVar11 + *(double *)((long)__ptr + uVar4 * 8 + uVar5 * 8000) *
                                *(double *)((long)__ptr_00 + lVar7 * 8 + uVar5 * 0x2580);
              *pdVar1 = dVar11;
            } while (uVar5 != 999);
          }
          *pdVar1 = dVar11 * 1.5;
          __stream = _DAT_16d3d8d48388b4c;
          lVar7 = lVar7 + 1;
        } while (lVar7 != 0x4b0);
        uVar4 = uVar4 + 1;
      } while (uVar4 != 1000);
      if ((0x2a < param_1) && (**param_2 == '\0')) {
        fwrite(_L_str_1,0x16,1,_DAT_16d3d8d48388b4c);
        lVar7 = 0;
        fprintf(__stream,"begin dump: %s",&_L_str_3);
        do {
          lVar10 = 0;
          do {
            if (((uint)(((int)lVar10 + (int)lVar7 * 1000) * -0x33333333) >> 2 |
                (int)lVar10 * 0x40000000) < 0xccccccd) {
              fputc(10,__stream);
            }
            fprintf(__stream,"%0.2lf ",*(undefined8 *)((long)__ptr_00 + lVar10 * 8 + lVar7 * 0x2580)
                   );
            lVar10 = lVar10 + 1;
          } while (lVar10 != 0x4b0);
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


