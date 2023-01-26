#define XTDMG42(CLASSNAME,CAMO,KWS,STOCK) \
class CLASSNAME { \
    model = QGVAR(mg42); \
    camo = QUOTE(CAMO); \
    kws = QUOTE(KWS); \
    stock = QUOTE(STOCK); \
};
#define XTDMG3(CLASSNAME,CAMO,KWS,RAIL) \
class CLASSNAME { \
    model = QGVAR(mg3); \
    camo = QUOTE(CAMO); \
    kws = QUOTE(KWS); \
    rail = QUOTE(RAIL); \
};



XTDMG42(hlc_lmg_MG42, gunMetal, no, base)
XTDMG42(hlc_lmg_mg42_bakelite, gunMetal, no, bakelite)
XTDMG42(hlc_lmg_MG42KWS_t, tan, yes, base)
XTDMG42(hlc_lmg_MG42KWS_g, green, yes, base)
XTDMG42(hlc_lmg_MG42KWS_B, black, yes, base)

XTDMG3(hlc_lmg_MG3, gunMetal, no, no)
XTDMG3(hlc_lmg_MG3_optic, gunMetal, no, yes)
XTDMG3(hlc_lmg_MG3KWS, tan, yes, yes)
XTDMG3(hlc_lmg_MG3KWS_b, black, yes, yes)
XTDMG3(hlc_lmg_MG3KWS_g, green, yes, yes)
