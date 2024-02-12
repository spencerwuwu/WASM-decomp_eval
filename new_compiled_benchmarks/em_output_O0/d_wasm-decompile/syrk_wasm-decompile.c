import memory env_memory;

import global stack_pointer:int;
import global memory_base:int;
import global table_base:int;
import global stderr:int;

data rodata(offset: memory_base) =
  "begin dump: %s\00C\00%0.2lf \00\0aend   dump: %s\0a\00==BEGIN DUMP_ARR"
  "AYS==\0a\00==END   DUMP_ARRAYS==\0a\00";

import function strcmp(a:int, b:int):int;

import function free(a:int);

import function fprintf(a:int, b:int, c:int):int;

import function legalimport_polybench_alloc_data(a:int, b:int, c:int):int;

export function wasm_call_ctors() {
}

export function wasm_apply_data_relocs() {
}

export function kernel_syrk(a:int, b:int, c:double, d:double, e:int, f:int) {
  var g:int = stack_pointer;
  var h:int = 48;
  var i:int = g - h;
  i[11]:int = a;
  i[10]:int = b;
  i[4]:double = c;
  i[3]:double = d;
  i[5]:int = e;
  i[4]:int = f;
  var j:int = 0;
  i[3]:int = j;
  loop L_b {
    var k:int = i[3]:int;
    var l:int = i[11]:int;
    var m:int = k;
    var n:int = l;
    var o:int = m < n;
    var p:int = 1;
    var q:int = o & p;
    if (eqz(q)) goto B_a;
    var r:int = 0;
    i[2]:int = r;
    loop L_d {
      var s:int = i[2]:int;
      var t:int = i[3]:int;
      var u:int = s;
      var v:int = t;
      var w:int = u <= v;
      var x:int = 1;
      var y:int = w & x;
      if (eqz(y)) goto B_c;
      var z:double = i[3]:double;
      var aa:int = i[5]:int;
      var ba:int = i[3]:int;
      var ca:int = 9600;
      var da:int = ba * ca;
      var ea:int = aa + da;
      var fa:int = i[2]:int;
      var ga:int = 3;
      var ha:int = fa << ga;
      var ia:double_ptr = ea + ha;
      var ja:double = ia[0];
      var ka:double = ja * z;
      ia[0] = ka;
      var la:int = i[2]:int;
      var ma:int = 1;
      var na:int = la + ma;
      i[2]:int = na;
      continue L_d;
    }
    unreachable;
    label B_c:
    var oa:int = 0;
    i[1]:int = oa;
    loop L_f {
      var pa:int = i[1]:int;
      var qa:int = i[10]:int;
      var ra:int = pa;
      var sa:int = qa;
      var ta:int = ra < sa;
      var ua:int = 1;
      var va:int = ta & ua;
      if (eqz(va)) goto B_e;
      var wa:int = 0;
      i[2]:int = wa;
      loop L_h {
        var xa:int = i[2]:int;
        var ya:int = i[3]:int;
        var za:int = xa;
        var ab:int = ya;
        var bb:int = za <= ab;
        var cb:int = 1;
        var db:int = bb & cb;
        if (eqz(db)) goto B_g;
        var eb:double = i[4]:double;
        var fb:int = i[4]:int;
        var gb:int = i[3]:int;
        var hb:int = 8000;
        var ib:int = gb * hb;
        var jb:int = fb + ib;
        var kb:int = i[1]:int;
        var lb:int = 3;
        var mb:int = kb << lb;
        var nb:double_ptr = jb + mb;
        var ob:double = nb[0];
        var pb:double = eb * ob;
        var qb:int = i[4]:int;
        var rb:int = i[2]:int;
        var sb:int = 8000;
        var tb:int = rb * sb;
        var ub:int = qb + tb;
        var vb:int = i[1]:int;
        var wb:int = 3;
        var xb:int = vb << wb;
        var yb:double_ptr = ub + xb;
        var zb:double = yb[0];
        var ac:int = i[5]:int;
        var bc:int = i[3]:int;
        var cc:int = 9600;
        var dc:int = bc * cc;
        var ec:int = ac + dc;
        var fc:int = i[2]:int;
        var gc:int = 3;
        var hc:int = fc << gc;
        var ic:double_ptr = ec + hc;
        var jc:double = ic[0];
        var kc:double = pb * zb;
        var lc:double = kc + jc;
        ic[0] = lc;
        var mc:int = i[2]:int;
        var nc:int = 1;
        var oc:int = mc + nc;
        i[2]:int = oc;
        continue L_h;
      }
      unreachable;
      label B_g:
      var pc:int = i[1]:int;
      var qc:int = 1;
      var rc:int = pc + qc;
      i[1]:int = rc;
      continue L_f;
    }
    unreachable;
    label B_e:
    var sc:int = i[3]:int;
    var tc:int = 1;
    var uc:int = sc + tc;
    i[3]:int = uc;
    continue L_b;
  }
  unreachable;
  label B_a:
}

