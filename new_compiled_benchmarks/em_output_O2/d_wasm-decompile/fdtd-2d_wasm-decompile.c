import memory env_memory;

import global stack_pointer:int;
import global memory_base:int;
import global stderr:int;

data rodata(offset: memory_base) =
  "hz\00ey\00ex\00begin dump: %s\00%0.2lf \00\0aend   dump: %s\0a\00==BEG"
  "IN DUMP_ARRAYS==\0a\00==END   DUMP_ARRAYS==\0a\00";

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

export function kernel_fdtd_2d(a:int, b:int, c:int, d:int, e:int, f:int, g:int) {
  var q:int;
  var j:double_ptr;
  var aa:int;
  var l:double_ptr;
  var i:double_ptr;
  var m:double_ptr;
  var h:double_ptr;
  var n:int;
  var p:int;
  var o:double_ptr;
  if (a > 0) {
    var u:int = b - 2;
    var v:int = c & -2;
    var w:int = c & 1;
    var x:int = c & -4;
    var r:int = c & 3;
    var s:int = c - 2;
    var t:int = c - 1;
    var y:int = t & -2;
    var z:int = t & 1;
    loop L_b {
      aa = c <= 0;
      if (aa) goto B_c;
      i = g + (q << 3);
      m = 0;
      h = 0;
      l = 0;
      if (c > 3) {
        loop L_e {
          (e + (j = h << 3))[0]:double = i[0];
          (e + (j | 8))[0]:double = i[0];
          (e + (j | 16))[0]:double = i[0];
          (e + (j | 24))[0]:double = i[0];
          h = h + 4;
          l = l + 4;
          if (l != x) continue L_e;
        }
      }
      if (eqz(r)) goto B_c;
      loop L_f {
        e[h]:double = i[0];
        h = h + 1;
        m = m + 1;
        if (m != r) continue L_f;
      }
      label B_c:
      var k:int = 1;
      if (b > 1) {
        loop L_h {
          if (aa) goto B_i;
          p = k - 1;
          i = 0;
          j = 0;
          if (t) {
            loop L_k {
              l = e + (m = k * 9600);
              o = l + (h = i << 3);
              o[0] =
                (((m = f + m) + h)[0]:double - ((n = f + p * 9600) + h)[0]:double) *
                -0.5 +
                o[0];
              l = l + (h = h | 8);
              l[0] = ((h + m)[0]:double - (h + n)[0]:double) * -0.5 + l[0];
              i = i + 2;
              j = j + 2;
              if (j != v) continue L_k;
            }
          }
          if (eqz(w)) goto B_i;
          h = i << 3;
          i = h + e + (j = k * 9600);
          i[0] =
            ((f + j + h)[0]:double - (f + p * 9600 + h)[0]:double) * -0.5 + i[0];
          label B_i:
          k = k + 1;
          if (k != b) continue L_h;
        }
      }
      k = 0;
      if (b <= 0) goto B_l;
      loop L_m {
        p = c < 2;
        if (p) goto B_n;
        m = 0;
        h = 1;
        if (s) {
          loop L_p {
            l = d + (j = k * 9600);
            o = l + (i = h << 3);
            o[0] = ((j = (n = f + j) + i)[0] - (j - 8)[0]:double) * -0.5 + o[0];
            l = l + (i = i + 8);
            l[0] = ((i + n)[0]:double - j[0]) * -0.5 + l[0];
            h = h + 2;
            m = m + 2;
            if (m != y) continue L_p;
          }
        }
        if (eqz(z)) goto B_n;
        h = h << 3;
        j = h + d + (i = k * 9600);
        j[0] = ((h = f + i + h)[0] - (h - 8)[0]:double) * -0.5 + j[0];
        label B_n:
        k = k + 1;
        if (k != b) continue L_m;
      }
      n = 0;
      if (b <= 1) goto B_l;
      loop L_q {
        k = n + 1;
        h = 0;
        if (eqz(p)) {
          loop L_s {
            i = h << 3;
            m = i + f + (j = n * 9600);
            m[0] =
              ((l = d + j)[o = h + 1]:double - (i + l)[0]:double +
               (e + k * 9600 + i)[0]:double -
               (e + j + i)[0]:double) *
              -0.7 +
              m[0];
            i = h != s;
            h = o;
            if (i) continue L_s;
          }
        }
        h = n != u;
        n = k;
        if (h) continue L_q;
      }
      label B_l:
      q = q + 1;
      if (q != a) continue L_b;
    }
  }
}

