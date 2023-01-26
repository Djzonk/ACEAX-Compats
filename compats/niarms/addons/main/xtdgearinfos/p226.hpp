#define XTDP229(CLASS,TYPE,CALIBER,THREADEDBARREL) \
class CLASS { \
    model = QGVAR(p229); \
    type = QUOTE(TYPE); \
    caliber = QUOTE(CALIBER); \
    threadedBarrel = QUOTE(THREADEDBARREL); \
};
#define XTDP226(CLASS,TYPE,CALIBER,RAILS,THREADEDBARREL) \
class CLASS { \
    model = QGVAR(p226); \
    type = QUOTE(TYPE); \
    caliber = QUOTE(CALIBER); \
    rails = QUOTE(RAILS); \
    threadedBarrel = QUOTE(THREADEDBARREL); \
};

XTDP226(hlc_pistol_P226US, base, 9mm, no, no)
XTDP226(hlc_pistol_P226R, base, 9mm, yes, no)
XTDP226(hlc_pistol_P226R_Combat, base, 9mm, yes, yes)
XTDP226(hlc_pistol_P226R_Elite, elite, 9mm, yes, no)
XTDP226(hlc_pistol_P226R_40, base, 40sw, yes, no)
XTDP226(hlc_pistol_P226R_40Combat, base, 40sw, yes, yes)
XTDP226(hlc_pistol_P226R_40Elite, elite, 40sw, yes, no)
XTDP226(hlc_pistol_P226R_40Enox, equinox, 40sw, yes, no)
XTDP226(hlc_pistol_P226R_357, base, 357, yes, no)
XTDP226(hlc_pistol_P226R_357Combat, base, 357, yes, yes)
XTDP226(hlc_pistol_P226R_357Elite, elite, 357, yes, no)
XTDP226(hlc_pistol_P226R_Stainless, stainless, 357, yes, no)
XTDP226(hlc_pistol_P226WestGerman, westGerman, 9mm, no, no)

//P229
XTDP229(hlc_pistol_P229R, base, 9mm, no)
XTDP229(hlc_pistol_P229R_Combat, base, 9mm, yes)
XTDP229(hlc_pistol_P229R_Elite, elite, 9mm, yes)
XTDP229(hlc_pistol_P229R_40, base, 40sw, no)
XTDP229(hlc_pistol_P229R_40Combat, base, 40sw, yes)
XTDP229(hlc_pistol_P229R_40Elite, elite, 40sw, yes)
XTDP229(hlc_pistol_P229R_40Enox, equinox, 40sw, no)
XTDP229(hlc_pistol_P229R_357, base, 357, no)
XTDP229(hlc_pistol_P229R_357Combat, base, 357, yes)
XTDP229(hlc_pistol_P229R_357Elite, elite, 357, yes)
XTDP229(hlc_pistol_P229R_357Stainless, stainless, 357, no)

//M11
class hlc_Pistol_M11 {
    model = QGVAR(mk11);
    type = "mk11";
};
class hlc_Pistol_M11A1 {
    model = QGVAR(mk11);
    type = "mk11a1";
};
class hlc_Pistol_M11A1D {
    model = QGVAR(mk11);
    type = "mk11a1d";
};
//P239
class hlc_pistol_P239 {
    model = QGVAR(p239);
    caliber = "9mm";
};
class hlc_pistol_P239_40 {
    model = QGVAR(p239);
    caliber = "40sw";
};
class hlc_pistol_P239_357 {
    model = QGVAR(p239);
    caliber = "357";
};
//MK25
class hlc_pistol_Mk25 {
    model = QGVAR(mk25);
    finish = "black";
    threadedBarrel = "no";
};
class hlc_pistol_Mk25D {
    model = QGVAR(mk25);
    finish = "tan";
    threadedBarrel = "no";
};
class hlc_Pistol_mk25TR {
    model = QGVAR(mk25);
    finish = "tan";
    threadedBarrel = "yes";
};
