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

export function kernel_lu(a:int, b:int) {
  var h:double_ptr;
  var f:int;
  var i:double_ptr;
  var j:double;
  var g:int;
  if (a < 1) goto B_a;
  var c:int = 0;
  loop L_b {
    var d:double_ptr = 0;
    var e:int = c;
    c = e;
    if (eqz(e)) goto B_c;
    loop L_d {
      f = d;
      if (eqz(f)) goto B_e;
      g = b + e * 16000;
      i = g + (h = f << 3);
      j = i[0];
      c = 0;
      loop L_f {
        i[0] = (j = j - g[c = c]:double * (b + c * 16000 + h)[0]:double);
        j = j;
        d = c + 1;
        c = d;
        if (d != f) continue L_f;
      }
      label B_e:
      d = b + e * 16000 + (c = f << 3);
      d[0] = d[0] / (b + f * 16000 + c)[0]:double;
      c = f + 1;
      d = c;
      if (c != e) continue L_d;
    }
    c = e;
    label B_c:
    loop L_g {
      i = c;
      if (eqz(e)) goto B_h;
      f = b + e * 16000;
      h = f + (g = i << 3);
      j = h[0];
      c = 0;
      loop L_i {
        h[0] = (j = j - f[c = c]:double * (b + c * 16000 + g)[0]:double);
        j = j;
        d = c + 1;
        c = d;
        if (d != e) continue L_i;
      }
      label B_h:
      d = i + 1;
      c = d;
      if (d != a) continue L_g;
    }
    d = e + 1;
    c = d;
    if (d != a) continue L_b;
  }
  label B_a:
}

export function submain(a:int, b:int_ptr):int {
  var k:int;
  var j:int;
  var g:int;
  var h:double_ptr;
  var i:double_ptr;
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
    f = e;
    if (eqz(f)) goto B_j;
    loop L_k {
      g = j;
      if (eqz(g)) goto B_l;
      k = d + f * 16000;
      i = k + (h = g << 3);
      m = i[0];
      j = 0;
      loop L_m {
        i[0] = (m = m - k[j = j]:double * (d + j * 16000 + h)[0]:double);
        m = m;
        e = j + 1;
        j = e;
        if (e != g) continue L_m;
      }
      label B_l:
      e = d + f * 16000 + (j = g << 3);
      e[0] = e[0] / (d + g * 16000 + j)[0]:double;
      e = g + 1;
      j = e;
      if (e != f) continue L_k;
    }
    label B_j:
    j = f;
    loop L_n {
      i = j;
      if (eqz(f)) goto B_o;
      g = d + f * 16000;
      h = g + (k = i << 3);
      m = h[0];
      j = 0;
      loop L_p {
        h[0] = (m = m - g[j = j]:double * (d + j * 16000 + k)[0]:double);
        m = m;
        e = j + 1;
        j = e;
        if (e != f) continue L_p;
      }
      label B_o:
      e = i + 1;
      j = e;
      if (e != 2000) continue L_n;
    }
    j = f + 1;
    e = j;
    if (j != 2000) continue L_i;
  }
  if (a < 43) goto B_q;
  if ((b[0])[0]:ubyte) goto B_q;
  j = memory_base;
  fwrite(j + 42, 22, 1, g = stderr[0]:int);
  c[8]:int = j + 15;
  fiprintf(g, j + 0, c + 32);
  j = 0;
  loop L_r {
    f = j;
    k = f * 2000;
    j = 0;
    loop L_s {
      j = j;
      if ((j + k) % 20) goto B_t;
      fputc(10, g);
      label B_t:
      c[2]:double = (d + f * 16000)[j]:double;
      small_fprintf(g, memory_base + 17, c + 16);
      e = j + 1;
      j = e;
      if (e != 2000) continue L_s;
    }
    e = f + 1;
    j = e;
    if (e != 2000) continue L_r;
  }
  c[0]:int = (j = memory_base) + 15;
  fiprintf(g, j + 25, c);
  fwrite(j + 65, 22, 1, g);
  label B_q:
  free(d);
  stack_pointer = c + 48;
  return 0;
}

function legalfunc_polybench_alloc_data(a:long, b:int):int {
  return legalimport_polybench_alloc_data(i32_wrap_i64(a),
                                          i32_wrap_i64(a >> 32L),
                                          b)
}

