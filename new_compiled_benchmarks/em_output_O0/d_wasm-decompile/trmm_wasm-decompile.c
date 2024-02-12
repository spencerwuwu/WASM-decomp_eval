import memory env_memory;

import global stack_pointer:int;
import global memory_base:int;
import global table_base:int;
import global stderr:int;

data rodata(offset: memory_base) =
  "begin dump: %s\00B\00%0.2lf \00\0aend   dump: %s\0a\00==BEGIN DUMP_ARR"
  "AYS==\0a\00==END   DUMP_ARRAYS==\0a\00";

import function strcmp(a:int, b:int):int;

import function free(a:int);

import function fprintf(a:int, b:int, c:int):int;

import function legalimport_polybench_alloc_data(a:int, b:int, c:int):int;

export function wasm_call_ctors() {
}

export function wasm_apply_data_relocs() {
}

export function kernel_trmm(a:int, b:int, c:double, d:int, e:int) {
  var f:int = stack_pointer;
  var g:int = 48;
  var h:int = f - g;
  h[11]:int = a;
  h[10]:int = b;
  h[4]:double = c;
  h[7]:int = d;
  h[6]:int = e;
  var i:int = 0;
  h[5]:int = i;
  loop L_b {
    var j:int = h[5]:int;
    var k:int = h[11]:int;
    var l:int = j;
    var m:int = k;
    var n:int = l < m;
    var o:int = 1;
    var p:int = n & o;
    if (eqz(p)) goto B_a;
    var q:int = 0;
    h[4]:int = q;
    loop L_d {
      var r:int = h[4]:int;
      var s:int = h[10]:int;
      var t:int = r;
      var u:int = s;
      var v:int = t < u;
      var w:int = 1;
      var x:int = v & w;
      if (eqz(x)) goto B_c;
      var y:int = h[5]:int;
      var z:int = 1;
      var aa:int = y + z;
      h[3]:int = aa;
      loop L_f {
        var ba:int = h[3]:int;
        var ca:int = h[11]:int;
        var da:int = ba;
        var ea:int = ca;
        var fa:int = da < ea;
        var ga:int = 1;
        var ha:int = fa & ga;
        if (eqz(ha)) goto B_e;
        var ia:int = h[7]:int;
        var ja:int = h[3]:int;
        var ka:int = 8000;
        var la:int = ja * ka;
        var ma:int = ia + la;
        var na:int = h[5]:int;
        var oa:int = 3;
        var pa:int = na << oa;
        var qa:double_ptr = ma + pa;
        var ra:double = qa[0];
        var sa:int = h[6]:int;
        var ta:int = h[3]:int;
        var ua:int = 9600;
        var va:int = ta * ua;
        var wa:int = sa + va;
        var xa:int = h[4]:int;
        var ya:int = 3;
        var za:int = xa << ya;
        var ab:double_ptr = wa + za;
        var bb:double = ab[0];
        var cb:int = h[6]:int;
        var db:int = h[5]:int;
        var eb:int = 9600;
        var fb:int = db * eb;
        var gb:int = cb + fb;
        var hb:int = h[4]:int;
        var ib:int = 3;
        var jb:int = hb << ib;
        var kb:double_ptr = gb + jb;
        var lb:double = kb[0];
        var mb:double = ra * bb;
        var nb:double = mb + lb;
        kb[0] = nb;
        var ob:int = h[3]:int;
        var pb:int = 1;
        var qb:int = ob + pb;
        h[3]:int = qb;
        continue L_f;
      }
      unreachable;
      label B_e:
      var rb:double = h[4]:double;
      var sb:int = h[6]:int;
      var tb:int = h[5]:int;
      var ub:int = 9600;
      var vb:int = tb * ub;
      var wb:int = sb + vb;
      var xb:int = h[4]:int;
      var yb:int = 3;
      var zb:int = xb << yb;
      var ac:double_ptr = wb + zb;
      var bc:double = ac[0];
      var cc:double = rb * bc;
      var dc:int = h[6]:int;
      var ec:int = h[5]:int;
      var fc:int = 9600;
      var gc:int = ec * fc;
      var hc:int = dc + gc;
      var ic:int = h[4]:int;
      var jc:int = 3;
      var kc:int = ic << jc;
      var lc:double_ptr = hc + kc;
      lc[0] = cc;
      var mc:int = h[4]:int;
      var nc:int = 1;
      var oc:int = mc + nc;
      h[4]:int = oc;
      continue L_d;
    }
    unreachable;
    label B_c:
    var pc:int = h[5]:int;
    var qc:int = 1;
    var rc:int = pc + qc;
    h[5]:int = rc;
    continue L_b;
  }
  unreachable;
  label B_a:
}

