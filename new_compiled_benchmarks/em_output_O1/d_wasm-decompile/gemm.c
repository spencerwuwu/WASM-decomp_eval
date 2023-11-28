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

export function kernel_gemm(a:int, b:int, c:int, d:double, e:double, f:int, g:int, h:int) {
  var k:double_ptr;
  if (a < 1) goto B_a;
  var i:int = 0;
  loop L_b {
    var j:int = i;
    i = 0;
    if (b <= 0) goto B_c;
    loop L_d {
      k = f + j * 8800 + ((i = i) << 3);
      k[0] = k[0] * e;
      k = i + 1;
      i = k;
      if (k != b) continue L_d;
    }
    label B_c:
    i = 0;
    if (c <= 0) goto B_e;
    loop L_f {
      var l:int = i;
      if (b < 1) goto B_g;
      var m:double_ptr = g + j * 9600 + (l << 3);
      i = 0;
      loop L_h {
        var n:double_ptr = f + j * 8800 + (k = (i = i) << 3);
        n[0] = m[0] * d * (h + l * 8800 + k)[0]:double + n[0];
        k = i + 1;
        i = k;
        if (k != b) continue L_h;
      }
      label B_g:
      k = l + 1;
      i = k;
      if (k != c) continue L_f;
    }
    label B_e:
    k = j + 1;
    i = k;
    if (k != a) continue L_b;
  }
  label B_a:
}

export function submain(a:int, b:int_ptr):int {
  var h:double_ptr;
  var i:double_ptr;
  var l:int;
  var k:int;
  var c:int = stack_pointer - 48;
  stack_pointer = c;
  var d:int = legalfunc_polybench_alloc_data(1100000L, 8);
  var e:int = legalfunc_polybench_alloc_data(1200000L, 8);
  var f:int = legalfunc_polybench_alloc_data(1320000L, 8);
  var g:int = 0;
  loop L_a {
    h = g;
    g = 0;
    loop L_b {
      (d + h * 8800)[g = g]:double =
        f64_convert_i32_s((g * h + 1) % 1000) / 1000.0;
      i = g + 1;
      g = i;
      if (i != 1100) continue L_b;
    }
    h = h + 1;
    g = h;
    if (h != 1000) continue L_a;
  }
  g = 0;
  loop L_c {
    h = g;
    i = 0;
    loop L_d {
      (e + h * 9600)[g = i]:double =
        f64_convert_i32_s((g = g + 1) * h % 1200) / 1200.0;
      i = g;
      if (g != 1200) continue L_d;
    }
    h = h + 1;
    g = h;
    if (h != 1000) continue L_c;
  }
  g = 0;
  loop L_e {
    h = g;
    g = 0;
    loop L_f {
      (f + h * 8800)[g = g]:double =
        f64_convert_i32_s((g + 2) * h % 1100) / 1100.0;
      i = g + 1;
      g = i;
      if (i != 1100) continue L_f;
    }
    h = h + 1;
    g = h;
    if (h != 1200) continue L_e;
  }
  g = 0;
  loop L_g {
    var j:int = g;
    g = 0;
    loop L_h {
      k = d + j * 8800;
      h = k + ((g = g) << 3);
      h[0] = h[0] * 1.2;
      h = g + 1;
      g = h;
      if (h != 1100) continue L_h;
    }
    g = 0;
    loop L_i {
      var m:double_ptr = e + j * 9600 + ((l = g) << 3);
      g = 0;
      loop L_j {
        i = k + (h = (g = g) << 3);
        i[0] = m[0] * 1.5 * (f + l * 8800 + h)[0]:double + i[0];
        h = g + 1;
        g = h;
        if (h != 1100) continue L_j;
      }
      h = l + 1;
      g = h;
      if (h != 1200) continue L_i;
    }
    h = j + 1;
    g = h;
    if (h != 1000) continue L_g;
  }
  if (a < 43) goto B_k;
  if ((b[0])[0]:ubyte) goto B_k;
  g = memory_base;
  fwrite(g + 42, 22, 1, l = stderr[0]:int);
  c[8]:int = g + 15;
  fiprintf(l, g + 0, c + 32);
  g = 0;
  loop L_l {
    i = g;
    k = i * 1000;
    g = 0;
    loop L_m {
      g = g;
      if ((g + k) % 20) goto B_n;
      fputc(10, l);
      label B_n:
      c[2]:double = (d + i * 8800)[g]:double;
      small_fprintf(l, memory_base + 17, c + 16);
      h = g + 1;
      g = h;
      if (h != 1100) continue L_m;
    }
    h = i + 1;
    g = h;
    if (h != 1000) continue L_l;
  }
  c[0]:int = (g = memory_base) + 15;
  fiprintf(l, g + 25, c);
  fwrite(g + 65, 22, 1, l);
  label B_k:
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

