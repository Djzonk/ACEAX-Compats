#define XTDAWM(CLASSNAME,CAMO,SUPPRESSED,GHILLIE) \
class CLASSNAME { \
    model = QGVAR(awm); \
    camo = QUOTE(CAMO); \
    suppressed = QUOTE(SUPPRESSED); \
    ghillie = QUOTE(GHILLIE); \
};

XTDAWM(hlc_rifle_awmagnum, od, no, no)
XTDAWM(hlc_rifle_awmagnum_FDE, fde, no, no)
XTDAWM(hlc_rifle_awmagnum_BL, blk, no, no)
XTDAWM(hlc_rifle_awMagnum_od_ghillie, od, no, yes)
XTDAWM(hlc_rifle_awMagnum_FDE_ghillie, fde, no, yes)
XTDAWM(hlc_rifle_awmagnum_BL_ghillie, blk, no, yes)
XTDAWM(hlc_rifle_awcovert, od, yes, no)
XTDAWM(hlc_rifle_awcovert_FDE, fde, yes, no)
XTDAWM(hlc_rifle_awcovert_BL, blk, yes, no)
