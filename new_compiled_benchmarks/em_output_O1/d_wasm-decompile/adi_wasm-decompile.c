import memory env_memory;

import global stack_pointer:int;
import global memory_base:int;
import global table_base:int;
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
}

export function wasm_apply_data_relocs() {
}

export function init_array(a:int, b:int) {
  var g:int;
  if (a < 1) goto B_a;
  var c:double = f64_convert_i32_s(a);
  var d:int = 0;
  loop L_b {
    var e:int = d;
    var f:int = e + a;
    d = 0;
    loop L_c {
      (b + e * 8000)[d = d]:double = f64_convert_i32_s(f - d) / c;
      g = d + 1;
      d = g;
      if (g != a) continue L_c;
    }
    g = e + 1;
    d = g;
    if (g != a) continue L_b;
  }
  label B_a:
}

export function print_array(a:int, b:int) {
  var e:int;
  var h:int;
  var c:int = stack_pointer - 48;
  stack_pointer = c;
  var d:int = memory_base;
  fwrite(d + 42, 22, 1, e = stderr[0]:int);
  c[8]:int = d + 0;
  fiprintf(e, d + 2, c + 32);
  if (a < 1) goto B_a;
  d = 0;
  loop L_b {
    var f:int = d;
    var g:int = f * a;
    d = 0;
    loop L_c {
      d = d;
      if ((d + g) % 20) goto B_d;
      fputc(10, e);
      label B_d:
      c[2]:double = (b + f * 8000)[d]:double;
      small_fprintf(e, memory_base + 17, c + 16);
      h = d + 1;
      d = h;
      if (h != a) continue L_c;
    }
    h = f + 1;
    d = h;
    if (h != a) continue L_b;
  }
  label B_a:
  c[0]:int = (d = memory_base) + 0;
  fiprintf(e, d + 25, c);
  fwrite(d + 65, 22, 1, e);
  stack_pointer = c + 48;
}

