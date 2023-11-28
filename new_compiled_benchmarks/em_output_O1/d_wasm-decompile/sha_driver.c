import memory env_memory;

import global stack_pointer:int;
import global memory_base:int;
import global table_base:int;
export import global sha_info_data:int;
export import global sha_info_digest:int;
export import global sha_info_count_lo:int;
export import global sha_info_count_hi:int;
export import global indata:int;
export import global in_i:int;
export import global startTimer:int;
export import global outData:int;
export import global endTimer:int;
global sha_info_data_1:int = 16464;
global sha_info_digest_1:int = 16528;
global sha_info_count_lo_1:int = 16548;
global sha_info_count_hi_1:int = 16552;
global indata_1:int = 0;
global in_i_1:int = 16384;
global startTimer_1:int = 16560;
global outData_1:int = 16400;
global endTimer_1:int = 16568;

data data(offset: memory_base) =
  "KurtVonnegutsCommencementAddressatMITLadiesandgentlemenoftheclassof97W"
  "earsunscreenIfIcouldofferyouonlyonetipforthefuturesunscreenwouldbeitTh"
  "elongtermbenefitsofsunscreenhavebeenprovedbyscientistswhereastherestof"
  "myadvicehasnobasismorereliablethanmyownmeanderingexperienceIwilldispen"
  "sethisadvicenowEnjoythepowerandbeautyofyouryouthOhnevermindYouwillnotu"
  "nderstandthepowerandbeautyofyouryouthuntiltheyvefadedButtrustmein20yea"
  "rsyoulllookbackatphotosofyourselfandrecallinawayyoucantgraspnowhowmuch"
  "possibilitylaybeforeyouandhowfabulousyoureallylookedYouarenotasfatasyo"
  "uimagineDontworryaboutthefutureOrworrybutknowthatKurtVonneguKurtVonneg"
  "utsCommencementAddressatMITLadiesandgentlemenoftheclassof97Wearsunscre"
  "enIfIcouldofferyouonlyonetipforthefuturesunscreenwouldbeitThelongtermb"
  "enefitsofsunscreenhavebeenprovedbyscientistswhereastherestofmyadviceha"
  "snobasismorereliablethanmyownmeanderingexperienceIwilldispensethisadvi"
  "cenowEnjoythepowerandbeautyofyouryouthOhnevermindYouwillnotunderstandt"
  "hepowerandbeautyofyouryouthuntiltheyvefadedButtrustmein20yearsyoullloo"
  "kbackatphotosofyourselfandrecallinawayyoucantgraspnowhowmuchpossibilit"
  "ylaybeforeyouandhowfabulousyoureallylookedYouarenotasfatasyouimagineDo"
  "ntworryaboutthefutureOrworrybutknowthatKurtVonnegutsCommencementAddres"
  "satMITLadiesandgentlemenoftheclassof97WearsunscreenIfIcouldofferyouonl"
  "yonetipforthefuturesunscreenwouldbeitThelongtermbenefitsofsunscreenhav"
  "ebeenprovedbyscientistswhereastherestofmyadvicehasnobasismorereliablet"
  "hanmyownmeanderingexperienceIwilldispensethisadvicenowEnjoythepowerand"
  "beautyofyouryouthOhnevermindYouwillnotunderstandthepowerandbeautyofyou"
  "ryouthuntiltheyvefadedButtrustmein20yearsyoulllookbackatphotosofyourse"
  "lfandrecallinawayyoucantgraspnowhowmuchpossibilitylaybeforeyouandhowfa"
  "bulousyoureallylookedYouarenotasfatasyouimagineDontworryaboutthefuture"
  "OrworrybutknowthatKurtVonnegutsCommencementAddressatMITLadiesandgentle"
  "menoftheclassof97WearsunscreenIfIcouldofferyouonlyonetipforthefuturesu"
  "nscreenwouldbeitThelongtermbenefitsofsunscreenhavebeenprovedbyscientis"
  "tswhereastherestofmyadvicehasnobasismorereliablethanmyownmeanderingexp"
  "erienceIwilldispensethisadvicenowEnjoythepowerandbeautyofyouryouthOhne"
  "vermindYouwillnotunderstandthepowerandbeautyofyouryouthuntiltheyvefade"
  "dButtrustmein20yearsyoulllookbackatphotosofyourselfandrecallinawayyouc"
  "antgraspnowhowmuchpossibilitylaybeforeyouandhowfabulousyoureallylooked"
  "YouarenotasfatasyouimagineDontworryaboutthefutureOrworryKurtVonnegutsC"
  "ommencementAddressatMITLadiesandgentlemenoftheclassof97WearsunscreenIf"
  "IcouldofferyouonlyonetipforthefuturesunscreenwouldbeitThelongtermbenef"
  "itsofsunscreenhavebeenprovedbyscientistswhereastherestofmyadvicehasnob"
  "asismorereliablethanmyownmeanderingexperienceIwilldispensethisadviceno"
  "wEnjoythepowerandbeautyofyouryouthOhnevermindYouwillnotunderstandthepo"
  "werandbeautyofyouryouthuntiltheyvefadedButtrustmein20yearsyoulllookbac"
  "katphotosofyourselfandrecallinawayyoucantgraspnowhowmuchpossibilitylay"
  "beforeyouandhowfabulousyoureallylookedYouarenotasfatasyouimagineDontwo"
  "rryaboutthefutureOrworrybutknowthatKurtVonneguKurtVonnegutsCommencemen"
  "tAddressatMITLadiesandgentlemenoftheclassof97WearsunscreenIfIcouldoffe"
  "ryouonlyonetipforthefuturesunscreenwouldbeitThelongtermbenefitsofsunsc"
  "reenhavebeenprovedbyscientistswhereastherestofmyadvicehasnobasismorere"
  "liablethanmyownmeanderingexperienceIwilldispensethisadvicenowEnjoythep"
  "owerandbeautyofyouryouthOhnevermindYouwillnotunderstandthepowerandbeau"
  "tyofyouryouthuntiltheyvefadedButtrustmein20yearsyoulllookbackatphotoso"
  "fyourselfandrecallinawayyoucantgraspnowhowmuchpossibilitylaybeforeyoua"
  "ndhowfabulousyoureallylookedYouarenotasfatasyouimagineDontworryaboutth"
  "efutureOrworrybutknowthatKurtVonnegutsCommencementAddressatMITLadiesan"
  "dgentlemenoftheclassof97WearsunscreenIfIcouldofferyouonlyonetipforthef"
  "uturesunscreenwouldbeitThelongtermbenefitsofsunscreenhavebeenprovedbys"
  "cientistswhereastherestofmyadvicehasnobasismorereliablethanmyownmeande"
  "ringexperienceIwilldispensethisadvicenowEnjoythepowerandbeautyofyouryo"
  "uthOhnevermindYouwillnotunderstandthepowerandbeautyofyouryouthuntilthe"
  "yvefadedButtrustmein20yearsyoulllookbackatphotosofyourselfandrecallina"
  "wayyoucantgraspnowhowmuchpossibilitylaybeforeyouandhowfabulousyoureall"
  "ylookedYouarenotasfatasyouimagineDontworryaboutthefutureOrworrybutknow"
  "thatKurtVonnegutsCommencementAddressatMITLadiesandgentlemenoftheclasso"
  "f97WearsunscreenIfIcouldofferyouonlyonetipforthefuturesunscreenwouldbe"
  "itThelongtermbenefitsofsunscreenhavebeenprovedbyscientistswhereasthere"
  "stofmyadvicehasnobasismorereliablethanmyownmeanderingexperienceIwilldi"
  "spensethisadvicenowEnjoythepowerandbeautyofyouryouthOhnevermindYouwill"
  "notunderstandthepowerandbeautyofyouryouthuntiltheyvefadedButtrustmein2"
  "0yearsyoulllookbackatphotosofyourselfandrecallinawayyoucantgraspnowhow"
  "muchpossibilitylaybeforeyouandhowfabulousyoureallylookedYouarenotasfat"
  "asyouimagineDontworryaboutthefutureOrworrybutknowthattsCommencementAdd"
  "ressatMITLadiesandgentlemenoftheclassof97WearsunscreenIfIcouldofferyou"
  "onlyonetipforthefutureKurtVonnegutsCommencementAddressatMITLadiesandge"
  "ntlemenoftheclassof97WearsunscreenIfIcouldofferyouonlyonetipforthefutu"
  "resunscreenwouldbeitThelongtermbenefitsofsunscreenhavebeenprovedbyscie"
  "ntistswhereastherestofmyadvicehasnobasismorereliablethanmyownmeanderin"
  "gexperienceIwilldispensethisadvicenowEnjoythepowerandbeautyofyouryouth"
  "OhnevermindYouwillnotunderstandthepowerandbeautyofyouryouthuntiltheyve"
  "fadedButtrustmein20yearsyoulllookbackatphotosofyourselfandrecallinaway"
  "youcantgraspnowhowmuchpossibilitylaybeforeyouandhowfabulousyoureallylo"
  "okedYouarenotasfatasyouimagineDontworryaboutthefutureOrworrybutknowtha"
  "tKurtVonnegutsCommencementAddressatMITLadiesandgentlemenoftheclassof97"
  "WearsunscreenIfIcouldofferyouonlyonetipforthefuturesunscreenwouldbeitT"
  "helongtermbenefitsofsunscreenhavebeenprovedbyscientistswhereastheresto"
  "fmyadvicehasnobasismorereliablethanmyownmeanderingexperienceIwilldispe"
  "nsethisadvicenowEnjoythepowerandbeautyofyouryouthOhnevermindYouwillnot"
  "understandthepowerandbeautyofyouryouthuntiltheyvefadedButtrustmein20ye"
  "arsyoulllookbackatphotosofyourselfandrecallinawayyoucantgraspnowhowmuc"
  "hpossibilitylaybeforeyouandhowfabulousyoureallylookedYouarenotasfatasy"
  "ouimagineDontworryaboutthefutureOrworrybutknowthatKurtVonnegutsCommenc"
  "ementAddressatMITLadiesandgentlemenoftheclassof97WearsunscreenIfIcould"
  "offeryouonlyonetipforthefuturesunscreenwouldbeitThelongtermbenefitsofs"
  "unscreenhavebeenprovedbyscientistswhereastherestofmyadvicehasnobasismo"
  "rereliablethanmyownmeanderingexperienceIwilldispensethisadvicenowEnjoy"
  "thepowerandbeautyofyouryouthOhnevermindYouwillnotunderstandthepoweraKu"
  "rtVonnegutsCommencementAddressatMITLadiesandgentlemenoftheclassof97Wea"
  "rsunscreenIfIcouldofferyouonlyonetipforthefuturesunscreenwouldbeitThel"
  "ongtermbenefitsofsunscreenhavebeenprovedbyscientistswhereastherestofmy"
  "advicehasnobasismorereliablethanmyownmeanderingexperienceIwilldispense"
  "thisadvicenowEnjoythepowerandbeautyofyouryouthOhnevermindYouwillnotund"
  "erstandthepowerandbeautyofyouryouthuntiltheyvefadedButtrustmein20years"
  "youlllookbackatphotosofyourselfandrecallinawayyoucantgraspnowhowmuchpo"
  "ssibilitylaybeforeyouandhowfabulousyoureallylookedYouarenotasfatasyoui"
  "magineDontworryaboutthefutureOrworrybutknowthatKurtVonneguKurtVonnegut"
  "sCommencementAddressatMITLadiesandgentlemenoftheclassof97Wearsunscreen"
  "IfIcouldofferyouonlyonetipforthefuturesunscreenwouldbeitThelongtermben"
  "efitsofsunscreenhavebeenprovedbyscientistswhereastherestofmyadvicehasn"
  "obasismorereliablethanmyownmeanderingexperienceIwilldispensethisadvice"
  "nowEnjoythepowerandbeautyofyouryouthOhnevermindYouwillnotunderstandthe"
  "powerandbeautyofyouryouthuntiltheyvefadedButtrustmein20yearsyoulllookb"
  "ackatphotosofyourselfandrecallinawayyoucantgraspnowhowmuchpossibilityl"
  "aybeforeyouandhowfabulousyoureallylookedYouarenotasfatasyouimagineDont"
  "worryaboutthefutureOrworrybutknowthatKurtVonnegutsCommencementAddressa"
  "tMITLadiesandgentlemenoftheclassof97WearsunscreenIfIcouldofferyouonlyo"
  "netipforthefuturesunscreenwouldbeitThelongtermbenefitsofsunscreenhaveb"
  "eenprovedbyscientistswhereastherestofmyadvicehasnobasismorereliabletha"
  "nmyownmeanderingexperienceIwilldispensethisadvicenowEnjoythepowerandbe"
  "autyofyouryouthOhnevermindYouwillnotunderstandthepowerandbeautyofyoury"
  "outhuntiltheyvefadedButtrustmein20yearsyoulllookbackatphotosofyourself"
  "andrecallinawayyoucantgraspnowhowmuchpossibilitylaybeforeyouandhowfabu"
  "lousyoureallylookedYouarenotasfatasyouimagineDontworryaboutthefutureOr"
  "worrybutknowthatKurtVonnegutsCommencementAddressatMITLadiesandgentleme"
  "noftheclassof97WearsunscreenIfIcouldofferyouonlyonetipforthefuturesuns"
  "creenwouldbeitThelongtermbenefitsofsunscreenhavebeenprovedbyscientists"
  "whereastherestofmyadvicehasnobasismorereliablethanmyownmeanderingexper"
  "ienceIwilldispensethisadvicenowEnjoythepowerandbeautyofyouryouthOhneve"
  "rmindYouwillnotunderstandthepowerandbeautyofyouryouthuntiltheyvefadedB"
  "uttrustmein20yearsyoulllookbackatphotosofyourselfandrecallinawayyoucan"
  "tgraspnowhowmuchpossibilitylaybeforeyouandhowfabulousyoureallylookedYo"
  "uarenotasfatasyouimagineDontworryaboutthefutureOrworrybutknowthattsCom"
  "mencementAddressatMITLadiesandgentlemenoftheclassof97WearsunscreenIfIc"
  "ouldofferyouonlyonetipforthefutureKurtVonnegutsCommencementAddressatMI"
  "TLadiesandgentlemenoftheclassof97WearsunscreenIfIcouldofferyouonlyonet"
  "ipforthefuturesunscreenwouldbeitThelongtermbenefitsofsunscreenhavebeen"
  "provedbyscientistswhereastherestofmyadvicehasnobasismorereliablethanmy"
  "ownmeanderingexperienceIwilldispensethisadvicenowEnjoythepowerandbeaut"
  "yofyouryouthOhnevermindYouwillnotunderstandthepowerandbeautyofyouryout"
  "huntiltheyvefadedButtrustmein20yearsyoulllookbackatphotosofyourselfand"
  "recallinawayyoucantgraspnowhowmuchpossibilitylaybeforeyouandhowfabulou"
  "syoureallylookedYouarenotasfatasyouimagineDontworryaboutthefutureOrwor"
  "rybutknowthatKurtVonnegutsCommencementAddressatMITLadiesandgentlemenof"
  "theclassof97WearsunscreenIfIcouldofferyouonlyonetipforthefuturesunscre"
  "enwouldbeitThelongtermbenefitsofsunscreenhavebeenprovedbyscientistswhe"
  "reastherestofmyadvicehasnobasismorereliablethanmyownmeanderingexperien"
  "ceIwilldispensethisadvicenowEnjoythepowerandbeautyofyouryouthOhnevermi"
  "ndYouwillnotunderstandthepowerandbeautyofyouryouthuntiltheyvefadedButt"
  "rustmein20yearsyoulllookbackatphotosofyourselfandrecallinawayyoucantgr"
  "aspnowhowmuchpossibilitylaybeforeyouandhowfabulousyoureallylookedYouar"
  "enotasfatasyouimagineDontworryaboutthefutureOrworrybutknowthatKurtVonn"
  "egutsCommencementAddressatMITLadiesandgentlemenoftheclassof97Wearsunsc"
  "reenIfIcouldofferyouonlyonetipforthefuturesunscreenwouldbeitThelongter"
  "mbenefitsofsunscreenhavebeenprovedbyscientistswhereastherestofmyadvice"
  "hasnobasismorereliablethanmyownmeanderingexperienceIwilldispensethisad"
  "vicenowEnjoythepowerandbeautyofyouryouthOhnevermindYouwillnotunderstan"
  "dthepoweraKurtVonnegutsCommencementAddressatMITLadiesandgentlemenofthe"
  "classof97WearsunscreenIfIcouldofferyouonlyonetipforthefuturesunscreenw"
  "ouldbeitThelongtermbenefitsofsunscreenhavebeenprovedbyscientistswherea"
  "stherestofmyadvicehasnobasismorereliablethanmyownmeanderingexperienceI"
  "willdispensethisadvicenowEnjoythepowerandbeautyofyouryouthOhnevermindY"
  "ouwillnotunderstandthepowerandbeautyofyouryouthuntiltheyvefadedButtrus"
  "tmein20yearsyoulllookbackatphotosofyourselfandrecallinawayyoucantgrasp"
  "nowhowmuchpossibilitylaybeforeyouandhowfabulousyoureallylookedYouareno"
  "tasfatasyouimagineDontworryaboutthefutureOrworrybutknowthatKurtVonnegu"
  "KurtVonnegutsCommencementAddressatMITLadiesandgentlemenoftheclassof97W"
  "earsunscreenIfIcouldofferyouonlyonetipforthefuturesunscreenwouldbeitTh"
  "elongtermbenefitsofsunscreenhavebeenprovedbyscientistswhereastherestof"
  "myadvicehasnobasismorereliablethanmyownmeanderingexperienceIwilldispen"
  "sethisadvicenowEnjoythepowerandbeautyofyouryouthOhnevermindYouwillnotu"
  "nderstandthepowerandbeautyofyouryouthuntiltheyvefadedButtrustmein20yea"
  "rsyoulllookbackatphotosofyourselfandrecallinawayyoucantgraspnowhowmuch"
  "possibilitylaybeforeyouandhowfabulousyoureallylookedYouarenotasfatasyo"
  "uimagineDontworryaboutthefutureOrworrybutknowthatKurtVonnegutsCommence"
  "mentAddressatMITLadiesandgentlemenoftheclassof97WearsunscreenIfIcouldo"
  "fferyouonlyonetipforthefuturesunscreenwouldbeitThelongtermbenefitsofsu"
  "nscreenhavebeenprovedbyscientistswhereastherestofmyadvicehasnobasismor"
  "ereliablethanmyownmeanderingexperienceIwilldispensethisadvicenowEnjoyt"
  "hepowerandbeautyofyouryouthOhnevermindYouwillnotunderstandthepowerandb"
  "eautyofyouryouthuntiltheyvefadedButtrustmein20yearsyoulllookbackatphot"
  "osofyourselfandrecallinawayyoucantgraspnowhowmuchpossibilitylaybeforey"
  "ouandhowfabulousyoureallylookedYouarenotasfatasyouimagineDontworryabou"
  "tthefutureOrworrybutknowthatKurtVonnegutsCommencementAddressatMITLadie"
  "sandgentlemenoftheclassof97WearsunscreenIfIcouldofferyouonlyonetipfort"
  "hefuturesunscreenwouldbeitThelongtermbenefitsofsunscreenhavebeenproved"
  "byscientistswhereastherestofmyadvicehasnobasismorereliablethanmyownmea"
  "nderingexperienceIwilldispensethisadvicenowEnjoythepowerandbeautyofyou"
  "ryouthOhnevermindYouwillnotunderstandthepowerandbeautyofyouryouthuntil"
  "theyvefadedButtrustmein20yearsyoulllookbackatphotosofyourselfandrecall"
  "inawayyoucantgraspnowhowmuchpossibilitylaybeforeyouandhowfabulousyoure"
  "allylookedYouarenotasfatasyouimagineDontworryaboutthefutureOrworrybutk"
  "nowthattsCommencementAddressatMITLadiesandgentlemenoftheclassof97Wears"
  "unscreenIfIcouldofferyouonlyonetipforthefutureKurtVonnegutsCommencemen"
  "tAddressatMITLadiesandgentlemenoftheclassof97WearsunscreenIfIcouldoffe"
  "ryouonlyonetipforthefuturesunscreenwouldbeitThelongtermbenefitsofsunsc"
  "reenhavebeenprovedbyscientistswhereastherestofmyadvicehasnobasismorere"
  "liablethanmyownmeanderingexperienceIwilldispensethisadvicenowEnjoythep"
  "owerandbeautyofyouryouthOhnevermindYouwillnotunderstandthepowerandbeau"
  "tyofyouryouthuntiltheyvefadedButtrustmein20yearsyoulllookbackatphotoso"
  "fyourselfandrecallinawayyoucantgraspnowhowmuchpossibilitylaybeforeyoua"
  "ndhowfabulousyoureallylookedYouarenotasfatasyouimagineDontworryaboutth"
  "efutureOrworrybutknowthatKurtVonnegutsCommencementAddressatMITLadiesan"
  "dgentlemenoftheclassof97WearsunscreenIfIcouldofferyouonlyonetipforthef"
  "uturesunscreenwouldbeitThelongtermbenefitsofsunscreenhavebeenprovedbys"
  "cientistswhereastherestofmyadvicehasnobasismorereliablethanmyownmeande"
  "ringexperienceIwilldispensethisadvicenowEnjoythepowerandbeautyofyouryo"
  "uthOhnevermindYouwillnotunderstandthepowerandbeautyofyouryouthuntilthe"
  "yvefadedButtrustmein20yearsyoulllookbackatphotosofyourselfandrecallina"
  "wayyoucantgraspnowhowmuchpossibilitylaybeforeyouandhowfabulousyoureall"
  "ylookedYouarenotasfatasyouimagineDontworryaboutthefutureOrworrybutknow"
  "thatKurtVonnegutsCommencementAddressatMITLadiesandgentlemenoftheclasso"
  "f97WearsunscreenIfIcouldofferyouonlyonetipforthefuturesunscreenwouldbe"
  "itThelongtermbenefitsofsunscreenhavebeenprovedbyscientistswhereasthere"
  "stofmyadvicehasnobasismorereliablethanmyownmeanderingexperienceIwilldi"
  "spensethisadvicenowEnjoythepowerandbeautyofyouryouthOhnevermindYouwill"
  "notunderstandthepowerandbeautyofyouryouthuntiltheyvefadedButtrustmein2"
  "0yearsyoulllookbackatphotosofyourselfandrecallinawayyoucantgraspnowhow"
  "muchpossibilitylaybeforeyouandhowfabulousyoureallylookedYouarenotasfat"
  "asyouimagineDontworryaboutthefutureOrworrybutknowthatsunscreenwouldbei"
  "tThelongtermbenefitsofsunscreenhavebeenprovedbyscientistswhereastheres"
  "tofmyadvicehasnobasismorereliablethanmyownmeanderingexperienceIwilldis"
  "pensethisadvicenowEnjoythepowerandbeautyofyouryouthOhnevermindYouwilln"
  "otunderstandthepowerandbeautyofyouryouthuntiltheyvefadedButtrustmein20"
  "yearsyoulllookbackatphotosofyourselfandrecallinawayyoucantgraspnowhowm"
  "uchpossibilitylaybeforeyouandhowfabulousyoureallylookedYouarenotasfata"
  "syouimagineDontworryaboutthefutureOrworrybutknowthatndbeautyofyouryout"
  "huntiltheyvefadedButtrustmein20yearsyoulllookbackatphotosofyourselfand"
  "recallinawayyoucantgraspnowhowmuchpossibilitylaybeforeyouandhowfabulou"
  "syoureallylookedYouarenotasfatasyouimagineDontworryaboutthefutureOrwor"
  "rybutknowthatsunscreenwouldbeitThelongtermbenefitsofsunscreenhavebeenp"
  "rovedbyscientistswhereastherestofmyadvicehasnobasismorereliablethanmyo"
  "wnmeanderingexperienceIwilldispensethisadvicenowEnjoythepowerandbeauty"
  "ofyouryouthOhnevermindYouwillnotunderstandthepowerandbeautyofyouryouth"
  "untiltheyvefadedButtrustmein20yearsyoulllookbackatphotosofyourselfandr"
  "ecallinawayyoucantgraspnowhowmuchpossibilitylaybeforeyouandhowfabulous"
  "youreallylookedYouarenotasfatasyouimagineDontworryaboutthefutureOrworr"
  "ybutknowthatndbeautyofyouryouthuntiltheyvefadedButtrustmein20yearsyoul"
  "lloo\00 \00\00\00 \00\00\00\00\00\00\00\00\00\007Zj\00\85\94\dc\93\12!"
  "A,C\ba\f7c"\f9s\adError return from gettimeofday: %d\00%0.6f\0a\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00";

