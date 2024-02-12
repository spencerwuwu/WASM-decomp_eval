import memory env_memory;

import global stack_pointer:int;
import global memory_base:int;
import global table_base:int;
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
}

export function wasm_apply_data_relocs() {
}

export function kernel_heat_3d(a:int, b:int, c:int, d:int) {
  var n:int;
  var o:int;
  var p:int;
  var q:int;
  var r:double_ptr;
  var s:double;
  var h:int;
  var k:int;
  var j:int;
  var i:int;
  var m:int;
  var l:int;
  var e:int = b + -1;
  var f:int = b > 2;
  b = 1;
  loop L_a {
    var g:int = b;
    b = 1;
    if (eqz(f)) goto B_b;
    loop L_c {
      h = b;
      i = h + -1;
      j = h + 1;
      b = 1;
      loop L_d {
        k = b;
        l = k + -1;
        m = k + 1;
        b = 1;
        loop L_e {
          (d + (n = h * 115200) + (o = k * 960) + (b = (p = b) << 3))[0]:double =
            (s = (r = (q = (n = c + n) + o) + b)[0]) +
            ((s = s * -2.0) + q[p = p + 1]:double + (r + -8)[0]:double) * 0.125 +
            (s + (c + j * 115200 + o + b)[0]:double +
             (c + i * 115200 + o + b)[0]:double) *
            0.125 +
            (s + (n + m * 960 + b)[0]:double + (n + l * 960 + b)[0]:double) *
            0.125;
          b = p;
          if (p != e) continue L_e;
        }
        o = k + 1;
        b = o;
        if (o != e) continue L_d;
      }
      o = h + 1;
      b = o;
      if (o != e) continue L_c;
    }
    label B_b:
    b = 1;
    if (eqz(f)) goto B_f;
    loop L_g {
      h = b;
      i = h + -1;
      j = h + 1;
      b = 1;
      loop L_h {
        k = b;
        l = k + -1;
        m = k + 1;
        b = 1;
        loop L_i {
          (c + (n = h * 115200) + (o = k * 960) + (b = (p = b) << 3))[0]:double =
            (s = (r = (q = (n = d + n) + o) + b)[0]) +
            ((s = s * -2.0) + q[p = p + 1]:double + (r + -8)[0]:double) * 0.125 +
            (s + (d + j * 115200 + o + b)[0]:double +
             (d + i * 115200 + o + b)[0]:double) *
            0.125 +
            (s + (n + m * 960 + b)[0]:double + (n + l * 960 + b)[0]:double) *
            0.125;
          b = p;
          if (p != e) continue L_i;
        }
        o = k + 1;
        b = o;
        if (o != e) continue L_h;
      }
      o = h + 1;
      b = o;
      if (o != e) continue L_g;
    }
    label B_f:
    o = g + 1;
    b = o;
    if (o != 501) continue L_a;
  }
}

export function submain(a:int, b:int_ptr):int {
  var i:int;
  var k:int;
  var l:int;
  var m:int;
  var n:double;
  var j:int;
  var g:int;
  var c:int = stack_pointer - 48;
  stack_pointer = c;
  var d:int = legalfunc_polybench_alloc_data(1728000L, 8);
  var e:int = legalfunc_polybench_alloc_data(1728000L, 8);
  var f:int = 0;
  loop L_a {
    g = f;
    var h:int = g + 120;
    f = 0;
    loop L_b {
      j = h + (i = f);
      f = 0;
      loop L_c {
        (e + (k = g * 115200) + (l = i * 960) + (m = (f = f) << 3))[0]:double =
          (n = f64_convert_i32_s(j - f) * 10.0 / 120.0);
        (d + k + l + m)[0]:double = n;
        k = f + 1;
        f = k;
        if (k != 120) continue L_c;
      }
      k = i + 1;
      f = k;
      if (k != 120) continue L_b;
    }
    k = g + 1;
    f = k;
    if (k != 120) continue L_a;
  }
  kernel_heat_3d(f, 120, d, e);
  if (a < 43) goto B_d;
  if ((b[0])[0]:ubyte) goto B_d;
  f = memory_base;
  fwrite(f + 42, 22, 1, m = stderr[0]:int);
  c[8]:int = f + 15;
  fiprintf(m, f + 0, c + 32);
  f = 0;
  loop L_e {
    j = f;
    g = j * 14400;
    f = 0;
    loop L_f {
      l = f;
      i = l * 120 + g;
      f = 0;
      loop L_g {
        if ((i + (f = f)) % 20) goto B_h;
        fputc(10, m);
        label B_h:
        c[2]:double = (d + j * 115200 + l * 960)[f]:double;
        small_fprintf(m, memory_base + 17, c + 16);
        k = f + 1;
        f = k;
        if (k != 120) continue L_g;
      }
      k = l + 1;
      f = k;
      if (k != 120) continue L_f;
    }
    k = j + 1;
    f = k;
    if (k != 120) continue L_e;
  }
  c[0]:int = (f = memory_base) + 15;
  fiprintf(m, f + 25, c);
  fwrite(f + 65, 22, 1, m);
  label B_d:
  free(d);
  stack_pointer = c + 48;
  return 0;
}

function legalfunc_polybench_alloc_data(a:long, b:int):int {
  return legalimport_polybench_alloc_data(i32_wrap_i64(a),
                                          i32_wrap_i64(a >> 32L),
                                          b)
}

