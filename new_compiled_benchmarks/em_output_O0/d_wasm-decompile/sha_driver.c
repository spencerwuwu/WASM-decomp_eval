import memory env_memory;

import global stack_pointer:int;
import global memory_base:int;
import global table_base:int;
export import global sha_info_data:int;
export import global sha_info_digest:int;
export import global sha_info_count_lo:int;
export import global sha_info_count_hi:int;
export import global in_i:int;
export import global indata:int;
export import global startTimer:int;
export import global outData:int;
export import global endTimer:int;
global sha_info_data_1:int = 16464;
global sha_info_digest_1:int = 16528;
global sha_info_count_lo_1:int = 16548;
global sha_info_count_hi_1:int = 16552;
global in_i_1:int = 16384;
global indata_1:int = 0;
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

import function printf(a:int, b:int):int;

import function gettimeofday(a:int, b:int):int;

export function wasm_call_ctors() {
}

export function wasm_apply_data_relocs() {
}

export function local_memset(a:int, b:int, c:int, d:int) {
  var e:int = stack_pointer;
  var f:int = 32;
  var g:int_ptr = e - f;
  g[7] = a;
  g[6] = b;
  g[5] = c;
  g[4] = d;
  var h:int = g[5];
  var i:int = 4;
  var j:int = h / i;
  g[1] = j;
  var k:int = g[6];
  g[3] = k;
  var l:int = g[7];
  g[2] = l;
  loop L_b {
    var m:int = g[4];
    var n:int = -1;
    var o:int = m + n;
    g[4] = o;
    var p:int = 0;
    var q:int = m;
    var r:int = p;
    var s:int = q > r;
    var t:int = 1;
    var u:int = s & t;
    if (eqz(u)) goto B_a;
    var v:int = g[2];
    var w:int = 4;
    var x:int = v + w;
    g[2] = x;
    continue L_b;
  }
  unreachable;
  label B_a:
  loop L_d {
    var y:int = g[1];
    var z:int = -1;
    var aa:int = y + z;
    g[1] = aa;
    var ba:int = 0;
    var ca:int = y;
    var da:int = ba;
    var ea:int = ca > da;
    var fa:int = 1;
    var ga:int = ea & fa;
    if (eqz(ga)) goto B_c;
    var ha:int = g[3];
    var ia:int_ptr = g[2];
    var ja:int = 4;
    var ka:int = ia + ja;
    g[2] = ka;
    ia[0] = ha;
    continue L_d;
  }
  unreachable;
  label B_c:
}

export function local_memcpy(a:int, b:int, c:int) {
  var d:int = stack_pointer;
  var e:int = 32;
  var f:int_ptr = d - e;
  f[7] = a;
  f[6] = b;
  f[5] = c;
  var g:int = f[5];
  var h:int = 4;
  var i:int = g / h;
  f[1] = i;
  var j:int = f[7];
  f[4] = j;
  var k:int = f[6];
  f[3] = k;
  loop L_b {
    var l:int = f[1];
    var m:int = -1;
    var n:int = l + m;
    f[1] = n;
    var o:int = 0;
    var p:int = l;
    var q:int = o;
    var r:int = p > q;
    var s:int = 1;
    var t:int = r & s;
    if (eqz(t)) goto B_a;
    var u:int = 0;
    f[2] = u;
    var v:ubyte_ptr = f[3];
    var w:int = 1;
    var x:int = v + w;
    f[3] = x;
    var y:int = v[0];
    var z:int = 255;
    var aa:int = y & z;
    var ba:int = 255;
    var ca:int = aa & ba;
    var da:int = f[2];
    var ea:int = da | ca;
    f[2] = ea;
    var fa:ubyte_ptr = f[3];
    var ga:int = 1;
    var ha:int = fa + ga;
    f[3] = ha;
    var ia:int = fa[0];
    var ja:int = 255;
    var ka:int = ia & ja;
    var la:int = 255;
    var ma:int = ka & la;
    var na:int = 8;
    var oa:int = ma << na;
    var pa:int = f[2];
    var qa:int = pa | oa;
    f[2] = qa;
    var ra:ubyte_ptr = f[3];
    var sa:int = 1;
    var ta:int = ra + sa;
    f[3] = ta;
    var ua:int = ra[0];
    var va:int = 255;
    var wa:int = ua & va;
    var xa:int = 255;
    var ya:int = wa & xa;
    var za:int = 16;
    var ab:int = ya << za;
    var bb:int = f[2];
    var cb:int = bb | ab;
    f[2] = cb;
    var db:ubyte_ptr = f[3];
    var eb:int = 1;
    var fb:int = db + eb;
    f[3] = fb;
    var gb:int = db[0];
    var hb:int = 255;
    var ib:int = gb & hb;
    var jb:int = 255;
    var kb:int = ib & jb;
    var lb:int = 24;
    var mb:int = kb << lb;
    var nb:int = f[2];
    var ob:int = nb | mb;
    f[2] = ob;
    var pb:int = f[2];
    var qb:int_ptr = f[4];
    qb[0] = pb;
    var rb:int = f[4];
    var sb:int = 4;
    var tb:int = rb + sb;
    f[4] = tb;
    continue L_b;
  }
  unreachable;
  label B_a:
}

