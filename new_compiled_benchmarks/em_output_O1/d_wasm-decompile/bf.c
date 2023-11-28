import memory env_memory;

import global stack_pointer:int;
import global memory_base:int;
import global table_base:int;
export import global bf_init_P:int;
export import global key_P:int;
export import global bf_init_S:int;
export import global key_S:int;
export import global in_key:int;
export import global out_key:int;
export import global startTimer:int;
export import global endTimer:int;
global bf_init_P_1:int = 0;
global key_P_1:int = 14624;
global bf_init_S_1:int = 80;
global key_S_1:int = 14704;
global in_key_1:int = 4176;
global out_key_1:int = 9376;
global startTimer_1:int = 18800;
global endTimer_1:int = 18808;

data data(offset: memory_base) =
  "\88j?$\d3\08\a3\85.\8a\19\13Dsp\03"8\09\a4\d01\9f)\98\fa.\08\89lN\ec\e6"
  "!(Ew\13\d08\cffT\bel\0c\e94\b7)\ac\c0\ddP|\c9\b5\d5\84?\17\09G\b5\d9\d5"
  "\16\92\1b\fby\89\00\00\00\00\00\00\00\00\a6\0b1\d1\ac\b5\df\98\dbr\fd/"
  "\b7\df\1a\d0\ed\af\e1\b8\96~&jE\90|\ba\99\7f,\f1G\99\a1$\f7l\91\b3\e2\f2"
  "\01\08\16\fc\8e\85\d8 iciNWq\a3\feX\a4~=\93\f4\8ft\95\0dX\b6\8erX\cd\8b"
  "q\eeJ\15\82\1d\a4T{\b5YZ\c29\d50\9c\13`\f2*#\b0\d1\c5\f0\85`(\18yA\ca\ef"
  "8\db\b8\b0\dcy\8e\0e\18:`\8b\0e\9el>\8a\1e\b0\c1w\15\d7'K1\bd\da/\afx`"
  "\`U\f3%U\e6\94\abU\aab\98HW@\14\e8cj9\caU\b6\10\ab*4\\cc\b4\ce\e8A\11\af"
  "\86T\a1\93\e9r|\11\14\ee\b3*\bcoc]\c5\a9+\f61\18t\16>\\ce\1e\93\87\9b3"
  "\ba\d6\af\\cf$l\81S2zw\86\95(\98H\8f;\af\b9Kk\1b\e8\bf\c4\93!(f\cc\09\d8"
  "a\91\a9!\fb`\ac|H2\80\ec]]]\84\ef\b1u\85\e9\02#&\dc\88\1be\eb\81>\89#\c5"
  "\ac\96\d3\f3om\0f9B\f4\83\82D\0b.\04 \84\a4J\f0\c8i^\9b\1f\9eBh\c6!\9a"
  "l\e9\f6a\9c\0cg\f0\88\d3\ab\d2\a0Qjh/T\d8(\a7\0f\96\a33Q\abl\0b\efn\e4"
  ";z\13P\f0;\ba\98*\fb~\1de\f1\a1v\01\af9>Y\caf\88\0eC\82\19\86\ee\8c\b4"
  "\9foE\c3\a5\84}\be^\8b;\d8uo\e0s \c1\85\9fD\1a@\a6j\c1Vb\aa\d3N\06w?6r"
  "\df\fe\1b=\02\9bB$\d7\d07H\12\0a\d0\d3\ea\0f\db\9b\c0\f1I\c9rS\07{\1b\99"
  "\80\d8y\d4%\f7\de\e8\f6\1aP\fe\e3;Ly\b6\bd\e0l\97\ba\06\c0\04\b6O\a9\c1"
  "\c4`\9f@\c2\9e\^c$j\19\afo\fbh\b5Sl>\eb\b29\13o\ecR;\1fQ\fcm,\950\9bDE"
  "\81\cc\09\bd^\af\04\d0\e3\be\fdJ3\de\07(\0ff\b3K.\19W\a8\cb\c0\0ft\c8E"
  "9_\0b\d2\db\fb\d3\b9\bd\c0yU\0a2`\1a\c6\00\a1\d6yr,@\fe%\9fg\cc\a3\1f\fb"
  "\f8\e9\a5\8e\f8"2\db\df\16u<\15ka\fd\c8\1eP/\abR\05\ad\fa\b5=2`\87#\fd"
  "H{1S\82\df\00>\bbW\\9e\a0\8co\ca.V\87\1a\dbi\17\df\f6\a8B\d5\c3\ff~(\c6"
  "2g\acsUO\8c\b0'[i\c8X\ca\bb]\a3\ff\e1\a0\11\f0\b8\98=\fa\10\b8\83!\fdl"
  "\b5\fcJ[\d3\d1-y\e4S\9aeE\f8\b6\bcI\8e\d2\90\97\fbK\da\f2\dd\e13~\cb\a4"
  "A\13\fbb\e8\c6\e4\ce\da\ca \ef\01Lw6\fe\9e~\d0\b4\1f\f1+M\da\db\95\98\91"
  "\90\aeq\8e\ad\ea\a0\d5\93k\d0\d1\8e\d0\e0%\c7\af/[<\8e\b7\94u\8e\fb\e2"
  "\f6\8fd+\12\f2\12\b8\88\88\1c\f0\0d\90\a0^\adO\1c\c3\8fh\91\f1\cf\d1\ad"
  "\c1\a8\b3\18"//w\17\0e\be\fe-u\ea\a1\1f\02\8b\0f\cc\a0\e5\e8to\b5\d6\f3"
  "\ac\18\99\e2\89\ce\e0O\a8\b4\b7\e0\13\fd\81;\c4|\d9\a8\ad\d2f\a2_\16\05"
  "w\95\80\14s\cc\93w\14\1a!e \ad\e6\86\fa\b5w\f5BT\c7\cf5\9d\fb\0c\af\cd"
  "\eb\a0\89>{\d3\1bA\d6I~\1e\ae-\0e%\00^\b3q \bb\00h"\af\e0\b8W\9b6d$\1e"
  "\b9\09\f0\1d\91cU\aa\a6\dfY\89C\c1x\7fSZ\d9\a2[} \c5\b9\e5\02v\03&\83\a9"
  "\cf\95bh\19\c8\11AJsN\ca-G\b3J\a9\14{R\00Q\1b\15)S\9a?W\0f\d6\e4\c6\9b"
  "\bcv\a4`+\00t\e6\81\b5o\ba\08\1f\e9\1bWk\ec\96\f2\15\d9\0d*!ec\b6\b6\f9"
  "\b9\e7.\054\ffdV\85\c5]-\b0S\a1\8f\9f\a9\99G\ba\08j\07\85n\e9pzKD)\b3\b5"
  ".\09u\db#&\19\c4\b0\a6n\ad}\df\a7I\b8`\ee\9cf\b2\ed\8fq\8c\aa\ec\ff\17"
  "\9ailRdV\e1\9e\b1\c2\a5\026\19)L\09u@\13Y\a0>:\18\e4\9a\98T?e\9dB[\d6\e4"
  "\8fk\d6?\f7\99\07\9c\d2\a1\f50\e8\ef\e68-M\c1]%\f0\86 \ddL&\ebp\84\c6\e9"
  "\82c^\cc\1e\02?kh\09\c9\ef\ba>\14\18\97<\a1pjk\845\7fh\86\e2\a0R\05S\9c"
  "\b77\07P\aa\1c\84\07>\\ae\de\7f\ecD}\8e\b8\f2\16W7\da:\b0\0d\0cP\f0\04"
  "\1f\1c\f0\ff\b3\00\02\1a\f5\0c\ae\b2t\b5<Xz\83%\bd!\09\dc\f9\13\91\d1\f6"
  "/\a9|sG2\94\01G\f5"\81\e5\e5:\dc\da\c274v\b5\c8\a7\dd\f3\9aFaD\a9\0e\03"
  "\d0\0f>\c7\c8\ecA\1eu\a4\99\cd8\e2/\0e\ea;\a1\bb\8021\b3>\188\8bTN\08\b9"
  "mO\03\0dBo\bf\04\0a\f6\90\12\b8,y|\97$r\b0yV\af\89\af\bc\1fw\9a\de\10\08"
  "\93\d9\12\ae\8b\b3.?\cf\dc\1fr\12U$qk.\e6\dd\1aP\87\cd\84\9f\18GXz\17\da"
  "\08t\bc\9a\9f\bc\8c}K\e9:\ecz\ec\fa\1d\85\dbfC\09c\d2\c3d\c4G\18\1c\ef"
  "\08\d9\1527;C\dd\16\ba\c2$CM\a1\12Q\c4e*\02\00\94P\dd\e4:\13\9e\f8\dfq"
  "UN1\10\d6w\ac\81\9b\19\11_\f1V5\04k\c7\a3\d7;\18\11<\09\a5$Y\ed\e6\8f\f2"
  "\fa\fb\f1\97,\bf\ba\9en<\15\1epE\e3\86\b1o\e9\ea\0a^\0e\86\b3*>Z\1c\e7"
  "\1fw\fa\06=N\b9\dce)\0f\1d\e7\99\d6\89>\80%\c8fRx\c9L.j\b3\10\9c\ba\0e"
  "\15\c6x\ea\e2\94S<\fc\a5\f4-\0a\1e\a7N\f7\f2=+\1d6\0f&9\19`y\c2\19\08\a7"
  "#R\b6\12\13\f7n\fe\ad\ebf\1f\c3\ea\95E\bc\e3\83\c8{\a6\d17\7f\b1(\ff\8c"
  "\01\ef\dd2\c3\a5Zl\be\85!Xe\02\98\abh\0f\a5\ce\ee;\95/\db\ad}\ef*\84/n"
  "[(\b6!\15pa\07)uG\dd\ec\10\15\9fa0\a8\cc\13\96\bda\eb\1e\fe4\03\cfc\03"
  "\aa\90\s\b59\a2pL\0b\9e\9e\d5\14\de\aa\cb\bc\86\cc\ee\a7,b`\ab\\ab\9cn"
  "\84\f3\b2\af\1e\8bd\ca\f0\bd\19\b9i#\a0P\bbZe2Zh@\b3\b4*<\d5\e9\9e1\f7"
  "\b8!\c0\19\0bT\9b\99\a0_\87~\99\f7\95\a8}=b\9a\887\f8w-\e3\97_\93\ed\11"
  "\81\12h\16)\885\0e\d6\1f\e6\c7\a1\df\de\96\99\baXx\a5\84\f5Wcr"\1b\ff\c3"
  "\83\9b\96F\c2\1a\eb\0a\b3\cdT0.S\e4H\d9\8f(1\bcm\ef\f2\ebX\ea\ff\c64a\ed"
  "(\fes<|\ee\d9\14J]\e3\b7d\e8\14]\10B\e0\13> \b6\e2\eeE\ea\ab\aa\a3\15O"
  "l\db\d0O\cb\faB\f4B\c7\b5\bbj\ef\1d;Oe\05!\cdA\9ey\1e\d8\c7M\85\86jGK\e4"
  "Pb\81=\f2\a1b\cfF&\8d[\a0\83\88\fc\a3\b6\c7\c1\c3$\15\7f\92t\cbi\0b\8a"
  "\84G\85\b2\92V\00\bf[\09\9dH\19\adt\b1b\14\00\0e\82#*\8dBX\ea\f5U\0c>\f4"
  "\ad\1dap?#\92\f0r3A~\93\8d\f1\ec_\d6\db;"lY7\de|`t\ee\cb\a7\f2\85@n2w\ce"
  "\84\80\07\a6\9eP\f8\19U\d8\ef\e85\97\d9a\aa\a7i\a9\c2\06\0c\c5\fc\ab\04"
  "Z\dc\ca\0b\80.zD\9e\844E\c3\05g\d5\fd\c9\9e\1e\0e\d3\dbs\db\cd\88U\10y"
  "\da_g@Cg\e3e4\c4\c5\d88>q\9e\f8(= \ffm\f1\e7!>\15J=\b0\8f+\9f\e3\e6\f7"
  "\ad\83\dbhZ=\e9\f7@\81\94\1c&L\f64)i\94\f7 \15A\f7\d4\02v.k\f4\bch\00\a2"
  "\d4q$\08\d4j\f4 3\b7\d4\b7C\afa\00P.\f69\1eFE$\97tO!\14@\88\8b\bf\1d\fc"
  "\95M\af\91\b5\96\d3\dd\f4pE/\a0f\ec\09\bc\bf\85\97\bd\03\d0m\ac\7f\04\85"
  "\cb1\b3'\eb\96A9\fdU\e6G%\da\9a\0a\ca\ab%xP(\f4)\04S\da\86,\0a\fbm\b6\e9"
  "b\14\dch\00iH\d7\a4\c0\0eh\ee\8d\a1'\a2\fe?O\8c\ad\87\e8\06\e0\8c\b5\b6"
  "\d6\f4z|\1e\ce\aa\ec_7\d3\99\a3x\ceB*k@5\9e\fe \b9\85\f3\d9\ab\d79\ee\8b"
  "N\12;\f7\fa\c9\1dV\18mK1f\a3&\b2\97\e3\eat\fan:2C[\dd\f7\e7Ah\fb x\caN"
  "\f5\0a\fb\97\b3\fe\d8\acV@E'\95H\ba::SU\87\8d\83 \b7\a9k\feK\95\96\d0\bc"
  "g\a8UX\9a\15\a1c)\a9\cc3\db\e1\99VJ*\a6\f9%1?\1c~\f4^|1)\90\02\e8\f8\fd"
  "p/'\04\\15\bb\80\e3,(\05H\15\c1\95"m\c6\e4?\13\c1H\dc\86\0f\c7\ee\c9\f9"
  "\07\0f\1f\04A\a4yG@\17n\88]\ebQ_2\d1\c0\9b\d5\8f\c1\bc\f2d5\11A4x{%`\9c"
  "*`\a3\e8\f8\df\1blc\1f\c2\b4\12\0e\9e2\e1\02\d1Of\af\15\81\d1\ca\e0\95"
  "#k\e1\92>3b\0b$;"\b9\be\ee\0e\a2\b2\85\99\0d\ba\e6\8c\0cr\de(\f7\a2-Ex"
  "\12\d0\fd\94\b7\95b\08}d\f0\f5\cc\e7o\a3IT\faH}\87'\fd\9d\c3\1e\8d>\f3"
  "AcG\0at\ff.\99\abno:7\fd\f8\f4`\dc\12\a8\f8\dd\eb\a1L\e1\1b\99\0dkn\db"
  "\10U{\c67,gm;\d4e'\04\e8\d0\dc\c7\0d)\f1\a3\ff\00\cc\92\0f9\b5\0b\ed\0f"
  "i\fb\9f{f\9c}\db\ce\0b\cf\91\a0\a3^\15\d9\88/\13\bb$\ad[Q\bfy\94{\eb\d6"
  ";v\b3.97yY\11\cc\97\e2&\80-1.\f4\a7\adBh;+j\c6\ccLu\12\1c\f1.x7B\12j\e7"
  "Q\92\b7\e6\bb\a1\06Pc\fbK\18\10k\1a\fa\ed\ca\11\d8\bd%=\c9\c3\e1\e2Y\16"
  "BD\86\13\12\0an\ec\0c\d9*\ea\ab\d5Ng\afd_\a8\86\da\88\e9\bf\be\fe\c3\e4"
  "dW\80\bc\9d\86\c0\f7\f0\f8{x`M`\03`F\83\fd\d1\b0\1f8\f6\04\aeEw\cc\fc6"
  "\d73kB\83q\ab\1e\f0\87A\80\b0_^\00<\beW\a0w$\ae\e8\bd\99BFUa.X\bf\8f\f4"
  "XN\a2\fd\dd\f28\eft\f4\c2\bd\89\87\c3\f9fSt\8e\b3\c8U\f2u\b4\b9\d9\fcF"
  "a&\ebz\84\df\1d\8by\0ej\84\e2\95_\91\8eYnFpW\b4 \91U\d5\8cL\de\02\c9\e1"
  "\ac\0b\b9\d0\05\82\bbHb\a8\11\9e\a9tu\b6\19\7f\b7\09\dc\a9\e0\a1\09-f3"
  "F2\c4\02\1fZ\e8\8c\be\f0\09%\a0\99J\10\fen\1d\1d=\b9\1a\df\a4\a5\0b\0f"
  "\f2\86\a1i\f1h(\83\da\b7\dc\fe\069W\9b\ce\e2\a1R\7f\cdO\01^\11P\fa\83\06"
  "\a7\c4\b5\02\a0'\d0\e6\0d'\8c\f8\9aA\86?w\06L`\c3\b5\06\a8a(z\17\f0\e0"
  "\86\f5\c0\aaX`\00b}\dc0\d7\9e\e6\11c\ea8#\94\dd\c2S4\16\c2\c2V\ee\cb\bb"
  "\de\b6\bc\90\a1}\fc\ebv\1dY\ce\09\e4\05o\88\01|K=\0ar9$|\92|_r\e3\86\b9"
  "\9dMr\b4[\c1\1a\fc\b8\9e\d3xUT\ed\b5\a5\fc\08\d3|=\d8\c4\0f\adM^\efP\1e"
  "\f8\e6a\b1\d9\14\85\a2<\13Ql\e7\c7\d5o\c4N\e1V\ce\bf*67\c8\c6\dd42\9a\d7"
  "\12\82c\92\8e\fa\0eg\e0\00`@7\ce9:\cf\f5\fa\d37w\c2\ab\1b-\c5Z\9eg\b0\"
  "B7\a3O@'\82\d3\be\9b\bc\99\9d\8e\11\d5\15s\0f\bf~\1c-\d6{\c4\00\c7k\1b"
  "\8c\b7E\90\a1!\be\b1n\b2\b4n6j/\abHWyn\94\bc\d2v\a3\c6\c8\c2Ie\ee\f8\0f"
  "S}\de\8dF\1d\0as\d5\c6M\d0L\db\bb9)PF\ba\a9\e8&\95\ac\04\e3^\be\f0\d5\fa"
  "\a1\9aQ-j\e2\8c\efc"\ee\86\9a\b8\c2\89\c0\f6.$C\aa\03\1e\a5\a4\d0\f2\9c"
  "\baa\c0\83Mj\e9\9bP\15\e5\8f\d6[d\ba\f9\a2&(\e1::\a7\86\95\a9K\e9bU\ef"
  "\d3\ef/\c7\da\f7R\f7io\04?Y\0a\faw\15\a9\e4\80\01\86\b0\87\ad\e6\09\9b"
  "\93\e5>;Z\fd\90\e9\97\d74\9e\d9\b7\f0,Q\8b+\02:\ac\d5\96}\a6}\01\d6>\cf"
  "\d1(-}|\cf%\9f\1f\9b\b8\f2\adr\b4\d6ZL\f5\88Zq\ac)\e0\e6\a5\19\e0\fd\ac"
  "\b0G\9b\fa\93\ed\8d\c4\d3\e8\ccW;()f\d5\f8(.\13y\91\01_xU`u\edD\0e\96\f7"
  "\8c^\d3\e3\d4m\05\15\bam\f4\88%a\a1\03\bd\f0d\05\15\9e\eb\c3\a2W\90<\ec"
  "\1a'\97*\07:\a9\9bm?\1b\f5!c\1e\fbf\9c\f5\19\f3\dc&(\d93u\f5\fdU\b1\82"
  "4V\03\bb<\ba\8a\11wQ(\f8\d9\0a\c2gQ\cc\ab_\92\ad\ccQ\17\e8M\8e\dc08bX\9d"
  "7\91\f9 \93\c2\90z\ea\ce{>\fbd\ce!Q2\beOw~\e3\b6\a8F=)\c3iS\deH\80\e6\13"
  "d\10\08\ae\a2$\b2m\dd\fd-\85if!\07\09\0aF\9a\b3\dd\c0Ed\cf\delX\ae\c8 "
  "\1c\dd\f7\be[@\8dX\1b\7f\01\d2\cc\bb\e3\b4k~j\a2\ddE\ffY:D\0a5>\d5\cd\b4"
  "\bc\a8\ce\ear\bb\84d\fa\ae\12f\8dGo<\bfc\e4\9b\d2\9e]/T\1bw\c2\aepcN\f6"
  "\8d\0d\0etW\13[\e7q\16r\f8]}S\af\08\cb@@\cc\e2\b4NjF\d24\84\af\15\01(\04"
  "\b0\e1\1d:\98\95\b4\9f\b8\06H\a0n\ce\82;?o\82\ab 5K\1d\1a\01\f8'r'\b1`"
  "\15a\dc?\93\e7+y:\bb\bd%E4\e19\88\a0Ky\ceQ\b7\c92/\c9\ba\1f\a0~\c8\1c\e0"
  "\f6\d1\c7\bc\c3\11\01\cf\c7\aa\e8\a1I\87\90\1a\9a\bdO\d4\cb\de\da\d08\da"
  "\0a\d5*\c39\03g6\91\c6|1\f9\8dO+\b1\e0\b7Y\9e\f7:\bb\f5C\ff\19\d5\f2\9c"
  "E\d9',"\97\bf*\fc\e6\15q\fc\91\0f%\15\94\9ba\93\e5\fa\eb\9c\b6\ceYd\a8"
  "\c2\d1\a8\ba\12^\07\c1\b6\0cj\05\e3eP\d2\10B\a4\03\cb\0en\ec\e0;\db\98"
  "\16\be\a0\98Ld\e9x22\95\1f\9f\df\92\d3\e0+4\a0\d3\1e\f2q\89At\0a\1b\8c"
  "4\a3K q\be\c5\d82v\c3\8d\9f5\df./\99\9bGo\0b\e6\1d\f1\e3\0fT\daL\e5\91"
  "\d8\da\1e\cfyb\ceo~>\cdf\b1\18\16\05\1d,\fd\c5\d2\8f\84\99"\fb\f6W\f3#"
  "\f5#v2\a615\a8\93\02\cd\ccVb\81\f0\ac\b5\ebuZ\976\16n\ccs\d2\88\92b\96"
  "\de\d0I\b9\81\1b\90PL\14V\c6q\bd\c7\c6\e6\0a\14z2\06\d0\e1E\9a{\f2\c3\fd"
  "S\aa\c9\00\0f\a8b\e2\bf%\bb\f6\d2\bd5\05i\12q"\02\04\b2|\cf\cb\b6+\9cv"
  "\cd\c0>\11S\d3\e3@\16`\bd\ab8\f0\adG%\9c 8\bav\ceF\f7\c5\a1\afw``u N\fe"
  "\cb\85\d8\8d\e8\8a\b0\f9\aaz~\aa\f9L\\c2H\19\8c\8a\fb\02\e4j\c3\01\f9\e1"
  "\eb\d6i\f8\d4\90\a0\de\\a6-%\09?\9f\e6\08\c22aN\b7[\e2w\ce\e3\df\8fW\e6"
  "r\c3:KurtVonnegutsCommencementAddressatMITLadiesandgentlemenoftheclass"
  "of97WearsunscreenIfIcouldofferyouonlyonetipforthefuturesunscreenwouldb"
  "eitThelongtermbenefitsofsunscreenhavebeenprovedbyscientistswhereasther"
  "estofmyadvicehasnobasismorereliablethanmyownmeanderingexperienceIwilld"
  "ispensethisadvicenowEnjoythepowerandbeautyofyouryouthOhnevermindYouwil"
  "lnotunderstandthepowerandbeautyofyouryouthuntiltheyvefadedButtrustmein"
  "20yearsyoulllookbackatphotosofyourselfandrecallinawayyoucantgraspnowho"
  "wmuchpossibilitylaybeforeyouandhowfabulousyoureallylookedYouarenotasfa"
  "tasyouimagineDontworryaboutthefutureOrworrybutknowthatKurtVonneguKurtV"
  "onnegutsCommencementAddressatMITLadiesandgentlemenoftheclassof97Wearsu"
  "nscreenIfIcouldofferyouonlyonetipforthefuturesunscreenwouldbeitThelong"
  "termbenefitsofsunscreenhavebeenprovedbyscientistswhereastherestofmyadv"
  "icehasnobasismorereliablethanmyownmeanderingexperienceIwilldispensethi"
  "sadvicenowEnjoythepowerandbeautyofyouryouthOhnevermindYouwillnotunders"
  "tandthepowerandbeautyofyouryouthuntiltheyvefadedButtrustmein20yearsyou"
  "lllookbackatphotosofyourselfandrecallinawayyoucantgraspnowhowmuchpossi"
  "bilitylaybeforeyouandhowfabulousyoureallylookedYouarenotasfatasyouimag"
  "ineDontworryaboutthefutureOrworrybutknowthatKurtVonnegutsCommencementA"
  "ddressatMITLadiesandgentlemenoftheclassof97WearsunscreenIfIcouldoffery"
  "ouonlyonetipforthefuturesunscreenwouldbeitThelongtermbenefitsofsunscre"
  "enhavebeenprovedbyscientistswhereastherestofmyadvicehasnobasismorereli"
  "ablethanmyownmeanderingexperienceIwilldispensethisadvicenowEnjoythepow"
  "erandbeautyofyouryouthOhnevermindYouwillnotunderstandthepowerandbeauty"
  "ofyouryouthuntiltheyvefadedButtrustmein20yearsyoulllookbackatphotosofy"
  "ourselfandrecallinawayyoucantgraspnowhowmuchpossibilitylaybeforeyouand"
  "howfabulousyoureallylookedYouarenotasfatasyouimagineDontworryaboutthef"
  "utureOrworrybutknowthatKurtVonnegutsCommencementAddressatMITLadiesandg"
  "entlemenoftheclassof97WearsunscreenIfIcouldofferyouonlyonetipforthefut"
  "uresunscreenwouldbeitThelongtermbenefitsofsunscreenhavebeenprovedbysci"
  "entistswhereastherestofmyadvicehasnobasismorereliablethanmyownmeanderi"
  "ngexperienceIwilldispensethisadvicenowEnjoythepowerandbeautyofyouryout"
  "hOhnevermindYouwillnotunderstandthepowerandbeautyofyouryouthuntiltheyv"
  "efadedButtrustmein20yearsyoulllookbackatphotosofyourselfandrecallinawa"
  "yyoucantgraspnowhowmuchpossibilitylaybeforeyouandhowfabulousyoureallyl"
  "ookedYouarenotasfatasyouimagineDontworryaboutthefutureOrworryKurtVonne"
  "gutsCommencementAddressatMITLadiesandgentlemenoftheclassof97Wearsunscr"
  "eenIfIcouldofferyouonlyonetipforthefuturesunscreenwouldbeitThelongterm"
  "benefitsofsunscreenhavebeenprovedbyscientistswhereastherestofmyadviceh"
  "asnobasismorereliablethanmyownmeanderingexperienceIwilldispensethisadv"
  "icenowEnjoythepowerandbeautyofyouryouthOhnevermindYouwillnotunderstand"
  "thepowerandbeautyofyouryouthuntiltheyvefadedButtrustmein20yearsyoulllo"
  "okbackatphotosofyourselfandrecallinawayyoucantgraspnowhowmuchpossibili"
  "tylaybeforeyouandhowfabulousyoureallylookedYouarenotasfatasyouimagineD"
  "ontworryaboutthefutureOrworrybutknowthatKurtVonneguKurtVonnegutsCommen"
  "cementAddressatMITLadiesandgentlemenoftheclassof97WearsunscreenIfIcoul"
  "dofferyouonlyonetipforthefuturesunscreenwouldbeitThelongtermbenefitsof"
  "sunscreenhavebeenprovedbyscientistswhereastherestofmyadvicehasnobasism"
  "orereliablethanmyownmeanderingexperienceIwilldispensethisadvicenowEnjo"
  "ythepowerandbeautyofyouryouthOhnevermindYouwillnotunderstandthepoweran"
  "dbeautyofyouryouthuntiltheyvefadedButtrustmein20yearsyoulllookbackatph"
  "otosofyourselfandrecallinawayyoucantgraspnowhowmuchpossibilitylaybefor"
  "eyouandhowfabulousyoureallylookedYouarenotasfatasyouimagineDontworryab"
  "outthefutureOrworrybutknowthatKurtVonnegutsCommencementAddressatMITLad"
  "iesandgentlemenoftheclassof97WearsunscreenIfIcouldofferyouonlyonetipfo"
  "rthefuturesunscreenwouldbeitThelongtermbenefitsofsunscreenhavebeenprov"
  "edbyscientistswhereastherestofmyadvicehasnobasismorereliablethanmyownm"
  "eanderingexperienceIwilldispensethisadvicenowEnjoythepowerandbeautyofy"
  "ouryouthOhnevermindYouwillnotunderstandthepowerandbeautyofyouryouthunt"
  "iltheyvefadedButtrustmein20yearsyoulllookbackatphotosofyourselfandreca"
  "llinawayyoucantgraspnowhowmuchpossibilitylaybeforeyouandhowfabulousyou"
  "reallylookedYouarenotasfatasyouimagineDontworryaboutthefutureOrworrybu"
  "tknowthatKurtVonnegutsCommencementAddressatMITLadiesandgentlemenofthec"
  "lassof97WearsunscreenIfIcouldofferyouonlyonetipforthefuturesunscreenwo"
  "uldbeitThelongtermbenefitsofsunscreenhavebeenprovedbyscientistswhereas"
  "therestofmyadvicehasnobasismorereliablethanmyownmeanderingexperienceIw"
  "illdispensethisadvicenowEnjoythepowerandbeautyofyouryouthOhnevermindYo"
  "uwillnotunderstandthepowerandbeautyofyouryouthuntiltheyvefadedButtrust"
  "mein20yearsyoulllookbackatphotosofyourselfandrecallinawayyoucantgraspn"
  "owhowmuchpossibilitylaybeforeyouandhowfabulousyoureallylookedYouarenot"
  "asfatasyouimagineDontworryaboutthefutureOrworrybutknowthattsCommenceme"
  "ntAddressatMITLadiesandgentlemenoftheclassof97WearsunscreenIfIcouldoff"
  "eryouonlyonetipforthefutureKurtVonnegutsCommencementAddressatMITLadies"
  "andgentlemenoftheclassof97WearsunscreenIfIcouldofferyouonlyonetipforth"
  "efuturesunscreenwouldbeitThelongtermbenefitsofsunscreenhavebeenprovedb"
  "yscientistswhereastherest\05\8c\e517\f7\b3\16\eat\c5ih\fa\1ej\fd|)i\ef"
  "\fc\bd\ef\b6?\bb\8c\ef\fd\8e\d8\1a\89\aa\e14\f8\0d\adM4\f9C\c2\f6\cf\05"
  "M\11\aa\18!H\fc\09\1c\07!\909}\fa\8f0W\cb\c1\cd\cb\cf\ca\d6\878\13L\fb"
  "dz\8d\87g\d2\adOm\10\cc\9b\02\0c#z\f7B\d4\1e\b7\cf\8e\c9\ff1\e5\d18\d5"
  "\ab\e8\b5z>*K5\88\ea\03,\12\08\86\a0\c1\de\\97]\eeLC\ba\91\1d\b8\d6\ad"
  "\b21)\fb\80\b9\bf1p\df\fcU\db_Dh\d2\03\137\7fLJ\0c\b4\16|\fc.\aa7\007\ca"
  "\90\e8\b3\c8\c9\ce%\db\c3bM\9a\9d\16'\a9BW\cc\96\19Q\d6\91\a3\9a\a6\dc"
  "\1a]*#\01\8f\b2\85\03\0b5\b8\08\8f\cf\e6+\bcG88\f1\e6~\b4e\86z\ab\d9\ad"
  "\dd8.\a6\f0\9f\1d\b5\e4w\f0\d0\0a\bc\a4\019J\0f\09\8aR\fb\95\f69\1cF\f3"
  "\a8\90\c2k\d5pg\ba\af;\bb\faZ\efI\e6\85\ad\c3\\d3\8e\a3\e2\b8\eds9\10\11"
  "+\bc\ba\85\a52\c3\13D$\99\b2\0f4U4{]}V$\8a5;\a1\a1\1a\b2\cb\e4\1b%\8cC"
  "\ec\07\b6XG\8b\e4\16\0f\93\dc\12\84o\0d\f9(\01o\05\8c&k\06\f9\e6\82G\b2"
  "Q'(\1c\d9\d8v\9f\e4\d0y\0a8i\0b\01\a7i@\d1,V\bf\ed\fee\19~\a1%6\0cW\9c"
  "\96\9bE4p\ea\8f\95)\0f-\d3\a5\bd\a2\89\a6\bc\af\80\e0 \99\80\be\a9\82\7f"
  "\bf\ee\df\92\9b\b1\8e\b0N\e54`\8dw\df$\0a\18\0f\f5\80\07\c4jd\1e ?\84X"
  "\85\fa\c3\89"\\db\14uQ\d8\b5t\f1N\83\b2"\8a\ce\0a\903\d2lozt1\d5\98\e8"
  "\e4\14\f5z\d4\e1\ad\be\98\15==\b3\adGn&\07\c6\9d\99\cfW\11**\d7\12\d0Z"
  "\ac\9d\17.%\a6\daA\19\88\adU\95i6\14\da\06A\b8\ef.&\9dD\f0\e4u\e0\13\99"
  "\03"\e9/9gO\11\d0\df\\1eo\7f=\cd\d4\e8\05\cfk\9eQ\c0\87CK<vD3\1e\c8\b0"
  "\bb>\01d\ad?v\1fl\8b\8a\f8\e9Q\f4$\f1\e7:\9a\c9n\09'V\e3I<=(P\c3\e0\bb"
  "7\9aHh\da<\fd\f8\d8Z,\d5N\b1\94L\f49\aa\01\a6K\ce{\a6\ce\87\dd!\82\1a\94"
  "\94\e0u8K\972Z1\040\ff\93*\b7:L\83\10m\deVU\86\fd\d1J\11\dc\eeR\c8\8cY"
  "\d2u\ae\b4D\06\a3\09\f9\f93|\b65\06='\be\0a(?\cf\\bd\1eE1\08\e9tyP\95\a9"
  "H\a4\cb\98G\c9\a9\90\cdS\0a\d6\d5\00\93 >[\a2\a4\a0\d3\c4\9f\a6\09I\dd"
  "Out\14gpP\93\e2\cd\19l\d2=\a3.9f\b9~\03\06\1bv\8bqC>\04\f2X\98_\\8e\e9"
  "\8b"\b1\f4\82\0c\04S\1d\a8\ab\0fFs\d8$\daj\d5\\d7\d7+\9b\c8M\c6D%\ff\d7"
  ">\9a4\fb\c6\947\cfOc\f3\87+@\cc\b3j\90Nx^\e9\a0\c8\\bf2+\81\e5\a8\c20\83"
  "N\e4\a3\9d`\af\cb\bd\cdQ\eeR=TTo\d9\a3\07\12M\9c)\d1/\0a\fa:\ec\bb\f8\d4"
  "\83<4~\b4q\cf\87p\c0\be\b1D\abM\db\fdi\0c\9d\de \9f\\b9X\c0q'\12M\d7p\df"
  "r\80f*\db\0f\7f\17r\98}\fe\0c4N\f2J\82}\8a\12,\98\0c\ecu\c2S\c0\ffm\df"
  "\ed\1f\cb\aa(\bcZ.\c4|\f3\99\7f\f7t\aeC\e9\c7\94oD<N\c4w\9f\daUp\09\14"
  "F\a8M.\1a'\13\0a\ac\9f\87\0a~\19\85\cf\c1 \99}e3UNNL\91\baf\f9N\b6\8a\e0"
  "\11\cf\15\cd2\8b\df\05\c4N\fe\efR\81\de\16\92\f5\b2\cd\a9\a8\8a\93\18o"
  "E^q\be\9dR\e9W\86\95\fd[\a1\80-\feQKf\1a\9a\9fI\a3\c6\06\1bT\88\a5t\be"
  "\ea\11\a0\00\edx\96\fc{\ae\ee\88\1d\e2\d3\14Vhz\87\f1\11\e5\cfzB\89\a4"
  "\1a\01Zj\8f\b6E\a0\ba\0a\e79O\e2\d1\ba{R\e7\e4B\ef\d6h\c8a\01\e5f\80Mi"
  "6v:U$\ef\85#\04\d0\8d\13\b1\aclm\9e'CF0\af\d4\b5K2\f8b^\a1|\f9\bb\9e\89"
  "N#\8eZ\82qy?%K]\ae\16tsi\d7\dd\93u(\8e&i+\9a\a9'P.6\06\99\8f\f8\c1n\e8"
  "M\8ca\14z\fdRP\cd\f9\8c\a8\8e\02\df\9b\80K\f8K\a8Fq\82\c4heo\b6&\fa7\18"
  "\9cI\afN6\0a\02\8e\fd\ce\04\cb\b1\df_\e7-\0c{y\ed\95\bf1]R\9dUU\96"\f1"
  "\ecW\09\bc\ac\97_X\00`\e9\d7\82\f7\9d\0a\1e\99\f9\c6\9f\bc/P\af\db\ab7"
  "\ac\d6\e76X2WqT\0a#\aaz_\acI\e0ab(\9a\87^\8am3\bd\95\b04\9dk\18\18\1d\a2"
  "S\14\e4\c5\a3\a3\een\a6\d5\84#\aa@\f2\9f,_\e0\f2\fez\9e\b5\d6\d8\e0\03"
  "#t\e2\f6\13\f8\e7\9a\bdH!\1f\a9"\cccL\0a5~4\a8p\bb3\ad\0af\aa\f7\12N\ea"
  "6\d3\a5pDUq\f8\a5Z_\14Iy(\ees\1d\7f\df\b3\fcMk)\e9w\efK\d0=\bc\c9#\e6\d7"
  "\03\cb\8d|\d2\b4\fc\00\f4\94\be`-\da\eax\8f\88\00?G\d7\09\e9\1b\e2\1d\ff"
  "p@\ec\a5A'j""\fb\fc\bc \16\f8\96D\\09\073\cd\84\00\06\a3\93@`\a8\cf\eb"
  "m\8a\1d\0e\deh\8da\b7u\8e&\18\c06\ceh\02<\0eM\ea\b6)\10\c0\03\0b\d4h\e0"
  "/\1bg\d5\a7\b7z>\82\b3z\ee!\de]\cf\eeuiybgY?\84\a8 f\f4\f0\11\0b\a9N\a7"
  "\f7\fd\e2\ae\d5t}c\1ah6&\fc\d0\87\b0]\0a\1dc\d9\9b\c6)\f4*c\14\e9\d4\c1"
  "\af\1b{x\bb\9b\a7\0eF\e1\cb\12\81;\b1\87\00\fd\04\7f\9f7W\d7\c2\d0\04\e9"
  "^-\82\d5\e7Z\cccZ)\a6]\08\1a\10|\0e\1f\85\10\b8\80\d1\b2\f7\df\d3\09~`"
  "\1aV+~\11z\0dZk\99\c1V&\13\d9uH\f1\b8\a4\8e\a4\a9\ec\e2r\a9\16\e6\a8q\80"
  "\03\a61^G-\a1 M\a4~\c5\e2\83\bc\b0r\7f\1f\a2\c8\a8k\83X>\f8H\83\e1q\92"
  "\bd\fch\94\116<\bf\ce\a1qU\c9\1a\c9|\17\91\86\12\bb\8f#\f6Jt+%h\f7\fa/"
  ";\fb\93`\cd\cf\84\caa\bc\a9\86\0f_\ba\1f\9c\b7\00\f1\83\86\00<\96\93;\11"
  "\9aI\f5\12<\b4\b5q\c7\8f`\a2\c5\f9@%\ae\d90\17}\8d\d5\e3\fa\8b\c2L\ea\16"
  "\b9\eerX\0b?\08X\daQ1\1f\d6\d4='\bf\c7a?/^\fc\c5\02_\f32\97\fe5\f4\c49"
  "<0T\0eU\d2\a31\d6G\bf\9f\ef\a5B\9bU\f0\Z:x\12\cb\bcP&\bc\b1p\b0h\9f\d6"
  "\d31\zA\b08F \99E\0c\89\c7\9fF\f2\b4<t\ebdX\faC\e1h\81I\9b\aad{\f3/\11"
  "\0a\89\b8>\03\f34\f4\93v\b8\17\07\16D\ce)\a7\cb\a6\e2\d6\b3\f3\f9\16v\e0"
  "g88\06\f6/(k\c08\154\a6\dcg\dbT\d2\14\19V&\b1\9d\c0\a3C\aa`*w\cb\cd\8c"
  "\d8\eb\e4\8a*\b3}Ip\c7\b4&\9fd\\90\9e\f0\b7\ce*\f0\ce\f6\b6@9If\a4\e5\8c"
  "Y\db\eac\a9n|]\bb[\05\c5X)\01B\92\0e\82p\be\1c\11y\d9q\1f\eb\cd\a4\c0e"
  "\f8\8219\efW\06u\81v=\d5\db0Eq\b72?\9a\e3g\81Cq\98\f7\b3Q\88\ea`\92]\8b"
  "\c3k\da\96+\81\1fS9\ab\ea\0bZF\a8\00\d2\82=n\d7\fb\a1=\92s\9a\a1\ad\8a"
  "B\f6=\10PJvg\90\d8\dbp7\d50\f5\c9\f0M_\e7\d9\cc\ce4\e3\f7:\81e\e7'\b3\bb"
  "BrZ\c1E\cb\ca\fcb\82\92\a16I\ab\a9\c9\18}\11\e8\b9A\1b\d4\e1\8e`S\17\8d"
  "[\9a\a1R\fd\fa\9a2U\dd\1b\b5\a8s\f3\f9\18\e5\9a\88sn\16\d7\a6?\13\13\c9"
  "\bb;T\11\81p\92c\13\b0\cfw\0b\dd\d6\06\16\87\e1\91t=e\80V\da\d2nb\13\c4"
  "u\f8\c6\0d\96m\1en4?\dc\aa\d6\e2b\97{\c4\e9\a5\c6\8eK\05\bc\f1\9f"8e=="
  "\d0\8c\b3\19\89\85~\b0\a6\18\ce\85=]\80\ff\d8a\073\fb0M\d0\8b\9e\bb\d8"
  "\d8\9f\0ar\f3\1f\f8Q\a0w\bd\dfKO-\0d\87\c1\e5\f7\92\f1r?A"g`\c5\05\0f\e4"
  "-\d0\c8\c9\95J.c\b6\c9\8f\b8,\9e;75\0a\f9w\08\ef\ae\f4\a8\0f\96A\b6\ba"
  "2\09\c5\b0\f0\f3\b1\b5R\fb\0c#\f4\17\9e>\98+\ed3\d3\1d\cfZ\9c\0bP\c7\c1"
  "t\e6\97\98\fd\f4V\9b\08\f6\b8c+@\c4][\a9\05\ed\02:\d0Y\e1\ce\1f\1c\91 "
  "J0\133\c6\b7\ef4\d8\bc\98]n\8c-\921\1f\acu2\08D\cc\03\dbu(\c3\e8\b3\c8"
  "\bax7\01b\a8xp\b6\da\deMq\ff\bd\00\91XH\c7W\cci.\bcMM\b7\15V2\d9\c3\0a"
  "\d7\1d\ae\9b>\dbH\7f\b5P\b3\b1\af8\d5A<c\b17\0d\cd\f6#\cag\d7qm\b9W\b9"
  "Z\01JX\95\bb\e6Q\03\87\aaIFqv\b7\fa\d1\d0\f8\11\c4$\bc\80\b91\86\96m\c3"
  "\0e\c1\8e+\05u\94\0f,\92\91\a2|\ca\ef}\cd\82\bd\dd\fd\abI$\7f#\0c\e6\99"
  "\9f%\e3R\bc\e2l\b6\82=m~\8e\fe\f3+X\ac\1e\c1x\98\90\fc(\1f\13\b5v\1bC\a7"
  "\fe\f2bW\c0\16\ad\ad\81\09pvZ\8e\af)P\c6\17\11S\c5\a3\fc\04z\f9}G\1bWG"
  "\19\ed\83\90\bd\f4\8c\de\0b_\88\a6pX\04\1b\fa\07\dd\9fv"\b5p\0b@\de_G\7f"
  "\d2Y\0bI\7f\d9\d7\fa\87\df\e0\9b\1c\d2\aa\7f-|\94\9b|\83?z\85\15/\93$\bd"
  "\b0\91I\08\1f\c5\8a+\a0\a3.H0\1a8\ab\8a4\16\b7\bf\eak\e6\caW\ffl\ac\84"
  "\a4\9a\88\c8U\83\04\bcj\01\d5*1\ddF\depcGi\ce\0dg\df%h$a\fd\95\deQ\e8\e9"
  "\e4\df\88{\c9\0a3\afP\a8\c6\ee(\a1q\aa.\90\c2\da\98P\02\e4\ddD\bf[Q\15"
  "\d8D\9cu\91Xo\f1\c9!\9e#\f5E\8c\a2+l.wE\e0y\88M<v\db\97\93O\a1\ea\c1.\d8"
  "\df\f1\eb\0f\e3\1bG\ea\eb\a3\8f\82j\f4\ca\17\de\b94m\96+QD\da\a2\afL\a5"
  "\85\e8\ach\f0\e2\86\10\ba\ca<*[\d1\80\04\ff~\9c\8e\f0\8f\e0\f0\06c?\d7"
  "JG9\12\19E\93V\9c\fc\9d\e3\ab\9d\10aeMF\da\d42D\97k\ad\8c\dd\ba\d9'&\17"
  "\d9K\fbI\b2\06\e2\09\bb\e4K\c6]\bf\b4\1a\1d=\d7\87\00\ecA,,\b2\18\02b\"
  "\97\faD-\c4\b2\ae_9\d9Xm\a3\eda\ca\92\e7'\c5\1b\f2o\bf\0b\d1\02\9d\04\1a"
  "5\93\fa\8eB\cdM\e6T\956=\14\d4@?\f1c\ec\bax\1c.\d1{\feVb\00\8a\bf\02\b6"
  "\fa\b3B\df\c1\80\ff\0fc\04\0a\b2\85\9d\0e \cb*\dd\a0\07\b2/L\8b\83l\fc"
  "X\90)\13\db\a8\d1\f8\c1\81W\b2y8\84Q$_\1e^\f2M\e0s;\d0\8e\afk\c7\c0f\94"
  "\1a$\a7\d5li\b9c\b4d\ac\a3\ef\f8\e86\a9\b6\fc\86TpB\1a\1aS\8f\a2\c6\d6"
  "\02\ee\89\c3\a5\11#\dd\08e <T\8a\8ef\f1#\fe\a8\ben>:0\e4i\db:\9f\b0\a2"
  "\e2 U\da}|\dd'\af;\f7n\b6\82\1eJ\10\8d\e8q\cb\8d\ea*Z\fb8]\01\9b\ff\04"
  "=C\10-\e9\c3J\0e\94v\f7\e0\aa\8d\e2S\be\d1Z4\e1x\c9\eeL\cd\0c8*Tz^\ec\18"
  "|\87\a2\d8\90\05\e7l\a0!\c4c\02\fd\af9;\05\05\e5\16\f1&|\b8AR`\d3\91\0f"
  "\1c\7f\90\e7\aco\b8\fbG\d6\90`x\8d\80VaT\8a|\aa\a3\13\0b\b6\b6m\few\e9"
  "Io\94\09L\b4v\14\1d\ba\03\ef\f5\b3{\83\0f\cb\d7@:g\8d\1d\01\ce\b6\a8\d3"
  "v\98\f6Ds\a0'\0f"\89\ae\aa\8bv\cd\12\a6\e4T\8eY\b1\c9\0d\a3D\b3\dc?\ba"
  "d\1a\cd\93\f1}\bcr\a6\a8\d6e\94@\ff \d5\02'36bI\bdq\0eiV\e0i\b125\89\ad"
  "\99q\d7\06p\81q\febJw\0f\f7r\ed\a5\86\f7\e3t\b5Y\bd,R\07\c5\8c\9a{\9de"
  "\939\a2\8f\f8\8f\82i\9a\f5\c6m&\8b\ce\ff\aa?!\84x\e1\d5\1d\ba\a8\cc|\ef"
  "\c4\87\18\06e\d6>*\ef-\1d\f9\ba\a8tT6\82b\aat\80r\a3\13\d3\1c\8e\07i\98"
  "\bc\11)\09(\1f\89Ebc\d1P\1e\d2\1fp\93\dfjAJf\10i \d1s\b7F.\fdO\ba\1b\11"
  "5\919\10\12\f9\15\aa\09n\bfs"Gw\bd\16\9a\e7\9a\f8\0b\e4G\c6\0f\1a\e0&\19"
  "\a9L\a42\aa\b9p\ba\83\d4\bf\01 \a8\\14\e7@\a7\c1\bf\b0>Y\b6\8e\17\03S\0f"
  "yJ\b1t\X\af\ecE\fd\10\1d\df\c5\8ax\9a\b9\dd0\85~\1b\ed\80g\94\d2\83_k\17"
  ".8\a7\91\beEV\bc\f7_\ad\bb#+\a3\b4\c9\d1\c0\d1\91R+\fcR\17\0d\b6\a5\d2"
  "\c2\t\fadC\9f\84\95d\89T\1c\cfi\0d=.}\09qk\c2\c0\91\d7\b4F\1b\19\e8\dc"
  "\8f\1d@\bc\d0\0b\05\d9\c3_\0b\e2c\e2\cauk\8d7/n\b9\c6\d6\94\b1\d1\96s\13"
  "\c9\cd\ad\f0~\ae\8b\d5\d7\04\14](l\b8\fcdu6x\7fG\a4\fc\f8I\86+2\dfH\8b"
  "\92\b9q%\ad\a2\8c\d2$\c5\10\9ft\92\d4a\81\f8\fc\89\94`\82l\cf){\cf\f7c"
  "\fd\ae\0d\ac\d6\ba\c2\cf\ff\a0\92\c5\fa\dan\c1\13~LcXm2\85\bb\cet\0f\d1"
  "|Q\bcX\1c\ef\f1DG\1e}\82\1e\a3m\9c\8cp\ee](\d0\08\e4\a1\e3\ff\bd\af\05"
  "\c4\ed\b5ewS\ba\89\d4q\831\9bzs\9f6\0fv\09V\c2\cd\8c!\03\02\08\d1\1f\a0"
  "\05\1a\1d\b3\fc\99\d2\\f2S\16`M={\e4vCO\02\18\e8\06\d42\d6\b8/\18K\da\a0"
  "\be\84*\beU\b2\e6F\d1S(\96\b0\86|_@\ea\a3\d4`\c7N\c7\ad\1a#\1bvI\91\b8"
  "\8b+#L\93\b1\a2^\e5b\ab\0e.\d0\06pA\ae\e5\801\1d\c9K0\d7\89\bc\ec\0d\d4"
  "\15w\fd\bcNoy\b2\02Z\c9:\f7]\b7\10\8a\ee\ca.M(\1c\ba~\e5\d9\c6\be\a6v4"
  "d\eb_\d7\98<\16{\eb\d00\c3\7f\d8\bdb\8a\aa\f4\dey\cb\cc\a5\11i1[\b8y\9e"
  "3\95\9c\c7\1c\a0\a2\07\cb<{\f0\97\f72\e0\de\86\cdsHl\01.\1b|\b2\af\de\13"
  "{A5MXR\c1\f1\0ae\83\cfvnq1\11\aav\01\0fc\c3\d2\ed\b5\e64;\b1s;\eb\d19\80"
  "\c8\de\08o\07M\f4\09m\fb\ec~\e1\13`[Yb'\e0\adF\8fDi\b1\fd\0c\OX\ce$\83"
  "d\bbS\df\a2\abT\1dE\e8o\f0%\04\8eu1V\cc\d9$:$\0en\dd\10\19\bb\f3\1dE\13"
  "M+\0aQ#\e5\e58\f7C\81d\d2\94)\ef\e9G\8a\bf\03J\0f\9f\df<\c9\d2\9fK\1e\d8"
  "\83\b1\ab?\f3\bd'\9c\ffs\b5\f0\09\d8\b8\e4\cb\87\f2ll\a7\122\ab\17\8b\95"
  "\e8)\b8&\d8\e8g2t\92\8d\bb\cc<\f9\8c\0d\0di\8cq\b8y\ea\c7 \ab\13\f6\c0"
  "c\c26\a0_\b1c\\b4\9dT\0a\7f\8d\fc>;\8bT\9bM\d4\0e[\b0\a3\d8\02\9c\e4\e9"
  "!\96\df\b5\c2`2.M\a0\ee\a6#\00\b4\08~\0f^\08\0a&_U\85\a3\97\13\fd"g*z\d6"
  "\dd-\8a\d5\a0\cf^v!\81\c0\16\a1\b7\d3\c0\8d\ce\c5\8d.\fe|K\e8\1a\afM\b8"
  "\ee\1aY\8dv\8bI\b5q\e1\f9\84l\08\09\cf\99L\e9\155\a9\d9e\86\e3\d7\c7\e5"
  "W\1f\ea'\11\88\c4Z\0eM\fd\d0\13\e5+\fe\02qSFL''G\87\01\b2\8f[\cd\1cfW\e2"
  "FK\aeK\a3~V>A\87\8b\84\86>\\ba\00\03W\fdm\a68\ba|\e01\ab \ef.\a3i\a8\f3"
  "\8eod\cf\d0\08p^\91\1e\19q\e1E\e9\df\f2!\c5\cc\03T3\bdX\99X=\87\16\e2\b1"
  "\de\95F\a6\c7'g\af\c6\12\b7w\U5\aaita\d3G\cf\05k\f5\9a\d4\03\86\ce+z\e0"
  "\c3\1a\bd\1a\d7\b3\c7\12\fc\b2e\b9\c2\a9\9b\b1\88\d3\b4\eaX\e0\17\db\af"
  "2#J\f1\93l\7fn\d3\f1\9f\d0\e9\c2\a9\05t\9b\a0z\90b\c8\d71\09\83\8c|\9b"
  "R\de\e7\e0\cbAs^\c8q\8c\c0}#\a7\83\98\9eA\c19Q\ac\e8-\b8A:\0c\d3j\e3\fd"
  "N\afT\d0\f3qd@i'\f5\dfs\fcjO\c0\a6\19\95\8d\f0\d7\bd\b7\c1J\bfsPb\19\b6"
  "\01\a4\9c\0b\13Gm\d9m\ff\01\d8\f1\95qJZ+\0a\c8\e7(I\e7G\ce\7f\f3\9f\ba"
  "\ab9t\09Z\102\aa\07\05P<\80JD\b2b\f6p\baH\e2\b7\c0\049\1e\dd1\cb\ed\03"
  "%\fd/\c7\ca(8e\b1\96\d3\97\a5g\eb\d3\d1\890\03.\06\c6$\a7\fb\beI\d6\08"
  "\d0\f9\05\07\f5\a9\c3\e6tl\81\b47m\cb|\0b\b3-\a86\146\e6\fd\7f\c3z\ec\af"
  "\a4\cd\f5M\c3r\0b\c3\8f\f5{\e8\f1\\d5\c7\1b\aa\e6 B\af\7fZ\93\01\e9L\14"
  "\e5V~\a7\bf\d8uU\f8\bc\d6\e9\8bU\c2\08\d6\9d\eb\a8\b2#\c0\b1|\8cF\d4vt"
  "z\ed\14i\e5\0e\b1\e7\c9c\8cah\1a\e2C\e9\19\b04P\88\dc\90\cc\c0h\00\98S"
  "\af\ff{(t\14\bfOD=\e0\d4L\d6\be\eaWB\e03\bbf(0\9bj\d8i\d4m\e9rx\e1\9d\82"
  "\0d:,o\df\d3ElA\11\d5\bcK\c5\f2(J!b\09\12\cc\c1zd\ce\cc\bd\f3\adGn\e6\f3"
  "g\a5c\12W\d1\b7"\c3\02\c7\c1\b6\97\92k\ca\a6\deO\c4\8dY\c5\fe\b8\104\03"
  "\d8\095M\1d\de\80\94+u+\a6;\99\cf\99Z\d3x\ffn[b\82\ab\95\+\b3+\1a\b9\0f"
  "\07\10]oU\a2 \8f\0e\00\ad\01F\c5\d8\aa\e7\8e\ae\ee\d1 \16\e4\d0'b\0f2\0d"
  "E\dc\a9\d0D@e\d1u\af]\d4\fdIK\f9\015\b4^{R\a8 A\8a\88\fcZB\c1\b9<\f8\ac"
  "\a1\e4\80\82nv\\c693SR\f0At\94\df\ce\94|m6\ca\1c\a9\cad\1b\eb\ed12\bcH"
  "X\baa(\12Q\9dxm\c1.\03P5\b6\1f\d6\a5 \97^\04qN\dc\cd$\85\ed\97\012\a0?"
  "\d2AT\94X!\0e\d0\\aeu\a4\b5\c5\9b\ee\90\f6\1a\0c\d0<:_yi\85\1d@\18)\dd"
  "\b8'M\a9q\8b\a0%\e8dS\b8\d1\0450\eb>g\f7\158<m\9aL\06]^E\13K\ccA\09\df"
  "t\fb\f5r\15\f4\f7.\98=\d7i\f7-=\0bs\a3\117\ce6\0f\ads\7f\0c\02>\e3\a0\03"
  "*\fd7\a5\95\02\e7\86yBO\19{\d9\8b\adW\e8\e8^\94\a9\a6 $\9e\cb\8d\91\1a"
  "|\b2T\ef\17\cch\c6\ba\90\97Q\97\ec\82\f9HUgm\b7x\95->Z\ee\91"m\d1~\81\cf"
  "\81L\\b8:yk1'J\a0\d2#Error return from gettimeofday: %d\00%0.6f\0a\00\00"
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
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00";

import function memcpy(a:int, b:int, c:int):int;

import function gettimeofday(a:int, b:int):int;

import function iprintf(a:int, b:int):int;

import function small_printf(a:int, b:int):int;

export function wasm_call_ctors() {
}

export function wasm_apply_data_relocs() {
}

export function local_memcpy(a:int_ptr, b:int_ptr, c:int) {
  if (c < 1) goto B_a;
  b = b;
  a = a;
  c = c;
  loop L_b {
    a = a;
    a[0] = (b = b)[0];
    b = b + 4;
    a = a + 4;
    var d:int = c;
    c = d + -1;
    if (d > 1) continue L_b;
  }
  label B_a:
}

export function BF_set_key(a:int, b:int) {
  var c:int = stack_pointer - 16;
  stack_pointer = c;
  var d:int = bf_init_P;
  memcpy(key_P, d, 72);
  d = bf_init_S;
  memcpy(key_S, d, 4096);
  a = b + select_if(a, 72, a < 72);
  d = 0;
  var e:ubyte_ptr = b;
  loop L_a {
    e = e;
    var f:ubyte_ptr = e + 1;
    f = select_if(f, b, f < a);
    var g:ubyte_ptr = f + 1;
    g = select_if(g, b, g < a);
    var h:ubyte_ptr = g + 1;
    h = select_if(h, b, h < a);
    var i:int = h[0];
    g = g[0];
    f = f[0];
    e = e[0];
    var j:int_ptr = key_P + ((d = d) << 2);
    j[0] = (i | (g | (f << 8 | e << 16)) << 8) ^ j[0];
    f = d + 1;
    d = f;
    e = h + 1;
    e = select_if(e, b, e < a);
    if (f != 18) continue L_a;
  }
  c[2]:long@4 = 0L;
  a = 0;
  loop L_b {
    BF_encrypt(c + 8, 1);
    d = key_P;
    (d + (a = (b = a) << 2))[0]:int = c[2]:int;
    (d + (a | 4))[0]:int = c[3]:int;
    a = b + 2;
    if (b < 16) continue L_b;
  }
  a = 0;
  loop L_c {
    BF_encrypt(c + 8, 1);
    d = key_S;
    (d + (a = (b = a) << 2))[0]:int = c[2]:int;
    (d + (a | 4))[0]:int = c[3]:int;
    a = b + 2;
    if (b < 1022) continue L_c;
  }
  stack_pointer = c + 16;
}

export function BF_encrypt(a:{ a:int, b:int }, b:int) {
  var e:{ a:int, b:int, c:int, d:int, e:int, f:int, g:int, h:int, i:int, j:int, k:int, l:int, m:int, n:int, o:int, p:int, q:int, r:int }
  var f:int;
  var c:int = a.b;
  var d:int = a.a;
  if (eqz(b)) goto B_b;
  e = key_P;
  f = e.a;
  b = key_S;
  f = 
    e.r ^
    (c = 
       (e.p ^
        ((b +
          ((d = 
              (e.o ^
               ((b +
                 ((c = 
                     (e.n ^
                      ((b +
                        ((d = 
                            (e.m ^
                             ((b +
                               ((c = 
                                   (e.l ^
                                    ((b +
                                      ((d = 
                                          (e.k ^
                                           ((b +
                                             ((c = 
                                                 (e.j ^
                                                  ((b +
                                                    ((d = 
                                                        (e.i ^
                                                         ((b +
                                                           ((c = 
                                                               (e.h ^
                                                                ((b +
                                                                  ((d = 
                                                                      (e.g ^
                                                                       ((b +
                                                                         ((c = 
                                                                             (e.f ^
                                                                              ((b +
                                                                                ((d = 
                                                                                    (e.e ^
                                                                                     ((b +
                                                                                       ((c = 
                                                                                           (e.d ^
                                                                                            ((b +
                                                                                              ((d = (e.c ^
                                                                                                     ((b +
                                                                                                       ((c = (e.b ^
                                                                                                              ((b + ((d = f ^ d) >> 14 & 1020) + 1024)[0]:int +
                                                                                                               (b + (d >> 22 & 1020))[0]:int ^
                                                                                                               (b + (d >> 6 & 1020) + 2048)[0]:int) +
                                                                                                              (b + ((d & 255) << 2) + 3072)[0]:int) ^
                                                                                                             c) >>
                                                                                                        14 &
                                                                                                        1020) +
                                                                                                       1024)[0]:int +
                                                                                                      (b + (c >> 22 & 1020))[0]:int ^
                                                                                                      (b + (c >> 6 & 1020) + 2048)[0]:int) +
                                                                                                     (b + ((c & 255) << 2) + 3072)[0]:int) ^
                                                                                                    d) >>
                                                                                               14 &
                                                                                               1020) +
                                                                                              1024)[0]:int +
                                                                                             (b + (d >> 22 & 1020))[0]:int ^
                                                                                             (b + (d >> 6 & 1020) + 2048)[0]:int) +
                                                                                            (b + ((d & 255) << 2) + 3072)[0]:int) ^
                                                                                           c) >>
                                                                                        14 &
                                                                                        1020) +
                                                                                       1024)[0]:int +
                                                                                      (b + (c >> 22 & 1020))[0]:int ^
                                                                                      (b + (c >> 6 & 1020) + 2048)[0]:int) +
                                                                                     (b + ((c & 255) << 2) + 3072)[0]:int) ^
                                                                                    d) >>
                                                                                 14 &
                                                                                 1020) +
                                                                                1024)[0]:int +
                                                                               (b + (d >> 22 & 1020))[0]:int ^
                                                                               (b + (d >> 6 & 1020) + 2048)[0]:int) +
                                                                              (b + ((d & 255) << 2) + 3072)[0]:int) ^
                                                                             c) >>
                                                                          14 &
                                                                          1020) +
                                                                         1024)[0]:int +
                                                                        (b + (c >> 22 & 1020))[0]:int ^
                                                                        (b + (c >> 6 & 1020) + 2048)[0]:int) +
                                                                       (b + ((c & 255) << 2) + 3072)[0]:int) ^
                                                                      d) >>
                                                                   14 &
                                                                   1020) +
                                                                  1024)[0]:int +
                                                                 (b + (d >> 22 & 1020))[0]:int ^
                                                                 (b + (d >> 6 & 1020) + 2048)[0]:int) +
                                                                (b + ((d & 255) << 2) + 3072)[0]:int) ^
                                                               c) >>
                                                            14 &
                                                            1020) +
                                                           1024)[0]:int +
                                                          (b + (c >> 22 & 1020))[0]:int ^
                                                          (b + (c >> 6 & 1020) + 2048)[0]:int) +
                                                         (b + ((c & 255) << 2) + 3072)[0]:int) ^
                                                        d) >>
                                                     14 &
                                                     1020) +
                                                    1024)[0]:int +
                                                   (b + (d >> 22 & 1020))[0]:int ^
                                                   (b + (d >> 6 & 1020) + 2048)[0]:int) +
                                                  (b + ((d & 255) << 2) + 3072)[0]:int) ^
                                                 c) >>
                                              14 &
                                              1020) +
                                             1024)[0]:int +
                                            (b + (c >> 22 & 1020))[0]:int ^
                                            (b + (c >> 6 & 1020) + 2048)[0]:int) +
                                           (b + ((c & 255) << 2) + 3072)[0]:int) ^
                                          d) >>
                                       14 &
                                       1020) +
                                      1024)[0]:int +
                                     (b + (d >> 22 & 1020))[0]:int ^
                                     (b + (d >> 6 & 1020) + 2048)[0]:int) +
                                    (b + ((d & 255) << 2) + 3072)[0]:int) ^
                                   c) >>
                                14 &
                                1020) +
                               1024)[0]:int +
                              (b + (c >> 22 & 1020))[0]:int ^
                              (b + (c >> 6 & 1020) + 2048)[0]:int) +
                             (b + ((c & 255) << 2) + 3072)[0]:int) ^
                            d) >>
                         14 &
                         1020) +
                        1024)[0]:int +
                       (b + (d >> 22 & 1020))[0]:int ^
                       (b + (d >> 6 & 1020) + 2048)[0]:int) +
                      (b + ((d & 255) << 2) + 3072)[0]:int) ^
                     c) >>
                  14 &
                  1020) +
                 1024)[0]:int +
                (b + (c >> 22 & 1020))[0]:int ^
                (b + (c >> 6 & 1020) + 2048)[0]:int) +
               (b + ((c & 255) << 2) + 3072)[0]:int) ^
              d) >>
           14 &
           1020) +
          1024)[0]:int +
         (b + (d >> 22 & 1020))[0]:int ^
         (b + (d >> 6 & 1020) + 2048)[0]:int) +
        (b + ((d & 255) << 2) + 3072)[0]:int) ^
       c);
  b = 
    (e.q ^
     ((b + (c >> 14 & 1020) + 1024)[0]:int + (b + (c >> 22 & 1020))[0]:int ^
      (b + (c >> 6 & 1020) + 2048)[0]:int) +
     (b + ((c & 255) << 2) + 3072)[0]:int) ^
    d;
  goto B_a;
  label B_b:
  e = key_P;
  f = e.r;
  b = key_S;
  f = 
    e.a ^
    (c = 
       (e.c ^
        ((b +
          ((d = 
              (e.d ^
               ((b +
                 ((c = 
                     (e.e ^
                      ((b +
                        ((d = 
                            (e.f ^
                             ((b +
                               ((c = 
                                   (e.g ^
                                    ((b +
                                      ((d = 
                                          (e.h ^
                                           ((b +
                                             ((c = 
                                                 (e.i ^
                                                  ((b +
                                                    ((d = 
                                                        (e.j ^
                                                         ((b +
                                                           ((c = 
                                                               (e.k ^
                                                                ((b +
                                                                  ((d = 
                                                                      (e.l ^
                                                                       ((b +
                                                                         ((c = 
                                                                             (e.m ^
                                                                              ((b +
                                                                                ((d = 
                                                                                    (e.n ^
                                                                                     ((b +
                                                                                       ((c = 
                                                                                           (e.o ^
                                                                                            ((b +
                                                                                              ((d = (e.p ^
                                                                                                     ((b +
                                                                                                       ((c = (e.q ^
                                                                                                              ((b + ((d = f ^ d) >> 14 & 1020) + 1024)[0]:int +
                                                                                                               (b + (d >> 22 & 1020))[0]:int ^
                                                                                                               (b + (d >> 6 & 1020) + 2048)[0]:int) +
                                                                                                              (b + ((d & 255) << 2) + 3072)[0]:int) ^
                                                                                                             c) >>
                                                                                                        14 &
                                                                                                        1020) +
                                                                                                       1024)[0]:int +
                                                                                                      (b + (c >> 22 & 1020))[0]:int ^
                                                                                                      (b + (c >> 6 & 1020) + 2048)[0]:int) +
                                                                                                     (b + ((c & 255) << 2) + 3072)[0]:int) ^
                                                                                                    d) >>
                                                                                               14 &
                                                                                               1020) +
                                                                                              1024)[0]:int +
                                                                                             (b + (d >> 22 & 1020))[0]:int ^
                                                                                             (b + (d >> 6 & 1020) + 2048)[0]:int) +
                                                                                            (b + ((d & 255) << 2) + 3072)[0]:int) ^
                                                                                           c) >>
                                                                                        14 &
                                                                                        1020) +
                                                                                       1024)[0]:int +
                                                                                      (b + (c >> 22 & 1020))[0]:int ^
                                                                                      (b + (c >> 6 & 1020) + 2048)[0]:int) +
                                                                                     (b + ((c & 255) << 2) + 3072)[0]:int) ^
                                                                                    d) >>
                                                                                 14 &
                                                                                 1020) +
                                                                                1024)[0]:int +
                                                                               (b + (d >> 22 & 1020))[0]:int ^
                                                                               (b + (d >> 6 & 1020) + 2048)[0]:int) +
                                                                              (b + ((d & 255) << 2) + 3072)[0]:int) ^
                                                                             c) >>
                                                                          14 &
                                                                          1020) +
                                                                         1024)[0]:int +
                                                                        (b + (c >> 22 & 1020))[0]:int ^
                                                                        (b + (c >> 6 & 1020) + 2048)[0]:int) +
                                                                       (b + ((c & 255) << 2) + 3072)[0]:int) ^
                                                                      d) >>
                                                                   14 &
                                                                   1020) +
                                                                  1024)[0]:int +
                                                                 (b + (d >> 22 & 1020))[0]:int ^
                                                                 (b + (d >> 6 & 1020) + 2048)[0]:int) +
                                                                (b + ((d & 255) << 2) + 3072)[0]:int) ^
                                                               c) >>
                                                            14 &
                                                            1020) +
                                                           1024)[0]:int +
                                                          (b + (c >> 22 & 1020))[0]:int ^
                                                          (b + (c >> 6 & 1020) + 2048)[0]:int) +
                                                         (b + ((c & 255) << 2) + 3072)[0]:int) ^
                                                        d) >>
                                                     14 &
                                                     1020) +
                                                    1024)[0]:int +
                                                   (b + (d >> 22 & 1020))[0]:int ^
                                                   (b + (d >> 6 & 1020) + 2048)[0]:int) +
                                                  (b + ((d & 255) << 2) + 3072)[0]:int) ^
                                                 c) >>
                                              14 &
                                              1020) +
                                             1024)[0]:int +
                                            (b + (c >> 22 & 1020))[0]:int ^
                                            (b + (c >> 6 & 1020) + 2048)[0]:int) +
                                           (b + ((c & 255) << 2) + 3072)[0]:int) ^
                                          d) >>
                                       14 &
                                       1020) +
                                      1024)[0]:int +
                                     (b + (d >> 22 & 1020))[0]:int ^
                                     (b + (d >> 6 & 1020) + 2048)[0]:int) +
                                    (b + ((d & 255) << 2) + 3072)[0]:int) ^
                                   c) >>
                                14 &
                                1020) +
                               1024)[0]:int +
                              (b + (c >> 22 & 1020))[0]:int ^
                              (b + (c >> 6 & 1020) + 2048)[0]:int) +
                             (b + ((c & 255) << 2) + 3072)[0]:int) ^
                            d) >>
                         14 &
                         1020) +
                        1024)[0]:int +
                       (b + (d >> 22 & 1020))[0]:int ^
                       (b + (d >> 6 & 1020) + 2048)[0]:int) +
                      (b + ((d & 255) << 2) + 3072)[0]:int) ^
                     c) >>
                  14 &
                  1020) +
                 1024)[0]:int +
                (b + (c >> 22 & 1020))[0]:int ^
                (b + (c >> 6 & 1020) + 2048)[0]:int) +
               (b + ((c & 255) << 2) + 3072)[0]:int) ^
              d) >>
           14 &
           1020) +
          1024)[0]:int +
         (b + (d >> 22 & 1020))[0]:int ^
         (b + (d >> 6 & 1020) + 2048)[0]:int) +
        (b + ((d & 255) << 2) + 3072)[0]:int) ^
       c);
  b = 
    (e.b ^
     ((b + (c >> 14 & 1020) + 1024)[0]:int + (b + (c >> 22 & 1020))[0]:int ^
      (b + (c >> 6 & 1020) + 2048)[0]:int) +
     (b + ((c & 255) << 2) + 3072)[0]:int) ^
    d;
  label B_a:
  a.a = f;
  a.b = b;
}

export function BF_cfb64_encrypt(a:int, b:int, c:byte_ptr, d:int_ptr@1, e:int_ptr, f:int) {
  var i:int;
  var j:int;
  var g:int = stack_pointer - 16;
  stack_pointer = g;
  var h:ubyte_ptr = e[0];
  if (eqz(f)) goto B_d;
  if (c) goto B_c;
  b = h;
  goto B_a;
  label B_d:
  if (c) goto B_b;
  b = h;
  goto B_a;
  label B_c:
  i = c;
  j = h;
  h = a;
  c = b;
  loop L_e {
    c = c;
    h = h;
    f = i + -1;
    j = j;
    if (j) goto B_f;
    g[2]:int =
      ((i = d[0]) << 24 | (i & 65280) << 8) | ((i >> 8 & 65280) | i >> 24);
    g[3]:int =
      ((i = d[4]) << 24 | (i & 65280) << 8) | ((i >> 8 & 65280) | i >> 24);
    BF_encrypt(g + 8, 1);
    d[0] =
      ((i = g[2]:int) << 24 | (i & 65280) << 8) |
      ((i >> 8 & 65280) | i >> 24);
    d[4] =
      ((i = g[3]:int) << 24 | (i & 65280) << 8) |
      ((i >> 8 & 65280) | i >> 24);
    label B_f:
    c[0] = (b = (i = d + j)[0]:ubyte ^ h[0]);
    i[0]:byte = b;
    i = f;
    b = j + 1 & 7;
    j = b;
    h = h + 1;
    c = c + 1;
    b = b;
    if (f) continue L_e;
    goto B_a;
  }
  unreachable;
  label B_b:
  i = c;
  j = h;
  h = a;
  c = b;
  loop L_g {
    c = c;
    h = h;
    f = i + -1;
    j = j;
    if (j) goto B_h;
    g[2]:int =
      ((i = d[0]) << 24 | (i & 65280) << 8) | ((i >> 8 & 65280) | i >> 24);
    g[3]:int =
      ((i = d[4]) << 24 | (i & 65280) << 8) | ((i >> 8 & 65280) | i >> 24);
    BF_encrypt(g + 8, 1);
    d[0] =
      ((i = g[2]:int) << 24 | (i & 65280) << 8) |
      ((i >> 8 & 65280) | i >> 24);
    d[4] =
      ((i = g[3]:int) << 24 | (i & 65280) << 8) |
      ((i >> 8 & 65280) | i >> 24);
    label B_h:
    i = d + j;
    b = i[0]:ubyte;
    i[0]:byte = (a = h[0]);
    c[0] = b ^ a;
    i = f;
    b = j + 1 & 7;
    j = b;
    h = h + 1;
    c = c + 1;
    b = b;
    if (f) continue L_g;
  }
  label B_a:
  g[2]:long@4 = 0L;
  e[0] = b;
  stack_pointer = g + 16;
}

export function blowfish_main():int {
  var e:int;
  var f:int;
  var j:int;
  var a:int = stack_pointer - 112;
  stack_pointer = a;
  a[13]:long = 0L;
  a[1]:long = 0L;
  a[1]:int = 0;
  BF_set_key(8, a + 104);
  var b:int = 0;
  var c:int = 0;
  var d:int = 0;
  loop L_a {
    memcpy(
      a + 64,
      in_key + (d = d),
      e = 
        (f = select_if(e = select_if(d, 5199, d > 5199) - d, 39, e < 39)) + 1);
    BF_cfb64_encrypt(a + 64, a + 16, e, a + 8, a + 4, 1);
    var g:int = d + f;
    var h:int = g + 1;
    d = c;
    var i:int = d + 1;
    b = b;
    c = d;
    e = 0;
    loop L_b {
      j = out_key;
      j = b + ((a + 16 + (d = e))[0]:ubyte != (j + (c = c))[0]:ubyte);
      b = j;
      c = c + 1;
      e = d + 1;
      if (d != f) continue L_b;
    }
    b = j;
    c = i + f;
    d = h;
    if (g <= 5198) continue L_a;
  }
  stack_pointer = a + 112;
  return j;
}

export function submain():int {
  var b:int;
  var d:int;
  var e:double;
  var a:int = stack_pointer - 64;
  stack_pointer = a;
  b = gettimeofday(a + 48, 0);
  if (eqz(b)) goto B_a;
  a[8]:int = b;
  iprintf(memory_base + 14576, a + 32);
  label B_a:
  b = a[14]:int;
  var c:long = a[6]:long;
  startTimer[0]:double =
    f64_convert_i32_s(b) * 0.000001 + f64_convert_i64_s(c);
  b = blowfish_main();
  d = gettimeofday(a + 48, 0);
  if (eqz(d)) goto B_b;
  a[4]:int = d;
  iprintf(memory_base + 14576, a + 16);
  label B_b:
  d = a[14]:int;
  c = a[6]:long;
  endTimer[0]:double =
    (e = f64_convert_i32_s(d) * 0.000001 + f64_convert_i64_s(c));
  a[0]:double = e - startTimer[0]:double;
  small_printf(memory_base + 14611, a);
  stack_pointer = a + 64;
  return b;
}

