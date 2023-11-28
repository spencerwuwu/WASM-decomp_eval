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
global float_exception_flags_1:int = 1604;
global float_rounding_mode_1:int = 1600;
global startTimer_1:int = 1608;
global a_input_1:int = 0;
global b_input_1:int = 176;
global z_output_1:int = 352;
global endTimer_1:int = 1616;

data data(offset: memory_base) =
  "\00\00\00\00\00\00\ff\7f\00\00\00\00\00\00\f0\7f\00\00\00\00\00\00\f0\7f"
  "\00\00\00\00\00\00\f0\7f\00\00\00\00\00\00\f0?\00\00\00\00\00\00\f0?\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\f0?\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\80\00\00\00\00\00\00\08@\00\00\00\00\00\00\08\c0\00"
  "\00\00\00\00\00\08@\00\00\00\00\00\00\08\c0\00\00\00\00\00\00\00@\00\00"
  "\00\00\00\00\00\c0\00\00\00\00\00\00\00@\00\00\00\00\00\00\00\c0\00\00"
  "\00\00\00\00\f0?\00\00\00\00\00\00\f0\bf\00\00\00\00\00\00\f0?\00\00\00"
  "\00\00\00\f0\bf\00\00\00\00\00\00\f0?\00\00\00\00\00\00\f8\7f\00\00\00"
  "\00\00\00\f0\7f\00\00\00\00\00\00\f0?\00\00\00\00\00\00\f8\7f\00\00\00"
  "\00\00\00\f0\7f\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\f0?\00\00\00\00\00\00\f0?\00\00\00\00\00\00\00@\00\00\00\00\00"
  "\00\00@\00\00\00\00\00\00\00\c0\00\00\00\00\00\00\00\c0\00\00\00\00\00"
  "\00\10@\00\00\00\00\00\00\10@\00\00\00\00\00\00\10\c0\00\00\00\00\00\00"
  "\10\c0\00\00\00\00\00\00\f8?\00\00\00\00\00\00\f8?\00\00\00\00\00\00\f8"
  "\bf\00\00\00\00\00\00\f8\bf\00\00\00\00\00\00\ff\7f\00\00\00\00\00\00\f8"
  "\7f\ff\ff\ff\ff\ff\ff\ff\7f\00\00\00\00\00\00\f0\7f\00\00\00\00\00\00\f8"
  "\7f\00\00\00\00\00\00\00\00\ff\ff\ff\ff\ff\ff\ff\7f\00\00\00\00\00\00\f0"
  "\7f\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\80\00\00\00\00\00\00\f8"
  "?\00\00\00\00\00\00\f8\bf\00\00\00\00\00\00\f8\bf\00\00\00\00\00\00\f8"
  "?\00\00\00\00\00\00\e0?\00\00\00\00\00\00\e0\bf\00\00\00\00\00\00\e0\bf"
  "\00\00\00\00\00\00\e0?UUUUUU\e5?UUUUUU\e5\bfUUUUUU\e5\bfUUUUUU\e5?Erro"
  "r return from gettimeofday: %d\00%0.6f\0a\00\00\00\00\00\00\00\08\00\00"
  "\00\07\00\00\00\06\00\00\00\06\00\00\00\05\00\00\00\05\00\00\00\05\00\00"
  "\00\05\00\00\00\04\00\00\00\04\00\00\00\04\00\00\00\04\00\00\00\04\00\00"
  "\00\04\00\00\00\04\00\00\00\04\00\00\00\03\00\00\00\03\00\00\00\03\00\00"
  "\00\03\00\00\00\03\00\00\00\03\00\00\00\03\00\00\00\03\00\00\00\03\00\00"
  "\00\03\00\00\00\03\00\00\00\03\00\00\00\03\00\00\00\03\00\00\00\03\00\00"
  "\00\03\00\00\00\02\00\00\00\02\00\00\00\02\00\00\00\02\00\00\00\02\00\00"
  "\00\02\00\00\00\02\00\00\00\02\00\00\00\02\00\00\00\02\00\00\00\02\00\00"
  "\00\02\00\00\00\02\00\00\00\02\00\00\00\02\00\00\00\02\00\00\00\02\00\00"
  "\00\02\00\00\00\02\00\00\00\02\00\00\00\02\00\00\00\02\00\00\00\02\00\00"
  "\00\02\00\00\00\02\00\00\00\02\00\00\00\02\00\00\00\02\00\00\00\02\00\00"
  "\00\02\00\00\00\02\00\00\00\02\00\00\00\01\00\00\00\01\00\00\00\01\00\00"
  "\00\01\00\00\00\01\00\00\00\01\00\00\00\01\00\00\00\01\00\00\00\01\00\00"
  "\00\01\00\00\00\01\00\00\00\01\00\00\00\01\00\00\00\01\00\00\00\01\00\00"
  "\00\01\00\00\00\01\00\00\00\01\00\00\00\01\00\00\00\01\00\00\00\01\00\00"
  "\00\01\00\00\00\01\00\00\00\01\00\00\00\01\00\00\00\01\00\00\00\01\00\00"
  "\00\01\00\00\00\01\00\00\00\01\00\00\00\01\00\00\00\01\00\00\00\01\00\00"
  "\00\01\00\00\00\01\00\00\00\01\00\00\00\01\00\00\00\01\00\00\00\01\00\00"
  "\00\01\00\00\00\01\00\00\00\01\00\00\00\01\00\00\00\01\00\00\00\01\00\00"
  "\00\01\00\00\00\01\00\00\00\01\00\00\00\01\00\00\00\01\00\00\00\01\00\00"
  "\00\01\00\00\00\01\00\00\00\01\00\00\00\01\00\00\00\01\00\00\00\01\00\00"
  "\00\01\00\00\00\01\00\00\00\01\00\00\00\01\00\00\00\01\00\00\00\01\00\00"
  "\00\01\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
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
  "\00\00\00\00\00\00\00\00\00\00\00\00\00";

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