export function sha_transform() {
  var a:int = stack_pointer;
  var b:int = 352;
  var c:int_ptr = a - b;
  stack_pointer = c;
  var d:int = 0;
  c[87] = d;
  loop L_b {
    var e:int = c[87];
    var f:int = 16;
    var g:int = e;
    var h:int = f;
    var i:int = g < h;
    var j:int = 1;
    var k:int = i & j;
    if (eqz(k)) goto B_a;
    var l:int = c[87];
    var m:int = 2;
    var n:int = l << m;
    var o:int = sha_info_data;
    var p:int_ptr = o + n;
    var q:int = p[0];
    var r:int = c[87];
    var s:int = c;
    var t:int = 2;
    var u:int = r << t;
    var v:int_ptr = s + u;
    v[0] = q;
    var w:int = c[87];
    var x:int = 1;
    var y:int = w + x;
    c[87] = y;
    continue L_b;
  }
  unreachable;
  label B_a:
  var z:int = 16;
  c[87] = z;
  loop L_d {
    var aa:int = c[87];
    var ba:int = 80;
    var ca:int = aa;
    var da:int = ba;
    var ea:int = ca < da;
    var fa:int = 1;
    var ga:int = ea & fa;
    if (eqz(ga)) goto B_c;
    var ha:int = c[87];
    var ia:int = 3;
    var ja:int = ha - ia;
    var ka:int = c;
    var la:int = 2;
    var ma:int = ja << la;
    var na:int_ptr = ka + ma;
    var oa:int = na[0];
    var pa:int = c[87];
    var qa:int = 8;
    var ra:int = pa - qa;
    var sa:int = c;
    var ta:int = 2;
    var ua:int = ra << ta;
    var va:int_ptr = sa + ua;
    var wa:int = va[0];
    var xa:int = oa ^ wa;
    var ya:int = c[87];
    var za:int = 14;
    var ab:int = ya - za;
    var bb:int = c;
    var cb:int = 2;
    var db:int = ab << cb;
    var eb:int_ptr = bb + db;
    var fb:int = eb[0];
    var gb:int = xa ^ fb;
    var hb:int = c[87];
    var ib:int = 16;
    var jb:int = hb - ib;
    var kb:int = c;
    var lb:int = 2;
    var mb:int = jb << lb;
    var nb:int_ptr = kb + mb;
    var ob:int = nb[0];
    var pb:int = gb ^ ob;
    var qb:int = c[87];
    var rb:int = c;
    var sb:int = 2;
    var tb:int = qb << sb;
    var ub:int_ptr = rb + tb;
    ub[0] = pb;
    var vb:int = c[87];
    var wb:int = 1;
    var xb:int = vb + wb;
    c[87] = xb;
    continue L_d;
  }
  unreachable;
  label B_c:
  var yb:{ a:int, b:int, c:int, d:int, e:int } = sha_info_digest;
  var zb:int = yb.a;
  c[85] = zb;
  var ac:int = yb.b;
  c[84] = ac;
  var bc:int = yb.c;
  c[83] = bc;
  var cc:int = yb.d;
  c[82] = cc;
  var dc:int = yb.e;
  c[81] = dc;
  var ec:int = 0;
  c[87] = ec;
  loop L_f {
    var fc:int = c[87];
    var gc:int = 20;
    var hc:int = fc;
    var ic:int = gc;
    var jc:int = hc < ic;
    var kc:int = 1;
    var lc:int = jc & kc;
    if (eqz(lc)) goto B_e;
    var mc:int = c[85];
    var nc:int = 5;
    var oc:int = mc << nc;
    var pc:int = c[85];
    var qc:int = 27;
    var rc:int = pc >> qc;
    var sc:int = oc | rc;
    var tc:int = c[84];
    var uc:int = c[83];
    var vc:int = tc & uc;
    var wc:int = c[84];
    var xc:int = -1;
    var yc:int = wc ^ xc;
    var zc:int = c[82];
    var ad:int = yc & zc;
    var bd:int = vc | ad;
    var cd:int = sc + bd;
    var dd:int = c[81];
    var ed:int = cd + dd;
    var fd:int = c[87];
    var gd:int = c;
    var hd:int = 2;
    var id:int = fd << hd;
    var jd:int_ptr = gd + id;
    var kd:int = jd[0];
    var ld:int = ed + kd;
    var md:int = 1518500249;
    var nd:int = ld + md;
    c[86] = nd;
    var od:int = c[82];
    c[81] = od;
    var pd:int = c[83];
    c[82] = pd;
    var qd:int = c[84];
    var rd:int = 30;
    var sd:int = qd << rd;
    var td:int = c[84];
    var ud:int = 2;
    var vd:int = td >> ud;
    var wd:int = sd | vd;
    c[83] = wd;
    var xd:int = c[85];
    c[84] = xd;
    var yd:int = c[86];
    c[85] = yd;
    var zd:int = c[87];
    var ae:int = 1;
    var be:int = zd + ae;
    c[87] = be;
    continue L_f;
  }
  unreachable;
  label B_e:
  var ce:int = 20;
  c[87] = ce;
  loop L_h {
    var de:int = c[87];
    var ee:int = 40;
    var fe:int = de;
    var ge:int = ee;
    var he:int = fe < ge;
    var ie:int = 1;
    var je:int = he & ie;
    if (eqz(je)) goto B_g;
    var ke:int = c[85];
    var le:int = 5;
    var me:int = ke << le;
    var ne:int = c[85];
    var oe:int = 27;
    var pe:int = ne >> oe;
    var qe:int = me | pe;
    var re:int = c[84];
    var se:int = c[83];
    var te:int = re ^ se;
    var ue:int = c[82];
    var ve:int = te ^ ue;
    var we:int = qe + ve;
    var xe:int = c[81];
    var ye:int = we + xe;
    var ze:int = c[87];
    var af:int = c;
    var bf:int = 2;
    var cf:int = ze << bf;
    var df:int_ptr = af + cf;
    var ef:int = df[0];
    var ff:int = ye + ef;
    var gf:int = 1859775393;
    var hf:int = ff + gf;
    c[86] = hf;
    var if:int = c[82];
    c[81] = if;
    var jf:int = c[83];
    c[82] = jf;
    var kf:int = c[84];
    var lf:int = 30;
    var mf:int = kf << lf;
    var nf:int = c[84];
    var of:int = 2;
    var pf:int = nf >> of;
    var qf:int = mf | pf;
    c[83] = qf;
    var rf:int = c[85];
    c[84] = rf;
    var sf:int = c[86];
    c[85] = sf;
    var tf:int = c[87];
    var uf:int = 1;
    var vf:int = tf + uf;
    c[87] = vf;
    continue L_h;
  }
  unreachable;
  label B_g:
  var wf:int = 40;
  c[87] = wf;
  loop L_j {
    var xf:int = c[87];
    var yf:int = 60;
    var zf:int = xf;
    var ag:int = yf;
    var bg:int = zf < ag;
    var cg:int = 1;
    var dg:int = bg & cg;
    if (eqz(dg)) goto B_i;
    var eg:int = c[85];
    var fg:int = 5;
    var gg:int = eg << fg;
    var hg:int = c[85];
    var ig:int = 27;
    var jg:int = hg >> ig;
    var kg:int = gg | jg;
    var lg:int = c[84];
    var mg:int = c[83];
    var ng:int = lg & mg;
    var og:int = c[84];
    var pg:int = c[82];
    var qg:int = og & pg;
    var rg:int = ng | qg;
    var sg:int = c[83];
    var tg:int = c[82];
    var ug:int = sg & tg;
    var vg:int = rg | ug;
    var wg:int = kg + vg;
    var xg:int = c[81];
    var yg:int = wg + xg;
    var zg:int = c[87];
    var ah:int = c;
    var bh:int = 2;
    var ch:int = zg << bh;
    var dh:int_ptr = ah + ch;
    var eh:int = dh[0];
    var fh:int = yg + eh;
    var gh:int = -1894007588;
    var hh:int = fh + gh;
    c[86] = hh;
    var ih:int = c[82];
    c[81] = ih;
    var jh:int = c[83];
    c[82] = jh;
    var kh:int = c[84];
    var lh:int = 30;
    var mh:int = kh << lh;
    var nh:int = c[84];
    var oh:int = 2;
    var ph:int = nh >> oh;
    var qh:int = mh | ph;
    c[83] = qh;
    var rh:int = c[85];
    c[84] = rh;
    var sh:int = c[86];
    c[85] = sh;
    var th:int = c[87];
    var uh:int = 1;
    var vh:int = th + uh;
    c[87] = vh;
    continue L_j;
  }
  unreachable;
  label B_i:
  var wh:int = 60;
  c[87] = wh;
  loop L_l {
    var xh:int = c[87];
    var yh:int = 80;
    var zh:int = xh;
    var ai:int = yh;
    var bi:int = zh < ai;
    var ci:int = 1;
    var di:int = bi & ci;
    if (eqz(di)) goto B_k;
    var ei:int = c[85];
    var fi:int = 5;
    var gi:int = ei << fi;
    var hi:int = c[85];
    var ii:int = 27;
    var ji:int = hi >> ii;
    var ki:int = gi | ji;
    var li:int = c[84];
    var mi:int = c[83];
    var ni:int = li ^ mi;
    var oi:int = c[82];
    var pi:int = ni ^ oi;
    var qi:int = ki + pi;
    var ri:int = c[81];
    var si:int = qi + ri;
    var ti:int = c[87];
    var ui:int = c;
    var vi:int = 2;
    var wi:int = ti << vi;
    var xi:int_ptr = ui + wi;
    var yi:int = xi[0];
    var zi:int = si + yi;
    var aj:int = -899497514;
    var bj:int = zi + aj;
    c[86] = bj;
    var cj:int = c[82];
    c[81] = cj;
    var dj:int = c[83];
    c[82] = dj;
    var ej:int = c[84];
    var fj:int = 30;
    var gj:int = ej << fj;
    var hj:int = c[84];
    var ij:int = 2;
    var jj:int = hj >> ij;
    var kj:int = gj | jj;
    c[83] = kj;
    var lj:int = c[85];
    c[84] = lj;
    var mj:int = c[86];
    c[85] = mj;
    var nj:int = c[87];
    var oj:int = 1;
    var pj:int = nj + oj;
    c[87] = pj;
    continue L_l;
  }
  unreachable;
  label B_k:
  var qj:int = c[85];
  var rj:{ a:int, b:int, c:int, d:int, e:int } = sha_info_digest;
  var sj:int = rj.a;
  var tj:int = sj + qj;
  rj.a = tj;
  var uj:int = c[84];
  var vj:int = rj.b;
  var wj:int = vj + uj;
  rj.b = wj;
  var xj:int = c[83];
  var yj:int = rj.c;
  var zj:int = yj + xj;
  rj.c = zj;
  var ak:int = c[82];
  var bk:int = rj.d;
  var ck:int = bk + ak;
  rj.d = ck;
  var dk:int = c[81];
  var ek:int = rj.e;
  var fk:int = ek + dk;
  rj.e = fk;
  var gk:int = 352;
  var hk:int = c + gk;
  stack_pointer = hk;
}

