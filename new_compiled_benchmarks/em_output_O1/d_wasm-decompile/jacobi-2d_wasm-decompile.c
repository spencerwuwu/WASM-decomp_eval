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

export function kernel_jacobi_2d(a:int, b:int, c:int, d:int) {
  var k:double_ptr;
  var l:int;
  var m:int;
  var h:int;
  var j:int;
  var i:int;
  if (a < 1) goto B_a;
  var e:int = b + -1;
  var f:int = b > 2;
  b = 0;
  loop L_b {
    var g:int = b;
    b = 1;
    if (eqz(f)) goto B_c;
    loop L_d {
      h = b;
      i = h + -1;
      j = h + 1;
      b = 1;
      loop L_e {
        (d + (k = h * 10400) + (b = (l = b) << 3))[0]:double =
          ((k = (m = c + k) + b)[0] + (k + -8)[0]:double + m[k = l + 1]:double +
           (c + j * 10400 + b)[0]:double +
           (c + i * 10400 + b)[0]:double) *
          0.2;
        b = k;
        if (k != e) continue L_e;
      }
      k = h + 1;
      b = k;
      if (k != e) continue L_d;
    }
    label B_c:
    b = 1;
    if (eqz(f)) goto B_f;
    loop L_g {
      h = b;
      i = h + -1;
      j = h + 1;
      b = 1;
      loop L_h {
        (c + (k = h * 10400) + (b = (l = b) << 3))[0]:double =
          ((k = (m = d + k) + b)[0] + (k + -8)[0]:double + m[k = l + 1]:double +
           (d + j * 10400 + b)[0]:double +
           (d + i * 10400 + b)[0]:double) *
          0.2;
        b = k;
        if (k != e) continue L_h;
      }
      k = h + 1;
      b = k;
      if (k != e) continue L_g;
    }
    label B_f:
    k = g + 1;
    b = k;
    if (k != a) continue L_b;
  }
  label B_a:
}

export function submain(a:int, b:int_ptr):int {
  var i:int;
  var j:int;
  var g:int;
  var c:int = stack_pointer - 48;
  stack_pointer = c;
  var d:int = legalfunc_polybench_alloc_data(1690000L, 8);
  var e:int = legalfunc_polybench_alloc_data(1690000L, 8);
  var f:int = 0;
  loop L_a {
    g = f;
    var h:double = f64_convert_i32_s(g);
    f = 0;
    loop L_b {
      (d + (i = g * 10400) + (j = (f = f) << 3))[0]:double =
        (h * f64_convert_i32_s(f + 2) + 2.0) / 1300.0;
      (e + i + j)[0]:double = (h * f64_convert_i32_s(f + 3) + 3.0) / 1300.0;
      i = f + 1;
      f = i;
      if (i != 1300) continue L_b;
    }
    i = g + 1;
    f = i;
    if (i != 1300) continue L_a;
  }
  kernel_jacobi_2d(500, 1300, d, e);
  if (a < 43) goto B_c;
  if ((b[0])[0]:ubyte) goto B_c;
  f = memory_base;
  fwrite(f + 42, 22, 1, g = stderr[0]:int);
  c[8]:int = f + 15;
  fiprintf(g, f + 0, c + 32);
  f = 0;
  loop L_d {
    j = f;
    a = j * 1300;
    f = 0;
    loop L_e {
      f = f;
      if ((f + a) % 20) goto B_f;
      fputc(10, g);
      label B_f:
      c[2]:double = (d + j * 10400)[f]:double;
      small_fprintf(g, memory_base + 17, c + 16);
      i = f + 1;
      f = i;
      if (i != 1300) continue L_e;
    }
    i = j + 1;
    f = i;
    if (i != 1300) continue L_d;
  }
  c[0]:int = (f = memory_base) + 15;
  fiprintf(g, f + 25, c);
  fwrite(f + 65, 22, 1, g);
  label B_c:
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

