import memory env_memory;

import global stack_pointer:int;
import global memory_base:int;
import global stderr:int;

data rodata(offset: memory_base) =
  "begin dump: %s\00q\00%0.2lf \00\0aend   dump: %s\0a\00==BEGIN DUMP_ARR"
  "AYS==\0a\00==END   DUMP_ARRAYS==\0a\00";

import function memset(a:int, b:int, c:int):int;

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

export function kernel_bicg(a:int, b:int, c:int, d:int, e:int, f:int, g:int) {
  var i:int;
  var h:int;
  var k:int;
  var o:double_ptr;
  if (a > 0) { memset(d, 0, a << 3) }
  if (b > 0) {
    var l:int = a <= 0;
    loop L_c {
      var j:int = e + (h = i << 3);
      j[0]:long = 0L;
      if (eqz(l)) {
        var m:double_ptr = g + h;
        h = 0;
        loop L_e {
          var n:double_ptr = d + (k = h << 3);
          n[0] = m[0] * (o = c + i * 15200 + k)[0] + n[0];
          j[0]:double = o[0] * (f + k)[0]:double + j[0]:double;
          h = h + 1;
          if (h != a) continue L_e;
        }
      }
      i = i + 1;
      if (i != b) continue L_c;
    }
  }
}

export function submain(a:int, b:int_ptr):int {
  var c:int;
  var f:int;
  var d:int;
  var m:double_ptr;
  var h:int;
  var e:int = stack_pointer - 96;
  stack_pointer = e;
  var i:int = legalfunc_polybench_alloc_data(3990000L, 8);
  var j:double_ptr = legalfunc_polybench_alloc_data(1900L, 8);
  var k:int = legalfunc_polybench_alloc_data(2100L, 8);
  var g:int = legalfunc_polybench_alloc_data(1900L, 8);
  var l:int = legalfunc_polybench_alloc_data(2100L, 8);
  loop L_a {
    g[c]:double = f64_convert_i32_s(c) / 1900.0;
    g[f = c | 1]:double = f64_convert_i32_s(f) / 1900.0;
    c = c + 2;
    if (c != 1900) continue L_a;
  }
  loop L_b {
    l[d]:double = f64_convert_i32_s(d) / 2100.0;
    c = 0;
    loop L_c {
      f = i + d * 15200;
      f[c]:double = f64_convert_i32_s((m = c | 1) * d % 2100) / 2100.0;
      f[m]:double = f64_convert_i32_s((c = c + 2) * d % 2100) / 2100.0;
      if (c != 1900) continue L_c;
    }
    d = d + 1;
    if (d != 2100) continue L_b;
  }
  var n:int = memset(j, 0, 15200);
  loop L_d {
    f = k + (c = h << 3);
    f[0]:long = 0L;
    var o:double_ptr = c + l;
    c = 0;
    loop L_e {
      m = n + (d = c << 3);
      m[0] = o[0] * (j = i + h * 15200 + d)[0] + m[0];
      f[0]:double = j[0] * (d + g)[0]:double + f[0]:double;
      c = c + 1;
      if (c != 1900) continue L_e;
    }
    h = h + 1;
    if (h != 2100) continue L_d;
  }
  if (a < 43) goto B_f;
  if ((b[0])[0]:ubyte) goto B_f;
  c = memory_base;
  fwrite(c + 42, 22, 1, d = stderr[0]:int);
  e[20]:int = c + 13;
  fiprintf(d, c, e + 80);
  c = 0;
  loop L_g {
    if (eqz((c & 65535) % 20)) { fputc(10, d) }
    e[8]:double = n[c]:double;
    small_fprintf(d, memory_base + 17, e - -64);
    c = c + 1;
    if (c != 1900) continue L_g;
  }
  e[12]:int = (c = memory_base) + 13;
  fiprintf(d, c + 25, e + 48);
  e[8]:int = c + 15;
  fiprintf(d, c, e + 32);
  c = 0;
  loop L_i {
    if (eqz((c & 65535) % 20)) { fputc(10, d) }
    e[2]:double = k[c]:double;
    small_fprintf(d, memory_base + 17, e + 16);
    c = c + 1;
    if (c != 2100) continue L_i;
  }
  e[0]:int = (c = memory_base) + 15;
  fiprintf(d, c + 25, e);
  fwrite(c + 65, 22, 1, d);
  label B_f:
  free(i);
  free(n);
  free(k);
  free(g);
  free(l);
  stack_pointer = e + 96;
  return 0;
}

function legalfunc_polybench_alloc_data(a:long, b:int):int {
  return legalimport_polybench_alloc_data(i32_wrap_i64(a),
                                          i32_wrap_i64(a >> 32L),
                                          b)
}

