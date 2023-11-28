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

export function kernel_lu(a:int, b:int) {
  var f:int;
  var h:int;
  var d:double;
  var m:int;
  var c:int;
  var g:double_ptr;
  var e:int;
  var i:double_ptr;
  var j:int;
  var l:int;
  var k:int;
  if (a > 0) {
    loop L_b {
      if (f) {
        g = b + f * 16000;
        e = 0;
        loop L_d {
          if (eqz(e)) {
            d = g[0];
            goto B_e;
          }
          i = g + (h = e << 3);
          d = i[0];
          k = e & 1;
          c = 0;
          if (e != 1) {
            l = e & 2147483646;
            j = 0;
            loop L_h {
              i[0] = (d = d - g[c]:double * (b + c * 16000 + h)[0]:double);
              i[0] = (d = d - g[m = c | 1]:double * (b + m * 16000 + h)[0]:double);
              c = c + 2;
              j = j + 2;
              if (j != l) continue L_h;
            }
          }
          if (eqz(k)) goto B_e;
          i[0] = (d = d - g[c]:double * (b + c * 16000 + h)[0]:double);
          label B_e:
          (g + (c = e << 3))[0]:double = d / (b + e * 16000 + c)[0]:double;
          e = e + 1;
          if (e != f) continue L_d;
        }
      }
      l = f & 2147483646;
      k = f & 1;
      e = f;
      loop L_i {
        if (eqz(f)) goto B_j;
        g = b + f * 16000;
        i = g + (h = e << 3);
        d = i[0];
        c = 0;
        j = 0;
        if (f != 1) {
          loop L_l {
            i[0] = (d = d - g[c]:double * (b + c * 16000 + h)[0]:double);
            i[0] = (d = d - g[m = c | 1]:double * (b + m * 16000 + h)[0]:double);
            c = c + 2;
            j = j + 2;
            if (j != l) continue L_l;
          }
        }
        if (eqz(k)) goto B_j;
        i[0] = d - g[c]:double * (b + c * 16000 + h)[0]:double;
        label B_j:
        e = e + 1;
        if (e != a) continue L_i;
      }
      f = f + 1;
      if (f != a) continue L_b;
    }
  }
}

