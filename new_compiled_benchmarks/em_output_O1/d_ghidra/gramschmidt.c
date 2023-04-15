#include "gramschmidt.h"



void kernel_gramschmidt(uint param_1,uint param_2,long param_3,long param_4,long param_5)

{
  double *pdVar1;
  long lVar2;
  double dVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  double dVar11;
  
  if (0 < (int)param_2) {
    uVar10 = (ulong)param_1;
    uVar8 = 1;
    uVar9 = 0;
    do {
      dVar11 = 0.0;
      if (0 < (int)param_1) {
        uVar4 = 0;
        do {
          dVar3 = *(double *)(uVar4 * 0x2580 + param_3 + uVar9 * 8);
          dVar11 = dVar11 + dVar3 * dVar3;
          uVar4 = uVar4 + 1;
        } while (uVar4 != uVar10);
      }
      if (dVar11 < 0.0) {
        dVar11 = sqrt(dVar11);
      }
      else {
        dVar11 = SQRT(dVar11);
      }
      lVar5 = uVar9 * 0x2580 + param_4;
      *(double *)(lVar5 + uVar9 * 8) = dVar11;
      if (0 < (int)param_1) {
        uVar4 = 0;
        do {
          *(double *)(uVar4 * 0x2580 + param_5 + uVar9 * 8) =
               *(double *)(param_3 + uVar4 * 0x2580 + uVar9 * 8) / *(double *)(lVar5 + uVar9 * 8);
          uVar4 = uVar4 + 1;
        } while (uVar4 != uVar10);
      }
      uVar4 = uVar9 + 1;
      uVar6 = uVar8;
      if ((long)uVar4 < (long)(int)param_2) {
        do {
          pdVar1 = (double *)(lVar5 + uVar6 * 8);
          *(undefined8 *)(lVar5 + uVar6 * 8) = 0;
          if (0 < (int)param_1) {
            dVar11 = *pdVar1;
            uVar7 = 0;
            do {
              dVar11 = dVar11 + *(double *)(param_5 + uVar7 * 0x2580 + uVar9 * 8) *
                                *(double *)(uVar7 * 0x2580 + param_3 + uVar6 * 8);
              *pdVar1 = dVar11;
              uVar7 = uVar7 + 1;
            } while (uVar7 != uVar10);
          }
          if (0 < (int)param_1) {
            uVar7 = 0;
            do {
              lVar2 = param_3 + uVar7 * 0x2580;
              *(double *)(lVar2 + uVar6 * 8) =
                   *(double *)(lVar2 + uVar6 * 8) -
                   *(double *)(uVar7 * 0x2580 + param_5 + uVar9 * 8) * *pdVar1;
              uVar7 = uVar7 + 1;
            } while (uVar7 != uVar10);
          }
          uVar6 = uVar6 + 1;
        } while (uVar6 != param_2);
      }
      uVar8 = uVar8 + 1;
      uVar9 = uVar4;
    } while (uVar4 != param_2);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 submain(int param_1,char **param_2)

{
  double *pdVar1;
  ulong uVar2;
  double dVar3;
  FILE *__stream;
  void *__ptr;
  void *__s;
  void *__ptr_00;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  double dVar9;
  
  __ptr = (void *)polybench_alloc_data(1200000,8);
  __s = (void *)polybench_alloc_data(0x15f900,8);
  __ptr_00 = (void *)polybench_alloc_data(1200000,8);
  lVar4 = 0;
  do {
    lVar5 = 0;
    do {
      *(double *)((long)__ptr + lVar5 * 8 + lVar4 * 0x2580) =
           ((double)((uint)((int)lVar5 * (int)lVar4) % 1000) / 1000.0) * 100.0 + 10.0;
      *(undefined8 *)((long)__ptr_00 + lVar5 * 8 + lVar4 * 0x2580) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 != 0x4b0);
    lVar4 = lVar4 + 1;
  } while (lVar4 != 1000);
  memset(__s,0,0xafc800);
  lVar4 = 1;
  uVar6 = 0;
  do {
    lVar5 = 0;
    dVar9 = 0.0;
    do {
      dVar3 = *(double *)((long)__ptr + uVar6 * 8 + lVar5 * 0x2580);
      dVar9 = dVar9 + dVar3 * dVar3;
      lVar5 = lVar5 + 1;
    } while (lVar5 != 1000);
    if (dVar9 < 0.0) {
      dVar9 = sqrt(dVar9);
    }
    else {
      dVar9 = SQRT(dVar9);
    }
    *(double *)((long)__s + uVar6 * 0x2588) = dVar9;
    lVar5 = 0;
    do {
      *(double *)((long)__ptr_00 + uVar6 * 8 + lVar5 * 0x2580) =
           *(double *)((long)__ptr + uVar6 * 8 + lVar5 * 0x2580) /
           *(double *)((long)__s + uVar6 * 0x2588);
      lVar5 = lVar5 + 1;
    } while (lVar5 != 1000);
    uVar2 = uVar6 + 1;
    lVar5 = lVar4;
    if (uVar6 < 0x4af) {
      do {
        pdVar1 = (double *)((long)__s + lVar5 * 8 + uVar6 * 0x2580);
        *(undefined8 *)((long)__s + lVar5 * 8 + uVar6 * 0x2580) = 0;
        dVar9 = 0.0;
        lVar7 = 0;
        do {
          dVar9 = dVar9 + *(double *)((long)__ptr_00 + uVar6 * 8 + lVar7 * 0x2580) *
                          *(double *)((long)__ptr + lVar5 * 8 + lVar7 * 0x2580);
          *pdVar1 = dVar9;
          lVar7 = lVar7 + 1;
        } while (lVar7 != 1000);
        lVar7 = 0;
        do {
          lVar8 = lVar7 * 0x2580;
          *(double *)((long)__ptr + lVar5 * 8 + lVar8) =
               *(double *)((long)__ptr + lVar5 * 8 + lVar8) -
               *(double *)((long)__ptr_00 + uVar6 * 8 + lVar8) * *pdVar1;
          lVar7 = lVar7 + 1;
        } while (lVar7 != 1000);
        lVar5 = lVar5 + 1;
      } while (lVar5 != 0x4b0);
    }
    __stream = _DAT_1843d8d48208b4c;
    lVar4 = lVar4 + 1;
    uVar6 = uVar2;
  } while (uVar2 != 0x4b0);
  if ((0x2a < param_1) && (**param_2 == '\0')) {
    fwrite(_L_str_1,0x16,1,_DAT_1843d8d48208b4c);
    lVar4 = 0;
    fprintf(__stream,"begin dump: %s",&_L_str_3);
    do {
      lVar5 = 0;
      do {
        if (((uint)(((int)lVar4 * 0x4b0 + (int)lVar5) * -0x33333333) >> 2 | (int)lVar5 * 0x40000000)
            < 0xccccccd) {
          fputc(10,__stream);
        }
        fprintf(__stream,"%0.2lf ",*(undefined8 *)((long)__s + lVar5 * 8 + lVar4 * 0x2580));
        lVar5 = lVar5 + 1;
      } while (lVar5 != 0x4b0);
      lVar4 = lVar4 + 1;
    } while (lVar4 != 0x4b0);
    lVar4 = 0;
    fprintf(__stream,"\nend   dump: %s\n",&_L_str_3);
    fprintf(__stream,"begin dump: %s",&_L_str_7);
    do {
      lVar5 = 0;
      do {
        if (((uint)(((int)lVar4 * 0x4b0 + (int)lVar5) * -0x33333333) >> 2 | (int)lVar5 * 0x40000000)
            < 0xccccccd) {
          fputc(10,__stream);
        }
        fprintf(__stream,"%0.2lf ",*(undefined8 *)((long)__ptr_00 + lVar5 * 8 + lVar4 * 0x2580));
        lVar5 = lVar5 + 1;
      } while (lVar5 != 0x4b0);
      lVar4 = lVar4 + 1;
    } while (lVar4 != 1000);
    fprintf(__stream,"\nend   dump: %s\n",&_L_str_7);
    fwrite("==END   DUMP_ARRAYS==\n",0x16,1,__stream);
  }
  free(__ptr);
  free(__s);
  free(__ptr_00);
  return 0;
}


