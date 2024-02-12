import memory env_memory;

import global stack_pointer:int;
import global memory_base:int;
import global stderr:int;

data rodata(offset: memory_base) =
  "cov\00begin dump: %s\00%0.2lf \00\0aend   dump: %s\0a\00==BEGIN DUMP_A"
  "RRAYS==\0a\00==END   DUMP_ARRAYS==\0a\00";

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

export function kernel_covariance(a:int, b:int, c:double, d:int, e:int, f:int) {
  var l:double_ptr;
  var j:double_ptr;
  var h:double;
  var o:int;
  var g:int;
  var m:double_ptr;
  var i:int;
  var k:int;
  var q:int;
  var p:int;
  var n:int;
  if (a > 0) {
    m = b & -4;
    k = b & 3;
    p = b <= 0;
    q = b < 4;
    loop L_b {
      i = f + (j = l << 3);
      i[0]:long = 0L;
      if (p) {
        h = 0.0;
        goto B_c;
      }
      n = 0;
      h = 0.0;
      g = 0;
      o = 0;
      if (eqz(q)) {
        loop L_f {
          i[0]:double = (h = (d + g * 9600 + j)[0]:double + h);
          i[0]:double = (h = (d + (g | 1) * 9600 + j)[0]:double + h);
          i[0]:double = (h = (d + (g | 2) * 9600 + j)[0]:double + h);
          i[0]:double = (h = (d + (g | 3) * 9600 + j)[0]:double + h);
          g = g + 4;
          o = o + 4;
          if (o != m) continue L_f;
        }
      }
      if (eqz(k)) goto B_c;
      loop L_g {
        i[0]:double = (h = (d + g * 9600 + j)[0]:double + h);
        g = g + 1;
        n = n + 1;
        if (n != k) continue L_g;
      }
      label B_c:
      i[0]:double = h / c;
      l = l + 1;
      if (l != a) continue L_b;
    }
  }
  if (b > 0) {
    q = a & -4;
    p = a & 3;
    o = 0;
    var r:int = a <= 0;
    var s:int = a < 4;
    loop L_i {
      if (r) goto B_j;
      n = 0;
      g = 0;
      k = 0;
      if (eqz(s)) {
        loop L_l {
          j = d + o * 9600;
          m = j + (i = g << 3);
          m[0] = m[0] - (f + i)[0]:double;
          l = j + (m = i | 8);
          l[0] = l[0] - (f + m)[0]:double;
          l = j + (m = i | 16);
          l[0] = l[0] - (f + m)[0]:double;
          j = j + (i = i | 24);
          j[0] = j[0] - (f + i)[0]:double;
          g = g + 4;
          k = k + 4;
          if (k != q) continue L_l;
        }
      }
      if (eqz(p)) goto B_j;
      loop L_m {
        i = g << 3;
        j = i + d + o * 9600;
        j[0] = j[0] - (f + i)[0]:double;
        g = g + 1;
        n = n + 1;
        if (n != p) continue L_m;
      }
      label B_j:
      o = o + 1;
      if (o != b) continue L_i;
    }
  }
  if (a > 0) {
    m = b & -2;
    p = b & 1;
    c = c + -1.0;
    k = 0;
    loop L_o {
      l = k;
      loop L_p {
        f = l << 3;
        i = f + e + k * 9600;
        i[0]:long = 0L;
        if (b <= 0) {
          h = 0.0;
          goto B_q;
        }
        g = 0;
        h = 0.0;
        j = 0;
        if (b != 1) {
          loop L_t {
            i[0]:double =
              (h = 
                 ((n = d + g * 9600) + (o = k << 3))[0]:double * (f + n)[0]:double + h);
            i[0]:double =
              (h = ((n = d + (g | 1) * 9600) + o)[0]:double * (f + n)[0]:double + h);
            g = g + 2;
            j = j + 2;
            if (j != m) continue L_t;
          }
        }
        if (eqz(p)) goto B_q;
        i[0]:double =
          (h = (g = d + g * 9600)[k]:double * (f + g)[0]:double + h);
        label B_q:
        i[0]:double = (h = h / c);
        (e + l * 9600)[k]:double = h;
        l = l + 1;
        if (l < a) continue L_p;
      }
      k = k + 1;
      if (k != a) continue L_o;
    }
  }
}