export function sha_init() {
  var a:{ a:int, b:int, c:int, d:int, e:int } = sha_info_digest;
  var b:int = 1732584193;
  a.a = b;
  var c:int = -271733879;
  a.b = c;
  var d:int = -1732584194;
  a.c = d;
  var e:int = 271733878;
  a.d = e;
  var f:int = -1009589776;
  a.e = f;
  var g:int_ptr = sha_info_count_lo;
  var h:int = 0;
  g[0] = h;
  var i:int_ptr = sha_info_count_hi;
  i[0] = h;
}

export function sha_update(a:int, b:int) {
  var c:int = stack_pointer;
  var d:int = 16;
  var e:int_ptr = c - d;
  stack_pointer = e;
  e[3] = a;
  e[2] = b;
  var f:int_ptr = sha_info_count_lo;
  var g:int = f[0];
  var h:int = e[2];
  var i:int = 3;
  var j:int = h << i;
  var k:int = g + j;
  var l:int = k;
  var m:int = g;
  var n:int = l < m;
  var o:int = 1;
  var p:int = n & o;
  if (eqz(p)) goto B_a;
  var q:int_ptr = sha_info_count_hi;
  var r:int = q[0];
  var s:int = 1;
  var t:int = r + s;
  q[0] = t;
  label B_a:
  var u:int = e[2];
  var v:int = 3;
  var w:int = u << v;
  var x:int_ptr = sha_info_count_lo;
  var y:int = x[0];
  var z:int = y + w;
  x[0] = z;
  var aa:int = e[2];
  var ba:int = 29;
  var ca:int = aa >> ba;
  var da:int_ptr = sha_info_count_hi;
  var ea:int = da[0];
  var fa:int = ea + ca;
  da[0] = fa;
  loop L_c {
    var ga:int = e[2];
    var ha:int = 64;
    var ia:int = ga;
    var ja:int = ha;
    var ka:int = ia >= ja;
    var la:int = 1;
    var ma:int = ka & la;
    if (eqz(ma)) goto B_b;
    var na:int = e[3];
    var oa:int = sha_info_data;
    var pa:int = 64;
    local_memcpy(oa, na, pa);
    sha_transform();
    var qa:int = e[3];
    var ra:int = 64;
    var sa:int = qa + ra;
    e[3] = sa;
    var ta:int = e[2];
    var ua:int = 64;
    var va:int = ta - ua;
    e[2] = va;
    continue L_c;
  }
  unreachable;
  label B_b:
  var wa:int = e[3];
  var xa:int = e[2];
  var ya:int = sha_info_data;
  local_memcpy(ya, wa, xa);
  var za:int = 16;
  var ab:int = e + za;
  stack_pointer = ab;
}

