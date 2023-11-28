import memory env_memory;

import global stack_pointer:int;
import global memory_base:int;
import global stderr:int;

data rodata(offset: memory_base) =
  "begin dump: %s\00R\00Q\00%0.2lf \00\0aend   dump: %s\0a\00==BEGIN DUMP"
  "_ARRAYS==\0a\00==END   DUMP_ARRAYS==\0a\00";

import function memset(a:int, b:int, c:int):int;

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

export function kernel_gramschmidt(a:int, b:int, c:int, d:int, e:int) {
  var o:int;
  var m:double;
  var g:double_ptr;
  var l:int;
  var h:int;
  var s:int;
  var n:double_ptr;
  var f:int;
  var j:double;
  var k:int;
  if (b > 0) {
    var p:int = a & -2;
    var q:int = a & 1;
    var v:int = a & -4;
    var u:int = a & 3;
    var r:int = a - 1;
    var w:int = a < 4;
    loop L_b {
      var i:int = o;
      s = a <= 0;
      if (eqz(s)) {
        h = 0;
        j = 0.0;
        f = 0;
        k = 0;
        if (eqz(w)) {
          loop L_f {
            g = i << 3;
            m = (g + c + (f | 3) * 9600)[0]:double;
            j = m * m +
                (m = (c + (f | 2) * 9600 + g)[0]:double) * m +
                (m = (c + (f | 1) * 9600 + g)[0]:double) * m +
                (m = (c + f * 9600 + g)[0]:double) * m + j;
            f = f + 4;
            k = k + 4;
            if (k != v) continue L_f;
          }
        }
        if (u) {
          loop L_h {
            m = (c + f * 9600)[i]:double;
            j = m * m + j;
            f = f + 1;
            h = h + 1;
            if (h != u) continue L_h;
          }
        }
        f = i << 3;
        h = f + d + i * 9600;
        h[0]:double = sqrt(j);
        if (s) goto B_c;
        g = 0;
        k = 0;
        if (r) {
          loop L_j {
            (e + (l = g * 9600) + f)[0]:double =
              (c + l + f)[0]:double / h[0]:double;
            (e + (l = (g | 1) * 9600) + f)[0]:double =
              (c + l + f)[0]:double / h[0]:double;
            g = g + 2;
            k = k + 2;
            if (k != p) continue L_j;
          }
        }
        if (eqz(q)) goto B_c;
        (e + (g = g * 9600) + f)[0]:double =
          (c + g + f)[0]:double / h[0]:double;
        goto B_c;
      }
      (d + i * 9600)[i]:long = 0L;
      label B_c:
      o = i + 1;
      var t:int = o;
      if (b > o) {
        loop L_l {
          g = t << 3;
          h = g + d + i * 9600;
          h[0]:long = 0L;
          if (s) goto B_m;
          f = 0;
          j = 0.0;
          k = 0;
          if (r) {
            loop L_o {
              h[0]:double =
                (j = 
                   ((n = i << 3) + e + (l = f * 9600))[0]:double * (c + l + g)[0]:double +
                   j);
              h[0]:double =
                (j = 
                   (e + (l = (f | 1) * 9600) + n)[0]:double * (c + l + g)[0]:double + j);
              f = f + 2;
              k = k + 2;
              if (k != p) continue L_o;
            }
          }
          if (q) {
            h[0]:double =
              (e + (f = f * 9600))[i]:double * (c + f + g)[0]:double + j
          }
          if (s) goto B_m;
          f = 0;
          k = 0;
          if (r) {
            loop L_r {
              n = c + (l = f * 9600) + g;
              n[0] = n[0] - (e + l + (l = i << 3))[0]:double * h[0]:double;
              var x:double_ptr = c + (n = (f | 1) * 9600) + g;
              x[0] = x[0] - (e + n + l)[0]:double * h[0]:double;
              f = f + 2;
              k = k + 2;
              if (k != p) continue L_r;
            }
          }
          if (eqz(q)) goto B_m;
          g = c + (f = f * 9600) + g;
          g[0] = g[0] - (e + f)[i]:double * h[0]:double;
          label B_m:
          t = t + 1;
          if (t != b) continue L_l;
        }
      }
      if (b != o) continue L_b;
    }
  }
}

