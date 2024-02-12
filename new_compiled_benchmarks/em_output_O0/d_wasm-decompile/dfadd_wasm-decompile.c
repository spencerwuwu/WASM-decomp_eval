import memory env_memory;

import global stack_pointer:int;
import global memory_base:int;
import global table_base:int;
export import global float_exception_flags:int;
export import global float_rounding_mode:int;
export import global startTimer:int;
export import global a_input:int;
export import global b_input:int;
export import global z_output:int;
export import global endTimer:int;
global float_exception_flags_1:int = 2180;
global float_rounding_mode_1:int = 2176;
global startTimer_1:int = 2184;
global a_input_1:int = 0;
global b_input_1:int = 368;
global z_output_1:int = 736;
global endTimer_1:int = 2192;

data data(offset: memory_base) =
  "\00\00\00\00\00\00\f8\7f\00\00\00\00\00\00\f0\7f\00\00\00\00\00\00\00@"
  "\00\00\00\00\00\00\00@\00\00\00\00\00\00\f0?\00\00\00\00\00\00\f0?\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\f8?\00\00\00\00\00\00\f8\7f\00\00"
  "\00\00\00\00\f0\7f\00\00\00\00\00\00\00\00\00\00\00\00\00\00\f8?\00\00"
  "\00\00\00\00\f8\ff\00\00\00\00\00\00\f0\ff\00\00\00\00\00\00\00\c0\00\00"
  "\00\00\00\00\00\c0\00\00\00\00\00\00\f0\bf\00\00\00\00\00\00\f0\bf\00\00"
  "\00\00\00\00\00\80\00\00\00\00\00\00\f8\bf\00\00\00\00\00\00\f8\ff\00\00"
  "\00\00\00\00\f0\ff\00\00\00\00\00\00\00\80\00\00\00\00\00\00\f8\bf\00\00"
  "\00\00\00\00\f8\7f\00\00\00\00\00\00\f0\7f\00\00\00\00\00\00\f0?\00\00"
  "\00\00\00\00\f0?\00\00\00\00\00\00\f0?\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\f8?\00\00\00\00\00\00\f8\7f\00\00\00\00\00\00\f0\7f\00\00\00"
  "\00\00\00\f0?\00\00\00\00\00\00\00@\00\00\00\00\00\00\f0\ff\00\00\00\00"
  "\00\00\f0\ff\00\00\00\00\00\00\f0\bf\00\00\00\00\00\00\f0\bf\00\00\00\00"
  "\00\00\f0\bf\00\00\00\00\00\00\00\80\00\00\00\00\00\00\f8\bf\00\00\00\00"
  "\00\00\f8\ff\00\00\00\00\00\00\f0\ff\00\00\00\00\00\00\f0\bf\00\00\00\00"
  "\00\00\00\c0\00\00\00\00\00\00\f0?\00\00\00\00\00\00\f0?\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\f8?\00\00\00\00\00\00\f8\7f\00\00\00\00\00"
  "\00\f0\7f\00\00\00\00\00\00\00@\00\00\00\00\00\00\00@\00\00\00\00\00\00"
  "\f0\7f\00\00\00\00\00\00\f0\7f\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\f0?\00\00\00\00\00\00\f0\bf\00\00\00\00\00\00\f0\bf\00\00\00\00\00\00"
  "\00\80\00\00\00\00\00\00\f8\bf\00\00\00\00\00\00\f8\ff\00\00\00\00\00\00"
  "\f0\ff\00\00\00\00\00\00\00\c0\00\00\00\00\00\00\00\c0\00\00\00\00\00\00"
  "\f0\ff\00\00\00\00\00\00\f0\ff\00\00\00\00\00\00\00\80\00\00\00\00\00\00"
  "\f0\bf\00\00\00\00\00\00\f0\ff\00\00\00\00\00\00\f0\ff\00\00\00\00\00\00"
  "\f0\bf\00\00\00\00\00\00\f8\ff\00\00\00\00\00\00\f0\ff\00\00\00\00\00\00"
  "\f0\bf\00\00\00\00\00\00\00\c0\00\00\00\00\00\00\f0\bf\00\00\00\00\00\00"
  "\f0\bf\00\00\00\00\00\00\00\80\00\00\00\00\00\00\f8\bf\00\00\00\00\00\00"
  "\f8\7f\00\00\00\00\00\00\f0\7f\00\00\00\00\00\00\f0?\00\00\00\00\00\00"
  "\f8\7f\00\00\00\00\00\00\f0\7f\00\00\00\00\00\00\f0?\00\00\00\00\00\00"
  "\00@\00\00\00\00\00\00\f0?\00\00\00\00\00\00\f0?\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\f8?\00\00\00\00\00\00\f8\7f\00\00\00\00\00\00\f0\7f"
  "\00\00\00\00\00\00\00@\00\00\00\00\00\00\0c@\00\00\00\00\00\00\f8\7f\00"
  "\00\00\00\00\00\f0\7f\00\00\00\00\00\00\00@\00\00\00\00\00\00\0c@\00\00"
  "\00\00\00\00\f8\7f\00\00\00\00\00\00\f0\7f\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\04@\00\00\00\00\00\00\f8\ff\00\00\00\00\00\00\f0\ff\00\00"
  "\00\00\00\00\00\c0\00\00\00\00\00\00\0c\c0\00\00\00\00\00\00\f8\ff\00\00"
  "\00\00\00\00\f0\ff\00\00\00\00\00\00\00\c0\00\00\00\00\00\00\0c\c0\00\00"
  "\00\00\00\00\f8\ff\00\00\00\00\00\00\f0\ff\00\00\00\00\00\00\00\80\00\00"
  "\00\00\00\00\04\c0\00\00\00\00\00\00\f8\7f\ff\ff\ff\ff\ff\ff\ff\7f\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\f8\ff\00\00\00\00\00\00\f0\ff\00\00"
  "\00\00\00\00\f0\bf\00\00\00\00\00\00\e0\bf\00\00\00\00\00\00\f8\7f\00\00"
  "\00\00\00\00\f0\7f\00\00\00\00\00\00\f0?\00\00\00\00\00\00\e0?\00\00\00"
  "\00\00\00\f8\7f\ff\ff\ff\ff\ff\ff\ff\7f\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\f8\7f\00\00\00\00\00\00\f0\7f\00\00\00\00\00\00\f0?\00\00\00"
  "\00\00\00\e0?\00\00\00\00\00\00\f8\ff\00\00\00\00\00\00\f0\ff\00\00\00"
  "\00\00\00\f0\bf\00\00\00\00\00\00\e0\bfError return from gettimeofday:"
  " %d\00%0.6f\0a\00\00\00\00\00\00\00\08\00\00\00\07\00\00\00\06\00\00\00"
  "\06\00\00\00\05\00\00\00\05\00\00\00\05\00\00\00\05\00\00\00\04\00\00\00"
  "\04\00\00\00\04\00\00\00\04\00\00\00\04\00\00\00\04\00\00\00\04\00\00\00"
  "\04\00\00\00\03\00\00\00\03\00\00\00\03\00\00\00\03\00\00\00\03\00\00\00"
  "\03\00\00\00\03\00\00\00\03\00\00\00\03\00\00\00\03\00\00\00\03\00\00\00"
  "\03\00\00\00\03\00\00\00\03\00\00\00\03\00\00\00\03\00\00\00\02\00\00\00"
  "\02\00\00\00\02\00\00\00\02\00\00\00\02\00\00\00\02\00\00\00\02\00\00\00"
  "\02\00\00\00\02\00\00\00\02\00\00\00\02\00\00\00\02\00\00\00\02\00\00\00"
  "\02\00\00\00\02\00\00\00\02\00\00\00\02\00\00\00\02\00\00\00\02\00\00\00"
  "\02\00\00\00\02\00\00\00\02\00\00\00\02\00\00\00\02\00\00\00\02\00\00\00"
  "\02\00\00\00\02\00\00\00\02\00\00\00\02\00\00\00\02\00\00\00\02\00\00\00"
  "\02\00\00\00\01\00\00\00\01\00\00\00\01\00\00\00\01\00\00\00\01\00\00\00"
  "\01\00\00\00\01\00\00\00\01\00\00\00\01\00\00\00\01\00\00\00\01\00\00\00"
  "\01\00\00\00\01\00\00\00\01\00\00\00\01\00\00\00\01\00\00\00\01\00\00\00"
  "\01\00\00\00\01\00\00\00\01\00\00\00\01\00\00\00\01\00\00\00\01\00\00\00"
  "\01\00\00\00\01\00\00\00\01\00\00\00\01\00\00\00\01\00\00\00\01\00\00\00"
  "\01\00\00\00\01\00\00\00\01\00\00\00\01\00\00\00\01\00\00\00\01\00\00\00"
  "\01\00\00\00\01\00\00\00\01\00\00\00\01\00\00\00\01\00\00\00\01\00\00\00"
  "\01\00\00\00\01\00\00\00\01\00\00\00\01\00\00\00\01\00\00\00\01\00\00\00"
  "\01\00\00\00\01\00\00\00\01\00\00\00\01\00\00\00\01\00\00\00\01\00\00\00"
  "\01\00\00\00\01\00\00\00\01\00\00\00\01\00\00\00\01\00\00\00\01\00\00\00"
  "\01\00\00\00\01\00\00\00\01\00\00\00\01\00\00\00\01\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00";

