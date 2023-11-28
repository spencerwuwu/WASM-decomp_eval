import memory env_memory;

import global stack_pointer:int;
import global memory_base:int;
import global table_base:int;
import global stderr:int;

data rodata(offset: memory_base) =
  "y\00begin dump: %s\00%0.2lf \00\0aend   dump: %s\0a\00==BEGIN DUMP_ARR"
  "AYS==\0a\00==END   DUMP_ARRAYS==\0a\00";

import function strcmp(a:int, b:int):int;

import function free(a:int);

import function fprintf(a:int, b:int, c:int):int;

import function legalimport_polybench_alloc_data(a:int, b:int, c:int):int;

export function wasm_call_ctors() {
}

export function wasm_apply_data_relocs() {
}

export function kernel_gesummv(a:int, b:double, c:double, d:int, e:int, f:int, g:int, h:int) {
  var i:int = stack_pointer;
  var j:int = 64;
  var k:int = i - j;
  k[15]:int = a;
  k[6]:double = b;
  k[5]:double = c;
  k[9]:int = d;
  k[8]:int = e;
  k[7]:int = f;
  k[6]:int = g;
  k[5]:int = h;
  var l:int = 0;
  k[4]:int = l;
  loop L_b {
    var m:int = k[4]:int;
    var n:int = k[15]:int;
    var o:int = m;
    var p:int = n;
    var q:int = o < p;
    var r:int = 1;
    var s:int = q & r;
    if (eqz(s)) goto B_a;
    var t:int = k[7]:int;
    var u:int = k[4]:int;
    var v:int = 3;
    var w:int = u << v;
    var x:double_ptr = t + w;
    var y:int = 0;
    var z:double = f64_convert_i32_s(y);
    x[0] = z;
    var aa:int = k[5]:int;
    var ba:int = k[4]:int;
    var ca:int = 3;
    var da:int = ba << ca;
    var ea:double_ptr = aa + da;
    var fa:int = 0;
    var ga:double = f64_convert_i32_s(fa);
    ea[0] = ga;
    var ha:int = 0;
    k[3]:int = ha;
    loop L_d {
      var ia:int = k[3]:int;
      var ja:int = k[15]:int;
      var ka:int = ia;
      var la:int = ja;
      var ma:int = ka < la;
      var na:int = 1;
      var oa:int = ma & na;
      if (eqz(oa)) goto B_c;
      var pa:int = k[9]:int;
      var qa:int = k[4]:int;
      var ra:int = 10400;
      var sa:int = qa * ra;
      var ta:int = pa + sa;
      var ua:int = k[3]:int;
      var va:int = 3;
      var wa:int = ua << va;
      var xa:double_ptr = ta + wa;
      var ya:double = xa[0];
      var za:int = k[6]:int;
      var ab:int = k[3]:int;
      var bb:int = 3;
      var cb:int = ab << bb;
      var db:double_ptr = za + cb;
      var eb:double = db[0];
      var fb:int = k[7]:int;
      var gb:int = k[4]:int;
      var hb:int = 3;
      var ib:int = gb << hb;
      var jb:double_ptr = fb + ib;
      var kb:double = jb[0];
      var lb:double = ya * eb;
      var mb:double = lb + kb;
      var nb:int = k[7]:int;
      var ob:int = k[4]:int;
      var pb:int = 3;
      var qb:int = ob << pb;
      var rb:double_ptr = nb + qb;
      rb[0] = mb;
      var sb:int = k[8]:int;
      var tb:int = k[4]:int;
      var ub:int = 10400;
      var vb:int = tb * ub;
      var wb:int = sb + vb;
      var xb:int = k[3]:int;
      var yb:int = 3;
      var zb:int = xb << yb;
      var ac:double_ptr = wb + zb;
      var bc:double = ac[0];
      var cc:int = k[6]:int;
      var dc:int = k[3]:int;
      var ec:int = 3;
      var fc:int = dc << ec;
      var gc:double_ptr = cc + fc;
      var hc:double = gc[0];
      var ic:int = k[5]:int;
      var jc:int = k[4]:int;
      var kc:int = 3;
      var lc:int = jc << kc;
      var mc:double_ptr = ic + lc;
      var nc:double = mc[0];
      var oc:double = bc * hc;
      var pc:double = oc + nc;
      var qc:int = k[5]:int;
      var rc:int = k[4]:int;
      var sc:int = 3;
      var tc:int = rc << sc;
      var uc:double_ptr = qc + tc;
      uc[0] = pc;
      var vc:int = k[3]:int;
      var wc:int = 1;
      var xc:int = vc + wc;
      k[3]:int = xc;
      continue L_d;
    }
    unreachable;
    label B_c:
    var yc:double = k[6]:double;
    var zc:int = k[7]:int;
    var ad:int = k[4]:int;
    var bd:int = 3;
    var cd:int = ad << bd;
    var dd:double_ptr = zc + cd;
    var ed:double = dd[0];
    var fd:double = k[5]:double;
    var gd:int = k[5]:int;
    var hd:int = k[4]:int;
    var id:int = 3;
    var jd:int = hd << id;
    var kd:double_ptr = gd + jd;
    var ld:double = kd[0];
    var md:double = fd * ld;
    var nd:double = yc * ed;
    var od:double = nd + md;
    var pd:int = k[5]:int;
    var qd:int = k[4]:int;
    var rd:int = 3;
    var sd:int = qd << rd;
    var td:double_ptr = pd + sd;
    td[0] = od;
    var ud:int = k[4]:int;
    var vd:int = 1;
    var wd:int = ud + vd;
    k[4]:int = wd;
    continue L_b;
  }
  unreachable;
  label B_a:
}

