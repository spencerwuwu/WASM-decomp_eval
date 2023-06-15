
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
  int iVar1;
  ulong uVar2;
  int in_register_0000003c;
  int *puVar4;
  ulong uVar3;
  
  uVar3 = __nbytes & 0xffffffff;
  uVar2 = uVar3;
  if (0 < (int)__nbytes) {
    do {
      iVar1 = (int)uVar3;
      *puVar4 = *__buf;
      puVar4 = puVar4 + 1;
      __buf = (void *)((long)__buf + 1);
      uVar3 = (ulong)(iVar1 - 1);
    } while (1 < iVar1);
  }
  return uVar2;
}
void Fill_Buffer(void)

{
  memcpy((void *)0xba00000000358b48,(void *)0xdf894800000800ba,0x800);
  _DAT_58b48188948 = 0xba00000000358b48;
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
  
  uVar4 = _DAT_8941002c8d068b41;
  iVar3 = _DAT_b904244c89098b;
  uVar6 = _DAT_8941002c8d068b41 * 2;
  iVar7 = _DAT_8944ff698d440a8b + -1;
  bVar2 = _DAT_8944ff698d440a8b < 0x1a;
  _DAT_8941002c8d068b41 = uVar6;
  _DAT_8944ff698d440a8b = iVar7;
  iVar5 = _DAT_c11024448b480889;
  if (bVar2) {
    if (_DAT_7fcb9038b48 < (byte *)0x6666665373c84144) {
      do {
        pbVar1 = _DAT_7fcb9038b48 + 1;
        uVar6 = uVar6 | (uint)*_DAT_7fcb9038b48 << (0x18U - (char)iVar7 & 0x1f);
        bVar2 = iVar7 < 0x11;
        _DAT_7fcb9038b48 = pbVar1;
        _DAT_8941002c8d068b41 = uVar6;
        iVar5 = iVar7 + 8;
        iVar7 = iVar7 + 8;
      } while (bVar2);
    }
    else {
      local_40 = _DAT_8244c8948098b48;
      do {
        if ((byte *)0x3d8b4ccc0948 < _DAT_7fcb9038b48) {
          _DAT_8941002c8d068b41 = uVar6;
          memcpy(&DAT_441f0f6633eb,(void *)0x3b894c00003e4ae8,0x800);
          if (iVar3 != 0) {
            _DAT_8894808244c8948 = local_40 + -0x800;
            local_40 = _DAT_8894808244c8948;
          }
          _DAT_7fcb9038b48 = &DAT_441f0f6633eb;
        }
        pbVar1 = _DAT_7fcb9038b48 + 1;
        uVar6 = uVar6 | (uint)*_DAT_7fcb9038b48 << (0x18U - (char)iVar7 & 0x1f);
        bVar2 = iVar7 < 0x11;
        _DAT_7fcb9038b48 = pbVar1;
        _DAT_8941002c8d068b41 = uVar6;
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
  
  uVar5 = _DAT_d341c58941068b41;
  iVar4 = _DAT_b90c244c89098b;
  uVar6 = _DAT_d341c58941068b41 << ((byte)param_1 & 0x1f);
  _DAT_8944ff29413a8b44 = _DAT_8944ff29413a8b44 - param_1;
  iVar1 = _DAT_4c8b0824448b0889;
  _DAT_d341c58941068b41 = uVar6;
  if (_DAT_8944ff29413a8b44 < 0x19) {
    iVar7 = _DAT_8944ff29413a8b44;
    if (_DAT_7fcb900458b48 < (byte *)0x1f0f4f73c84144) {
      do {
        pbVar2 = _DAT_7fcb900458b48 + 1;
        uVar6 = uVar6 | (uint)*_DAT_7fcb900458b48 << (0x18U - (char)iVar7 & 0x1f);
        iVar1 = iVar7 + 8;
        bVar3 = iVar7 < 0x11;
        _DAT_7fcb900458b48 = pbVar2;
        iVar7 = iVar1;
        _DAT_d341c58941068b41 = uVar6;
      } while (bVar3);
    }
    else {
      local_38 = _DAT_10244c8948098b48;
      do {
        if ((byte *)0x1d8b48cc0948 < _DAT_7fcb900458b48) {
          _DAT_d341c58941068b41 = uVar6;
          memcpy(&DAT_508d48d889482feb,(void *)0x5d894800003cf8e8,0x800);
          if (iVar4 != 0) {
            _DAT_8894810244c8948 = local_38 + -0x800;
            local_38 = _DAT_8894810244c8948;
          }
          _DAT_7fcb900458b48 = &DAT_508d48d889482feb;
        }
        pbVar2 = _DAT_7fcb900458b48 + 1;
        uVar6 = uVar6 | (uint)*_DAT_7fcb900458b48 << (0x18U - (char)iVar7 & 0x1f);
        iVar1 = iVar7 + 8;
        bVar3 = iVar7 < 0x11;
        iVar7 = iVar1;
        _DAT_7fcb900458b48 = pbVar2;
        _DAT_d341c58941068b41 = uVar6;
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
  uVar5 = _DAT_58b4823d3 << ((byte)param_1 & 0x1f);
  _DAT_8944fd2941288b44 = _DAT_8944fd2941288b44 - param_1;
  _DAT_58b4823d3 = uVar5;
  iVar1 = _DAT_415b18c483480889;
  if (_DAT_8944fd2941288b44 < 0x19) {
    iVar6 = _DAT_8944fd2941288b44;
    if (_DAT_7fcb924048b49 < (byte *)0xf138b4373c84144) {
      do {
        pbVar2 = _DAT_7fcb924048b49 + 1;
        uVar5 = uVar5 | (uint)*_DAT_7fcb924048b49 << (0x18U - (char)iVar6 & 0x1f);
        iVar1 = iVar6 + 8;
        bVar3 = iVar6 < 0x11;
        _DAT_7fcb924048b49 = pbVar2;
        iVar6 = iVar1;
        _DAT_58b4823d3 = uVar5;
      } while (bVar3);
    }
    else {
      local_38 = _DAT_10244c8948098b48;
      do {
        if ((byte *)0x2d8b48cf0948 < _DAT_7fcb924048b49) {
          _DAT_58b4823d3 = uVar5;
          memcpy(&DAT_841f0f2e66663aeb,(void *)0x2c894900003bb8e8,0x800);
          if (iVar4 != 0) {
            _DAT_8894810244c8948 = local_38 + -0x800;
            local_38 = _DAT_8894810244c8948;
          }
          _DAT_7fcb924048b49 = &DAT_841f0f2e66663aeb;
        }
        pbVar2 = _DAT_7fcb924048b49 + 1;
        uVar5 = uVar5 | (uint)*_DAT_7fcb924048b49 << (0x18U - (char)iVar6 & 0x1f);
        iVar1 = iVar6 + 8;
        bVar3 = iVar6 < 0x11;
        iVar6 = iVar1;
        _DAT_58b4823d3 = uVar5;
        _DAT_7fcb924048b49 = pbVar2;
      } while (bVar3);
    }
  }
  _DAT_415b18c483480889 = iVar1;
  return;
}
int Get_motion_code(void)

{
  byte *pbVar1;
  byte bVar2;
  char cVar3;
  int bVar4;
  byte *pbVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint *puVar11;
  long lVar12;
  ulong uVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  long local_48;
  
  iVar15 = _DAT_482e89092c8d0e8b;
  iVar10 = _DAT_800b9240c89098b;
  puVar11 = (uint *)&DAT_482e89092c8d0e8b;
  uVar8 = _DAT_482e89092c8d0e8b * 2;
  piVar7 = (int *)&DAT_8944ff788d44028b;
  iVar14 = _DAT_8944ff788d44028b + -1;
  bVar4 = _DAT_8944ff788d44028b < 0x1a;
  _DAT_482e89092c8d0e8b = uVar8;
  _DAT_8944ff788d44028b = iVar14;
  if (bVar4) {
    lVar12 = _DAT_d8b48218b4c;
    if (pbVar5 < (byte *)0x299830fc84144) {
      do {
        pbVar1 = pbVar5 + 1;
        uRam0007fcb900458b50 = (int)((ulong)pbVar1 >> 0x38);
        uVar8 = uVar8 | (uint)*pbVar5 << (0x18U - (char)iVar14 & 0x1f);
        iVar6 = iVar14 + 8;
        bVar4 = iVar14 < 0x11;
        pbVar5 = pbVar1;
        iVar14 = iVar6;
        _DAT_482e89092c8d0e8b = uVar8;
      } while (bVar4);
    }
    else {
      do {
        if ((byte *)0x1d8b48ce0948 < pbVar5) {
          memcpy(&DAT_d88948001f0f37eb,(void *)0x5d894900003823e8,0x800);
          if (iVar10 != 0) {
            lVar12 = lVar12 + -0x800;
            _DAT_fd814196eb20894c = lVar12;
          }
          pbVar5 = &DAT_d88948001f0f37eb;
          puVar11 = (uint *)&DAT_55894901508d48;
        }
        pbVar1 = pbVar5 + 1;
        uRam0007fcb900458b50 = (int)((ulong)pbVar1 >> 0x38);
        uVar8 = uVar8 | (uint)*pbVar5 << (0x18U - (char)iVar14 & 0x1f);
        *puVar11 = uVar8;
        iVar6 = iVar14 + 8;
        bVar4 = iVar14 < 0x11;
        pbVar5 = pbVar1;
        iVar14 = iVar6;
      } while (bVar4);
    }
    piVar7 = (int *)&DAT_3108244c8b480a89;
    _DAT_3108244c8b480a89 = iVar6;
  }
  iVar10 = 0;
  if (-1 < iVar15) {
    uVar8 = *puVar11;
    if (uVar8 < 0x20000000) {
      if (uVar8 < 0xc000000) {
        if (uVar8 < 0x6000000) {
          return 0;
        }
        uVar13 = (ulong)((uVar8 >> 0x17) - 0xc);
        lVar12 = -0x2cbefe87b341f0bf;
        bVar2 = *(byte *)(uVar13 * 2 + -0x2cbefe87b341f0be);
        uVar8 = uVar8 << (bVar2 & 0x1f);
        *puVar11 = uVar8;
        iVar15 = *piVar7 - (int)(char)bVar2;
        *piVar7 = iVar15;
        iVar10 = _DAT_800b9240c89098b;
        if (iVar15 < 0x19) {
          lVar12 = _DAT_d8b48218b4c;
          if (pbVar5 < (byte *)0x382830fc84144) {
            do {
              pbVar1 = pbVar5 + 1;
              _DAT_7fcb900458b49 = (int7)((ulong)pbVar1 >> 8);
              uVar8 = uVar8 | (uint)*pbVar5 << (0x18U - (char)iVar15 & 0x1f);
              *puVar11 = uVar8;
              iVar14 = iVar15 + 8;
              bVar4 = iVar15 < 0x11;
              pbVar5 = pbVar1;
              iVar15 = iVar14;
            } while (bVar4);
          }
          else {
            do {
              if ((byte *)0x1d8b48ce0948 < pbVar5) {
                memcpy(&DAT_841f0f663feb,(void *)0x5d8948000033a1e8,0x800);
                if (iVar10 != 0) {
                  lVar12 = lVar12 + -0x800;
                  _DAT_d8b4894eb20894c = lVar12;
                }
                pbVar5 = &DAT_841f0f663feb;
                puVar11 = (uint *)&DAT_55894801508d48;
              }
              pbVar1 = pbVar5 + 1;
              _DAT_7fcb900458b49 = (int7)((ulong)pbVar1 >> 8);
              uVar8 = uVar8 | (uint)*pbVar5 << (0x18U - (char)iVar15 & 0x1f);
              *puVar11 = uVar8;
              iVar14 = iVar15 + 8;
              bVar4 = iVar15 < 0x11;
              pbVar5 = pbVar1;
              iVar15 = iVar14;
            } while (bVar4);
          }
          piVar7 = (int *)&DAT_4c08247c8b480a89;
          lVar12 = 0x44093c8d470e8b44;
          _DAT_4c08247c8b480a89 = iVar14;
        }
        uVar9 = *puVar11;
        uVar8 = uVar9 * 2;
        *puVar11 = uVar8;
        iVar15 = *piVar7;
        iVar10 = iVar15 + -1;
        *piVar7 = iVar10;
        iVar14 = _DAT_800b9240c89098b;
        if (iVar15 < 0x1a) {
          lVar12 = _DAT_d8b48218b4c;
          if (pbVar5 < (byte *)0x3a2830fc84144) {
            do {
              pbVar1 = pbVar5 + 1;
              _DAT_7fcb900458b49 = (int7)((ulong)pbVar1 >> 8);
              uVar8 = uVar8 | (uint)*pbVar5 << (0x18U - (char)iVar10 & 0x1f);
              *puVar11 = uVar8;
              iVar15 = iVar10 + 8;
              bVar4 = iVar10 < 0x11;
              pbVar5 = pbVar1;
              iVar10 = iVar15;
            } while (bVar4);
          }
          else {
            do {
              if ((byte *)0x1d8b48ce0948 < pbVar5) {
                memcpy(&DAT_441f0f663ceb,(void *)0x5d894800003301e8,0x800);
                if (iVar14 != 0) {
                  lVar12 = lVar12 + -0x800;
                  _DAT_401f0f94eb20894c = lVar12;
                }
                pbVar5 = &DAT_441f0f663ceb;
                puVar11 = (uint *)&DAT_55894801508d48;
              }
              pbVar1 = pbVar5 + 1;
              _DAT_7fcb900458b49 = (int7)((ulong)pbVar1 >> 8);
              uVar8 = uVar8 | (uint)*pbVar5 << (0x18U - (char)iVar10 & 0x1f);
              *puVar11 = uVar8;
              iVar15 = iVar10 + 8;
              bVar4 = iVar10 < 0x11;
              pbVar5 = pbVar1;
              iVar10 = iVar15;
            } while (bVar4);
          }
          lVar12 = -0x41f0beefdbb374b4;
          _DAT_4c08247c8b480889 = iVar15;
        }
      }
      else {
        uVar13 = (ulong)(uVar8 >> 0x1a);
        lVar12 = -0x2cbefe87b341f0bf;
        bVar2 = *(byte *)(uVar13 * 2 + -0x2cbefe87b341f0be);
        uVar8 = uVar8 << (bVar2 & 0x1f);
        *puVar11 = uVar8;
        iVar15 = *piVar7 - (int)(char)bVar2;
        *piVar7 = iVar15;
        iVar10 = _DAT_800b9240c89098b;
        if (iVar15 < 0x19) {
          lVar12 = _DAT_d8b48218b4c;
          if (pbVar5 < (byte *)0x40d830fc84144) {
            do {
              pbVar1 = pbVar5 + 1;
              _DAT_7fcb900458b49 = (int7)((ulong)pbVar1 >> 8);
              uVar8 = uVar8 | (uint)*pbVar5 << (0x18U - (char)iVar15 & 0x1f);
              *puVar11 = uVar8;
              iVar14 = iVar15 + 8;
              bVar4 = iVar15 < 0x11;
              pbVar5 = pbVar1;
              iVar15 = iVar14;
            } while (bVar4);
          }
          else {
            do {
              if ((byte *)0x1d8b48ce0948 < pbVar5) {
                memcpy(&DAT_358b48d8894836eb,(void *)0x5d8948000034e1e8,0x800);
                if (iVar10 != 0) {
                  lVar12 = lVar12 + -0x800;
                  _DAT_d8b4894eb20894c = lVar12;
                }
                pbVar5 = &DAT_358b48d8894836eb;
                puVar11 = (uint *)&DAT_55894801508d48;
              }
              pbVar1 = pbVar5 + 1;
              _DAT_7fcb900458b49 = (int7)((ulong)pbVar1 >> 8);
              uVar8 = uVar8 | (uint)*pbVar5 << (0x18U - (char)iVar15 & 0x1f);
              *puVar11 = uVar8;
              iVar14 = iVar15 + 8;
              bVar4 = iVar15 < 0x11;
              pbVar5 = pbVar1;
              iVar15 = iVar14;
            } while (bVar4);
          }
          piVar7 = (int *)&DAT_4c08247c8b480a89;
          lVar12 = 0x44093c8d470e8b44;
          _DAT_4c08247c8b480a89 = iVar14;
        }
        uVar9 = *puVar11;
        uVar8 = uVar9 * 2;
        *puVar11 = uVar8;
        iVar15 = *piVar7;
        iVar10 = iVar15 + -1;
        *piVar7 = iVar10;
        iVar14 = _DAT_800b9240c89098b;
        if (iVar15 < 0x1a) {
          lVar12 = _DAT_d8b48218b4c;
          if (pbVar5 < (byte *)0x10244c894cc84144) {
            do {
              pbVar1 = pbVar5 + 1;
              uRam0007fcb900458b50 = (int)((ulong)pbVar1 >> 0x38);
              uVar8 = uVar8 | (uint)*pbVar5 << (0x18U - (char)iVar10 & 0x1f);
              *puVar11 = uVar8;
              iVar15 = iVar10 + 8;
              bVar4 = iVar10 < 0x11;
              pbVar5 = pbVar1;
              iVar10 = iVar15;
            } while (bVar4);
          }
          else {
            do {
              if ((byte *)0x1d8b48ce0948 < pbVar5) {
                memcpy(&DAT_441f0f6639eb,(void *)0x5d894900003444e8,0x800);
                if (iVar14 != 0) {
                  lVar12 = lVar12 + -0x800;
                  _DAT_d8b4897eb20894c = lVar12;
                }
                pbVar5 = &DAT_441f0f6639eb;
                puVar11 = (uint *)&DAT_55894901508d48;
              }
              pbVar1 = pbVar5 + 1;
              uRam0007fcb900458b50 = (int)((ulong)pbVar1 >> 0x38);
              uVar8 = uVar8 | (uint)*pbVar5 << (0x18U - (char)iVar10 & 0x1f);
              *puVar11 = uVar8;
              iVar15 = iVar10 + 8;
              bVar4 = iVar10 < 0x11;
              pbVar5 = pbVar1;
              iVar10 = iVar15;
            } while (bVar4);
          }
          lVar12 = 0xd8b48000001bee9;
          _DAT_4c08247c8b480889 = iVar15;
        }
      }
      cVar3 = *(char *)(lVar12 + uVar13 * 2);
    }
    else {
      lVar12 = -0x1a2cfe90b341f0be;
      bVar2 = *(byte *)((ulong)(uVar8 >> 0x1d) * 2 + -0x1a2cfe90b341f0bd);
      uVar9 = uVar8 << (bVar2 & 0x1f);
      *puVar11 = uVar9;
      iVar15 = *piVar7 - (int)(char)bVar2;
      *piVar7 = iVar15;
      iVar10 = _DAT_b908244c89098b;
      if (iVar15 < 0x19) {
        pbVar5 = _DAT_7fcb924048b49;
        if (_DAT_7fcb924048b49 < (byte *)0x3db830fc84144) {
          do {
            uVar9 = uVar9 | (uint)*pbVar5 << (0x18U - (char)iVar15 & 0x1f);
            _DAT_7fcb924048b49 = pbVar5 + 1;
            *puVar11 = uVar9;
            iVar14 = iVar15 + 8;
            bVar4 = iVar15 < 0x11;
            pbVar5 = pbVar5 + 1;
            iVar15 = iVar14;
          } while (bVar4);
        }
        else {
          local_48 = _DAT_48240c8948098b48;
          do {
            if ((byte *)0x358b4ccb0947 < pbVar5) {
              memcpy(&DAT_f2e6666666641eb,(void *)0x34894d00003633e8,0x800);
              if (iVar10 != 0) {
                _DAT_eb088948240c8948 = local_48 + -0x800;
                local_48 = _DAT_eb088948240c8948;
              }
              pbVar5 = &DAT_f2e6666666641eb;
              puVar11 = (uint *)&DAT_2414894901508d48;
            }
            uVar9 = uVar9 | (uint)*pbVar5 << (0x18U - (char)iVar15 & 0x1f);
            _DAT_7fcb924048b49 = pbVar5 + 1;
            *puVar11 = uVar9;
            iVar14 = iVar15 + 8;
            bVar4 = iVar15 < 0x11;
            pbVar5 = pbVar5 + 1;
            iVar15 = iVar14;
          } while (bVar4);
        }
        piVar7 = (int *)&DAT_3d8b480a89;
        lVar12 = 0x44003c8d47068b44;
        _DAT_3d8b480a89 = iVar14;
      }
      uVar9 = *puVar11;
      uVar16 = uVar9 * 2;
      *puVar11 = uVar16;
      iVar15 = *piVar7;
      iVar10 = iVar15 + -1;
      *piVar7 = iVar10;
      iVar14 = _DAT_b908244c89098b;
      if (iVar15 < 0x1a) {
        pbVar5 = _DAT_7fcb924048b49;
        if (_DAT_7fcb924048b49 < (byte *)0x102444894cc84144) {
          do {
            uVar16 = uVar16 | (uint)*pbVar5 << (0x18U - (char)iVar10 & 0x1f);
            _DAT_7fcb924048b49 = pbVar5 + 1;
            *puVar11 = uVar16;
            iVar15 = iVar10 + 8;
            bVar4 = iVar10 < 0x11;
            pbVar5 = pbVar5 + 1;
            iVar10 = iVar15;
          } while (bVar4);
        }
        else {
          local_48 = _DAT_48240c8948098b48;
          do {
            if ((byte *)0x358b4ccb0947 < pbVar5) {
              memcpy(&DAT_841f0f2e663deb,(void *)0x34894d00003584e8,0x800);
              if (iVar14 != 0) {
                _DAT_eb088948240c8948 = local_48 + -0x800;
                local_48 = _DAT_eb088948240c8948;
              }
              pbVar5 = &DAT_841f0f2e663deb;
              puVar11 = (uint *)&DAT_2414894901508d48;
            }
            uVar16 = uVar16 | (uint)*pbVar5 << (0x18U - (char)iVar10 & 0x1f);
            _DAT_7fcb924048b49 = pbVar5 + 1;
            *puVar11 = uVar16;
            iVar15 = iVar10 + 8;
            bVar4 = iVar10 < 0x11;
            pbVar5 = pbVar5 + 1;
            iVar10 = iVar15;
          } while (bVar4);
        }
        lVar12 = -0x41f0bdefdbbb74b4;
        _DAT_3d8b480889 = iVar15;
      }
      cVar3 = *(char *)(lVar12 + (ulong)(uVar8 >> 0x1d) * 2);
    }
    iVar10 = -(int)cVar3;
    if (-1 < (int)uVar9) {
      iVar10 = (int)cVar3;
    }
  }
  return iVar10;
}
uint Get_dmvector(void)

{
  int iVar1;
  int bVar2;
  byte *pbVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  int iVar9;
  int iVar10;
  long lVar11;
  
  iVar1 = _DAT_482e89122c8d168b;
  iVar10 = _DAT_b90c244c89098b;
  puVar8 = (uint *)&DAT_482e89122c8d168b;
  uVar6 = _DAT_482e89122c8d168b * 2;
  piVar5 = (int *)&DAT_8944ff688d44018b;
  iVar9 = _DAT_8944ff688d44018b + -1;
  bVar2 = _DAT_8944ff688d44018b < 0x1a;
  _DAT_482e89122c8d168b = uVar6;
  _DAT_8944ff688d44018b = iVar9;
  if (bVar2) {
    pbVar3 = _DAT_7fcb9078b49;
    lVar11 = _DAT_d8b48318b4c;
    if (_DAT_7fcb9078b49 < (byte *)0xd3830fc84144) {
      do {
        pbVar3 = _DAT_7fcb9078b49 + 1;
        uVar6 = uVar6 | (uint)*_DAT_7fcb9078b49 << (0x18U - (char)iVar9 & 0x1f);
        iVar4 = iVar9 + 8;
        bVar2 = iVar9 < 0x11;
        _DAT_7fcb9078b49 = pbVar3;
        iVar9 = iVar4;
        _DAT_482e89122c8d168b = uVar6;
      } while (bVar2);
    }
    else {
      do {
        if ((byte *)0x1d8b48cc0948 < pbVar3) {
          memcpy(&DAT_841f0f663ceb,(void *)0x1f894900003134e8,0x800);
          if (iVar10 != 0) {
            lVar11 = lVar11 + -0x800;
            _DAT_d8b4897eb30894c = lVar11;
          }
          pbVar3 = &DAT_841f0f663ceb;
          puVar8 = (uint *)&DAT_f17894901508d48;
        }
        uVar6 = uVar6 | (uint)*pbVar3 << (0x18U - (char)iVar9 & 0x1f);
        _DAT_7fcb9078b49 = pbVar3 + 1;
        *puVar8 = uVar6;
        iVar4 = iVar9 + 8;
        bVar2 = iVar9 < 0x11;
        pbVar3 = pbVar3 + 1;
        iVar9 = iVar4;
      } while (bVar2);
    }
    piVar5 = (int *)&DAT_548b48c189480889;
    _DAT_548b48c189480889 = iVar4;
  }
  uVar6 = 0;
  if (iVar1 < 0) {
    uVar6 = *puVar8;
    uVar7 = uVar6 * 2;
    *puVar8 = uVar7;
    iVar1 = *piVar5;
    iVar10 = iVar1 + -1;
    *piVar5 = iVar10;
    iVar9 = _DAT_b90c244c89098b;
    iVar4 = _DAT_c11024448b480889;
    if (iVar1 < 0x1a) {
      pbVar3 = _DAT_7fcb9078b49;
      lVar11 = _DAT_d8b48318b4c;
      if (_DAT_7fcb9078b49 < (byte *)0xf4830fc84144) {
        do {
          uVar7 = uVar7 | (uint)*pbVar3 << (0x18U - (char)iVar10 & 0x1f);
          _DAT_7fcb9078b49 = pbVar3 + 1;
          *puVar8 = uVar7;
          bVar2 = iVar10 < 0x11;
          pbVar3 = pbVar3 + 1;
          iVar4 = iVar10 + 8;
          iVar10 = iVar10 + 8;
        } while (bVar2);
      }
      else {
        do {
          if ((byte *)0x1d8b48cc0948 < pbVar3) {
            memcpy(&DAT_841f0f3beb,(void *)0x1f894900003094e8,0x800);
            if (iVar9 != 0) {
              lVar11 = lVar11 + -0x800;
              _DAT_801f0f97eb30894c = lVar11;
            }
            pbVar3 = &DAT_841f0f3beb;
            puVar8 = (uint *)&DAT_f17894901508d48;
          }
          uVar7 = uVar7 | (uint)*pbVar3 << (0x18U - (char)iVar10 & 0x1f);
          _DAT_7fcb9078b49 = pbVar3 + 1;
          *puVar8 = uVar7;
          bVar2 = iVar10 < 0x11;
          pbVar3 = pbVar3 + 1;
          iVar4 = iVar10 + 8;
          iVar10 = iVar10 + 8;
        } while (bVar2);
      }
    }
    _DAT_c11024448b480889 = iVar4;
    uVar6 = (int)uVar6 >> 0x1f | 1;
  }
  return uVar6;
}
void motion_vectors(long param_1,int8 param_2,long param_3,int param_4,int param_5,
                   uint param_6,int param_7,int param_8,uint param_9,
                   int param_10)

{
  int bVar1;
  int iVar2;
  byte *pbVar3;
  int iVar4;
  long lVar5;
  int *piVar6;
  uint uVar7;
  uint *puVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  long lVar12;
  long local_68;
  
  uVar9 = _DAT_89413f2c8d388b41;
  uVar7 = _DAT_4400248d47078b44;
  iVar11 = _DAT_b920244c89098b;
  iVar10 = _DAT_b910244c89098b;
  if (param_5 == 1) {
    if ((param_6 | param_9) == 0) {
      uVar7 = _DAT_89413f2c8d388b41 * 2;
      iVar10 = _DAT_45ff708d44018b41 + -1;
      bVar1 = _DAT_45ff708d44018b41 < 0x1a;
      iVar4 = _DAT_9824bc8b440889;
      _DAT_45ff708d44018b41 = iVar10;
      _DAT_89413f2c8d388b41 = uVar7;
      if (bVar1) {
        if (_DAT_7fcb9038b48 < (byte *)0x38246c894cc84144) {
          do {
            pbVar3 = _DAT_7fcb9038b48 + 1;
            uVar7 = uVar7 | (uint)*_DAT_7fcb9038b48 << (0x18U - (char)iVar10 & 0x1f);
            bVar1 = iVar10 < 0x11;
            _DAT_7fcb9038b48 = pbVar3;
            iVar4 = iVar10 + 8;
            _DAT_89413f2c8d388b41 = uVar7;
            iVar10 = iVar10 + 8;
          } while (bVar1);
        }
        else {
          local_68 = _DAT_10244c8948098b48;
          do {
            if ((byte *)0x258b4ccf0948 < _DAT_7fcb9038b48) {
              _DAT_89413f2c8d388b41 = uVar7;
              memcpy(&DAT_6666666666663feb,(void *)0x23894c00002b44e8,0x800);
              if (iVar11 != 0) {
                _DAT_8894810244c8948 = local_68 + -0x800;
                local_68 = _DAT_8894810244c8948;
              }
              _DAT_7fcb9038b48 = &DAT_6666666666663feb;
            }
            pbVar3 = _DAT_7fcb9038b48 + 1;
            uVar7 = uVar7 | (uint)*_DAT_7fcb9038b48 << (0x18U - (char)iVar10 & 0x1f);
            bVar1 = iVar10 < 0x11;
            _DAT_7fcb9038b48 = pbVar3;
            iVar4 = iVar10 + 8;
            _DAT_89413f2c8d388b41 = uVar7;
            iVar10 = iVar10 + 8;
          } while (bVar1);
        }
      }
      _DAT_9824bc8b440889 = iVar4;
      *(uint *)(param_3 + (long)param_4 * 4) = uVar9 >> 0x1f;
      *(uint *)(param_3 + 8 + (long)param_4 * 4) = uVar9 >> 0x1f;
    }
    lVar5 = (long)param_4;
    motion_vector(lVar5 * 8 + param_1,param_2,param_7,param_8,param_9,param_10,0);
    *(int8 *)(param_1 + 0x10 + lVar5 * 8) = *(int8 *)(param_1 + lVar5 * 8);
  }
  else {
    puVar8 = (uint *)&DAT_4400248d47078b44;
    uVar9 = _DAT_4400248d47078b44 * 2;
    piVar6 = (int *)&DAT_8944ff708d44038b;
    iVar11 = _DAT_8944ff708d44038b + -1;
    bVar1 = _DAT_8944ff708d44038b < 0x1a;
    _DAT_4400248d47078b44 = uVar9;
    _DAT_8944ff708d44038b = iVar11;
    if (bVar1) {
      pbVar3 = _DAT_7fcb900458b48;
      lVar5 = _DAT_d8b48398b4c;
      if (_DAT_7fcb900458b48 < (byte *)0x1a3830fc84144) {
        do {
          pbVar3 = _DAT_7fcb900458b48 + 1;
          uVar9 = uVar9 | (uint)*_DAT_7fcb900458b48 << (0x18U - (char)iVar11 & 0x1f);
          iVar4 = iVar11 + 8;
          bVar1 = iVar11 < 0x11;
          _DAT_7fcb900458b48 = pbVar3;
          _DAT_4400248d47078b44 = uVar9;
          iVar11 = iVar4;
        } while (bVar1);
      }
      else {
        do {
          if ((byte *)0x2d8b4ccb0947 < pbVar3) {
            memcpy(&DAT_841f0f3eeb,(void *)0x6d894c00002c91e8,0x800);
            if (iVar10 != 0) {
              lVar5 = lVar5 + -0x800;
              _DAT_d8b4893eb38894c = lVar5;
            }
            pbVar3 = &DAT_841f0f3eeb;
            puVar8 = (uint *)&DAT_55894801508d48;
          }
          uVar9 = uVar9 | (uint)*pbVar3 << (0x18U - (char)iVar11 & 0x1f);
          _DAT_7fcb900458b48 = pbVar3 + 1;
          *puVar8 = uVar9;
          iVar4 = iVar11 + 8;
          bVar1 = iVar11 < 0x11;
          pbVar3 = pbVar3 + 1;
          iVar11 = iVar4;
        } while (bVar1);
      }
      piVar6 = (int *)&DAT_9824bc8b440b89;
      _DAT_9824bc8b440b89 = iVar4;
    }
    lVar5 = (long)param_4;
    *(uint *)(param_3 + lVar5 * 4) = uVar7 >> 0x1f;
    motion_vector(lVar5 * 8 + param_1,param_2,param_7,param_8,param_9,param_10,0);
    uVar9 = _DAT_894412348d44178b;
    puVar8 = (uint *)&DAT_894412348d44178b;
    uVar7 = _DAT_894412348d44178b * 2;
    iVar11 = *piVar6;
    iVar10 = iVar11 + -1;
    _DAT_894412348d44178b = uVar7;
    *piVar6 = iVar10;
    iVar4 = _DAT_b910244c89098b;
    iVar2 = _DAT_98248c8b440889;
    if (iVar11 < 0x1a) {
      pbVar3 = _DAT_7fcb900458b48;
      lVar12 = _DAT_d8b48398b4c;
      if (_DAT_7fcb900458b48 < (byte *)0x145830fc84144) {
        do {
          pbVar3 = _DAT_7fcb900458b48 + 1;
          uVar7 = uVar7 | (uint)*_DAT_7fcb900458b48 << (0x18U - (char)iVar10 & 0x1f);
          bVar1 = iVar10 < 0x11;
          _DAT_7fcb900458b48 = pbVar3;
          iVar2 = iVar10 + 8;
          _DAT_894412348d44178b = uVar7;
          iVar10 = iVar10 + 8;
        } while (bVar1);
      }
      else {
        do {
          if ((byte *)0x258b4ccb0947 < pbVar3) {
            memcpy(&DAT_894c00401f0f3aeb,(void *)0x65894c00002bf1e8,0x800);
            if (iVar4 != 0) {
              lVar12 = lVar12 + -0x800;
              _DAT_d8b4893eb38894c = lVar12;
            }
            pbVar3 = &DAT_894c00401f0f3aeb;
            puVar8 = (uint *)&DAT_55894801508d48;
          }
          uVar7 = uVar7 | (uint)*pbVar3 << (0x18U - (char)iVar10 & 0x1f);
          _DAT_7fcb900458b48 = pbVar3 + 1;
          *puVar8 = uVar7;
          bVar1 = iVar10 < 0x11;
          pbVar3 = pbVar3 + 1;
          iVar2 = iVar10 + 8;
          iVar10 = iVar10 + 8;
        } while (bVar1);
      }
    }
    _DAT_98248c8b440889 = iVar2;
    *(uint *)(param_3 + 8 + lVar5 * 4) = uVar9 >> 0x1f;
    motion_vector(param_1 + lVar5 * 8 + 0x10,param_2,param_7,param_8,param_9,param_10,0);
  }
  return;
}
void motion_vector(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,
                  int param_7)

{
  int bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int uVar5;
  byte *pbVar6;
  byte bVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  long local_60;
  
  uVar3 = Get_motion_code();
  uVar2 = _DAT_e98944fe89413e8b;
  iVar4 = _DAT_b914244c89098b;
  uVar10 = 0;
  if ((param_3 != 0) && (uVar3 != 0)) {
    uVar10 = _DAT_e98944fe89413e8b << ((byte)param_3 & 0x1f);
    _DAT_8944ec2945208b44 = _DAT_8944ec2945208b44 - param_3;
    iVar8 = _DAT_8b30245c8b480889;
    _DAT_e98944fe89413e8b = uVar10;
    if (_DAT_8944ec2945208b44 < 0x19) {
      iVar9 = _DAT_8944ec2945208b44;
      if (_DAT_7fcb900458b48 < (byte *)0x28c830fc84144) {
        do {
          pbVar6 = _DAT_7fcb900458b48 + 1;
          uVar10 = uVar10 | (uint)*_DAT_7fcb900458b48 << (0x18U - (char)iVar9 & 0x1f);
          iVar8 = iVar9 + 8;
          bVar1 = iVar9 < 0x11;
          _DAT_7fcb900458b48 = pbVar6;
          iVar9 = iVar8;
          _DAT_e98944fe89413e8b = uVar10;
        } while (bVar1);
      }
      else {
        local_60 = _DAT_18244c8948098b48;
        do {
          pbVar6 = _DAT_7fcb900458b48;
          if (((byte *)0x3d8b48c80948 < _DAT_7fcb900458b48) &&
             (_DAT_e98944fe89413e8b = uVar10,
             memcpy(&DAT_f3eeb202444894c,(void *)0x2746e8fd8949,0x800),
             pbVar6 = &DAT_f3eeb202444894c, iVar4 != 0)) {
            _DAT_8894818244c8948 = local_60 + -0x800;
            local_60 = _DAT_8894818244c8948;
          }
          _DAT_7fcb900458b48 = pbVar6 + 1;
          uVar10 = uVar10 | (uint)*pbVar6 << (0x18U - (char)iVar9 & 0x1f);
          iVar8 = iVar9 + 8;
          bVar1 = iVar9 < 0x11;
          iVar9 = iVar8;
          _DAT_e98944fe89413e8b = uVar10;
        } while (bVar1);
      }
    }
    _DAT_8b30245c8b480889 = iVar8;
    uVar10 = uVar2 >> (-(byte)param_3 & 0x1f);
  }
  bVar7 = (byte)(param_3 % 0x20);
  iVar8 = 0x10 << (bVar7 & 0x1f);
  iVar4 = *param_1 >> (param_7 != 0);
  if ((int)uVar3 < 1) {
    if (((int)uVar3 < 0) &&
       (iVar4 = iVar4 + ~(uVar10 + (~uVar3 << (bVar7 & 0x1f))),
       (iVar4,-iVar8) != iVar4 + iVar8 < 0)) {
      iVar8 = 0x20;
      goto LAB_00101642;
    }
  }
  else {
    iVar4 = iVar4 + (uVar3 - 1 << (bVar7 & 0x1f)) + uVar10 + 1;
    if (iVar8 <= iVar4) {
      iVar8 = -0x20;
LAB_00101642:
      iVar4 = iVar4 + (iVar8 << (bVar7 & 0x1f));
    }
  }
  *param_1 = iVar4 << (param_7 != 0);
  if (param_5 != 0) {
    uVar5 = Get_dmvector();
    *param_2 = uVar5;
  }
  uVar3 = Get_motion_code();
  uVar2 = _DAT_e18944fd89413e8b;
  iVar4 = _DAT_b914244c89098b;
  uVar10 = 0;
  bVar7 = (byte)param_4;
  if ((param_4 != 0) && (uVar3 != 0)) {
    uVar10 = _DAT_e18944fd89413e8b << (bVar7 & 0x1f);
    _DAT_2941218b44e0894c = _DAT_2941218b44e0894c - param_4;
    iVar8 = _DAT_8b30245c8b480889;
    _DAT_e18944fd89413e8b = uVar10;
    if (_DAT_2941218b44e0894c < 0x19) {
      iVar9 = _DAT_2941218b44e0894c;
      if (_DAT_7fcb9068b49 < (byte *)0x1d5830fc84144) {
        do {
          pbVar6 = _DAT_7fcb9068b49 + 1;
          uVar10 = uVar10 | (uint)*_DAT_7fcb9068b49 << (0x18U - (char)iVar9 & 0x1f);
          iVar8 = iVar9 + 8;
          bVar1 = iVar9 < 0x11;
          _DAT_7fcb9068b49 = pbVar6;
          iVar9 = iVar8;
          _DAT_e18944fd89413e8b = uVar10;
        } while (bVar1);
      }
      else {
        local_60 = _DAT_18244c8948098b48;
        do {
          if ((byte *)0x3d8b4ccb0947 < _DAT_7fcb9068b49) {
            _DAT_e18944fd89413e8b = uVar10;
            memcpy(&DAT_894c00401f0f36eb,(void *)0x3e894d00002692e8,0x800);
            if (iVar4 != 0) {
              _DAT_8894818244c8948 = local_60 + -0x800;
              local_60 = _DAT_8894818244c8948;
            }
            _DAT_7fcb9068b49 = &DAT_894c00401f0f36eb;
          }
          pbVar6 = _DAT_7fcb9068b49 + 1;
          uVar10 = uVar10 | (uint)*_DAT_7fcb9068b49 << (0x18U - (char)iVar9 & 0x1f);
          iVar8 = iVar9 + 8;
          bVar1 = iVar9 < 0x11;
          iVar9 = iVar8;
          _DAT_7fcb9068b49 = pbVar6;
          _DAT_e18944fd89413e8b = uVar10;
        } while (bVar1);
      }
    }
    _DAT_8b30245c8b480889 = iVar8;
    uVar10 = uVar2 >> (-bVar7 & 0x1f);
  }
  if (param_6 != 0) {
    param_1[1] = param_1[1] >> 1;
  }
  iVar8 = 0x10 << (bVar7 & 0x1f);
  iVar4 = param_1[1] >> (param_7 != 0);
  if ((int)uVar3 < 1) {
    if ((-1 < (int)uVar3) ||
       (iVar4 = iVar4 + ~(uVar10 + (~uVar3 << (bVar7 & 0x1f))),
       (iVar4,-iVar8) == iVar4 + iVar8 < 0)) goto LAB_001017f6;
    iVar8 = 0x20;
  }
  else {
    iVar4 = iVar4 + (uVar3 - 1 << (bVar7 & 0x1f)) + uVar10 + 1;
    if (iVar4 < iVar8) goto LAB_001017f6;
    iVar8 = -0x20;
  }
  iVar4 = iVar4 + (iVar8 << (bVar7 & 0x1f));
LAB_001017f6:
  param_1[1] = (iVar4 << (param_7 != 0)) << (param_6 != 0);
  if (param_5 != 0) {
    uVar5 = Get_dmvector();
    param_2[1] = uVar5;
  }
  return;
}
