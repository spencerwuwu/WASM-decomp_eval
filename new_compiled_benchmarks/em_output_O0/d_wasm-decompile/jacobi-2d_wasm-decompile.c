import memory env_memory;

import global stack_pointer:int;
import global memory_base:int;
import global table_base:int;
import global stderr:int;

data rodata(offset: memory_base) =
  "begin dump: %s\00A\00%0.2lf \00\0aend   dump: %s\0a\00==BEGIN DUMP_ARR"
  "AYS==\0a\00==END   DUMP_ARRAYS==\0a\00";

import function strcmp(a:int, b:int):int;

import function free(a:int);

import function fprintf(a:int, b:int, c:int):int;

import function legalimport_polybench_alloc_data(a:int, b:int, c:int):int;

export function wasm_call_ctors() {
}

export function wasm_apply_data_relocs() {
}

export function kernel_jacobi_2d(a:int, b:int, c:int, d:int) {
  var e:int = stack_pointer;
  var f:int = 32;
  var g:int_ptr = e - f;
  g[7] = a;
  g[6] = b;
  g[5] = c;
  g[4] = d;
  var h:int = 0;
  g[3] = h;
  loop L_b {
    var i:int = g[3];
    var j:int = g[7];
    var k:int = i;
    var l:int = j;
    var m:int = k < l;
    var n:int = 1;
    var o:int = m & n;
    if (eqz(o)) goto B_a;
    var p:int = 1;
    g[2] = p;
    loop L_d {
      var q:int = g[2];
      var r:int = g[6];
      var s:int = 1;
      var t:int = r - s;
      var u:int = q;
      var v:int = t;
      var w:int = u < v;
      var x:int = 1;
      var y:int = w & x;
      if (eqz(y)) goto B_c;
      var z:int = 1;
      g[1] = z;
      loop L_f {
        var aa:int = g[1];
        var ba:int = g[6];
        var ca:int = 1;
        var da:int = ba - ca;
        var ea:int = aa;
        var fa:int = da;
        var ga:int = ea < fa;
        var ha:int = 1;
        var ia:int = ga & ha;
        if (eqz(ia)) goto B_e;
        var ja:int = g[5];
        var ka:int = g[2];
        var la:int = 10400;
        var ma:int = ka * la;
        var na:int = ja + ma;
        var oa:int = g[1];
        var pa:int = 3;
        var qa:int = oa << pa;
        var ra:double_ptr = na + qa;
        var sa:double = ra[0];
        var ta:int = g[5];
        var ua:int = g[2];
        var va:int = 10400;
        var wa:int = ua * va;
        var xa:int = ta + wa;
        var ya:int = g[1];
        var za:int = 1;
        var ab:int = ya - za;
        var bb:int = 3;
        var cb:int = ab << bb;
        var db:double_ptr = xa + cb;
        var eb:double = db[0];
        var fb:double = sa + eb;
        var gb:int = g[5];
        var hb:int = g[2];
        var ib:int = 10400;
        var jb:int = hb * ib;
        var kb:int = gb + jb;
        var lb:int = g[1];
        var mb:int = 1;
        var nb:int = lb + mb;
        var ob:int = 3;
        var pb:int = nb << ob;
        var qb:double_ptr = kb + pb;
        var rb:double = qb[0];
        var sb:double = fb + rb;
        var tb:int = g[5];
        var ub:int = g[2];
        var vb:int = 1;
        var wb:int = ub + vb;
        var xb:int = 10400;
        var yb:int = wb * xb;
        var zb:int = tb + yb;
        var ac:int = g[1];
        var bc:int = 3;
        var cc:int = ac << bc;
        var dc:double_ptr = zb + cc;
        var ec:double = dc[0];
        var fc:double = sb + ec;
        var gc:int = g[5];
        var hc:int = g[2];
        var ic:int = 1;
        var jc:int = hc - ic;
        var kc:int = 10400;
        var lc:int = jc * kc;
        var mc:int = gc + lc;
        var nc:int = g[1];
        var oc:int = 3;
        var pc:int = nc << oc;
        var qc:double_ptr = mc + pc;
        var rc:double = qc[0];
        var sc:double = fc + rc;
        var tc:double = 0.2;
        var uc:double = tc * sc;
        var vc:int = g[4];
        var wc:int = g[2];
        var xc:int = 10400;
        var yc:int = wc * xc;
        var zc:int = vc + yc;
        var ad:int = g[1];
        var bd:int = 3;
        var cd:int = ad << bd;
        var dd:double_ptr = zc + cd;
        dd[0] = uc;
        var ed:int = g[1];
        var fd:int = 1;
        var gd:int = ed + fd;
        g[1] = gd;
        continue L_f;
      }
      unreachable;
      label B_e:
      var hd:int = g[2];
      var id:int = 1;
      var jd:int = hd + id;
      g[2] = jd;
      continue L_d;
    }
    unreachable;
    label B_c:
    var kd:int = 1;
    g[2] = kd;
    loop L_h {
      var ld:int = g[2];
      var md:int = g[6];
      var nd:int = 1;
      var od:int = md - nd;
      var pd:int = ld;
      var qd:int = od;
      var rd:int = pd < qd;
      var sd:int = 1;
      var td:int = rd & sd;
      if (eqz(td)) goto B_g;
      var ud:int = 1;
      g[1] = ud;
      loop L_j {
        var vd:int = g[1];
        var wd:int = g[6];
        var xd:int = 1;
        var yd:int = wd - xd;
        var zd:int = vd;
        var ae:int = yd;
        var be:int = zd < ae;
        var ce:int = 1;
        var de:int = be & ce;
        if (eqz(de)) goto B_i;
        var ee:int = g[4];
        var fe:int = g[2];
        var ge:int = 10400;
        var he:int = fe * ge;
        var ie:int = ee + he;
        var je:int = g[1];
        var ke:int = 3;
        var le:int = je << ke;
        var me:double_ptr = ie + le;
        var ne:double = me[0];
        var oe:int = g[4];
        var pe:int = g[2];
        var qe:int = 10400;
        var re:int = pe * qe;
        var se:int = oe + re;
        var te:int = g[1];
        var ue:int = 1;
        var ve:int = te - ue;
        var we:int = 3;
        var xe:int = ve << we;
        var ye:double_ptr = se + xe;
        var ze:double = ye[0];
        var af:double = ne + ze;
        var bf:int = g[4];
        var cf:int = g[2];
        var df:int = 10400;
        var ef:int = cf * df;
        var ff:int = bf + ef;
        var gf:int = g[1];
        var hf:int = 1;
        var if:int = gf + hf;
        var jf:int = 3;
        var kf:int = if << jf;
        var lf:double_ptr = ff + kf;
        var mf:double = lf[0];
        var nf:double = af + mf;
        var of:int = g[4];
        var pf:int = g[2];
        var qf:int = 1;
        var rf:int = pf + qf;
        var sf:int = 10400;
        var tf:int = rf * sf;
        var uf:int = of + tf;
        var vf:int = g[1];
        var wf:int = 3;
        var xf:int = vf << wf;
        var yf:double_ptr = uf + xf;
        var zf:double = yf[0];
        var ag:double = nf + zf;
        var bg:int = g[4];
        var cg:int = g[2];
        var dg:int = 1;
        var eg:int = cg - dg;
        var fg:int = 10400;
        var gg:int = eg * fg;
        var hg:int = bg + gg;
        var ig:int = g[1];
        var jg:int = 3;
        var kg:int = ig << jg;
        var lg:double_ptr = hg + kg;
        var mg:double = lg[0];
        var ng:double = ag + mg;
        var og:double = 0.2;
        var pg:double = og * ng;
        var qg:int = g[5];
        var rg:int = g[2];
        var sg:int = 10400;
        var tg:int = rg * sg;
        var ug:int = qg + tg;
        var vg:int = g[1];
        var wg:int = 3;
        var xg:int = vg << wg;
        var yg:double_ptr = ug + xg;
        yg[0] = pg;
        var zg:int = g[1];
        var ah:int = 1;
        var bh:int = zg + ah;
        g[1] = bh;
        continue L_j;
      }
      unreachable;
      label B_i:
      var ch:int = g[2];
      var dh:int = 1;
      var eh:int = ch + dh;
      g[2] = eh;
      continue L_h;
    }
    unreachable;
    label B_g:
    var fh:int = g[3];
    var gh:int = 1;
    var hh:int = fh + gh;
    g[3] = hh;
    continue L_b;
  }
  unreachable;
  label B_a:
}

