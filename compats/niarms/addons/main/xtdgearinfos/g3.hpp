#define XTDG3(CLASSNAME,VARIANT,GL,HANDGUARD,OPTICRAILS) \
class CLASSNAME { \
    model = QGVAR(g3); \
    variant = QUOTE(VARIANT); \
    gl = QUOTE(GL); \
    handGuard = QUOTE(HANDGUARD); \
    opticRails = QUOTE(OPTICRAILS); \
};
#define XTDHK33(CLASSNAME,VARIANT,GL,RAILS) \
class CLASSNAME { \
    model = QGVAR(hk33); \
    variant = QUOTE(VARIANT); \
    gl = QUOTE(GL); \
    rails = QUOTE(RAILS); \
};


XTDG3(hlc_rifle_g3sg1, sniper, no, wide, no)
XTDG3(hlc_rifle_g3sg1ris, sniper, no, wide, yes)
XTDG3(hlc_rifle_g3a3, standard, no, standard, no)
XTDG3(hlc_rifle_g3a3ris, standard, no, standard, yes)
XTDG3(hlc_rifle_g3a3v, standard, no, wide, no)
XTDG3(hlc_rifle_g3a3vris, standard, no, wide, yes)
XTDG3(hlc_rifle_g3ka4, ras, no, rails, yes)
XTDG3(hlc_rifle_g3ka4_GL, ras, yes, rails, yes)

XTDHK33(hlc_rifle_hk33a2, a2, no, no)
XTDHK33(hlc_rifle_hk33a2RIS, a2, no, yes)
XTDHK33(hlc_rifle_hk33a2RIS_GL, a2, yes, yes)
XTDHK33(hlc_rifle_hk33ka3, a3, no, no)

class hlc_rifle_hk53 {
    model = QGVAR(hk53);
    rails = "no";
};
class hlc_rifle_hk53RAS {
    model = QGVAR(hk53);
    rails = "yes";
};

class hlc_rifle_psg1 {
    model = QGVAR(psg1);
    optic = "builtIn";
};
class hlc_rifle_psg1A1 {
    model = QGVAR(psg1);
    optic = "adapter";
};
class hlc_rifle_PSG1A1_ris {
    model = QGVAR(psg1);
    optic = "rail";
};
