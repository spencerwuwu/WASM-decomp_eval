
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <polybench.h>
#include "ghidra_base.h"
#include "mpeg2.h"
size_t read(int __fd,void *__buf,size_t __nbytes)

{
  int *puVar1;
  int *puVar2;
  int uVar3;
  int uVar4;
  int uVar5;
  int uVar6;
  int uVar7;
  int uVar8;
  int uVar9;
  uint uVar10;
  ulong uVar11;
  ulong uVar12;
  int in_register_0000003c;
  int *puVar13;
  ulong uVar14;
  int *puVar15;
  int *puVar16;
  ulong uVar17;
  
  uVar11 = __nbytes & 0xffffffff;
  if ((int)__nbytes < 1) {
    return uVar11;
  }
  uVar10 = (uint)uVar11;
  uVar14 = uVar11;
  puVar15 = (int *)__buf;
  puVar16 = puVar13;
  if ((7 < uVar10) && (0x1f < (ulong)((long)puVar13 - (long)__buf))) {
    if (uVar10 < 0x20) {
      uVar12 = 0;
    }
    else {
      uVar12 = (ulong)(uVar10 & 0xffffffe0);
      uVar14 = 0;
      do {
        puVar1 = (int *)((long)__buf + uVar14);
        uVar3 = puVar1[1];
        uVar4 = puVar1[2];
        uVar5 = puVar1[3];
        puVar2 = (int *)((long)__buf + uVar14 + 0x10);
        uVar6 = *puVar2;
        uVar7 = puVar2[1];
        uVar8 = puVar2[2];
        uVar9 = puVar2[3];
        puVar2 = (int *)(puVar13 + uVar14);
        *puVar2 = *puVar1;
        puVar2[1] = uVar3;
        puVar2[2] = uVar4;
        puVar2[3] = uVar5;
        puVar1 = (int *)(puVar13 + uVar14 + 0x10);
        *puVar1 = uVar6;
        puVar1[1] = uVar7;
        puVar1[2] = uVar8;
        puVar1[3] = uVar9;
        uVar14 = uVar14 + 0x20;
      } while (uVar14 != uVar12);
      if (uVar12 == uVar11) {
        return uVar11;
      }
      if ((__nbytes & 0x18) == 0) {
        uVar14 = (ulong)(uVar10 - (uVar10 & 0xffffffe0));
        puVar15 = (int *)((long)__buf + uVar12);
        puVar16 = puVar13 + uVar12;
        goto LAB_001000a0;
      }
    }
    uVar17 = (ulong)(uVar10 & 0xfffffff8);
    uVar14 = (ulong)(uVar10 - (uVar10 & 0xfffffff8));
    puVar15 = (int *)((long)__buf + uVar17);
    puVar16 = puVar13 + uVar17;
    do {
      *(int8 *)(puVar13 + uVar12) = *(int8 *)((long)__buf + uVar12);
      uVar12 = uVar12 + 8;
    } while (uVar12 != uVar17);
    if (uVar17 == uVar11) {
      return uVar11;
    }
  }
LAB_001000a0:
  do {
    uVar10 = (uint)uVar14;
    *puVar16 = *puVar15;
    uVar14 = (ulong)(uVar10 - 1);
    puVar15 = puVar15 + 1;
    puVar16 = puVar16 + 1;
  } while (1 < uVar10);
  return uVar11;
}
void Fill_Buffer(void)

{
  memcpy(&DAT_ba00000000358b48,(void *)0xdf894800000800ba,0x800);
  _DAT_58b48188948 = &DAT_ba00000000358b48;
  if (_DAT_58b480e74003883 != 0) {
    _DAT_5bfffff800008148 = _DAT_5bfffff800008148 + -0x800;
  }
  return;
}
uint Show_Bits(char param_1)

{
  return _DAT_55c3e8d3d9f6008b >> (-param_1 & 0x1fU);
}
uint Get_Bits1(void)

{
  byte *pbVar1;
  int bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  long local_40;
  
  uVar4 = _DAT_482b89002c8d038b;
  iVar3 = _DAT_b904244c89098b;
  uVar6 = _DAT_482b89002c8d038b * 2;
  iVar7 = _DAT_8944ff698d440a8b + -1;
  bVar2 = _DAT_8944ff698d440a8b < 0x1a;
  _DAT_482b89002c8d038b = uVar6;
  _DAT_8944ff698d440a8b = iVar7;
  iVar5 = _DAT_c11024448b480889;
  if (bVar2) {
    if (_DAT_7fcb924048b49 < (byte *)0x6666665473c84144) {
      do {
        pbVar1 = _DAT_7fcb924048b49 + 1;
        uVar6 = uVar6 | (uint)*_DAT_7fcb924048b49 << (0x18U - (char)iVar7 & 0x1f);
        bVar2 = iVar7 < 0x11;
        _DAT_7fcb924048b49 = pbVar1;
        _DAT_482b89002c8d038b = uVar6;
        iVar5 = iVar7 + 8;
        iVar7 = iVar7 + 8;
      } while (bVar2);
    }
    else {
      local_40 = _DAT_8244c8948098b48;
      do {
        if ((byte *)0x3d8b4cce0948 < _DAT_7fcb924048b49) {
          _DAT_482b89002c8d038b = uVar6;
          memcpy(&DAT_441f0f6633eb,(void *)0x247c8300003daae8,0x800);
          if (iVar3 != 0) {
            _DAT_8894808244c8948 = local_40 + -0x800;
            local_40 = _DAT_8894808244c8948;
          }
          _DAT_7fcb924048b49 = &DAT_441f0f6633eb;
        }
        pbVar1 = _DAT_7fcb924048b49 + 1;
        uVar6 = uVar6 | (uint)*_DAT_7fcb924048b49 << (0x18U - (char)iVar7 & 0x1f);
        bVar2 = iVar7 < 0x11;
        _DAT_7fcb924048b49 = pbVar1;
        _DAT_482b89002c8d038b = uVar6;
        iVar5 = iVar7 + 8;
        iVar7 = iVar7 + 8;
      } while (bVar2);
    }
  }
  _DAT_c11024448b480889 = iVar5;
  return uVar4 >> 0x1f;
}
uint Get_Bits(int param_1)

