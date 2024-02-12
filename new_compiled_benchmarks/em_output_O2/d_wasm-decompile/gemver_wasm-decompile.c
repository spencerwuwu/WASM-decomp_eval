import memory env_memory;

import global stack_pointer:int;
import global memory_base:int;
import global stderr:int;

data rodata(offset: memory_base) =
  "w\00begin dump: %s\00%0.2lf \00\0aend   dump: %s\0a\00==BEGIN DUMP_ARR"
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

export function kernel_gemver(a:int, b:double, c:double, d:int, e:int, f:int, g:int, h:double_ptr, i:int, j:int, k:int, l:int) {
  var t:int;
  var m:int;
  var o:double_ptr;
  var n:double_ptr;
  var q:double_ptr;
  var p:double_ptr;
  var s:double_ptr;
  var r:double;
  if (a <= 0) goto B_a;
  var v:int = a & -2;
  var w:int = a & 1;
  var u:int = a - 1;
  loop L_b {
    o = g + (m = t << 3);
    p = e + m;
    n = 0;
    q = 0;
    if (u) {
      loop L_d {
        s = d + t * 16000;
        var x:double_ptr = s + (m = n << 3);
        x[0] = o[0] * (h + m)[0]:double + p[0] * (f + m)[0]:double + x[0];
        s = s + (m = m | 8);
        s[0] = o[0] * (h + m)[0]:double + p[0] * (f + m)[0]:double + s[0];
        n = n + 2;
        q = q + 2;
        if (q != v) continue L_d;
      }
    }
    if (w) {
      m = n << 3;
      n = m + d + t * 16000;
      n[0] = o[0] * (h + m)[0]:double + p[0] * (f + m)[0]:double + n[0];
    }
    t = t + 1;
    if (t != a) continue L_b;
  }
  if (a <= 0) goto B_a;
  h = a & -2;
  s = a & 1;
  f = 0;
  loop L_f {
    o = j + (n = f << 3);
    r = o[0];
    m = 0;
    p = 0;
    if (u) {
      loop L_h {
        o[0] = (r = (d + m * 16000 + n)[0]:double * c * k[m]:double + r);
        o[0] =
          (r = (d + (q = m | 1) * 16000 + n)[0]:double * c * k[q]:double + r);
        m = m + 2;
        p = p + 2;
        if (p != h) continue L_h;
      }
    }
    if (s) { o[0] = (d + m * 16000 + n)[0]:double * c * k[m]:double + r }
    f = f + 1;
    if (f != a) continue L_f;
  }
  if (a <= 0) goto B_a;
  f = a & 3;
  o = 0;
  m = 0;
  if (a >= 4) {
    s = a & -4;
    p = 0;
    loop L_k {
      q = j + (n = m << 3);
      q[0] = q[0] + (l + n)[0]:double;
      h = j + (q = n | 8);
      h[0] = h[0] + (l + q)[0]:double;
      h = j + (q = n | 16);
      h[0] = h[0] + (l + q)[0]:double;
      q = j + (n = n | 24);
      q[0] = q[0] + (l + n)[0]:double;
      m = m + 4;
      p = p + 4;
      if (p != s) continue L_k;
    }
  }
  if (f) {
    loop L_m {
      p = j + (n = m << 3);
      p[0] = p[0] + (l + n)[0]:double;
      m = m + 1;
      o = o + 1;
      if (o != f) continue L_m;
    }
  }
  if (a <= 0) goto B_a;
  f = a & -2;
  s = a & 1;
  h = 0;
  loop L_n {
    o = i + (h << 3);
    r = o[0];
    m = 0;
    p = 0;
    if (u) {
      loop L_p {
        o[0] =
          (r = ((q = d + h * 16000) + (n = m << 3))[0]:double * b *
               (j + n)[0]:double +
               r);
        o[0] = (r = (q + (n = n | 8))[0]:double * b * (j + n)[0]:double + r);
        m = m + 2;
        p = p + 2;
        if (p != f) continue L_p;
      }
    }
    if (s) {
      o[0] =
        ((m = m << 3) + d + h * 16000)[0]:double * b * (j + m)[0]:double + r
    }
    h = h + 1;
    if (h != a) continue L_n;
  }
  label B_a:
}

