import memory env_memory;

import global stack_pointer:int;
import global memory_base:int;
import global table_base:int;
import global stderr:int;

data rodata(offset: memory_base) =
  "cov\00begin dump: %s\00%0.2lf \00\0aend   dump: %s\0a\00==BEGIN DUMP_A"
  "RRAYS==\0a\00==END   DUMP_ARRAYS==\0a\00";

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

export function kernel_covariance(a:int, b:int, c:double, d:int, e:int, f:int) {
  var i:int;
  var j:int;
  var m:int;
  var h:int;
  var k:int;
  var g:int;
  var l:double;
  if (a < 1) goto B_a;
  g = b < 1;
  h = 0;
  loop L_b {
    k = f + (j = (i = h) << 3);
    k[0]:long = 0L;
    if (g) goto B_c;
    l = k[0]:double;
    h = 0;
    loop L_d {
      k[0]:double = (l = (d + (h = h) * 9600 + j)[0]:double + l);
      l = l;
      m = h + 1;
      h = m;
      if (m != b) continue L_d;
    }
    label B_c:
    k[0]:double = k[0]:double / c;
    m = i + 1;
    h = m;
    if (m != a) continue L_b;
  }
  label B_a:
  if (b < 1) goto B_e;
  h = 0;
  loop L_f {
    j = h;
    h = 0;
    if (a <= 0) goto B_g;
    loop L_h {
      k = d + j * 9600 + (m = (h = h) << 3);
      k[0]:double = k[0]:double - (f + m)[0]:double;
      m = h + 1;
      h = m;
      if (m != a) continue L_h;
    }
    label B_g:
    m = j + 1;
    h = m;
    if (m != b) continue L_f;
  }
  label B_e:
  if (a < 1) goto B_i;
  c = c + -1.0;
  g = b < 1;
  h = 0;
  loop L_j {
    j = h;
    h = j;
    loop L_k {
      k = e + j * 9600 + (f = (i = h) << 3);
      k[0]:long = 0L;
      if (g) goto B_l;
      l = k[0]:double;
      h = 0;
      loop L_m {
        k[0]:double =
          (l = (m = d + (h = h) * 9600)[j]:double * (m + f)[0]:double + l);
        l = l;
        m = h + 1;
        h = m;
        if (m != b) continue L_m;
      }
      label B_l:
      k[0]:double = (l = k[0]:double / c);
      (e + i * 9600)[j]:double = l;
      m = i + 1;
      h = m;
      if (m < a) continue L_k;
    }
    m = j + 1;
    h = m;
    if (m != a) continue L_j;
  }
  label B_i:
}

export function submain(a:int, b:int_ptr):int {
  var j:int;
  var k:int;
  var l:int;
  var h:int;
  var i:double;
  var m:double;
  var n:int;
  var o:int;
  var c:int = stack_pointer - 48;
  stack_pointer = c;
  var d:int = legalfunc_polybench_alloc_data(1680000L, 8);
  var e:int = legalfunc_polybench_alloc_data(1440000L, 8);
  var f:int = legalfunc_polybench_alloc_data(1200L, 8);
  var g:int = 0;
  loop L_a {
    h = g;
    i = f64_convert_i32_s(h);
    g = 0;
    loop L_b {
      (d + h * 9600)[g = g]:double = i * f64_convert_i32_s(g) / 1200.0;
      j = g + 1;
      g = j;
      if (j != 1200) continue L_b;
    }
    j = h + 1;
    g = j;
    if (j != 1400) continue L_a;
  }
  g = 0;
  loop L_c {
    h = f + (l = (k = g) << 3);
    h[0]:long = 0L;
    i = 0.0;
    g = 0;
    loop L_d {
      h[0]:double = (m = i + (d + (g = g) * 9600 + l)[0]:double);
      i = m;
      j = g + 1;
      g = j;
      if (j != 1400) continue L_d;
    }
    h[0]:double = m / 1400.0;
    j = k + 1;
    g = j;
    if (j != 1200) continue L_c;
  }
  g = 0;
  loop L_e {
    l = g;
    g = 0;
    loop L_f {
      h = d + l * 9600 + (j = (g = g) << 3);
      h[0]:double = h[0]:double - (f + j)[0]:double;
      j = g + 1;
      g = j;
      if (j != 1200) continue L_f;
    }
    j = l + 1;
    g = j;
    if (j != 1400) continue L_e;
  }
  g = 0;
  loop L_g {
    l = g;
    g = l;
    loop L_h {
      h = e + l * 9600 + (k = (n = g) << 3);
      h[0]:long = 0L;
      i = 0.0;
      g = 0;
      loop L_i {
        h[0]:double =
          (m = ((j = d + (g = g) * 9600) + (o = l << 3))[0]:double *
               (j + k)[0]:double +
               i);
        i = m;
        j = g + 1;
        g = j;
        if (j != 1400) continue L_i;
      }
      h[0]:double = (i = m / 1399.0);
      (e + n * 9600 + o)[0]:double = i;
      j = n + 1;
      g = j;
      if (j != 1200) continue L_h;
    }
    j = l + 1;
    g = j;
    if (j != 1200) continue L_g;
  }
  if (a < 43) goto B_j;
  if ((b[0])[0]:ubyte) goto B_j;
  g = memory_base;
  fwrite(g + 44, 22, 1, l = stderr[0]:int);
  c[8]:int = g + 0;
  fiprintf(l, g + 4, c + 32);
  g = 0;
  loop L_k {
    h = g;
    k = h * 1200;
    g = 0;
    loop L_l {
      g = g;
      if ((g + k) % 20) goto B_m;
      fputc(10, l);
      label B_m:
      c[2]:double = (e + h * 9600)[g]:double;
      small_fprintf(l, memory_base + 19, c + 16);
      j = g + 1;
      g = j;
      if (j != 1200) continue L_l;
    }
    j = h + 1;
    g = j;
    if (j != 1200) continue L_k;
  }
  c[0]:int = (g = memory_base) + 0;
  fiprintf(l, g + 27, c);
  fwrite(g + 67, 22, 1, l);
  label B_j:
  free(d);
  free(e);
  free(f);
  stack_pointer = c + 48;
  return 0;
}

function legalfunc_polybench_alloc_data(a:long, b:int):int {
  return legalimport_polybench_alloc_data(i32_wrap_i64(a),
                                          i32_wrap_i64(a >> 32L),
                                          b)
}

