import memory env_memory;

import global stack_pointer:int;
import global memory_base:int;
import global table_base:int;
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
}

export function wasm_apply_data_relocs() {
}

export function init_array(a:int, b:int, c:int, d:int, e:int, f:int, g:int, h:int, i:int) {
  var k:int;
  var l:int;
  var m:int;
  var j:double;
  if (a < 1) goto B_a;
  j = f64_convert_i32_s(a * 5);
  k = 0;
  loop L_b {
    l = k;
    k = 0;
    if (c <= 0) goto B_c;
    loop L_d {
      (f + l * 8000)[k = k]:double = f64_convert_i32_s((k * l + 1) % a) / j;
      m = k + 1;
      k = m;
      if (m != c) continue L_d;
    }
    label B_c:
    l = l + 1;
    k = l;
    if (l != a) continue L_b;
  }
  label B_a:
  if (c < 1) goto B_e;
  j = f64_convert_i32_s(b * 5);
  k = 0;
  loop L_f {
    l = k;
    m = 0;
    if (b <= 0) goto B_g;
    loop L_h {
      (g + l * 7200)[k = m]:double =
        f64_convert_i32_s(((k = k + 1) * l + 2) % b) / j;
      m = k;
      if (k != b) continue L_h;
    }
    label B_g:
    l = l + 1;
    k = l;
    if (l != c) continue L_f;
  }
  label B_e:
  if (b < 1) goto B_i;
  j = f64_convert_i32_s(d * 5);
  k = 0;
  loop L_j {
    l = k;
    k = 0;
    if (e <= 0) goto B_k;
    loop L_l {
      (h + l * 9600)[k = k]:double = f64_convert_i32_s((k + 3) * l % d) / j;
      m = k + 1;
      k = m;
      if (m != e) continue L_l;
    }
    label B_k:
    l = l + 1;
    k = l;
    if (l != b) continue L_j;
  }
  label B_i:
  if (e < 1) goto B_m;
  j = f64_convert_i32_s(c * 5);
  m = d < 1;
  k = 0;
  loop L_n {
    b = k;
    k = 0;
    if (m) goto B_o;
    loop L_p {
      (i + b * 8800)[k = k]:double =
        f64_convert_i32_s(((k + 2) * b + 2) % c) / j;
      l = k + 1;
      k = l;
      if (l != d) continue L_p;
    }
    label B_o:
    b = b + 1;
    k = b;
    if (b != e) continue L_n;
  }
  label B_m:
}

export function print_array(a:int, b:int, c:int) {
  var f:int;
  var d:int = stack_pointer - 48;
  stack_pointer = d;
  var e:int = memory_base;
  fwrite(e + 42, 22, 1, f = stderr[0]:int);
  d[8]:int = e + 15;
  fiprintf(f, e + 0, d + 32);
  if (a < 1) goto B_a;
  var g:int = b < 1;
  e = 0;
  loop L_b {
    var h:int = e;
    if (g) goto B_c;
    var i:int = h * a;
    e = 0;
    loop L_d {
      e = e;
      if ((e + i) % 20) goto B_e;
      fputc(10, f);
      label B_e:
      d[2]:double = (c + h * 8800)[e]:double;
      small_fprintf(f, memory_base + 17, d + 16);
      var j:int = e + 1;
      e = j;
      if (j != b) continue L_d;
    }
    label B_c:
    h = h + 1;
    e = h;
    if (h != a) continue L_b;
  }
  label B_a:
  d[0]:int = (e = memory_base) + 15;
  fiprintf(f, e + 25, d);
  fwrite(e + 65, 22, 1, f);
  stack_pointer = d + 48;
}

export function kernel_3mm(a:int, b:int, c:int, d:int, e:int, f:int, g:int, h:int, i:int, j:int, k:int, l:int) {
  var p:int;
  var q:int;
  var t:int;
  var n:int;
  var o:int;
  var r:int;
  var s:double;
  if (a < 1) goto B_a;
  var m:int = c < 1;
  n = 0;
  loop L_b {
    o = n;
    n = 0;
    if (b <= 0) goto B_c;
    loop L_d {
      r = f + o * 7200 + (q = (p = n) << 3);
      r[0]:long = 0L;
      if (m) goto B_e;
      s = r[0]:double;
      n = 0;
      loop L_f {
        r[0]:double =
          (s = (g + o * 8000)[n = n]:double * (h + n * 7200 + q)[0]:double + s);
        s = s;
        t = n + 1;
        n = t;
        if (t != c) continue L_f;
      }
      label B_e:
      t = p + 1;
      n = t;
      if (t != b) continue L_d;
    }
    label B_c:
    t = o + 1;
    n = t;
    if (t != a) continue L_b;
  }
  label B_a:
  if (b < 1) goto B_g;
  h = e < 1;
  n = 0;
  loop L_h {
    o = n;
    n = 0;
    if (d <= 0) goto B_i;
    loop L_j {
      r = i + o * 8800 + (q = (c = n) << 3);
      r[0]:long = 0L;
      if (h) goto B_k;
      s = r[0]:double;
      n = 0;
      loop L_l {
        r[0]:double =
          (s = (j + o * 9600)[n = n]:double * (k + n * 8800 + q)[0]:double + s);
        s = s;
        t = n + 1;
        n = t;
        if (t != e) continue L_l;
      }
      label B_k:
      t = c + 1;
      n = t;
      if (t != d) continue L_j;
    }
    label B_i:
    t = o + 1;
    n = t;
    if (t != b) continue L_h;
  }
  label B_g:
  if (a < 1) goto B_m;
  c = d < 1;
  n = 0;
  loop L_n {
    o = n;
    n = 0;
    if (c) goto B_o;
    loop L_p {
      r = l + o * 8800 + (q = (e = n) << 3);
      r[0]:long = 0L;
      if (b < 1) goto B_q;
      s = r[0]:double;
      n = 0;
      loop L_r {
        r[0]:double =
          (s = (f + o * 7200)[n = n]:double * (i + n * 8800 + q)[0]:double + s);
        s = s;
        t = n + 1;
        n = t;
        if (t != b) continue L_r;
      }
      label B_q:
      t = e + 1;
      n = t;
      if (t != d) continue L_p;
    }
    label B_o:
    t = o + 1;
    n = t;
    if (t != a) continue L_n;
  }
  label B_m:
}