export function submain(a:int, b:int_ptr):int {
  var d:int;
  var c:int;
  var i:int;
  var h:int;
  var f:int;
  var e:int = stack_pointer - 144;
  stack_pointer = e;
  var j:int = legalfunc_polybench_alloc_data(1200000L, 8);
  var k:int = legalfunc_polybench_alloc_data(1200000L, 8);
  var l:int = legalfunc_polybench_alloc_data(1200000L, 8);
  var g:int = legalfunc_polybench_alloc_data(500L, 8);
  loop L_a {
    g[d]:double = f64_convert_i32_s(d);
    g[c = d + 1]:double = f64_convert_i32_s(c);
    g[c = d + 2]:double = f64_convert_i32_s(c);
    g[c = d + 3]:double = f64_convert_i32_s(c);
    g[c = d + 4]:double = f64_convert_i32_s(c);
    d = d + 5;
    if (d != 500) continue L_a;
  }
  loop L_b {
    var m:double = f64_convert_i32_s(i);
    d = 0;
    loop L_c {
      f = d << 3;
      (f + j + (c = i * 9600))[0]:double =
        m * f64_convert_i32_s(h = d + 1) / 1000.0;
      (c + k + f)[0]:double = m * f64_convert_i32_s(d + 2) / 1200.0;
      (c + l + f)[0]:double = m * f64_convert_i32_s(d + 3) / 1000.0;
      d = h;
      if (d != 1200) continue L_c;
    }
    i = i + 1;
    if (i != 1000) continue L_b;
  }
  kernel_fdtd_2d(500, 1000, 1200, j, k, l, g);
  if (a < 43) goto B_d;
  if ((b[0])[0]:ubyte) goto B_d;
  c = memory_base;
  fwrite(c + 49, 22, 1, d = stderr[0]:int);
  e[32]:int = c + 6;
  fiprintf(d, c + 9, e + 128);
  f = 0;
  loop L_e {
    h = f * 1000;
    c = 0;
    loop L_f {
      if (eqz((c + h) % 20)) { fputc(10, d) }
      e[14]:double = (j + f * 9600)[c]:double;
      small_fprintf(d, memory_base + 24, e + 112);
      c = c + 1;
      if (c != 1200) continue L_f;
    }
    f = f + 1;
    if (f != 1000) continue L_e;
  }
  e[24]:int = (c = memory_base) + 6;
  fiprintf(d, c + 32, e + 96);
  fwrite(c + 72, 22, 1, d);
  e[20]:int = c + 3;
  fiprintf(d, c + 9, e + 80);
  f = 0;
  loop L_h {
    h = f * 1000;
    c = 0;
    loop L_i {
      if (eqz((c + h) % 20)) { fputc(10, d) }
      e[8]:double = (k + f * 9600)[c]:double;
      small_fprintf(d, memory_base + 24, e - -64);
      c = c + 1;
      if (c != 1200) continue L_i;
    }
    f = f + 1;
    if (f != 1000) continue L_h;
  }
  e[12]:int = (c = memory_base) + 3;
  fiprintf(d, c + 32, e + 48);
  e[8]:int = c;
  fiprintf(d, c + 9, e + 32);
  f = 0;
  loop L_k {
    h = f * 1000;
    c = 0;
    loop L_l {
      if (eqz((c + h) % 20)) { fputc(10, d) }
      e[2]:double = (l + f * 9600)[c]:double;
      small_fprintf(d, memory_base + 24, e + 16);
      c = c + 1;
      if (c != 1200) continue L_l;
    }
    f = f + 1;
    if (f != 1000) continue L_k;
  }
  e[0]:int = (c = memory_base);
  fiprintf(d, c + 32, e);
  label B_d:
  free(j);
  free(k);
  free(l);
  free(g);
  stack_pointer = e + 144;
  return 0;
}

function legalfunc_polybench_alloc_data(a:long, b:int):int {
  return legalimport_polybench_alloc_data(i32_wrap_i64(a),
                                          i32_wrap_i64(a >> 32L),
                                          b)
}