export function submain(a:int, b:int_ptr):int {
  var f:double_ptr;
  var d:int;
  var c:int;
  var g:double;
  var h:double_ptr;
  var q:int;
  var e:double_ptr;
  var j:int = stack_pointer - 48;
  stack_pointer = j;
  var k:int = legalfunc_polybench_alloc_data(4000000L, 8);
  var r:int = legalfunc_polybench_alloc_data(2000L, 8);
  var m:int = legalfunc_polybench_alloc_data(2000L, 8);
  var s:int = legalfunc_polybench_alloc_data(2000L, 8);
  var n:int = legalfunc_polybench_alloc_data(2000L, 8);
  var o:int = legalfunc_polybench_alloc_data(2000L, 8);
  var i:int = legalfunc_polybench_alloc_data(2000L, 8);
  var p:int = legalfunc_polybench_alloc_data(2000L, 8);
  var l:int = legalfunc_polybench_alloc_data(2000L, 8);
  loop L_a {
    (r + (c = (d = f) << 3))[0]:double = f64_convert_i32_s(d);
    (c + s)[0]:double = (g = f64_convert_i32_s(f = d + 1) / 2000.0) * 0.5;
    (c + m)[0]:double = g * 0.25;
    (c + n)[0]:double = g / 6.0;
    (c + p)[0]:double = g * 0.125;
    (c + l)[0]:double = g / 9.0;
    (c + i)[0]:long = 0L;
    (c + o)[0]:long = 0L;
    c = 0;
    loop L_b {
      e = k + d * 16000;
      e[c]:double = f64_convert_i32_s(c * d % 2000) / 2000.0;
      e[h = c | 1]:double = f64_convert_i32_s(d * h % 2000) / 2000.0;
      c = c + 2;
      if (c != 2000) continue L_b;
    }
    if (f != 2000) continue L_a;
  }
  loop L_c {
    e = s + (c = q << 3);
    h = c + r;
    d = 0;
    loop L_d {
      f = k + q * 16000;
      var t:double_ptr = f + (c = d << 3);
      t[0] = e[0] * (c + n)[0]:double + h[0] * (c + m)[0]:double + t[0];
      f = f + (c = c | 8);
      f[0] = e[0] * (c + n)[0]:double + h[0] * (c + m)[0]:double + f[0];
      d = d + 2;
      if (d != 2000) continue L_d;
    }
    q = q + 1;
    if (q != 2000) continue L_c;
  }
  f = 0;
  loop L_e {
    e = i + (d = f << 3);
    g = e[0];
    c = 0;
    loop L_f {
      e[0] = (g = (k + c * 16000 + d)[0]:double * 1.2 * p[c]:double + g);
      e[0] =
        (g = (k + (h = c | 1) * 16000 + d)[0]:double * 1.2 * p[h]:double + g);
      c = c + 2;
      if (c != 2000) continue L_f;
    }
    f = f + 1;
    if (f != 2000) continue L_e;
  }
  d = 0;
  loop L_g {
    e = i + (c = d << 3);
    e[0] = e[0] + (c + l)[0]:double;
    h = i + (e = c | 8);
    h[0] = h[0] + (e + l)[0]:double;
    h = i + (e = c | 16);
    h[0] = h[0] + (e + l)[0]:double;
    e = i + (c = c | 24);
    e[0] = e[0] + (c + l)[0]:double;
    d = d + 4;
    if (d != 2000) continue L_g;
  }
  f = 0;
  loop L_h {
    e = o + (f << 3);
    g = e[0];
    c = 0;
    loop L_i {
      e[0] =
        (g = ((h = k + f * 16000) + (d = c << 3))[0]:double * 1.5 *
             (d + i)[0]:double +
             g);
      e[0] =
        (g = (h + (d = d | 8))[0]:double * 1.5 * (d + i)[0]:double + g);
      c = c + 2;
      if (c != 2000) continue L_i;
    }
    f = f + 1;
    if (f != 2000) continue L_h;
  }
  if (a < 43) goto B_j;
  if ((b[0])[0]:ubyte) goto B_j;
  c = memory_base;
  fwrite(c + 42, 22, 1, d = stderr[0]:int);
  j[8]:int = c;
  fiprintf(d, c + 2, j + 32);
  c = 0;
  loop L_k {
    if (eqz((c & 65535) % 20)) { fputc(10, d) }
    j[2]:double = o[c]:double;
    small_fprintf(d, memory_base + 17, j + 16);
    c = c + 1;
    if (c != 2000) continue L_k;
  }
  j[0]:int = (c = memory_base);
  fiprintf(d, c + 25, j);
  fwrite(c + 65, 22, 1, d);
  label B_j:
  free(k);
  free(r);
  free(m);
  free(s);
  free(n);
  free(o);
  free(i);
  free(p);
  free(l);
  stack_pointer = j + 48;
  return 0;
}

function legalfunc_polybench_alloc_data(a:long, b:int):int {
  return legalimport_polybench_alloc_data(i32_wrap_i64(a),
                                          i32_wrap_i64(a >> 32L),
                                          b)
}