export function submain(a:int, b:int):int {
  var c:int = stack_pointer;
  var d:int = 48;
  var e:int = c - d;
  stack_pointer = e;
  e[11]:int = a;
  e[10]:int = b;
  var f:int = 1200;
  e[9]:int = f;
  var g:int = 1000;
  e[8]:int = g;
  var h:long = 1440000L;
  var i:int = 8;
  var j:int = legalfunc_polybench_alloc_data(h, i);
  e[3]:int = j;
  var k:long = 1200000L;
  var l:int = 8;
  var m:int = legalfunc_polybench_alloc_data(k, l);
  e[2]:int = m;
  var n:int = e[9]:int;
  var o:int = e[8]:int;
  var p:int = e[3]:int;
  var q:int = e[2]:int;
  var r:int = 24;
  var s:int = e + r;
  var t:int = s;
  var u:int = 16;
  var v:int = e + u;
  var w:int = v;
  init_array(n, o, t, w, p, q);
  var x:int = e[9]:int;
  var y:int = e[8]:int;
  var z:double = e[3]:double;
  var aa:double = e[2]:double;
  var ba:int = e[3]:int;
  var ca:int = e[2]:int;
  kernel_syrk(x, y, z, aa, ba, ca);
  var da:int = e[11]:int;
  var ea:int = 42;
  var fa:int = da;
  var ga:int = ea;
  var ha:int = fa > ga;
  var ia:int = 1;
  var ja:int = ha & ia;
  if (eqz(ja)) goto B_a;
  var ka:int_ptr = e[10]:int;
  var la:int = ka[0];
  var ma:int = 87;
  var na:int = memory_base;
  var oa:int = na + ma;
  var pa:int = strcmp(la, oa);
  if (pa) goto B_a;
  var qa:int = e[9]:int;
  var ra:int = e[3]:int;
  print_array(qa, ra);
  label B_a:
  var sa:int = e[3]:int;
  free(sa);
  var ta:int = e[2]:int;
  free(ta);
  var ua:int = 0;
  var va:int = 48;
  var wa:int = e + va;
  stack_pointer = wa;
  return ua;
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
  var j:double_ptr = i.f;
  var k:double = 1.5;
  j[0] = k;
  var l:double_ptr = i.e;
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
    var v:int = 0;
    i.a = v;
    loop L_d {
      var w:int = i.a;
      var x:int = i.g;
      var y:int = w;
      var z:int = x;
      var aa:int = y < z;
      var ba:int = 1;
      var ca:int = aa & ba;
      if (eqz(ca)) goto B_c;
      var da:int = i.b;
      var ea:int = i.a;
      var fa:int = da * ea;
      var ga:int = 1;
      var ha:int = fa + ga;
      var ia:int = i.h;
      var ja:int = ha % ia;
      var ka:double = f64_convert_i32_s(ja);
      var la:int = i.h;
      var ma:double = f64_convert_i32_s(la);
      var na:double = ka / ma;
      var oa:int = i.c;
      var pa:int = i.b;
      var qa:int = 8000;
      var ra:int = pa * qa;
      var sa:int = oa + ra;
      var ta:int = i.a;
      var ua:int = 3;
      var va:int = ta << ua;
      var wa:double_ptr = sa + va;
      wa[0] = na;
      var xa:int = i.a;
      var ya:int = 1;
      var za:int = xa + ya;
      i.a = za;
      continue L_d;
    }
    unreachable;
    label B_c:
    var ab:int = i.b;
    var bb:int = 1;
    var cb:int = ab + bb;
    i.b = cb;
    continue L_b;
  }
  unreachable;
  label B_a:
  var db:int = 0;
  i.b = db;
  loop L_f {
    var eb:int = i.b;
    var fb:int = i.h;
    var gb:int = eb;
    var hb:int = fb;
    var ib:int = gb < hb;
    var jb:int = 1;
    var kb:int = ib & jb;
    if (eqz(kb)) goto B_e;
    var lb:int = 0;
    i.a = lb;
    loop L_h {
      var mb:int = i.a;
      var nb:int = i.h;
      var ob:int = mb;
      var pb:int = nb;
      var qb:int = ob < pb;
      var rb:int = 1;
      var sb:int = qb & rb;
      if (eqz(sb)) goto B_g;
      var tb:int = i.b;
      var ub:int = i.a;
      var vb:int = tb * ub;
      var wb:int = 2;
      var xb:int = vb + wb;
      var yb:int = i.g;
      var zb:int = xb % yb;
      var ac:double = f64_convert_i32_s(zb);
      var bc:int = i.g;
      var cc:double = f64_convert_i32_s(bc);
      var dc:double = ac / cc;
      var ec:int = i.d;
      var fc:int = i.b;
      var gc:int = 9600;
      var hc:int = fc * gc;
      var ic:int = ec + hc;
      var jc:int = i.a;
      var kc:int = 3;
      var lc:int = jc << kc;
      var mc:double_ptr = ic + lc;
      mc[0] = dc;
      var nc:int = i.a;
      var oc:int = 1;
      var pc:int = nc + oc;
      i.a = pc;
      continue L_h;
    }
    unreachable;
    label B_g:
    var qc:int = i.b;
    var rc:int = 1;
    var sc:int = qc + rc;
    i.b = sc;
    continue L_f;
  }
  unreachable;
  label B_e:
}