import function printf(a:int, b:int):int;

import function gettimeofday(a:int, b:int):int;

import function setTempRet0(a:int);

export function wasm_call_ctors() {
}

export function wasm_apply_data_relocs() {
}

export function shift64RightJamming(a:long, b:int, c:int) {
  var d:int = stack_pointer;
  var e:int = 32;
  var f:int = d - e;
  f[3]:long = a;
  f[5]:int = b;
  f[4]:int = c;
  var g:int = f[5]:int;
  if (g) goto B_b;
  var h:long = f[3]:long;
  f[1]:long = h;
  goto B_a;
  label B_b:
  var i:int = f[5]:int;
  var j:int = 64;
  var k:int = i;
  var l:int = j;
  var m:int = k < l;
  var n:int = 1;
  var o:int = m & n;
  if (eqz(o)) goto B_d;
  var p:long = f[3]:long;
  var q:int = f[5]:int;
  var r:int = q;
  var s:long = i64_extend_i32_u(r);
  var t:long = p >> s;
  var u:long = f[3]:long;
  var v:int = f[5]:int;
  var w:int = 0;
  var x:int = w - v;
  var y:int = 63;
  var z:int = x & y;
  var aa:int = z;
  var ba:long = i64_extend_i32_u(aa);
  var ca:long = u << ba;
  var da:long = 0L;
  var ea:long = ca;
  var fa:long = da;
  var ga:int = ea != fa;
  var ha:int = 1;
  var ia:int = ga & ha;
  var ja:int = ia;
  var ka:long = i64_extend_i32_s(ja);
  var la:long = t | ka;
  f[1]:long = la;
  goto B_c;
  label B_d:
  var ma:long = f[3]:long;
  var na:long = 0L;
  var oa:long = ma;
  var pa:long = na;
  var qa:int = oa != pa;
  var ra:int = 1;
  var sa:int = qa & ra;
  var ta:int = sa;
  var ua:long = i64_extend_i32_s(ta);
  f[1]:long = ua;
  label B_c:
  label B_a:
  var va:long = f[1]:long;
  var wa:long_ptr = f[4]:int;
  wa[0] = va;
}

export function float_raise(a:int) {
  var b:int = stack_pointer;
  var c:int = 16;
  var d:int_ptr = b - c;
  d[3] = a;
  var e:int = d[3];
  var f:int_ptr = float_exception_flags;
  var g:int = f[0];
  var h:int = g | e;
  f[0] = h;
}

export function float64_is_nan(a:long):int {
  var b:int = stack_pointer;
  var c:int = 16;
  var d:long_ptr = b - c;
  d[1] = a;
  var e:long = d[1];
  var f:long = 1L;
  var g:long = e << f;
  var h:long = -9007199254740992L;
  var i:long = h;
  var j:long = g;
  var k:int = i < j;
  var l:int = 1;
  var m:int = k & l;
  return m;
}

export function float64_is_signaling_nan(a:long):int {
  var b:int = stack_pointer;
  var c:int = 16;
  var d:long_ptr = b - c;
  d[1] = a;
  var e:long = d[1];
  var f:long = 51L;
  var g:long = e >> f;
  var h:long = 4095L;
  var i:long = g & h;
  var j:long = 4094L;
  var k:long = i;
  var l:long = j;
  var m:int = k == l;
  var n:int = 0;
  var o:int = 1;
  var p:int = m & o;
  var q:int = n;
  if (eqz(p)) goto B_a;
  var r:long = d[1];
  var s:long = 2251799813685247L;
  var t:long = r & s;
  var u:long = 0L;
  var v:long = t;
  var w:long = u;
  var x:int = v != w;
  q = x;
  label B_a:
  var y:int = q;
  var z:int = 1;
  var aa:int = y & z;
  return aa;
}

