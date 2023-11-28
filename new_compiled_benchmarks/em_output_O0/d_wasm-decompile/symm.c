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

export function kernel_symm(a:int, b:int, c:double, d:double, e:int, f:int, g:int) {
  var h:int = stack_pointer;
  var i:int = 64;
  var j:int = h - i;
  j[15]:int = a;
  j[14]:int = b;
  j[6]:double = c;
  j[5]:double = d;
  j[9]:int = e;
  j[8]:int = f;
  j[7]:int = g;
  var k:int = 0;
  j[6]:int = k;
  loop L_b {
    var l:int = j[6]:int;
    var m:int = j[15]:int;
    var n:int = l;
    var o:int = m;
    var p:int = n < o;
    var q:int = 1;
    var r:int = p & q;
    if (eqz(r)) goto B_a;
    var s:int = 0;
    j[5]:int = s;
    loop L_d {
      var t:int = j[5]:int;
      var u:int = j[14]:int;
      var v:int = t;
      var w:int = u;
      var x:int = v < w;
      var y:int = 1;
      var z:int = x & y;
      if (eqz(z)) goto B_c;
      var aa:int = 0;
      var ba:double = f64_convert_i32_s(aa);
      j[1]:double = ba;
      var ca:int = 0;
      j[4]:int = ca;
      loop L_f {
        var da:int = j[4]:int;
        var ea:int = j[6]:int;
        var fa:int = da;
        var ga:int = ea;
        var ha:int = fa < ga;
        var ia:int = 1;
        var ja:int = ha & ia;
        if (eqz(ja)) goto B_e;
        var ka:double = j[6]:double;
        var la:int = j[7]:int;
        var ma:int = j[6]:int;
        var na:int = 9600;
        var oa:int = ma * na;
        var pa:int = la + oa;
        var qa:int = j[5]:int;
        var ra:int = 3;
        var sa:int = qa << ra;
        var ta:double_ptr = pa + sa;
        var ua:double = ta[0];
        var va:double = ka * ua;
        var wa:int = j[8]:int;
        var xa:int = j[6]:int;
        var ya:int = 8000;
        var za:int = xa * ya;
        var ab:int = wa + za;
        var bb:int = j[4]:int;
        var cb:int = 3;
        var db:int = bb << cb;
        var eb:double_ptr = ab + db;
        var fb:double = eb[0];
        var gb:int = j[9]:int;
        var hb:int = j[4]:int;
        var ib:int = 9600;
        var jb:int = hb * ib;
        var kb:int = gb + jb;
        var lb:int = j[5]:int;
        var mb:int = 3;
        var nb:int = lb << mb;
        var ob:double_ptr = kb + nb;
        var pb:double = ob[0];
        var qb:double = va * fb;
        var rb:double = qb + pb;
        ob[0] = rb;
        var sb:int = j[7]:int;
        var tb:int = j[4]:int;
        var ub:int = 9600;
        var vb:int = tb * ub;
        var wb:int = sb + vb;
        var xb:int = j[5]:int;
        var yb:int = 3;
        var zb:int = xb << yb;
        var ac:double_ptr = wb + zb;
        var bc:double = ac[0];
        var cc:int = j[8]:int;
        var dc:int = j[6]:int;
        var ec:int = 8000;
        var fc:int = dc * ec;
        var gc:int = cc + fc;
        var hc:int = j[4]:int;
        var ic:int = 3;
        var jc:int = hc << ic;
        var kc:double_ptr = gc + jc;
        var lc:double = kc[0];
        var mc:double = j[1]:double;
        var nc:double = bc * lc;
        var oc:double = nc + mc;
        j[1]:double = oc;
        var pc:int = j[4]:int;
        var qc:int = 1;
        var rc:int = pc + qc;
        j[4]:int = rc;
        continue L_f;
      }
      unreachable;
      label B_e:
      var sc:double = j[5]:double;
      var tc:int = j[9]:int;
      var uc:int = j[6]:int;
      var vc:int = 9600;
      var wc:int = uc * vc;
      var xc:int = tc + wc;
      var yc:int = j[5]:int;
      var zc:int = 3;
      var ad:int = yc << zc;
      var bd:double_ptr = xc + ad;
      var cd:double = bd[0];
      var dd:double = j[6]:double;
      var ed:int = j[7]:int;
      var fd:int = j[6]:int;
      var gd:int = 9600;
      var hd:int = fd * gd;
      var id:int = ed + hd;
      var jd:int = j[5]:int;
      var kd:int = 3;
      var ld:int = jd << kd;
      var md:double_ptr = id + ld;
      var nd:double = md[0];
      var od:double = dd * nd;
      var pd:int = j[8]:int;
      var qd:int = j[6]:int;
      var rd:int = 8000;
      var sd:int = qd * rd;
      var td:int = pd + sd;
      var ud:int = j[6]:int;
      var vd:int = 3;
      var wd:int = ud << vd;
      var xd:double_ptr = td + wd;
      var yd:double = xd[0];
      var zd:double = od * yd;
      var ae:double = sc * cd;
      var be:double = ae + zd;
      var ce:double = j[6]:double;
      var de:double = j[1]:double;
      var ee:double = ce * de;
      var fe:double = ee + be;
      var ge:int = j[9]:int;
      var he:int = j[6]:int;
      var ie:int = 9600;
      var je:int = he * ie;
      var ke:int = ge + je;
      var le:int = j[5]:int;
      var me:int = 3;
      var ne:int = le << me;
      var oe:double_ptr = ke + ne;
      oe[0] = fe;
      var pe:int = j[5]:int;
      var qe:int = 1;
      var re:int = pe + qe;
      j[5]:int = re;
      continue L_d;
    }
    unreachable;
    label B_c:
    var se:int = j[6]:int;
    var te:int = 1;
    var ue:int = se + te;
    j[6]:int = ue;
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
  var f:int = 1000;
  e[9]:int = f;
  var g:int = 1200;
  e[8]:int = g;
  var h:long = 1200000L;
  var i:int = 8;
  var j:int = legalfunc_polybench_alloc_data(h, i);
  e[3]:int = j;
  var k:long = 1000000L;
  var l:int = 8;
  var m:int = legalfunc_polybench_alloc_data(k, l);
  e[2]:int = m;
  var n:long = 1200000L;
  var o:int = 8;
  var p:int = legalfunc_polybench_alloc_data(n, o);
  e[1]:int = p;
  var q:int = e[9]:int;
  var r:int = e[8]:int;
  var s:int = e[3]:int;
  var t:int = e[2]:int;
  var u:int = e[1]:int;
  var v:int = 24;
  var w:int = e + v;
  var x:int = w;
  var y:int = 16;
  var z:int = e + y;
  var aa:int = z;
  init_array(q, r, x, aa, s, t, u);
  var ba:int = e[9]:int;
  var ca:int = e[8]:int;
  var da:double = e[3]:double;
  var ea:double = e[2]:double;
  var fa:int = e[3]:int;
  var ga:int = e[2]:int;
  var ha:int = e[1]:int;
  kernel_symm(ba, ca, da, ea, fa, ga, ha);
  var ia:int = e[11]:int;
  var ja:int = 42;
  var ka:int = ia;
  var la:int = ja;
  var ma:int = ka > la;
  var na:int = 1;
  var oa:int = ma & na;
  if (eqz(oa)) goto B_a;
  var pa:int_ptr = e[10]:int;
  var qa:int = pa[0];
  var ra:int = 87;
  var sa:int = memory_base;
  var ta:int = sa + ra;
  var ua:int = strcmp(qa, ta);
  if (ua) goto B_a;
  var va:int = e[9]:int;
  var wa:int = e[8]:int;
  var xa:int = e[3]:int;
  print_array(va, wa, xa);
  label B_a:
  var ya:int = e[3]:int;
  free(ya);
  var za:int = e[2]:int;
  free(za);
  var ab:int = e[1]:int;
  free(ab);
  var bb:int = 0;
  var cb:int = 48;
  var db:int = e + cb;
  stack_pointer = db;
  return bb;
}

function init_array(a:int, b:int, c:int, d:int, e:int, f:int, g:int) {
  var h:int = stack_pointer;
  var i:int = 48;
  var j:int_ptr = h - i;
  j[11] = a;
  j[10] = b;
  j[9] = c;
  j[8] = d;
  j[7] = e;
  j[6] = f;
  j[5] = g;
  var k:double_ptr = j[9];
  var l:double = 1.5;
  k[0] = l;
  var m:double_ptr = j[8];
  var n:double = 1.2;
  m[0] = n;
  var o:int = 0;
  j[4] = o;
  loop L_b {
    var p:int = j[4];
    var q:int = j[11];
    var r:int = p;
    var s:int = q;
    var t:int = r < s;
    var u:int = 1;
    var v:int = t & u;
    if (eqz(v)) goto B_a;
    var w:int = 0;
    j[3] = w;
    loop L_d {
      var x:int = j[3];
      var y:int = j[10];
      var z:int = x;
      var aa:int = y;
      var ba:int = z < aa;
      var ca:int = 1;
      var da:int = ba & ca;
      if (eqz(da)) goto B_c;
      var ea:int = j[4];
      var fa:int = j[3];
      var ga:int = ea + fa;
      var ha:int = 100;
      var ia:int = ga % ha;
      var ja:double = f64_convert_i32_s(ia);
      var ka:int = j[11];
      var la:double = f64_convert_i32_s(ka);
      var ma:double = ja / la;
      var na:int = j[7];
      var oa:int = j[4];
      var pa:int = 9600;
      var qa:int = oa * pa;
      var ra:int = na + qa;
      var sa:int = j[3];
      var ta:int = 3;
      var ua:int = sa << ta;
      var va:double_ptr = ra + ua;
      va[0] = ma;
      var wa:int = j[10];
      var xa:int = j[4];
      var ya:int = wa + xa;
      var za:int = j[3];
      var ab:int = ya - za;
      var bb:int = 100;
      var cb:int = ab % bb;
      var db:double = f64_convert_i32_s(cb);
      var eb:int = j[11];
      var fb:double = f64_convert_i32_s(eb);
      var gb:double = db / fb;
      var hb:int = j[5];
      var ib:int = j[4];
      var jb:int = 9600;
      var kb:int = ib * jb;
      var lb:int = hb + kb;
      var mb:int = j[3];
      var nb:int = 3;
      var ob:int = mb << nb;
      var pb:double_ptr = lb + ob;
      pb[0] = gb;
      var qb:int = j[3];
      var rb:int = 1;
      var sb:int = qb + rb;
      j[3] = sb;
      continue L_d;
    }
    unreachable;
    label B_c:
    var tb:int = j[4];
    var ub:int = 1;
    var vb:int = tb + ub;
    j[4] = vb;
    continue L_b;
  }
  unreachable;
  label B_a:
  var wb:int = 0;
  j[4] = wb;
  loop L_f {
    var xb:int = j[4];
    var yb:int = j[11];
    var zb:int = xb;
    var ac:int = yb;
    var bc:int = zb < ac;
    var cc:int = 1;
    var dc:int = bc & cc;
    if (eqz(dc)) goto B_e;
    var ec:int = 0;
    j[3] = ec;
    loop L_h {
      var fc:int = j[3];
      var gc:int = j[4];
      var hc:int = fc;
      var ic:int = gc;
      var jc:int = hc <= ic;
      var kc:int = 1;
      var lc:int = jc & kc;
      if (eqz(lc)) goto B_g;
      var mc:int = j[4];
      var nc:int = j[3];
      var oc:int = mc + nc;
      var pc:int = 100;
      var qc:int = oc % pc;
      var rc:double = f64_convert_i32_s(qc);
      var sc:int = j[11];
      var tc:double = f64_convert_i32_s(sc);
      var uc:double = rc / tc;
      var vc:int = j[6];
      var wc:int = j[4];
      var xc:int = 8000;
      var yc:int = wc * xc;
      var zc:int = vc + yc;
      var ad:int = j[3];
      var bd:int = 3;
      var cd:int = ad << bd;
      var dd:double_ptr = zc + cd;
      dd[0] = uc;
      var ed:int = j[3];
      var fd:int = 1;
      var gd:int = ed + fd;
      j[3] = gd;
      continue L_h;
    }
    unreachable;
    label B_g:
    var hd:int = j[4];
    var id:int = 1;
    var jd:int = hd + id;
    j[3] = jd;
    loop L_j {
      var kd:int = j[3];
      var ld:int = j[11];
      var md:int = kd;
      var nd:int = ld;
      var od:int = md < nd;
      var pd:int = 1;
      var qd:int = od & pd;
      if (eqz(qd)) goto B_i;
      var rd:int = j[6];
      var sd:int = j[4];
      var td:int = 8000;
      var ud:int = sd * td;
      var vd:int = rd + ud;
      var wd:int = j[3];
      var xd:int = 3;
      var yd:int = wd << xd;
      var zd:double_ptr = vd + yd;
      var ae:double = -999.0;
      zd[0] = ae;
      var be:int = j[3];
      var ce:int = 1;
      var de:int = be + ce;
      j[3] = de;
      continue L_j;
    }
    unreachable;
    label B_i:
    var ee:int = j[4];
    var fe:int = 1;
    var ge:int = ee + fe;
    j[4] = ge;
    continue L_f;
  }
  unreachable;
  label B_e:
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

