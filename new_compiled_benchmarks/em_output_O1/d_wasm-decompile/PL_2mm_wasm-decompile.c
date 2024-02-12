import memory env_memory;

import global stack_pointer:int;
import global memory_base:int;
import global table_base:int;
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
}

export function wasm_apply_data_relocs() {
}

export function init_array(a:int, b:int, c:int, d:int, e:long_ptr, f:long_ptr, g:int, h:int, i:int, j:int) {
  var l:int;
  var k:double;
  e[0] = 4609434218613702656L;
  f[0] = 4608083138725491507L;
  if (a < 1) goto B_a;
  k = f64_convert_i32_s(a);
  e = 0;
  loop L_b {
    f = e;
    e = 0;
    if (c <= 0) goto B_c;
    loop L_d {
      (g + f * 8800)[e = e]:double = f64_convert_i32_s((e * f + 1) % a) / k;
      l = e + 1;
      e = l;
      if (l != c) continue L_d;
    }
    label B_c:
    f = f + 1;
    e = f;
    if (f != a) continue L_b;
  }
  label B_a:
  if (c < 1) goto B_e;
  k = f64_convert_i32_s(b);
  e = 0;
  loop L_f {
    f = e;
    l = 0;
    if (b <= 0) goto B_g;
    loop L_h {
      (h + f * 7200)[e = l]:double =
        f64_convert_i32_s((e = e + 1) * f % b) / k;
      l = e;
      if (e != b) continue L_h;
    }
    label B_g:
    f = f + 1;
    e = f;
    if (f != c) continue L_f;
  }
  label B_e:
  if (b < 1) goto B_i;
  k = f64_convert_i32_s(d);
  e = 0;
  loop L_j {
    f = e;
    e = 0;
    if (d <= 0) goto B_k;
    loop L_l {
      (i + f * 9600)[e = e]:double =
        f64_convert_i32_s(((e + 3) * f + 1) % d) / k;
      l = e + 1;
      e = l;
      if (l != d) continue L_l;
    }
    label B_k:
    f = f + 1;
    e = f;
    if (f != b) continue L_j;
  }
  label B_i:
  if (a < 1) goto B_m;
  k = f64_convert_i32_s(c);
  l = d < 1;
  e = 0;
  loop L_n {
    b = e;
    e = 0;
    if (l) goto B_o;
    loop L_p {
      (j + b * 9600)[e = e]:double = f64_convert_i32_s((e + 2) * b % c) / k;
      f = e + 1;
      e = f;
      if (f != d) continue L_p;
    }
    label B_o:
    b = b + 1;
    e = b;
    if (b != a) continue L_n;
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
      d[2]:double = (c + h * 9600)[e]:double;
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

export function kernel_2mm(a:int, b:int, c:int, d:int, e:double, f:double, g:int, h:int, i:int, j:int, k:int) {
  var p:int;
  var q:int;
  var t:int;
  var l:int;
  var n:int;
  var o:int;
  var r:int;
  var s:double;
  l = a < 1;
  if (l) goto B_a;
  var m:int = c < 1;
  n = 0;
  loop L_b {
    o = n;
    n = 0;
    if (b <= 0) goto B_c;
    loop L_d {
      r = g + o * 7200 + (q = (p = n) << 3);
      r[0]:long = 0L;
      if (m) goto B_e;
      s = r[0]:double;
      n = 0;
      loop L_f {
        r[0]:double =
          (s = 
             (h + o * 8800)[n = n]:double * e * (i + n * 7200 + q)[0]:double + s);
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
  if (l) goto B_g;
  i = d < 1;
  n = 0;
  loop L_h {
    o = n;
    n = 0;
    if (i) goto B_i;
    loop L_j {
      r = k + o * 9600 + (q = (c = n) << 3);
      r[0]:double = r[0]:double * f;
      if (b < 1) goto B_k;
      s = r[0]:double;
      n = 0;
      loop L_l {
        r[0]:double =
          (s = (g + o * 7200)[n = n]:double * (j + n * 9600 + q)[0]:double + s);
        s = s;
        t = n + 1;
        n = t;
        if (t != b) continue L_l;
      }
      label B_k:
      t = c + 1;
      n = t;
      if (t != d) continue L_j;
    }
    label B_i:
    t = o + 1;
    n = t;
    if (t != a) continue L_h;
  }
  label B_g:
}

export function submain(a:int, b:int_ptr):int {
  var i:int;
  var j:double_ptr;
  var k:int;
  var l:int;
  var n:double;
  var m:int;
  var c:int = legalfunc_polybench_alloc_data(720000L, 8);
  var d:int = legalfunc_polybench_alloc_data(880000L, 8);
  var e:int = legalfunc_polybench_alloc_data(990000L, 8);
  var f:int = legalfunc_polybench_alloc_data(1080000L, 8);
  var g:int = legalfunc_polybench_alloc_data(960000L, 8);
  var h:int = 0;
  loop L_a {
    i = h;
    h = 0;
    loop L_b {
      (d + i * 8800)[h = h]:double =
        f64_convert_i32_s((h * i + 1) % 800) / 800.0;
      j = h + 1;
      h = j;
      if (j != 1100) continue L_b;
    }
    i = i + 1;
    h = i;
    if (i != 800) continue L_a;
  }
  h = 0;
  loop L_c {
    i = h;
    j = 0;
    loop L_d {
      (e + i * 7200)[h = j]:double =
        f64_convert_i32_s((h = h + 1) * i % 900) / 900.0;
      j = h;
      if (h != 900) continue L_d;
    }
    i = i + 1;
    h = i;
    if (i != 1100) continue L_c;
  }
  h = 0;
  loop L_e {
    i = h;
    h = 0;
    loop L_f {
      (f + i * 9600)[h = h]:double =
        f64_convert_i32_s(((h + 3) * i + 1) % 1200) / 1200.0;
      j = h + 1;
      h = j;
      if (j != 1200) continue L_f;
    }
    i = i + 1;
    h = i;
    if (i != 900) continue L_e;
  }
  h = 0;
  loop L_g {
    i = h;
    h = 0;
    loop L_h {
      (g + i * 9600)[h = h]:double =
        f64_convert_i32_s((h + 2) * i % 1100) / 1100.0;
      j = h + 1;
      h = j;
      if (j != 1200) continue L_h;
    }
    i = i + 1;
    h = i;
    if (i != 800) continue L_g;
  }
  h = 0;
  loop L_i {
    j = h;
    h = 0;
    loop L_j {
      m = c + j * 7200 + (l = (k = h) << 3);
      m[0]:long = 0L;
      n = 0.0;
      h = 0;
      loop L_k {
        m[0]:double =
          (n = 
             (d + j * 8800)[h = h]:double * 1.5 * (e + h * 7200 + l)[0]:double + n);
        n = n;
        i = h + 1;
        h = i;
        if (i != 1100) continue L_k;
      }
      i = k + 1;
      h = i;
      if (i != 900) continue L_j;
    }
    i = j + 1;
    h = i;
    if (i != 800) continue L_i;
  }
  h = 0;
  loop L_l {
    l = h;
    h = 0;
    loop L_m {
      j = g + l * 9600 + (m = (k = h) << 3);
      j[0] = (n = j[0] * 1.2);
      n = n;
      h = 0;
      loop L_n {
        j[0] =
          (n = (c + l * 7200)[h = h]:double * (f + h * 9600 + m)[0]:double + n);
        n = n;
        i = h + 1;
        h = i;
        if (i != 900) continue L_n;
      }
      i = k + 1;
      h = i;
      if (i != 1200) continue L_m;
    }
    i = l + 1;
    h = i;
    if (i != 800) continue L_l;
  }
  if (a < 43) goto B_o;
  if ((b[0])[0]:ubyte) goto B_o;
  print_array(800, 1200, g);
  label B_o:
  free(c);
  free(d);
  free(e);
  free(f);
  free(g);
  return 0;
}

function legalfunc_polybench_alloc_data(a:long, b:int):int {
  return legalimport_polybench_alloc_data(i32_wrap_i64(a),
                                          i32_wrap_i64(a >> 32L),
                                          b)
}