import function memset(a:int, b:int, c:int):int;

import function gettimeofday(a:int, b:int):int;

import function iprintf(a:int, b:int):int;

import function small_printf(a:int, b:int):int;

export function wasm_call_ctors() {
}

export function wasm_apply_data_relocs() {
}

export function local_memset(a:int, b:int, c:int, d:int_ptr) {
  if (c < 4) goto B_a;
  c = c / 4;
  d = a + select_if(d << 2, 0, d > 0);
  loop L_b {
    d = d;
    d[0] = b;
    a = c;
    c = a + -1;
    d = d + 4;
    if (a > 1) continue L_b;
  }
  label B_a:
}

export function local_memcpy(a:int_ptr, b:int_ptr@1, c:int) {
  if (c < 4) goto B_a;
  c = c / 4;
  a = a;
  b = b;
  loop L_b {
    a = a;
    a[0] = (b = b)[0];
    var d:int = c;
    c = d + -1;
    a = a + 4;
    b = b + 4;
    if (d > 1) continue L_b;
  }
  label B_a:
}

export function sha_transform() {
  var b:int;
  var c:int;
  var o:int;
  var p:int;
  var q:int;
  var r:int;
  var n:int;
  var a:{ a:long, b:long } = stack_pointer - 320;
  stack_pointer = a;
  (a + 56)[0]:long = ((b = sha_info_data) + 56)[0]:long;
  (a + 48)[0]:long = (b + 48)[0]:long;
  (a + 40)[0]:long = (b + 40)[0]:long;
  (a + 32)[0]:long = (b + 32)[0]:long;
  (a + 24)[0]:long = (b + 24)[0]:long;
  (a + 16)[0]:long = (b + 16)[0]:long;
  a.a = b[0]:long;
  a.b = (b + 8)[0]:long;
  b = 16;
  loop L_a {
    b = a + ((c = b) << 2);
    b[0]:int =
      (((b + -32)[0]:int ^ (b + -12)[0]:int) ^ (b + -56)[0]:int) ^
      (b + -64)[0]:int;
    c = c + 1;
    b = c;
    if (c != 80) continue L_a;
  }
  b = sha_info_digest;
  var d:int = b[4]:int;
  c = d;
  var e:int = b[3]:int;
  var f:int = e;
  var g:int = b[2]:int;
  var h:int = g;
  var i:int = b[1]:int;
  var j:int = i;
  var k:int = b[0]:int;
  var l:int = k;
  var m:int = 0;
  loop L_b {
    n = c;
    o = f;
    c = o;
    p = h;
    f = p;
    b = j;
    q = b << 30;
    h = q;
    r = l;
    j = r;
    n = 
      n + (r << 5) + (p & b) + (o & (b ^ -1)) + a[b = m]:int + 1518500249;
    l = n;
    b = b + 1;
    m = b;
    if (b != 20) continue L_b;
  }
  b = o;
  c = p;
  f = q;
  h = r;
  j = n;
  l = 20;
  loop L_c {
    r = b;
    m = c;
    b = m;
    o = f;
    c = o;
    n = h;
    q = n << 30;
    f = q;
    p = j;
    h = p;
    n = r + (p << 5) + (m ^ (o ^ n)) + a[l = l]:int + 1859775393;
    j = n;
    r = l + 1;
    l = r;
    if (r != 40) continue L_c;
  }
  f = m;
  h = o;
  j = q;
  l = p;
  m = n;
  o = 40;
  loop L_d {
    r = f;
    b = h;
    f = b;
    c = j;
    h = c;
    n = l;
    q = n << 30;
    j = q;
    p = m;
    l = p;
    n = 
      r + (p << 5) + ((n & (b | c)) | (b & c)) + a[o = o]:int + -1894007588;
    m = n;
    r = o + 1;
    o = r;
    if (r != 60) continue L_d;
  }
  b = b;
  c = c;
  f = q;
  h = p;
  j = n;
  l = 60;
  loop L_e {
    r = b;
    m = c;
    b = m;
    o = f;
    c = o;
    n = h;
    q = n << 30;
    f = q;
    p = j;
    h = p;
    n = r + (p << 5) + (m ^ (o ^ n)) + a[l = l]:int + -899497514;
    j = n;
    r = l + 1;
    l = r;
    if (r != 80) continue L_e;
  }
  b = sha_info_digest;
  b[4]:int = m + d;
  b[3]:int = o + e;
  b[2]:int = q + g;
  b[1]:int = p + i;
  b[0]:int = n + k;
  stack_pointer = a + 320;
}