export function submain(a:int, b:int_ptr):int {
  var d:double_ptr;
  var e:int;
  var n:int;
  var c:int;
  var g:int;
  var m:double_ptr;
  var h:int = stack_pointer - 96;
  stack_pointer = h;
  var i:int = legalfunc_polybench_alloc_data(1200000L, 8);
  var f:int = legalfunc_polybench_alloc_data(1440000L, 8);
  var j:int = legalfunc_polybench_alloc_data(1200000L, 8);
  loop L_a {
    c = 0;
    loop L_b {
      g = c << 3;
      (g + i + (e = d * 9600))[0]:double =
        f64_convert_i32_s(c * d % 1000) / 1000.0 * 100.0 + 10.0;
      (e + j + g)[0]:long = 0L;
      c = c + 1;
      if (c != 1200) continue L_b;
    }
    d = d + 1;
    if (d != 1000) continue L_a;
  }
  var o:int = memset(f, 0, 11520000);
  loop L_c {
    f = n;
    var l:double = 0.0;
    e = 0;
    loop L_d {
      c = f << 3;
      d = c + i + e * 9600;
      var k:double = (d + 38400)[0]:double;
      l = k * k +
          (k = (d + 28800)[0]:double) * k +
          (k = (d + 19200)[0]:double) * k +
          (k = (d + 9600)[0]:double) * k + (k = d[0]) * k + l;
      e = e + 5;
      if (e != 1000) continue L_d;
    }
    var q:int = o + f * 9600;
    e = q + c;
    e[0]:double = sqrt(l);
    d = 0;
    loop L_e {
      (j + (g = d * 9600) + c)[0]:double =
        (g + i + c)[0]:double / e[0]:double;
      (j + (g = (d | 1) * 9600) + c)[0]:double =
        (g + i + c)[0]:double / e[0]:double;
      d = d + 2;
      if (d != 1000) continue L_e;
    }
    n = f + 1;
    var p:int = n;
    if (f <= 1198) {
      loop L_g {
        e = q + (d = p << 3);
        e[0]:long = 0L;
        g = 0;
        l = 0.0;
        f = 0;
        loop L_h {
          e[0]:double =
            (l = (j + (m = f * 9600) + c)[0]:double * (i + m + d)[0]:double + l);
          e[0]:double =
            (l = 
               (j + (m = (f | 1) * 9600) + c)[0]:double * (i + m + d)[0]:double + l);
          f = f + 2;
          if (f != 1000) continue L_h;
        }
        loop L_i {
          m = i + (f = g * 9600) + d;
          m[0] = m[0] - (f + j + c)[0]:double * e[0]:double;
          m = i + (f = (g | 1) * 9600) + d;
          m[0] = m[0] - (f + j + c)[0]:double * e[0]:double;
          g = g + 2;
          if (g != 1000) continue L_i;
        }
        p = p + 1;
        if (p != 1200) continue L_g;
      }
    }
    if (n != 1200) continue L_c;
  }
  if (a < 43) goto B_j;
  if ((b[0])[0]:ubyte) goto B_j;
  c = memory_base;
  fwrite(c + 44, 22, 1, d = stderr[0]:int);
  h[20]:int = c + 15;
  fiprintf(d, c, h + 80);
  e = 0;
  loop L_k {
    g = e * 1200;
    c = 0;
    loop L_l {
      if (eqz((c + g) % 20)) { fputc(10, d) }
      h[8]:double = (o + e * 9600)[c]:double;
      small_fprintf(d, memory_base + 19, h - -64);
      c = c + 1;
      if (c != 1200) continue L_l;
    }
    e = e + 1;
    if (e != 1200) continue L_k;
  }
  h[12]:int = (c = memory_base) + 15;
  fiprintf(d, c + 27, h + 48);
  h[8]:int = c + 17;
  fiprintf(d, c, h + 32);
  e = 0;
  loop L_n {
    g = e * 1200;
    c = 0;
    loop L_o {
      if (eqz((c + g) % 20)) { fputc(10, d) }
      h[2]:double = (j + e * 9600)[c]:double;
      small_fprintf(d, memory_base + 19, h + 16);
      c = c + 1;
      if (c != 1200) continue L_o;
    }
    e = e + 1;
    if (e != 1000) continue L_n;
  }
  h[0]:int = (c = memory_base) + 17;
  fiprintf(d, c + 27, h);
  fwrite(c + 67, 22, 1, d);
  label B_j:
  free(i);
  free(o);
  free(j);
  stack_pointer = h + 96;
  return 0;
}

function legalfunc_polybench_alloc_data(a:long, b:int):int {
  return legalimport_polybench_alloc_data(i32_wrap_i64(a),
                                          i32_wrap_i64(a >> 32L),
                                          b)
}

