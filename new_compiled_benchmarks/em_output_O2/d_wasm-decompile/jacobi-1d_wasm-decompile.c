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

export function kernel_jacobi_1d(a:int, b:{ a:double, b:double }, c:int, d:int) {
  var e:int;
  var g:double_ptr;
  var h:double_ptr;
  var l:int;
  if (a > 0) {
    var i:int = b & 1;
    var j:int = b - 3;
    var k:int = b - 2 & -2;
    var m:int = b < 3;
    loop L_b {
      if (m) goto B_c;
      var f:int = 0;
      b = 1;
      if (j) {
        loop L_e {
          (d + (e = b << 3))[0]:double =
            (((g = c + e) - 8)[0]:double + g[0] + (h = c + (e = e + 8))[0]) *
            0.33333;
          (d + e)[0]:double = (g[0] + h[0] + c[b = b + 2]:double) * 0.33333;
          f = f + 2;
          if (f != k) continue L_e;
        }
      }
      if (i) {
        (d + (b = b << 3))[0]:double =
          (((b = b + c) - 8)[0]:double + b.a + b.b) * 0.33333
      }
      if (m) goto B_c;
      f = 0;
      b = 1;
      if (j) {
        loop L_h {
          (c + (e = b << 3))[0]:double =
            (((g = d + e) - 8)[0]:double + g[0] + (h = d + (e = e + 8))[0]) *
            0.33333;
          (c + e)[0]:double = (g[0] + h[0] + d[b = b + 2]:double) * 0.33333;
          f = f + 2;
          if (f != k) continue L_h;
        }
      }
      if (eqz(i)) goto B_c;
      (c + (b = b << 3))[0]:double =
        (((b = b + d) - 8)[0]:double + b.a + b.b) * 0.33333;
      label B_c:
      l = l + 1;
      if (l != a) continue L_b;
    }
  }
}

export function submain(a:int, b:int_ptr):int {
  var c:int;
  var d:int;
  var k:double;
  var h:double_ptr;
  var i:double_ptr;
  var j:int;
  var f:int = stack_pointer - 48;
  stack_pointer = f;
  var e:int = legalfunc_polybench_alloc_data(2000L, 8);
  var g:int = legalfunc_polybench_alloc_data(2000L, 8);
  loop L_a {
    (e + (d = c << 3))[0]:double =
      ((k = f64_convert_i32_s(c)) + 2.0) / 2000.0;
    (d + g)[0]:double = (k + 3.0) / 2000.0;
    c = c + 1;
    if (c != 2000) continue L_a;
  }
  loop L_b {
    c = 1;
    loop L_c {
      (g + (d = c << 3))[0]:double =
        (((h = d + e) - 8)[0]:double + h[0] + (i = e + (d = d + 8))[0]) *
        0.33333;
      (d + g)[0]:double = (h[0] + i[0] + e[c = c + 2]:double) * 0.33333;
      if (c != 1999) continue L_c;
    }
    c = 1;
    loop L_d {
      (e + (d = c << 3))[0]:double =
        (((h = d + g) - 8)[0]:double + h[0] + (i = g + (d = d + 8))[0]) *
        0.33333;
      (d + e)[0]:double = (h[0] + i[0] + g[c = c + 2]:double) * 0.33333;
      if (c != 1999) continue L_d;
    }
    j = j + 1;
    if (j != 500) continue L_b;
  }
  if (a < 43) goto B_e;
  if ((b[0])[0]:ubyte) goto B_e;
  c = memory_base;
  fwrite(c + 42, 22, 1, d = stderr[0]:int);
  f[8]:int = c + 15;
  fiprintf(d, c, f + 32);
  c = 0;
  loop L_f {
    if (eqz((c & 65535) % 20)) { fputc(10, d) }
    f[2]:double = e[c]:double;
    small_fprintf(d, memory_base + 17, f + 16);
    c = c + 1;
    if (c != 2000) continue L_f;
  }
  f[0]:int = (c = memory_base) + 15;
  fiprintf(d, c + 25, f);
  fwrite(c + 65, 22, 1, d);
  label B_e:
  free(e);
  free(g);
  stack_pointer = f + 48;
  return 0;
}

function legalfunc_polybench_alloc_data(a:long, b:int):int {
  return legalimport_polybench_alloc_data(i32_wrap_i64(a),
                                          i32_wrap_i64(a >> 32L),
                                          b)
}