export function extractFloat64Frac(a:long):long {
  var b:int = stack_pointer;
  var c:int = 16;
  var d:long_ptr = b - c;
  d[1] = a;
  var e:long = d[1];
  var f:long = 4503599627370495L;
  var g:long = e & f;
  return g;
}

export function extractFloat64Exp(a:long):int {
  var b:int = stack_pointer;
  var c:int = 16;
  var d:long_ptr = b - c;
  d[1] = a;
  var e:long = d[1];
  var f:long = 52L;
  var g:long = e >> f;
  var h:long = 2047L;
  var i:long = g & h;
  var j:int = i32_wrap_i64(i);
  return j;
}

export function extractFloat64Sign(a:long):int {
  var b:int = stack_pointer;
  var c:int = 16;
  var d:long_ptr = b - c;
  d[1] = a;
  var e:long = d[1];
  var f:long = 63L;
  var g:long = e >> f;
  var h:int = i32_wrap_i64(g);
  return h;
}

export function packFloat64(a:int, b:int, c:long):long {
  var d:int = stack_pointer;
  var e:int = 16;
  var f:{ a:long, b:int, c:int } = d - e;
  f.c = a;
  f.b = b;
  f.a = c;
  var g:int = f.c;
  var h:int = g;
  var i:long = i64_extend_i32_s(h);
  var j:long = 63L;
  var k:long = i << j;
  var l:int = f.b;
  var m:int = l;
  var n:long = i64_extend_i32_s(m);
  var o:long = 52L;
  var p:long = n << o;
  var q:long = k + p;
  var r:long = f.a;
  var s:long = q + r;
  return s;
}

export function roundAndPackFloat64(a:int, b:int, c:long):long {
  var d:int = stack_pointer;
  var e:int = 48;
  var f:int = d - e;
  stack_pointer = f;
  f[9]:int = a;
  f[8]:int = b;
  f[3]:long = c;
  var g:int_ptr = float_rounding_mode;
  var h:int = g[0];
  f[5]:int = h;
  var i:int = f[5]:int;
  var j:int = 0;
  var k:int = i;
  var l:int = j;
  var m:int = k == l;
  var n:int = 1;
  var o:int = m & n;
  f[4]:int = o;
  var p:int = 512;
  f[2]:int = p;
  var q:int = f[4]:int;
  if (q) goto B_a;
  var r:int = f[5]:int;
  var s:int = 1;
  var t:int = r;
  var u:int = s;
  var v:int = t == u;
  var w:int = 1;
  var x:int = v & w;
  if (eqz(x)) goto B_c;
  var y:int = 0;
  f[2]:int = y;
  goto B_b;
  label B_c:
  var z:int = 1023;
  f[2]:int = z;
  var aa:int = f[9]:int;
  if (eqz(aa)) goto B_e;
  var ba:int = f[5]:int;
  var ca:int = 2;
  var da:int = ba;
  var ea:int = ca;
  var fa:int = da == ea;
  var ga:int = 1;
  var ha:int = fa & ga;
  if (eqz(ha)) goto B_f;
  var ia:int = 0;
  f[2]:int = ia;
  label B_f:
  goto B_d;
  label B_e:
  var ja:int = f[5]:int;
  var ka:int = 3;
  var la:int = ja;
  var ma:int = ka;
  var na:int = la == ma;
  var oa:int = 1;
  var pa:int = na & oa;
  if (eqz(pa)) goto B_g;
  var qa:int = 0;
  f[2]:int = qa;
  label B_g:
  label B_d:
  label B_b:
  label B_a:
  var ra:long = f[3]:long;
  var sa:long = 1023L;
  var ta:long = ra & sa;
  var ua:int = i32_wrap_i64(ta);
  f[1]:int = ua;
  var va:int = f[8]:int;
  var wa:int = 65535;
  var xa:int = va & wa;
  var ya:int = 2045;
  var za:int = ya;
  var ab:int = xa;
  var bb:int = za <= ab;
  var cb:int = 1;
  var db:int = bb & cb;
  if (eqz(db)) goto B_i;
  var eb:int = f[8]:int;
  var fb:int = 2045;
  var gb:int = fb;
  var hb:int = eb;
  var ib:int = gb < hb;
  var jb:int = 1;
  var kb:int = ib & jb;
  if (kb) goto B_k;
  var lb:int = f[8]:int;
  var mb:int = 2045;
  var nb:int = lb;
  var ob:int = mb;
  var pb:int = nb == ob;
  var qb:int = 1;
  var rb:int = pb & qb;
  if (eqz(rb)) goto B_j;
  var sb:long = f[3]:long;
  var tb:int = f[2]:int;
  var ub:int = tb;
  var vb:long = i64_extend_i32_s(ub);
  var wb:long = sb + vb;
  var xb:long = 0L;
  var yb:long = wb;
  var zb:long = xb;
  var ac:int = yb < zb;
  var bc:int = 1;
  var cc:int = ac & bc;
  if (eqz(cc)) goto B_j;
  label B_k:
  var dc:int = 9;
  float_raise(dc);
  var ec:int = f[9]:int;
  var fc:int = 2047;
  var gc:long = 0L;
  var hc:long = packFloat64(ec, fc, gc);
  var ic:int = f[2]:int;
  var jc:int = 0;
  var kc:int = ic;
  var lc:int = jc;
  var mc:int = kc == lc;
  var nc:int = 1;
  var oc:int = mc & nc;
  var pc:int = oc;
  var qc:long = i64_extend_i32_s(pc);
  var rc:long = hc - qc;
  f[5]:long = rc;
  goto B_h;
  label B_j:
  var sc:int = f[8]:int;
  var tc:int = 0;
  var uc:int = sc;
  var vc:int = tc;
  var wc:int = uc < vc;
  var xc:int = 1;
  var yc:int = wc & xc;
  if (eqz(yc)) goto B_l;
  var zc:int = 1;
  f[3]:int = zc;
  var ad:long = f[3]:long;
  var bd:int = f[8]:int;
  var cd:int = 0;
  var dd:int = cd - bd;
  var ed:int = 24;
  var fd:int = f + ed;
  var gd:int = fd;
  shift64RightJamming(ad, dd, gd);
  var hd:int = 0;
  f[8]:int = hd;
  var id:long = f[3]:long;
  var jd:long = 1023L;
  var kd:long = id & jd;
  var ld:int = i32_wrap_i64(kd);
  f[1]:int = ld;
  var md:int = f[3]:int;
  if (eqz(md)) goto B_m;
  var nd:int = f[1]:int;
  if (eqz(nd)) goto B_m;
  var od:int = 4;
  float_raise(od);
  label B_m:
  label B_l:
  label B_i:
  var pd:int = f[1]:int;
  if (eqz(pd)) goto B_n;
  var qd:int_ptr = float_exception_flags;
  var rd:int = qd[0];
  var sd:int = 1;
  var td:int = rd | sd;
  qd[0] = td;
  label B_n:
  var ud:long = f[3]:long;
  var vd:int = f[2]:int;
  var wd:int = vd;
  var xd:long = i64_extend_i32_s(wd);
  var yd:long = ud + xd;
  var zd:long = 10L;
  var ae:long = yd >> zd;
  f[3]:long = ae;
  var be:int = f[1]:int;
  var ce:int = 512;
  var de:int = be ^ ce;
  var ee:int = 0;
  var fe:int = de;
  var ge:int = ee;
  var he:int = fe == ge;
  var ie:int = 1;
  var je:int = he & ie;
  var ke:int = f[4]:int;
  var le:int = je & ke;
  var me:int = -1;
  var ne:int = le ^ me;
  var oe:int = ne;
  var pe:long = i64_extend_i32_s(oe);
  var qe:long = f[3]:long;
  var re:long = qe & pe;
  f[3]:long = re;
  var se:long = f[3]:long;
  var te:long = 0L;
  var ue:long = se;
  var ve:long = te;
  var we:int = ue == ve;
  var xe:int = 1;
  var ye:int = we & xe;
  if (eqz(ye)) goto B_o;
  var ze:int = 0;
  f[8]:int = ze;
  label B_o:
  var af:int = f[9]:int;
  var bf:int = f[8]:int;
  var cf:long = f[3]:long;
  var df:long = packFloat64(af, bf, cf);
  f[5]:long = df;
  label B_h:
  var ef:long = f[5]:long;
  var ff:int = 48;
  var gf:int = f + ff;
  stack_pointer = gf;
  return ef;
}

