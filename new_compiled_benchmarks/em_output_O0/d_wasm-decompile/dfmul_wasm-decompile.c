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
global float_exception_flags_1:int = 1556;
global float_rounding_mode_1:int = 1552;
global startTimer_1:int = 1560;
global a_input_1:int = 0;
global b_input_1:int = 160;
global z_output_1:int = 320;
global endTimer_1:int = 1568;

data data(offset: memory_base) =
  "\00\00\00\00\00\00\f0\7f\00\00\00\00\00\00\ff\7f\00\00\00\00\00\00\f0\7f"
  "\00\00\00\00\00\00\f0\7f\00\00\00\00\00\00\f0?\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\f0?\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\80"
  "\00\00\00\00\00\00\f0?\00\00\00\00\00\00\f0?\00\00\00\00\00\00\00@\00\00"
  "\00\00\00\00\d0?\00\00\00\00\00\00\00\c0\00\00\00\00\00\00\d0\bf\00\00"
  "\00\00\00\00\00@\00\00\00\00\00\00\d0\bf\00\00\00\00\00\00\00\c0\00\00"
  "\00\00\00\00\d0?\00\00\00\00\00\00\00\00\ff\ff\ff\ff\ff\ff\ff\ff\00\00"
  "\00\00\00\00\f0\ff\00\00\00\00\00\00\00\00\00\00\00\00\00\00\f0?\00\00"
  "\00\00\00\00\ff\ff\00\00\00\00\00\00\f0\7f\00\00\00\00\00\00\f0\7f\00\00"
  "\00\00\00\00\f0?\00\00\00\00\00\00\f0?\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\80\00\00\00\00\00\00\d0?\00\00\00\00\00\00\00@\00\00\00\00"
  "\00\00\d0\bf\00\00\00\00\00\00\00\c0\00\00\00\00\00\00\d0\bf\00\00\00\00"
  "\00\00\00@\00\00\00\00\00\00\d0?\00\00\00\00\00\00\00\c0\00\00\00\00\00"
  "\00\00\00\ff\ff\ff\ff\ff\ff\ff\ff\00\00\00\00\00\00\ff\7f\ff\ff\ff\ff\ff"
  "\ff\ff\7f\00\00\00\00\00\00\f0\7f\00\00\00\00\00\00\ff\ff\ff\ff\ff\ff\ff"
  "\ff\ff\7f\00\00\00\00\00\00\f0\7f\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\80\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\80\00\00\00\00\00"
  "\00\e0?\00\00\00\00\00\00\e0?\00\00\00\00\00\00\e0?\00\00\00\00\00\00\e0"
  "?\00\00\00\00\00\00\e0\bf\00\00\00\00\00\00\e0\bf\00\00\00\00\00\00\e0"
  "\bf\00\00\00\00\00\00\e0\bf\00\00\00\00\00\00\00\00Error return from g"
  "ettimeofday: %d\00%0.6f\0a\00\00\00\00\00\00\00\08\00\00\00\07\00\00\00"
  "\06\00\00\00\06\00\00\00\05\00\00\00\05\00\00\00\05\00\00\00\05\00\00\00"
  "\04\00\00\00\04\00\00\00\04\00\00\00\04\00\00\00\04\00\00\00\04\00\00\00"
  "\04\00\00\00\04\00\00\00\03\00\00\00\03\00\00\00\03\00\00\00\03\00\00\00"
  "\03\00\00\00\03\00\00\00\03\00\00\00\03\00\00\00\03\00\00\00\03\00\00\00"
  "\03\00\00\00\03\00\00\00\03\00\00\00\03\00\00\00\03\00\00\00\03\00\00\00"
  "\02\00\00\00\02\00\00\00\02\00\00\00\02\00\00\00\02\00\00\00\02\00\00\00"
  "\02\00\00\00\02\00\00\00\02\00\00\00\02\00\00\00\02\00\00\00\02\00\00\00"
  "\02\00\00\00\02\00\00\00\02\00\00\00\02\00\00\00\02\00\00\00\02\00\00\00"
  "\02\00\00\00\02\00\00\00\02\00\00\00\02\00\00\00\02\00\00\00\02\00\00\00"
  "\02\00\00\00\02\00\00\00\02\00\00\00\02\00\00\00\02\00\00\00\02\00\00\00"
  "\02\00\00\00\02\00\00\00\01\00\00\00\01\00\00\00\01\00\00\00\01\00\00\00"
  "\01\00\00\00\01\00\00\00\01\00\00\00\01\00\00\00\01\00\00\00\01\00\00\00"
  "\01\00\00\00\01\00\00\00\01\00\00\00\01\00\00\00\01\00\00\00\01\00\00\00"
  "\01\00\00\00\01\00\00\00\01\00\00\00\01\00\00\00\01\00\00\00\01\00\00\00"
  "\01\00\00\00\01\00\00\00\01\00\00\00\01\00\00\00\01\00\00\00\01\00\00\00"
  "\01\00\00\00\01\00\00\00\01\00\00\00\01\00\00\00\01\00\00\00\01\00\00\00"
  "\01\00\00\00\01\00\00\00\01\00\00\00\01\00\00\00\01\00\00\00\01\00\00\00"
  "\01\00\00\00\01\00\00\00\01\00\00\00\01\00\00\00\01\00\00\00\01\00\00\00"
  "\01\00\00\00\01\00\00\00\01\00\00\00\01\00\00\00\01\00\00\00\01\00\00\00"
  "\01\00\00\00\01\00\00\00\01\00\00\00\01\00\00\00\01\00\00\00\01\00\00\00"
  "\01\00\00\00\01\00\00\00\01\00\00\00\01\00\00\00\01\00\00\00\01\00\00\00"
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
  "\00\00\00\00\00\00\00\00";

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

