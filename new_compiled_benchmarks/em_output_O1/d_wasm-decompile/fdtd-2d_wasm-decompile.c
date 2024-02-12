import memory env_memory;

import global stack_pointer:int;
import global memory_base:int;
import global table_base:int;
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
}

export function wasm_apply_data_relocs() {
}

export function kernel_fdtd_2d(a:int, b:int, c:int, d:int, e:int, f:int, g:int) {
  var o:double_ptr;
  var n:double_ptr;
  var p:int;
  var r:double_ptr;
  var q:int;
  if (a < 1) goto B_a;
  var h:int = b + -2;
  var i:int = c + -2;
  var j:int = c < 1;
  var k:int = c < 2;
  var l:int = 0;
  loop L_b {
    var m:int = l;
    if (j) goto B_c;
    n = g + (m << 3);
    l = 0;
    loop L_d {
      e[l = l]:double = n[0];
      o = l + 1;
      l = o;
      if (o != c) continue L_d;
    }
    label B_c:
    l = 1;
    if (b <= 1) goto B_e;
    loop L_f {
      p = l;
      if (j) goto B_g;
      q = p + -1;
      l = 0;
      loop L_h {
        r = e + (o = p * 9600) + (l = (n = l) << 3);
        r[0] =
          ((f + o + l)[0]:double - (f + q * 9600 + l)[0]:double) * -0.5 + r[0];
        o = n + 1;
        l = o;
        if (o != c) continue L_h;
      }
      label B_g:
      o = p + 1;
      l = o;
      if (o != b) continue L_f;
    }
    label B_e:
    l = 0;
    if (b <= 0) goto B_i;
    loop L_j {
      p = l;
      l = 1;
      if (k) goto B_k;
      loop L_l {
        r = d + (o = p * 9600) + (n = (l = l) << 3);
        r[0] = ((o = f + o + n)[0] - (o + -8)[0]:double) * -0.5 + r[0];
        o = l + 1;
        l = o;
        if (o != c) continue L_l;
      }
      label B_k:
      o = p + 1;
      l = o;
      if (o != b) continue L_j;
    }
    label B_i:
    l = 0;
    if (b <= 1) goto B_m;
    loop L_n {
      var s:int = l;
      if (k) goto B_o;
      var t:int = s + 1;
      l = 0;
      loop L_p {
        r = f + (o = s * 9600) + (l = (n = l) << 3);
        r[0] =
          ((p = d + o)[q = n + 1]:double - (p + l)[0]:double +
           (e + t * 9600 + l)[0]:double -
           (e + o + l)[0]:double) *
          -0.7 +
          r[0];
        l = q;
        if (n != i) continue L_p;
      }
      label B_o:
      l = s + 1;
      if (s != h) continue L_n;
    }
    label B_m:
    o = m + 1;
    l = o;
    if (o != a) continue L_b;
  }
  label B_a:
}

export function submain(a:int, b:int_ptr):int {
  var l:int;
  var m:int;
  var i:int;
  var j:int;
  var c:int = stack_pointer - 144;
  stack_pointer = c;
  var d:int = legalfunc_polybench_alloc_data(1200000L, 8);
  var e:int = legalfunc_polybench_alloc_data(1200000L, 8);
  var f:int = legalfunc_polybench_alloc_data(1200000L, 8);
  var g:int = legalfunc_polybench_alloc_data(500L, 8);
  var h:int = 0;
  loop L_a {
    g[h = h]:double = f64_convert_i32_s(h);
    i = h + 1;
    h = i;
    if (i != 500) continue L_a;
  }
  h = 0;
  loop L_b {
    j = h;
    var k:double = f64_convert_i32_s(j);
    h = 0;
    loop L_c {
      (d + (i = j * 9600) + (l = (h = h) << 3))[0]:double =
        k * f64_convert_i32_s(m = h + 1) / 1000.0;
      (e + i + l)[0]:double = k * f64_convert_i32_s(h + 2) / 1200.0;
      (f + i + l)[0]:double = k * f64_convert_i32_s(h + 3) / 1000.0;
      h = m;
      if (m != 1200) continue L_c;
    }
    i = j + 1;
    h = i;
    if (i != 1000) continue L_b;
  }
  kernel_fdtd_2d(500, 1000, 1200, d, e, f, g);
  if (a < 43) goto B_d;
  if ((b[0])[0]:ubyte) goto B_d;
  i = memory_base;
  fwrite(i + 49, 22, 1, h = stderr[0]:int);
  c[32]:int = i + 6;
  fiprintf(h, i + 9, c + 128);
  i = 0;
  loop L_e {
    m = i;
    j = m * 1000;
    i = 0;
    loop L_f {
      i = i;
      if ((i + j) % 20) goto B_g;
      fputc(10, h);
      label B_g:
      c[14]:double = (d + m * 9600)[i]:double;
      small_fprintf(h, memory_base + 24, c + 112);
      l = i + 1;
      i = l;
      if (l != 1200) continue L_f;
    }
    l = m + 1;
    i = l;
    if (l != 1000) continue L_e;
  }
  c[24]:int = (i = memory_base) + 6;
  fiprintf(h, i + 32, c + 96);
  fwrite(i + 72, 22, 1, h);
  c[20]:int = i + 3;
  fiprintf(h, i + 9, c + 80);
  i = 0;
  loop L_h {
    m = i;
    j = m * 1000;
    i = 0;
    loop L_i {
      i = i;
      if ((i + j) % 20) goto B_j;
      fputc(10, h);
      label B_j:
      c[8]:double = (e + m * 9600)[i]:double;
      small_fprintf(h, memory_base + 24, c + 64);
      l = i + 1;
      i = l;
      if (l != 1200) continue L_i;
    }
    l = m + 1;
    i = l;
    if (l != 1000) continue L_h;
  }
  c[12]:int = (i = memory_base) + 3;
  fiprintf(h, i + 32, c + 48);
  c[8]:int = i + 0;
  fiprintf(h, i + 9, c + 32);
  i = 0;
  loop L_k {
    m = i;
    j = m * 1000;
    i = 0;
    loop L_l {
      i = i;
      if ((i + j) % 20) goto B_m;
      fputc(10, h);
      label B_m:
      c[2]:double = (f + m * 9600)[i]:double;
      small_fprintf(h, memory_base + 24, c + 16);
      l = i + 1;
      i = l;
      if (l != 1200) continue L_l;
    }
    l = m + 1;
    i = l;
    if (l != 1000) continue L_k;
  }
  c[0]:int = (i = memory_base) + 0;
  fiprintf(h, i + 32, c);
  label B_d:
  free(d);
  free(e);
  free(f);
  free(g);
  stack_pointer = c + 144;
  return 0;
}

function legalfunc_polybench_alloc_data(a:long, b:int):int {
  return legalimport_polybench_alloc_data(i32_wrap_i64(a),
                                          i32_wrap_i64(a >> 32L),
                                          b)
}

