#define XTDM16(CLASSNAME,VARIANT,GL) \
class CLASSNAME { \
    model = QGVAR(m16); \
    variant = QUOTE(VARIANT); \
    gl = QUOTE(GL); \
};
#define XTDM4(CLASSNAME,VARIANT,GL) \
class CLASSNAME { \
    model = QGVAR(m4); \
    variant = QUOTE(VARIANT); \
    gl = QUOTE(GL); \
};

XTDM16(hlc_wp_m16a1, a1, no)
XTDM16(hlc_rifle_a1m203, a1, yes)
XTDM16(hlc_wp_m16a2, a2, no)
XTDM16(hlc_rifle_m203, a2, no)

XTDM4(hlc_rifle_M4, m4a1, no)
XTDM4(hlc_rifle_m4m203, m4a1, yes)
XTDM4(hlc_rifle_m4a1carryhandle, m4a1ch, no)
XTDM4(hlc_rifle_CQBR, m4le, no)
XTDM4(hlc_wp_xm4, m4, no)
XTDM4(hlc_wp_XM177E2, xm117e2, no)
XTDM4(hlc_rifle_mk18mod0, mk18, no)



class hlc_rifle_SAMR {
    model = QGVAR(lar15);
    camo = "tan";
};
class hlc_rifle_samr2 {
    model = QGVAR(lar15);
    camo = "black";
};
class hlc_rifle_RU556 {
    model = QGVAR(ar15magpul);
    variant = "sanitised";
};
class hlc_rifle_RU5562 {
    model = QGVAR(ar15magpul);
    variant = "standard";
};

class hlc_rifle_Colt727 {
    model = QGVAR(ro727);
    variant = "carbine";
    gl = "no";
};
class hlc_rifle_Colt727_GL {
    model = QGVAR(ro727);
    variant = "carbine";
    gl = "yes";
};
class hlc_wp_mod727 {
    model = QGVAR(ro727);
    variant = "commando";
    gl = "no";
};
class hlc_wp_mod733 {
    model = QGVAR(ro727);
    variant = "commandoShort";
    gl = "no";
};