export function mul64To128(a:long, b:long, c:int, d:int) {
  var e:int = stack_pointer;
  var f:int = 80;
  var g:int = e - f;
  g[9]:long = a;
  g[8]:long = b;
  g[15]:int = c;
  g[14]:int = d;
  var h:long = g[9]:long;
  var i:int = i32_wrap_i64(h);
  g[12]:int = i;
  var j:long = g[9]:long;
  var k:long = 32L;
  var l:long = j >> k;
  var m:int = i32_wrap_i64(l);
  g[13]:int = m;
  var n:long = g[8]:long;
  var o:int = i32_wrap_i64(n);
  g[10]:int = o;
  var p:long = g[8]:long;
  var q:long = 32L;
  var r:long = p >> q;
  var s:int = i32_wrap_i64(r);
  g[11]:int = s;
  var t:int = g[12]:int;
  var u:int = t;
  var v:long = i64_extend_i32_u(u);
  var w:int = g[10]:int;
  var x:int = w;
  var y:long = i64_extend_i32_u(x);
  var z:long = v * y;
  g[1]:long = z;
  var aa:int = g[12]:int;
  var ba:int = aa;
  var ca:long = i64_extend_i32_u(ba);
  var da:int = g[11]:int;
  var ea:int = da;
  var fa:long = i64_extend_i32_u(ea);
  var ga:long = ca * fa;
  g[3]:long = ga;
  var ha:int = g[13]:int;
  var ia:int = ha;
  var ja:long = i64_extend_i32_u(ia);
  var ka:int = g[10]:int;
  var la:int = ka;
  var ma:long = i64_extend_i32_u(la);
  var na:long = ja * ma;
  g[2]:long = na;
  var oa:int = g[13]:int;
  var pa:int = oa;
  var qa:long = i64_extend_i32_u(pa);
  var ra:int = g[11]:int;
  var sa:int = ra;
  var ta:long = i64_extend_i32_u(sa);
  var ua:long = qa * ta;
  g[4]:long = ua;
  var va:long = g[2]:long;
  var wa:long = g[3]:long;
  var xa:long = wa + va;
  g[3]:long = xa;
  var ya:long = g[3]:long;
  var za:long = g[2]:long;
  var ab:long = ya;
  var bb:long = za;
  var cb:int = ab < bb;
  var db:int = 1;
  var eb:int = cb & db;
  var fb:int = eb;
  var gb:long = i64_extend_i32_s(fb);
  var hb:long = 32L;
  var ib:long = gb << hb;
  var jb:long = g[3]:long;
  var kb:long = 32L;
  var lb:long = jb >> kb;
  var mb:long = ib + lb;
  var nb:long = g[4]:long;
  var ob:long = nb + mb;
  g[4]:long = ob;
  var pb:long = g[3]:long;
  var qb:long = 32L;
  var rb:long = pb << qb;
  g[3]:long = rb;
  var sb:long = g[3]:long;
  var tb:long = g[1]:long;
  var ub:long = tb + sb;
  g[1]:long = ub;
  var vb:long = g[1]:long;
  var wb:long = g[3]:long;
  var xb:long = vb;
  var yb:long = wb;
  var zb:int = xb < yb;
  var ac:int = 1;
  var bc:int = zb & ac;
  var cc:int = bc;
  var dc:long = i64_extend_i32_s(cc);
  var ec:long = g[4]:long;
  var fc:long = ec + dc;
  g[4]:long = fc;
  var gc:long = g[1]:long;
  var hc:long_ptr = g[14]:int;
  hc[0] = gc;
  var ic:long = g[4]:long;
  var jc:long_ptr = g[15]:int;
  jc[0] = ic;
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

export function normalizeFloat64Subnormal(a:long, b:int, c:int) {
  var d:int = stack_pointer;
  var e:int = 32;
  var f:int = d - e;
  stack_pointer = f;
  f[3]:long = a;
  f[5]:int = b;
  f[4]:int = c;
  var g:long = f[3]:long;
  var h:int = countLeadingZeros64(g);
  var i:int = 11;
  var j:int = h - i;
  f[3]:int = j;
  var k:long = f[3]:long;
  var l:int = f[3]:int;
  var m:int = l;
  var n:long = i64_extend_i32_u(m);
  var o:long = k << n;
  var p:long_ptr = f[4]:int;
  p[0] = o;
  var q:int = f[3]:int;
  var r:int = 1;
  var s:int = r - q;
  var t:int_ptr = f[5]:int;
  t[0] = s;
  var u:int = 32;
  var v:int = f + u;
  stack_pointer = v;
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
  var ga:int = 528;
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

export function float64_mul(a:long, b:long):long {
  var c:int = stack_pointer;
  var d:int = 80;
  var e:{ a:long, b:long, c:long, d:long, e:int, f:int, g:int, h:int, i:int, j:int, k:long, l:long, m:long } = 
    c - d;
  stack_pointer = e;
  e.l = a;
  e.k = b;
  var f:long = e.l;
  var g:long = extractFloat64Frac(f);
  e.d = g;
  var h:long = e.l;
  var i:int = extractFloat64Exp(h);
  e.g = i;
  var j:long = e.l;
  var k:int = extractFloat64Sign(j);
  e.j = k;
  var l:long = e.k;
  var m:long = extractFloat64Frac(l);
  e.c = m;
  var n:long = e.k;
  var o:int = extractFloat64Exp(n);
  e.f = o;
  var p:long = e.k;
  var q:int = extractFloat64Sign(p);
  e.i = q;
  var r:int = e.j;
  var s:int = e.i;
  var t:int = r ^ s;
  e.h = t;
  var u:int = e.g;
  var v:int = 2047;
  var w:int = u;
  var x:int = v;
  var y:int = w == x;
  var z:int = 1;
  var aa:int = y & z;
  if (eqz(aa)) goto B_b;
  var ba:long = e.d;
  var ca:long = 0L;
  var da:long = ba;
  var ea:long = ca;
  var fa:int = da != ea;
  var ga:int = 1;
  var ha:int = fa & ga;
  if (ha) goto B_d;
  var ia:int = e.f;
  var ja:int = 2047;
  var ka:int = ia;
  var la:int = ja;
  var ma:int = ka == la;
  var na:int = 1;
  var oa:int = ma & na;
  if (eqz(oa)) goto B_c;
  var pa:long = e.c;
  var qa:long = 0L;
  var ra:long = pa;
  var sa:long = qa;
  var ta:int = ra != sa;
  var ua:int = 1;
  var va:int = ta & ua;
  if (eqz(va)) goto B_c;
  label B_d:
  var wa:long = e.l;
  var xa:long = e.k;
  var ya:long = propagateFloat64NaN(wa, xa);
  e.m = ya;
  goto B_a;
  label B_c:
  var za:int = e.f;
  var ab:int = za;
  var bb:long = i64_extend_i32_s(ab);
  var cb:long = e.c;
  var db:long = bb | cb;
  var eb:long = 0L;
  var fb:long = db;
  var gb:long = eb;
  var hb:int = fb == gb;
  var ib:int = 1;
  var jb:int = hb & ib;
  if (eqz(jb)) goto B_e;
  var kb:int = 16;
  float_raise(kb);
  var lb:long = 9223372036854775807L;
  e.m = lb;
  goto B_a;
  label B_e:
  var mb:int = e.h;
  var nb:int = 2047;
  var ob:long = 0L;
  var pb:long = packFloat64(mb, nb, ob);
  e.m = pb;
  goto B_a;
  label B_b:
  var qb:int = e.f;
  var rb:int = 2047;
  var sb:int = qb;
  var tb:int = rb;
  var ub:int = sb == tb;
  var vb:int = 1;
  var wb:int = ub & vb;
  if (eqz(wb)) goto B_f;
  var xb:long = e.c;
  var yb:long = 0L;
  var zb:long = xb;
  var ac:long = yb;
  var bc:int = zb != ac;
  var cc:int = 1;
  var dc:int = bc & cc;
  if (eqz(dc)) goto B_g;
  var ec:long = e.l;
  var fc:long = e.k;
  var gc:long = propagateFloat64NaN(ec, fc);
  e.m = gc;
  goto B_a;
  label B_g:
  var hc:int = e.g;
  var ic:int = hc;
  var jc:long = i64_extend_i32_s(ic);
  var kc:long = e.d;
  var lc:long = jc | kc;
  var mc:long = 0L;
  var nc:long = lc;
  var oc:long = mc;
  var pc:int = nc == oc;
  var qc:int = 1;
  var rc:int = pc & qc;
  if (eqz(rc)) goto B_h;
  var sc:int = 16;
  float_raise(sc);
  var tc:long = 9223372036854775807L;
  e.m = tc;
  goto B_a;
  label B_h:
  var uc:int = e.h;
  var vc:int = 2047;
  var wc:long = 0L;
  var xc:long = packFloat64(uc, vc, wc);
  e.m = xc;
  goto B_a;
  label B_f:
  var yc:int = e.g;
  if (yc) goto B_i;
  var zc:long = e.d;
  var ad:long = 0L;
  var bd:long = zc;
  var cd:long = ad;
  var dd:int = bd == cd;
  var ed:int = 1;
  var fd:int = dd & ed;
  if (eqz(fd)) goto B_j;
  var gd:int = e.h;
  var hd:int = 0;
  var id:long = 0L;
  var jd:long = packFloat64(gd, hd, id);
  e.m = jd;
  goto B_a;
  label B_j:
  var kd:long = e.d;
  var ld:int = 40;
  var md:int = e + ld;
  var nd:int = md;
  var od:int = 24;
  var pd:int = e + od;
  var qd:int = pd;
  normalizeFloat64Subnormal(kd, nd, qd);
  label B_i:
  var rd:int = e.f;
  if (rd) goto B_k;
  var sd:long = e.c;
  var td:long = 0L;
  var ud:long = sd;
  var vd:long = td;
  var wd:int = ud == vd;
  var xd:int = 1;
  var yd:int = wd & xd;
  if (eqz(yd)) goto B_l;
  var zd:int = e.h;
  var ae:int = 0;
  var be:long = 0L;
  var ce:long = packFloat64(zd, ae, be);
  e.m = ce;
  goto B_a;
  label B_l:
  var de:long = e.c;
  var ee:int = 36;
  var fe:int = e + ee;
  var ge:int = fe;
  var he:int = 16;
  var ie:int = e + he;
  var je:int = ie;
  normalizeFloat64Subnormal(de, ge, je);
  label B_k:
  var ke:int = e.g;
  var le:int = e.f;
  var me:int = ke + le;
  var ne:int = 1023;
  var oe:int = me - ne;
  e.e = oe;
  var pe:long = e.d;
  var qe:long = 4503599627370496L;
  var re:long = pe | qe;
  var se:long = 10L;
  var te:long = re << se;
  e.d = te;
  var ue:long = e.c;
  var ve:long = 4503599627370496L;
  var we:long = ue | ve;
  var xe:long = 11L;
  var ye:long = we << xe;
  e.c = ye;
  var ze:long = e.d;
  var af:long = e.c;
  var bf:int = 8;
  var cf:int = e + bf;
  var df:int = cf;
  var ef:int = e;
  mul64To128(ze, af, df, ef);
  var ff:long = e.a;
  var gf:long = 0L;
  var hf:long = ff;
  var if:long = gf;
  var jf:int = hf != if;
  var kf:int = 1;
  var lf:int = jf & kf;
  var mf:int = lf;
  var nf:long = i64_extend_i32_s(mf);
  var of:long = e.b;
  var pf:long = of | nf;
  e.b = pf;
  var qf:long = e.b;
  var rf:long = 1L;
  var sf:long = qf << rf;
  var tf:long = 0L;
  var uf:long = tf;
  var vf:long = sf;
  var wf:int = uf <= vf;
  var xf:int = 1;
  var yf:int = wf & xf;
  if (eqz(yf)) goto B_m;
  var zf:long = e.b;
  var ag:long = 1L;
  var bg:long = zf << ag;
  e.b = bg;
  var cg:int = e.e;
  var dg:int = -1;
  var eg:int = cg + dg;
  e.e = eg;
  label B_m:
  var fg:int = e.h;
  var gg:int = e.e;
  var hg:long = e.b;
  var ig:long = roundAndPackFloat64(fg, gg, hg);
  e.m = ig;
  label B_a:
  var jg:long = e.m;
  var kg:int = 80;
  var lg:int = e + kg;
  stack_pointer = lg;
  return jg;
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
    var i:int = 20;
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
    var ba:long = float64_mul(z, aa);
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
  var ya:int = 515;
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
  var k:int = 480;
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

function legalstub_mul64To128(a:int, b:int, c:int, d:int, e:int, f:int) {
  mul64To128(i64_extend_i32_u(a) | i64_extend_i32_u(b) << 32L,
             i64_extend_i32_u(c) | i64_extend_i32_u(d) << 32L,
             e,
             f)
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

function legalstub_normalizeFloat64Subnormal(a:int, b:int, c:int, d:int) {
  normalizeFloat64Subnormal(
    i64_extend_i32_u(a) | i64_extend_i32_u(b) << 32L,
    c,
    d)
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

function legalstub_float64_mul(a:int, b:int, c:int, d:int):int {
  var e:long = 
    float64_mul(i64_extend_i32_u(a) | i64_extend_i32_u(b) << 32L,
                i64_extend_i32_u(c) | i64_extend_i32_u(d) << 32L);
  setTempRet0(i32_wrap_i64(e >> 32L));
  return i32_wrap_i64(e);
}

function legalstub_ullong_to_double(a:int, b:int):double {
  return 
    ullong_to_double(i64_extend_i32_u(a) | i64_extend_i32_u(b) << 32L)
}

