import memory env_memory;

import global stack_pointer:int;
import global memory_base:int;
import global table_base:int;
import global stderr:int;

data rodata(offset: memory_base) =
  "begin dump: %s\00B\00%0.2lf \00\0aend   dump: %s\0a\00==BEGIN DUMP_ARR"
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

export function kernel_trmm(a:int, b:int, c:double, d:int, e:int) {
  var k:int;
  var n:int;
  if (a < 1) goto B_a;
  var f:int = b < 1;
  var g:double_ptr = 0;
  loop L_b {
    var h:int = g;
    if (f) goto B_c;
    var i:int = h + 1;
    g = 0;
    loop L_d {
      var j:int = g;
      if (i >= a) goto B_e;
      var l:double_ptr = e + h * 9600 + (k = j << 3);
      var m:double = l[0];
      g = i;
      loop L_f {
        l[0] =
          (m = (d + (g = g) * 8000)[h]:double * (e + g * 9600 + k)[0]:double + m);
        m = m;
        n = g + 1;
        g = n;
        if (n != a) continue L_f;
      }
      label B_e:
      g = e + h * 9600 + (j << 3);
      g[0] = g[0] * c;
      n = j + 1;
      g = n;
      if (n != b) continue L_d;
    }
    label B_c:
    n = h + 1;
    g = n;
    if (n != a) continue L_b;
  }
  label B_a:
}

export function submain(a:int, b:int_ptr):int {
  var h:int;
  var i:int;
  var g:int;
  var l:double_ptr;
  var c:int = stack_pointer - 48;
  stack_pointer = c;
  var d:int = legalfunc_polybench_alloc_data(1000000L, 8);
  var e:int = legalfunc_polybench_alloc_data(1200000L, 8);
  var f:double_ptr = 0;
  loop L_a {
    g = 0;
    f = f;
    if (eqz(f)) goto B_b;
    loop L_c {
      (d + f * 8000)[g = g]:double =
        f64_convert_i32_s((g + f) % 1000) / 1000.0;
      h = g + 1;
      g = h;
      if (h != f) continue L_c;
    }
    label B_b:
    (d + f * 8000)[f]:long = 4607182418800017408L;
    i = f + 1200;
    g = 0;
    loop L_d {
      (e + f * 9600)[g = g]:double =
        f64_convert_i32_s((i - g) % 1200) / 1200.0;
      h = g + 1;
      g = h;
      if (h != 1200) continue L_d;
    }
    g = f + 1;
    f = g;
    if (g != 1000) continue L_a;
  }
  f = 0;
  loop L_e {
    h = f;
    var j:int = h + 1;
    f = 0;
    loop L_f {
      var k:int = f;
      if (h > 998) goto B_g;
      l = e + h * 9600 + (i = k << 3);
      var m:double = l[0];
      f = j;
      loop L_h {
        l[0] =
          (m = (d + (f = f) * 8000)[h]:double * (e + f * 9600 + i)[0]:double + m);
        m = m;
        g = f + 1;
        f = g;
        if (g != 1000) continue L_h;
      }
      label B_g:
      f = e + h * 9600 + (k << 3);
      f[0] = f[0] * 1.5;
      g = k + 1;
      f = g;
      if (g != 1200) continue L_f;
    }
    f = j;
    if (j != 1000) continue L_e;
  }
  if (a < 43) goto B_i;
  if ((b[0])[0]:ubyte) goto B_i;
  f = memory_base;
  fwrite(f + 42, 22, 1, i = stderr[0]:int);
  c[8]:int = f + 15;
  fiprintf(i, f + 0, c + 32);
  f = 0;
  loop L_j {
    h = f;
    l = h * 1000;
    f = 0;
    loop L_k {
      f = f;
      if ((f + l) % 20) goto B_l;
      fputc(10, i);
      label B_l:
      c[2]:double = (e + h * 9600)[f]:double;
      small_fprintf(i, memory_base + 17, c + 16);
      g = f + 1;
      f = g;
      if (g != 1200) continue L_k;
    }
    g = h + 1;
    f = g;
    if (g != 1000) continue L_j;
  }
  c[0]:int = (f = memory_base) + 15;
  fiprintf(i, f + 25, c);
  fwrite(f + 65, 22, 1, i);
  label B_i:
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