export function submain(a:int, b:int_ptr):int {
  var g:double_ptr;
  var f:int;
  var h:double_ptr;
  var c:int;
  var d:double;
  var e:int;
  var i:int;
  var j:int = stack_pointer - 48;
  stack_pointer = j;
  var k:int = legalfunc_polybench_alloc_data(1680000L, 8);
  var m:int = legalfunc_polybench_alloc_data(1440000L, 8);
  var l:int = legalfunc_polybench_alloc_data(1200L, 8);
  loop L_a {
    d = f64_convert_i32_s(g);
    c = 0;
    loop L_b {
      e = k + g * 9600;
      e[c]:double = d * f64_convert_i32_s(c) / 1200.0;
      e[f = c + 1]:double = d * f64_convert_i32_s(f) / 1200.0;
      e[f = c + 2]:double = d * f64_convert_i32_s(f) / 1200.0;
      c = c + 3;
      if (c != 1200) continue L_b;
    }
    g = g + 1;
    if (g != 1400) continue L_a;
  }
  loop L_c {
    c = l + (g = h << 3);
    c[0]:long = 0L;
    f = 0;
    d = 0.0;
    loop L_d {
      c[0]:double = (d = d + (e = k + f * 9600 + g)[0]:double);
      c[0]:double = (d = d + (e + 9600)[0]:double);
      c[0]:double = (d = d + (e + 19200)[0]:double);
      c[0]:double = (d = d + (e + 28800)[0]:double);
      c[0]:double = (d = d + (e + 38400)[0]:double);
      f = f + 5;
      if (f != 1400) continue L_d;
    }
    c[0]:double = d / 1400.0;
    h = h + 1;
    if (h != 1200) continue L_c;
  }
  loop L_e {
    f = 0;
    loop L_f {
      e = k + i * 9600;
      g = e + (c = f << 3);
      g[0] = g[0] - (c + l)[0]:double;
      h = e + (g = c | 8);
      h[0] = h[0] - (g + l)[0]:double;
      h = e + (g = c | 16);
      h[0] = h[0] - (g + l)[0]:double;
      e = e + (c = c | 24);
      e[0]:double = e[0]:double - (c + l)[0]:double;
      f = f + 4;
      if (f != 1200) continue L_f;
    }
    i = i + 1;
    if (i != 1400) continue L_e;
  }
  i = 0;
  loop L_g {
    var n:int = i;
    loop L_h {
      f = n << 3;
      e = f + m + i * 9600;
      e[0]:long = 0L;
      c = 0;
      d = 0.0;
      loop L_i {
        e[0]:double =
          (d = 
             ((h = k + c * 9600) + (g = i << 3))[0]:double * (f + h)[0]:double + d);
        e[0]:double =
          (d = ((h = k + (c | 1) * 9600) + g)[0]:double * (f + h)[0]:double + d);
        c = c + 2;
        if (c != 1400) continue L_i;
      }
      e[0]:double = (d = d / 1399.0);
      (m + n * 9600 + g)[0]:double = d;
      n = n + 1;
      if (n != 1200) continue L_h;
    }
    i = i + 1;
    if (i != 1200) continue L_g;
  }
  if (a < 43) goto B_j;
  if ((b[0])[0]:ubyte) goto B_j;
  c = memory_base;
  fwrite(c + 44, 22, 1, f = stderr[0]:int);
  j[8]:int = c;
  fiprintf(f, c + 4, j + 32);
  e = 0;
  loop L_k {
    g = e * 1200;
    c = 0;
    loop L_l {
      if (eqz((c + g) % 20)) { fputc(10, f) }
      j[2]:double = (m + e * 9600)[c]:double;
      small_fprintf(f, memory_base + 19, j + 16);
      c = c + 1;
      if (c != 1200) continue L_l;
    }
    e = e + 1;
    if (e != 1200) continue L_k;
  }
  j[0]:int = (c = memory_base);
  fiprintf(f, c + 27, j);
  fwrite(c + 67, 22, 1, f);
  label B_j:
  free(k);
  free(m);
  free(l);
  stack_pointer = j + 48;
  return 0;
}

function legalfunc_polybench_alloc_data(a:long, b:int):int {
  return legalimport_polybench_alloc_data(i32_wrap_i64(a),
                                          i32_wrap_i64(a >> 32L),
                                          b)
}

