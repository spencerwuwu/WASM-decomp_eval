import memory env_memory;

import global stack_pointer:int;
import global memory_base:int;
import global stderr:int;

data rodata(offset: memory_base) =
  "begin dump: %s\00corr\00%0.2lf \00\0aend   dump: %s\0a\00==BEGIN DUMP_"
  "ARRAYS==\0a\00==END   DUMP_ARRAYS==\0a\00";

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

export function kernel_correlation(a:int, b:int, c:double, d:int, e:int, f:int, g:int) {
  var p:int;
  var k:double_ptr;
  var h:double;
  var j:int;
  var i:int;
  var l:int;
  var r:double;
  var q:int;
  var n:int;
  var o:int;
  var m:int;
  var s:int;
  if (a <= 0) goto B_a;
  o = b & -4;
  m = b & 3;
  n = b <= 0;
  s = b < 4;
  loop L_b {
    j = f + (k = p << 3);
    j[0]:long = 0L;
    if (n) {
      h = 0.0;
      goto B_c;
    }
    l = 0;
    h = 0.0;
    i = 0;
    q = 0;
    if (eqz(s)) {
      loop L_f {
        j[0]:double = (h = (d + i * 9600 + k)[0]:double + h);
        j[0]:double = (h = (d + (i | 1) * 9600 + k)[0]:double + h);
        j[0]:double = (h = (d + (i | 2) * 9600 + k)[0]:double + h);
        j[0]:double = (h = (d + (i | 3) * 9600 + k)[0]:double + h);
        i = i + 4;
        q = q + 4;
        if (q != o) continue L_f;
      }
    }
    if (eqz(m)) goto B_c;
    loop L_g {
      j[0]:double = (h = (d + i * 9600 + k)[0]:double + h);
      i = i + 1;
      l = l + 1;
      if (l != m) continue L_g;
    }
    label B_c:
    j[0]:double = h / c;
    p = p + 1;
    if (p != a) continue L_b;
  }
  if (a <= 0) goto B_a;
  m = b & -2;
  p = b & 1;
  o = 0;
  loop L_h {
    j = g + (k = o << 3);
    j[0]:long = 0L;
    if (b <= 0) {
      h = 0.0;
      goto B_i;
    }
    l = f + k;
    i = 0;
    h = 0.0;
    q = 0;
    if (b != 1) {
      loop L_l {
        j[0]:double =
          (h = (r = (d + i * 9600 + k)[0]:double - l[0]:double) * r + h);
        j[0]:double =
          (h = (r = (d + (i | 1) * 9600 + k)[0]:double - l[0]:double) * r + h);
        i = i + 2;
        q = q + 2;
        if (q != m) continue L_l;
      }
    }
    if (eqz(p)) goto B_i;
    j[0]:double =
      (h = (r = (d + i * 9600 + k)[0]:double - l[0]:double) * r + h);
    label B_i:
    j[0]:double = select_if(1.0, h = sqrt(h / c), h <= 0.1);
    o = o + 1;
    if (o != a) continue L_h;
  }
  label B_a:
  if (b > 0) {
    r = sqrt(c);
    l = 0;
    loop L_n {
      i = 0;
      if (a > 0) {
        loop L_p {
          j = i << 3;
          k = j + d + l * 9600;
          k[0] = (h = k[0] - (f + j)[0]:double);
          k[0] = h / r * (g + j)[0]:double;
          i = i + 1;
          if (i != a) continue L_p;
        }
      }
      l = l + 1;
      if (l != b) continue L_n;
    }
  }
  s = a - 1;
  if (a >= 2) {
    q = b & -2;
    p = b & 1;
    n = 0;
    loop L_r {
      o = e + n * 9600;
      (o + (j = n << 3))[0]:long = 4607182418800017408L;
      n = n + 1;
      m = n;
      if (a > n) {
        loop L_t {
          l = o + (k = m << 3);
          l[0]:long = 0L;
          if (b <= 0) {
            h = 0.0;
            goto B_u;
          }
          i = 0;
          h = 0.0;
          f = 0;
          if (b != 1) {
            loop L_x {
              l[0]:double =
                (h = ((g = d + i * 9600) + j)[0]:double * (g + k)[0]:double + h);
              l[0]:double =
                (h = ((g = d + (i | 1) * 9600) + j)[0]:double * (g + k)[0]:double + h);
              i = i + 2;
              f = f + 2;
              if (f != q) continue L_x;
            }
          }
          if (eqz(p)) goto B_u;
          l[0]:double =
            (h = ((i = d + i * 9600) + j)[0]:double * (i + k)[0]:double + h);
          label B_u:
          (e + m * 9600 + j)[0]:double = h;
          m = m + 1;
          if (m != a) continue L_t;
        }
      }
      if (n != s) continue L_r;
    }
  }
  (e + s * 9600)[s]:long = 4607182418800017408L;
}

export function submain(a:int, b:int_ptr):int {
  var d:int;
  var i:int;
  var c:int;
  var f:int;
  var e:int = stack_pointer - 48;
  stack_pointer = e;
  var g:int = legalfunc_polybench_alloc_data(1680000L, 8);
  var h:int = legalfunc_polybench_alloc_data(1440000L, 8);
  var j:int = legalfunc_polybench_alloc_data(1200L, 8);
  var k:int = legalfunc_polybench_alloc_data(1200L, 8);
  loop L_a {
    var l:double = f64_convert_i32_s(d);
    c = 0;
    loop L_b {
      f = g + d * 9600;
      f[c]:double = f64_convert_i32_s(c * d) / 1200.0 + l;
      f[i = c | 1]:double = f64_convert_i32_s(d * i) / 1200.0 + l;
      c = c + 2;
      if (c != 1200) continue L_b;
    }
    d = d + 1;
    if (d != 1400) continue L_a;
  }
  kernel_correlation(1200, 1400, 1400.0, g, h, j, k);
  if (a < 43) goto B_c;
  if ((b[0])[0]:ubyte) goto B_c;
  c = memory_base;
  fwrite(c + 45, 22, 1, f = stderr[0]:int);
  e[8]:int = c + 15;
  fiprintf(f, c, e + 32);
  d = 0;
  loop L_d {
    i = d * 1200;
    c = 0;
    loop L_e {
      if (eqz((c + i) % 20)) { fputc(10, f) }
      e[2]:double = (h + d * 9600)[c]:double;
      small_fprintf(f, memory_base + 20, e + 16);
      c = c + 1;
      if (c != 1200) continue L_e;
    }
    d = d + 1;
    if (d != 1200) continue L_d;
  }
  e[0]:int = (c = memory_base) + 15;
  fiprintf(f, c + 28, e);
  fwrite(c + 68, 22, 1, f);
  label B_c:
  free(g);
  free(h);
  free(j);
  free(k);
  stack_pointer = e + 48;
  return 0;
}

function legalfunc_polybench_alloc_data(a:long, b:int):int {
  return legalimport_polybench_alloc_data(i32_wrap_i64(a),
                                          i32_wrap_i64(a >> 32L),
                                          b)
}