export function submain(a:int, b:int_ptr):int {
  var k:int;
  var l:int;
  var m:int;
  var n:int;
  var o:int;
  var p:double;
  var c:int = legalfunc_polybench_alloc_data(720000L, 8);
  var d:int = legalfunc_polybench_alloc_data(800000L, 8);
  var e:int = legalfunc_polybench_alloc_data(900000L, 8);
  var f:int = legalfunc_polybench_alloc_data(990000L, 8);
  var g:int = legalfunc_polybench_alloc_data(1080000L, 8);
  var h:int = legalfunc_polybench_alloc_data(1320000L, 8);
  var i:int = legalfunc_polybench_alloc_data(880000L, 8);
  var j:int = 0;
  loop L_a {
    k = j;
    j = 0;
    loop L_b {
      (d + k * 8000)[j = j]:double =
        f64_convert_i32_s((j * k + 1) % 800) / 4000.0;
      l = j + 1;
      j = l;
      if (l != 1000) continue L_b;
    }
    k = k + 1;
    j = k;
    if (k != 800) continue L_a;
  }
  j = 0;
  loop L_c {
    k = j;
    l = 0;
    loop L_d {
      (e + k * 7200)[j = l]:double =
        f64_convert_i32_s(((j = j + 1) * k + 2) % 900) / 4500.0;
      l = j;
      if (j != 900) continue L_d;
    }
    k = k + 1;
    j = k;
    if (k != 1000) continue L_c;
  }
  j = 0;
  loop L_e {
    k = j;
    j = 0;
    loop L_f {
      (g + k * 9600)[j = j]:double =
        f64_convert_i32_s((j + 3) * k % 1100) / 5500.0;
      l = j + 1;
      j = l;
      if (l != 1200) continue L_f;
    }
    k = k + 1;
    j = k;
    if (k != 900) continue L_e;
  }
  j = 0;
  loop L_g {
    k = j;
    j = 0;
    loop L_h {
      (h + k * 8800)[j = j]:double =
        f64_convert_i32_s(((j + 2) * k + 2) % 1000) / 5000.0;
      l = j + 1;
      j = l;
      if (l != 1100) continue L_h;
    }
    k = k + 1;
    j = k;
    if (k != 1200) continue L_g;
  }
  j = 0;
  loop L_i {
    l = j;
    j = 0;
    loop L_j {
      o = c + l * 7200 + (n = (m = j) << 3);
      o[0]:long = 0L;
      p = 0.0;
      j = 0;
      loop L_k {
        o[0]:double =
          (p = (d + l * 8000)[j = j]:double * (e + j * 7200 + n)[0]:double + p);
        p = p;
        k = j + 1;
        j = k;
        if (k != 1000) continue L_k;
      }
      k = m + 1;
      j = k;
      if (k != 900) continue L_j;
    }
    k = l + 1;
    j = k;
    if (k != 800) continue L_i;
  }
  j = 0;
  loop L_l {
    l = j;
    j = 0;
    loop L_m {
      o = f + l * 8800 + (n = (m = j) << 3);
      o[0]:long = 0L;
      p = 0.0;
      j = 0;
      loop L_n {
        o[0]:double =
          (p = (g + l * 9600)[j = j]:double * (h + j * 8800 + n)[0]:double + p);
        p = p;
        k = j + 1;
        j = k;
        if (k != 1200) continue L_n;
      }
      k = m + 1;
      j = k;
      if (k != 1100) continue L_m;
    }
    k = l + 1;
    j = k;
    if (k != 900) continue L_l;
  }
  j = 0;
  loop L_o {
    l = j;
    j = 0;
    loop L_p {
      o = i + l * 8800 + (n = (m = j) << 3);
      o[0]:long = 0L;
      p = 0.0;
      j = 0;
      loop L_q {
        o[0]:double =
          (p = (c + l * 7200)[j = j]:double * (f + j * 8800 + n)[0]:double + p);
        p = p;
        k = j + 1;
        j = k;
        if (k != 900) continue L_q;
      }
      k = m + 1;
      j = k;
      if (k != 1100) continue L_p;
    }
    k = l + 1;
    j = k;
    if (k != 800) continue L_o;
  }
  if (a < 43) goto B_r;
  if ((b[0])[0]:ubyte) goto B_r;
  print_array(800, 1100, i);
  label B_r:
  free(c);
  free(d);
  free(e);
  free(f);
  free(g);
  free(h);
  free(i);
  return 0;
}

function legalfunc_polybench_alloc_data(a:long, b:int):int {
  return legalimport_polybench_alloc_data(i32_wrap_i64(a),
                                          i32_wrap_i64(a >> 32L),
                                          b)
}