function print_array(a:int, b:int) {
  var c:int = stack_pointer;
  var d:int = 64;
  var e:int = c - d;
  stack_pointer = e;
  e[15]:int = a;
  e[14]:int = b;
  var f:int_ptr = stderr;
  var g:int = f[0];
  var h:int = 42;
  var i:int = memory_base;
  var j:int = i + h;
  var k:int = 0;
  fprintf(g, j, k);
  var l:int = f[0];
  var m:int = 15;
  var n:int = memory_base;
  var o:int = n + m;
  e[8]:int = o;
  var p:int = 0;
  var q:int = n + p;
  var r:int = 32;
  var s:int = e + r;
  fprintf(l, q, s);
  var t:int = 0;
  e[13]:int = t;
  loop L_b {
    var u:int = e[13]:int;
    var v:int = e[15]:int;
    var w:int = u;
    var x:int = v;
    var y:int = w < x;
    var z:int = 1;
    var aa:int = y & z;
    if (eqz(aa)) goto B_a;
    var ba:int = 0;
    e[12]:int = ba;
    loop L_d {
      var ca:int = e[12]:int;
      var da:int = e[15]:int;
      var ea:int = ca;
      var fa:int = da;
      var ga:int = ea < fa;
      var ha:int = 1;
      var ia:int = ga & ha;
      if (eqz(ia)) goto B_c;
      var ja:int = e[13]:int;
      var ka:int = e[15]:int;
      var la:int = ja * ka;
      var ma:int = e[12]:int;
      var na:int = la + ma;
      var oa:int = 20;
      var pa:int = na % oa;
      if (pa) goto B_e;
      var qa:int_ptr = stderr;
      var ra:int = qa[0];
      var sa:int = 86;
      var ta:int = memory_base;
      var ua:int = ta + sa;
      var va:int = 0;
      fprintf(ra, ua, va);
      label B_e:
      var wa:int_ptr = stderr;
      var xa:int = wa[0];
      var ya:int = e[14]:int;
      var za:int = e[13]:int;
      var ab:int = 9600;
      var bb:int = za * ab;
      var cb:int = ya + bb;
      var db:int = e[12]:int;
      var eb:int = 3;
      var fb:int = db << eb;
      var gb:double_ptr = cb + fb;
      var hb:double = gb[0];
      e[0]:double = hb;
      var ib:int = 17;
      var jb:int = memory_base;
      var kb:int = jb + ib;
      fprintf(xa, kb, e);
      var lb:int = e[12]:int;
      var mb:int = 1;
      var nb:int = lb + mb;
      e[12]:int = nb;
      continue L_d;
    }
    unreachable;
    label B_c:
    var ob:int = e[13]:int;
    var pb:int = 1;
    var qb:int = ob + pb;
    e[13]:int = qb;
    continue L_b;
  }
  unreachable;
  label B_a:
  var rb:int_ptr = stderr;
  var sb:int = rb[0];
  var tb:int = 15;
  var ub:int = memory_base;
  var vb:int = ub + tb;
  e[4]:int = vb;
  var wb:int = 25;
  var xb:int = ub + wb;
  var yb:int = 16;
  var zb:int = e + yb;
  fprintf(sb, xb, zb);
  var ac:int = rb[0];
  var bc:int = 65;
  var cc:int = memory_base;
  var dc:int = cc + bc;
  var ec:int = 0;
  fprintf(ac, dc, ec);
  var fc:int = 64;
  var gc:int = e + fc;
  stack_pointer = gc;
}

function legalfunc_polybench_alloc_data(a:long, b:int):int {
  return legalimport_polybench_alloc_data(i32_wrap_i64(a),
                                          i32_wrap_i64(a >> 32L),
                                          b)
}

