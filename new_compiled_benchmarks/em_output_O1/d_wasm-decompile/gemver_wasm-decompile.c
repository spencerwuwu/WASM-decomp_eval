import memory env_memory;

import global stack_pointer:int;
import global memory_base:int;
import global table_base:int;
import global stderr:int;

data rodata(offset: memory_base) =
  "w\00begin dump: %s\00%0.2lf \00\0aend   dump: %s\0a\00==BEGIN DUMP_ARR"
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

export function kernel_gemver(a:int, b:double, c:double, d:int, e:int, f:int, g:int, h:int, i:int, j:int, k:int, l:int) {
  var n:double_ptr;
  var q:int;
  var m:int;
  var r:double_ptr;
  var o:double_ptr;
  var s:double;
  if (a < 1) goto B_a;
  m = 0;
  loop L_b {
    o = g + (m = (n = m) << 3);
    var p:double_ptr = e + m;
    m = 0;
    loop L_c {
      r = d + n * 16000 + (m = (q = m) << 3);
      r[0] = o[0] * (h + m)[0]:double + p[0] * (f + m)[0]:double + r[0];
      q = q + 1;
      m = q;
      if (q != a) continue L_c;
    }
    q = n + 1;
    m = q;
    if (q != a) continue L_b;
  }
  label B_a:
  if (a <= 0) goto B_d;
  m = 0;
  loop L_e {
    r = j + (n = (o = m) << 3);
    s = r[0];
    m = 0;
    loop L_f {
      r[0] =
        (s = (d + (m = m) * 16000 + n)[0]:double * c * k[m]:double + s);
      s = s;
      q = m + 1;
      m = q;
      if (q != a) continue L_f;
    }
    q = o + 1;
    m = q;
    if (q != a) continue L_e;
  }
  label B_d:
  if (a <= 0) goto B_g;
  m = 0;
  loop L_h {
    r = j + (q = (m = m) << 3);
    r[0] = r[0] + (l + q)[0]:double;
    q = m + 1;
    m = q;
    if (q != a) continue L_h;
  }
  label B_g:
  if (a <= 0) goto B_i;
  m = 0;
  loop L_j {
    n = i + ((r = m) << 3);
    s = n[0];
    m = 0;
    loop L_k {
      n[0] =
        (s = (d + r * 16000 + (q = (m = m) << 3))[0]:double * b *
             (j + q)[0]:double +
             s);
      s = s;
      q = m + 1;
      m = q;
      if (q != a) continue L_k;
    }
    q = r + 1;
    m = q;
    if (q != a) continue L_j;
  }
  label B_i:
}

export function submain(a:int, b:int_ptr):int {
  var n:int;
  var o:double_ptr;
  var p:double;
  var q:double_ptr;
  var r:double_ptr;
  var c:int = stack_pointer - 48;
  stack_pointer = c;
  var d:int = legalfunc_polybench_alloc_data(4000000L, 8);
  var e:int = legalfunc_polybench_alloc_data(2000L, 8);
  var f:int = legalfunc_polybench_alloc_data(2000L, 8);
  var g:int = legalfunc_polybench_alloc_data(2000L, 8);
  var h:int = legalfunc_polybench_alloc_data(2000L, 8);
  var i:int = legalfunc_polybench_alloc_data(2000L, 8);
  var j:int = legalfunc_polybench_alloc_data(2000L, 8);
  var k:int = legalfunc_polybench_alloc_data(2000L, 8);
  var l:int = legalfunc_polybench_alloc_data(2000L, 8);
  var m:int = 0;
  loop L_a {
    (e + (m = (n = m) << 3))[0]:double = f64_convert_i32_s(n);
    (g + m)[0]:double = (p = f64_convert_i32_s(o = n + 1) / 2000.0) * 0.5;
    (f + m)[0]:double = p * 0.25;
    (h + m)[0]:double = p / 6.0;
    (k + m)[0]:double = p * 0.125;
    (l + m)[0]:double = p / 9.0;
    (j + m)[0]:long = 0L;
    (i + m)[0]:long = 0L;
    m = 0;
    loop L_b {
      (d + n * 16000)[m = m]:double =
        f64_convert_i32_s(m * n % 2000) / 2000.0;
      q = m + 1;
      m = q;
      if (q != 2000) continue L_b;
    }
    m = o;
    if (o != 2000) continue L_a;
  }
  m = 0;
  loop L_c {
    r = g + (m = (o = m) << 3);
    var s:double_ptr = e + m;
    m = 0;
    loop L_d {
      q = d + o * 16000 + (m = (n = m) << 3);
      q[0] = r[0] * (h + m)[0]:double + s[0] * (f + m)[0]:double + q[0];
      n = n + 1;
      m = n;
      if (n != 2000) continue L_d;
    }
    n = o + 1;
    m = n;
    if (n != 2000) continue L_c;
  }
  m = 0;
  loop L_e {
    o = j + (q = (r = m) << 3);
    p = o[0];
    m = 0;
    loop L_f {
      o[0] =
        (p = (d + (m = m) * 16000 + q)[0]:double * 1.2 * k[m]:double + p);
      p = p;
      n = m + 1;
      m = n;
      if (n != 2000) continue L_f;
    }
    n = r + 1;
    m = n;
    if (n != 2000) continue L_e;
  }
  m = 0;
  loop L_g {
    q = j + (n = (m = m) << 3);
    q[0] = q[0] + (l + n)[0]:double;
    n = m + 1;
    m = n;
    if (n != 2000) continue L_g;
  }
  m = 0;
  loop L_h {
    o = i + ((q = m) << 3);
    p = o[0];
    m = 0;
    loop L_i {
      o[0] =
        (p = (d + q * 16000 + (n = (m = m) << 3))[0]:double * 1.5 *
             (j + n)[0]:double +
             p);
      p = p;
      n = m + 1;
      m = n;
      if (n != 2000) continue L_i;
    }
    n = q + 1;
    m = n;
    if (n != 2000) continue L_h;
  }
  if (a < 43) goto B_j;
  if ((b[0])[0]:ubyte) goto B_j;
  m = memory_base;
  fwrite(m + 42, 22, 1, q = stderr[0]:int);
  c[8]:int = m + 0;
  fiprintf(q, m + 2, c + 32);
  m = 0;
  loop L_k {
    m = m;
    if (m % 20) goto B_l;
    fputc(10, q);
    label B_l:
    c[2]:double = i[m]:double;
    small_fprintf(q, memory_base + 17, c + 16);
    n = m + 1;
    m = n;
    if (n != 2000) continue L_k;
  }
  c[0]:int = (m = memory_base) + 0;
  fiprintf(q, m + 25, c);
  fwrite(m + 65, 22, 1, q);
  label B_j:
  free(d);
  free(e);
  free(f);
  free(g);
  free(h);
  free(i);
  free(j);
  free(k);
  free(l);
  stack_pointer = c + 48;
  return 0;
}

function legalfunc_polybench_alloc_data(a:long, b:int):int {
  return legalimport_polybench_alloc_data(i32_wrap_i64(a),
                                          i32_wrap_i64(a >> 32L),
                                          b)
}

