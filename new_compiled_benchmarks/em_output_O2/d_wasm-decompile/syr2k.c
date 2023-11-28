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

export function kernel_syr2k(a:int, b:int, c:double, d:double, e:int, f:int, g:int) {
  var k:int;
  var j:double_ptr;
  var i:double_ptr;
  var l:double_ptr;
  var o:double_ptr;
  if (a > 0) {
    var n:int = 1;
    loop L_b {
      var m:int = n & 3;
      var h:int = 0;
      if (k >= 3) {
        var p:int = n & -4;
        o = 0;
        loop L_d {
          i = e + k * 9600;
          l = i + (j = h << 3);
          l[0] = l[0] * d;
          l = i + (j | 8);
          l[0] = l[0] * d;
          l = i + (j | 16);
          l[0] = l[0] * d;
          i = i + (j | 24);
          i[0] = i[0] * d;
          h = h + 4;
          o = o + 4;
          if (o != p) continue L_d;
        }
      }
      i = 0;
      if (m) {
        loop L_f {
          j = e + k * 9600 + (h << 3);
          j[0] = j[0] * d;
          h = h + 1;
          i = i + 1;
          if (i != m) continue L_f;
        }
      }
      m = 0;
      if (b > 0) {
        loop L_h {
          i = m << 3;
          o = i + f + (h = k * 8000);
          l = g + h + i;
          h = 0;
          loop L_i {
            j = e + k * 9600 + (h << 3);
            j[0] =
              j[0] +
              (f + (j = h * 8000) + i)[0]:double * c * l[0] +
              (g + j + i)[0]:double * c * o[0];
            h = h + 1;
            if (h != n) continue L_i;
          }
          m = m + 1;
          if (m != b) continue L_h;
        }
      }
      n = n + 1;
      k = k + 1;
      if (k != a) continue L_b;
    }
  }
}

export function submain(a:int, b:int_ptr):int {
  var d:double_ptr;
  var e:double_ptr;
  var j:double_ptr;
  var c:int;
  var f:int;
  var k:int;
  var g:double_ptr;
  var n:double_ptr;
  var h:int = stack_pointer - 48;
  stack_pointer = h;
  var i:int = legalfunc_polybench_alloc_data(1440000L, 8);
  var l:int = legalfunc_polybench_alloc_data(1200000L, 8);
  var m:int = legalfunc_polybench_alloc_data(1200000L, 8);
  loop L_a {
    c = 0;
    loop L_b {
      f = c << 3;
      (f + l + (e = d * 8000))[0]:double =
        f64_convert_i32_s(((j = c * d) + 1) % 1200) / 1200.0;
      (e + m + f)[0]:double = f64_convert_i32_s((j + 2) % 1000) / 1000.0;
      c = c + 1;
      if (c != 1000) continue L_b;
    }
    d = d + 1;
    if (d != 1200) continue L_a;
  }
  d = 0;
  loop L_c {
    c = 0;
    loop L_d {
      e = i + d * 9600;
      e[c]:double = f64_convert_i32_s((c * d + 3) % 1200) / 1000.0;
      e[f = c | 1]:double = f64_convert_i32_s((d * f + 3) % 1200) / 1000.0;
      c = c + 2;
      if (c != 1200) continue L_d;
    }
    k = 1;
    d = d + 1;
    if (d != 1200) continue L_c;
  }
  f = 0;
  loop L_e {
    j = 0;
    c = 0;
    if (f >= 3) {
      var o:int = k & 2147483644;
      n = 0;
      loop L_g {
        d = i + f * 9600;
        g = d + (e = c << 3);
        g[0] = g[0] * 1.2;
        g = d + (e | 8);
        g[0] = g[0] * 1.2;
        g = d + (e | 16);
        g[0] = g[0] * 1.2;
        d = d + (e | 24);
        d[0] = d[0] * 1.2;
        c = c + 4;
        n = n + 4;
        if (n != o) continue L_g;
      }
    }
    var p:int = k & 3;
    if (p) {
      loop L_i {
        d = i + f * 9600 + (c << 3);
        d[0] = d[0] * 1.2;
        c = c + 1;
        j = j + 1;
        if (j != p) continue L_i;
      }
    }
    g = 0;
    loop L_j {
      d = g << 3;
      j = d + l + (c = f * 8000);
      n = c + m + d;
      c = 0;
      loop L_k {
        e = i + f * 9600 + (c << 3);
        e[0] =
          e[0] +
          (l + (e = c * 8000) + d)[0]:double * 1.5 * n[0] +
          (e + m + d)[0]:double * 1.5 * j[0];
        c = c + 1;
        if (c != k) continue L_k;
      }
      g = g + 1;
      if (g != 1000) continue L_j;
    }
    k = k + 1;
    f = f + 1;
    if (f != 1200) continue L_e;
  }
  if (a < 43) goto B_l;
  if ((b[0])[0]:ubyte) goto B_l;
  c = memory_base;
  fwrite(c + 42, 22, 1, e = stderr[0]:int);
  h[8]:int = c + 15;
  fiprintf(e, c, h + 32);
  d = 0;
  loop L_m {
    f = d * 1200;
    c = 0;
    loop L_n {
      if (eqz((c + f) % 20)) { fputc(10, e) }
      h[2]:double = (i + d * 9600)[c]:double;
      small_fprintf(e, memory_base + 17, h + 16);
      c = c + 1;
      if (c != 1200) continue L_n;
    }
    d = d + 1;
    if (d != 1200) continue L_m;
  }
  h[0]:int = (c = memory_base) + 15;
  fiprintf(e, c + 25, h);
  fwrite(c + 65, 22, 1, e);
  label B_l:
  free(i);
  free(l);
  free(m);
  stack_pointer = h + 48;
  return 0;
}

function legalfunc_polybench_alloc_data(a:long, b:int):int {
  return legalimport_polybench_alloc_data(i32_wrap_i64(a),
                                          i32_wrap_i64(a >> 32L),
                                          b)
}

