import memory env_memory;

import global stack_pointer:int;
import global memory_base:int;
import global stderr:int;

data rodata(offset: memory_base) =
  "y\00begin dump: %s\00%0.2lf \00\0aend   dump: %s\0a\00==BEGIN DUMP_ARR"
  "AYS==\0a\00==END   DUMP_ARRAYS==\0a\00";

import function fwrite(a:int, b:int, c:int, d:int):int;

import function fiprintf(a:int, b:int, c:int):int;

import function fputc(a:int, b:int):int;

import function small_fprintf(a:int, b:int, c:int):int;

import function free(a:int);

import function legalimport_polybench_alloc_data(a:int, b:int, c:int):int;

export function wasm_call_ctors() {
  nop
}

export function wasm_apply_data_relocs() {
  nop
}

export function kernel_gesummv(a:int, b:double, c:double, d:int, e:int, f:int, g:int, h:int) {
  var j:int;
  var i:int;
  var m:int;
  var n:int;
  var o:double_ptr;
  var p:double;
  if (a > 0) {
    loop L_b {
      var k:int = f + (i = j << 3);
      k[0]:long = 0L;
      var l:int = h + i;
      l[0]:long = 0L;
      i = 0;
      loop L_c {
        k[0]:double =
          ((m = i << 3) + d + (n = j * 10400))[0]:double * (o = g + m)[0] +
          k[0]:double;
        l[0]:double = (p = (e + n + m)[0]:double * o[0] + l[0]:double);
        i = i + 1;
        if (i != a) continue L_c;
      }
      l[0]:double = b * k[0]:double + p * c;
      j = j + 1;
      if (j != a) continue L_b;
    }
  }
}

export function submain(a:int, b:int_ptr):int {
  var d:int;
  var g:int;
  var m:int;
  var h:int;
  var c:int;
  var f:int;
  var o:double_ptr;
  var p:double;
  var e:int = stack_pointer - 48;
  stack_pointer = e;
  var i:int = legalfunc_polybench_alloc_data(1690000L, 8);
  var j:int = legalfunc_polybench_alloc_data(1690000L, 8);
  var n:int = legalfunc_polybench_alloc_data(1300L, 8);
  var k:int = legalfunc_polybench_alloc_data(1300L, 8);
  var l:int = legalfunc_polybench_alloc_data(1300L, 8);
  loop L_a {
    k[d]:double = f64_convert_i32_s(d) / 1300.0;
    c = 0;
    loop L_b {
      f = c << 3;
      (f + i + (g = d * 10400))[0]:double =
        f64_convert_i32_s(((m = c * d) + 1) % 1300) / 1300.0;
      (g + j + f)[0]:double = f64_convert_i32_s((m + 2) % 1300) / 1300.0;
      c = c + 1;
      if (c != 1300) continue L_b;
    }
    d = d + 1;
    if (d != 1300) continue L_a;
  }
  loop L_c {
    g = n + (c = h << 3);
    g[0]:long = 0L;
    f = c + l;
    f[0]:long = 0L;
    c = 0;
    loop L_d {
      g[0]:double =
        ((d = c << 3) + i + (m = h * 10400))[0]:double * (o = d + k)[0] +
        g[0]:double;
      f[0]:double = (p = (j + m + d)[0]:double * o[0] + f[0]:double);
      c = c + 1;
      if (c != 1300) continue L_d;
    }
    f[0]:double = g[0]:double * 1.5 + p * 1.2;
    h = h + 1;
    if (h != 1300) continue L_c;
  }
  if (a < 43) goto B_e;
  if ((b[0])[0]:ubyte) goto B_e;
  c = memory_base;
  fwrite(c + 42, 22, 1, d = stderr[0]:int);
  e[8]:int = c;
  fiprintf(d, c + 2, e + 32);
  c = 0;
  loop L_f {
    if (eqz((c & 65535) % 20)) { fputc(10, d) }
    e[2]:double = l[c]:double;
    small_fprintf(d, memory_base + 17, e + 16);
    c = c + 1;
    if (c != 1300) continue L_f;
  }
  e[0]:int = (c = memory_base);
  fiprintf(d, c + 25, e);
  fwrite(c + 65, 22, 1, d);
  label B_e:
  free(i);
  free(j);
  free(n);
  free(k);
  free(l);
  stack_pointer = e + 48;
  return 0;
}

function legalfunc_polybench_alloc_data(a:long, b:int):int {
  return legalimport_polybench_alloc_data(i32_wrap_i64(a),
                                          i32_wrap_i64(a >> 32L),
                                          b)
}

