#define XTDSG550(CLASS,VARIENT,GL,OPTICRAIL,BARRELRAIL) \
class CLASS { \
    model = QGVAR(sg550); \
    varient = QUOTE(VARIENT); \
    gl = QUOTE(GL); \
    opticRail = QUOTE(OPTICRAIL); \
    barrelRail = QUOTE(BARRELRAIL); \
};
#define XTDSG551(CLASS,BARREL,GL,OPTICRAIL,BARRELRAIL) \
class CLASS { \
    model = QGVAR(sg551); \
    barrel = QUOTE(BARREL); \
    gl = QUOTE(GL); \
    opticRail = QUOTE(OPTICRAIL); \
    barrelRail = QUOTE(BARRELRAIL); \
};
#define XTDSG553(CLASS,CALIBER,BARREL,OPTICRAIL,BARRELRAIL) \
class CLASS { \
    model = QGVAR(sg553); \
    caliber = QUOTE(CALIBER); \
    barrel = QUOTE(BARREL); \
    opticRail = QUOTE(OPTICRAIL); \
    barrelRail = QUOTE(BARRELRAIL); \
};

class XtdGearInfos {
    class CfgWeapons {

        XTDSG550(hlc_rifle_SG550, standard, no, no, no)
        XTDSG550(hlc_rifle_SG550_GL, standard, yes, no, no)
        XTDSG550(hlc_rifle_SG550_RIS, standard, no, yes, no)
        XTDSG550(hlc_rifle_SG550_TAC, standard, no, yes, yes)
        XTDSG550(hlc_rifle_SG550_TAC_GL, standard, yes, yes, yes)
        XTDSG550(hlc_rifle_SG550Sniper, sniper, no, no, no)
        XTDSG550(hlc_rifle_SG550Sniper_RIS, sniper, no, yes, no)

        XTDSG551(hlc_rifle_SG551LB, long, no, no, no)
        XTDSG551(hlc_rifle_SG551LB_RIS, long, no, yes, no)
        XTDSG551(hlc_rifle_SG551LB_TAC, long, no, yes, yes)
        XTDSG551(hlc_rifle_SG551LB_TAC_GL, long, yes, yes, yes)
        XTDSG551(hlc_rifle_SG551SB, short, no, no, no)
        XTDSG551(hlc_rifle_SG551SB_RIS, short, no, yes, no)
        XTDSG551(hlc_rifle_SG551SB_TAC, short, no, yes, yes)
        XTDSG551(hlc_rifle_SG551SB_TAC_GL, short, yes, yes, yes)

        XTDSG553(hlc_rifle_SG553LB, 556, long, no, no)
        XTDSG553(hlc_rifle_SG553LB_RIS, 556, long, yes, no)
        XTDSG553(hlc_rifle_SG553LB_TAC, 556, long, yes, yes)
        XTDSG553(hlc_rifle_SG553SB, 556, short, no, no)
        XTDSG553(hlc_rifle_SG553SB_RIS, 556, short, yes, no)
        XTDSG553(hlc_rifle_SG553SB_TAC, 556, short, yes, yes)
        XTDSG553(hlc_rifle_SG553RLB, 762, long, yes, no)
        XTDSG553(hlc_rifle_SG553RLB_TAC, 762, long, yes, yes)
        XTDSG553(hlc_rifle_SG553RSB, 762, long, yes, no)
        XTDSG553(hlc_rifle_SG553RSB_TAC, 762, long, yes, yes)
    };
};
