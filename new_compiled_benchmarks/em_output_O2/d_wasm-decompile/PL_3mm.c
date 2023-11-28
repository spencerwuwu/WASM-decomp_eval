import memory env_memory;

import global stack_pointer:int;
import global memory_base:int;
import global stderr:int;

data rodata(offset: memory_base) =
  "begin dump: %s\00G\00%0.2lf \00\0aend   dump: %s\0a\00==BEGIN DUMP_ARR"
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

export function init_array(a:int, b:int, c:int, d:int, e:int, f:int, g:int, h:int, i:int) {
  var j:int;
  var o:int;
  var m:int;
  var k:int;
  var l:double;
  var n:int;
  if (a > 0) {
    var p:int = c & -2;
    var q:int = c & 1;
    l = f64_convert_i32_s(a * 5);
    loop L_b {
      if (c <= 0) goto B_c;
      k = 0;
      m = 0;
      if (c != 1) {
        loop L_e {
          n = f + j * 8000;
          n[k]:double = f64_convert_i32_s((j * k | 1) % a) / l;
          n[o = k | 1]:double = f64_convert_i32_s((j * o + 1) % a) / l;
          k = k + 2;
          m = m + 2;
          if (m != p) continue L_e;
        }
      }
      if (eqz(q)) goto B_c;
      (f + j * 8000)[k]:double = f64_convert_i32_s((j * k + 1) % a) / l;
      label B_c:
      j = j + 1;
      if (j != a) continue L_b;
    }
  }
  if (c > 0) {
    o = b & -2;
    f = b & 1;
    l = f64_convert_i32_s(b * 5);
    j = 0;
    loop L_g {
      if (b <= 0) goto B_h;
      k = 0;
      a = 0;
      if (b != 1) {
        loop L_j {
          m = g + j * 7200;
          m[k]:double = f64_convert_i32_s(((n = k | 1) * j + 2) % b) / l;
          m[n]:double = f64_convert_i32_s(((k = k + 2) * j + 2) % b) / l;
          a = a + 2;
          if (a != o) continue L_j;
        }
      }
      if (eqz(f)) goto B_h;
      (g + j * 7200)[k]:double =
        f64_convert_i32_s(((k + 1) * j + 2) % b) / l;
      label B_h:
      j = j + 1;
      if (j != c) continue L_g;
    }
  }
  if (b > 0) {
    o = e & -2;
    g = e & 1;
    l = f64_convert_i32_s(d * 5);
    j = 0;
    loop L_l {
      if (e <= 0) goto B_m;
      k = 0;
      a = 0;
      if (e != 1) {
        loop L_o {
          m = h + j * 9600;
          (m + (n = k << 3))[0]:double = f64_convert_i32_s((k + 3) * j % d) / l;
          (m + (n | 8))[0]:double = f64_convert_i32_s((k + 4) * j % d) / l;
          k = k + 2;
          a = a + 2;
          if (a != o) continue L_o;
        }
      }
      if (eqz(g)) goto B_m;
      (h + j * 9600)[k]:double = f64_convert_i32_s((k + 3) * j % d) / l;
      label B_m:
      j = j + 1;
      if (j != b) continue L_l;
    }
  }
  if (e > 0) {
    l = f64_convert_i32_s(c * 5);
    j = 0;
    b = d <= 0;
    loop L_q {
      k = 0;
      if (eqz(b)) {
        loop L_s {
          (i + j * 8800)[k]:double =
            f64_convert_i32_s(((k + 2) * j + 2) % c) / l;
          k = k + 1;
          if (k != d) continue L_s;
        }
      }
      j = j + 1;
      if (j != e) continue L_q;
    }
  }
}

export function print_array(a:int, b:int, c:int) {
  var f:int;
  var g:int;
  var e:int = stack_pointer - 48;
  stack_pointer = e;
  var d:int = memory_base;
  fwrite(d + 42, 22, 1, f = stderr[0]:int);
  e[8]:int = d + 15;
  fiprintf(f, d, e + 32);
  if (a > 0) {
    var h:int = b <= 0;
    loop L_b {
      if (eqz(h)) {
        var i:int = a * g;
        d = 0;
        loop L_d {
          if (eqz((d + i) % 20)) { fputc(10, f) }
          e[2]:double = (c + g * 8800)[d]:double;
          small_fprintf(f, memory_base + 17, e + 16);
          d = d + 1;
          if (d != b) continue L_d;
        }
      }
      g = g + 1;
      if (g != a) continue L_b;
    }
  }
  e[0]:int = (d = memory_base) + 15;
  fiprintf(f, d + 25, e);
  fwrite(d + 65, 22, 1, f);
  stack_pointer = e + 48;
}

