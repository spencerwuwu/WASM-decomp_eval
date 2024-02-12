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

export function kernel_jacobi_1d(a:int, b:int, c:int, d:int) {
  if (a < 1) goto B_a;
  var e:int = b + -1;
  var f:int = b > 2;
  b = 0;
  loop L_b {
    var g:int = b;
    var h:double_ptr = 1;
    if (eqz(f)) goto B_c;
    loop L_d {
      (d + (h = (b = h) << 3))[0]:double =
        (((h = c + h) + -8)[0]:double + h[0] + c[b = b + 1]:double) * 0.33333;
      h = b;
      if (b != e) continue L_d;
    }
    label B_c:
    h = 1;
    if (eqz(f)) goto B_e;
    loop L_f {
      (c + (h = (b = h) << 3))[0]:double =
        (((h = d + h) + -8)[0]:double + h[0] + d[b = b + 1]:double) * 0.33333;
      h = b;
      if (b != e) continue L_f;
    }
    label B_e:
    h = g + 1;
    b = h;
    if (h != a) continue L_b;
  }
  label B_a:
}

export function submain(a:int, b:int_ptr):int {
  var g:double_ptr;
  var h:double;
  var j:int;
  var c:int = stack_pointer - 48;
  stack_pointer = c;
  var d:int = legalfunc_polybench_alloc_data(2000L, 8);
  var e:int = legalfunc_polybench_alloc_data(2000L, 8);
  var f:int = 0;
  loop L_a {
    (d + (g = (f = f) << 3))[0]:double =
      ((h = f64_convert_i32_s(f)) + 2.0) / 2000.0;
    (e + g)[0]:double = (h + 3.0) / 2000.0;
    g = f + 1;
    f = g;
    if (g != 2000) continue L_a;
  }
  f = 0;
  loop L_b {
    var i:int = f;
    j = 1;
    loop L_c {
      (e + (g = (f = j) << 3))[0]:double =
        (((g = d + g) + -8)[0]:double + g[0] + d[f = f + 1]:double) * 0.33333;
      j = f;
      g = 1;
      if (f != 1999) continue L_c;
    }
    loop L_d {
      (d + (g = (f = g) << 3))[0]:double =
        (((g = e + g) + -8)[0]:double + g[0] + e[f = f + 1]:double) * 0.33333;
      g = f;
      if (f != 1999) continue L_d;
    }
    g = i + 1;
    f = g;
    if (g != 500) continue L_b;
  }
  if (a < 43) goto B_e;
  if ((b[0])[0]:ubyte) goto B_e;
  f = memory_base;
  fwrite(f + 42, 22, 1, j = stderr[0]:int);
  c[8]:int = f + 15;
  fiprintf(j, f + 0, c + 32);
  f = 0;
  loop L_f {
    f = f;
    if (f % 20) goto B_g;
    fputc(10, j);
    label B_g:
    c[2]:double = d[f]:double;
    small_fprintf(j, memory_base + 17, c + 16);
    g = f + 1;
    f = g;
    if (g != 2000) continue L_f;
  }
  c[0]:int = (f = memory_base) + 15;
  fiprintf(j, f + 25, c);
  fwrite(f + 65, 22, 1, j);
  label B_e:
  free(d);
  free(e);
  stack_pointer = c + 48;
  return 0;
}

function legalfunc_polybench_alloc_data(a:long, b:int):int {
  return legalimport_polybench_alloc_data(i32_wrap_i64(a),
                                          i32_wrap_i64(a >> 32L),
                                          b)
}

