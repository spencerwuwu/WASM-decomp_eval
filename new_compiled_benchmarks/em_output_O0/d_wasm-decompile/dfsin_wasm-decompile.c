import memory env_memory;

import global stack_pointer:int;
import global memory_base:int;
import global table_base:int;
export import global float_exception_flags:int;
export import global float_rounding_mode:int;
export import global startTimer:int;
export import global test_in:int;
export import global test_out:int;
export import global endTimer:int;
global float_exception_flags_1:int = 1652;
global float_rounding_mode_1:int = 1648;
global startTimer_1:int = 1656;
global test_in_1:int = 0;
global test_out_1:int = 288;
global endTimer_1:int = 1664;

data data(offset: memory_base) =
  "\00\00\00\00\00\00\00\00\c1U\ed\fc\17W\c6?\c1U\ed\fc\17W\d6?Q\00\b2\fd"
  "Q\c1\e0?\c1U\ed\fc\17W\e6?1\ab(\fc\dd\ec\eb?Q\00\b2\fdQ\c1\f0?\09\abO\fd"
  "4\8c\f3?\c1U\ed\fc\17W\f6?y\00\8b\fc\fa!\f9?1\ab(\fc\dd\ec\fb?\e9U\c6\fb"
  "\c0\b7\fe?Q\00\b2\fdQ\c1\00@\ad\d5\80}\c3&\02@\09\abO\fd4\8c\03@e\80\1e"
  "}\a6\f1\04@\c1U\ed\fc\17W\06@\1d+\bc|\89\bc\07@y\00\8b\fc\fa!\09@\d5\d5"
  "Y|l\87\0a@1\ab(\fc\dd\ec\0b@\8d\80\f7{OR\0d@\e9U\c6\fb\c0\b7\0e@\a3\95"
  "\ca=\99\0e\10@Q\00\b2\fdQ\c1\10@\ffj\99\bd\0at\11@\ad\d5\80}\c3&\12@[@"
  "h=|\d9\12@\09\abO\fd4\8c\13@\b7\157\bd\ed>\14@e\80\1e}\a6\f1\14@\13\eb"
  "\05=_\a4\15@\c1U\ed\fc\17W\16@o\c0\d4\bc\d0\09\17@\1d+\bc|\89\bc\17@\cb"
  "\95\a3<Bo\18@\00\00\00\00\00\00\00\00\cd\adZ3\1a:\c6?>\bf\09+\a8\e3\d5"
  "?\91\aa\f9\91\ff\ff\df?\e3B\c2\16\b7\91\e4?\a6\14&go\83\e8?\ed+\0b\c4z"
  "\b6\eb?\ad(~\12\f6\11\ee?\c0\fa\dfj\8b\83\ef?\aa\d7\cb\e1\ff\ff\ef?\89"
  "y\14\b0\8b\83\ef?\b4b\d9\92\f6\11\ee?-\14\c0w{\b6\eb?i\a8N\9dp\83\e8?\e8"
  "\d8r\1d\b8\91\e4?\c8C_\ea\00\00\e0?\c5\90\05N\aa\e3\d5?,U\89!\1d:\c6?\91"
  "KE\fc\df\ae\a6>|\b3\ddD\14:\c6\bf>\8f\8f\e6\a4\e3\d5\bfk\f9LI\fd\ff\df"
  "\bf\d3\a3\b9\1c\b6\91\e4\bf\15\f8\dc\b2n\83\e8\bf2\ae\0atz\b6\eb\bfW!-"
  "\91\f5\11\ee\bf\fcJ\c6\1a\8b\83\ef\bf\8f\dc\e5\c2\ff\ff\ef\bf\ea\e7\a2"
  "^\8b\83\ef\bf'\ae-\11\f7\11\ee\bfJ\cb1,|\b6\eb\bf\81\d7onq\83\e8\bfV]\1b"
  "\cd\b9\91\e4\bf\0d\a3\0c\1d\02\00\e0\bf\f7\cai\0a\ad\e3\d5\bf\ddc\88\c4"
  "#:\c6\bfError return from gettimeofday: %d\00%0.6f\0a\00\00\00\00\00\00"
  "\00\08\00\00\00\07\00\00\00\06\00\00\00\06\00\00\00\05\00\00\00\05\00\00"
  "\00\05\00\00\00\05\00\00\00\04\00\00\00\04\00\00\00\04\00\00\00\04\00\00"
  "\00\04\00\00\00\04\00\00\00\04\00\00\00\04\00\00\00\03\00\00\00\03\00\00"
  "\00\03\00\00\00\03\00\00\00\03\00\00\00\03\00\00\00\03\00\00\00\03\00\00"
  "\00\03\00\00\00\03\00\00\00\03\00\00\00\03\00\00\00\03\00\00\00\03\00\00"
  "\00\03\00\00\00\03\00\00\00\02\00\00\00\02\00\00\00\02\00\00\00\02\00\00"
  "\00\02\00\00\00\02\00\00\00\02\00\00\00\02\00\00\00\02\00\00\00\02\00\00"
  "\00\02\00\00\00\02\00\00\00\02\00\00\00\02\00\00\00\02\00\00\00\02\00\00"
  "\00\02\00\00\00\02\00\00\00\02\00\00\00\02\00\00\00\02\00\00\00\02\00\00"
  "\00\02\00\00\00\02\00\00\00\02\00\00\00\02\00\00\00\02\00\00\00\02\00\00"
  "\00\02\00\00\00\02\00\00\00\02\00\00\00\02\00\00\00\01\00\00\00\01\00\00"
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
  "\00\01\00\00\00\01\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
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
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00";

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