export function kernel_3mm(a:int, b:int, c:int, d:int, e:int, f:int, g:int, h:int, i:int, j:int, k:int, l:int) {
  var o:int;
  var r:int;
  var s:int;
  var p:int;
  var q:int;
  var m:int;
  var n:double;
  var t:int;
  var u:int;
  if (a > 0) {
    u = c & -2;
    var w:int = c & 1;
    loop L_b {
      var v:int = 0;
      if (b > 0) {
        loop L_d {
          p = v << 3;
          q = p + f + o * 7200;
          q[0]:long = 0L;
          if (c <= 0) goto B_e;
          m = 0;
          n = 0.0;
          t = 0;
          if (c != 1) {
            loop L_g {
              q[0]:double =
                (n = (r = g + o * 8000)[m]:double * (h + m * 7200 + p)[0]:double + n);
              q[0]:double =
                (n = r[s = m | 1]:double * (h + s * 7200 + p)[0]:double + n);
              m = m + 2;
              t = t + 2;
              if (t != u) continue L_g;
            }
          }
          if (eqz(w)) goto B_e;
          q[0]:double =
            (g + o * 8000)[m]:double * (h + m * 7200 + p)[0]:double + n;
          label B_e:
          v = v + 1;
          if (v != b) continue L_d;
        }
      }
      o = o + 1;
      if (o != a) continue L_b;
    }
  }
  if (b > 0) {
    o = e & -2;
    u = e & 1;
    s = 0;
    loop L_i {
      g = 0;
      if (d > 0) {
        loop L_k {
          p = g << 3;
          q = p + i + s * 8800;
          q[0]:long = 0L;
          if (e <= 0) goto B_l;
          m = 0;
          n = 0.0;
          t = 0;
          if (e != 1) {
            loop L_n {
              q[0]:double =
                (n = (h = j + s * 9600)[m]:double * (k + m * 8800 + p)[0]:double + n);
              q[0]:double =
                (n = h[r = m | 1]:double * (k + r * 8800 + p)[0]:double + n);
              m = m + 2;
              t = t + 2;
              if (t != o) continue L_n;
            }
          }
          if (eqz(u)) goto B_l;
          q[0]:double =
            (j + s * 9600)[m]:double * (k + m * 8800 + p)[0]:double + n;
          label B_l:
          g = g + 1;
          if (g != d) continue L_k;
        }
      }
      s = s + 1;
      if (s != b) continue L_i;
    }
  }
  if (a > 0) {
    s = b & -2;
    j = b & 1;
    r = 0;
    loop L_p {
      o = 0;
      if (d > 0) {
        loop L_r {
          p = o << 3;
          q = p + l + r * 8800;
          q[0]:long = 0L;
          if (b <= 0) goto B_s;
          m = 0;
          n = 0.0;
          t = 0;
          if (b != 1) {
            loop L_u {
              q[0]:double =
                (n = (k = f + r * 7200)[m]:double * (i + m * 8800 + p)[0]:double + n);
              q[0]:double =
                (n = k[h = m | 1]:double * (i + h * 8800 + p)[0]:double + n);
              m = m + 2;
              t = t + 2;
              if (t != s) continue L_u;
            }
          }
          if (eqz(j)) goto B_s;
          q[0]:double =
            (f + r * 7200)[m]:double * (i + m * 8800 + p)[0]:double + n;
          label B_s:
          o = o + 1;
          if (o != d) continue L_r;
        }
      }
      r = r + 1;
      if (r != a) continue L_p;
    }
  }
}