{
  int iVar1;
  byte *pbVar2;
  int bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  long local_38;
  
  uVar5 = _DAT_e5d341c58941038b;
  iVar4 = _DAT_b90c244c89098b;
  uVar6 = _DAT_e5d341c58941038b << ((byte)param_1 & 0x1f);
  _DAT_8944ff29413a8b44 = _DAT_8944ff29413a8b44 - param_1;
  iVar1 = _DAT_4c8b0824448b0889;
  _DAT_e5d341c58941038b = uVar6;
  if (_DAT_8944ff29413a8b44 < 0x19) {
    iVar7 = _DAT_8944ff29413a8b44;
    if (_DAT_7fcb900458b48 < (byte *)0x401f0f5073c84144) {
      do {
        pbVar2 = _DAT_7fcb900458b48 + 1;
        uVar6 = uVar6 | (uint)*_DAT_7fcb900458b48 << (0x18U - (char)iVar7 & 0x1f);
        iVar1 = iVar7 + 8;
        bVar3 = iVar7 < 0x11;
        _DAT_7fcb900458b48 = pbVar2;
        iVar7 = iVar1;
        _DAT_e5d341c58941038b = uVar6;
      } while (bVar3);
    }
    else {
      local_38 = _DAT_10244c8948098b48;
      do {
        if ((byte *)0x258b4cce0948 < _DAT_7fcb900458b48) {
          _DAT_e5d341c58941038b = uVar6;
          memcpy(&DAT_508d48e0894c2feb,(void *)0x247c8300003c58e8,0x800);
          if (iVar4 != 0) {
            _DAT_8894810244c8948 = local_38 + -0x800;
            local_38 = _DAT_8894810244c8948;
          }
          _DAT_7fcb900458b48 = &DAT_508d48e0894c2feb;
        }
        pbVar2 = _DAT_7fcb900458b48 + 1;
        uVar6 = uVar6 | (uint)*_DAT_7fcb900458b48 << (0x18U - (char)iVar7 & 0x1f);
        iVar1 = iVar7 + 8;
        bVar3 = iVar7 < 0x11;
        iVar7 = iVar1;
        _DAT_7fcb900458b48 = pbVar2;
        _DAT_e5d341c58941038b = uVar6;
      } while (bVar3);
    }
  }
  _DAT_4c8b0824448b0889 = iVar1;
  return uVar5 >> (-(byte)param_1 & 0x1f);
}
void Flush_Buffer(int param_1)

{
  int iVar1;
  byte *pbVar2;
  int bVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  long local_38;
  
  iVar4 = _DAT_b90c244c89098b;
  uVar5 = _DAT_8941e5d3242c8b41 << ((byte)param_1 & 0x1f);
  _DAT_8944fd2941288b44 = _DAT_8944fd2941288b44 - param_1;
  iVar1 = _DAT_415b18c483480889;
  _DAT_8941e5d3242c8b41 = uVar5;
  if (_DAT_8944fd2941288b44 < 0x19) {
    iVar6 = _DAT_8944fd2941288b44;
    if (_DAT_7fcb9068b49 < (byte *)0x6666664d73c84144) {
      do {
        pbVar2 = _DAT_7fcb9068b49 + 1;
        uVar5 = uVar5 | (uint)*_DAT_7fcb9068b49 << (0x18U - (char)iVar6 & 0x1f);
        iVar1 = iVar6 + 8;
        bVar3 = iVar6 < 0x11;
        _DAT_7fcb9068b49 = pbVar2;
        iVar6 = iVar1;
        _DAT_8941e5d3242c8b41 = uVar5;
      } while (bVar3);
    }
    else {
      local_38 = _DAT_10244c8948098b48;
      do {
        if ((byte *)0x3d8b4ccb0947 < _DAT_7fcb9068b49) {
          _DAT_8941e5d3242c8b41 = uVar5;
          memcpy(&DAT_f2e666666663beb,(void *)0x247c8300003b09e8,0x800);
          if (iVar4 != 0) {
            _DAT_8894810244c8948 = local_38 + -0x800;
            local_38 = _DAT_8894810244c8948;
          }
          _DAT_7fcb9068b49 = &DAT_f2e666666663beb;
        }
        pbVar2 = _DAT_7fcb9068b49 + 1;
        uVar5 = uVar5 | (uint)*_DAT_7fcb9068b49 << (0x18U - (char)iVar6 & 0x1f);
        iVar1 = iVar6 + 8;
        bVar3 = iVar6 < 0x11;
        iVar6 = iVar1;
        _DAT_7fcb9068b49 = pbVar2;
        _DAT_8941e5d3242c8b41 = uVar5;
      } while (bVar3);
    }
  }
  _DAT_415b18c483480889 = iVar1;
  return;
}
int Get_motion_code(void)

