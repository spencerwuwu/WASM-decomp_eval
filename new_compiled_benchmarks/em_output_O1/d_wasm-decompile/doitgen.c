import memory env_memory;

import global stack_pointer:int;
import global memory_base:int;
import global table_base:int;
import global stderr:int;

data rodata(offset: memory_base) =
  "begin dump: %s\00A\00%0.2lf \00\0aend   dump: %s\0a\00==BEGIN DUMP_ARR"
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

export function kernel_doitgen(a:int, b:int, c:int, d:int, e:int, f:int) {
  var k:int;
  var l:int;
  var o:int;
  if (a < 1) goto B_a;
  var g:int = b < 1;
  var h:int = 0;
  loop L_b {
    var i:int = h;
    h = 0;
    if (g) goto B_c;
    loop L_d {
      var j:int = h;
      h = 0;
      if (c <= 0) goto B_e;
      loop L_f {
        var m:int = f + (l = (k = h) << 3);
        m[0]:long = 0L;
        var n:double = 0.0;
        h = 0;
        loop L_g {
          m[0]:double =
            (n = (d + i * 179200 + j * 1280)[h = h]:double *
                 (e + h * 1280 + l)[0]:double +
                 n);
          n = n;
          o = h + 1;
          h = o;
          if (o != c) continue L_g;
        }
        o = k + 1;
        h = o;
        if (o != c) continue L_f;
      }
      label B_e:
      h = 0;
      if (c <= 0) goto B_h;
      loop L_i {
        (d + i * 179200 + j * 1280 + (o = (h = h) << 3))[0]:double =
          (f + o)[0]:double;
        o = h + 1;
        h = o;
        if (o != c) continue L_i;
      }
      label B_h:
      o = j + 1;
      h = o;
      if (o != b) continue L_d;
    }
    label B_c:
    o = i + 1;
    h = o;
    if (o != a) continue L_b;
  }
  label B_a:
}

export function submain(a:int, b:int_ptr):int {
  var k:int;
  var i:int;
  var n:int;
  var h:int;
  var j:int;
  var m:int;
  var l:int;
  var c:int = stack_pointer - 48;
  stack_pointer = c;
  var d:int = legalfunc_polybench_alloc_data(3360000L, 8);
  var e:int = legalfunc_polybench_alloc_data(160L, 8);
  var f:int = legalfunc_polybench_alloc_data(25600L, 8);
  var g:int = 0;
  loop L_a {
    h = g;
    g = 0;
    loop L_b {
      i = g;
      j = i * h;
      g = 0;
      loop L_c {
        (d + h * 179200 + i * 1280)[g = g]:double =
          f64_convert_i32_s((g + j) % 160) / 160.0;
        k = g + 1;
        g = k;
        if (k != 160) continue L_c;
      }
      k = i + 1;
      g = k;
      if (k != 140) continue L_b;
    }
    k = h + 1;
    g = k;
    if (k != 150) continue L_a;
  }
  g = 0;
  loop L_d {
    k = g;
    g = 0;
    loop L_e {
      (f + k * 1280)[g = g]:double = f64_convert_i32_s(g * k % 160) / 160.0;
      i = g + 1;
      g = i;
      if (i != 160) continue L_e;
    }
    k = k + 1;
    g = k;
    if (k != 160) continue L_d;
  }
  g = 0;
  loop L_f {
    l = g;
    g = 0;
    loop L_g {
      m = g;
      g = 0;
      loop L_h {
        h = e + (i = (n = g) << 3);
        h[0]:long = 0L;
        var o:double = 0.0;
        g = 0;
        loop L_i {
          h[0]:double =
            (o = (j = d + l * 179200 + m * 1280)[g = g]:double *
                 (f + g * 1280 + i)[0]:double +
                 o);
          o = o;
          k = g + 1;
          g = k;
          if (k != 160) continue L_i;
        }
        k = n + 1;
        g = k;
        if (k != 160) continue L_h;
      }
      g = 0;
      loop L_j {
        (j + (k = (g = g) << 3))[0]:double = (e + k)[0]:double;
        k = g + 1;
        g = k;
        if (k != 160) continue L_j;
      }
      k = m + 1;
      g = k;
      if (k != 140) continue L_g;
    }
    k = l + 1;
    g = k;
    if (k != 150) continue L_f;
  }
  if (a < 43) goto B_k;
  if ((b[0])[0]:ubyte) goto B_k;
  g = memory_base;
  fwrite(g + 42, 22, 1, h = stderr[0]:int);
  c[8]:int = g + 15;
  fiprintf(h, g + 0, c + 32);
  g = 0;
  loop L_l {
    m = g;
    l = m * 22400;
    g = 0;
    loop L_m {
      i = g;
      j = i * 160 + l;
      g = 0;
      loop L_n {
        if ((j + (g = g)) % 20) goto B_o;
        fputc(10, h);
        label B_o:
        c[2]:double = (d + m * 179200 + i * 1280)[g]:double;
        small_fprintf(h, memory_base + 17, c + 16);
        k = g + 1;
        g = k;
        if (k != 160) continue L_n;
      }
      k = i + 1;
      g = k;
      if (k != 140) continue L_m;
    }
    k = m + 1;
    g = k;
    if (k != 150) continue L_l;
  }
  c[0]:int = (g = memory_base) + 15;
  fiprintf(h, g + 25, c);
  fwrite(g + 65, 22, 1, h);
  label B_k:
  free(d);
  free(e);
  free(f);
  stack_pointer = c + 48;
  return 0;
}

function legalfunc_polybench_alloc_data(a:long, b:int):int {
  return legalimport_polybench_alloc_data(i32_wrap_i64(a),
                                          i32_wrap_i64(a >> 32L),
                                          b)
}