export function add128(a:long, b:long, c:long, d:long, e:int, f:int) {
  var g:int = stack_pointer;
  var h:int = 48;
  var i:{ a:long, b:int, c:int, d:long, e:long, f:long, g:long } = 
    g - h;
  i.g = a;
  i.f = b;
  i.e = c;
  i.d = d;
  i.c = e;
  i.b = f;
  var j:long = i.f;
  var k:long = i.d;
  var l:long = j + k;
  i.a = l;
  var m:long = i.a;
  var n:long_ptr = i.b;
  n[0] = m;
  var o:long = i.g;
  var p:long = i.e;
  var q:long = o + p;
  var r:long = i.a;
  var s:long = i.f;
  var t:long = r;
  var u:long = s;
  var v:int = t < u;
  var w:int = 1;
  var x:int = v & w;
  var y:int = x;
  var z:long = i64_extend_i32_s(y);
  var aa:long = q + z;
  var ba:long_ptr = i.c;
  ba[0] = aa;
}

export function sub128(a:long, b:long, c:long, d:long, e:int, f:int) {
  var g:int = stack_pointer;
  var h:int = 48;
  var i:int = g - h;
  i[5]:long = a;
  i[4]:long = b;
  i[3]:long = c;
  i[2]:long = d;
  i[3]:int = e;
  i[2]:int = f;
  var j:long = i[4]:long;
  var k:long = i[2]:long;
  var l:long = j - k;
  var m:long_ptr = i[2]:int;
  m[0] = l;
  var n:long = i[5]:long;
  var o:long = i[3]:long;
  var p:long = n - o;
  var q:long = i[4]:long;
  var r:long = i[2]:long;
  var s:long = q;
  var t:long = r;
  var u:int = s < t;
  var v:int = 1;
  var w:int = u & v;
  var x:int = w;
  var y:long = i64_extend_i32_s(x);
  var z:long = p - y;
  var aa:long_ptr = i[3]:int;
  aa[0] = z;
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
  var ga:int = 576;
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

export function float64_div(a:long, b:long):long {
  var c:int = stack_pointer;
  var d:int = 112;
  var e:int = c - d;
  stack_pointer = e;
  e[12]:long = a;
  e[11]:long = b;
  var f:long = e[12]:long;
  var g:long = extractFloat64Frac(f);
  e[7]:long = g;
  var h:long = e[12]:long;
  var i:int = extractFloat64Exp(h);
  e[18]:int = i;
  var j:long = e[12]:long;
  var k:int = extractFloat64Sign(j);
  e[21]:int = k;
  var l:long = e[11]:long;
  var m:long = extractFloat64Frac(l);
  e[6]:long = m;
  var n:long = e[11]:long;
  var o:int = extractFloat64Exp(n);
  e[17]:int = o;
  var p:long = e[11]:long;
  var q:int = extractFloat64Sign(p);
  e[20]:int = q;
  var r:int = e[21]:int;
  var s:int = e[20]:int;
  var t:int = r ^ s;
  e[19]:int = t;
  var u:int = e[18]:int;
  var v:int = 2047;
  var w:int = u;
  var x:int = v;
  var y:int = w == x;
  var z:int = 1;
  var aa:int = y & z;
  if (eqz(aa)) goto B_b;
  var ba:long = e[7]:long;
  var ca:long = 0L;
  var da:long = ba;
  var ea:long = ca;
  var fa:int = da != ea;
  var ga:int = 1;
  var ha:int = fa & ga;
  if (eqz(ha)) goto B_c;
  var ia:long = e[12]:long;
  var ja:long = e[11]:long;
  var ka:long = propagateFloat64NaN(ia, ja);
  e[13]:long = ka;
  goto B_a;
  label B_c:
  var la:int = e[17]:int;
  var ma:int = 2047;
  var na:int = la;
  var oa:int = ma;
  var pa:int = na == oa;
  var qa:int = 1;
  var ra:int = pa & qa;
  if (eqz(ra)) goto B_d;
  var sa:long = e[6]:long;
  var ta:long = 0L;
  var ua:long = sa;
  var va:long = ta;
  var wa:int = ua != va;
  var xa:int = 1;
  var ya:int = wa & xa;
  if (eqz(ya)) goto B_e;
  var za:long = e[12]:long;
  var ab:long = e[11]:long;
  var bb:long = propagateFloat64NaN(za, ab);
  e[13]:long = bb;
  goto B_a;
  label B_e:
  var cb:int = 16;
  float_raise(cb);
  var db:long = 9223372036854775807L;
  e[13]:long = db;
  goto B_a;
  label B_d:
  var eb:int = e[19]:int;
  var fb:int = 2047;
  var gb:long = 0L;
  var hb:long = packFloat64(eb, fb, gb);
  e[13]:long = hb;
  goto B_a;
  label B_b:
  var ib:int = e[17]:int;
  var jb:int = 2047;
  var kb:int = ib;
  var lb:int = jb;
  var mb:int = kb == lb;
  var nb:int = 1;
  var ob:int = mb & nb;
  if (eqz(ob)) goto B_f;
  var pb:long = e[6]:long;
  var qb:long = 0L;
  var rb:long = pb;
  var sb:long = qb;
  var tb:int = rb != sb;
  var ub:int = 1;
  var vb:int = tb & ub;
  if (eqz(vb)) goto B_g;
  var wb:long = e[12]:long;
  var xb:long = e[11]:long;
  var yb:long = propagateFloat64NaN(wb, xb);
  e[13]:long = yb;
  goto B_a;
  label B_g:
  var zb:int = e[19]:int;
  var ac:int = 0;
  var bc:long = 0L;
  var cc:long = packFloat64(zb, ac, bc);
  e[13]:long = cc;
  goto B_a;
  label B_f:
  var dc:int = e[17]:int;
  if (dc) goto B_h;
  var ec:long = e[6]:long;
  var fc:long = 0L;
  var gc:long = ec;
  var hc:long = fc;
  var ic:int = gc == hc;
  var jc:int = 1;
  var kc:int = ic & jc;
  if (eqz(kc)) goto B_i;
  var lc:int = e[18]:int;
  var mc:int = lc;
  var nc:long = i64_extend_i32_s(mc);
  var oc:long = e[7]:long;
  var pc:long = nc | oc;
  var qc:long = 0L;
  var rc:long = pc;
  var sc:long = qc;
  var tc:int = rc == sc;
  var uc:int = 1;
  var vc:int = tc & uc;
  if (eqz(vc)) goto B_j;
  var wc:int = 16;
  float_raise(wc);
  var xc:long = 9223372036854775807L;
  e[13]:long = xc;
  goto B_a;
  label B_j:
  var yc:int = 2;
  float_raise(yc);
  var zc:int = e[19]:int;
  var ad:int = 2047;
  var bd:long = 0L;
  var cd:long = packFloat64(zc, ad, bd);
  e[13]:long = cd;
  goto B_a;
  label B_i:
  var dd:long = e[6]:long;
  var ed:int = 68;
  var fd:int = e + ed;
  var gd:int = fd;
  var hd:int = 48;
  var id:int = e + hd;
  var jd:int = id;
  normalizeFloat64Subnormal(dd, gd, jd);
  label B_h:
  var kd:int = e[18]:int;
  if (kd) goto B_k;
  var ld:long = e[7]:long;
  var md:long = 0L;
  var nd:long = ld;
  var od:long = md;
  var pd:int = nd == od;
  var qd:int = 1;
  var rd:int = pd & qd;
  if (eqz(rd)) goto B_l;
  var sd:int = e[19]:int;
  var td:int = 0;
  var ud:long = 0L;
  var vd:long = packFloat64(sd, td, ud);
  e[13]:long = vd;
  goto B_a;
  label B_l:
  var wd:long = e[7]:long;
  var xd:int = 72;
  var yd:int = e + xd;
  var zd:int = yd;
  var ae:int = 56;
  var be:int = e + ae;
  var ce:int = be;
  normalizeFloat64Subnormal(wd, zd, ce);
  label B_k:
  var de:int = e[18]:int;
  var ee:int = e[17]:int;
  var fe:int = de - ee;
  var ge:int = 1021;
  var he:int = fe + ge;
  e[16]:int = he;
  var ie:long = e[7]:long;
  var je:long = 4503599627370496L;
  var ke:long = ie | je;
  var le:long = 10L;
  var me:long = ke << le;
  e[7]:long = me;
  var ne:long = e[6]:long;
  var oe:long = 4503599627370496L;
  var pe:long = ne | oe;
  var qe:long = 11L;
  var re:long = pe << qe;
  e[6]:long = re;
  var se:long = e[6]:long;
  var te:long = e[7]:long;
  var ue:long = e[7]:long;
  var ve:long = te + ue;
  var we:long = se;
  var xe:long = ve;
  var ye:int = we <= xe;
  var ze:int = 1;
  var af:int = ye & ze;
  if (eqz(af)) goto B_m;
  var bf:long = e[7]:long;
  var cf:long = 1L;
  var df:long = bf >> cf;
  e[7]:long = df;
  var ef:int = e[16]:int;
  var ff:int = 1;
  var gf:int = ef + ff;
  e[16]:int = gf;
  label B_m:
  var hf:long = e[7]:long;
  var if:long = e[6]:long;
  var jf:long = 0L;
  var kf:long = estimateDiv128To64(hf, jf, if);
  e[5]:long = kf;
  var lf:long = e[5]:long;
  var mf:long = 511L;
  var nf:long = lf & mf;
  var of:long = 2L;
  var pf:long = nf;
  var qf:long = of;
  var rf:int = pf <= qf;
  var sf:int = 1;
  var tf:int = rf & sf;
  if (eqz(tf)) goto B_n;
  var uf:long = e[6]:long;
  var vf:long = e[5]:long;
  var wf:int = 16;
  var xf:int = e + wf;
  var yf:int = xf;
  var zf:int = 8;
  var ag:int = e + zf;
  var bg:int = ag;
  mul64To128(uf, vf, yf, bg);
  var cg:long = e[7]:long;
  var dg:long = e[2]:long;
  var eg:long = e[1]:long;
  var fg:long = 0L;
  var gg:int = 32;
  var hg:int = e + gg;
  var ig:int = hg;
  var jg:int = 24;
  var kg:int = e + jg;
  var lg:int = kg;
  sub128(cg, fg, dg, eg, ig, lg);
  loop L_p {
    var mg:long = e[4]:long;
    var ng:long = 0L;
    var og:long = mg;
    var pg:long = ng;
    var qg:int = og < pg;
    var rg:int = 1;
    var sg:int = qg & rg;
    if (eqz(sg)) goto B_o;
    var tg:long = e[5]:long;
    var ug:long = -1L;
    var vg:long = tg + ug;
    e[5]:long = vg;
    var wg:long = e[4]:long;
    var xg:long = e[3]:long;
    var yg:long = e[6]:long;
    var zg:long = 0L;
    var ah:int = 32;
    var bh:int = e + ah;
    var ch:int = bh;
    var dh:int = 24;
    var eh:int = e + dh;
    var fh:int = eh;
    add128(wg, xg, zg, yg, ch, fh);
    continue L_p;
  }
  unreachable;
  label B_o:
  var gh:long = e[3]:long;
  var hh:long = 0L;
  var ih:long = gh;
  var jh:long = hh;
  var kh:int = ih != jh;
  var lh:int = 1;
  var mh:int = kh & lh;
  var nh:int = mh;
  var oh:long = i64_extend_i32_s(nh);
  var ph:long = e[5]:long;
  var qh:long = ph | oh;
  e[5]:long = qh;
  label B_n:
  var rh:int = e[19]:int;
  var sh:int = e[16]:int;
  var th:long = e[5]:long;
  var uh:long = roundAndPackFloat64(rh, sh, th);
  e[13]:long = uh;
  label B_a:
  var vh:long = e[13]:long;
  var wh:int = 112;
  var xh:int = e + wh;
  stack_pointer = xh;
  return vh;
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

function estimateDiv128To64(a:long, b:long, c:long):long {
  var ba:long;
  var oc:long;
  var d:int = stack_pointer;
  var e:int = 96;
  var f:long_ptr = d - e;
  stack_pointer = f;
  f[10] = a;
  f[9] = b;
  f[8] = c;
  var g:long = f[8];
  var h:long = f[10];
  var i:long = g;
  var j:long = h;
  var k:int = i <= j;
  var l:int = 1;
  var m:int = k & l;
  if (eqz(m)) goto B_b;
  var n:long = -1L;
  f[11] = n;
  goto B_a;
  label B_b:
  var o:long = f[8];
  var p:long = 32L;
  var q:long = o >> p;
  f[7] = q;
  var r:long = f[7];
  var s:long = 32L;
  var t:long = r << s;
  var u:long = f[10];
  var v:long = t;
  var w:long = u;
  var x:int = v <= w;
  var y:int = 1;
  var z:int = x & y;
  if (eqz(z)) goto B_d;
  var aa:long = -4294967296L;
  ba = aa;
  goto B_c;
  label B_d:
  var ca:long = f[10];
  var da:long = f[7];
  var ea:long = ca / da;
  var fa:long = 32L;
  var ga:long = ea << fa;
  ba = ga;
  label B_c:
  var ha:long = ba;
  f[1] = ha;
  var ia:long = f[8];
  var ja:long = f[1];
  var ka:int = 24;
  var la:int = f + ka;
  var ma:int = la;
  var na:int = 16;
  var oa:int = f + na;
  var pa:int = oa;
  mul64To128(ia, ja, ma, pa);
  var qa:long = f[10];
  var ra:long = f[9];
  var sa:long = f[3];
  var ta:long = f[2];
  var ua:int = 40;
  var va:int = f + ua;
  var wa:int = va;
  var xa:int = 32;
  var ya:int = f + xa;
  var za:int = ya;
  sub128(qa, ra, sa, ta, wa, za);
  loop L_f {
    var ab:long = f[5];
    var bb:long = 0L;
    var cb:long = ab;
    var db:long = bb;
    var eb:int = cb < db;
    var fb:int = 1;
    var gb:int = eb & fb;
    if (eqz(gb)) goto B_e;
    var hb:long = f[1];
    var ib:long = 4294967296L;
    var jb:long = hb - ib;
    f[1] = jb;
    var kb:long = f[8];
    var lb:long = 32L;
    var mb:long = kb << lb;
    f[6] = mb;
    var nb:long = f[5];
    var ob:long = f[4];
    var pb:long = f[7];
    var qb:long = f[6];
    var rb:int = 40;
    var sb:int = f + rb;
    var tb:int = sb;
    var ub:int = 32;
    var vb:int = f + ub;
    var wb:int = vb;
    add128(nb, ob, pb, qb, tb, wb);
    continue L_f;
  }
  unreachable;
  label B_e:
  var xb:long = f[5];
  var yb:long = 32L;
  var zb:long = xb << yb;
  var ac:long = f[4];
  var bc:long = 32L;
  var cc:long = ac >> bc;
  var dc:long = zb | cc;
  f[5] = dc;
  var ec:long = f[7];
  var fc:long = 32L;
  var gc:long = ec << fc;
  var hc:long = f[5];
  var ic:long = gc;
  var jc:long = hc;
  var kc:int = ic <= jc;
  var lc:int = 1;
  var mc:int = kc & lc;
  if (eqz(mc)) goto B_h;
  var nc:long = 4294967295L;
  oc = nc;
  goto B_g;
  label B_h:
  var pc:long = f[5];
  var qc:long = f[7];
  var rc:long = pc / qc;
  oc = rc;
  label B_g:
  var sc:long = oc;
  var tc:long = f[1];
  var uc:long = tc | sc;
  f[1] = uc;
  var vc:long = f[1];
  f[11] = vc;
  label B_a:
  var wc:long = f[11];
  var xc:int = 96;
  var yc:int = f + xc;
  stack_pointer = yc;
  return wc;
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
    var i:int = 22;
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
    var ba:long = float64_div(z, aa);
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
  var ya:int = 563;
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
  var k:int = 528;
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

function legalstub_add128(a:int, b:int, c:int, d:int, e:int, f:int, g:int, h:int, i:int, j:int) {
  add128(i64_extend_i32_u(a) | i64_extend_i32_u(b) << 32L,
         i64_extend_i32_u(c) | i64_extend_i32_u(d) << 32L,
         i64_extend_i32_u(e) | i64_extend_i32_u(f) << 32L,
         i64_extend_i32_u(g) | i64_extend_i32_u(h) << 32L,
         i,
         j)
}

function legalstub_sub128(a:int, b:int, c:int, d:int, e:int, f:int, g:int, h:int, i:int, j:int) {
  sub128(i64_extend_i32_u(a) | i64_extend_i32_u(b) << 32L,
         i64_extend_i32_u(c) | i64_extend_i32_u(d) << 32L,
         i64_extend_i32_u(e) | i64_extend_i32_u(f) << 32L,
         i64_extend_i32_u(g) | i64_extend_i32_u(h) << 32L,
         i,
         j)
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

function legalstub_float64_div(a:int, b:int, c:int, d:int):int {
  var e:long = 
    float64_div(i64_extend_i32_u(a) | i64_extend_i32_u(b) << 32L,
                i64_extend_i32_u(c) | i64_extend_i32_u(d) << 32L);
  setTempRet0(i32_wrap_i64(e >> 32L));
  return i32_wrap_i64(e);
}

function legalstub_ullong_to_double(a:int, b:int):double {
  return 
    ullong_to_double(i64_extend_i32_u(a) | i64_extend_i32_u(b) << 32L)
}

