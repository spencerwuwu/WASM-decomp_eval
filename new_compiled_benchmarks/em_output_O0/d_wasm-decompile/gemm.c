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

export function kernel_gemm(a:int, b:int, c:int, d:double, e:double, f:int, g:int, h:int) {
  var i:int = stack_pointer;
  var j:int = 64;
  var k:int = i - j;
  k[15]:int = a;
  k[14]:int = b;
  k[13]:int = c;
  k[5]:double = d;
  k[4]:double = e;
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
    var t:int = 0;
    k[3]:int = t;
    loop L_d {
      var u:int = k[3]:int;
      var v:int = k[14]:int;
      var w:int = u;
      var x:int = v;
      var y:int = w < x;
      var z:int = 1;
      var aa:int = y & z;
      if (eqz(aa)) goto B_c;
      var ba:double = k[4]:double;
      var ca:int = k[7]:int;
      var da:int = k[4]:int;
      var ea:int = 8800;
      var fa:int = da * ea;
      var ga:int = ca + fa;
      var ha:int = k[3]:int;
      var ia:int = 3;
      var ja:int = ha << ia;
      var ka:double_ptr = ga + ja;
      var la:double = ka[0];
      var ma:double = la * ba;
      ka[0] = ma;
      var na:int = k[3]:int;
      var oa:int = 1;
      var pa:int = na + oa;
      k[3]:int = pa;
      continue L_d;
    }
    unreachable;
    label B_c:
    var qa:int = 0;
    k[2]:int = qa;
    loop L_f {
      var ra:int = k[2]:int;
      var sa:int = k[13]:int;
      var ta:int = ra;
      var ua:int = sa;
      var va:int = ta < ua;
      var wa:int = 1;
      var xa:int = va & wa;
      if (eqz(xa)) goto B_e;
      var ya:int = 0;
      k[3]:int = ya;
      loop L_h {
        var za:int = k[3]:int;
        var ab:int = k[14]:int;
        var bb:int = za;
        var cb:int = ab;
        var db:int = bb < cb;
        var eb:int = 1;
        var fb:int = db & eb;
        if (eqz(fb)) goto B_g;
        var gb:double = k[5]:double;
        var hb:int = k[6]:int;
        var ib:int = k[4]:int;
        var jb:int = 9600;
        var kb:int = ib * jb;
        var lb:int = hb + kb;
        var mb:int = k[2]:int;
        var nb:int = 3;
        var ob:int = mb << nb;
        var pb:double_ptr = lb + ob;
        var qb:double = pb[0];
        var rb:double = gb * qb;
        var sb:int = k[5]:int;
        var tb:int = k[2]:int;
        var ub:int = 8800;
        var vb:int = tb * ub;
        var wb:int = sb + vb;
        var xb:int = k[3]:int;
        var yb:int = 3;
        var zb:int = xb << yb;
        var ac:double_ptr = wb + zb;
        var bc:double = ac[0];
        var cc:int = k[7]:int;
        var dc:int = k[4]:int;
        var ec:int = 8800;
        var fc:int = dc * ec;
        var gc:int = cc + fc;
        var hc:int = k[3]:int;
        var ic:int = 3;
        var jc:int = hc << ic;
        var kc:double_ptr = gc + jc;
        var lc:double = kc[0];
        var mc:double = rb * bc;
        var nc:double = mc + lc;
        kc[0] = nc;
        var oc:int = k[3]:int;
        var pc:int = 1;
        var qc:int = oc + pc;
        k[3]:int = qc;
        continue L_h;
      }
      unreachable;
      label B_g:
      var rc:int = k[2]:int;
      var sc:int = 1;
      var tc:int = rc + sc;
      k[2]:int = tc;
      continue L_f;
    }
    unreachable;
    label B_e:
    var uc:int = k[4]:int;
    var vc:int = 1;
    var wc:int = uc + vc;
    k[4]:int = wc;
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
  var f:int = 1000;
  e[13]:int = f;
  var g:int = 1100;
  e[12]:int = g;
  var h:int = 1200;
  e[11]:int = h;
  var i:long = 1100000L;
  var j:int = 8;
  var k:int = legalfunc_polybench_alloc_data(i, j);
  e[5]:int = k;
  var l:long = 1200000L;
  var m:int = 8;
  var n:int = legalfunc_polybench_alloc_data(l, m);
  e[4]:int = n;
  var o:long = 1320000L;
  var p:int = 8;
  var q:int = legalfunc_polybench_alloc_data(o, p);
  e[3]:int = q;
  var r:int = e[13]:int;
  var s:int = e[12]:int;
  var t:int = e[11]:int;
  var u:int = e[5]:int;
  var v:int = e[4]:int;
  var w:int = e[3]:int;
  var x:int = 32;
  var y:int = e + x;
  var z:int = y;
  var aa:int = 24;
  var ba:int = e + aa;
  var ca:int = ba;
  init_array(r, s, t, z, ca, u, v, w);
  var da:int = e[13]:int;
  var ea:int = e[12]:int;
  var fa:int = e[11]:int;
  var ga:double = e[4]:double;
  var ha:double = e[3]:double;
  var ia:int = e[5]:int;
  var ja:int = e[4]:int;
  var ka:int = e[3]:int;
  kernel_gemm(da, ea, fa, ga, ha, ia, ja, ka);
  var la:int = e[15]:int;
  var ma:int = 42;
  var na:int = la;
  var oa:int = ma;
  var pa:int = na > oa;
  var qa:int = 1;
  var ra:int = pa & qa;
  if (eqz(ra)) goto B_a;
  var sa:int_ptr = e[14]:int;
  var ta:int = sa[0];
  var ua:int = 87;
  var va:int = memory_base;
  var wa:int = va + ua;
  var xa:int = strcmp(ta, wa);
  if (xa) goto B_a;
  var ya:int = e[13]:int;
  var za:int = e[12]:int;
  var ab:int = e[5]:int;
  print_array(ya, za, ab);
  label B_a:
  var bb:int = e[5]:int;
  free(bb);
  var cb:int = e[4]:int;
  free(cb);
  var db:int = e[3]:int;
  free(db);
  var eb:int = 0;
  var fb:int = 64;
  var gb:int = e + fb;
  stack_pointer = gb;
  return eb;
}

