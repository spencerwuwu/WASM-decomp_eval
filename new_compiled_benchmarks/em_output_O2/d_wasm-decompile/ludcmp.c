import memory env_memory;

import global stack_pointer:int;
import global memory_base:int;
import global stderr:int;

data rodata(offset: memory_base) =
  "x\00begin dump: %s\00%0.2lf \00\0aend   dump: %s\0a\00==BEGIN DUMP_ARR"
  "AYS==\0a\00==END   DUMP_ARRAYS==\0a\00";

import function memset(a:int, b:int, c:int):int;

import function free(a:int);

import function fwrite(a:int, b:int, c:int, d:int):int;

import function fiprintf(a:int, b:int, c:int):int;

import function fputc(a:int, b:int):int;

import function small_fprintf(a:int, b:int, c:int):int;

import function legalimport_polybench_alloc_data(a:int, b:int, c:int):int;

export function wasm_call_ctors() {
  nop
}

export function wasm_apply_data_relocs() {
  nop
}

export function kernel_ludcmp(a:int, b:int, c:int, d:int, e:int) {
  var k:int;
  var i:int;
  var h:int;
  var o:double_ptr;
  var g:double;
  var f:int;
  var m:int;
  var l:int;
  var n:int;
  var p:int;
  var j:int;
  if (a <= 0) goto B_a;
  loop L_b {
    j = 0;
    if (k) {
      loop L_d {
        m = b + k * 16000;
        o = m + (i = j << 3);
        g = o[0];
        if (eqz(j)) goto B_e;
        p = j & 1;
        f = 0;
        if (j != 1) {
          n = j & 2147483646;
          l = 0;
          loop L_g {
            g = g - m[f]:double * (b + f * 16000 + i)[0]:double -
                m[h = f | 1]:double * (b + h * 16000 + i)[0]:double;
            f = f + 2;
            l = l + 2;
            if (l != n) continue L_g;
          }
        }
        if (eqz(p)) goto B_e;
        g = g - m[f]:double * (b + f * 16000 + i)[0]:double;
        label B_e:
        o[0] = g / (b + j * 16000 + i)[0]:double;
        j = j + 1;
        if (j != k) continue L_d;
      }
    }
    n = k & 2147483646;
    p = k & 1;
    j = k;
    loop L_h {
      i = b + k * 16000;
      o = i + (m = j << 3);
      g = o[0];
      if (eqz(k)) goto B_i;
      f = 0;
      l = 0;
      if (k != 1) {
        loop L_k {
          g = g - i[f]:double * (b + f * 16000 + m)[0]:double -
              i[h = f | 1]:double * (b + h * 16000 + m)[0]:double;
          f = f + 2;
          l = l + 2;
          if (l != n) continue L_k;
        }
      }
      if (eqz(p)) goto B_i;
      g = g - i[f]:double * (b + f * 16000 + m)[0]:double;
      label B_i:
      o[0] = g;
      j = j + 1;
      if (j != a) continue L_h;
    }
    k = k + 1;
    if (k != a) continue L_b;
  }
  h = 0;
  if (a <= 0) goto B_a;
  loop L_l {
    g = (c + (j = h << 3))[0]:double;
    if (eqz(h)) goto B_m;
    k = h & 1;
    f = 0;
    if (h != 1) {
      n = h & 2147483646;
      m = 0;
      loop L_o {
        g = 
          g -
          ((l = b + h * 16000) + (i = f << 3))[0]:double * (e + i)[0]:double -
          (l + (i = i | 8))[0]:double * (e + i)[0]:double;
        f = f + 2;
        m = m + 2;
        if (m != n) continue L_o;
      }
    }
    if (eqz(k)) goto B_m;
    g = g - ((f = f << 3) + b + h * 16000)[0]:double * (e + f)[0]:double;
    label B_m:
    (e + j)[0]:double = g;
    h = h + 1;
    if (h != a) continue L_l;
  }
  n = 0;
  if (a <= 0) goto B_a;
  l = a;
  loop L_p {
    g = (e + (j = (l = (h = l) - 1) << 3))[0]:double;
    if (a <= h) goto B_q;
    f = 
      if (n & 1) {
        g = g - ((f = h << 3) + b + l * 16000)[0]:double * (d + f)[0]:double;
        h + 1;
      } else {
        h
      }
    if (n == 1) goto B_q;
    loop L_s {
      g = 
        g -
        ((m = b + l * 16000) + (i = f << 3))[0]:double * (d + i)[0]:double -
        (m + (i = i + 8))[0]:double * (d + i)[0]:double;
      f = f + 2;
      if (f != a) continue L_s;
    }
    label B_q:
    (d + j)[0]:double = g / (b + l * 16000 + j)[0]:double;
    n = n + 1;
    if (h > 1) continue L_p;
  }
  label B_a:
}

