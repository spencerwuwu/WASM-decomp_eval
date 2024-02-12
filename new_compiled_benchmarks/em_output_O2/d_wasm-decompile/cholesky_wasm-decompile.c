import memory env_memory;

import global stack_pointer:int;
import global memory_base:int;
import global stderr:int;

data rodata(offset: memory_base) =
  "begin dump: %s\00A\00%0.2lf \00\0aend   dump: %s\0a\00==BEGIN DUMP_ARR"
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

export function kernel_cholesky(a:int, b:double_ptr) {
  var f:int;
  var c:double;
  var h:double_ptr;
  var l:int;
  var d:int;
  var g:double_ptr;
  var i:double;
  var j:double_ptr;
  var m:int;
  var e:int;
  var k:int;
  if (a > 0) {
    loop L_b {
      if (f) {
        g = b + f * 16000;
        e = 0;
        loop L_f {
          if (eqz(e)) {
            c = g[0];
            goto B_g;
          }
          j = g + (e << 3);
          c = j[0];
          d = 0;
          if (e != 1) {
            m = e & 2147483646;
            k = 0;
            loop L_j {
              j[0] =
                (c = 
                   c -
                   (g + (h = d << 3))[0]:double * ((l = b + e * 16000) + h)[0]:double);
              j[0] = (c = c - (g + (h = h | 8))[0]:double * (h + l)[0]:double);
              d = d + 2;
              k = k + 2;
              if (k != m) continue L_j;
            }
          }
          if (eqz(e & 1)) goto B_g;
          j[0] =
            (c = c - (g + (d = d << 3))[0]:double * (b + e * 16000 + d)[0]:double);
          label B_g:
          (g + (d = e << 3))[0]:double = c / (b + e * 16000 + d)[0]:double;
          e = e + 1;
          if (e != f) continue L_f;
        }
        if (f) goto B_d;
      }
      c = b[0];
      goto B_c;
      label B_d:
      h = g + (f << 3);
      c = h[0];
      e = f & 3;
      k = 0;
      if (f < 4) {
        d = 0;
        goto B_k;
      }
      m = f & 2147483644;
      d = 0;
      l = 0;
      loop L_m {
        h[0] = (c = c - (i = (g + (j = d << 3))[0]:double) * i);
        h[0] = (c = c - (i = (g + (j | 8))[0]:double) * i);
        h[0] = (c = c - (i = (g + (j | 16))[0]:double) * i);
        h[0] = (c = c - (i = (g + (j | 24))[0]:double) * i);
        d = d + 4;
        l = l + 4;
        if (l != m) continue L_m;
      }
      label B_k:
      if (eqz(e)) goto B_c;
      loop L_n {
        h[0] = (c = c - (i = g[d]:double) * i);
        d = d + 1;
        k = k + 1;
        if (k != e) continue L_n;
      }
      label B_c:
      (b + f * 16000)[f]:double = sqrt(c);
      f = f + 1;
      if (f != a) continue L_b;
    }
  }
}

