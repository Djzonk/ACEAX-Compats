#define XTDSLR(CLASSNAME,VARIANT) \
class CLASSNAME { \
    model = QGVAR(slr); \
    variant = QUOTE(VARIANT); \
};

#define XTDFAL(CLASSNAME,VARIANT,RAIL) \
class CLASSNAME { \
    model = QGVAR(fal); \
    variant = QUOTE(VARIANT); \
    rail = QUOTE(RAIL); \
};

XTDSLR(hlc_rifle_c1A1, canada)
XTDSLR(hlc_rifle_L1A1SLR, enfield)
XTDSLR(hlc_rifle_SLR, lithgow)
XTDSLR(hlc_rifle_SLRchopmod, lithgowCM)

XTDFAL(hlc_rifle_FAL5000, standard, no)
XTDFAL(hlc_rifle_FAL5000Rail, standard, yes)
XTDFAL(hlc_rifle_FAL5061, para, no)
XTDFAL(hlc_rifle_FAL5061Rail, para, yes)
XTDFAL(hlc_rifle_C2A1, canada, no)
XTDFAL(hlc_rifle_LAR, lar, no)
XTDFAL(hlc_rifle_STG58F, stg, yes)

class hlc_rifle_falosw {
    model = QGVAR(falosw);
    gl = "no";
};
class hlc_rifle_osw_gl {
    model = QGVAR(falosw);
    gl = "yes";
};