export function submain(a:int, b:int):int {
  var c:int = stack_pointer;
  var d:int = 64;
  var e:int = c - d;
  stack_pointer = e;
  e[15]:int = a;
  e[14]:int = b;
  var f:int = 1300;
  e[13]:int = f;
  var g:long = 1690000L;
  var h:int = 8;
  var i:int = legalfunc_polybench_alloc_data(g, h);
  e[7]:int = i;
  var j:long = 1690000L;
  var k:int = 8;
  var l:int = legalfunc_polybench_alloc_data(j, k);
  e[6]:int = l;
  var m:long = 1300L;
  var n:int = 8;
  var o:int = legalfunc_polybench_alloc_data(m, n);
  e[5]:int = o;
  var p:long = 1300L;
  var q:int = 8;
  var r:int = legalfunc_polybench_alloc_data(p, q);
  e[4]:int = r;
  var s:long = 1300L;
  var t:int = 8;
  var u:int = legalfunc_polybench_alloc_data(s, t);
  e[3]:int = u;
  var v:int = e[13]:int;
  var w:int = e[7]:int;
  var x:int = e[6]:int;
  var y:int = e[4]:int;
  var z:int = 40;
  var aa:int = e + z;
  var ba:int = aa;
  var ca:int = 32;
  var da:int = e + ca;
  var ea:int = da;
  init_array(v, ba, ea, w, x, y);
  var fa:int = e[13]:int;
  var ga:double = e[5]:double;
  var ha:double = e[4]:double;
  var ia:int = e[7]:int;
  var ja:int = e[6]:int;
  var ka:int = e[5]:int;
  var la:int = e[4]:int;
  var ma:int = e[3]:int;
  kernel_gesummv(fa, ga, ha, ia, ja, ka, la, ma);
  var na:int = e[15]:int;
  var oa:int = 42;
  var pa:int = na;
  var qa:int = oa;
  var ra:int = pa > qa;
  var sa:int = 1;
  var ta:int = ra & sa;
  if (eqz(ta)) goto B_a;
  var ua:int_ptr = e[14]:int;
  var va:int = ua[0];
  var wa:int = 87;
  var xa:int = memory_base;
  var ya:int = xa + wa;
  var za:int = strcmp(va, ya);
  if (za) goto B_a;
  var ab:int = e[13]:int;
  var bb:int = e[3]:int;
  print_array(ab, bb);
  label B_a:
  var cb:int = e[7]:int;
  free(cb);
  var db:int = e[6]:int;
  free(db);
  var eb:int = e[5]:int;
  free(eb);
  var fb:int = e[4]:int;
  free(fb);
  var gb:int = e[3]:int;
  free(gb);
  var hb:int = 0;
  var ib:int = 64;
  var jb:int = e + ib;
  stack_pointer = jb;
  return hb;
}

