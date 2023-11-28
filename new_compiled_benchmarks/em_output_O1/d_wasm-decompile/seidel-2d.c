import memory env_memory;

import global stack_pointer:int;
import global memory_base:int;
import global table_base:int;
import global stderr:int;

data rodata(offset: memory_base) =
  "begin dump: %s\00A\00%0.2lf \00\0aend   dump: %s\0a\00==BEGIN DUMP_ARR"
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

export function kernel_seidel_2d(a:int, b:int, c:int) {
  var n:int;
  var p:int;
  var q:int;
  if (a < 1) goto B_a;
  var d:int = b + -1;
  var e:int = b < 3;
  b = 0;
  loop L_b {
    var f:int = b;
    b = 0;
    var g:int = 1;
    if (e) goto B_c;
    loop L_d {
      var h:int = g;
      var i:int = h + 1;
      var j:int = h + -1;
      var k:int = b;
      var l:double = (k * 16000 + c + 16000)[0]:double;
      b = 1;
      loop L_e {
        var m:int = c + h * 16000;
        var o:double_ptr = m + (b = (n = b) << 3);
        o[0] =
          (l = 
             (((g = c + j * 16000) + (p = b + -8))[0]:double + (g + b)[0]:double +
              (g + (q = (n = n + 1) << 3))[0]:double +
              l +
              o[0] +
              (m + q)[0]:double +
              ((g = c + i * 16000) + p)[0]:double +
              (g + b)[0]:double +
              (g + q)[0]:double) /
             9.0);
        l = l;
        b = n;
        if (n != d) continue L_e;
      }
      b = k + 1;
      n = h + 1;
      g = n;
      if (n != d) continue L_d;
    }
    label B_c:
    g = f + 1;
    b = g;
    if (g != a) continue L_b;
  }
  label B_a:
}

export function submain(a:int, b:int_ptr):int {
  var h:int;
  var p:int;
  var f:int;
  var q:int;
  var g:double;
  var n:int;
  var c:int = stack_pointer - 48;
  stack_pointer = c;
  var d:int = legalfunc_polybench_alloc_data(4000000L, 8);
  var e:int = 0;
  loop L_a {
    f = e;
    g = f64_convert_i32_s(f);
    e = 0;
    loop L_b {
      (d + f * 16000)[e = e]:double =
        (g * f64_convert_i32_s(e + 2) + 2.0) / 2000.0;
      h = e + 1;
      e = h;
      if (h != 2000) continue L_b;
    }
    h = f + 1;
    e = h;
    if (h != 2000) continue L_a;
  }
  e = 0;
  loop L_c {
    var i:int = e;
    e = 0;
    h = 1;
    loop L_d {
      var j:int = h;
      var k:int = j + 1;
      var l:int = j + -1;
      var m:int = e;
      g = (m * 16000 + d + 16000)[0]:double;
      e = 1;
      loop L_e {
        n = d + j * 16000;
        var o:double_ptr = n + (e = (f = e) << 3);
        o[0] =
          (g = 
             (((h = d + l * 16000) + (p = e + -8))[0]:double + (h + e)[0]:double +
              (h + (q = (f = f + 1) << 3))[0]:double +
              g +
              o[0] +
              (n + q)[0]:double +
              ((h = d + k * 16000) + p)[0]:double +
              (h + e)[0]:double +
              (h + q)[0]:double) /
             9.0);
        g = g;
        e = f;
        if (f != 1999) continue L_e;
      }
      e = m + 1;
      h = k;
      if (k != 1999) continue L_d;
    }
    h = i + 1;
    e = h;
    if (h != 500) continue L_c;
  }
  if (a < 43) goto B_f;
  if ((b[0])[0]:ubyte) goto B_f;
  e = memory_base;
  fwrite(e + 42, 22, 1, q = stderr[0]:int);
  c[8]:int = e + 15;
  fiprintf(q, e + 0, c + 32);
  e = 0;
  loop L_g {
    f = e;
    n = f * 2000;
    e = 0;
    loop L_h {
      e = e;
      if ((e + n) % 20) goto B_i;
      fputc(10, q);
      label B_i:
      c[2]:double = (d + f * 16000)[e]:double;
      small_fprintf(q, memory_base + 17, c + 16);
      h = e + 1;
      e = h;
      if (h != 2000) continue L_h;
    }
    h = f + 1;
    e = h;
    if (h != 2000) continue L_g;
  }
  c[0]:int = (e = memory_base) + 15;
  fiprintf(q, e + 25, c);
  fwrite(e + 65, 22, 1, q);
  label B_f:
  free(d);
  stack_pointer = c + 48;
  return 0;
}

function legalfunc_polybench_alloc_data(a:long, b:int):int {
  return legalimport_polybench_alloc_data(i32_wrap_i64(a),
                                          i32_wrap_i64(a >> 32L),
                                          b)
}