export function normalizeRoundAndPackFloat64(a:int, b:int, c:long):long {
  var d:int = stack_pointer;
  var e:int = 32;
  var f:int = d - e;
  stack_pointer = f;
  f[7]:int = a;
  f[6]:int = b;
  f[2]:long = c;
  var g:long = f[2]:long;
  var h:int = countLeadingZeros64(g);
  var i:int = 1;
  var j:int = h - i;
  f[3]:int = j;
  var k:int = f[7]:int;
  var l:int = f[6]:int;
  var m:int = f[3]:int;
  var n:int = l - m;
  var o:long = f[2]:long;
  var p:int = f[3]:int;
  var q:int = p;
  var r:long = i64_extend_i32_u(q);
  var s:long = o << r;
  var t:long = roundAndPackFloat64(k, n, s);
  var u:int = 32;
  var v:int = f + u;
  stack_pointer = v;
  return t;
}

function countLeadingZeros64(a:long):int {
  var b:int = stack_pointer;
  var c:int = 16;
  var d:int = b - c;
  stack_pointer = d;
  d[1]:long = a;
  var e:int = 0;
  d[1]:int = e;
  var f:long = d[1]:long;
  var g:long = 4294967296L;
  var h:long = f;
  var i:long = g;
  var j:int = h < i;
  var k:int = 1;
  var l:int = j & k;
  if (eqz(l)) goto B_b;
  var m:int = d[1]:int;
  var n:int = 32;
  var o:int = m + n;
  d[1]:int = o;
  goto B_a;
  label B_b:
  var p:long = d[1]:long;
  var q:long = 32L;
  var r:long = p >> q;
  d[1]:long = r;
  label B_a:
  var s:long = d[1]:long;
  var t:int = i32_wrap_i64(s);
  var u:int = countLeadingZeros32(t);
  var v:int = d[1]:int;
  var w:int = v + u;
  d[1]:int = w;
  var x:int = d[1]:int;
  var y:int = 16;
  var z:int = d + y;
  stack_pointer = z;
  return x;
}

function countLeadingZeros32(a:int):int {
  var b:int = stack_pointer;
  var c:int = 16;
  var d:int_ptr = b - c;
  d[3] = a;
  var e:int = 0;
  d[2] = e;
  var f:int = d[3];
  var g:int = 65536;
  var h:int = f;
  var i:int = g;
  var j:int = h < i;
  var k:int = 1;
  var l:int = j & k;
  if (eqz(l)) goto B_a;
  var m:int = d[2];
  var n:int = 16;
  var o:int = m + n;
  d[2] = o;
  var p:int = d[3];
  var q:int = 16;
  var r:int = p << q;
  d[3] = r;
  label B_a:
  var s:int = d[3];
  var t:int = 16777216;
  var u:int = s;
  var v:int = t;
  var w:int = u < v;
  var x:int = 1;
  var y:int = w & x;
  if (eqz(y)) goto B_b;
  var z:int = d[2];
  var aa:int = 8;
  var ba:int = z + aa;
  d[2] = ba;
  var ca:int = d[3];
  var da:int = 8;
  var ea:int = ca << da;
  d[3] = ea;
  label B_b:
  var fa:int = d[3];
  var ga:int = 1152;
  var ha:int = memory_base;
  var ia:int = ha + ga;
  var ja:int = 22;
  var ka:int = fa >> ja;
  var la:int = 1020;
  var ma:int = ka & la;
  var na:int_ptr = ia + ma;
  var oa:int = na[0];
  var pa:int = d[2];
  var qa:int = pa + oa;
  d[2] = qa;
  var ra:int = d[2];
  return ra;
}