export function submain(a:int, b:int):int {
  var c:int = stack_pointer;
  var d:int = 32;
  var e:{ a:int, b:int, c:double, d:int, e:int, f:int, g:int } = c - d;
  stack_pointer = e;
  e.g = a;
  e.f = b;
  var f:int = 1000;
  e.e = f;
  var g:int = 1200;
  e.d = g;
  var h:long = 1000000L;
  var i:int = 8;
  var j:int = legalfunc_polybench_alloc_data(h, i);
  e.b = j;
  var k:long = 1200000L;
  var l:int = 8;
  var m:int = legalfunc_polybench_alloc_data(k, l);
  e.a = m;
  var n:int = e.e;
  var o:int = e.d;
  var p:int = e.b;
  var q:int = e.a;
  var r:int = 8;
  var s:int = e + r;
  var t:int = s;
  init_array(n, o, t, p, q);
  var u:int = e.e;
  var v:int = e.d;
  var w:double = e.c;
  var x:int = e.b;
  var y:int = e.a;
  kernel_trmm(u, v, w, x, y);
  var z:int = e.g;
  var aa:int = 42;
  var ba:int = z;
  var ca:int = aa;
  var da:int = ba > ca;
  var ea:int = 1;
  var fa:int = da & ea;
  if (eqz(fa)) goto B_a;
  var ga:int_ptr = e.f;
  var ha:int = ga[0];
  var ia:int = 87;
  var ja:int = memory_base;
  var ka:int = ja + ia;
  var la:int = strcmp(ha, ka);
  if (la) goto B_a;
  var ma:int = e.e;
  var na:int = e.d;
  var oa:int = e.a;
  print_array(ma, na, oa);
  label B_a:
  var pa:int = e.b;
  free(pa);
  var qa:int = e.a;
  free(qa);
  var ra:int = 0;
  var sa:int = 32;
  var ta:int = e + sa;
  stack_pointer = ta;
  return ra;
}

function init_array(a:int, b:int, c:int, d:int, e:int) {
  var f:int = stack_pointer;
  var g:int = 32;
  var h:int_ptr = f - g;
  h[7] = a;
  h[6] = b;
  h[5] = c;
  h[4] = d;
  h[3] = e;
  var i:double_ptr = h[5];
  var j:double = 1.5;
  i[0] = j;
  var k:int = 0;
  h[2] = k;
  loop L_b {
    var l:int = h[2];
    var m:int = h[7];
    var n:int = l;
    var o:int = m;
    var p:int = n < o;
    var q:int = 1;
    var r:int = p & q;
    if (eqz(r)) goto B_a;
    var s:int = 0;
    h[1] = s;
    loop L_d {
      var t:int = h[1];
      var u:int = h[2];
      var v:int = t;
      var w:int = u;
      var x:int = v < w;
      var y:int = 1;
      var z:int = x & y;
      if (eqz(z)) goto B_c;
      var aa:int = h[2];
      var ba:int = h[1];
      var ca:int = aa + ba;
      var da:int = h[7];
      var ea:int = ca % da;
      var fa:double = f64_convert_i32_s(ea);
      var ga:int = h[7];
      var ha:double = f64_convert_i32_s(ga);
      var ia:double = fa / ha;
      var ja:int = h[4];
      var ka:int = h[2];
      var la:int = 8000;
      var ma:int = ka * la;
      var na:int = ja + ma;
      var oa:int = h[1];
      var pa:int = 3;
      var qa:int = oa << pa;
      var ra:double_ptr = na + qa;
      ra[0] = ia;
      var sa:int = h[1];
      var ta:int = 1;
      var ua:int = sa + ta;
      h[1] = ua;
      continue L_d;
    }
    unreachable;
    label B_c:
    var va:int = h[4];
    var wa:int = h[2];
    var xa:int = 8000;
    var ya:int = wa * xa;
    var za:int = va + ya;
    var ab:int = h[2];
    var bb:int = 3;
    var cb:int = ab << bb;
    var db:double_ptr = za + cb;
    var eb:double = 1.0;
    db[0] = eb;
    var fb:int = 0;
    h[1] = fb;
    loop L_f {
      var gb:int = h[1];
      var hb:int = h[6];
      var ib:int = gb;
      var jb:int = hb;
      var kb:int = ib < jb;
      var lb:int = 1;
      var mb:int = kb & lb;
      if (eqz(mb)) goto B_e;
      var nb:int = h[6];
      var ob:int = h[2];
      var pb:int = h[1];
      var qb:int = ob - pb;
      var rb:int = nb + qb;
      var sb:int = h[6];
      var tb:int = rb % sb;
      var ub:double = f64_convert_i32_s(tb);
      var vb:int = h[6];
      var wb:double = f64_convert_i32_s(vb);
      var xb:double = ub / wb;
      var yb:int = h[3];
      var zb:int = h[2];
      var ac:int = 9600;
      var bc:int = zb * ac;
      var cc:int = yb + bc;
      var dc:int = h[1];
      var ec:int = 3;
      var fc:int = dc << ec;
      var gc:double_ptr = cc + fc;
      gc[0] = xb;
      var hc:int = h[1];
      var ic:int = 1;
      var jc:int = hc + ic;
      h[1] = jc;
      continue L_f;
    }
    unreachable;
    label B_e:
    var kc:int = h[2];
    var lc:int = 1;
    var mc:int = kc + lc;
    h[2] = mc;
    continue L_b;
  }
  unreachable;
  label B_a:
}

