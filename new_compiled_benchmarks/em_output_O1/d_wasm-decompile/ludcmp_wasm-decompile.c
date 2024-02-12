import memory env_memory;

import global stack_pointer:int;
import global memory_base:int;
import global table_base:int;
import global stderr:int;

data rodata(offset: memory_base) =
  "x\00begin dump: %s\00%0.2lf \00\0aend   dump: %s\0a\00==BEGIN DUMP_ARR"
  "AYS==\0a\00==END   DUMP_ARRAYS==\0a\00";

import function memset(a:int, b:int, c:int):int;

import function free(a:int);

import function fwrite(a:int, b:int, c:int, d:int):int;

import function fiprintf(a:int, b:int, c:int):int;

import function fputc(a:int, b:int):int;

import function small_fprintf(a:int, b:int, c:int):int;

import function legalimport_polybench_alloc_data(a:int, b:int, c:int):int;

export function wasm_call_ctors() {
}

export function wasm_apply_data_relocs() {
}

export function kernel_ludcmp(a:int, b:int, c:int, d:int, e:int) {
  var j:int;
  var k:int;
  var l:double_ptr;
  var m:double;
  var i:int;
  var f:int;
  var g:int;
  var h:int;
  if (a < 1) goto B_a;
  f = 0;
  loop L_b {
    g = 0;
    h = f;
    f = h;
    if (eqz(h)) goto B_c;
    loop L_d {
      i = b + h * 16000;
      l = i + (k = (j = g) << 3);
      m = l[0];
      f = 0;
      if (eqz(j)) goto B_e;
      loop L_f {
        m = m - i[f = f]:double * (b + f * 16000 + k)[0]:double;
        g = f + 1;
        f = g;
        if (g != j) continue L_f;
      }
      label B_e:
      l[0] = m / (b + j * 16000 + k)[0]:double;
      f = j + 1;
      g = f;
      if (f != h) continue L_d;
    }
    f = h;
    label B_c:
    loop L_g {
      j = b + h * 16000;
      l = j + (k = (i = f) << 3);
      m = l[0];
      f = 0;
      if (eqz(h)) goto B_h;
      loop L_i {
        m = m - j[f = f]:double * (b + f * 16000 + k)[0]:double;
        g = f + 1;
        f = g;
        if (g != h) continue L_i;
      }
      label B_h:
      l[0] = m;
      g = i + 1;
      f = g;
      if (g != a) continue L_g;
    }
    g = h + 1;
    f = g;
    if (g != a) continue L_b;
  }
  label B_a:
  if (a <= 0) goto B_j;
  f = 0;
  loop L_k {
    m = (c + (j = (f = f) << 3))[0]:double;
    g = 0;
    if (eqz(f)) goto B_l;
    loop L_m {
      m = 
        m -
        (b + f * 16000 + (h = (g = g) << 3))[0]:double * (e + h)[0]:double;
      h = g + 1;
      g = h;
      if (h != f) continue L_m;
    }
    label B_l:
    (e + j)[0]:double = m;
    g = f + 1;
    f = g;
    if (g != a) continue L_k;
  }
  label B_j:
  if (a <= 0) goto B_n;
  f = a;
  loop L_o {
    m = (e + (k = (h = (j = f) + -1) << 3))[0]:double;
    f = j;
    if (j >= a) goto B_p;
    loop L_q {
      m = 
        m -
        (b + h * 16000 + (g = (f = f) << 3))[0]:double * (d + g)[0]:double;
      g = f + 1;
      f = g;
      if (g != a) continue L_q;
    }
    label B_p:
    (d + k)[0]:double = m / (b + h * 16000 + k)[0]:double;
    f = h;
    if (j > 1) continue L_o;
  }
  label B_n:
}

export function submain(a:int, b:int_ptr):int {
  var i:int;
  var n:int;
  var k:int;
  var l:double_ptr;
  var m:int;
  var c:int = stack_pointer - 48;
  stack_pointer = c;
  var d:int = legalfunc_polybench_alloc_data(4000000L, 8);
  var e:int = legalfunc_polybench_alloc_data(2000L, 8);
  var f:int = legalfunc_polybench_alloc_data(2000L, 8);
  var g:int = legalfunc_polybench_alloc_data(2000L, 8);
  var h:double_ptr = 0;
  loop L_a {
    (f + (i = (h = h) << 3))[0]:long = 0L;
    (g + i)[0]:long = 0L;
    (e + i)[0]:double = f64_convert_i32_s(i = h + 1) / 2000.0 * 0.5 + 4.0;
    h = i;
    if (i != 2000) continue L_a;
  }
  h = 1;
  var j:int = 0;
  loop L_b {
    k = h;
    j = j;
    l = j << 3;
    m = j * 16008 + 8;
    i = 0;
    loop L_c {
      n = d + j * 16000;
      n[i = i]:double = f64_convert_i32_s(0 - i) / 2000.0 + 1.0;
      h = i + 1;
      i = h;
      if (h != k) continue L_c;
    }
    i = j + 1;
    if (j > 1998) goto B_d;
    memset(d + m, 0, 15992 - l);
    label B_d:
    (n + l)[0]:long = 4607182418800017408L;
    h = k + 1;
    j = i;
    if (i != 2000) continue L_b;
  }
  j = memset(legalfunc_polybench_alloc_data(4000000L, 8), 0, 32000000);
  i = 0;
  loop L_e {
    var o:int = i;
    i = 0;
    loop L_f {
      l = d + (k = (m = i) * 16000) + (n = o << 3);
      i = 0;
      loop L_g {
        h = j + k + ((i = i) << 3);
        h[0] = l[0] * (d + i * 16000 + n)[0]:double + h[0];
        h = i + 1;
        i = h;
        if (h != 2000) continue L_g;
      }
      h = m + 1;
      i = h;
      if (h != 2000) continue L_f;
    }
    h = o + 1;
    i = h;
    if (h != 2000) continue L_e;
  }
  i = 0;
  loop L_h {
    n = i;
    i = 0;
    loop L_i {
      (d + (h = n * 16000) + (k = (i = i) << 3))[0]:double =
        (j + h + k)[0]:double;
      h = i + 1;
      i = h;
      if (h != 2000) continue L_i;
    }
    h = n + 1;
    i = h;
    if (h != 2000) continue L_h;
  }
  free(j);
  kernel_ludcmp(2000, d, e, f, g);
  if (a < 43) goto B_j;
  if ((b[0])[0]:ubyte) goto B_j;
  i = memory_base;
  fwrite(i + 42, 22, 1, j = stderr[0]:int);
  c[8]:int = i + 0;
  fiprintf(j, i + 2, c + 32);
  i = 0;
  loop L_k {
    i = i;
    if (i % 20) goto B_l;
    fputc(10, j);
    label B_l:
    c[2]:double = f[i]:double;
    small_fprintf(j, memory_base + 17, c + 16);
    h = i + 1;
    i = h;
    if (h != 2000) continue L_k;
  }
  c[0]:int = (i = memory_base) + 0;
  fiprintf(j, i + 25, c);
  fwrite(i + 65, 22, 1, j);
  label B_j:
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

