import memory env_memory;

import global stack_pointer:int;
import global memory_base:int;
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
  nop
}

export function wasm_apply_data_relocs() {
  nop
}

export function kernel_trisolv(a:int, b:int, c:int, d:int) {
  var e:int;
  var j:int;
  var f:double;
  var m:int;
  var i:int;
  if (a > 0) {
    loop L_b {
      var h:double_ptr = c + (j = e << 3);
      h[0] = (f = (d + j)[0]:double);
      if (eqz(e)) goto B_c;
      var g:int = 0;
      if (e != 1) {
        var l:int = e & 2147483646;
        var k:int = 0;
        loop L_e {
          h[0] =
            (f = 
               f -
               ((m = b + e * 16000) + (i = g << 3))[0]:double * (c + i)[0]:double);
          h[0] = (f = f - (m + (i = i | 8))[0]:double * (c + i)[0]:double);
          g = g + 2;
          k = k + 2;
          if (k != l) continue L_e;
        }
      }
      if (eqz(e & 1)) goto B_c;
      h[0] =
        (f = f - ((g = g << 3) + b + e * 16000)[0]:double * (c + g)[0]:double);
      label B_c:
      h[0] = f / (b + e * 16000 + j)[0]:double;
      e = e + 1;
      if (e != a) continue L_b;
    }
  }
}

export function submain(a:int, b:int_ptr):int {
  var d:int;
  var c:int;
  var f:double;
  var p:int;
  var j:double_ptr;
  var e:int;
  var l:int;
  var o:int;
  var n:int;
  var g:int = stack_pointer - 48;
  stack_pointer = g;
  var k:int = legalfunc_polybench_alloc_data(4000000L, 8);
  var h:int = legalfunc_polybench_alloc_data(2000L, 8);
  var m:int = legalfunc_polybench_alloc_data(2000L, 8);
  var i:int = 1;
  loop L_a {
    (h + (c = d << 3))[0]:long = -4571373524106608640L;
    (c + m)[0]:double = f64_convert_i32_s(d);
    n = i & 1;
    e = d + 2001;
    c = 0;
    if (d) {
      o = i & 2147483646;
      j = 0;
      loop L_c {
        l = k + d * 16000;
        l[c]:double = ((f = f64_convert_i32_s(e - c)) + f) / 2000.0;
        l[p = c | 1]:double = ((f = f64_convert_i32_s(e - p)) + f) / 2000.0;
        c = c + 2;
        j = j + 2;
        if (j != o) continue L_c;
      }
    }
    if (n) {
      (k + d * 16000)[c]:double =
        ((f = f64_convert_i32_s(e - c)) + f) / 2000.0
    }
    i = i + 1;
    d = d + 1;
    if (d != 2000) continue L_a;
  }
  d = 0;
  loop L_e {
    j = h + (i = d << 3);
    j[0] = (f = (i + m)[0]:double);
    if (eqz(d)) goto B_f;
    n = d & 1;
    c = 0;
    if (d != 1) {
      o = d & 2147483646;
      l = 0;
      loop L_h {
        j[0] =
          (f = 
             f -
             ((p = k + d * 16000) + (e = c << 3))[0]:double * (e + h)[0]:double);
        j[0] = (f = f - (p + (e = e | 8))[0]:double * (e + h)[0]:double);
        c = c + 2;
        l = l + 2;
        if (l != o) continue L_h;
      }
    }
    if (eqz(n)) goto B_f;
    j[0] =
      (f = f - ((c = c << 3) + k + d * 16000)[0]:double * (c + h)[0]:double);
    label B_f:
    j[0] = f / (k + d * 16000 + i)[0]:double;
    d = d + 1;
    if (d != 2000) continue L_e;
  }
  if (a < 43) goto B_i;
  if ((b[0])[0]:ubyte) goto B_i;
  c = memory_base;
  fwrite(c + 42, 22, 1, e = stderr[0]:int);
  g[8]:int = c;
  fiprintf(e, c + 2, g + 32);
  c = 0;
  loop L_j {
    g[2]:double = h[c]:double;
    small_fprintf(e, memory_base + 17, g + 16);
    if (eqz((c & 65535) % 20)) { fputc(10, e) }
    c = c + 1;
    if (c != 2000) continue L_j;
  }
  g[0]:int = (c = memory_base);
  fiprintf(e, c + 25, g);
  fwrite(c + 65, 22, 1, e);
  label B_i:
  free(k);
  free(h);
  free(m);
  stack_pointer = g + 48;
  return 0;
}

function legalfunc_polybench_alloc_data(a:long, b:int):int {
  return legalimport_polybench_alloc_data(i32_wrap_i64(a),
                                          i32_wrap_i64(a >> 32L),
                                          b)
}