export function submain(a:int, b:int_ptr):int {
  var f:double_ptr;
  var h:double_ptr;
  var d:double_ptr;
  var k:int;
  var m:int;
  var l:int;
  var c:int;
  var e:double_ptr;
  var i:double;
  var n:double;
  var o:int = stack_pointer - 48;
  stack_pointer = o;
  var j:double_ptr = legalfunc_polybench_alloc_data(4000000L, 8);
  var g:int = 1;
  loop L_a {
    m = g & 1;
    c = 0;
    if (f) {
      l = g & 2147483646;
      d = 0;
      loop L_c {
        e = j + f * 16000;
        (e + (h = c << 3))[0]:double =
          f64_convert_i32_s(0 - c) / 2000.0 + 1.0;
        (e + (h | 8))[0]:double = f64_convert_i32_s(c ^ -1) / 2000.0 + 1.0;
        c = c + 2;
        d = d + 2;
        if (d != l) continue L_c;
      }
    }
    if (m) { (j + f * 16000)[c]:double = f64_convert_i32_s(0 - c) / 2000.0 + 1.0 }
    d = f << 3;
    c = f + 1;
    if (f <= 1998) { memset(j + f * 16008 + 8, 0, 15992 - d) }
    (j + f * 16000 + d)[0]:long = 4607182418800017408L;
    g = g + 1;
    f = c;
    if (c != 2000) continue L_a;
  }
  l = memset(legalfunc_polybench_alloc_data(4000000L, 8), 0, 32000000);
  loop L_f {
    m = 0;
    loop L_g {
      d = k << 3;
      e = d + j + (g = m * 16000);
      c = 0;
      loop L_h {
        h = g + l;
        f = h + (c << 3);
        f[0] = e[0] * (j + c * 16000 + d)[0]:double + f[0];
        h = h + ((f = c | 1) << 3);
        h[0] = e[0] * (j + f * 16000 + d)[0]:double + h[0];
        c = c + 2;
        if (c != 2000) continue L_h;
      }
      m = m + 1;
      if (m != 2000) continue L_g;
    }
    k = k + 1;
    if (k != 2000) continue L_f;
  }
  g = 0;
  loop L_i {
    h = 0;
    loop L_j {
      d = j + (e = g * 16000);
      (d + (c = h << 3))[0]:double = ((e = e + l) + c)[0]:double;
      (d + (f = c + 8))[0]:double = (e + f)[0]:double;
      (d + (f = c + 16))[0]:double = (e + f)[0]:double;
      (d + (f = c + 24))[0]:double = (e + f)[0]:double;
      (d + (c = c + 32))[0]:double = (c + e)[0]:double;
      h = h + 5;
      if (h != 2000) continue L_j;
    }
    g = g + 1;
    if (g != 2000) continue L_i;
  }
  free(l);
  k = 0;
  loop L_k {
    if (k) {
      var p:int = k - 1;
      e = j + k * 16000;
      g = 0;
      loop L_n {
        if (eqz(g)) {
          i = e[0];
          goto B_o;
        }
        h = e + (g << 3);
        i = h[0];
        c = 0;
        if (g != 1) {
          m = g & 2147483646;
          f = 0;
          loop L_r {
            h[0] =
              (i = 
                 i -
                 (e + (d = c << 3))[0]:double * ((l = j + g * 16000) + d)[0]:double);
            h[0] = (i = i - (e + (d = d | 8))[0]:double * (d + l)[0]:double);
            c = c + 2;
            f = f + 2;
            if (f != m) continue L_r;
          }
        }
        if (eqz(g & 1)) goto B_o;
        h[0] =
          (i = i - (e + (c = c << 3))[0]:double * (j + g * 16000 + c)[0]:double);
        label B_o:
        (e + (c = g << 3))[0]:double = i / (j + g * 16000 + c)[0]:double;
        g = g + 1;
        if (g != k) continue L_n;
      }
      d = e + (k << 3);
      i = d[0];
      g = k & 3;
      f = 0;
      if (p < 3) {
        c = 0;
        goto B_s;
      }
      m = k & 2147483644;
      c = 0;
      l = 0;
      loop L_u {
        d[0] = (i = i - (n = (e + (h = c << 3))[0]:double) * n);
        d[0] = (i = i - (n = (e + (h | 8))[0]:double) * n);
        d[0] = (i = i - (n = (e + (h | 16))[0]:double) * n);
        d[0] = (i = i - (n = (e + (h | 24))[0]:double) * n);
        c = c + 4;
        l = l + 4;
        if (l != m) continue L_u;
      }
      label B_s:
      if (eqz(g)) goto B_l;
      loop L_v {
        d[0] = (i = i - (n = e[c]:double) * n);
        c = c + 1;
        f = f + 1;
        if (f != g) continue L_v;
      }
      goto B_l;
    }
    i = j[0];
    label B_l:
    (j + k * 16000)[k]:double = sqrt(i);
    k = k + 1;
    if (k != 2000) continue L_k;
  }
  if (a < 43) goto B_w;
  if ((b[0])[0]:ubyte) goto B_w;
  c = memory_base;
  fwrite(c + 42, 22, 1, h = stderr[0]:int);
  o[8]:int = c + 15;
  fiprintf(h, c, o + 32);
  d = 0;
  e = 1;
  loop L_x {
    f = d * 2000;
    c = 0;
    loop L_y {
      if (eqz((c + f) % 20)) { fputc(10, h) }
      o[2]:double = (j + d * 16000)[c]:double;
      small_fprintf(h, memory_base + 17, o + 16);
      c = c + 1;
      if (c != e) continue L_y;
    }
    e = e + 1;
    d = d + 1;
    if (d != 2000) continue L_x;
  }
  o[0]:int = (c = memory_base) + 15;
  fiprintf(h, c + 25, o);
  fwrite(c + 65, 22, 1, h);
  label B_w:
  free(j);
  stack_pointer = o + 48;
  return 0;
}

function legalfunc_polybench_alloc_data(a:long, b:int):int {
  return legalimport_polybench_alloc_data(i32_wrap_i64(a),
                                          i32_wrap_i64(a >> 32L),
                                          b)
}

