import memory env_memory;

import global stack_pointer:int;
import global memory_base:int;
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
  nop
}

export function wasm_apply_data_relocs() {
  nop
}

export function kernel_seidel_2d(a:int, b:int, c:double_ptr) {
  var q:double;
  var r:int;
  var g:int;
  if (a > 0) {
    var f:int = b - 1;
    var n:int = b < 3;
    loop L_b {
      if (eqz(n)) {
        var e:double = c[0];
        b = 1;
        loop L_d {
          var h:int = b + 1;
          var o:int = b - 1;
          var d:{ a:double, b:double } = c + b * 16000;
          var i:double = d.b;
          var j:double = (d + 16008)[0]:double;
          var k:double = (d + 16000)[0]:double;
          var l:double = (d - 15992)[0]:double;
          var p:double = d.a;
          var m:double = p;
          b = 1;
          loop L_e {
            d[b]:double =
              (m = (e + (q = l) +
                    (l = ((b = (r = b + 1) << 3) + c + o * 16000)[0]:double) +
                    m +
                    i +
                    (i = (b + d)[0]:double) +
                    k +
                    (e = j) +
                    (j = (c + h * 16000 + b)[0]:double)) /
                   9.0);
            k = e;
            e = q;
            b = r;
            if (b != f) continue L_e;
          }
          e = p;
          b = h;
          if (b != f) continue L_d;
        }
      }
      g = g + 1;
      if (g != a) continue L_b;
    }
  }
}

export function submain(a:int, b:int_ptr):int {
  var h:int;
  var i:int;
  var e:int;
  var d:{ a:double, b:double }
  var c:int;
  var j:double;
  var s:double;
  var l:int;
  var f:int = stack_pointer - 48;
  stack_pointer = f;
  var g:double_ptr = legalfunc_polybench_alloc_data(4000000L, 8);
  loop L_a {
    j = f64_convert_i32_s(h);
    c = 0;
    loop L_b {
      d = g + h * 16000;
      (d + (i = c << 3))[0]:double =
        (j * f64_convert_i32_s(e = c + 2) + 2.0) / 2000.0;
      (d + (i | 8))[0]:double =
        (j * f64_convert_i32_s(c + 3) + 2.0) / 2000.0;
      c = e;
      if (c != 2000) continue L_b;
    }
    h = h + 1;
    if (h != 2000) continue L_a;
  }
  loop L_c {
    var k:double = g[0];
    e = 1;
    loop L_d {
      c = 1;
      i = e + 1;
      h = e - 1;
      d = g + e * 16000;
      var m:double = d.b;
      var n:double = (d + 16008)[0]:double;
      var o:double = (d + 16000)[0]:double;
      var p:double = (d - 15992)[0]:double;
      var r:double = d.a;
      var q:double = r;
      loop L_e {
        j = n;
        d[c]:double =
          (q = ((n = ((c = (e = c + 1) << 3) + g + i * 16000)[0]:double) +
                j +
                o +
                m + q + (s = p) + k + (p = (g + h * 16000 + c)[0]:double) +
                (m = (c + d)[0]:double)) /
               9.0);
        o = j;
        k = s;
        c = e;
        if (c != 1999) continue L_e;
      }
      k = r;
      e = i;
      if (e != 1999) continue L_d;
    }
    l = l + 1;
    if (l != 500) continue L_c;
  }
  if (a < 43) goto B_f;
  if ((b[0])[0]:ubyte) goto B_f;
  c = memory_base;
  fwrite(c + 42, 22, 1, d = stderr[0]:int);
  f[8]:int = c + 15;
  fiprintf(d, c, f + 32);
  e = 0;
  loop L_g {
    i = e * 2000;
    c = 0;
    loop L_h {
      if (eqz((c + i) % 20)) { fputc(10, d) }
      f[2]:double = (g + e * 16000)[c]:double;
      small_fprintf(d, memory_base + 17, f + 16);
      c = c + 1;
      if (c != 2000) continue L_h;
    }
    e = e + 1;
    if (e != 2000) continue L_g;
  }
  f[0]:int = (c = memory_base) + 15;
  fiprintf(d, c + 25, f);
  fwrite(c + 65, 22, 1, d);
  label B_f:
  free(g);
  stack_pointer = f + 48;
  return 0;
}

function legalfunc_polybench_alloc_data(a:long, b:int):int {
  return legalimport_polybench_alloc_data(i32_wrap_i64(a),
                                          i32_wrap_i64(a >> 32L),
                                          b)
}