export function addFloat64Sigs(a:long, b:long, c:int):long {
  var d:int = stack_pointer;
  var e:int = 80;
  var f:int = d - e;
  stack_pointer = f;
  f[8]:long = a;
  f[7]:long = b;
  f[13]:int = c;
  var g:long = f[8]:long;
  var h:long = extractFloat64Frac(g);
  f[4]:long = h;
  var i:long = f[8]:long;
  var j:int = extractFloat64Exp(i);
  f[12]:int = j;
  var k:long = f[7]:long;
  var l:long = extractFloat64Frac(k);
  f[3]:long = l;
  var m:long = f[7]:long;
  var n:int = extractFloat64Exp(m);
  f[11]:int = n;
  var o:int = f[12]:int;
  var p:int = f[11]:int;
  var q:int = o - p;
  f[3]:int = q;
  var r:long = f[4]:long;
  var s:long = 9L;
  var t:long = r << s;
  f[4]:long = t;
  var u:long = f[3]:long;
  var v:long = 9L;
  var w:long = u << v;
  f[3]:long = w;
  var x:int = f[3]:int;
  var y:int = 0;
  var z:int = y;
  var aa:int = x;
  var ba:int = z < aa;
  var ca:int = 1;
  var da:int = ba & ca;
  if (eqz(da)) goto B_d;
  var ea:int = f[12]:int;
  var fa:int = 2047;
  var ga:int = ea;
  var ha:int = fa;
  var ia:int = ga == ha;
  var ja:int = 1;
  var ka:int = ia & ja;
  if (eqz(ka)) goto B_e;
  var la:long = f[4]:long;
  var ma:long = 0L;
  var na:long = la;
  var oa:long = ma;
  var pa:int = na != oa;
  var qa:int = 1;
  var ra:int = pa & qa;
  if (eqz(ra)) goto B_f;
  var sa:long = f[8]:long;
  var ta:long = f[7]:long;
  var ua:long = propagateFloat64NaN(sa, ta);
  f[9]:long = ua;
  goto B_a;
  label B_f:
  var va:long = f[8]:long;
  f[9]:long = va;
  goto B_a;
  label B_e:
  var wa:int = f[11]:int;
  if (wa) goto B_h;
  var xa:int = f[3]:int;
  var ya:int = -1;
  var za:int = xa + ya;
  f[3]:int = za;
  goto B_g;
  label B_h:
  var ab:long = f[3]:long;
  var bb:long = 2305843009213693952L;
  var cb:long = ab | bb;
  f[3]:long = cb;
  label B_g:
  var db:long = f[3]:long;
  var eb:int = f[3]:int;
  var fb:int = 24;
  var gb:int = f + fb;
  var hb:int = gb;
  shift64RightJamming(db, eb, hb);
  var ib:int = f[12]:int;
  f[10]:int = ib;
  goto B_c;
  label B_d:
  var jb:int = f[3]:int;
  var kb:int = 0;
  var lb:int = jb;
  var mb:int = kb;
  var nb:int = lb < mb;
  var ob:int = 1;
  var pb:int = nb & ob;
  if (eqz(pb)) goto B_j;
  var qb:int = f[11]:int;
  var rb:int = 2047;
  var sb:int = qb;
  var tb:int = rb;
  var ub:int = sb == tb;
  var vb:int = 1;
  var wb:int = ub & vb;
  if (eqz(wb)) goto B_k;
  var xb:long = f[3]:long;
  var yb:long = 0L;
  var zb:long = xb;
  var ac:long = yb;
  var bc:int = zb != ac;
  var cc:int = 1;
  var dc:int = bc & cc;
  if (eqz(dc)) goto B_l;
  var ec:long = f[8]:long;
  var fc:long = f[7]:long;
  var gc:long = propagateFloat64NaN(ec, fc);
  f[9]:long = gc;
  goto B_a;
  label B_l:
  var hc:int = f[13]:int;
  var ic:int = 2047;
  var jc:long = 0L;
  var kc:long = packFloat64(hc, ic, jc);
  f[9]:long = kc;
  goto B_a;
  label B_k:
  var lc:int = f[12]:int;
  if (lc) goto B_n;
  var mc:int = f[3]:int;
  var nc:int = 1;
  var oc:int = mc + nc;
  f[3]:int = oc;
  goto B_m;
  label B_n:
  var pc:long = f[4]:long;
  var qc:long = 2305843009213693952L;
  var rc:long = pc | qc;
  f[4]:long = rc;
  label B_m:
  var sc:long = f[4]:long;
  var tc:int = f[3]:int;
  var uc:int = 0;
  var vc:int = uc - tc;
  var wc:int = 32;
  var xc:int = f + wc;
  var yc:int = xc;
  shift64RightJamming(sc, vc, yc);
  var zc:int = f[11]:int;
  f[10]:int = zc;
  goto B_i;
  label B_j:
  var ad:int = f[12]:int;
  var bd:int = 2047;
  var cd:int = ad;
  var dd:int = bd;
  var ed:int = cd == dd;
  var fd:int = 1;
  var gd:int = ed & fd;
  if (eqz(gd)) goto B_o;
  var hd:long = f[4]:long;
  var id:long = f[3]:long;
  var jd:long = hd | id;
  var kd:long = 0L;
  var ld:long = jd;
  var md:long = kd;
  var nd:int = ld != md;
  var od:int = 1;
  var pd:int = nd & od;
  if (eqz(pd)) goto B_p;
  var qd:long = f[8]:long;
  var rd:long = f[7]:long;
  var sd:long = propagateFloat64NaN(qd, rd);
  f[9]:long = sd;
  goto B_a;
  label B_p:
  var td:long = f[8]:long;
  f[9]:long = td;
  goto B_a;
  label B_o:
  var ud:int = f[12]:int;
  if (ud) goto B_q;
  var vd:int = f[13]:int;
  var wd:long = f[4]:long;
  var xd:long = f[3]:long;
  var yd:long = wd + xd;
  var zd:long = 9L;
  var ae:long = yd >> zd;
  var be:int = 0;
  var ce:long = packFloat64(vd, be, ae);
  f[9]:long = ce;
  goto B_a;
  label B_q:
  var de:long = f[4]:long;
  var ee:long = 4611686018427387904L;
  var fe:long = de + ee;
  var ge:long = f[3]:long;
  var he:long = fe + ge;
  f[2]:long = he;
  var ie:int = f[12]:int;
  f[10]:int = ie;
  goto B_b;
  label B_i:
  label B_c:
  var je:long = f[4]:long;
  var ke:long = 2305843009213693952L;
  var le:long = je | ke;
  f[4]:long = le;
  var me:long = f[4]:long;
  var ne:long = f[3]:long;
  var oe:long = me + ne;
  var pe:long = 1L;
  var qe:long = oe << pe;
  f[2]:long = qe;
  var re:int = f[10]:int;
  var se:int = -1;
  var te:int = re + se;
  f[10]:int = te;
  var ue:long = f[2]:long;
  var ve:long = 0L;
  var we:long = ue;
  var xe:long = ve;
  var ye:int = we < xe;
  var ze:int = 1;
  var af:int = ye & ze;
  if (eqz(af)) goto B_r;
  var bf:long = f[4]:long;
  var cf:long = f[3]:long;
  var df:long = bf + cf;
  f[2]:long = df;
  var ef:int = f[10]:int;
  var ff:int = 1;
  var gf:int = ef + ff;
  f[10]:int = gf;
  label B_r:
  label B_b:
  var hf:int = f[13]:int;
  var if:int = f[10]:int;
  var jf:long = f[2]:long;
  var kf:long = roundAndPackFloat64(hf, if, jf);
  f[9]:long = kf;
  label B_a:
  var lf:long = f[9]:long;
  var mf:int = 80;
  var nf:int = f + mf;
  stack_pointer = nf;
  return lf;
}