export function kernel_adi(a:int, b:int, c:int, d:int, e:int, f:int) {
  var h:double;
  var x:int;
  var y:int;
  var aa:int;
  var da:int;
  var ea:int;
  var fa:double_ptr;
  var ha:double;
  var ca:double_ptr;
  var z:int;
  var ba:int;
  var ia:double_ptr;
  var ga:double;
  if (a < 1) goto B_a;
  var g:double = 1.0 / f64_convert_i32_s(a);
  var i:double = g / (h = (h = 1.0 / f64_convert_i32_s(b)) * h);
  var j:double = i + 1.0;
  g = (g + g) / h;
  var k:double = g + 1.0;
  var l:int = b + -1;
  var m:int = (b << 3) + 7992;
  var n:double = g * -0.5;
  var o:double = n + n + 1.0;
  var p:double = i * -0.5;
  var q:double = p + p + 1.0;
  g = -(n);
  h = -(p);
  var r:int = b + -2;
  var s:int = r;
  var t:int = b > 2;
  var u:long_ptr = 1;
  loop L_b {
    var v:int = u;
    var w:double_ptr = 0;
    u = 1;
    if (eqz(t)) goto B_c;
    loop L_d {
      z = d + (y = (x = u) << 3);
      z[0]:long = 4607182418800017408L;
      u = e + (aa = x * 8000);
      u[0] = 0L;
      aa = f + aa;
      aa[0]:double = z[0]:double;
      ba = x + 1;
      ca = x + -1;
      z = f + (ea = (w = (da = w) * 8000) + 8000);
      fa = e + ea;
      if (fa >= f + (ea = m + w)) goto B_f;
      w = 1;
      if (z >= e + ea) goto B_f;
      loop L_g {
        (u + (z = (w = w) << 3))[0]:double =
          g / (i = n * (u + (ea = z + -8))[0]:double + k);
        (aa + z)[0]:double =
          (g * (aa + ea)[0]:double +
           h * (z = c + w * 8000)[ba]:double +
           h * z[ca]:double + q * (z + y)[0]:double) /
          i;
        z = w + 1;
        w = z;
        if (z != l) continue L_g;
        goto B_e;
      }
      unreachable;
      label B_f:
      i = z[0]:double;
      ga = fa[0];
      w = 1;
      loop L_h {
        (u + (z = (w = w) << 3))[0]:double = (ha = g / (ga = n * ga + k));
        (aa + z)[0]:double =
          (i = (g * i +
                h * (z = c + w * 8000)[ba]:double +
                h * z[ca]:double + q * (z + y)[0]:double) /
               ga);
        i = i;
        ga = ha;
        z = w + 1;
        w = z;
        if (z != l) continue L_h;
      }
      label B_e:
      (d + l * 8000 + y)[0]:long = 4607182418800017408L;
      z = s;
      if (b < 3) goto B_i;
      loop L_j {
        z = d + (w = z) * 8000 + y;
        z[0]:double =
          (u + (ba = w << 3))[0]:double * (z + 8000)[0]:double +
          (aa + ba)[0]:double;
        z = w + -1;
        if (w > 1) continue L_j;
      }
      label B_i:
      w = da + 1;
      aa = x + 1;
      u = aa;
      if (aa != l) continue L_d;
    }
    label B_c:
    u = 0;
    aa = 1;
    if (eqz(t)) goto B_k;
    loop L_l {
      x = c + (y = (da = aa) * 8000);
      x[0]:long = 4607182418800017408L;
      aa = e + y;
      aa[0]:long = 0L;
      w = f + y;
      w[0] = x[0]:double;
      z = da + 1;
      ba = da + -1;
      ca = f + (ea = (u = (fa = u) * 8000) + 8000);
      ia = e + ea;
      if (ia >= f + (ea = m + u)) goto B_n;
      u = 1;
      if (ca >= e + ea) goto B_n;
      loop L_o {
        (aa + (u = (ca = u) << 3))[0]:double =
          h / (i = p * (aa + (ea = u + -8))[0]:double + j);
        (w + u)[0]:double =
          (h * (w + ea)[0]:double +
           g * (d + z * 8000 + u)[0]:double +
           g * (d + ba * 8000 + u)[0]:double + o * (d + y + u)[0]:double) /
          i;
        ca = ca + 1;
        u = ca;
        if (ca != l) continue L_o;
        goto B_m;
      }
      unreachable;
      label B_n:
      i = ca[0];
      ga = ia[0];
      u = 1;
      loop L_p {
        (aa + (u = (ca = u) << 3))[0]:double = (ha = h / (ga = p * ga + j));
        (w + u)[0]:double =
          (i = (h * i +
                g * (d + z * 8000 + u)[0]:double +
                g * (d + ba * 8000 + u)[0]:double + o * (d + y + u)[0]:double) /
               ga);
        i = i;
        ga = ha;
        ca = ca + 1;
        u = ca;
        if (ca != l) continue L_p;
      }
      label B_m:
      x[l]:long = 4607182418800017408L;
      y = r;
      if (b < 3) goto B_q;
      loop L_r {
        z = x + (y = (u = y) << 3);
        z[0]:double =
          (aa + y)[0]:double * (z + 8)[0]:double + (w + y)[0]:double;
        y = u + -1;
        if (u > 1) continue L_r;
      }
      label B_q:
      u = fa + 1;
      w = da + 1;
      aa = w;
      if (w != l) continue L_l;
    }
    label B_k:
    u = v + 1;
    if (v != a) continue L_b;
  }
  label B_a:
}

export function submain(a:int, b:int_ptr):int {
  var j:int;
  var c:int = legalfunc_polybench_alloc_data(1000000L, 8);
  var d:int = legalfunc_polybench_alloc_data(1000000L, 8);
  var e:int = legalfunc_polybench_alloc_data(1000000L, 8);
  var f:int = legalfunc_polybench_alloc_data(1000000L, 8);
  var g:int = 0;
  loop L_a {
    var h:int = g;
    var i:int = h + 1000;
    g = 0;
    loop L_b {
      (c + h * 8000)[g = g]:double = f64_convert_i32_s(i - g) / 1000.0;
      j = g + 1;
      g = j;
      if (j != 1000) continue L_b;
    }
    j = h + 1;
    g = j;
    if (j != 1000) continue L_a;
  }
  kernel_adi(500, 1000, c, d, e, f);
  if (a < 43) goto B_c;
  if ((b[0])[0]:ubyte) goto B_c;
  print_array(1000, c);
  label B_c:
  free(c);
  free(d);
  free(e);
  free(f);
  return 0;
}

function legalfunc_polybench_alloc_data(a:long, b:int):int {
  return legalimport_polybench_alloc_data(i32_wrap_i64(a),
                                          i32_wrap_i64(a >> 32L),
                                          b)
}

