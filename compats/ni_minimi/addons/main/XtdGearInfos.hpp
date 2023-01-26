#define XTDM249(CLASSNAME,VARIENT,BARREL,STOCK,RAIL) \
class CLASSNAME { \
    model = QGVAR(m249); \
    varient = QUOTE(VARIENT); \
    barrel = QUOTE(BARREL); \
    stock = QUOTE(STOCK); \
    rail = QUOTE(RAIL); \
};
#define XTDMINIMI(CLASSNAME,STOCK,BARREL,RAIL) \
class CLASSNAME { \
    model = QGVAR(minimi); \
    stock = QUOTE(STOCK); \
    barrel = QUOTE(BARREL); \
    rail = QUOTE(RAIL); \
};


class XtdGearInfos {
    class CfgWeapons {
        class hlc_lmg_mk46 {
            model = QGVAR(mk46);
            mod = "mod0";
        };
        class hlc_lmg_mk46mod1 {
            model = QGVAR(mk46);
            mod = "mod1";
        };
        class hlc_lmg_mk48 {
            model = QGVAR(mk48);
            mod = "mod0";
        };
        class hlc_lmg_mk48mod1 {
            model = QGVAR(mk48);
            mod = "mod1";
        };

        XTDM249(hlc_m249_pip1, pip, long, solid, yes)
        XTDM249(hlc_m249_pip2, pip, short, solid, yes)
        XTDM249(hlc_m249_pip3, pip, short, pip, yes)
        XTDM249(hlc_m249_pip4, pip, long, pip, yes)
        XTDM249(hlc_lmg_m249E1, base, long, frame, no)
        XTDM249(hlc_lmg_m249E2, base, long, solid, no)
        XTDM249(hlc_lmg_m249para, para, short, para, no)

        XTDMINIMI(hlc_lmg_minimi, solid, long, no)
        XTDMINIMI(hlc_lmg_minimi_railed, solid, long, yes)
        XTDMINIMI(hlc_lmg_minimipara_long, para, long, no)
        XTDMINIMI(hlc_lmg_minimipara, para, short, no)
        XTDMINIMI(hlc_lmg_minimipara_railed, para, short, yes)
        XTDMINIMI(hlc_lmg_minimipara_long_railed, para, long, yes)
        XTDMINIMI(hlc_lmg_minimipara_long_railed, para, short, yes)
    };
};