function init_array(a:int, b:int, c:int, d:int, e:int, f:int) {
  var g:int = stack_pointer;
  var h:int = 32;
  var i:{ a:int, b:int, c:int, d:int, e:int, f:int, g:int, h:int } = 
    g - h;
  i.h = a;
  i.g = b;
  i.f = c;
  i.e = d;
  i.d = e;
  i.c = f;
  var j:double_ptr = i.g;
  var k:double = 1.5;
  j[0] = k;
  var l:double_ptr = i.f;
  var m:double = 1.2;
  l[0] = m;
  var n:int = 0;
  i.b = n;
  loop L_b {
    var o:int = i.b;
    var p:int = i.h;
    var q:int = o;
    var r:int = p;
    var s:int = q < r;
    var t:int = 1;
    var u:int = s & t;
    if (eqz(u)) goto B_a;
    var v:int = i.b;
    var w:int = i.h;
    var x:int = v % w;
    var y:double = f64_convert_i32_s(x);
    var z:int = i.h;
    var aa:double = f64_convert_i32_s(z);
    var ba:double = y / aa;
    var ca:int = i.c;
    var da:int = i.b;
    var ea:int = 3;
    var fa:int = da << ea;
    var ga:double_ptr = ca + fa;
    ga[0] = ba;
    var ha:int = 0;
    i.a = ha;
    loop L_d {
      var ia:int = i.a;
      var ja:int = i.h;
      var ka:int = ia;
      var la:int = ja;
      var ma:int = ka < la;
      var na:int = 1;
      var oa:int = ma & na;
      if (eqz(oa)) goto B_c;
      var pa:int = i.b;
      var qa:int = i.a;
      var ra:int = pa * qa;
      var sa:int = 1;
      var ta:int = ra + sa;
      var ua:int = i.h;
      var va:int = ta % ua;
      var wa:double = f64_convert_i32_s(va);
      var xa:int = i.h;
      var ya:double = f64_convert_i32_s(xa);
      var za:double = wa / ya;
      var ab:int = i.e;
      var bb:int = i.b;
      var cb:int = 10400;
      var db:int = bb * cb;
      var eb:int = ab + db;
      var fb:int = i.a;
      var gb:int = 3;
      var hb:int = fb << gb;
      var ib:double_ptr = eb + hb;
      ib[0] = za;
      var jb:int = i.b;
      var kb:int = i.a;
      var lb:int = jb * kb;
      var mb:int = 2;
      var nb:int = lb + mb;
      var ob:int = i.h;
      var pb:int = nb % ob;
      var qb:double = f64_convert_i32_s(pb);
      var rb:int = i.h;
      var sb:double = f64_convert_i32_s(rb);
      var tb:double = qb / sb;
      var ub:int = i.d;
      var vb:int = i.b;
      var wb:int = 10400;
      var xb:int = vb * wb;
      var yb:int = ub + xb;
      var zb:int = i.a;
      var ac:int = 3;
      var bc:int = zb << ac;
      var cc:double_ptr = yb + bc;
      cc[0] = tb;
      var dc:int = i.a;
      var ec:int = 1;
      var fc:int = dc + ec;
      i.a = fc;
      continue L_d;
    }
    unreachable;
    label B_c:
    var gc:int = i.b;
    var hc:int = 1;
    var ic:int = gc + hc;
    i.b = ic;
    continue L_b;
  }
  unreachable;
  label B_a:
}

function print_array(a:int, b:int) {
  var c:int = stack_pointer;
  var d:int = 48;
  var e:int = c - d;
  stack_pointer = e;
  e[11]:int = a;
  e[10]:int = b;
  var f:int_ptr = stderr;
  var g:int = f[0];
  var h:int = 42;
  var i:int = memory_base;
  var j:int = i + h;
  var k:int = 0;
  fprintf(g, j, k);
  var l:int = f[0];
  var m:int = 0;
  var n:int = memory_base;
  var o:int = n + m;
  e[8]:int = o;
  var p:int = 2;
  var q:int = n + p;
  var r:int = 32;
  var s:int = e + r;
  fprintf(l, q, s);
  var t:int = 0;
  e[9]:int = t;
  loop L_b {
    var u:int = e[9]:int;
    var v:int = e[11]:int;
    var w:int = u;
    var x:int = v;
    var y:int = w < x;
    var z:int = 1;
    var aa:int = y & z;
    if (eqz(aa)) goto B_a;
    var ba:int = e[9]:int;
    var ca:int = 20;
    var da:int = ba % ca;
    if (da) goto B_c;
    var ea:int_ptr = stderr;
    var fa:int = ea[0];
    var ga:int = 86;
    var ha:int = memory_base;
    var ia:int = ha + ga;
    var ja:int = 0;
    fprintf(fa, ia, ja);
    label B_c:
    var ka:int_ptr = stderr;
    var la:int = ka[0];
    var ma:int = e[10]:int;
    var na:int = e[9]:int;
    var oa:int = 3;
    var pa:int = na << oa;
    var qa:double_ptr = ma + pa;
    var ra:double = qa[0];
    e[0]:double = ra;
    var sa:int = 17;
    var ta:int = memory_base;
    var ua:int = ta + sa;
    fprintf(la, ua, e);
    var va:int = e[9]:int;
    var wa:int = 1;
    var xa:int = va + wa;
    e[9]:int = xa;
    continue L_b;
  }
  unreachable;
  label B_a:
  var ya:int_ptr = stderr;
  var za:int = ya[0];
  var ab:int = 0;
  var bb:int = memory_base;
  var cb:int = bb + ab;
  e[4]:int = cb;
  var db:int = 25;
  var eb:int = bb + db;
  var fb:int = 16;
  var gb:int = e + fb;
  fprintf(za, eb, gb);
  var hb:int = ya[0];
  var ib:int = 65;
  var jb:int = memory_base;
  var kb:int = jb + ib;
  var lb:int = 0;
  fprintf(hb, kb, lb);
  var mb:int = 48;
  var nb:int = e + mb;
  stack_pointer = nb;
}

function legalfunc_polybench_alloc_data(a:long, b:int):int {
  return legalimport_polybench_alloc_data(i32_wrap_i64(a),
                                          i32_wrap_i64(a >> 32L),
                                          b)
}