{
  int iVar1;
  byte bVar2;
  int bVar3;
  int iVar4;
  ulong uVar5;
  uint uVar6;
  int iVar7;
  long lVar8;
  uint *puVar9;
  int *puVar10;
  byte *pbVar11;
  int iVar12;
  uint uVar13;
  uint *puVar14;
  uint uVar15;
  
  iVar7 = _DAT_8944093c8d440e8b;
  iVar4 = _DAT_b90c244c89098b;
  puVar14 = (uint *)&DAT_8944093c8d440e8b;
  uVar15 = _DAT_8944093c8d440e8b * 2;
  puVar9 = (uint *)&DAT_832a89ff688d028b;
  iVar12 = _DAT_832a89ff688d028b + -1;
  bVar3 = _DAT_832a89ff688d028b < 0x1a;
  _DAT_832a89ff688d028b = iVar12;
  _DAT_8944093c8d440e8b = uVar15;
  if (bVar3) {
    pbVar11 = _DAT_7fcb900458b49;
    lVar8 = _DAT_d8b48218b4c;
    if (_DAT_7fcb900458b49 < (byte *)0x164830fc84144) {
      do {
        pbVar11 = _DAT_7fcb900458b49 + 1;
        uVar15 = uVar15 | (uint)*_DAT_7fcb900458b49 << (0x18U - (char)iVar12 & 0x1f);
        iVar1 = iVar12 + 8;
        bVar3 = iVar12 < 0x11;
        _DAT_7fcb900458b49 = pbVar11;
        iVar12 = iVar1;
        _DAT_8944093c8d440e8b = uVar15;
      } while (bVar3);
    }
    else {
      do {
        if ((byte *)0x1d8b48ce0948 < pbVar11) {
          memcpy(&DAT_801f0f3aeb,(void *)0x247c83000038a4e8,0x800);
          if (iVar4 != 0) {
            lVar8 = lVar8 + -0x800;
            _DAT_43e9899aeb20894c = lVar8;
          }
          pbVar11 = &DAT_801f0f3aeb;
          puVar14 = (uint *)&DAT_55894901508d48;
        }
        uVar15 = uVar15 | (uint)*pbVar11 << (0x18U - (char)iVar12 & 0x1f);
        _DAT_7fcb900458b49 = pbVar11 + 1;
        *puVar14 = uVar15;
        iVar1 = iVar12 + 8;
        bVar3 = iVar12 < 0x11;
        pbVar11 = pbVar11 + 1;
        iVar12 = iVar1;
      } while (bVar3);
    }
    iVar12 = iVar1;
    puVar9 = (uint *)&DAT_244c8b48cd890a89;
    _DAT_244c8b48cd890a89 = iVar12;
  }
  iVar4 = 0;
  if (-1 < iVar7) {
    if (uVar15 < 0x20000000) {
      if (uVar15 < 0xc000000) {
        if (uVar15 < 0x6000000) {
          return 0;
        }
        uVar5 = (ulong)((uVar15 >> 0x17) - 0xc);
        bVar2 = *(byte *)(uVar5 * 2 + -0x182cbefe87b341f0);
        uVar15 = uVar15 << (bVar2 & 0x1f);
        *puVar14 = uVar15;
        uVar13 = iVar12 - (char)bVar2;
        *puVar9 = uVar13;
        iVar4 = _DAT_b90c244c89098b;
        uVar6 = uVar13;
        if ((int)uVar13 < 0x19) {
          pbVar11 = _DAT_7fcb900458b49;
          lVar8 = _DAT_d8b48218b4c;
          if (_DAT_7fcb900458b49 < (byte *)0x30e830fc84144) {
            do {
              uVar15 = uVar15 | (uint)*pbVar11 << (0x18U - (char)uVar13 & 0x1f);
              _DAT_7fcb900458b49 = pbVar11 + 1;
              *puVar14 = uVar15;
              uVar6 = uVar13 + 8;
              bVar3 = (int)uVar13 < 0x11;
              pbVar11 = pbVar11 + 1;
              uVar13 = uVar6;
            } while (bVar3);
          }
          else {
            do {
              if ((byte *)0x1d8b48ce0948 < pbVar11) {
                memcpy(&DAT_48d88948906635eb,(void *)0x247c83000033e4e8,0x800);
                if (iVar4 != 0) {
                  lVar8 = lVar8 + -0x800;
                  _DAT_f2e669aeb20894c = lVar8;
                }
                pbVar11 = &DAT_48d88948906635eb;
                puVar14 = (uint *)&DAT_55894901508d48;
              }
              uVar15 = uVar15 | (uint)*pbVar11 << (0x18U - (char)uVar13 & 0x1f);
              _DAT_7fcb900458b49 = pbVar11 + 1;
              *puVar14 = uVar15;
              uVar6 = uVar13 + 8;
              bVar3 = (int)uVar13 < 0x11;
              pbVar11 = pbVar11 + 1;
              uVar13 = uVar6;
            } while (bVar3);
          }
        }
        *puVar14 = uVar15 * 2;
        iVar4 = _DAT_1d8b48208b44;
        lVar8 = _DAT_58b48288b4c;
        _DAT_93870f19f9830289 = uVar6 - 1;
        puVar10 = (int *)&DAT_93870f19f9830289;
        if (uVar6 < 0x1a) {
          pbVar11 = _DAT_7fcb81e8b49;
          if (((byte *)0x800b86472c34143 < _DAT_7fcb81e8b49) &&
             ((byte *)0x58b485372c34147 < _DAT_7fcb81e8b49)) {
            pbVar11 = &DAT_ba00000000358b48;
            memcpy(&DAT_ba00000000358b48,(void *)0xdf894800000800ba,0x800);
            if (iVar4 != 0) {
              _DAT_358b4828894c = lVar8 + -0x800;
            }
            puVar14 = (uint *)&DAT_4800000000158b48;
            puVar10 = (int *)&DAT_f06894901438d48;
          }
          _DAT_7fcb81e8b49 = pbVar11 + 1;
          *puVar14 = uVar15 * 2 | (uint)*pbVar11;
          *puVar10 = 0x20;
        }
        lVar8 = -0x27083776bef341f1;
      }
      else {
        uVar5 = (ulong)(uVar15 >> 0x1a);
        bVar2 = *(byte *)(uVar5 * 2 + -0x182cbefebeb341f0);
        uVar15 = uVar15 << (bVar2 & 0x1f);
        *puVar14 = uVar15;
        uVar13 = iVar12 - (char)bVar2;
        *puVar9 = uVar13;
        iVar4 = _DAT_b90c244c89098b;
        uVar6 = uVar13;
        if ((int)uVar13 < 0x19) {
          pbVar11 = _DAT_7fcb900458b49;
          lVar8 = _DAT_d8b48218b4c;
          if (_DAT_7fcb900458b49 < (byte *)0x386830fc84144) {
            do {
              uVar15 = uVar15 | (uint)*pbVar11 << (0x18U - (char)uVar13 & 0x1f);
              _DAT_7fcb900458b49 = pbVar11 + 1;
              *puVar14 = uVar15;
              uVar6 = uVar13 + 8;
              bVar3 = (int)uVar13 < 0x11;
              pbVar11 = pbVar11 + 1;
              uVar13 = uVar6;
            } while (bVar3);
          }
          else {
            do {
              if ((byte *)0x1d8b48ce0948 < pbVar11) {
                memcpy(&DAT_841f0f2e663deb,(void *)0x247c8300003554e8,0x800);
                if (iVar4 != 0) {
                  lVar8 = lVar8 + -0x800;
                  _DAT_43e9899aeb20894c = lVar8;
                }
                pbVar11 = &DAT_841f0f2e663deb;
                puVar14 = (uint *)&DAT_55894901508d48;
              }
              uVar15 = uVar15 | (uint)*pbVar11 << (0x18U - (char)uVar13 & 0x1f);
              _DAT_7fcb900458b49 = pbVar11 + 1;
              *puVar14 = uVar15;
              uVar6 = uVar13 + 8;
              bVar3 = (int)uVar13 < 0x11;
              pbVar11 = pbVar11 + 1;
              uVar13 = uVar6;
            } while (bVar3);
          }
        }
        *puVar14 = uVar15 * 2;
        iVar4 = _DAT_1d8b48208b44;
        lVar8 = _DAT_58b48288b4c;
        _DAT_93870f19f9830289 = uVar6 - 1;
        puVar10 = (int *)&DAT_93870f19f9830289;
        if (uVar6 < 0x1a) {
          pbVar11 = _DAT_7fcb81e8b49;
          if (((byte *)0x800b86472c34143 < _DAT_7fcb81e8b49) &&
             ((byte *)0x58b485372c34147 < _DAT_7fcb81e8b49)) {
            pbVar11 = &DAT_ba00000000358b48;
            memcpy(&DAT_ba00000000358b48,(void *)0xdf894800000800ba,0x800);
            if (iVar4 != 0) {
              _DAT_358b4828894c = lVar8 + -0x800;
            }
            puVar14 = (uint *)&DAT_4800000000158b48;
            puVar10 = (int *)&DAT_f06894901438d48;
          }
          _DAT_7fcb81e8b49 = pbVar11 + 1;
          *puVar14 = uVar15 * 2 | (uint)*pbVar11;
          *puVar10 = 0x20;
        }
        lVar8 = 0xd8b480000015be9;
      }
    }
    else {
      uVar5 = (ulong)(uVar15 >> 0x1d);
      bVar2 = *(byte *)(uVar5 * 2 + -0x182cbefe87b341f0);
      uVar15 = uVar15 << (bVar2 & 0x1f);
      *puVar14 = uVar15;
      uVar13 = iVar12 - (char)bVar2;
      *puVar9 = uVar13;
      iVar4 = _DAT_b90c244c89098b;
      uVar6 = uVar13;
      if ((int)uVar13 < 0x19) {
        pbVar11 = _DAT_7fcb900458b49;
        lVar8 = _DAT_d8b48218b4c;
        if (_DAT_7fcb900458b49 < (byte *)0x2b4830fc84144) {
          do {
            uVar15 = uVar15 | (uint)*pbVar11 << (0x18U - (char)uVar13 & 0x1f);
            _DAT_7fcb900458b49 = pbVar11 + 1;
            *puVar14 = uVar15;
            uVar6 = uVar13 + 8;
            bVar3 = (int)uVar13 < 0x11;
            pbVar11 = pbVar11 + 1;
            uVar13 = uVar6;
          } while (bVar3);
        }
        else {
          do {
            if ((byte *)0x1d8b48ce0948 < pbVar11) {
              memcpy(&DAT_801f0f3aeb,(void *)0x247c83000036b4e8,0x800);
              if (iVar4 != 0) {
                lVar8 = lVar8 + -0x800;
                _DAT_43e9899aeb20894c = lVar8;
              }
              pbVar11 = &DAT_801f0f3aeb;
              puVar14 = (uint *)&DAT_55894901508d48;
            }
            uVar15 = uVar15 | (uint)*pbVar11 << (0x18U - (char)uVar13 & 0x1f);
            _DAT_7fcb900458b49 = pbVar11 + 1;
            *puVar14 = uVar15;
            uVar6 = uVar13 + 8;
            bVar3 = (int)uVar13 < 0x11;
            pbVar11 = pbVar11 + 1;
            uVar13 = uVar6;
          } while (bVar3);
        }
      }
      *puVar14 = uVar15 * 2;
      iVar4 = _DAT_1d8b48208b44;
      lVar8 = _DAT_58b48288b4c;
      _DAT_93870f19f9830289 = uVar6 - 1;
      puVar10 = (int *)&DAT_93870f19f9830289;
      if (uVar6 < 0x1a) {
        pbVar11 = _DAT_7fcb81e8b49;
        if (((byte *)0x800b86472c34143 < _DAT_7fcb81e8b49) &&
           ((byte *)0x58b485372c34147 < _DAT_7fcb81e8b49)) {
          pbVar11 = &DAT_ba00000000358b48;
          memcpy(&DAT_ba00000000358b48,(void *)0xdf894800000800ba,0x800);
          if (iVar4 != 0) {
            _DAT_358b4828894c = lVar8 + -0x800;
          }
          puVar14 = (uint *)&DAT_4800000000158b48;
          puVar10 = (int *)&DAT_f06894901438d48;
        }
        _DAT_7fcb81e8b49 = pbVar11 + 1;
        *puVar14 = uVar15 * 2 | (uint)*pbVar11;
        *puVar10 = 0x20;
      }
      lVar8 = -0x7ebefffffcb417;
    }
    iVar7 = (int)*(char *)(lVar8 + uVar5 * 2);
    iVar4 = -iVar7;
    if (-1 < (int)uVar15) {
      iVar4 = iVar7;
    }
  }
  return iVar4;
}
uint Get_dmvector(void)