export function submain(a:int, b:int_ptr):int {
  var d:int;
  var g:double_ptr;
  var f:int;
  var c:int;
  var j:int;
  var i:int;
  var h:int;
  var e:double;
  var l:int = legalfunc_polybench_alloc_data(720000L, 8);
  var m:int = legalfunc_polybench_alloc_data(800000L, 8);
  var k:int = legalfunc_polybench_alloc_data(900000L, 8);
  var n:int = legalfunc_polybench_alloc_data(990000L, 8);
  var o:int = legalfunc_polybench_alloc_data(1080000L, 8);
  var p:int = legalfunc_polybench_alloc_data(1320000L, 8);
  var q:int = legalfunc_polybench_alloc_data(880000L, 8);
  loop L_a {
    c = 0;
    loop L_b {
      f = m + d * 8000;
      f[c]:double = f64_convert_i32_s((c * d | 1) % 800) / 4000.0;
      f[g = c | 1]:double = f64_convert_i32_s((d * g + 1) % 800) / 4000.0;
      c = c + 2;
      if (c != 1000) continue L_b;
    }
    d = d + 1;
    if (d != 800) continue L_a;
  }
  d = 0;
  loop L_c {
    c = 0;
    loop L_d {
      f = k + d * 7200;
      f[c]:double = f64_convert_i32_s(((g = c | 1) * d + 2) % 900) / 4500.0;
      f[g]:double = f64_convert_i32_s(((c = c + 2) * d + 2) % 900) / 4500.0;
      if (c != 900) continue L_d;
    }
    d = d + 1;
    if (d != 1000) continue L_c;
  }
  d = 0;
  loop L_e {
    c = 0;
    loop L_f {
      f = o + d * 9600;
      (f + (g = c << 3))[0]:double =
        f64_convert_i32_s((c + 3) * d % 1100) / 5500.0;
      (f + (g | 8))[0]:double =
        f64_convert_i32_s((c + 4) * d % 1100) / 5500.0;
      c = c + 2;
      if (c != 1200) continue L_f;
    }
    d = d + 1;
    if (d != 900) continue L_e;
  }
  d = 0;
  loop L_g {
    c = 0;
    loop L_h {
      (p + d * 8800)[c]:double =
        f64_convert_i32_s(((c + 2) * d + 2) % 1000) / 5000.0;
      c = c + 1;
      if (c != 1100) continue L_h;
    }
    d = d + 1;
    if (d != 1200) continue L_g;
  }
  loop L_i {
    h = 0;
    loop L_j {
      d = h << 3;
      f = d + l + j * 7200;
      f[0]:long = 0L;
      e = 0.0;
      c = 0;
      loop L_k {
        f[0]:double =
          (e = (g = m + j * 8000)[c]:double * (k + c * 7200 + d)[0]:double + e);
        f[0]:double =
          (e = g[i = c | 1]:double * (k + i * 7200 + d)[0]:double + e);
        c = c + 2;
        if (c != 1000) continue L_k;
      }
      h = h + 1;
      if (h != 900) continue L_j;
    }
    j = j + 1;
    if (j != 800) continue L_i;
  }
  i = 0;
  loop L_l {
    h = 0;
    loop L_m {
      j = h << 3;
      d = j + n + i * 8800;
      d[0]:long = 0L;
      e = 0.0;
      c = 0;
      loop L_n {
        d[0]:double =
          (e = 
             (f = o + i * 9600 + (c << 3))[0]:double * (g = p + c * 8800 + j)[0] +
             e);
        d[0]:double = (e = f[1]:double * (g + 8800)[0]:double + e);
        d[0]:double = (e = f[2]:double * (g + 17600)[0]:double + e);
        c = c + 3;
        if (c != 1200) continue L_n;
      }
      h = h + 1;
      if (h != 1100) continue L_m;
    }
    i = i + 1;
    if (i != 900) continue L_l;
  }
  i = 0;
  loop L_o {
    h = 0;
    loop L_p {
      j = h << 3;
      d = j + q + i * 8800;
      d[0]:long = 0L;
      e = 0.0;
      c = 0;
      loop L_q {
        d[0]:double =
          (e = 
             (f = l + i * 7200 + (c << 3))[0]:double * (g = n + c * 8800 + j)[0] +
             e);
        d[0]:double = (e = f[1]:double * (g + 8800)[0]:double + e);
        d[0]:double = (e = f[2]:double * (g + 17600)[0]:double + e);
        c = c + 3;
        if (c != 900) continue L_q;
      }
      h = h + 1;
      if (h != 1100) continue L_p;
    }
    i = i + 1;
    if (i != 800) continue L_o;
  }
  if (a < 43) goto B_r;
  if ((b[0])[0]:ubyte) goto B_r;
  print_array(800, 1100, q);
  label B_r:
  free(l);
  free(m);
  free(k);
  free(n);
  free(o);
  free(p);
  free(q);
  return 0;
}

function legalfunc_polybench_alloc_data(a:long, b:int):int {
  return legalimport_polybench_alloc_data(i32_wrap_i64(a),
                                          i32_wrap_i64(a >> 32L),
                                          b)
}

