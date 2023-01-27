#define XTDAUG(CLASSNAME,VARIANT,CAMO,LENGTH,GL,RAILS) \
class CLASSNAME { \
    model = QGVAR(aug); \
    variant = QUOTE(VARIANT); \
    camo = QUOTE(CAMO); \
    length = QUOTE(LENGTH); \
    gl = QUOTE(GL); \
    rails = QUOTE(RAILS); \
};

XTDAUG(hlc_rifle_augsr_b, sr, blk, standard, no, opticonly)
XTDAUG(hlc_rifle_augsr, sr, od, standard, no, opticonly)
XTDAUG(hlc_rifle_augsr_t, sr, tan, standard, no, opticonly)
XTDAUG(hlc_rifle_augsrcarb_b, sr, blk, carbine, no, opticonly)
XTDAUG(hlc_rifle_augsrcarb, sr, od, carbine, no, opticonly)
XTDAUG(hlc_rifle_augsrcarb_t, sr, tan, carbine, no, opticonly)
XTDAUG(hlc_rifle_augsrhbar_b, sr, blk, hbar, no, opticonly)
XTDAUG(hlc_rifle_augsrhbar, sr, od, hbar, no, opticonly)
XTDAUG(hlc_rifle_augsrhbar_t, sr, tan, hbar, no, opticonly)

XTDAUG(hlc_rifle_augpara_b, para, blk, carbine, no, no)
XTDAUG(hlc_rifle_augpara, para, od, carbine, no, no)
XTDAUG(hlc_rifle_augpara_t, para, tan, carbine, no, no)

XTDAUG(hlc_rifle_auga1_b, a1, blk, standard, no, no)
XTDAUG(hlc_rifle_aug, a1, od, standard, no, no)
XTDAUG(hlc_rifle_auga1_t, a1, tan, standard, no, no)
XTDAUG(hlc_rifle_auga1carb_b, a1, blk, carbine, no, no)
XTDAUG(hlc_rifle_auga1carb, a1, od, carbine, no, no)
XTDAUG(hlc_rifle_auga1carb_t, a1, tan, carbine, no, no)
XTDAUG(hlc_rifle_aughbar_b, a1, blk, hbar, no, no)
XTDAUG(hlc_rifle_aughbar, a1, od, hbar, no, no)
XTDAUG(hlc_rifle_aughbar_t, a1, tan, hbar, no, no)

XTDAUG(hlc_rifle_auga2_b, a2, blk, standard, no, opticonly)
XTDAUG(hlc_rifle_auga2, a2, od, standard, no, opticonly)
XTDAUG(hlc_rifle_auga2_t, a2, tan, standard, no, opticonly)
XTDAUG(hlc_rifle_auga2carb_b, a2, blk, carbine, no, opticonly)
XTDAUG(hlc_rifle_auga2carb, a2, od, carbine, no, opticonly)
XTDAUG(hlc_rifle_auga2carb_t, a2, tan, carbine, no, opticonly)
XTDAUG(hlc_rifle_auga2lsw_b, a2, blk, hbar, no, opticonly)
XTDAUG(hlc_rifle_auga2lsw, a2, od, hbar, no, opticonly)
XTDAUG(hlc_rifle_auga2lsw_t, a2, tan, hbar, no, opticonly)
XTDAUG(hlc_rifle_auga2para_b, a2para, blk, carbine, no, opticonly)
XTDAUG(hlc_rifle_auga2para, a2para, od, carbine, no, opticonly)
XTDAUG(hlc_rifle_auga2para_t, a2para, tan, carbine, no, opticonly)

XTDAUG(hlc_rifle_auga3_b, a3, blk, standard, no, yes)
XTDAUG(hlc_rifle_auga3_bl, a3, blue, standard, no, yes)
XTDAUG(hlc_rifle_auga3, a3, green, standard, no, yes)   
XTDAUG(hlc_rifle_auga3_GL_b, a3, blk, standard, yes, yes)
XTDAUG(hlc_rifle_auga3_GL_bl, a3, blue, standard, yes, yes)
XTDAUG(hlc_rifle_auga3_GL, a3, green, standard, yes, yes)
