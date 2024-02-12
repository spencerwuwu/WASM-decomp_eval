import memory env_memory;

import global stack_pointer:int;
import global memory_base:int;
import global table_base:int;
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
}

export function wasm_apply_data_relocs() {
}

export function kernel_gramschmidt(a:int, b:int, c:int, d:int, e:int) {
  var k:int;
  var n:int;
  var p:int;
  if (b < 1) goto B_a;
  var f:int = a < 1;
  var g:int = 0;
  loop L_b {
    var h:int = g;
    var i:double = 0.0;
    g = 0;
    if (f) goto B_c;
    loop L_d {
      var j:double = (c + (g = g) * 9600)[h]:double;
      i = j * j + i;
      k = g + 1;
      g = k;
      if (k != a) continue L_d;
    }
    label B_c:
    var l:int = d + h * 9600;
    var m:double_ptr = l + (g = h << 3);
    m[0] = sqrt(i);
    k = 0;
    if (f) goto B_e;
    loop L_f {
      (e + (n = (k = k) * 9600) + g)[0]:double =
        (c + n + g)[0]:double / m[0];
      n = k + 1;
      k = n;
      if (n != a) continue L_f;
    }
    label B_e:
    var o:int = h + 1;
    k = o;
    if (o >= b) goto B_g;
    loop L_h {
      k = l + (n = (p = k) << 3);
      k[0]:long = 0L;
      if (f) goto B_i;
      i = k[0]:double;
      h = 0;
      loop L_j {
        k[0]:double =
          (i = 
             (e + (m = (h = h) * 9600) + g)[0]:double * (c + m + n)[0]:double + i);
        i = i;
        m = h + 1;
        h = m;
        if (m != a) continue L_j;
      }
      label B_i:
      h = 0;
      if (a <= 0) goto B_k;
      loop L_l {
        var q:double_ptr = c + (m = (h = h) * 9600) + n;
        q[0] = q[0] - (e + m + g)[0]:double * k[0]:double;
        m = h + 1;
        h = m;
        if (m != a) continue L_l;
      }
      label B_k:
      n = p + 1;
      k = n;
      if (n != b) continue L_h;
    }
    label B_g:
    g = o;
    if (o != b) continue L_b;
  }
  label B_a:
}

export function submain(a:int, b:int_ptr):int {
  var i:int;
  var j:int;
  var h:int;
  var m:double;
  var p:int;
  var c:int = stack_pointer - 96;
  stack_pointer = c;
  var d:int = legalfunc_polybench_alloc_data(1200000L, 8);
  var e:double_ptr = legalfunc_polybench_alloc_data(1440000L, 8);
  var f:int = legalfunc_polybench_alloc_data(1200000L, 8);
  var g:int = 0;
  loop L_a {
    h = g;
    g = 0;
    loop L_b {
      (d + (i = h * 9600) + (j = (g = g) << 3))[0]:double =
        f64_convert_i32_s(g * h % 1000) / 1000.0 * 100.0 + 10.0;
      (f + i + j)[0]:long = 0L;
      i = g + 1;
      g = i;
      if (i != 1200) continue L_b;
    }
    h = h + 1;
    g = h;
    if (h != 1000) continue L_a;
  }
  var k:int = memset(e, 0, 11520000);
  g = 0;
  loop L_c {
    j = g;
    var l:double = 0.0;
    h = 0;
    loop L_d {
      m = (d + (h = h) * 9600 + (g = j << 3))[0]:double;
      m = m * m + l;
      l = m;
      i = h + 1;
      h = i;
      if (i != 1000) continue L_d;
    }
    var n:int = k + j * 9600;
    e = n + g;
    e[0] = sqrt(m);
    h = 0;
    loop L_e {
      (f + (i = (h = h) * 9600) + g)[0]:double =
        (d + i + g)[0]:double / e[0];
      i = h + 1;
      h = i;
      if (i != 1000) continue L_e;
    }
    var o:int = j + 1;
    h = o;
    if (j > 1198) goto B_f;
    loop L_g {
      i = n + (h = (p = h) << 3);
      i[0]:long = 0L;
      l = 0.0;
      j = 0;
      loop L_h {
        i[0]:double =
          (l = 
             (f + (e = (j = j) * 9600) + g)[0]:double * (d + e + h)[0]:double + l);
        l = l;
        e = j + 1;
        j = e;
        if (e != 1000) continue L_h;
      }
      j = 0;
      loop L_i {
        var q:double_ptr = d + (e = (j = j) * 9600) + h;
        q[0] = q[0] - (f + e + g)[0]:double * i[0]:double;
        e = j + 1;
        j = e;
        if (e != 1000) continue L_i;
      }
      i = p + 1;
      h = i;
      if (i != 1200) continue L_g;
    }
    label B_f:
    g = o;
    if (o != 1200) continue L_c;
  }
  if (a < 43) goto B_j;
  if ((b[0])[0]:ubyte) goto B_j;
  h = memory_base;
  fwrite(h + 44, 22, 1, g = stderr[0]:int);
  c[20]:int = h + 15;
  fiprintf(g, h + 0, c + 80);
  h = 0;
  loop L_k {
    j = h;
    e = j * 1200;
    h = 0;
    loop L_l {
      h = h;
      if ((h + e) % 20) goto B_m;
      fputc(10, g);
      label B_m:
      c[8]:double = (k + j * 9600)[h]:double;
      small_fprintf(g, memory_base + 19, c + 64);
      i = h + 1;
      h = i;
      if (i != 1200) continue L_l;
    }
    i = j + 1;
    h = i;
    if (i != 1200) continue L_k;
  }
  c[12]:int = (h = memory_base) + 15;
  fiprintf(g, h + 27, c + 48);
  c[8]:int = h + 17;
  fiprintf(g, h + 0, c + 32);
  h = 0;
  loop L_n {
    j = h;
    e = j * 1200;
    h = 0;
    loop L_o {
      h = h;
      if ((h + e) % 20) goto B_p;
      fputc(10, g);
      label B_p:
      c[2]:double = (f + j * 9600)[h]:double;
      small_fprintf(g, memory_base + 19, c + 16);
      i = h + 1;
      h = i;
      if (i != 1200) continue L_o;
    }
    i = j + 1;
    h = i;
    if (i != 1000) continue L_n;
  }
  c[0]:int = (h = memory_base) + 17;
  fiprintf(g, h + 27, c);
  fwrite(h + 67, 22, 1, g);
  label B_j:
  free(d);
  free(k);
  free(f);
  stack_pointer = c + 96;
  return 0;
}

function legalfunc_polybench_alloc_data(a:long, b:int):int {
  return legalimport_polybench_alloc_data(i32_wrap_i64(a),
                                          i32_wrap_i64(a >> 32L),
                                          b)
}

