import memory env_memory;

import global stack_pointer:int;
import global memory_base:int;
import global stderr:int;

data rodata(offset: memory_base) =
  "begin dump: %s\00A\00%0.2lf \00\0aend   dump: %s\0a\00==BEGIN DUMP_ARR"
  "AYS==\0a\00==END   DUMP_ARRAYS==\0a\00";

import function fwrite(a:int, b:int, c:int, d:int):int;

import function fiprintf(a:int, b:int, c:int):int;

import function fputc(a:int, b:int):int;

import function small_fprintf(a:int, b:int, c:int):int;

import function free(a:int);

import function legalimport_polybench_alloc_data(a:int, b:int, c:int):int;

export function wasm_call_ctors() {
  nop
}

export function wasm_apply_data_relocs() {
  nop
}

export function kernel_heat_3d(a:int, b:int, c:int, d:int) {
  var j:int;
  var h:int;
  var p:int;
  var q:double_ptr;
  var i:double;
  var f:int;
  var g:int;
  var l:int;
  var n:int;
  var m:int;
  var o:int;
  var k:int = b - 1;
  var r:int = b > 2;
  var s:int = 1;
  loop L_a {
    var e:int = 1;
    if (eqz(r)) goto B_b;
    loop L_c {
      n = e - 1;
      l = e + 1;
      f = 1;
      loop L_d {
        o = f - 1;
        m = f + 1;
        g = 1;
        loop L_e {
          b = g << 3;
          (b + (j = f * 960) + d + (h = e * 115200))[0]:double =
            (i = (q = (p = (h = c + h) + j) + b)[0]) +
            ((i = i * -2.0) + p[g = g + 1]:double + (q - 8)[0]:double) * 0.125 +
            (i + (b + c + l * 115200 + j)[0]:double +
             (b + c + n * 115200 + j)[0]:double) *
            0.125 +
            (i + (b + h + m * 960)[0]:double + (b + h + o * 960)[0]:double) *
            0.125;
          if (g != k) continue L_e;
        }
        f = m;
        if (f != k) continue L_d;
      }
      e = l;
      if (e != k) continue L_c;
    }
    e = 1;
    if (eqz(r)) goto B_b;
    loop L_f {
      n = e - 1;
      l = e + 1;
      f = 1;
      loop L_g {
        o = f - 1;
        g = 1;
        m = f + 1;
        loop L_h {
          b = g << 3;
          (b + (j = f * 960) + c + (h = e * 115200))[0]:double =
            (i = (q = (p = (h = d + h) + j) + b)[0]) +
            ((i = i * -2.0) + p[g = g + 1]:double + (q - 8)[0]:double) * 0.125 +
            (i + (b + d + l * 115200 + j)[0]:double +
             (b + d + n * 115200 + j)[0]:double) *
            0.125 +
            (i + (b + h + m * 960)[0]:double + (b + h + o * 960)[0]:double) *
            0.125;
          if (g != k) continue L_h;
        }
        f = m;
        if (f != k) continue L_g;
      }
      e = l;
      if (e != k) continue L_f;
    }
    label B_b:
    s = s + 1;
    if (s != 501) continue L_a;
  }
}

export function submain(a:int, b:int_ptr):int {
  var j:int;
  var d:int;
  var i:int;
  var m:double;
  var c:int;
  var g:int;
  var f:int;
  var h:int;
  var e:int = stack_pointer - 48;
  stack_pointer = e;
  var k:int = legalfunc_polybench_alloc_data(1728000L, 8);
  var n:int = legalfunc_polybench_alloc_data(1728000L, 8);
  loop L_a {
    var o:int = j + 120;
    var l:int = 0;
    loop L_b {
      f = l + o;
      c = 0;
      loop L_c {
        h = l * 960;
        g = h + n + (d = j * 115200);
        (g + (i = c << 3))[0]:double =
          (m = f64_convert_i32_s(f - c) * 10.0 / 120.0);
        d = d + k + h;
        (d + i)[0]:double = m;
        (g + (i = (h = c | 1) << 3))[0]:double =
          (m = f64_convert_i32_s(f - h) * 10.0 / 120.0);
        (d + i)[0]:double = m;
        c = c + 2;
        if (c != 120) continue L_c;
      }
      l = l + 1;
      if (l != 120) continue L_b;
    }
    j = j + 1;
    if (j != 120) continue L_a;
  }
  kernel_heat_3d(c, 120, k, n);
  if (a < 43) goto B_d;
  if ((b[0])[0]:ubyte) goto B_d;
  c = memory_base;
  fwrite(c + 42, 22, 1, d = stderr[0]:int);
  e[8]:int = c + 15;
  fiprintf(d, c, e + 32);
  g = 0;
  loop L_e {
    i = g * 14400;
    f = 0;
    loop L_f {
      h = f * 120 + i;
      c = 0;
      loop L_g {
        if (eqz((c + h) % 20)) { fputc(10, d) }
        e[2]:double = (k + g * 115200 + f * 960)[c]:double;
        small_fprintf(d, memory_base + 17, e + 16);
        c = c + 1;
        if (c != 120) continue L_g;
      }
      f = f + 1;
      if (f != 120) continue L_f;
    }
    g = g + 1;
    if (g != 120) continue L_e;
  }
  e[0]:int = (c = memory_base) + 15;
  fiprintf(d, c + 25, e);
  fwrite(c + 65, 22, 1, d);
  label B_d:
  free(k);
  stack_pointer = e + 48;
  return 0;
}

function legalfunc_polybench_alloc_data(a:long, b:int):int {
  return legalimport_polybench_alloc_data(i32_wrap_i64(a),
                                          i32_wrap_i64(a >> 32L),
                                          b)
}

