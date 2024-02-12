import memory env_memory;

import global stack_pointer:int;
import global memory_base:int;
import global table_base:int;
import global stderr:int;

data rodata(offset: memory_base) =
  "begin dump: %s\00A\00%0.2lf \00\0aend   dump: %s\0a\00==BEGIN DUMP_ARR"
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

export function kernel_cholesky(a:int, b:int) {
  var i:int;
  var f:double_ptr;
  var h:double;
  var e:int;
  if (a < 1) goto B_a;
  var c:int = 0;
  loop L_b {
    var d:double_ptr = 0;
    e = c;
    if (eqz(e)) goto B_c;
    loop L_d {
      d = d;
      if (eqz(d)) goto B_e;
      f = b + e * 16000;
      var g:double_ptr = f + (d << 3);
      h = g[0];
      c = 0;
      loop L_f {
        g[0] =
          (h = 
             h -
             (f + (i = (c = c) << 3))[0]:double * (b + d * 16000 + i)[0]:double);
        h = h;
        i = c + 1;
        c = i;
        if (i != d) continue L_f;
      }
      label B_e:
      c = b + e * 16000;
      f = c + (i = d << 3);
      f[0] = f[0] / (b + d * 16000 + i)[0]:double;
      i = d + 1;
      d = i;
      if (i != e) continue L_d;
    }
    f = c + (e << 3);
    h = f[0];
    d = 0;
    loop L_g {
      f[0] = (h = h - (h = c[d = d]:double) * h);
      h = h;
      i = d + 1;
      d = i;
      if (i != e) continue L_g;
    }
    label B_c:
    d = b + e * 16000 + (e << 3);
    d[0] = sqrt(d[0]);
    d = e + 1;
    c = d;
    if (d != a) continue L_b;
  }
  label B_a:
}

export function submain(a:int, b:int_ptr):int {
  var k:double_ptr;
  var j:double_ptr;
  var g:double_ptr;
  var h:double_ptr;
  var i:int;
  var m:double;
  var c:int = stack_pointer - 48;
  stack_pointer = c;
  var d:int = legalfunc_polybench_alloc_data(4000000L, 8);
  var e:double_ptr = 1;
  var f:int = 0;
  loop L_a {
    g = e;
    f = f;
    h = f << 3;
    i = f * 16008 + 8;
    j = 0;
    loop L_b {
      k = d + f * 16000;
      k[j = j]:double = f64_convert_i32_s(0 - j) / 2000.0 + 1.0;
      e = j + 1;
      j = e;
      if (e != g) continue L_b;
    }
    j = f + 1;
    if (f > 1998) goto B_c;
    memset(d + i, 0, 15992 - h);
    label B_c:
    (k + h)[0]:long = 4607182418800017408L;
    e = g + 1;
    f = j;
    if (j != 2000) continue L_a;
  }
  f = memset(legalfunc_polybench_alloc_data(4000000L, 8), 0, 32000000);
  j = 0;
  loop L_d {
    var l:int = j;
    j = 0;
    loop L_e {
      h = d + (g = (i = j) * 16000) + (k = l << 3);
      j = 0;
      loop L_f {
        e = f + g + ((j = j) << 3);
        e[0] = h[0] * (d + j * 16000 + k)[0]:double + e[0];
        e = j + 1;
        j = e;
        if (e != 2000) continue L_f;
      }
      e = i + 1;
      j = e;
      if (e != 2000) continue L_e;
    }
    e = l + 1;
    j = e;
    if (e != 2000) continue L_d;
  }
  j = 0;
  loop L_g {
    k = j;
    j = 0;
    loop L_h {
      (d + (e = k * 16000) + (g = (j = j) << 3))[0]:double =
        (f + e + g)[0]:double;
      e = j + 1;
      j = e;
      if (e != 2000) continue L_h;
    }
    e = k + 1;
    j = e;
    if (e != 2000) continue L_g;
  }
  free(f);
  e = 0;
  loop L_i {
    j = 0;
    h = e;
    if (eqz(h)) goto B_j;
    loop L_k {
      j = j;
      if (eqz(j)) goto B_l;
      g = d + h * 16000;
      k = g + (j << 3);
      m = k[0];
      e = 0;
      loop L_m {
        k[0] =
          (m = 
             m -
             (g + (f = (e = e) << 3))[0]:double * (d + j * 16000 + f)[0]:double);
        m = m;
        f = e + 1;
        e = f;
        if (f != j) continue L_m;
      }
      label B_l:
      e = d + h * 16000;
      g = e + (f = j << 3);
      g[0] = g[0] / (d + j * 16000 + f)[0]:double;
      f = j + 1;
      j = f;
      if (f != h) continue L_k;
    }
    g = e + (h << 3);
    m = g[0];
    j = 0;
    loop L_n {
      g[0] = (m = m - (m = e[j = j]:double) * m);
      m = m;
      f = j + 1;
      j = f;
      if (f != h) continue L_n;
    }
    label B_j:
    j = d + h * 16000 + (h << 3);
    j[0] = sqrt(j[0]);
    j = h + 1;
    e = j;
    if (j != 2000) continue L_i;
  }
  if (a < 43) goto B_o;
  if ((b[0])[0]:ubyte) goto B_o;
  j = memory_base;
  fwrite(j + 42, 22, 1, k = stderr[0]:int);
  c[8]:int = j + 15;
  fiprintf(k, j + 0, c + 32);
  j = 1;
  e = 0;
  loop L_p {
    f = j;
    g = e;
    h = g * 2000;
    j = 0;
    loop L_q {
      j = j;
      if ((j + h) % 20) goto B_r;
      fputc(10, k);
      label B_r:
      c[2]:double = (d + g * 16000)[j]:double;
      small_fprintf(k, memory_base + 17, c + 16);
      e = j + 1;
      j = e;
      if (e != f) continue L_q;
    }
    j = f + 1;
    f = g + 1;
    e = f;
    if (f != 2000) continue L_p;
  }
  c[0]:int = (j = memory_base) + 15;
  fiprintf(k, j + 25, c);
  fwrite(j + 65, 22, 1, k);
  label B_o:
  free(d);
  stack_pointer = c + 48;
  return 0;
}

function legalfunc_polybench_alloc_data(a:long, b:int):int {
  return legalimport_polybench_alloc_data(i32_wrap_i64(a),
                                          i32_wrap_i64(a >> 32L),
                                          b)
}

