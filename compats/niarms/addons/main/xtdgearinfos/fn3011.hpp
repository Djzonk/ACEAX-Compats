#define XTDFN3011(CLASSNAME,VARIANT,CAMO) \
class CLASSNAME { \
    model = QGVAR(fn3011); \
    variant = QUOTE(VARIANT); \
    camo = QUOTE(CAMO); \
};

XTDFN3011(hlc_rifle_fn3011, og, none)
XTDFN3011(hlc_rifle_FN3011Modern, modernized, none)
XTDFN3011(hlc_rifle_FN3011Modern_camo, modernized, none)
XTDFN3011(hlc_rifle_FN3011Modern_camo, modernized, arctic)
XTDFN3011(hlc_rifle_FN3011Tactical_green, tac, green)
XTDFN3011(hlc_rifle_FN3011Tactical_grey, tac, grayash)
XTDFN3011(hlc_rifle_FN3011Tactical, tac, walnut)
XTDFN3011(hlc_rifle_FN3011_WDL, og, woodland)
XTDFN3011(hlc_rifle_FN3011LYNX, lynx, arctic)
