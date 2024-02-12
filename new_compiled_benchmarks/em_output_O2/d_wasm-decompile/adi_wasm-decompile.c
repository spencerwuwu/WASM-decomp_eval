import memory env_memory;

import global stack_pointer:int;
import global memory_base:int;
import global stderr:int;

data rodata(offset: memory_base) =
  "u\00begin dump: %s\00%0.2lf \00\0aend   dump: %s\0a\00==BEGIN DUMP_ARR"
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

export function init_array(a:int, b:int) {
  var d:int;
  var k:int;
  if (a > 0) {
    var h:int = a & -2;
    var i:int = a & 1;
    var e:double = f64_convert_i32_s(a);
    loop L_b {
      var f:int = a + d;
      var c:int = 0;
      var g:int = 0;
      if (a != 1) {
        loop L_d {
          var j:int = b + d * 8000;
          j[c]:double = f64_convert_i32_s(f - c) / e;
          j[k = c | 1]:double = f64_convert_i32_s(f - k) / e;
          c = c + 2;
          g = g + 2;
          if (g != h) continue L_d;
        }
      }
      if (i) { (b + d * 8000)[c]:double = f64_convert_i32_s(f - c) / e }
      d = d + 1;
      if (d != a) continue L_b;
    }
  }
}

export function print_array(a:int, b:int) {
  var e:int;
  var f:int;
  var d:int = stack_pointer - 48;
  stack_pointer = d;
  var c:int = memory_base;
  fwrite(c + 42, 22, 1, e = stderr[0]:int);
  d[8]:int = c;
  fiprintf(e, c + 2, d + 32);
  if (a > 0) {
    loop L_b {
      var g:int = a * f;
      c = 0;
      loop L_c {
        if (eqz((c + g) % 20)) { fputc(10, e) }
        d[2]:double = (b + f * 8000)[c]:double;
        small_fprintf(e, memory_base + 17, d + 16);
        c = c + 1;
        if (c != a) continue L_c;
      }
      f = f + 1;
      if (f != a) continue L_b;
    }
  }
  d[0]:int = (c = memory_base);
  fiprintf(e, c + 25, d);
  fwrite(c + 65, 22, 1, e);
  stack_pointer = d + 48;
}