{
  int bVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  byte *pbVar5;
  uint *puVar6;
  uint uVar7;
  long lVar8;
  uint uVar9;
  uint uVar10;
  
  iVar3 = _DAT_89443f3c8d443e8b;
  iVar2 = _DAT_b90c244c89098b;
  puVar6 = (uint *)&DAT_89443f3c8d443e8b;
  uVar9 = _DAT_89443f3c8d443e8b * 2;
  piVar4 = (int *)&DAT_8944ff688d44028b;
  uVar7 = _DAT_8944ff688d44028b - 1;
  bVar1 = (int)_DAT_8944ff688d44028b < 0x1a;
  _DAT_89443f3c8d443e8b = uVar9;
  _DAT_8944ff688d44028b = uVar7;
  if (bVar1) {
    pbVar5 = _DAT_7fcb900458b48;
    lVar8 = _DAT_d8b48318b4c;
    if (_DAT_7fcb900458b48 < (byte *)0x10247c8948c84144) {
      do {
        pbVar5 = _DAT_7fcb900458b48 + 1;
        uVar9 = uVar9 | (uint)*_DAT_7fcb900458b48 << (0x18U - (char)uVar7 & 0x1f);
        uVar10 = uVar7 + 8;
        bVar1 = (int)uVar7 < 0x11;
        _DAT_7fcb900458b48 = pbVar5;
        uVar7 = uVar10;
        _DAT_89443f3c8d443e8b = uVar9;
      } while (bVar1);
    }
    else {
      do {
        if ((byte *)0x1d8b48cc0948 < pbVar5) {
          memcpy(&DAT_841f0f2e666641eb,(void *)0x247c83000031d1e8,0x800);
          if (iVar2 != 0) {
            lVar8 = lVar8 + -0x800;
            _DAT_801f0f97eb30894c = lVar8;
          }
          pbVar5 = &DAT_841f0f2e666641eb;
          puVar6 = (uint *)&DAT_55894801508d48;
        }
        uVar9 = uVar9 | (uint)*pbVar5 << (0x18U - (char)uVar7 & 0x1f);
        _DAT_7fcb900458b48 = pbVar5 + 1;
        *puVar6 = uVar9;
        uVar10 = uVar7 + 8;
        bVar1 = (int)uVar7 < 0x11;
        pbVar5 = pbVar5 + 1;
        uVar7 = uVar10;
      } while (bVar1);
    }
    uVar7 = uVar10;
    piVar4 = (int *)&DAT_7c8b48cd89410a89;
    _DAT_7c8b48cd89410a89 = uVar7;
  }
  uVar10 = 0;
  if (iVar3 < 0) {
    *puVar6 = uVar9 * 2;
    *piVar4 = uVar7 - 1;
    iVar2 = _DAT_1d8b48208b44;
    lVar8 = _DAT_58b48288b4c;
    if (uVar7 < 0x1a) {
      pbVar5 = _DAT_7fcb81e8b49;
      if (((byte *)0x800b86472c34143 < _DAT_7fcb81e8b49) &&
         ((byte *)0x58b485372c34147 < _DAT_7fcb81e8b49)) {
        pbVar5 = &DAT_ba00000000358b48;
        memcpy(&DAT_ba00000000358b48,(void *)0xdf894800000800ba,0x800);
        if (iVar2 != 0) {
          _DAT_358b4828894c = lVar8 + -0x800;
        }
        puVar6 = (uint *)&DAT_4800000000158b48;
        piVar4 = (int *)&DAT_f06894901438d48;
      }
      _DAT_7fcb81e8b49 = pbVar5 + 1;
      *puVar6 = uVar9 * 2 | (uint)*pbVar5;
      *piVar4 = 0x20;
    }
    uVar10 = (int)uVar9 >> 0x1f | 1;
  }
  return uVar10;
}
void motion_vectors(long param_1,int8 param_2,long param_3,int param_4,int param_5,
                   uint param_6,int param_7,int param_8,uint param_9,
                   int param_10)

