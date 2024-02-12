import memory env_memory;

import global stack_pointer:int;
import global memory_base:int;
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
  nop
}

export function wasm_apply_data_relocs() {
  nop
}

export function kernel_trmm(a:int, b:int, c:double, d:int, e:int) {
  var f:int;
  var r:double_ptr;
  var s:double_ptr;
  if (a > 0) {
    var m:int = a - 2;
    loop L_b {
      var h:int = f + 1;
      if (b > 0) {
        var n:int = f << 3;
        var o:double_ptr = n + d + h * 8000;
        var p:int = f + 2;
        var q:int = (f ^ -1) + a & 1;
        var k:int = 0;
        loop L_d {
          var l:int = k << 3;
          var i:double_ptr = l + e + f * 9600;
          var g:double = i[0];
          if (a <= h) goto B_e;
          var j:int = if (q) {
                        i[0] = (g = o[0] * (e + h * 9600 + l)[0]:double + g);
                        p;
                      } else {
                        h
                      }
          if (f == m) goto B_e;
          loop L_g {
            i[0] =
              (g = (r = d + j * 8000 + n)[0] * (s = e + j * 9600 + l)[0] + g);
            i[0] = (g = (r + 8000)[0]:double * (s + 9600)[0]:double + g);
            j = j + 2;
            if (j != a) continue L_g;
          }
          label B_e:
          i[0] = g * c;
          k = k + 1;
          if (k != b) continue L_d;
        }
      }
      f = h;
      if (f != a) continue L_b;
    }
  }
}

export function submain(a:int, b:int_ptr):int {
  var d:double_ptr;
  var l:int;
  var h:double_ptr;
  var c:int;
  var e:double_ptr;
  var f:int;
  var n:int;
  var o:int;
  var m:int;
  var g:int = stack_pointer - 48;
  stack_pointer = g;
  var j:int = legalfunc_polybench_alloc_data(1000000L, 8);
  var k:int = legalfunc_polybench_alloc_data(1200000L, 8);
  loop L_a {
    if (eqz(d)) goto B_b;
    m = d & 1;
    c = 0;
    if (d != 1) {
      n = d & 2147483646;
      e = 0;
      loop L_d {
        h = j + d * 8000;
        h[c]:double = f64_convert_i32_s((c + d) % 1000) / 1000.0;
        h[l = c | 1]:double = f64_convert_i32_s((d + l) % 1000) / 1000.0;
        c = c + 2;
        e = e + 2;
        if (e != n) continue L_d;
      }
    }
    if (eqz(m)) goto B_b;
    (j + d * 8000)[c]:double = f64_convert_i32_s((c + d) % 1000) / 1000.0;
    label B_b:
    (j + d * 8000)[d]:long = 4607182418800017408L;
    e = d + 1200;
    c = 0;
    loop L_e {
      h = k + d * 9600;
      h[c]:double = f64_convert_i32_s((e - c) % 1200) / 1200.0;
      h[l = c | 1]:double = f64_convert_i32_s((e - l) % 1200) / 1200.0;
      c = c + 2;
      if (c != 1200) continue L_e;
    }
    d = d + 1;
    if (d != 1000) continue L_a;
  }
  loop L_f {
    n = f << 3;
    var p:double_ptr = n + j + (o = f + 1) * 8000;
    var q:int = f + 2;
    var r:int = 1 - f & 1;
    m = 0;
    loop L_g {
      l = m << 3;
      d = l + k + f * 9600;
      var i:double = d[0];
      if (f > 998) goto B_h;
      c = if (r) {
            d[0] = (i = p[0] * (k + o * 9600 + l)[0]:double + i);
            q;
          } else {
            o
          }
      if (f == 998) goto B_h;
      loop L_j {
        d[0] =
          (i = (e = j + c * 8000 + n)[0] * (h = k + c * 9600 + l)[0] + i);
        d[0] = (i = (e + 8000)[0]:double * (h + 9600)[0]:double + i);
        c = c + 2;
        if (c != 1000) continue L_j;
      }
      label B_h:
      d[0] = i * 1.5;
      m = m + 1;
      if (m != 1200) continue L_g;
    }
    f = o;
    if (f != 1000) continue L_f;
  }
  if (a < 43) goto B_k;
  if ((b[0])[0]:ubyte) goto B_k;
  c = memory_base;
  fwrite(c + 42, 22, 1, e = stderr[0]:int);
  g[8]:int = c + 15;
  fiprintf(e, c, g + 32);
  d = 0;
  loop L_l {
    h = d * 1000;
    c = 0;
    loop L_m {
      if (eqz((c + h) % 20)) { fputc(10, e) }
      g[2]:double = (k + d * 9600)[c]:double;
      small_fprintf(e, memory_base + 17, g + 16);
      c = c + 1;
      if (c != 1200) continue L_m;
    }
    d = d + 1;
    if (d != 1000) continue L_l;
  }
  g[0]:int = (c = memory_base) + 15;
  fiprintf(e, c + 25, g);
  fwrite(c + 65, 22, 1, e);
  label B_k:
  free(j);
  free(k);
  stack_pointer = g + 48;
  return 0;
}

function legalfunc_polybench_alloc_data(a:long, b:int):int {
  return legalimport_polybench_alloc_data(i32_wrap_i64(a),
                                          i32_wrap_i64(a >> 32L),
                                          b)
}

