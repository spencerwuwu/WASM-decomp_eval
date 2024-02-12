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

export function kernel_seidel_2d(a:int, b:int, c:int) {
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
    var j:int = 1;
    var k:int = i - j;
    var l:int = h;
    var m:int = k;
    var n:int = l <= m;
    var o:int = 1;
    var p:int = n & o;
    if (eqz(p)) goto B_a;
    var q:int = 1;
    f[3] = q;
    loop L_d {
      var r:int = f[3];
      var s:int = f[6];
      var t:int = 2;
      var u:int = s - t;
      var v:int = r;
      var w:int = u;
      var x:int = v <= w;
      var y:int = 1;
      var z:int = x & y;
      if (eqz(z)) goto B_c;
      var aa:int = 1;
      f[2] = aa;
      loop L_f {
        var ba:int = f[2];
        var ca:int = f[6];
        var da:int = 2;
        var ea:int = ca - da;
        var fa:int = ba;
        var ga:int = ea;
        var ha:int = fa <= ga;
        var ia:int = 1;
        var ja:int = ha & ia;
        if (eqz(ja)) goto B_e;
        var ka:int = f[5];
        var la:int = f[3];
        var ma:int = 1;
        var na:int = la - ma;
        var oa:int = 16000;
        var pa:int = na * oa;
        var qa:int = ka + pa;
        var ra:int = f[2];
        var sa:int = 1;
        var ta:int = ra - sa;
        var ua:int = 3;
        var va:int = ta << ua;
        var wa:double_ptr = qa + va;
        var xa:double = wa[0];
        var ya:int = f[5];
        var za:int = f[3];
        var ab:int = 1;
        var bb:int = za - ab;
        var cb:int = 16000;
        var db:int = bb * cb;
        var eb:int = ya + db;
        var fb:int = f[2];
        var gb:int = 3;
        var hb:int = fb << gb;
        var ib:double_ptr = eb + hb;
        var jb:double = ib[0];
        var kb:double = xa + jb;
        var lb:int = f[5];
        var mb:int = f[3];
        var nb:int = 1;
        var ob:int = mb - nb;
        var pb:int = 16000;
        var qb:int = ob * pb;
        var rb:int = lb + qb;
        var sb:int = f[2];
        var tb:int = 1;
        var ub:int = sb + tb;
        var vb:int = 3;
        var wb:int = ub << vb;
        var xb:double_ptr = rb + wb;
        var yb:double = xb[0];
        var zb:double = kb + yb;
        var ac:int = f[5];
        var bc:int = f[3];
        var cc:int = 16000;
        var dc:int = bc * cc;
        var ec:int = ac + dc;
        var fc:int = f[2];
        var gc:int = 1;
        var hc:int = fc - gc;
        var ic:int = 3;
        var jc:int = hc << ic;
        var kc:double_ptr = ec + jc;
        var lc:double = kc[0];
        var mc:double = zb + lc;
        var nc:int = f[5];
        var oc:int = f[3];
        var pc:int = 16000;
        var qc:int = oc * pc;
        var rc:int = nc + qc;
        var sc:int = f[2];
        var tc:int = 3;
        var uc:int = sc << tc;
        var vc:double_ptr = rc + uc;
        var wc:double = vc[0];
        var xc:double = mc + wc;
        var yc:int = f[5];
        var zc:int = f[3];
        var ad:int = 16000;
        var bd:int = zc * ad;
        var cd:int = yc + bd;
        var dd:int = f[2];
        var ed:int = 1;
        var fd:int = dd + ed;
        var gd:int = 3;
        var hd:int = fd << gd;
        var id:double_ptr = cd + hd;
        var jd:double = id[0];
        var kd:double = xc + jd;
        var ld:int = f[5];
        var md:int = f[3];
        var nd:int = 1;
        var od:int = md + nd;
        var pd:int = 16000;
        var qd:int = od * pd;
        var rd:int = ld + qd;
        var sd:int = f[2];
        var td:int = 1;
        var ud:int = sd - td;
        var vd:int = 3;
        var wd:int = ud << vd;
        var xd:double_ptr = rd + wd;
        var yd:double = xd[0];
        var zd:double = kd + yd;
        var ae:int = f[5];
        var be:int = f[3];
        var ce:int = 1;
        var de:int = be + ce;
        var ee:int = 16000;
        var fe:int = de * ee;
        var ge:int = ae + fe;
        var he:int = f[2];
        var ie:int = 3;
        var je:int = he << ie;
        var ke:double_ptr = ge + je;
        var le:double = ke[0];
        var me:double = zd + le;
        var ne:int = f[5];
        var oe:int = f[3];
        var pe:int = 1;
        var qe:int = oe + pe;
        var re:int = 16000;
        var se:int = qe * re;
        var te:int = ne + se;
        var ue:int = f[2];
        var ve:int = 1;
        var we:int = ue + ve;
        var xe:int = 3;
        var ye:int = we << xe;
        var ze:double_ptr = te + ye;
        var af:double = ze[0];
        var bf:double = me + af;
        var cf:double = 9.0;
        var df:double = bf / cf;
        var ef:int = f[5];
        var ff:int = f[3];
        var gf:int = 16000;
        var hf:int = ff * gf;
        var if:int = ef + hf;
        var jf:int = f[2];
        var kf:int = 3;
        var lf:int = jf << kf;
        var mf:double_ptr = if + lf;
        mf[0] = df;
        var nf:int = f[2];
        var of:int = 1;
        var pf:int = nf + of;
        f[2] = pf;
        continue L_f;
      }
      unreachable;
      label B_e:
      var qf:int = f[3];
      var rf:int = 1;
      var sf:int = qf + rf;
      f[3] = sf;
      continue L_d;
    }
    unreachable;
    label B_c:
    var tf:int = f[4];
    var uf:int = 1;
    var vf:int = tf + uf;
    f[4] = vf;
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
  var f:int = 2000;
  e[5] = f;
  var g:int = 500;
  e[4] = g;
  var h:long = 4000000L;
  var i:int = 8;
  var j:int = legalfunc_polybench_alloc_data(h, i);
  e[3] = j;
  var k:int = e[5];
  var l:int = e[3];
  init_array(k, l);
  var m:int = e[4];
  var n:int = e[5];
  var o:int = e[3];
  kernel_seidel_2d(m, n, o);
  var p:int = e[7];
  var q:int = 42;
  var r:int = p;
  var s:int = q;
  var t:int = r > s;
  var u:int = 1;
  var v:int = t & u;
  if (eqz(v)) goto B_a;
  var w:int_ptr = e[6];
  var x:int = w[0];
  var y:int = 87;
  var z:int = memory_base;
  var aa:int = z + y;
  var ba:int = strcmp(x, aa);
  if (ba) goto B_a;
  var ca:int = e[5];
  var da:int = e[3];
  print_array(ca, da);
  label B_a:
  var ea:int = e[3];
  free(ea);
  var fa:int = 0;
  var ga:int = 32;
  var ha:int = e + ga;
  stack_pointer = ha;
  return fa;
}