{
  int bVar1;
  int iVar2;
  byte *pbVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  uint *puVar7;
  uint uVar8;
  long lVar9;
  int iVar10;
  int iVar11;
  long lVar12;
  long local_68;
  
  uVar8 = _DAT_4c2b893f2c8d3b8b;
  uVar6 = _DAT_4500248d47038b45;
  iVar11 = _DAT_b920244c89098b;
  iVar10 = _DAT_b910244c89098b;
  if (param_5 == 1) {
    if ((param_6 | param_9) == 0) {
      uVar6 = _DAT_4c2b893f2c8d3b8b * 2;
      iVar10 = _DAT_45ff708d44008b41 + -1;
      bVar1 = _DAT_45ff708d44008b41 < 0x1a;
      _DAT_45ff708d44008b41 = iVar10;
      iVar4 = _DAT_4838246c8b4c0889;
      _DAT_4c2b893f2c8d3b8b = uVar6;
      if (bVar1) {
        if (_DAT_7fcb9078b49 < (byte *)0x38246c894cc84144) {
          do {
            pbVar3 = _DAT_7fcb9078b49 + 1;
            uVar6 = uVar6 | (uint)*_DAT_7fcb9078b49 << (0x18U - (char)iVar10 & 0x1f);
            bVar1 = iVar10 < 0x11;
            _DAT_7fcb9078b49 = pbVar3;
            iVar4 = iVar10 + 8;
            _DAT_4c2b893f2c8d3b8b = uVar6;
            iVar10 = iVar10 + 8;
          } while (bVar1);
        }
        else {
          local_68 = _DAT_10244c8948098b48;
          do {
            if ((byte *)0x258b4ccd0948 < _DAT_7fcb9078b49) {
              _DAT_4c2b893f2c8d3b8b = uVar6;
              memcpy(&DAT_e0894c001f0f2feb,(void *)0x247c8300002c9be8,0x800);
              if (iVar11 != 0) {
                _DAT_8894810244c8948 = local_68 + -0x800;
                local_68 = _DAT_8894810244c8948;
              }
              _DAT_7fcb9078b49 = &DAT_e0894c001f0f2feb;
            }
            pbVar3 = _DAT_7fcb9078b49 + 1;
            uVar6 = uVar6 | (uint)*_DAT_7fcb9078b49 << (0x18U - (char)iVar10 & 0x1f);
            bVar1 = iVar10 < 0x11;
            _DAT_7fcb9078b49 = pbVar3;
            iVar4 = iVar10 + 8;
            _DAT_4c2b893f2c8d3b8b = uVar6;
            iVar10 = iVar10 + 8;
          } while (bVar1);
        }
      }
      _DAT_4838246c8b4c0889 = iVar4;
      *(uint *)(param_3 + (long)param_4 * 4) = uVar8 >> 0x1f;
      *(uint *)(param_3 + 8 + (long)param_4 * 4) = uVar8 >> 0x1f;
    }
    lVar9 = (long)param_4;
    motion_vector(lVar9 * 8 + param_1,param_2,param_7,param_8,param_9,param_10,0);
    *(int8 *)(param_1 + 0x10 + lVar9 * 8) = *(int8 *)(param_1 + lVar9 * 8);
  }
  else {
    puVar7 = (uint *)&DAT_4500248d47038b45;
    uVar8 = _DAT_4500248d47038b45 * 2;
    piVar5 = (int *)&DAT_8944ff708d44038b;
    iVar11 = _DAT_8944ff708d44038b + -1;
    bVar1 = _DAT_8944ff708d44038b < 0x1a;
    _DAT_4500248d47038b45 = uVar8;
    _DAT_8944ff708d44038b = iVar11;
    if (bVar1) {
      pbVar3 = _DAT_7fcb900458b48;
      lVar9 = _DAT_d8b48398b4c;
      if (_DAT_7fcb900458b48 < (byte *)0x2a4830fc84144) {
        do {
          pbVar3 = _DAT_7fcb900458b48 + 1;
          uVar8 = uVar8 | (uint)*_DAT_7fcb900458b48 << (0x18U - (char)iVar11 & 0x1f);
          iVar4 = iVar11 + 8;
          bVar1 = iVar11 < 0x11;
          _DAT_7fcb900458b48 = pbVar3;
          _DAT_4500248d47038b45 = uVar8;
          iVar11 = iVar4;
        } while (bVar1);
      }
      else {
        do {
          if ((byte *)0x1d8b48cd0948 < pbVar3) {
            memcpy(&DAT_841f0f2e6640eb,(void *)0x247c8300002dd1e8,0x800);
            if (iVar10 != 0) {
              lVar9 = lVar9 + -0x800;
              _DAT_d8b4897eb38894c = lVar9;
            }
            pbVar3 = &DAT_841f0f2e6640eb;
            puVar7 = (uint *)&DAT_55894801508d48;
          }
          uVar8 = uVar8 | (uint)*pbVar3 << (0x18U - (char)iVar11 & 0x1f);
          _DAT_7fcb900458b48 = pbVar3 + 1;
          *puVar7 = uVar8;
          iVar4 = iVar11 + 8;
          bVar1 = iVar11 < 0x11;
          pbVar3 = pbVar3 + 1;
          iVar11 = iVar4;
        } while (bVar1);
      }
      piVar5 = (int *)&DAT_98248c8b440b89;
      _DAT_98248c8b440b89 = iVar4;
    }
    lVar9 = (long)param_4;
    *(uint *)(param_3 + lVar9 * 4) = uVar6 >> 0x1f;
    motion_vector(lVar9 * 8 + param_1,param_2,param_7,param_8,param_9,param_10,0);
    uVar8 = _DAT_4412348d47178b44;
    puVar7 = (uint *)&DAT_4412348d47178b44;
    uVar6 = _DAT_4412348d47178b44 * 2;
    iVar11 = *piVar5;
    iVar10 = iVar11 + -1;
    _DAT_4412348d47178b44 = uVar6;
    *piVar5 = iVar10;
    iVar4 = _DAT_b910244c89098b;
    iVar2 = _DAT_98248c8b440889;
    if (iVar11 < 0x1a) {
      pbVar3 = _DAT_7fcb900458b48;
      lVar12 = _DAT_d8b48398b4c;
      if (_DAT_7fcb900458b48 < (byte *)0x240830fc84144) {
        do {
          _DAT_7fcb900458b48 = pbVar3 + 1;
          uVar6 = uVar6 | (uint)*pbVar3 << (0x18U - (char)iVar10 & 0x1f);
          bVar1 = iVar10 < 0x11;
          pbVar3 = _DAT_7fcb900458b48;
          iVar2 = iVar10 + 8;
          _DAT_4412348d47178b44 = uVar6;
          iVar10 = iVar10 + 8;
        } while (bVar1);
      }
      else {
        do {
          if ((byte *)0x1d8b48cc0948 < pbVar3) {
            memcpy(&DAT_841f0f3eeb,(void *)0x247c8300002d31e8,0x800);
            if (iVar4 != 0) {
              lVar12 = lVar12 + -0x800;
              _DAT_d8b4897eb38894c = lVar12;
            }
            pbVar3 = &DAT_841f0f3eeb;
            puVar7 = (uint *)&DAT_55894801508d48;
          }
          uVar6 = uVar6 | (uint)*pbVar3 << (0x18U - (char)iVar10 & 0x1f);
          _DAT_7fcb900458b48 = pbVar3 + 1;
          *puVar7 = uVar6;
          bVar1 = iVar10 < 0x11;
          pbVar3 = pbVar3 + 1;
          iVar2 = iVar10 + 8;
          iVar10 = iVar10 + 8;
        } while (bVar1);
      }
    }
    _DAT_98248c8b440889 = iVar2;
    *(uint *)(param_3 + 8 + lVar9 * 4) = uVar8 >> 0x1f;
    motion_vector(param_1 + lVar9 * 8 + 0x10,param_2,param_7,param_8,param_9,param_10,0);
  }
  return;
}
void motion_vector(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,
                  int param_7)

