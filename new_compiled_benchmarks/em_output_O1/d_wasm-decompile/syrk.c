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

export function kernel_syrk(a:int, b:int, c:double, d:double, e:int, f:int) {
  var l:int;
  var m:int;
  var k:int;
  if (a < 1) goto B_a;
  var g:int = 1;
  var h:double_ptr = 0;
  loop L_b {
    var i:int = h;
    var j:int = g;
    g = 0;
    loop L_c {
      k = e + i * 9600;
      h = k + ((g = g) << 3);
      h[0] = h[0] * d;
      h = g + 1;
      g = h;
      if (h != j) continue L_c;
    }
    g = 0;
    if (b <= 0) goto B_d;
    loop L_e {
      var n:double_ptr = f + i * 8000 + (m = (l = g) << 3);
      g = 0;
      loop L_f {
        h = k + ((g = g) << 3);
        h[0] = n[0] * c * (f + g * 8000 + m)[0]:double + h[0];
        h = g + 1;
        g = h;
        if (h != j) continue L_f;
      }
      h = l + 1;
      g = h;
      if (h != b) continue L_e;
    }
    label B_d:
    g = j + 1;
    j = i + 1;
    h = j;
    if (j != a) continue L_b;
  }
  label B_a:
}

export function submain(a:int, b:int_ptr):int {
  var g:double_ptr;
  var h:int;
  var k:int;
  var l:int;
  var j:int;
  var c:int = stack_pointer - 48;
  stack_pointer = c;
  var d:int = legalfunc_polybench_alloc_data(1440000L, 8);
  var e:int = legalfunc_polybench_alloc_data(1200000L, 8);
  var f:int = 0;
  loop L_a {
    g = f;
    f = 0;
    loop L_b {
      (e + g * 8000)[f = f]:double =
        f64_convert_i32_s((f * g + 1) % 1200) / 1200.0;
      h = f + 1;
      f = h;
      if (h != 1000) continue L_b;
    }
    g = g + 1;
    f = g;
    if (g != 1200) continue L_a;
  }
  f = 0;
  loop L_c {
    g = f;
    f = 0;
    loop L_d {
      (d + g * 9600)[f = f]:double =
        f64_convert_i32_s((f * g + 2) % 1000) / 1000.0;
      h = f + 1;
      f = h;
      if (h != 1200) continue L_d;
    }
    g = g + 1;
    f = g;
    if (g != 1200) continue L_c;
  }
  f = 1;
  g = 0;
  loop L_e {
    var i:int = g;
    h = f;
    f = 0;
    loop L_f {
      j = d + i * 9600;
      g = j + ((f = f) << 3);
      g[0] = g[0] * 1.2;
      g = f + 1;
      f = g;
      if (g != h) continue L_f;
    }
    f = 0;
    loop L_g {
      var m:double_ptr = e + i * 8000 + (l = (k = f) << 3);
      f = 0;
      loop L_h {
        g = j + ((f = f) << 3);
        g[0] = m[0] * 1.5 * (e + f * 8000 + l)[0]:double + g[0];
        g = f + 1;
        f = g;
        if (g != h) continue L_h;
      }
      g = k + 1;
      f = g;
      if (g != 1000) continue L_g;
    }
    f = h + 1;
    h = i + 1;
    g = h;
    if (h != 1200) continue L_e;
  }
  if (a < 43) goto B_i;
  if ((b[0])[0]:ubyte) goto B_i;
  f = memory_base;
  fwrite(f + 42, 22, 1, j = stderr[0]:int);
  c[8]:int = f + 15;
  fiprintf(j, f + 0, c + 32);
  f = 0;
  loop L_j {
    h = f;
    l = h * 1200;
    f = 0;
    loop L_k {
      f = f;
      if ((f + l) % 20) goto B_l;
      fputc(10, j);
      label B_l:
      c[2]:double = (d + h * 9600)[f]:double;
      small_fprintf(j, memory_base + 17, c + 16);
      g = f + 1;
      f = g;
      if (g != 1200) continue L_k;
    }
    g = h + 1;
    f = g;
    if (g != 1200) continue L_j;
  }
  c[0]:int = (f = memory_base) + 15;
  fiprintf(j, f + 25, c);
  fwrite(f + 65, 22, 1, j);
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

