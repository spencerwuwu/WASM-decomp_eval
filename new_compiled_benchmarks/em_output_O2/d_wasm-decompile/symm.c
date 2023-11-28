import memory env_memory;

import global stack_pointer:int;
import global memory_base:int;
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
  nop
}

export function wasm_apply_data_relocs() {
  nop
}

export function kernel_symm(a:int, b:int, c:double, d:double, e:int, f:int, g:int) {
  var h:int;
  var m:double_ptr;
  var s:double_ptr;
  var k:double;
  var l:int;
  var i:int;
  if (a > 0) {
    var n:int = b <= 0;
    loop L_b {
      if (eqz(n)) {
        var o:int = f + h * 8000;
        var p:double_ptr = o + (h << 3);
        var j:int = 0;
        loop L_d {
          if (eqz(h)) {
            k = 0.0;
            goto B_e;
          }
          l = j << 3;
          var q:double_ptr = l + g + h * 9600;
          i = 0;
          k = 0.0;
          loop L_g {
            var r:double_ptr = e + (m = i * 9600) + l;
            r[0] = q[0] * c * (s = o + (i << 3))[0] + r[0];
            k = (g + m + l)[0]:double * s[0] + k;
            i = i + 1;
            if (i != h) continue L_g;
          }
          label B_e:
          l = j << 3;
          m = l + e + (i = h * 9600);
          m[0] = c * k + d * m[0] + (g + i + l)[0]:double * c * p[0];
          j = j + 1;
          if (j != b) continue L_d;
        }
      }
      h = h + 1;
      if (h != a) continue L_b;
    }
  }
}

export function submain(a:int, b:int_ptr):int {
  var d:int;
  var e:double_ptr;
  var k:double_ptr;
  var f:double_ptr;
  var h:double_ptr;
  var c:{ a:long, b:long, c:long, d:long, e:long, f:long, g:long, h:long }
  var g:int;
  var p:int;
  var o:double;
  var i:int = stack_pointer - 48;
  stack_pointer = i;
  var l:int = legalfunc_polybench_alloc_data(1200000L, 8);
  var j:int = legalfunc_polybench_alloc_data(1000000L, 8);
  var m:int = legalfunc_polybench_alloc_data(1200000L, 8);
  loop L_a {
    f = d + 1200;
    c = 0;
    loop L_b {
      h = c << 3;
      (h + l + (e = d * 9600))[0]:double =
        f64_convert_i32_s((c + d) % 100) / 1000.0;
      (e + m + h)[0]:double = f64_convert_i32_s((f - c) % 100) / 1000.0;
      c = c + 1;
      if (c != 1200) continue L_b;
    }
    k = 1;
    d = d + 1;
    if (d != 1000) continue L_a;
  }
  f = 0;
  loop L_c {
    p = k & 1;
    d = f;
    if (eqz(d)) {
      c = 0;
      goto B_d;
    }
    g = k & 2147483646;
    c = 0;
    e = 0;
    loop L_f {
      h = j + d * 8000;
      h[c]:double = f64_convert_i32_s((c + d) % 100) / 1000.0;
      h[f = c | 1]:double = f64_convert_i32_s((d + f) % 100) / 1000.0;
      c = c + 2;
      e = e + 2;
      if (e != g) continue L_f;
    }
    label B_d:
    if (p) { (j + d * 8000)[c]:double = f64_convert_i32_s((c + d) % 100) / 1000.0 }
    f = d + 1;
    if (d > 998) goto B_h;
    c = 0;
    e = f;
    h = 7 - d & 7;
    if (h) {
      loop L_j {
        (j + d * 8000)[e]:long = -4571373524106608640L;
        e = e + 1;
        c = c + 1;
        if (c != h) continue L_j;
      }
    }
    if (d - 992 < 7) goto B_h;
    loop L_k {
      c = j + d * 8000 + (e << 3);
      c.a = -4571373524106608640L;
      c.b = -4571373524106608640L;
      c.c = -4571373524106608640L;
      c.d = -4571373524106608640L;
      c.e = -4571373524106608640L;
      c.f = -4571373524106608640L;
      c.g = -4571373524106608640L;
      c.h = -4571373524106608640L;
      e = e + 8;
      if (e != 1000) continue L_k;
    }
    label B_h:
    k = k + 1;
    if (f != 1000) continue L_c;
  }
  g = 0;
  loop L_l {
    p = j + g * 8000;
    var q:double_ptr = p + (g << 3);
    var n:int = 0;
    loop L_m {
      if (eqz(g)) {
        o = 0.0;
        goto B_n;
      }
      d = n << 3;
      k = d + m + g * 9600;
      c = 0;
      o = 0.0;
      loop L_p {
        h = l + (e = c * 9600) + d;
        h[0] = k[0] * 1.5 * (f = p + (c << 3))[0] + h[0];
        o = (e + m + d)[0]:double * f[0] + o;
        c = c + 1;
        if (c != g) continue L_p;
      }
      label B_n:
      d = n << 3;
      e = d + l + (c = g * 9600);
      e[0] = o * 1.5 + e[0] * 1.2 + (c + m + d)[0]:double * 1.5 * q[0];
      n = n + 1;
      if (n != 1200) continue L_m;
    }
    g = g + 1;
    if (g != 1000) continue L_l;
  }
  if (a < 43) goto B_q;
  if ((b[0])[0]:ubyte) goto B_q;
  c = memory_base;
  fwrite(c + 42, 22, 1, e = stderr[0]:int);
  i[8]:int = c + 15;
  fiprintf(e, c, i + 32);
  d = 0;
  loop L_r {
    h = d * 1000;
    c = 0;
    loop L_s {
      if (eqz((c + h) % 20)) { fputc(10, e) }
      i[2]:double = (l + d * 9600)[c]:double;
      small_fprintf(e, memory_base + 17, i + 16);
      c = c + 1;
      if (c != 1200) continue L_s;
    }
    d = d + 1;
    if (d != 1000) continue L_r;
  }
  i[0]:int = (c = memory_base) + 15;
  fiprintf(e, c + 25, i);
  fwrite(c + 65, 22, 1, e);
  label B_q:
  free(l);
  free(j);
  free(m);
  stack_pointer = i + 48;
  return 0;
}

function legalfunc_polybench_alloc_data(a:long, b:int):int {
  return legalimport_polybench_alloc_data(i32_wrap_i64(a),
                                          i32_wrap_i64(a >> 32L),
                                          b)
}