export function sha_init() {
  var a:{ a:long, b:long, c:int } = sha_info_digest;
  a.c = -1009589776;
  a.b = 1167088121787636990L;
  a.a = -1167088121787636991L;
  sha_info_count_lo[0]:int = 0;
  sha_info_count_hi[0]:int = 0;
}

export function sha_update(a:int_ptr, b:int) {
  var d:int;
  var c:int;
  var e:int_ptr;
  c = b << 3;
  if (c <= ((d = sha_info_count_lo[0]:int) ^ -1)) goto B_a;
  e = sha_info_count_hi;
  e[0] = e[0] + 1;
  label B_a:
  sha_info_count_lo[0]:int = d + c;
  c = sha_info_count_hi;
  c[0]:int = c[0]:int + (b >> 29);
  if (b >= 64) goto B_c;
  d = a;
  a = b;
  goto B_b;
  label B_c:
  b = b;
  c = a;
  loop L_d {
    e = b;
    b = 16;
    a = sha_info_data;
    var f:int = c;
    c = f;
    loop L_e {
      a = a;
      a[0] = (c = c)[0]:int@1;
      d = b;
      b = d + -1;
      a = a + 4;
      c = c + 4;
      if (d > 1) continue L_e;
    }
    sha_transform();
    a = e + -64;
    b = a;
    d = f + 64;
    c = d;
    d = d;
    a = a;
    if (e > 127) continue L_d;
  }
  label B_b:
  c = d;
  b = a;
  if (b < 4) goto B_f;
  b = b / 4;
  a = sha_info_data;
  c = c;
  loop L_g {
    a = a;
    a[0] = (c = c)[0]:int@1;
    d = b;
    b = d + -1;
    a = a + 4;
    c = c + 4;
    if (d > 1) continue L_g;
  }
  label B_f:
}

