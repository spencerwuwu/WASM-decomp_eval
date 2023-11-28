import memory env_memory;

import global stack_pointer:int;
import global memory_base:int;
import global stderr:int;

data rodata(offset: memory_base) =
  "begin dump: %s\00D\00%0.2lf \00\0aend   dump: %s\0a\00==BEGIN DUMP_ARR"
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

export function init_array(a:int, b:int, c:int, d:int, e:long_ptr, f:long_ptr, g:int, h:int, i:int, j:int) {
  var n:int;
  var m:int;
  var k:double;
  var l:int;
  var o:int;
  e[0] = 4609434218613702656L;
  f[0] = 4608083138725491507L;
  if (a > 0) {
    o = c & -2;
    var p:int = c & 1;
    k = f64_convert_i32_s(a);
    f = 0;
    loop L_b {
      if (c <= 0) goto B_c;
      e = 0;
      l = 0;
      if (c != 1) {
        loop L_e {
          m = g + f * 8800;
          m[e]:double = f64_convert_i32_s((e * f | 1) % a) / k;
          m[n = e | 1]:double = f64_convert_i32_s((f * n + 1) % a) / k;
          e = e + 2;
          l = l + 2;
          if (l != o) continue L_e;
        }
      }
      if (eqz(p)) goto B_c;
      (g + f * 8800)[e]:double = f64_convert_i32_s((e * f + 1) % a) / k;
      label B_c:
      f = f + 1;
      if (f != a) continue L_b;
    }
  }
  if (c > 0) {
    g = b & -2;
    o = b & 1;
    k = f64_convert_i32_s(b);
    f = 0;
    loop L_g {
      if (b <= 0) goto B_h;
      e = 0;
      l = 0;
      if (b != 1) {
        loop L_j {
          m = h + f * 7200;
          m[e]:double = f64_convert_i32_s((n = e | 1) * f % b) / k;
          m[n]:double = f64_convert_i32_s((e = e + 2) * f % b) / k;
          l = l + 2;
          if (l != g) continue L_j;
        }
      }
      if (eqz(o)) goto B_h;
      (h + f * 7200)[e]:double = f64_convert_i32_s((e + 1) * f % b) / k;
      label B_h:
      f = f + 1;
      if (f != c) continue L_g;
    }
  }
  if (b > 0) {
    k = f64_convert_i32_s(d);
    f = 0;
    loop L_l {
      e = 0;
      if (d > 0) {
        loop L_n {
          (i + f * 9600)[e]:double =
            f64_convert_i32_s(((e + 3) * f + 1) % d) / k;
          e = e + 1;
          if (e != d) continue L_n;
        }
      }
      f = f + 1;
      if (f != b) continue L_l;
    }
  }
  if (a > 0) {
    n = d & -2;
    h = d & 1;
    k = f64_convert_i32_s(c);
    f = 0;
    loop L_p {
      if (d <= 0) goto B_q;
      e = 0;
      b = 0;
      if (d != 1) {
        loop L_s {
          l = j + f * 9600;
          (l + (i = e << 3))[0]:double =
            f64_convert_i32_s((m = e + 2) * f % c) / k;
          (l + (i | 8))[0]:double = f64_convert_i32_s((e + 3) * f % c) / k;
          e = m;
          b = b + 2;
          if (b != n) continue L_s;
        }
      }
      if (eqz(h)) goto B_q;
      (j + f * 9600)[e]:double = f64_convert_i32_s((e + 2) * f % c) / k;
      label B_q:
      f = f + 1;
      if (f != a) continue L_p;
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
          e[2]:double = (c + g * 9600)[d]:double;
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

export function kernel_2mm(a:int, b:int, c:int, d:int, e:double, f:double, g:int, h:int, i:int, j:int, k:int) {
  var o:int;
  var u:int;
  var q:int;
  var p:int;
  var n:double_ptr;
  var l:int;
  var m:double;
  var r:int;
  if (a <= 0) goto B_a;
  var s:int = c & -2;
  var v:int = c & 1;
  loop L_b {
    var t:int = 0;
    if (b > 0) {
      loop L_d {
        n = t << 3;
        p = n + g + o * 7200;
        p[0]:long = 0L;
        if (c <= 0) goto B_e;
        l = 0;
        m = 0.0;
        r = 0;
        if (c != 1) {
          loop L_g {
            p[0]:double =
              (m = 
                 (u = h + o * 8800)[l]:double * e * (i + l * 7200 + n)[0]:double + m);
            p[0]:double =
              (m = u[q = l | 1]:double * e * (i + q * 7200 + n)[0]:double + m);
            l = l + 2;
            r = r + 2;
            if (r != s) continue L_g;
          }
        }
        if (eqz(v)) goto B_e;
        p[0]:double =
          (h + o * 8800)[l]:double * e * (i + l * 7200 + n)[0]:double + m;
        label B_e:
        t = t + 1;
        if (t != b) continue L_d;
      }
    }
    o = o + 1;
    if (o != a) continue L_b;
  }
  if (a <= 0) goto B_a;
  o = b & -2;
  s = b & 1;
  q = 0;
  loop L_h {
    h = 0;
    if (d > 0) {
      loop L_j {
        p = h << 3;
        n = p + k + q * 9600;
        n[0] = (m = n[0] * f);
        if (b <= 0) goto B_k;
        l = 0;
        r = 0;
        if (b != 1) {
          loop L_m {
            n[0] =
              (m = (i = g + q * 7200)[l]:double * (j + l * 9600 + p)[0]:double + m);
            n[0] = (m = i[u = l | 1]:double * (j + u * 9600 + p)[0]:double + m);
            l = l + 2;
            r = r + 2;
            if (r != o) continue L_m;
          }
        }
        if (eqz(s)) goto B_k;
        n[0] = (g + q * 7200)[l]:double * (j + l * 9600 + p)[0]:double + m;
        label B_k:
        h = h + 1;
        if (h != d) continue L_j;
      }
    }
    q = q + 1;
    if (q != a) continue L_h;
  }
  label B_a:
}

export function submain(a:int, b:int_ptr):int {
  var d:double_ptr;
  var g:double_ptr;
  var e:int;
  var c:int;
  var h:int;
  var j:int;
  var i:int;
  var f:double;
  var m:int = legalfunc_polybench_alloc_data(720000L, 8);
  var n:int = legalfunc_polybench_alloc_data(880000L, 8);
  var k:int = legalfunc_polybench_alloc_data(990000L, 8);
  var o:int = legalfunc_polybench_alloc_data(1080000L, 8);
  var l:int = legalfunc_polybench_alloc_data(960000L, 8);
  loop L_a {
    c = 0;
    loop L_b {
      e = n + d * 8800;
      e[c]:double = f64_convert_i32_s((c * d | 1) % 800) / 800.0;
      e[g = c | 1]:double = f64_convert_i32_s((d * g + 1) % 800) / 800.0;
      c = c + 2;
      if (c != 1100) continue L_b;
    }
    d = d + 1;
    if (d != 800) continue L_a;
  }
  d = 0;
  loop L_c {
    c = 0;
    loop L_d {
      e = k + d * 7200;
      e[c]:double = f64_convert_i32_s((g = c | 1) * d % 900) / 900.0;
      e[g]:double = f64_convert_i32_s((c = c + 2) * d % 900) / 900.0;
      if (c != 900) continue L_d;
    }
    d = d + 1;
    if (d != 1100) continue L_c;
  }
  d = 0;
  loop L_e {
    c = 0;
    loop L_f {
      (o + d * 9600)[c]:double =
        f64_convert_i32_s(((c + 3) * d + 1) % 1200) / 1200.0;
      c = c + 1;
      if (c != 1200) continue L_f;
    }
    d = d + 1;
    if (d != 900) continue L_e;
  }
  d = 0;
  loop L_g {
    c = 0;
    loop L_h {
      g = l + d * 9600;
      (g + (h = c << 3))[0]:double =
        f64_convert_i32_s((e = c + 2) * d % 1100) / 1100.0;
      (g + (h | 8))[0]:double =
        f64_convert_i32_s((c + 3) * d % 1100) / 1100.0;
      c = e;
      if (c != 1200) continue L_h;
    }
    d = d + 1;
    if (d != 800) continue L_g;
  }
  loop L_i {
    i = 0;
    loop L_j {
      d = i << 3;
      e = d + m + j * 7200;
      e[0]:long = 0L;
      f = 0.0;
      c = 0;
      loop L_k {
        e[0]:double =
          (f = 
             (g = n + j * 8800)[c]:double * 1.5 * (k + c * 7200 + d)[0]:double + f);
        e[0]:double =
          (f = g[h = c | 1]:double * 1.5 * (k + h * 7200 + d)[0]:double + f);
        c = c + 2;
        if (c != 1100) continue L_k;
      }
      i = i + 1;
      if (i != 900) continue L_j;
    }
    j = j + 1;
    if (j != 800) continue L_i;
  }
  h = 0;
  loop L_l {
    i = 0;
    loop L_m {
      j = i << 3;
      d = j + l + h * 9600;
      d[0] = (f = d[0] * 1.2);
      c = 0;
      loop L_n {
        d[0] =
          (f = 
             (e = m + h * 7200 + (c << 3))[0]:double * (g = o + c * 9600 + j)[0] +
             f);
        d[0] = (f = e[1]:double * (g + 9600)[0]:double + f);
        d[0] = (f = e[2]:double * (g + 19200)[0]:double + f);
        c = c + 3;
        if (c != 900) continue L_n;
      }
      i = i + 1;
      if (i != 1200) continue L_m;
    }
    h = h + 1;
    if (h != 800) continue L_l;
  }
  if (a < 43) goto B_o;
  if ((b[0])[0]:ubyte) goto B_o;
  print_array(800, 1200, l);
  label B_o:
  free(m);
  free(n);
  free(k);
  free(o);
  free(l);
  return 0;
}

function legalfunc_polybench_alloc_data(a:long, b:int):int {
  return legalimport_polybench_alloc_data(i32_wrap_i64(a),
                                          i32_wrap_i64(a >> 32L),
                                          b)
}

