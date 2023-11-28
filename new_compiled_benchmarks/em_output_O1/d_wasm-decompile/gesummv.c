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

import function free(a:int);

import function legalimport_polybench_alloc_data(a:int, b:int, c:int):int;

export function wasm_call_ctors() {
}

export function wasm_apply_data_relocs() {
}

export function kernel_gesummv(a:int, b:double, c:double, d:int, e:int, f:int, g:int, h:int) {
  var j:int;
  var m:int;
  var n:int;
  var o:double_ptr;
  if (a < 1) goto B_a;
  var i:int = 0;
  loop L_b {
    var k:int = f + (i = (j = i) << 3);
    k[0]:long = 0L;
    var l:int = h + i;
    l[0]:long = 0L;
    i = 0;
    loop L_c {
      k[0]:double =
        (d + (m = j * 10400) + (i = (n = i) << 3))[0]:double * (o = g + i)[0] +
        k[0]:double;
      l[0]:double = (e + m + i)[0]:double * o[0] + l[0]:double;
      m = n + 1;
      i = m;
      if (m != a) continue L_c;
    }
    l[0]:double = b * k[0]:double + l[0]:double * c;
    l = j + 1;
    i = l;
    if (l != a) continue L_b;
  }
  label B_a:
}

export function submain(a:int, b:int_ptr):int {
  var j:int;
  var k:int;
  var l:int;
  var m:int;
  var n:int;
  var o:double_ptr;
  var p:double;
  var c:int = stack_pointer - 48;
  stack_pointer = c;
  var d:int = legalfunc_polybench_alloc_data(1690000L, 8);
  var e:int = legalfunc_polybench_alloc_data(1690000L, 8);
  var f:int = legalfunc_polybench_alloc_data(1300L, 8);
  var g:int = legalfunc_polybench_alloc_data(1300L, 8);
  var h:int = legalfunc_polybench_alloc_data(1300L, 8);
  var i:int = 0;
  loop L_a {
    g[j = i]:double = f64_convert_i32_s(j) / 1300.0;
    i = 0;
    loop L_b {
      (d + (k = j * 10400) + (l = (i = i) << 3))[0]:double =
        f64_convert_i32_s(((m = i * j) + 1) % 1300) / 1300.0;
      (e + k + l)[0]:double = f64_convert_i32_s((m + 2) % 1300) / 1300.0;
      k = i + 1;
      i = k;
      if (k != 1300) continue L_b;
    }
    j = j + 1;
    i = j;
    if (j != 1300) continue L_a;
  }
  i = 0;
  loop L_c {
    j = f + (i = (n = i) << 3);
    j[0]:long = 0L;
    k = h + i;
    k[0]:long = 0L;
    i = 0;
    loop L_d {
      j[0]:double =
        (d + (l = n * 10400) + (i = (m = i) << 3))[0]:double * (o = g + i)[0] +
        j[0]:double;
      k[0]:double = (p = (e + l + i)[0]:double * o[0] + k[0]:double);
      l = m + 1;
      i = l;
      if (l != 1300) continue L_d;
    }
    k[0]:double = j[0]:double * 1.5 + p * 1.2;
    j = n + 1;
    i = j;
    if (j != 1300) continue L_c;
  }
  if (a < 43) goto B_e;
  if ((b[0])[0]:ubyte) goto B_e;
  i = memory_base;
  fwrite(i + 42, 22, 1, k = stderr[0]:int);
  c[8]:int = i + 0;
  fiprintf(k, i + 2, c + 32);
  i = 0;
  loop L_f {
    i = i;
    if (i % 20) goto B_g;
    fputc(10, k);
    label B_g:
    c[2]:double = h[i]:double;
    small_fprintf(k, memory_base + 17, c + 16);
    j = i + 1;
    i = j;
    if (j != 1300) continue L_f;
  }
  c[0]:int = (i = memory_base) + 0;
  fiprintf(k, i + 25, c);
  fwrite(i + 65, 22, 1, k);
  label B_e:
  free(d);
  free(e);
  free(f);
  free(g);
  free(h);
  stack_pointer = c + 48;
  return 0;
}

function legalfunc_polybench_alloc_data(a:long, b:int):int {
  return legalimport_polybench_alloc_data(i32_wrap_i64(a),
                                          i32_wrap_i64(a >> 32L),
                                          b)
}