export function sha_final() {
  var b:int;
  var a:int = sha_info_count_lo[0]:int;
  sha_info_data[b = a >> 3 & 63]:int = 128;
  var c:int = b + 1;
  var d:int = sha_info_count_hi[0]:int;
  if (b < 56) goto B_b;
  b = b ^ 63;
  if (b < 4) goto B_c;
  memset(sha_info_data + (c << 2), 0, select_if(b = b >> 2, 1, b > 1) << 2);
  label B_c:
  sha_transform();
  b = sha_info_data;
  b[0]:long = 0L;
  (b + 48)[0]:long = 0L;
  (b + 40)[0]:long = 0L;
  (b + 32)[0]:long = 0L;
  (b + 24)[0]:long = 0L;
  (b + 16)[0]:long = 0L;
  (b + 8)[0]:long = 0L;
  goto B_a;
  label B_b:
  if (b > 51) goto B_a;
  memset(sha_info_data + (c << 2),
         0,
         select_if(b = (55 - b) / 4, 1, b > 1) << 2);
  label B_a:
  b = sha_info_data;
  b[15]:int = a;
  b[14]:int = d;
  sha_transform();
}

export function sha_stream() {
  var a:int = sha_info_digest;
  a[4]:int = -1009589776;
  a[1]:long = 1167088121787636990L;
  a[0]:long = -1167088121787636991L;
  sha_info_count_lo[0]:int = 0;
  sha_info_count_hi[0]:int = 0;
  var b:int = 0;
  loop L_a {
    sha_update(indata + ((a = b) << 13), in_i[a]:int);
    b = a + 1;
    if (eqz(a)) continue L_a;
  }
  b = sha_info_count_lo[0]:int;
  sha_info_data[a = b >> 3 & 63]:int = 128;
  var c:int = a + 1;
  var d:int = sha_info_count_hi[0]:int;
  if (a < 56) goto B_c;
  a = a ^ 63;
  if (a < 4) goto B_d;
  memset(sha_info_data + (c << 2), 0, select_if(a = a >> 2, 1, a > 1) << 2);
  label B_d:
  sha_transform();
  a = sha_info_data;
  a[0]:long = 0L;
  (a + 48)[0]:long = 0L;
  (a + 40)[0]:long = 0L;
  (a + 32)[0]:long = 0L;
  (a + 24)[0]:long = 0L;
  (a + 16)[0]:long = 0L;
  (a + 8)[0]:long = 0L;
  goto B_b;
  label B_c:
  if (a > 51) goto B_b;
  memset(sha_info_data + (c << 2),
         0,
         select_if(a = (55 - a) / 4, 1, a > 1) << 2);
  label B_b:
  a = sha_info_data;
  a[15]:int = b;
  a[14]:int = d;
  sha_transform();
}