function propagateFloat64NaN(a:long, b:long):long {
  var fa:long;
  var ca:long;
  var z:long;
  var c:int = stack_pointer;
  var d:int = 32;
  var e:{ a:int, b:int, c:int, d:int, e:long, f:long } = c - d;
  stack_pointer = e;
  e.f = a;
  e.e = b;
  var f:long = e.f;
  var g:int = float64_is_nan(f);
  e.d = g;
  var h:long = e.f;
  var i:int = float64_is_signaling_nan(h);
  e.c = i;
  var j:long = e.e;
  var k:int = float64_is_nan(j);
  e.b = k;
  var l:long = e.e;
  var m:int = float64_is_signaling_nan(l);
  e.a = m;
  var n:long = e.f;
  var o:long = 2251799813685248L;
  var p:long = n | o;
  e.f = p;
  var q:long = e.e;
  var r:long = 2251799813685248L;
  var s:long = q | r;
  e.e = s;
  var t:int = e.c;
  var u:int = e.a;
  var v:int = t | u;
  if (eqz(v)) goto B_a;
  var w:int = 16;
  float_raise(w);
  label B_a:
  var x:int = e.a;
  if (eqz(x)) goto B_c;
  var y:long = e.e;
  z = y;
  goto B_b;
  label B_c:
  var aa:int = e.c;
  if (eqz(aa)) goto B_e;
  var ba:long = e.f;
  ca = ba;
  goto B_d;
  label B_e:
  var da:int = e.b;
  if (eqz(da)) goto B_g;
  var ea:long = e.e;
  fa = ea;
  goto B_f;
  label B_g:
  var ga:long = e.f;
  fa = ga;
  label B_f:
  var ha:long = fa;
  ca = ha;
  label B_d:
  var ia:long = ca;
  z = ia;
  label B_b:
  var ja:long = z;
  var ka:int = 32;
  var la:int = e + ka;
  stack_pointer = la;
  return ja;
}