function init_array(a:int, b:int, c:int, d:int, e:int, f:int, g:int, h:int) {
  var i:int = stack_pointer;
  var j:int = 48;
  var k:int_ptr = i - j;
  k[11] = a;
  k[10] = b;
  k[9] = c;
  k[8] = d;
  k[7] = e;
  k[6] = f;
  k[5] = g;
  k[4] = h;
  var l:double_ptr = k[8];
  var m:double = 1.5;
  l[0] = m;
  var n:double_ptr = k[7];
  var o:double = 1.2;
  n[0] = o;
  var p:int = 0;
  k[3] = p;
  loop L_b {
    var q:int = k[3];
    var r:int = k[11];
    var s:int = q;
    var t:int = r;
    var u:int = s < t;
    var v:int = 1;
    var w:int = u & v;
    if (eqz(w)) goto B_a;
    var x:int = 0;
    k[2] = x;
    loop L_d {
      var y:int = k[2];
      var z:int = k[10];
      var aa:int = y;
      var ba:int = z;
      var ca:int = aa < ba;
      var da:int = 1;
      var ea:int = ca & da;
      if (eqz(ea)) goto B_c;
      var fa:int = k[3];
      var ga:int = k[2];
      var ha:int = fa * ga;
      var ia:int = 1;
      var ja:int = ha + ia;
      var ka:int = k[11];
      var la:int = ja % ka;
      var ma:double = f64_convert_i32_s(la);
      var na:int = k[11];
      var oa:double = f64_convert_i32_s(na);
      var pa:double = ma / oa;
      var qa:int = k[6];
      var ra:int = k[3];
      var sa:int = 8800;
      var ta:int = ra * sa;
      var ua:int = qa + ta;
      var va:int = k[2];
      var wa:int = 3;
      var xa:int = va << wa;
      var ya:double_ptr = ua + xa;
      ya[0] = pa;
      var za:int = k[2];
      var ab:int = 1;
      var bb:int = za + ab;
      k[2] = bb;
      continue L_d;
    }
    unreachable;
    label B_c:
    var cb:int = k[3];
    var db:int = 1;
    var eb:int = cb + db;
    k[3] = eb;
    continue L_b;
  }
  unreachable;
  label B_a:
  var fb:int = 0;
  k[3] = fb;
  loop L_f {
    var gb:int = k[3];
    var hb:int = k[11];
    var ib:int = gb;
    var jb:int = hb;
    var kb:int = ib < jb;
    var lb:int = 1;
    var mb:int = kb & lb;
    if (eqz(mb)) goto B_e;
    var nb:int = 0;
    k[2] = nb;
    loop L_h {
      var ob:int = k[2];
      var pb:int = k[9];
      var qb:int = ob;
      var rb:int = pb;
      var sb:int = qb < rb;
      var tb:int = 1;
      var ub:int = sb & tb;
      if (eqz(ub)) goto B_g;
      var vb:int = k[3];
      var wb:int = k[2];
      var xb:int = 1;
      var yb:int = wb + xb;
      var zb:int = vb * yb;
      var ac:int = k[9];
      var bc:int = zb % ac;
      var cc:double = f64_convert_i32_s(bc);
      var dc:int = k[9];
      var ec:double = f64_convert_i32_s(dc);
      var fc:double = cc / ec;
      var gc:int = k[5];
      var hc:int = k[3];
      var ic:int = 9600;
      var jc:int = hc * ic;
      var kc:int = gc + jc;
      var lc:int = k[2];
      var mc:int = 3;
      var nc:int = lc << mc;
      var oc:double_ptr = kc + nc;
      oc[0] = fc;
      var pc:int = k[2];
      var qc:int = 1;
      var rc:int = pc + qc;
      k[2] = rc;
      continue L_h;
    }
    unreachable;
    label B_g:
    var sc:int = k[3];
    var tc:int = 1;
    var uc:int = sc + tc;
    k[3] = uc;
    continue L_f;
  }
  unreachable;
  label B_e:
  var vc:int = 0;
  k[3] = vc;
  loop L_j {
    var wc:int = k[3];
    var xc:int = k[9];
    var yc:int = wc;
    var zc:int = xc;
    var ad:int = yc < zc;
    var bd:int = 1;
    var cd:int = ad & bd;
    if (eqz(cd)) goto B_i;
    var dd:int = 0;
    k[2] = dd;
    loop L_l {
      var ed:int = k[2];
      var fd:int = k[10];
      var gd:int = ed;
      var hd:int = fd;
      var id:int = gd < hd;
      var jd:int = 1;
      var kd:int = id & jd;
      if (eqz(kd)) goto B_k;
      var ld:int = k[3];
      var md:int = k[2];
      var nd:int = 2;
      var od:int = md + nd;
      var pd:int = ld * od;
      var qd:int = k[10];
      var rd:int = pd % qd;
      var sd:double = f64_convert_i32_s(rd);
      var td:int = k[10];
      var ud:double = f64_convert_i32_s(td);
      var vd:double = sd / ud;
      var wd:int = k[4];
      var xd:int = k[3];
      var yd:int = 8800;
      var zd:int = xd * yd;
      var ae:int = wd + zd;
      var be:int = k[2];
      var ce:int = 3;
      var de:int = be << ce;
      var ee:double_ptr = ae + de;
      ee[0] = vd;
      var fe:int = k[2];
      var ge:int = 1;
      var he:int = fe + ge;
      k[2] = he;
      continue L_l;
    }
    unreachable;
    label B_k:
    var ie:int = k[3];
    var je:int = 1;
    var ke:int = ie + je;
    k[3] = ke;
    continue L_j;
  }
  unreachable;
  label B_i:
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
      var bb:int = 8800;
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