export function shift64ExtraRightJamming(a:long, b:long, c:int, d:int, e:int) {
  var f:int = stack_pointer;
  var g:int = 64;
  var h:int = f - g;
  h[7]:long = a;
  h[6]:long = b;
  h[11]:int = c;
  h[10]:int = d;
  h[9]:int = e;
  var i:int = h[11]:int;
  var j:int = 0;
  var k:int = j - i;
  var l:int = 63;
  var m:int = k & l;
  h[3]:int = m;
  var n:int = h[11]:int;
  if (n) goto B_b;
  var o:long = h[6]:long;
  h[2]:long = o;
  var p:long = h[7]:long;
  h[3]:long = p;
  goto B_a;
  label B_b:
  var q:int = h[11]:int;
  var r:int = 64;
  var s:int = q;
  var t:int = r;
  var u:int = s < t;
  var v:int = 1;
  var w:int = u & v;
  if (eqz(w)) goto B_d;
  var x:long = h[7]:long;
  var y:int = h[3]:int;
  var z:int = y;
  var aa:long = i64_extend_i32_u(z);
  var ba:long = x << aa;
  var ca:long = h[6]:long;
  var da:long = 0L;
  var ea:long = ca;
  var fa:long = da;
  var ga:int = ea != fa;
  var ha:int = 1;
  var ia:int = ga & ha;
  var ja:int = ia;
  var ka:long = i64_extend_i32_s(ja);
  var la:long = ba | ka;
  h[2]:long = la;
  var ma:long = h[7]:long;
  var na:int = h[11]:int;
  var oa:int = na;
  var pa:long = i64_extend_i32_u(oa);
  var qa:long = ma >> pa;
  h[3]:long = qa;
  goto B_c;
  label B_d:
  var ra:int = h[11]:int;
  var sa:int = 64;
  var ta:int = ra;
  var ua:int = sa;
  var va:int = ta == ua;
  var wa:int = 1;
  var xa:int = va & wa;
  if (eqz(xa)) goto B_f;
  var ya:long = h[7]:long;
  var za:long = h[6]:long;
  var ab:long = 0L;
  var bb:long = za;
  var cb:long = ab;
  var db:int = bb != cb;
  var eb:int = 1;
  var fb:int = db & eb;
  var gb:int = fb;
  var hb:long = i64_extend_i32_s(gb);
  var ib:long = ya | hb;
  h[2]:long = ib;
  goto B_e;
  label B_f:
  var jb:long = h[7]:long;
  var kb:long = h[6]:long;
  var lb:long = jb | kb;
  var mb:long = 0L;
  var nb:long = lb;
  var ob:long = mb;
  var pb:int = nb != ob;
  var qb:int = 1;
  var rb:int = pb & qb;
  var sb:int = rb;
  var tb:long = i64_extend_i32_s(sb);
  h[2]:long = tb;
  label B_e:
  var ub:long = 0L;
  h[3]:long = ub;
  label B_c:
  label B_a:
  var vb:long = h[2]:long;
  var wb:long_ptr = h[9]:int;
  wb[0] = vb;
  var xb:long = h[3]:long;
  var yb:long_ptr = h[10]:int;
  yb[0] = xb;
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
  var ga:int = 624;
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

export function int32_to_float64(a:int):long {
  var r:int;
  var b:int = stack_pointer;
  var c:int = 32;
  var d:{ a:long, b:int, c:int, d:int, e:int, f:long } = b - c;
  stack_pointer = d;
  d.e = a;
  var e:int = d.e;
  if (e) goto B_b;
  var f:long = 0L;
  d.f = f;
  goto B_a;
  label B_b:
  var g:int = d.e;
  var h:int = 0;
  var i:int = g;
  var j:int = h;
  var k:int = i < j;
  var l:int = 1;
  var m:int = k & l;
  d.d = m;
  var n:int = d.d;
  if (eqz(n)) goto B_d;
  var o:int = d.e;
  var p:int = 0;
  var q:int = p - o;
  r = q;
  goto B_c;
  label B_d:
  var s:int = d.e;
  r = s;
  label B_c:
  var t:int = r;
  d.c = t;
  var u:int = d.c;
  var v:int = countLeadingZeros32(u);
  var w:int = 21;
  var x:int = v + w;
  d.b = x;
  var y:int = d.c;
  var z:int = y;
  var aa:long = i64_extend_i32_u(z);
  d.a = aa;
  var ba:int = d.d;
  var ca:int = d.b;
  var da:int = 1074;
  var ea:int = da - ca;
  var fa:long = d.a;
  var ga:int = d.b;
  var ha:int = ga;
  var ia:long = i64_extend_i32_u(ha);
  var ja:long = fa << ia;
  var ka:long = packFloat64(ba, ea, ja);
  d.f = ka;
  label B_a:
  var la:long = d.f;
  var ma:int = 32;
  var na:int = d + ma;
  stack_pointer = na;
  return la;
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

export function float64_le(a:long, b:long):int {
  var c:int = stack_pointer;
  var d:int = 32;
  var e:int = c - d;
  stack_pointer = e;
  e[2]:long = a;
  e[1]:long = b;
  var f:long = e[2]:long;
  var g:int = extractFloat64Exp(f);
  var h:int = 2047;
  var i:int = g;
  var j:int = h;
  var k:int = i == j;
  var l:int = 1;
  var m:int = k & l;
  if (eqz(m)) goto B_d;
  var n:long = e[2]:long;
  var o:long = extractFloat64Frac(n);
  var p:long = 0L;
  var q:long = o;
  var r:long = p;
  var s:int = q != r;
  var t:int = 1;
  var u:int = s & t;
  if (u) goto B_c;
  label B_d:
  var v:long = e[1]:long;
  var w:int = extractFloat64Exp(v);
  var x:int = 2047;
  var y:int = w;
  var z:int = x;
  var aa:int = y == z;
  var ba:int = 1;
  var ca:int = aa & ba;
  if (eqz(ca)) goto B_b;
  var da:long = e[1]:long;
  var ea:long = extractFloat64Frac(da);
  var fa:long = 0L;
  var ga:long = ea;
  var ha:long = fa;
  var ia:int = ga != ha;
  var ja:int = 1;
  var ka:int = ia & ja;
  if (eqz(ka)) goto B_b;
  label B_c:
  var la:int = 16;
  float_raise(la);
  var ma:int = 0;
  e[7]:int = ma;
  goto B_a;
  label B_b:
  var na:long = e[2]:long;
  var oa:int = extractFloat64Sign(na);
  e[1]:int = oa;
  var pa:long = e[1]:long;
  var qa:int = extractFloat64Sign(pa);
  e[0]:int = qa;
  var ra:int = e[1]:int;
  var sa:int = e[0]:int;
  var ta:int = ra;
  var ua:int = sa;
  var va:int = ta != ua;
  var wa:int = 1;
  var xa:int = va & wa;
  if (eqz(xa)) goto B_e;
  var ya:int = e[1]:int;
  var za:int = 1;
  var ab:int = za;
  if (ya) goto B_f;
  var bb:long = e[2]:long;
  var cb:long = e[1]:long;
  var db:long = bb | cb;
  var eb:long = 1L;
  var fb:long = db << eb;
  var gb:long = 0L;
  var hb:long = fb;
  var ib:long = gb;
  var jb:int = hb == ib;
  ab = jb;
  label B_f:
  var kb:int = ab;
  var lb:int = 1;
  var mb:int = kb & lb;
  e[7]:int = mb;
  goto B_a;
  label B_e:
  var nb:long = e[2]:long;
  var ob:long = e[1]:long;
  var pb:long = nb;
  var qb:long = ob;
  var rb:int = pb == qb;
  var sb:int = 1;
  var tb:int = 1;
  var ub:int = rb & tb;
  var vb:int = sb;
  if (ub) goto B_g;
  var wb:int = e[1]:int;
  var xb:long = e[2]:long;
  var yb:long = e[1]:long;
  var zb:long = xb;
  var ac:long = yb;
  var bc:int = zb < ac;
  var cc:int = 1;
  var dc:int = bc & cc;
  var ec:int = wb ^ dc;
  var fc:int = 0;
  var gc:int = ec;
  var hc:int = fc;
  var ic:int = gc != hc;
  vb = ic;
  label B_g:
  var jc:int = vb;
  var kc:int = 1;
  var lc:int = jc & kc;
  e[7]:int = lc;
  label B_a:
  var mc:int = e[7]:int;
  var nc:int = 32;
  var oc:int = e + nc;
  stack_pointer = oc;
  return mc;
}

export function float64_ge(a:long, b:long):int {
  var c:int = stack_pointer;
  var d:int = 16;
  var e:{ a:long, b:long } = c - d;
  stack_pointer = e;
  e.b = a;
  e.a = b;
  var f:long = e.a;
  var g:long = e.b;
  var h:int = float64_le(f, g);
  var i:int = 16;
  var j:int = e + i;
  stack_pointer = j;
  return h;
}

export function float64_neg(a:long):long {
  var b:int = stack_pointer;
  var c:int = 16;
  var d:long_ptr = b - c;
  d[1] = a;
  var e:long = d[1];
  var f:long = -1L;
  var g:long = e ^ f;
  var h:long = -9223372036854775808L;
  var i:long = g & h;
  var j:long = d[1];
  var k:long = 9223372036854775807L;
  var l:long = j & k;
  var m:long = i | l;
  return m;
}

export function float64_abs(a:long):long {
  var b:int = stack_pointer;
  var c:int = 16;
  var d:long_ptr = b - c;
  d[1] = a;
  var e:long = d[1];
  var f:long = 9223372036854775807L;
  var g:long = e & f;
  return g;
}

export function local_sin(a:long):long {
  var b:int = stack_pointer;
  var c:int = 48;
  var d:int = b - c;
  stack_pointer = d;
  d[5]:long = a;
  var e:long = d[5]:long;
  d[3]:long = e;
  d[4]:long = e;
  var f:int = 1;
  d[3]:int = f;
  var g:long = d[5]:long;
  var h:long = d[5]:long;
  var i:long = float64_mul(g, h);
  var j:long = float64_neg(i);
  d[2]:long = j;
  loop L_a {
    var k:long = d[3]:long;
    var l:long = d[2]:long;
    var m:long = float64_mul(k, l);
    var n:int = d[3]:int;
    var o:int = 1;
    var p:int = n << o;
    var q:int = d[3]:int;
    var r:int = 1;
    var s:int = q << r;
    var t:int = 1;
    var u:int = s + t;
    var v:int = p * u;
    var w:long = int32_to_float64(v);
    var x:long = float64_div(m, w);
    d[3]:long = x;
    var y:long = d[4]:long;
    var z:long = d[3]:long;
    var aa:long = float64_add(y, z);
    d[4]:long = aa;
    var ba:int = d[3]:int;
    var ca:int = 1;
    var da:int = ba + ca;
    d[3]:int = da;
    var ea:long = d[3]:long;
    var fa:long = float64_abs(ea);
    var ga:long = 4532020583610935537L;
    var ha:int = float64_ge(fa, ga);
    if (ha) continue L_a;
  }
  var ia:long = d[4]:long;
  var ja:int = 48;
  var ka:int = d + ja;
  stack_pointer = ka;
  return ia;
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
  var b:int = 32;
  var c:int = a - b;
  stack_pointer = c;
  var d:int = 0;
  c[7]:int = d;
  var e:double = rtclock();
  var f:double_ptr = startTimer;
  f[0] = e;
  var g:int = 0;
  c[6]:int = g;
  loop L_b {
    var h:int = c[6]:int;
    var i:int = 36;
    var j:int = h;
    var k:int = i;
    var l:int = j < k;
    var m:int = 1;
    var n:int = l & m;
    if (eqz(n)) goto B_a;
    var o:int = c[6]:int;
    var p:int = 3;
    var q:int = o << p;
    var r:int = test_in;
    var s:long_ptr = r + q;
    var t:long = s[0];
    var u:long = local_sin(t);
    c[2]:long = u;
    var v:long = c[2]:long;
    var w:int = c[6]:int;
    var x:int = w << p;
    var y:int = test_out;
    var z:long_ptr = y + x;
    var aa:long = z[0];
    var ba:long = v;
    var ca:long = aa;
    var da:int = ba != ca;
    var ea:int = 1;
    var fa:int = da & ea;
    var ga:int = c[7]:int;
    var ha:int = ga + fa;
    c[7]:int = ha;
    var ia:int = c[6]:int;
    var ja:int = 1;
    var ka:int = ia + ja;
    c[6]:int = ka;
    continue L_b;
  }
  unreachable;
  label B_a:
  var la:double = rtclock();
  var ma:double_ptr = endTimer;
  ma[0] = la;
  var na:double = ma[0];
  var oa:double_ptr = startTimer;
  var pa:double = oa[0];
  var qa:double = na - pa;
  c[0]:double = qa;
  var ra:int = 611;
  var sa:int = memory_base;
  var ta:int = sa + ra;
  printf(ta, c);
  var ua:int = c[7]:int;
  var va:int = 32;
  var wa:int = c + va;
  stack_pointer = wa;
  return ua;
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
  var k:int = 576;
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

function legalstub_shift64ExtraRightJamming(a:int, b:int, c:int, d:int, e:int, f:int, g:int) {
  shift64ExtraRightJamming(
    i64_extend_i32_u(a) | i64_extend_i32_u(b) << 32L,
    i64_extend_i32_u(c) | i64_extend_i32_u(d) << 32L,
    e,
    f,
    g)
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

function legalstub_normalizeRoundAndPackFloat64(a:int, b:int, c:int, d:int):int {
  var e:long = normalizeRoundAndPackFloat64(
                 a,
                 b,
                 i64_extend_i32_u(c) | i64_extend_i32_u(d) << 32L);
  setTempRet0(i32_wrap_i64(e >> 32L));
  return i32_wrap_i64(e);
}

function legalstub_int32_to_float64(a:int):int {
  var b:long = int32_to_float64(a);
  setTempRet0(i32_wrap_i64(b >> 32L));
  return i32_wrap_i64(b);
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

function legalstub_float64_mul(a:int, b:int, c:int, d:int):int {
  var e:long = 
    float64_mul(i64_extend_i32_u(a) | i64_extend_i32_u(b) << 32L,
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

function legalstub_float64_le(a:int, b:int, c:int, d:int):int {
  return float64_le(i64_extend_i32_u(a) | i64_extend_i32_u(b) << 32L,
                    i64_extend_i32_u(c) | i64_extend_i32_u(d) << 32L)
}

function legalstub_float64_ge(a:int, b:int, c:int, d:int):int {
  return float64_ge(i64_extend_i32_u(a) | i64_extend_i32_u(b) << 32L,
                    i64_extend_i32_u(c) | i64_extend_i32_u(d) << 32L)
}

function legalstub_float64_neg(a:int, b:int):int {
  var c:long = 
    float64_neg(i64_extend_i32_u(a) | i64_extend_i32_u(b) << 32L);
  setTempRet0(i32_wrap_i64(c >> 32L));
  return i32_wrap_i64(c);
}

function legalstub_float64_abs(a:int, b:int):int {
  var c:long = 
    float64_abs(i64_extend_i32_u(a) | i64_extend_i32_u(b) << 32L);
  setTempRet0(i32_wrap_i64(c >> 32L));
  return i32_wrap_i64(c);
}

function legalstub_local_sin(a:int, b:int):int {
  var c:long = 
    local_sin(i64_extend_i32_u(a) | i64_extend_i32_u(b) << 32L);
  setTempRet0(i32_wrap_i64(c >> 32L));
  return i32_wrap_i64(c);
}

function legalstub_ullong_to_double(a:int, b:int):double {
  return 
    ullong_to_double(i64_extend_i32_u(a) | i64_extend_i32_u(b) << 32L)
}