export function subFloat64Sigs(a:long, b:long, c:int):long {
  var d:int = stack_pointer;
  var e:int = 80;
  var f:int = d - e;
  stack_pointer = f;
  f[8]:long = a;
  f[7]:long = b;
  f[13]:int = c;
  var g:long = f[8]:long;
  var h:long = extractFloat64Frac(g);
  f[4]:long = h;
  var i:long = f[8]:long;
  var j:int = extractFloat64Exp(i);
  f[12]:int = j;
  var k:long = f[7]:long;
  var l:long = extractFloat64Frac(k);
  f[3]:long = l;
  var m:long = f[7]:long;
  var n:int = extractFloat64Exp(m);
  f[11]:int = n;
  var o:int = f[12]:int;
  var p:int = f[11]:int;
  var q:int = o - p;
  f[3]:int = q;
  var r:long = f[4]:long;
  var s:long = 10L;
  var t:long = r << s;
  f[4]:long = t;
  var u:long = f[3]:long;
  var v:long = 10L;
  var w:long = u << v;
  f[3]:long = w;
  var x:int = f[3]:int;
  var y:int = 0;
  var z:int = y;
  var aa:int = x;
  var ba:int = z < aa;
  var ca:int = 1;
  var da:int = ba & ca;
  if (eqz(da)) goto B_e;
  goto B_d;
  label B_e:
  var ea:int = f[3]:int;
  var fa:int = 0;
  var ga:int = ea;
  var ha:int = fa;
  var ia:int = ga < ha;
  var ja:int = 1;
  var ka:int = ia & ja;
  if (eqz(ka)) goto B_h;
  goto B_g;
  label B_h:
  var la:int = f[12]:int;
  var ma:int = 2047;
  var na:int = la;
  var oa:int = ma;
  var pa:int = na == oa;
  var qa:int = 1;
  var ra:int = pa & qa;
  if (eqz(ra)) goto B_i;
  var sa:long = f[4]:long;
  var ta:long = f[3]:long;
  var ua:long = sa | ta;
  var va:long = 0L;
  var wa:long = ua;
  var xa:long = va;
  var ya:int = wa != xa;
  var za:int = 1;
  var ab:int = ya & za;
  if (eqz(ab)) goto B_j;
  var bb:long = f[8]:long;
  var cb:long = f[7]:long;
  var db:long = propagateFloat64NaN(bb, cb);
  f[9]:long = db;
  goto B_a;
  label B_j:
  var eb:int = 16;
  float_raise(eb);
  var fb:long = 9223372036854775807L;
  f[9]:long = fb;
  goto B_a;
  label B_i:
  var gb:int = f[12]:int;
  if (gb) goto B_k;
  var hb:int = 1;
  f[12]:int = hb;
  var ib:int = 1;
  f[11]:int = ib;
  label B_k:
  var jb:long = f[3]:long;
  var kb:long = f[4]:long;
  var lb:long = jb;
  var mb:long = kb;
  var nb:int = lb < mb;
  var ob:int = 1;
  var pb:int = nb & ob;
  if (eqz(pb)) goto B_l;
  goto B_c;
  label B_l:
  var qb:long = f[4]:long;
  var rb:long = f[3]:long;
  var sb:long = qb;
  var tb:long = rb;
  var ub:int = sb < tb;
  var vb:int = 1;
  var wb:int = ub & vb;
  if (eqz(wb)) goto B_m;
  goto B_f;
  label B_m:
  var xb:int_ptr = float_rounding_mode;
  var yb:int = xb[0];
  var zb:int = 3;
  var ac:int = yb;
  var bc:int = zb;
  var cc:int = ac == bc;
  var dc:int = 1;
  var ec:int = cc & dc;
  var fc:int = 0;
  var gc:long = 0L;
  var hc:long = packFloat64(ec, fc, gc);
  f[9]:long = hc;
  goto B_a;
  label B_g:
  var ic:int = f[11]:int;
  var jc:int = 2047;
  var kc:int = ic;
  var lc:int = jc;
  var mc:int = kc == lc;
  var nc:int = 1;
  var oc:int = mc & nc;
  if (eqz(oc)) goto B_n;
  var pc:long = f[3]:long;
  var qc:long = 0L;
  var rc:long = pc;
  var sc:long = qc;
  var tc:int = rc != sc;
  var uc:int = 1;
  var vc:int = tc & uc;
  if (eqz(vc)) goto B_o;
  var wc:long = f[8]:long;
  var xc:long = f[7]:long;
  var yc:long = propagateFloat64NaN(wc, xc);
  f[9]:long = yc;
  goto B_a;
  label B_o:
  var zc:int = f[13]:int;
  var ad:int = 1;
  var bd:int = zc ^ ad;
  var cd:int = 2047;
  var dd:long = 0L;
  var ed:long = packFloat64(bd, cd, dd);
  f[9]:long = ed;
  goto B_a;
  label B_n:
  var fd:int = f[12]:int;
  if (fd) goto B_q;
  var gd:int = f[3]:int;
  var hd:int = 1;
  var id:int = gd + hd;
  f[3]:int = id;
  goto B_p;
  label B_q:
  var jd:long = f[4]:long;
  var kd:long = 4611686018427387904L;
  var ld:long = jd | kd;
  f[4]:long = ld;
  label B_p:
  var md:long = f[4]:long;
  var nd:int = f[3]:int;
  var od:int = 0;
  var pd:int = od - nd;
  var qd:int = 32;
  var rd:int = f + qd;
  var sd:int = rd;
  shift64RightJamming(md, pd, sd);
  var td:long = f[3]:long;
  var ud:long = 4611686018427387904L;
  var vd:long = td | ud;
  f[3]:long = vd;
  label B_f:
  var wd:long = f[3]:long;
  var xd:long = f[4]:long;
  var yd:long = wd - xd;
  f[2]:long = yd;
  var zd:int = f[11]:int;
  f[10]:int = zd;
  var ae:int = f[13]:int;
  var be:int = 1;
  var ce:int = ae ^ be;
  f[13]:int = ce;
  goto B_b;
  label B_d:
  var de:int = f[12]:int;
  var ee:int = 2047;
  var fe:int = de;
  var ge:int = ee;
  var he:int = fe == ge;
  var ie:int = 1;
  var je:int = he & ie;
  if (eqz(je)) goto B_r;
  var ke:long = f[4]:long;
  var le:long = 0L;
  var me:long = ke;
  var ne:long = le;
  var oe:int = me != ne;
  var pe:int = 1;
  var qe:int = oe & pe;
  if (eqz(qe)) goto B_s;
  var re:long = f[8]:long;
  var se:long = f[7]:long;
  var te:long = propagateFloat64NaN(re, se);
  f[9]:long = te;
  goto B_a;
  label B_s:
  var ue:long = f[8]:long;
  f[9]:long = ue;
  goto B_a;
  label B_r:
  var ve:int = f[11]:int;
  if (ve) goto B_u;
  var we:int = f[3]:int;
  var xe:int = -1;
  var ye:int = we + xe;
  f[3]:int = ye;
  goto B_t;
  label B_u:
  var ze:long = f[3]:long;
  var af:long = 4611686018427387904L;
  var bf:long = ze | af;
  f[3]:long = bf;
  label B_t:
  var cf:long = f[3]:long;
  var df:int = f[3]:int;
  var ef:int = 24;
  var ff:int = f + ef;
  var gf:int = ff;
  shift64RightJamming(cf, df, gf);
  var hf:long = f[4]:long;
  var if:long = 4611686018427387904L;
  var jf:long = hf | if;
  f[4]:long = jf;
  label B_c:
  var kf:long = f[4]:long;
  var lf:long = f[3]:long;
  var mf:long = kf - lf;
  f[2]:long = mf;
  var nf:int = f[12]:int;
  f[10]:int = nf;
  label B_b:
  var of:int = f[10]:int;
  var pf:int = -1;
  var qf:int = of + pf;
  f[10]:int = qf;
  var rf:int = f[13]:int;
  var sf:int = f[10]:int;
  var tf:long = f[2]:long;
  var uf:long = normalizeRoundAndPackFloat64(rf, sf, tf);
  f[9]:long = uf;
  label B_a:
  var vf:long = f[9]:long;
  var wf:int = 80;
  var xf:int = f + wf;
  stack_pointer = xf;
  return vf;
}

export function float64_add(a:long, b:long):long {
  var c:int = stack_pointer;
  var d:int = 32;
  var e:{ a:int, b:int, c:long, d:long, e:long } = c - d;
  stack_pointer = e;
  e.d = a;
  e.c = b;
  var f:long = e.d;
  var g:int = extractFloat64Sign(f);
  e.b = g;
  var h:long = e.c;
  var i:int = extractFloat64Sign(h);
  e.a = i;
  var j:int = e.b;
  var k:int = e.a;
  var l:int = j;
  var m:int = k;
  var n:int = l == m;
  var o:int = 1;
  var p:int = n & o;
  if (eqz(p)) goto B_b;
  var q:long = e.d;
  var r:long = e.c;
  var s:int = e.b;
  var t:long = addFloat64Sigs(q, r, s);
  e.e = t;
  goto B_a;
  label B_b:
  var u:long = e.d;
  var v:long = e.c;
  var w:int = e.b;
  var x:long = subFloat64Sigs(u, v, w);
  e.e = x;
  label B_a:
  var y:long = e.e;
  var z:int = 32;
  var aa:int = e + z;
  stack_pointer = aa;
  return y;
}

export function ullong_to_double(a:long):double {
  var b:int = stack_pointer;
  var c:int = 32;
  var d:int = b - c;
  d[3]:long = a;
  var e:long = d[3]:long;
  d[2]:long = e;
  var f:double = d[1]:double;
  return f;
}

