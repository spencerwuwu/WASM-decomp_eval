import memory env_memory;

import global stack_pointer:int;
import global memory_base:int;
import global table_base:int;
import global stderr:int;

data rodata(offset: memory_base) =
  "begin dump: %s\00corr\00%0.2lf \00\0aend   dump: %s\0a\00==BEGIN DUMP_"
  "ARRAYS==\0a\00==END   DUMP_ARRAYS==\0a\00";

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

export function kernel_correlation(a:int, b:int, c:double, d:int, e:int, f:int, g:int) {
  var k:double_ptr;
  var l:int;
  var o:double_ptr;
  var h:int;
  var j:int;
  var n:double;
  var m:int;
  var i:int;
  h = a < 1;
  if (h) goto B_a;
  i = b < 1;
  j = 0;
  loop L_b {
    m = f + (l = (k = j) << 3);
    m[0]:long = 0L;
    if (i) goto B_c;
    n = m[0]:double;
    j = 0;
    loop L_d {
      m[0]:double = (n = (d + (j = j) * 9600 + l)[0]:double + n);
      n = n;
      o = j + 1;
      j = o;
      if (o != b) continue L_d;
    }
    label B_c:
    m[0]:double = m[0]:double / c;
    o = k + 1;
    j = o;
    if (o != a) continue L_b;
  }
  label B_a:
  if (h) goto B_e;
  h = b < 1;
  j = 0;
  loop L_f {
    j = g + (l = (i = j) << 3);
    j[0]:long = 0L;
    if (h) goto B_g;
    k = f + l;
    o = 0;
    loop L_h {
      j[0]:double =
        (n = (d + (o = o) * 9600 + l)[0]:double - k[0]) * n + j[0]:double;
      m = o + 1;
      o = m;
      if (m != b) continue L_h;
    }
    label B_g:
    j[0]:double = select_if(1.0, n = sqrt(j[0]:double / c), n <= 0.1);
    o = i + 1;
    j = o;
    if (o != a) continue L_f;
  }
  label B_e:
  if (b < 1) goto B_i;
  c = sqrt(c);
  j = 0;
  loop L_j {
    l = j;
    j = 0;
    if (a <= 0) goto B_k;
    loop L_l {
      o = d + l * 9600 + (j = (m = j) << 3);
      o[0] = (n = o[0] - (f + j)[0]:double);
      o[0] = n / c * (g + j)[0]:double;
      o = m + 1;
      j = o;
      if (o != a) continue L_l;
    }
    label B_k:
    o = l + 1;
    j = o;
    if (o != b) continue L_j;
  }
  label B_i:
  h = a + -1;
  if (a < 2) goto B_m;
  j = 0;
  loop L_n {
    k = e + (j = j) * 9600;
    (k + (l = j << 3))[0]:long = 4607182418800017408L;
    i = j + 1;
    j = i;
    if (i >= a) goto B_o;
    loop L_p {
      m = k + (f = (g = j) << 3);
      m[0]:long = 0L;
      if (b < 1) goto B_q;
      n = m[0]:double;
      j = 0;
      loop L_r {
        m[0]:double =
          (n = ((o = d + (j = j) * 9600) + l)[0]:double * (o + f)[0]:double + n);
        n = n;
        o = j + 1;
        j = o;
        if (o != b) continue L_r;
      }
      label B_q:
      (e + g * 9600 + l)[0]:double = m[0]:double;
      o = g + 1;
      j = o;
      if (o != a) continue L_p;
    }
    label B_o:
    j = i;
    if (i != h) continue L_n;
  }
  label B_m:
  (e + h * 9600)[h]:long = 4607182418800017408L;
}

export function submain(a:int, b:int_ptr):int {
  var k:int;
  var i:int;
  var c:int = stack_pointer - 48;
  stack_pointer = c;
  var d:int = legalfunc_polybench_alloc_data(1680000L, 8);
  var e:int = legalfunc_polybench_alloc_data(1440000L, 8);
  var f:int = legalfunc_polybench_alloc_data(1200L, 8);
  var g:int = legalfunc_polybench_alloc_data(1200L, 8);
  var h:int = 0;
  loop L_a {
    i = h;
    var j:double = f64_convert_i32_s(i);
    h = 0;
    loop L_b {
      (d + i * 9600)[h = h]:double = f64_convert_i32_s(h * i) / 1200.0 + j;
      k = h + 1;
      h = k;
      if (k != 1200) continue L_b;
    }
    i = i + 1;
    h = i;
    if (i != 1400) continue L_a;
  }
  kernel_correlation(1200, 1400, 1400.0, d, e, f, g);
  if (a < 43) goto B_c;
  if ((b[0])[0]:ubyte) goto B_c;
  h = memory_base;
  fwrite(h + 45, 22, 1, a = stderr[0]:int);
  c[8]:int = h + 15;
  fiprintf(a, h + 0, c + 32);
  h = 0;
  loop L_d {
    k = h;
    b = k * 1200;
    h = 0;
    loop L_e {
      h = h;
      if ((h + b) % 20) goto B_f;
      fputc(10, a);
      label B_f:
      c[2]:double = (e + k * 9600)[h]:double;
      small_fprintf(a, memory_base + 20, c + 16);
      i = h + 1;
      h = i;
      if (i != 1200) continue L_e;
    }
    i = k + 1;
    h = i;
    if (i != 1200) continue L_d;
  }
  c[0]:int = (h = memory_base) + 15;
  fiprintf(a, h + 28, c);
  fwrite(h + 68, 22, 1, a);
  label B_c:
  free(d);
  free(e);
  free(f);
  free(g);
  stack_pointer = c + 48;
  return 0;
}

function legalfunc_polybench_alloc_data(a:long, b:int):int {
  return legalimport_polybench_alloc_data(i32_wrap_i64(a),
                                          i32_wrap_i64(a >> 32L),
                                          b)
}

