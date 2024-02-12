import memory env_memory;

import global stack_pointer:int;
import global memory_base:int;
import global table_base:int;
import global stderr:int;

data rodata(offset: memory_base) =
  "begin dump: %s\00C\00%0.2lf \00\0aend   dump: %s\0a\00==BEGIN DUMP_ARR"
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

export function kernel_syr2k(a:int, b:int, c:double, d:double, e:int, f:int, g:int) {
  var m:double_ptr;
  var n:int;
  var l:int;
  if (a < 1) goto B_a;
  var h:int = 1;
  var i:double_ptr = 0;
  loop L_b {
    var j:int = i;
    var k:int = h;
    h = 0;
    loop L_c {
      l = e + j * 9600;
      i = l + ((h = h) << 3);
      i[0] = i[0] * d;
      i = h + 1;
      h = i;
      if (i != k) continue L_c;
    }
    h = 0;
    if (b <= 0) goto B_d;
    loop L_e {
      var o:double_ptr = f + (m = j * 8000) + (i = (n = h) << 3);
      var p:double_ptr = g + m + i;
      h = 0;
      loop L_f {
        m = l + ((h = h) << 3);
        m[0] =
          m[0] +
          (f + (m = h * 8000) + i)[0]:double * c * p[0] +
          (g + m + i)[0]:double * c * o[0];
        m = h + 1;
        h = m;
        if (m != k) continue L_f;
      }
      i = n + 1;
      h = i;
      if (i != b) continue L_e;
    }
    label B_d:
    h = k + 1;
    m = j + 1;
    i = m;
    if (m != a) continue L_b;
  }
  label B_a:
}

export function submain(a:int, b:int_ptr):int {
  var i:double_ptr;
  var j:int;
  var k:int;
  var h:double_ptr;
  var m:int;
  var c:int = stack_pointer - 48;
  stack_pointer = c;
  var d:int = legalfunc_polybench_alloc_data(1440000L, 8);
  var e:int = legalfunc_polybench_alloc_data(1200000L, 8);
  var f:int = legalfunc_polybench_alloc_data(1200000L, 8);
  var g:int = 0;
  loop L_a {
    h = g;
    g = 0;
    loop L_b {
      (e + (i = h * 8000) + (j = (g = g) << 3))[0]:double =
        f64_convert_i32_s(((k = g * h) + 1) % 1200) / 1200.0;
      (f + i + j)[0]:double = f64_convert_i32_s((k + 2) % 1000) / 1000.0;
      i = g + 1;
      g = i;
      if (i != 1000) continue L_b;
    }
    h = h + 1;
    g = h;
    if (h != 1200) continue L_a;
  }
  g = 0;
  loop L_c {
    h = g;
    g = 0;
    loop L_d {
      (d + h * 9600)[g = g]:double =
        f64_convert_i32_s((g * h + 3) % 1200) / 1000.0;
      i = g + 1;
      g = i;
      if (i != 1200) continue L_d;
    }
    h = h + 1;
    g = h;
    if (h != 1200) continue L_c;
  }
  g = 1;
  h = 0;
  loop L_e {
    var l:int = h;
    j = g;
    g = 0;
    loop L_f {
      k = d + l * 9600;
      h = k + ((g = g) << 3);
      h[0] = h[0] * 1.2;
      h = g + 1;
      g = h;
      if (h != j) continue L_f;
    }
    g = 0;
    loop L_g {
      var n:double_ptr = e + (i = l * 8000) + (h = (m = g) << 3);
      var o:double_ptr = f + i + h;
      g = 0;
      loop L_h {
        i = k + ((g = g) << 3);
        i[0] =
          i[0] +
          (e + (i = g * 8000) + h)[0]:double * 1.5 * o[0] +
          (f + i + h)[0]:double * 1.5 * n[0];
        i = g + 1;
        g = i;
        if (i != j) continue L_h;
      }
      h = m + 1;
      g = h;
      if (h != 1000) continue L_g;
    }
    g = j + 1;
    i = l + 1;
    h = i;
    if (i != 1200) continue L_e;
  }
  if (a < 43) goto B_i;
  if ((b[0])[0]:ubyte) goto B_i;
  g = memory_base;
  fwrite(g + 42, 22, 1, j = stderr[0]:int);
  c[8]:int = g + 15;
  fiprintf(j, g + 0, c + 32);
  g = 0;
  loop L_j {
    i = g;
    k = i * 1200;
    g = 0;
    loop L_k {
      g = g;
      if ((g + k) % 20) goto B_l;
      fputc(10, j);
      label B_l:
      c[2]:double = (d + i * 9600)[g]:double;
      small_fprintf(j, memory_base + 17, c + 16);
      h = g + 1;
      g = h;
      if (h != 1200) continue L_k;
    }
    h = i + 1;
    g = h;
    if (h != 1200) continue L_j;
  }
  c[0]:int = (g = memory_base) + 15;
  fiprintf(j, g + 25, c);
  fwrite(g + 65, 22, 1, j);
  label B_i:
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