{
  byte *pbVar1;
  int bVar2;
  uint uVar3;
  uint uVar4;
  int uVar5;
  byte bVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int bVar11;
  long local_70;
  long local_58;
  
  uVar4 = Get_motion_code();
  uVar3 = _DAT_d989f6894100758b;
  iVar7 = _DAT_b920244c89098b;
  uVar10 = 0;
  bVar6 = (byte)param_3;
  if ((param_3 != 0) && (uVar4 != 0)) {
    uVar10 = _DAT_d989f6894100758b << (bVar6 & 0x1f);
    _DAT_28245c8948208b44 = _DAT_28245c8948208b44 - param_3;
    iVar8 = _DAT_4430247c8b4c0889;
    _DAT_d989f6894100758b = uVar10;
    if (_DAT_28245c8948208b44 < 0x19) {
      iVar9 = _DAT_28245c8948208b44;
      if (_DAT_7fcb9078b49 < (byte *)0x266830fc84144) {
        do {
          pbVar1 = _DAT_7fcb9078b49 + 1;
          uVar10 = uVar10 | (uint)*_DAT_7fcb9078b49 << (0x18U - (char)iVar9 & 0x1f);
          iVar8 = iVar9 + 8;
          bVar11 = iVar9 < 0x11;
          _DAT_7fcb9078b49 = pbVar1;
          iVar9 = iVar8;
          _DAT_d989f6894100758b = uVar10;
        } while (bVar11);
      }
      else {
        local_70 = _DAT_8244c8948098b48;
        do {
          if ((byte *)0x1d8b48cd0948 < _DAT_7fcb9078b49) {
            _DAT_d989f6894100758b = uVar10;
            memcpy(&DAT_48d88948906632eb,(void *)0x247c83000028e7e8,0x800);
            if (iVar7 != 0) {
              _DAT_8894808244c8948 = local_70 + -0x800;
              local_70 = _DAT_8894808244c8948;
            }
            _DAT_7fcb9078b49 = &DAT_48d88948906632eb;
          }
          pbVar1 = _DAT_7fcb9078b49 + 1;
          uVar10 = uVar10 | (uint)*_DAT_7fcb9078b49 << (0x18U - (char)iVar9 & 0x1f);
          iVar8 = iVar9 + 8;
          bVar11 = iVar9 < 0x11;
          iVar9 = iVar8;
          _DAT_7fcb9078b49 = pbVar1;
          _DAT_d989f6894100758b = uVar10;
        } while (bVar11);
      }
    }
    _DAT_4430247c8b4c0889 = iVar8;
    uVar10 = uVar3 >> (-bVar6 & 0x1f);
  }
  iVar7 = 0x10 << (bVar6 & 0x1f);
  bVar11 = param_7 != 0;
  iVar8 = *param_1 >> bVar11;
  if ((int)uVar4 < 1) {
    if (((int)uVar4 < 0) &&
       (iVar8 = iVar8 + ~(uVar10 + (~uVar4 << (bVar6 & 0x1f))),
       (iVar8,-iVar7) != iVar8 + iVar7 < 0)) {
      iVar8 = iVar8 + (0x20 << (bVar6 & 0x1f));
    }
  }
  else {
    iVar8 = iVar8 + (uVar4 - 1 << (bVar6 & 0x1f)) + uVar10 + 1;
    if (iVar7 <= iVar8) {
      iVar8 = iVar8 + (-0x20 << (bVar6 & 0x1f));
    }
  }
  *param_1 = iVar8 << bVar11;
  if (param_5 != 0) {
    uVar5 = Get_dmvector();
    *param_2 = uVar5;
  }
  uVar4 = Get_motion_code();
  uVar3 = _DAT_e989f68941308b41;
  iVar7 = _DAT_b938244c89098b;
  uVar10 = 0;
  bVar6 = (byte)param_4;
  if ((param_4 != 0) && (uVar4 != 0)) {
    uVar10 = _DAT_e989f68941308b41 << (bVar6 & 0x1f);
    _DAT_8944ec2941208b44 = _DAT_8944ec2941208b44 - param_4;
    iVar8 = _DAT_4430247c8b4c0889;
    _DAT_e989f68941308b41 = uVar10;
    if (_DAT_8944ec2941208b44 < 0x19) {
      iVar9 = _DAT_8944ec2941208b44;
      if (_DAT_7fcb9038b48 < (byte *)0x1c4830fc84144) {
        do {
          pbVar1 = _DAT_7fcb9038b48 + 1;
          uVar10 = uVar10 | (uint)*_DAT_7fcb9038b48 << (0x18U - (char)iVar9 & 0x1f);
          iVar8 = iVar9 + 8;
          bVar2 = iVar9 < 0x11;
          _DAT_7fcb9038b48 = pbVar1;
          iVar9 = iVar8;
          _DAT_e989f68941308b41 = uVar10;
        } while (bVar2);
      }
      else {
        local_58 = _DAT_20244c8948098b48;
        do {
          if ((byte *)0x2d8b48cf0948 < _DAT_7fcb9038b48) {
            _DAT_e989f68941308b41 = uVar10;
            memcpy(&DAT_66666666666641eb,(void *)0x247c8300002832e8,0x800);
            if (iVar7 != 0) {
              _DAT_8894820244c8948 = local_58 + -0x800;
              local_58 = _DAT_8894820244c8948;
            }
            _DAT_7fcb9038b48 = &DAT_66666666666641eb;
          }
          pbVar1 = _DAT_7fcb9038b48 + 1;
          uVar10 = uVar10 | (uint)*_DAT_7fcb9038b48 << (0x18U - (char)iVar9 & 0x1f);
          iVar8 = iVar9 + 8;
          bVar2 = iVar9 < 0x11;
          iVar9 = iVar8;
          _DAT_7fcb9038b48 = pbVar1;
          _DAT_e989f68941308b41 = uVar10;
        } while (bVar2);
      }
    }
    _DAT_4430247c8b4c0889 = iVar8;
    uVar10 = uVar3 >> (-bVar6 & 0x1f);
  }
  iVar8 = 0x10 << (bVar6 & 0x1f);
  iVar7 = (param_1[1] >> (param_6 != 0)) >> bVar11;
  if ((int)uVar4 < 1) {
    if ((-1 < (int)uVar4) ||
       (iVar7 = iVar7 + ~(uVar10 + (~uVar4 << (bVar6 & 0x1f))),
       (iVar7,-iVar8) == iVar7 + iVar8 < 0)) goto LAB_0010163d;
    iVar8 = 0x20;
  }
  else {
    iVar7 = iVar7 + (uVar4 - 1 << (bVar6 & 0x1f)) + uVar10 + 1;
    if (iVar7 < iVar8) goto LAB_0010163d;
    iVar8 = -0x20;
  }
  iVar7 = iVar7 + (iVar8 << (bVar6 & 0x1f));
LAB_0010163d:
  param_1[1] = (iVar7 << bVar11) << (param_6 != 0);
  if (param_5 != 0) {
    uVar5 = Get_dmvector();
    param_2[1] = uVar5;
  }
  return;
}
