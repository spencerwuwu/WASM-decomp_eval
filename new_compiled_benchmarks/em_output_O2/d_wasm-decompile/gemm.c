import memory env_memory;

import global stack_pointer:int;
import global memory_base:int;
import global stderr:int;

data rodata(offset: memory_base) =
  "begin dump: %s\00C\00%0.2lf \00\0aend   dump: %s\0a\00==BEGIN DUMP_ARR"
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

export function kernel_gemm(a:int, b:int, c:int, d:double, e:double, f:int, g:int, h:int) {
  var k:int;
  var l:double_ptr;
  var i:double_ptr;
  var u:int;
  var n:double_ptr;
  var j:int;
  var m:double_ptr;
  var v:int;
  var o:int;
  if (a > 0) {
    var r:int = b & -2;
    var s:int = b & 1;
    var t:int = b & -4;
    var q:int = b & 3;
    loop L_b {
      u = b <= 0;
      if (u) goto B_c;
      o = 0;
      j = 0;
      n = 0;
      if (b > 3) {
        loop L_e {
          i = f + k * 8800;
          m = i + (l = j << 3);
          m[0] = m[0] * e;
          m = i + (l | 8);
          m[0] = m[0] * e;
          m = i + (l | 16);
          m[0] = m[0] * e;
          i = i + (l | 24);
          i[0] = i[0] * e;
          j = j + 4;
          n = n + 4;
          if (n != t) continue L_e;
        }
      }
      if (eqz(q)) goto B_c;
      loop L_f {
        i = f + k * 8800 + (j << 3);
        i[0] = i[0] * e;
        j = j + 1;
        o = o + 1;
        if (o != q) continue L_f;
      }
      label B_c:
      var p:int = 0;
      if (c > 0) {
        loop L_h {
          if (u) goto B_i;
          l = g + k * 9600 + (p << 3);
          j = 0;
          o = 0;
          if (b != 1) {
            loop L_k {
              n = f + k * 8800;
              m = n + (i = j << 3);
              m[0] = l[0] * d * ((v = h + p * 8800) + i)[0]:double + m[0];
              n = n + (i = i | 8);
              n[0] = l[0] * d * (i + v)[0]:double + n[0];
              j = j + 2;
              o = o + 2;
              if (o != r) continue L_k;
            }
          }
          if (eqz(s)) goto B_i;
          j = j << 3;
          i = j + f + k * 8800;
          i[0] = l[0] * d * (h + p * 8800 + j)[0]:double + i[0];
          label B_i:
          p = p + 1;
          if (p != c) continue L_h;
        }
      }
      k = k + 1;
      if (k != a) continue L_b;
    }
  }
}

export function submain(a:int, b:int_ptr):int {
  var d:int;
  var e:double_ptr;
  var f:int;
  var c:double_ptr;
  var h:double_ptr;
  var j:int;
  var n:int;
  var g:int = stack_pointer - 48;
  stack_pointer = g;
  var i:int = legalfunc_polybench_alloc_data(1100000L, 8);
  var l:int = legalfunc_polybench_alloc_data(1200000L, 8);
  var m:int = legalfunc_polybench_alloc_data(1320000L, 8);
  loop L_a {
    c = 0;
    loop L_b {
      f = i + d * 8800;
      f[c]:double = f64_convert_i32_s((c * d | 1) % 1000) / 1000.0;
      f[e = c | 1]:double = f64_convert_i32_s((d * e + 1) % 1000) / 1000.0;
      c = c + 2;
      if (c != 1100) continue L_b;
    }
    d = d + 1;
    if (d != 1000) continue L_a;
  }
  d = 0;
  loop L_c {
    c = 0;
    loop L_d {
      f = l + d * 9600;
      f[c]:double = f64_convert_i32_s((e = c | 1) * d % 1200) / 1200.0;
      f[e]:double = f64_convert_i32_s((c = c + 2) * d % 1200) / 1200.0;
      if (c != 1200) continue L_d;
    }
    d = d + 1;
    if (d != 1000) continue L_c;
  }
  d = 0;
  loop L_e {
    c = 0;
    loop L_f {
      e = m + d * 8800;
      (e + (h = c << 3))[0]:double =
        f64_convert_i32_s((f = c + 2) * d % 1100) / 1100.0;
      (e + (h | 8))[0]:double =
        f64_convert_i32_s((c + 3) * d % 1100) / 1100.0;
      c = f;
      if (c != 1100) continue L_f;
    }
    d = d + 1;
    if (d != 1200) continue L_e;
  }
  loop L_g {
    var k:int = 0;
    d = 0;
    loop L_h {
      f = i + j * 8800;
      c = f + (d << 3);
      c[0] = c[0] * 1.2;
      e = c + 8;
      e[0] = e[0] * 1.2;
      e = c + 16;
      e[0] = e[0] * 1.2;
      e = c + 24;
      e[0] = e[0] * 1.2;
      c = c + 32;
      c[0] = c[0] * 1.2;
      d = d + 5;
      if (d != 1100) continue L_h;
    }
    loop L_i {
      e = l + j * 9600 + (k << 3);
      c = 0;
      loop L_j {
        h = f + (d = c << 3);
        h[0] = e[0] * 1.5 * ((n = m + k * 8800) + d)[0]:double + h[0];
        h = f + (d = d | 8);
        h[0] = e[0] * 1.5 * (d + n)[0]:double + h[0];
        c = c + 2;
        if (c != 1100) continue L_j;
      }
      k = k + 1;
      if (k != 1200) continue L_i;
    }
    j = j + 1;
    if (j != 1000) continue L_g;
  }
  if (a < 43) goto B_k;
  if ((b[0])[0]:ubyte) goto B_k;
  c = memory_base;
  fwrite(c + 42, 22, 1, f = stderr[0]:int);
  g[8]:int = c + 15;
  fiprintf(f, c, g + 32);
  d = 0;
  loop L_l {
    e = d * 1000;
    c = 0;
    loop L_m {
      if (eqz((c + e) % 20)) { fputc(10, f) }
      g[2]:double = (i + d * 8800)[c]:double;
      small_fprintf(f, memory_base + 17, g + 16);
      c = c + 1;
      if (c != 1100) continue L_m;
    }
    d = d + 1;
    if (d != 1000) continue L_l;
  }
  g[0]:int = (c = memory_base) + 15;
  fiprintf(f, c + 25, g);
  fwrite(c + 65, 22, 1, f);
  label B_k:
  free(i);
  free(l);
  free(m);
  stack_pointer = g + 48;
  return 0;
}

function legalfunc_polybench_alloc_data(a:long, b:int):int {
  return legalimport_polybench_alloc_data(i32_wrap_i64(a),
                                          i32_wrap_i64(a >> 32L),
                                          b)
}

