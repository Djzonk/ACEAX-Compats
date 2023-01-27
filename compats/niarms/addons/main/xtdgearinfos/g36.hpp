#define XTDG36(CLASS,VARIANT,LENGTH,GL,RAILS) \
class CLASS { \
    model = QGVAR(g36); \
    variant = QUOTE(VARIANT); \
    length = QUOTE(LENGTH); \
    gl = QUOTE(GL); \
    rails = QUOTE(RAILS); \
};


XTDG36(hlc_rifle_G36A1, a, standard, no, no)
XTDG36(hlc_rifle_G36A1AG36, a, standard, yes, no)
XTDG36(hlc_rifle_G36C, a, compact, no, yes)
XTDG36(hlc_rifle_G36CV, v, compact, no, yes)
XTDG36(hlc_rifle_G36CTAC, tac, compact, no, yes)
XTDG36(hlc_rifle_G36E1, e, standard, no, no)
XTDG36(hlc_rifle_G36E1AG36, e, standard, yes, no)
XTDG36(hlc_rifle_G36KA1KSK, ksk, short, no, yes)
XTDG36(hlc_rifle_G36KA1, a1, short, no, no)
XTDG36(hlc_rifle_G36KV, v, short, no, yes)
XTDG36(hlc_rifle_G36KE1, e, short, no, no)
XTDG36(hlc_rifle_g36KTAC, tac, short, no, yes)
XTDG36(hlc_rifle_G36V, v, standard, no, yes)
XTDG36(hlc_rifle_G36VAG36, v, standard, yes, yes)
XTDG36(hlc_rifle_G36TAC, tac, standard, no, yes)




class hlc_rifle_G36MLIC {
    model = QGVAR(g36mlic);
    length = "standard";
    gl = "no";
};
class hlc_rifle_G36MLIAG36 {
    model = QGVAR(g36mlic);
    length = "standard";
    gl = "yes";
};
class hlc_rifle_G36CMLIC {
    model = QGVAR(g36mlic);
    length = "compact";
    gl = "no";
};
class hlc_rifle_G36KMLIC {
    model = QGVAR(g36mlic);
    length = "short";
    gl = "no";
};