export function submain(a:int, b:int):int {
  var c:int = stack_pointer;
  var d:int = 32;
  var e:int_ptr = c - d;
  stack_pointer = e;
  e[7] = a;
  e[6] = b;
  var f:int = 1300;
  e[5] = f;
  var g:int = 500;
  e[4] = g;
  var h:long = 1690000L;
  var i:int = 8;
  var j:int = legalfunc_polybench_alloc_data(h, i);
  e[3] = j;
  var k:long = 1690000L;
  var l:int = 8;
  var m:int = legalfunc_polybench_alloc_data(k, l);
  e[2] = m;
  var n:int = e[5];
  var o:int = e[3];
  var p:int = e[2];
  init_array(n, o, p);
  var q:int = e[4];
  var r:int = e[5];
  var s:int = e[3];
  var t:int = e[2];
  kernel_jacobi_2d(q, r, s, t);
  var u:int = e[7];
  var v:int = 42;
  var w:int = u;
  var x:int = v;
  var y:int = w > x;
  var z:int = 1;
  var aa:int = y & z;
  if (eqz(aa)) goto B_a;
  var ba:int_ptr = e[6];
  var ca:int = ba[0];
  var da:int = 87;
  var ea:int = memory_base;
  var fa:int = ea + da;
  var ga:int = strcmp(ca, fa);
  if (ga) goto B_a;
  var ha:int = e[5];
  var ia:int = e[3];
  print_array(ha, ia);
  label B_a:
  var ja:int = e[3];
  free(ja);
  var ka:int = e[2];
  free(ka);
  var la:int = 0;
  var ma:int = 32;
  var na:int = e + ma;
  stack_pointer = na;
  return la;
}