function init_array(a:int, b:int) {
  var c:int = stack_pointer;
  var d:int = 16;
  var e:{ a:int, b:int, c:int, d:int } = c - d;
  e.d = a;
  e.c = b;
  var f:int = 0;
  e.b = f;
  loop L_b {
    var g:int = e.b;
    var h:int = e.d;
    var i:int = g;
    var j:int = h;
    var k:int = i < j;
    var l:int = 1;
    var m:int = k & l;
    if (eqz(m)) goto B_a;
    var n:int = 0;
    e.a = n;
    loop L_d {
      var o:int = e.a;
      var p:int = e.d;
      var q:int = o;
      var r:int = p;
      var s:int = q < r;
      var t:int = 1;
      var u:int = s & t;
      if (eqz(u)) goto B_c;
      var v:int = e.b;
      var w:double = f64_convert_i32_s(v);
      var x:int = e.a;
      var y:int = 2;
      var z:int = x + y;
      var aa:double = f64_convert_i32_s(z);
      var ba:double = w * aa;
      var ca:double = 2.0;
      var da:double = ba + ca;
      var ea:int = e.d;
      var fa:double = f64_convert_i32_s(ea);
      var ga:double = da / fa;
      var ha:int = e.c;
      var ia:int = e.b;
      var ja:int = 16000;
      var ka:int = ia * ja;
      var la:int = ha + ka;
      var ma:int = e.a;
      var na:int = 3;
      var oa:int = ma << na;
      var pa:double_ptr = la + oa;
      pa[0] = ga;
      var qa:int = e.a;
      var ra:int = 1;
      var sa:int = qa + ra;
      e.a = sa;
      continue L_d;
    }
    unreachable;
    label B_c:
    var ta:int = e.b;
    var ua:int = 1;
    var va:int = ta + ua;
    e.b = va;
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
      var ab:int = 16000;
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