export function submain():int {
  var a:int = stack_pointer;
  var b:int = 48;
  var c:int = a - b;
  stack_pointer = c;
  var d:int = 0;
  c[11]:int = d;
  var e:double = rtclock();
  var f:double_ptr = startTimer;
  f[0] = e;
  var g:int = 0;
  c[10]:int = g;
  loop L_b {
    var h:int = c[10]:int;
    var i:int = 46;
    var j:int = h;
    var k:int = i;
    var l:int = j < k;
    var m:int = 1;
    var n:int = l & m;
    if (eqz(n)) goto B_a;
    var o:int = c[10]:int;
    var p:int = 3;
    var q:int = o << p;
    var r:int = a_input;
    var s:long_ptr = r + q;
    var t:long = s[0];
    c[4]:long = t;
    var u:int = c[10]:int;
    var v:int = u << p;
    var w:int = b_input;
    var x:long_ptr = w + v;
    var y:long = x[0];
    c[3]:long = y;
    var z:long = c[4]:long;
    var aa:long = c[3]:long;
    var ba:long = float64_add(z, aa);
    c[2]:long = ba;
    var ca:long = c[2]:long;
    var da:int = c[10]:int;
    var ea:int = da << p;
    var fa:int = z_output;
    var ga:long_ptr = fa + ea;
    var ha:long = ga[0];
    var ia:long = ca;
    var ja:long = ha;
    var ka:int = ia != ja;
    var la:int = 1;
    var ma:int = ka & la;
    var na:int = c[11]:int;
    var oa:int = na + ma;
    c[11]:int = oa;
    var pa:int = c[10]:int;
    var qa:int = 1;
    var ra:int = pa + qa;
    c[10]:int = ra;
    continue L_b;
  }
  unreachable;
  label B_a:
  var sa:double = rtclock();
  var ta:double_ptr = endTimer;
  ta[0] = sa;
  var ua:double = ta[0];
  var va:double_ptr = startTimer;
  var wa:double = va[0];
  var xa:double = ua - wa;
  c[0]:double = xa;
  var ya:int = 1139;
  var za:int = memory_base;
  var ab:int = za + ya;
  printf(ab, c);
  var bb:int = c[11]:int;
  var cb:int = 48;
  var db:int = c + cb;
  stack_pointer = db;
  return bb;
}

function rtclock():double {
  var a:int = stack_pointer;
  var b:int = 32;
  var c:int = a - b;
  stack_pointer = c;
  var d:int = 16;
  var e:int = c + d;
  var f:int = e;
  var g:int = 0;
  var h:int = gettimeofday(f, g);
  c[3]:int = h;
  var i:int = c[3]:int;
  if (eqz(i)) goto B_a;
  var j:int = c[3]:int;
  c[0]:int = j;
  var k:int = 1104;
  var l:int = memory_base;
  var m:int = l + k;
  printf(m, c);
  label B_a:
  var n:long = c[2]:long;
  var o:double = f64_convert_i64_s(n);
  var p:int = c[6]:int;
  var q:double = f64_convert_i32_s(p);
  var r:double = 0.000001;
  var s:double = q * r;
  var t:double = s + o;
  var u:int = 32;
  var v:int = c + u;
  stack_pointer = v;
  return t;
}

function legalstub_shift64RightJamming(a:int, b:int, c:int, d:int) {
  shift64RightJamming(i64_extend_i32_u(a) | i64_extend_i32_u(b) << 32L,
                      c,
                      d)
}

function legalstub_float64_is_nan(a:int, b:int):int {
  return 
    float64_is_nan(i64_extend_i32_u(a) | i64_extend_i32_u(b) << 32L)
}

function legalstub_float64_is_signaling_nan(a:int, b:int):int {
  return float64_is_signaling_nan(
           i64_extend_i32_u(a) | i64_extend_i32_u(b) << 32L)
}

function legalstub_extractFloat64Frac(a:int, b:int):int {
  var c:long = 
    extractFloat64Frac(i64_extend_i32_u(a) | i64_extend_i32_u(b) << 32L);
  setTempRet0(i32_wrap_i64(c >> 32L));
  return i32_wrap_i64(c);
}

function legalstub_extractFloat64Exp(a:int, b:int):int {
  return 
    extractFloat64Exp(i64_extend_i32_u(a) | i64_extend_i32_u(b) << 32L)
}

function legalstub_extractFloat64Sign(a:int, b:int):int {
  return 
    extractFloat64Sign(i64_extend_i32_u(a) | i64_extend_i32_u(b) << 32L)
}

function legalstub_packFloat64(a:int, b:int, c:int, d:int):int {
  var e:long = 
    packFloat64(a, b, i64_extend_i32_u(c) | i64_extend_i32_u(d) << 32L);
  setTempRet0(i32_wrap_i64(e >> 32L));
  return i32_wrap_i64(e);
}

function legalstub_roundAndPackFloat64(a:int, b:int, c:int, d:int):int {
  var e:long = 
    roundAndPackFloat64(a,
                        b,
                        i64_extend_i32_u(c) | i64_extend_i32_u(d) << 32L);
  setTempRet0(i32_wrap_i64(e >> 32L));
  return i32_wrap_i64(e);
}

function legalstub_normalizeRoundAndPackFloat64(a:int, b:int, c:int, d:int):int {
  var e:long = normalizeRoundAndPackFloat64(
                 a,
                 b,
                 i64_extend_i32_u(c) | i64_extend_i32_u(d) << 32L);
  setTempRet0(i32_wrap_i64(e >> 32L));
  return i32_wrap_i64(e);
}

function legalstub_addFloat64Sigs(a:int, b:int, c:int, d:int, e:int):int {
  var f:long = 
    addFloat64Sigs(i64_extend_i32_u(a) | i64_extend_i32_u(b) << 32L,
                   i64_extend_i32_u(c) | i64_extend_i32_u(d) << 32L,
                   e);
  setTempRet0(i32_wrap_i64(f >> 32L));
  return i32_wrap_i64(f);
}

function legalstub_subFloat64Sigs(a:int, b:int, c:int, d:int, e:int):int {
  var f:long = 
    subFloat64Sigs(i64_extend_i32_u(a) | i64_extend_i32_u(b) << 32L,
                   i64_extend_i32_u(c) | i64_extend_i32_u(d) << 32L,
                   e);
  setTempRet0(i32_wrap_i64(f >> 32L));
  return i32_wrap_i64(f);
}

function legalstub_float64_add(a:int, b:int, c:int, d:int):int {
  var e:long = 
    float64_add(i64_extend_i32_u(a) | i64_extend_i32_u(b) << 32L,
                i64_extend_i32_u(c) | i64_extend_i32_u(d) << 32L);
  setTempRet0(i32_wrap_i64(e >> 32L));
  return i32_wrap_i64(e);
}

function legalstub_ullong_to_double(a:int, b:int):double {
  return 
    ullong_to_double(i64_extend_i32_u(a) | i64_extend_i32_u(b) << 32L)
}