function init_array(a:int, b:int, c:int) {
  var d:int = stack_pointer;
  var e:int = 32;
  var f:int_ptr = d - e;
  f[7] = a;
  f[6] = b;
  f[5] = c;
  var g:int = 0;
  f[4] = g;
  loop L_b {
    var h:int = f[4];
    var i:int = f[7];
    var j:int = h;
    var k:int = i;
    var l:int = j < k;
    var m:int = 1;
    var n:int = l & m;
    if (eqz(n)) goto B_a;
    var o:int = 0;
    f[3] = o;
    loop L_d {
      var p:int = f[3];
      var q:int = f[7];
      var r:int = p;
      var s:int = q;
      var t:int = r < s;
      var u:int = 1;
      var v:int = t & u;
      if (eqz(v)) goto B_c;
      var w:int = f[4];
      var x:double = f64_convert_i32_s(w);
      var y:int = f[3];
      var z:int = 2;
      var aa:int = y + z;
      var ba:double = f64_convert_i32_s(aa);
      var ca:double = x * ba;
      var da:double = 2.0;
      var ea:double = ca + da;
      var fa:int = f[7];
      var ga:double = f64_convert_i32_s(fa);
      var ha:double = ea / ga;
      var ia:int = f[6];
      var ja:int = f[4];
      var ka:int = 10400;
      var la:int = ja * ka;
      var ma:int = ia + la;
      var na:int = f[3];
      var oa:int = 3;
      var pa:int = na << oa;
      var qa:double_ptr = ma + pa;
      qa[0] = ha;
      var ra:int = f[4];
      var sa:double = f64_convert_i32_s(ra);
      var ta:int = f[3];
      var ua:int = 3;
      var va:int = ta + ua;
      var wa:double = f64_convert_i32_s(va);
      var xa:double = sa * wa;
      var ya:double = 3.0;
      var za:double = xa + ya;
      var ab:int = f[7];
      var bb:double = f64_convert_i32_s(ab);
      var cb:double = za / bb;
      var db:int = f[5];
      var eb:int = f[4];
      var fb:int = 10400;
      var gb:int = eb * fb;
      var hb:int = db + gb;
      var ib:int = f[3];
      var jb:int = 3;
      var kb:int = ib << jb;
      var lb:double_ptr = hb + kb;
      lb[0] = cb;
      var mb:int = f[3];
      var nb:int = 1;
      var ob:int = mb + nb;
      f[3] = ob;
      continue L_d;
    }
    unreachable;
    label B_c:
    var pb:int = f[4];
    var qb:int = 1;
    var rb:int = pb + qb;
    f[4] = rb;
    continue L_b;
  }
  unreachable;
  label B_a:
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
      var ab:int = 10400;
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