export function submain(a:int, b:int_ptr):int {
  var c:int;
  var d:int;
  var h:int;
  var e:double_ptr;
  var i:double_ptr;
  var p:int;
  var l:int;
  var m:int;
  var f:double_ptr;
  var j:int = stack_pointer - 48;
  stack_pointer = j;
  var g:int = legalfunc_polybench_alloc_data(4000000L, 8);
  var n:int = legalfunc_polybench_alloc_data(2000L, 8);
  var k:int = legalfunc_polybench_alloc_data(2000L, 8);
  var o:int = legalfunc_polybench_alloc_data(2000L, 8);
  loop L_a {
    (k + (d = c << 3))[0]:long = 0L;
    (d + o)[0]:long = 0L;
    h = 1;
    (d + n)[0]:double = f64_convert_i32_s(d = c | 1) / 2000.0 * 0.5 + 4.0;
    (k + (d = d << 3))[0]:long = 0L;
    (d + o)[0]:long = 0L;
    (d + n)[0]:double = f64_convert_i32_s(c = c + 2) / 2000.0 * 0.5 + 4.0;
    if (c != 2000) continue L_a;
  }
  loop L_b {
    l = h & 1;
    c = 0;
    if (e) {
      m = h & 2147483646;
      d = 0;
      loop L_d {
        f = g + e * 16000;
        (f + (i = c << 3))[0]:double =
          f64_convert_i32_s(0 - c) / 2000.0 + 1.0;
        (f + (i | 8))[0]:double = f64_convert_i32_s(c ^ -1) / 2000.0 + 1.0;
        c = c + 2;
        d = d + 2;
        if (d != m) continue L_d;
      }
    }
    if (l) { (g + e * 16000)[c]:double = f64_convert_i32_s(0 - c) / 2000.0 + 1.0 }
    d = e << 3;
    c = e + 1;
    if (e <= 1998) { memset(g + e * 16008 + 8, 0, 15992 - d) }
    (g + e * 16000 + d)[0]:long = 4607182418800017408L;
    h = h + 1;
    e = c;
    if (c != 2000) continue L_b;
  }
  m = memset(legalfunc_polybench_alloc_data(4000000L, 8), 0, 32000000);
  loop L_g {
    l = 0;
    loop L_h {
      d = p << 3;
      f = d + g + (h = l * 16000);
      c = 0;
      loop L_i {
        i = h + m;
        e = i + (c << 3);
        e[0] = f[0] * (g + c * 16000 + d)[0]:double + e[0];
        i = i + ((e = c | 1) << 3);
        i[0] = f[0] * (g + e * 16000 + d)[0]:double + i[0];
        c = c + 2;
        if (c != 2000) continue L_i;
      }
      l = l + 1;
      if (l != 2000) continue L_h;
    }
    p = p + 1;
    if (p != 2000) continue L_g;
  }
  h = 0;
  loop L_j {
    i = 0;
    loop L_k {
      d = g + (f = h * 16000);
      (d + (c = i << 3))[0]:double = ((f = f + m) + c)[0]:double;
      (d + (e = c + 8))[0]:double = (e + f)[0]:double;
      (d + (e = c + 16))[0]:double = (e + f)[0]:double;
      (d + (e = c + 24))[0]:double = (e + f)[0]:double;
      (d + (c = c + 32))[0]:double = (c + f)[0]:double;
      i = i + 5;
      if (i != 2000) continue L_k;
    }
    h = h + 1;
    if (h != 2000) continue L_j;
  }
  free(m);
  kernel_ludcmp(2000, g, n, k, o);
  if (a < 43) goto B_l;
  if ((b[0])[0]:ubyte) goto B_l;
  c = memory_base;
  fwrite(c + 42, 22, 1, d = stderr[0]:int);
  j[8]:int = c;
  fiprintf(d, c + 2, j + 32);
  c = 0;
  loop L_m {
    if (eqz((c & 65535) % 20)) { fputc(10, d) }
    j[2]:double = k[c]:double;
    small_fprintf(d, memory_base + 17, j + 16);
    c = c + 1;
    if (c != 2000) continue L_m;
  }
  j[0]:int = (c = memory_base);
  fiprintf(d, c + 25, j);
  fwrite(c + 65, 22, 1, d);
  label B_l:
  free(g);
  free(n);
  free(k);
  free(o);
  stack_pointer = j + 48;
  return 0;
}

function legalfunc_polybench_alloc_data(a:long, b:int):int {
  return legalimport_polybench_alloc_data(i32_wrap_i64(a),
                                          i32_wrap_i64(a >> 32L),
                                          b)
}