export function submain():int {
  var b:int;
  var g:double;
  var e:int;
  var a:int = stack_pointer - 64;
  stack_pointer = a;
  b = gettimeofday(a + 48, 0);
  if (eqz(b)) goto B_a;
  a[8]:int = b;
  iprintf(memory_base + 16420, a + 32);
  label B_a:
  b = a[14]:int;
  var c:long = a[6]:long;
  startTimer[0]:double =
    f64_convert_i32_s(b) * 0.000001 + f64_convert_i64_s(c);
  sha_stream();
  b = 0;
  var d:int = 0;
  loop L_b {
    e = 
      b +
      ((outData + (b = (d = d) << 2))[0]:int != (sha_info_digest + b)[0]:int);
    b = e;
    var f:int = d + 1;
    d = f;
    if (f != 5) continue L_b;
  }
  b = gettimeofday(a + 48, 0);
  if (eqz(b)) goto B_c;
  a[4]:int = b;
  iprintf(memory_base + 16420, a + 16);
  label B_c:
  b = a[14]:int;
  c = a[6]:long;
  endTimer[0]:double =
    (g = f64_convert_i32_s(b) * 0.000001 + f64_convert_i64_s(c));
  a[0]:double = g - startTimer[0]:double;
  small_printf(memory_base + 16455, a);
  stack_pointer = a + 64;
  return e;
}