export function kernel_adi(a:int, b:double_ptr, c:int, d:int, e:int, f:int) {
  var l:double;
  var m:int;
  var i:double_ptr;
  var r:int;
  var t:double_ptr;
  var y:double;
  var p:int;
  var k:long_ptr;
  var g:int;
  var q:double_ptr;
  var ha:double_ptr;
  var u:double;
  if (a > 0) {
    var j:double = 1.0 / f64_convert_i32_s(a);
    var h:double = j / (l = (l = 1.0 / f64_convert_i32_s(b)) * l);
    var z:double = h + 1.0;
    j = (j + j) / l;
    var aa:double = j + 1.0;
    var v:int = b - 3;
    var ba:int = b & 1;
    var s:int = b - 2;
    var o:int = b - 1;
    var ca:int = (b << 3) + 7992;
    var w:double = j * -0.5;
    var da:double = w + w + 1.0;
    var x:double = h * -0.5;
    var ea:double = x + x + 1.0;
    j = -(x);
    l = -(w);
    var fa:int = b > 2;
    b = 1;
    loop L_b {
      var ga:int = b;
      var n:int = 0;
      b = 1;
      if (eqz(fa)) goto B_c;
      loop L_d {
        g = d + (m = b << 3);
        g[0]:long = 4607182418800017408L;
        k = e + (i = b * 8000);
        k[0] = 0L;
        i = f + i;
        i[0] = g[0]:double;
        p = b + 1;
        q = b - 1;
        g = f + (r = (b = n * 8000) + 8000);
        t = e + r;
        if (t >= f + (r = b + ca)) goto B_f;
        b = 1;
        if (g >= e + r) goto B_f;
        loop L_g {
          (k + (g = b << 3))[0]:double =
            l / (h = w * (k + (r = g - 8))[0]:double + aa);
          (g + i)[0]:double =
            (l * (i + r)[0]:double +
             j * (g = c + b * 8000)[p]:double +
             j * g[q]:double + ea * (g + m)[0]:double) /
            h;
          b = b + 1;
          if (b != o) continue L_g;
        }
        goto B_e;
        label B_f:
        h = g[0]:double;
        u = t[0];
        b = 1;
        loop L_h {
          (k + (g = b << 3))[0]:double = (u = l / (y = w * u + aa));
          (g + i)[0]:double =
            (h = (l * h +
                  j * (g = c + b * 8000)[p]:double +
                  j * g[q]:double + ea * (g + m)[0]:double) /
                 y);
          b = b + 1;
          if (b != o) continue L_h;
        }
        label B_e:
        (d + o * 8000 + m)[0]:long = 4607182418800017408L;
        h = 1.0;
        b = s;
        if (ba) {
          (d + s * 8000 + m)[0]:double =
            (h = (k + (b = s << 3))[0]:double + (b + i)[0]:double);
          b = v;
        }
        if (v) {
          loop L_k {
            q = d + b * 8000 + m;
            q[0] = (h = (k + (g = b << 3))[0]:double * h + (g + i)[0]:double);
            (q - 8000)[0]:double =
              (h = (k + (g = g - 8))[0]:double * h + (g + i)[0]:double);
            g = b > 2;
            b = b - 2;
            if (g) continue L_k;
          }
        }
        n = n + 1;
        b = p;
        if (b != o) continue L_d;
      }
      t = 0;
      b = 1;
      if (eqz(fa)) goto B_c;
      loop L_l {
        m = c + (p = b * 8000);
        m[0]:long = 4607182418800017408L;
        k = e + p;
        k[0] = 0L;
        i = f + p;
        i[0] = m[0]:double;
        q = b + 1;
        r = b - 1;
        b = f + (n = (g = t * 8000) + 8000);
        ha = e + n;
        if (ha >= f + (n = g + ca)) goto B_n;
        g = 1;
        if (b >= e + n) goto B_n;
        loop L_o {
          (k + (b = g << 3))[0]:double =
            j / (h = x * (k + (n = b - 8))[0]:double + z);
          (b + i)[0]:double =
            (j * (i + n)[0]:double +
             l * (d + q * 8000 + b)[0]:double +
             l * (d + r * 8000 + b)[0]:double + da * (d + p + b)[0]:double) /
            h;
          g = g + 1;
          if (g != o) continue L_o;
        }
        goto B_m;
        label B_n:
        h = b[0];
        u = ha[0];
        g = 1;
        loop L_p {
          (k + (b = g << 3))[0]:double = (u = j / (y = x * u + z));
          (b + i)[0]:double =
            (h = (j * h +
                  l * (d + q * 8000 + b)[0]:double +
                  l * (d + r * 8000 + b)[0]:double + da * (d + p + b)[0]:double) /
                 y);
          g = g + 1;
          if (g != o) continue L_p;
        }
        label B_m:
        m[o]:long = 4607182418800017408L;
        h = 1.0;
        b = s;
        if (ba) {
          (m + (b = s << 3))[0]:double =
            (h = (b + k)[0]:double + (b + i)[0]:double);
          b = v;
        }
        if (v) {
          loop L_s {
            (m + (g = b << 3))[0]:double =
              (h = (g + k)[0]:double * h + (g + i)[0]:double);
            (m + (g = g - 8))[0]:double =
              (h = (g + k)[0]:double * h + (g + i)[0]:double);
            g = b > 2;
            b = b - 2;
            if (g) continue L_s;
          }
        }
        t = t + 1;
        b = q;
        if (b != o) continue L_l;
      }
      label B_c:
      b = ga + 1;
      if (a != ga) continue L_b;
    }
  }
}

export function submain(a:int, b:int_ptr):int {
  var d:int;
  var k:int;
  var e:int = legalfunc_polybench_alloc_data(1000000L, 8);
  var f:int = legalfunc_polybench_alloc_data(1000000L, 8);
  var g:int = legalfunc_polybench_alloc_data(1000000L, 8);
  var h:int = legalfunc_polybench_alloc_data(1000000L, 8);
  loop L_a {
    var i:int = d + 1000;
    var c:int = 0;
    loop L_b {
      var j:int = e + d * 8000;
      j[c]:double = f64_convert_i32_s(i - c) / 1000.0;
      j[k = c | 1]:double = f64_convert_i32_s(i - k) / 1000.0;
      c = c + 2;
      if (c != 1000) continue L_b;
    }
    d = d + 1;
    if (d != 1000) continue L_a;
  }
  kernel_adi(500, 1000, e, f, g, h);
  if (a < 43) goto B_c;
  if ((b[0])[0]:ubyte) goto B_c;
  print_array(1000, e);
  label B_c:
  free(e);
  free(f);
  free(g);
  free(h);
  return 0;
}

function legalfunc_polybench_alloc_data(a:long, b:int):int {
  return legalimport_polybench_alloc_data(i32_wrap_i64(a),
                                          i32_wrap_i64(a >> 32L),
                                          b)
}