export function sha_final() {
  var a:int = stack_pointer;
  var b:int = 16;
  var c:int_ptr = a - b;
  stack_pointer = c;
  var d:int_ptr = sha_info_count_lo;
  var e:int = d[0];
  c[2] = e;
  var f:int_ptr = sha_info_count_hi;
  var g:int = f[0];
  c[1] = g;
  var h:int = c[2];
  var i:int = 3;
  var j:int = h >> i;
  var k:int = 63;
  var l:int = j & k;
  c[3] = l;
  var m:int = c[3];
  var n:int = 1;
  var o:int = m + n;
  c[3] = o;
  var p:int = 2;
  var q:int = m << p;
  var r:int = sha_info_data;
  var s:int_ptr = r + q;
  var t:int = 128;
  s[0] = t;
  var u:int = c[3];
  var v:int = 56;
  var w:int = u;
  var x:int = v;
  var y:int = w > x;
  var z:int = 1;
  var aa:int = y & z;
  if (eqz(aa)) goto B_b;
  var ba:int = c[3];
  var ca:int = 64;
  var da:int = ca - ba;
  var ea:int = c[3];
  var fa:int = sha_info_data;
  var ga:int = 0;
  local_memset(fa, ga, da, ea);
  sha_transform();
  var ha:int = sha_info_data;
  var ia:int = 56;
  var ja:int = 0;
  local_memset(ha, ja, ia, ja);
  goto B_a;
  label B_b:
  var ka:int = c[3];
  var la:int = 56;
  var ma:int = la - ka;
  var na:int = c[3];
  var oa:int = sha_info_data;
  var pa:int = 0;
  local_memset(oa, pa, ma, na);
  label B_a:
  var qa:int = c[1];
  var ra:int_ptr = sha_info_data;
  ra[14] = qa;
  var sa:int = c[2];
  ra[15] = sa;
  sha_transform();
  var ta:int = 16;
  var ua:int = c + ta;
  stack_pointer = ua;
}

