import memory env_memory;

import global stack_pointer:int;
import global memory_base:int;
import global table_base:int;
import global stderr:int;

data rodata(offset: memory_base) =
  "x\00begin dump: %s\00%0.2lf \00\0aend   dump: %s\0a\00==BEGIN DUMP_ARR"
  "AYS==\0a\00==END   DUMP_ARRAYS==\0a\00";

import function fwrite(a:int, b:int, c:int, d:int):int;

import function fiprintf(a:int, b:int, c:int):int;

import function small_fprintf(a:int, b:int, c:int):int;

import function fputc(a:int, b:int):int;

import function free(a:int);

import function legalimport_polybench_alloc_data(a:int, b:int, c:int):int;

export function wasm_call_ctors() {
}

export function wasm_apply_data_relocs() {
}

export function kernel_trisolv(a:int, b:int, c:int, d:int) {
  var f:int;
  var j:int;
  var i:int;
  if (a < 1) goto B_a;
  var e:int = 0;
  loop L_b {
    var g:double_ptr = c + (f = (e = e) << 3);
    g[0] = (d + f)[0]:double;
    if (eqz(e)) goto B_c;
    var h:double = g[0];
    i = 0;
    loop L_d {
      g[0] =
        (h = 
           h -
           (b + e * 16000 + (j = (i = i) << 3))[0]:double * (c + j)[0]:double);
      h = h;
      j = i + 1;
      i = j;
      if (j != e) continue L_d;
    }
    label B_c:
    g[0] = g[0] / (b + e * 16000 + f)[0]:double;
    i = e + 1;
    e = i;
    if (i != a) continue L_b;
  }
  label B_a:
}

export function submain(a:int, b:int_ptr):int {
  var j:int;
  var l:double;
  var i:double_ptr;
  var k:int;
  var c:int = stack_pointer - 48;
  stack_pointer = c;
  var d:int = legalfunc_polybench_alloc_data(4000000L, 8);
  var e:int = legalfunc_polybench_alloc_data(2000L, 8);
  var f:int = legalfunc_polybench_alloc_data(2000L, 8);
  var g:int = 1;
  var h:int = 0;
  loop L_a {
    i = g;
    (e + (g = (j = h) << 3))[0]:long = -4571373524106608640L;
    (f + g)[0]:double = f64_convert_i32_s(j);
    k = j + 2001;
    g = 0;
    loop L_b {
      (d + j * 16000)[g = g]:double =
        ((l = f64_convert_i32_s(k - g)) + l) / 2000.0;
      h = g + 1;
      g = h;
      if (h != i) continue L_b;
    }
    g = i + 1;
    j = j + 1;
    h = j;
    if (j != 2000) continue L_a;
  }
  g = 0;
  loop L_c {
    i = e + (k = (g = g) << 3);
    i[0] = (l = (f + k)[0]:double);
    l = l;
    h = 0;
    if (eqz(g)) goto B_d;
    loop L_e {
      i[0] =
        (l = 
           l -
           (d + g * 16000 + (j = (h = h) << 3))[0]:double * (e + j)[0]:double);
      l = l;
      j = h + 1;
      h = j;
      if (j != g) continue L_e;
    }
    label B_d:
    i[0] = i[0] / (d + g * 16000 + k)[0]:double;
    h = g + 1;
    g = h;
    if (h != 2000) continue L_c;
  }
  if (a < 43) goto B_f;
  if ((b[0])[0]:ubyte) goto B_f;
  g = memory_base;
  fwrite(g + 42, 22, 1, j = stderr[0]:int);
  c[8]:int = g + 0;
  fiprintf(j, g + 2, c + 32);
  g = 0;
  loop L_g {
    c[2]:double = e[g = g]:double;
    small_fprintf(j, memory_base + 17, c + 16);
    if (g % 20) goto B_h;
    fputc(10, j);
    label B_h:
    h = g + 1;
    g = h;
    if (h != 2000) continue L_g;
  }
  c[0]:int = (g = memory_base) + 0;
  fiprintf(j, g + 25, c);
  fwrite(g + 65, 22, 1, j);
  label B_f:
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

