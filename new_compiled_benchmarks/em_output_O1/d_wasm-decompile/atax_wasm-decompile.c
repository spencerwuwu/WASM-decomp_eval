import memory env_memory;

import global stack_pointer:int;
import global memory_base:int;
import global table_base:int;
import global stderr:int;

data rodata(offset: memory_base) =
  "y\00begin dump: %s\00%0.2lf \00\0aend   dump: %s\0a\00==BEGIN DUMP_ARR"
  "AYS==\0a\00==END   DUMP_ARRAYS==\0a\00";

import function fwrite(a:int, b:int, c:int, d:int):int;

import function fiprintf(a:int, b:int, c:int):int;

import function fputc(a:int, b:int):int;

import function small_fprintf(a:int, b:int, c:int):int;

import function memset(a:int, b:int, c:int):int;

import function free(a:int);

import function legalimport_polybench_alloc_data(a:int, b:int, c:int):int;

export function wasm_call_ctors() {
}

export function wasm_apply_data_relocs() {
}

export function init_array(a:int, b:int, c:int, d:int) {
  var f:int;
  var g:int;
  var e:double;
  if (b <= 0) goto B_a;
  e = f64_convert_i32_s(b);
  f = 0;
  loop L_b {
    d[f = f]:double = f64_convert_i32_s(f) / e + 1.0;
    g = f + 1;
    f = g;
    if (g != b) continue L_b;
  }
  label B_a:
  if (a < 1) goto B_c;
  e = f64_convert_i32_s(a * 5);
  var h:int = b < 1;
  f = 0;
  loop L_d {
    g = f;
    f = 0;
    if (h) goto B_e;
    loop L_f {
      (c + g * 16800)[f = f]:double = f64_convert_i32_s((f + g) % b) / e;
      d = f + 1;
      f = d;
      if (d != b) continue L_f;
    }
    label B_e:
    g = g + 1;
    f = g;
    if (g != a) continue L_d;
  }
  label B_c:
}

export function print_array(a:int, b:int) {
  var e:int;
  var c:int = stack_pointer - 48;
  stack_pointer = c;
  var d:int = memory_base;
  fwrite(d + 42, 22, 1, e = stderr[0]:int);
  c[8]:int = d + 0;
  fiprintf(e, d + 2, c + 32);
  if (a < 1) goto B_a;
  d = 0;
  loop L_b {
    d = d;
    if (d % 20) goto B_c;
    fputc(10, e);
    label B_c:
    c[2]:double = b[d]:double;
    small_fprintf(e, memory_base + 17, c + 16);
    var f:int = d + 1;
    d = f;
    if (f != a) continue L_b;
  }
  label B_a:
  c[0]:int = (d = memory_base) + 0;
  fiprintf(e, d + 25, c);
  fwrite(d + 65, 22, 1, e);
  stack_pointer = c + 48;
}

export function kernel_atax(a:int, b:int, c:int, d:int, e:int, f:int) {
  var l:int;
  var k:int;
  if (b < 1) goto B_a;
  memset(e, 0, b << 3);
  label B_a:
  if (a < 1) goto B_b;
  var g:int = b < 1;
  var h:int = 0;
  loop L_c {
    var i:int = f + ((h = h) << 3);
    i[0]:long = 0L;
    if (g) goto B_d;
    var j:double = i[0]:double;
    k = 0;
    loop L_e {
      i[0]:double =
        (j = 
           (c + h * 16800 + (l = (k = k) << 3))[0]:double * (d + l)[0]:double +
           j);
      j = j;
      l = k + 1;
      k = l;
      if (l != b) continue L_e;
    }
    label B_d:
    k = 0;
    if (b <= 0) goto B_f;
    loop L_g {
      var m:double_ptr = e + (l = (k = k) << 3);
      m[0] = (c + h * 16800 + l)[0]:double * i[0]:double + m[0];
      l = k + 1;
      k = l;
      if (l != b) continue L_g;
    }
    label B_f:
    i = h + 1;
    h = i;
    if (i != a) continue L_c;
  }
  label B_b:
}

export function submain(a:int, b:int_ptr):int {
  var h:int;
  var k:int;
  var i:int;
  var c:int = legalfunc_polybench_alloc_data(3990000L, 8);
  var d:int = legalfunc_polybench_alloc_data(2100L, 8);
  var e:int = legalfunc_polybench_alloc_data(2100L, 8);
  var f:int = legalfunc_polybench_alloc_data(1900L, 8);
  var g:int = 0;
  loop L_a {
    d[g = g]:double = f64_convert_i32_s(g) / 2100.0 + 1.0;
    h = g + 1;
    g = h;
    if (h != 2100) continue L_a;
  }
  g = 0;
  loop L_b {
    h = g;
    g = 0;
    loop L_c {
      (c + h * 16800)[g = g]:double =
        f64_convert_i32_s((g + h) % 2100) / 9500.0;
      i = g + 1;
      g = i;
      if (i != 2100) continue L_c;
    }
    h = h + 1;
    g = h;
    if (h != 1900) continue L_b;
  }
  var j:int = memset(e, 0, 16800);
  g = 0;
  loop L_d {
    g = f + ((k = g) << 3);
    g[0]:long = 0L;
    var l:double = 0.0;
    h = 0;
    loop L_e {
      g[0]:double =
        (l = ((i = c + k * 16800) + (e = (h = h) << 3))[0]:double *
             (d + e)[0]:double +
             l);
      l = l;
      e = h + 1;
      h = e;
      if (e != 2100) continue L_e;
    }
    h = 0;
    loop L_f {
      var m:double_ptr = j + (e = (h = h) << 3);
      m[0] = (i + e)[0]:double * g[0]:double + m[0];
      e = h + 1;
      h = e;
      if (e != 2100) continue L_f;
    }
    h = k + 1;
    g = h;
    if (h != 1900) continue L_d;
  }
  if (a < 43) goto B_g;
  if ((b[0])[0]:ubyte) goto B_g;
  print_array(2100, j);
  label B_g:
  free(c);
  free(d);
  free(j);
  free(f);
  return 0;
}

function legalfunc_polybench_alloc_data(a:long, b:int):int {
  return legalimport_polybench_alloc_data(i32_wrap_i64(a),
                                          i32_wrap_i64(a >> 32L),
                                          b)
}