export function sha_stream() {
  var a:int = stack_pointer;
  var b:int = 16;
  var c:int_ptr = a - b;
  stack_pointer = c;
  sha_init();
  var d:int = 0;
  c[2] = d;
  loop L_b {
    var e:int = c[2];
    var f:int = 2;
    var g:int = e;
    var h:int = f;
    var i:int = g < h;
    var j:int = 1;
    var k:int = i & j;
    if (eqz(k)) goto B_a;
    var l:int = c[2];
    var m:int = 2;
    var n:int = l << m;
    var o:int = in_i;
    var p:int_ptr = o + n;
    var q:int = p[0];
    c[3] = q;
    var r:int = c[2];
    var s:int = 13;
    var t:int = r << s;
    var u:int = indata;
    var v:int = u + t;
    c[1] = v;
    var w:int = c[1];
    var x:int = c[3];
    sha_update(w, x);
    var y:int = c[2];
    var z:int = 1;
    var aa:int = y + z;
    c[2] = aa;
    continue L_b;
  }
  unreachable;
  label B_a:
  sha_final();
  var ba:int = 16;
  var ca:int = c + ba;
  stack_pointer = ca;
}

export function submain():int {
  var a:int = stack_pointer;
  var b:int = 16;
  var c:{ a:double, b:int, c:int } = a - b;
  stack_pointer = c;
  var d:int = 0;
  c.b = d;
  var e:double = rtclock();
  var f:double_ptr = startTimer;
  f[0] = e;
  sha_stream();
  var g:int = 0;
  c.c = g;
  loop L_b {
    var h:int = c.c;
    var i:int = 5;
    var j:int = h;
    var k:int = i;
    var l:int = j < k;
    var m:int = 1;
    var n:int = l & m;
    if (eqz(n)) goto B_a;
    var o:int = c.c;
    var p:int = 2;
    var q:int = o << p;
    var r:int = sha_info_digest;
    var s:int_ptr = r + q;
    var t:int = s[0];
    var u:int = outData;
    var v:int_ptr = u + q;
    var w:int = v[0];
    var x:int = t;
    var y:int = w;
    var z:int = x != y;
    var aa:int = 1;
    var ba:int = z & aa;
    var ca:int = c.b;
    var da:int = ca + ba;
    c.b = da;
    var ea:int = c.c;
    var fa:int = 1;
    var ga:int = ea + fa;
    c.c = ga;
    continue L_b;
  }
  unreachable;
  label B_a:
  var ha:double = rtclock();
  var ia:double_ptr = endTimer;
  ia[0] = ha;
  var ja:double = ia[0];
  var ka:double_ptr = startTimer;
  var la:double = ka[0];
  var ma:double = ja - la;
  c.a = ma;
  var na:int = 16455;
  var oa:int = memory_base;
  var pa:int = oa + na;
  printf(pa, c);
  var qa:int = c.b;
  var ra:int = 16;
  var sa:int = c + ra;
  stack_pointer = sa;
  return qa;
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
  var k:int = 16420;
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