export function submain(a:int, b:int_ptr):int {
  var e:double_ptr;
  var i:double_ptr;
  var d:double_ptr;
  var j:int;
  var h:int;
  var m:int;
  var c:int;
  var f:double_ptr;
  var l:double;
  var o:int;
  var n:int = stack_pointer - 48;
  stack_pointer = n;
  var g:int = legalfunc_polybench_alloc_data(4000000L, 8);
  var k:int = 1;
  loop L_a {
    h = k & 1;
    c = 0;
    if (e) {
      m = k & 2147483646;
      d = 0;
      loop L_c {
        f = g + e * 16000;
        (f + (i = c << 3))[0]:double =
          f64_convert_i32_s(0 - c) / 2000.0 + 1.0;
        (f + (i | 8))[0]:double = f64_convert_i32_s(c ^ -1) / 2000.0 + 1.0;
        c = c + 2;
        d = d + 2;
        if (d != m) continue L_c;
      }
    }
    if (h) { (g + e * 16000)[c]:double = f64_convert_i32_s(0 - c) / 2000.0 + 1.0 }
    d = e << 3;
    c = e + 1;
    if (e <= 1998) { memset(g + e * 16008 + 8, 0, 15992 - d) }
    (g + e * 16000 + d)[0]:long = 4607182418800017408L;
    k = k + 1;
    e = c;
    if (c != 2000) continue L_a;
  }
  m = memset(legalfunc_polybench_alloc_data(4000000L, 8), 0, 32000000);
  loop L_f {
    h = 0;
    loop L_g {
      d = j << 3;
      f = d + g + (k = h * 16000);
      c = 0;
      loop L_h {
        i = k + m;
        e = i + (c << 3);
        e[0] = f[0] * (g + c * 16000 + d)[0]:double + e[0];
        i = i + ((e = c | 1) << 3);
        i[0] = f[0] * (g + e * 16000 + d)[0]:double + i[0];
        c = c + 2;
        if (c != 2000) continue L_h;
      }
      h = h + 1;
      if (h != 2000) continue L_g;
    }
    j = j + 1;
    if (j != 2000) continue L_f;
  }
  k = 0;
  loop L_i {
    i = 0;
    loop L_j {
      d = g + (f = k * 16000);
      (d + (c = i << 3))[0]:double = ((f = f + m) + c)[0]:double;
      (d + (e = c + 8))[0]:double = (e + f)[0]:double;
      (d + (e = c + 16))[0]:double = (e + f)[0]:double;
      (d + (e = c + 24))[0]:double = (e + f)[0]:double;
      (d + (c = c + 32))[0]:double = (c + f)[0]:double;
      i = i + 5;
      if (i != 2000) continue L_j;
    }
    k = k + 1;
    if (k != 2000) continue L_i;
  }
  free(m);
  j = 0;
  loop L_k {
    if (j) {
      d = g + j * 16000;
      h = 0;
      loop L_m {
        if (eqz(h)) {
          l = d[0];
          goto B_n;
        }
        i = d + (f = h << 3);
        l = i[0];
        o = h & 1;
        c = 0;
        if (h != 1) {
          k = h & 2147483646;
          e = 0;
          loop L_q {
            i[0] = (l = l - d[c]:double * (g + c * 16000 + f)[0]:double);
            i[0] = (l = l - d[m = c | 1]:double * (g + m * 16000 + f)[0]:double);
            c = c + 2;
            e = e + 2;
            if (e != k) continue L_q;
          }
        }
        if (eqz(o)) goto B_n;
        i[0] = (l = l - d[c]:double * (g + c * 16000 + f)[0]:double);
        label B_n:
        (d + (c = h << 3))[0]:double = l / (g + h * 16000 + c)[0]:double;
        h = h + 1;
        if (h != j) continue L_m;
      }
    }
    k = j & 2147483646;
    o = j & 1;
    h = j;
    loop L_r {
      if (eqz(j)) goto B_s;
      d = g + j * 16000;
      i = d + (f = h << 3);
      l = i[0];
      c = 0;
      e = 0;
      if (j != 1) {
        loop L_u {
          i[0] = (l = l - d[c]:double * (g + c * 16000 + f)[0]:double);
          i[0] = (l = l - d[m = c | 1]:double * (g + m * 16000 + f)[0]:double);
          c = c + 2;
          e = e + 2;
          if (e != k) continue L_u;
        }
      }
      if (eqz(o)) goto B_s;
      i[0] = l - d[c]:double * (g + c * 16000 + f)[0]:double;
      label B_s:
      h = h + 1;
      if (h != 2000) continue L_r;
    }
    j = j + 1;
    if (j != 2000) continue L_k;
  }
  if (a < 43) goto B_v;
  if ((b[0])[0]:ubyte) goto B_v;
  c = memory_base;
  fwrite(c + 42, 22, 1, f = stderr[0]:int);
  n[8]:int = c + 15;
  fiprintf(f, c, n + 32);
  d = 0;
  loop L_w {
    i = d * 2000;
    c = 0;
    loop L_x {
      if (eqz((c + i) % 20)) { fputc(10, f) }
      n[2]:double = (g + d * 16000)[c]:double;
      small_fprintf(f, memory_base + 17, n + 16);
      c = c + 1;
      if (c != 2000) continue L_x;
    }
    d = d + 1;
    if (d != 2000) continue L_w;
  }
  n[0]:int = (c = memory_base) + 15;
  fiprintf(f, c + 25, n);
  fwrite(c + 65, 22, 1, f);
  label B_v:
  free(g);
  stack_pointer = n + 48;
  return 0;
}

function legalfunc_polybench_alloc_data(a:long, b:int):int {
  return legalimport_polybench_alloc_data(i32_wrap_i64(a),
                                          i32_wrap_i64(a >> 32L),
                                          b)
}