function print_array(a:int, b:int, c:int) {
  var d:int = stack_pointer;
  var e:int = 64;
  var f:int = d - e;
  stack_pointer = f;
  f[15]:int = a;
  f[14]:int = b;
  f[13]:int = c;
  var g:int_ptr = stderr;
  var h:int = g[0];
  var i:int = 42;
  var j:int = memory_base;
  var k:int = j + i;
  var l:int = 0;
  fprintf(h, k, l);
  var m:int = g[0];
  var n:int = 15;
  var o:int = memory_base;
  var p:int = o + n;
  f[8]:int = p;
  var q:int = 0;
  var r:int = o + q;
  var s:int = 32;
  var t:int = f + s;
  fprintf(m, r, t);
  var u:int = 0;
  f[12]:int = u;
  loop L_b {
    var v:int = f[12]:int;
    var w:int = f[15]:int;
    var x:int = v;
    var y:int = w;
    var z:int = x < y;
    var aa:int = 1;
    var ba:int = z & aa;
    if (eqz(ba)) goto B_a;
    var ca:int = 0;
    f[11]:int = ca;
    loop L_d {
      var da:int = f[11]:int;
      var ea:int = f[14]:int;
      var fa:int = da;
      var ga:int = ea;
      var ha:int = fa < ga;
      var ia:int = 1;
      var ja:int = ha & ia;
      if (eqz(ja)) goto B_c;
      var ka:int = f[12]:int;
      var la:int = f[15]:int;
      var ma:int = ka * la;
      var na:int = f[11]:int;
      var oa:int = ma + na;
      var pa:int = 20;
      var qa:int = oa % pa;
      if (qa) goto B_e;
      var ra:int_ptr = stderr;
      var sa:int = ra[0];
      var ta:int = 86;
      var ua:int = memory_base;
      var va:int = ua + ta;
      var wa:int = 0;
      fprintf(sa, va, wa);
      label B_e:
      var xa:int_ptr = stderr;
      var ya:int = xa[0];
      var za:int = f[13]:int;
      var ab:int = f[12]:int;
      var bb:int = 9600;
      var cb:int = ab * bb;
      var db:int = za + cb;
      var eb:int = f[11]:int;
      var fb:int = 3;
      var gb:int = eb << fb;
      var hb:double_ptr = db + gb;
      var ib:double = hb[0];
      f[0]:double = ib;
      var jb:int = 17;
      var kb:int = memory_base;
      var lb:int = kb + jb;
      fprintf(ya, lb, f);
      var mb:int = f[11]:int;
      var nb:int = 1;
      var ob:int = mb + nb;
      f[11]:int = ob;
      continue L_d;
    }
    unreachable;
    label B_c:
    var pb:int = f[12]:int;
    var qb:int = 1;
    var rb:int = pb + qb;
    f[12]:int = rb;
    continue L_b;
  }
  unreachable;
  label B_a:
  var sb:int_ptr = stderr;
  var tb:int = sb[0];
  var ub:int = 15;
  var vb:int = memory_base;
  var wb:int = vb + ub;
  f[4]:int = wb;
  var xb:int = 25;
  var yb:int = vb + xb;
  var zb:int = 16;
  var ac:int = f + zb;
  fprintf(tb, yb, ac);
  var bc:int = sb[0];
  var cc:int = 65;
  var dc:int = memory_base;
  var ec:int = dc + cc;
  var fc:int = 0;
  fprintf(bc, ec, fc);
  var gc:int = 64;
  var hc:int = f + gc;
  stack_pointer = hc;
}

function legalfunc_polybench_alloc_data(a:long, b:int):int {
  return legalimport_polybench_alloc_data(i32_wrap_i64(a),
                                          i32_wrap_i64(a >> 32L),
                                          b)
}

