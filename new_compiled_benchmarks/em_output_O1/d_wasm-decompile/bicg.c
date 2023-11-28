import memory env_memory;

import global stack_pointer:int;
import global memory_base:int;
import global table_base:int;
import global stderr:int;

data rodata(offset: memory_base) =
  "begin dump: %s\00q\00%0.2lf \00\0aend   dump: %s\0a\00==BEGIN DUMP_ARR"
  "AYS==\0a\00==END   DUMP_ARRAYS==\0a\00";

import function memset(a:int, b:int, c:int):int;

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

export function kernel_bicg(a:int, b:int, c:int, d:int, e:int, f:int, g:int) {
  var j:int;
  var m:int;
  var o:double_ptr;
  if (a < 1) goto B_a;
  memset(d, 0, a << 3);
  label B_a:
  if (b < 1) goto B_b;
  var h:int = a < 1;
  var i:int = 0;
  loop L_c {
    var k:int = e + (i = (j = i) << 3);
    k[0]:long = 0L;
    if (h) goto B_d;
    var l:double_ptr = g + i;
    i = 0;
    loop L_e {
      var n:double_ptr = d + (i = (m = i) << 3);
      n[0] = l[0] * (o = c + j * 15200 + i)[0] + n[0];
      k[0]:double = o[0] * (f + i)[0]:double + k[0]:double;
      m = m + 1;
      i = m;
      if (m != a) continue L_e;
    }
    label B_d:
    k = j + 1;
    i = k;
    if (k != b) continue L_c;
  }
  label B_b:
}

export function submain(a:int, b:int_ptr):int {
  var j:int;
  var m:int;
  var o:double_ptr;
  var k:int;
  var c:int = stack_pointer - 96;
  stack_pointer = c;
  var d:int = legalfunc_polybench_alloc_data(3990000L, 8);
  var e:double_ptr = legalfunc_polybench_alloc_data(1900L, 8);
  var f:int = legalfunc_polybench_alloc_data(2100L, 8);
  var g:int = legalfunc_polybench_alloc_data(1900L, 8);
  var h:int = legalfunc_polybench_alloc_data(2100L, 8);
  var i:int = 0;
  loop L_a {
    g[i = i]:double = f64_convert_i32_s(i) / 1900.0;
    j = i + 1;
    i = j;
    if (j != 1900) continue L_a;
  }
  i = 0;
  loop L_b {
    h[j = i]:double = f64_convert_i32_s(j) / 2100.0;
    k = 0;
    loop L_c {
      (d + j * 15200)[i = k]:double =
        f64_convert_i32_s((i = i + 1) * j % 2100) / 2100.0;
      k = i;
      if (i != 1900) continue L_c;
    }
    j = j + 1;
    i = j;
    if (j != 2100) continue L_b;
  }
  var l:int = memset(e, 0, 15200);
  i = 0;
  loop L_d {
    j = f + (i = (m = i) << 3);
    j[0]:long = 0L;
    var n:double_ptr = h + i;
    i = 0;
    loop L_e {
      e = l + (i = (k = i) << 3);
      e[0] = n[0] * (o = d + m * 15200 + i)[0] + e[0];
      j[0]:double = o[0] * (g + i)[0]:double + j[0]:double;
      k = k + 1;
      i = k;
      if (k != 1900) continue L_e;
    }
    j = m + 1;
    i = j;
    if (j != 2100) continue L_d;
  }
  if (a < 43) goto B_f;
  if ((b[0])[0]:ubyte) goto B_f;
  j = memory_base;
  fwrite(j + 42, 22, 1, i = stderr[0]:int);
  c[20]:int = j + 13;
  fiprintf(i, j + 0, c + 80);
  j = 0;
  loop L_g {
    j = j;
    if (j % 20) goto B_h;
    fputc(10, i);
    label B_h:
    c[8]:double = l[j]:double;
    small_fprintf(i, memory_base + 17, c + 64);
    k = j + 1;
    j = k;
    if (k != 1900) continue L_g;
  }
  c[12]:int = (j = memory_base) + 13;
  fiprintf(i, j + 25, c + 48);
  c[8]:int = j + 15;
  fiprintf(i, j + 0, c + 32);
  j = 0;
  loop L_i {
    j = j;
    if (j % 20) goto B_j;
    fputc(10, i);
    label B_j:
    c[2]:double = f[j]:double;
    small_fprintf(i, memory_base + 17, c + 16);
    k = j + 1;
    j = k;
    if (k != 2100) continue L_i;
  }
  c[0]:int = (j = memory_base) + 15;
  fiprintf(i, j + 25, c);
  fwrite(j + 65, 22, 1, i);
  label B_f:
  free(d);
  free(l);
  free(f);
  free(g);
  free(h);
  stack_pointer = c + 96;
  return 0;
}

function legalfunc_polybench_alloc_data(a:long, b:int):int {
  return legalimport_polybench_alloc_data(i32_wrap_i64(a),
                                          i32_wrap_i64(a >> 32L),
                                          b)
}

