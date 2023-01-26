#define XTDMP5(CLASS,STOCK,FIRESELECTOR,HANDGUARDRAILS) \
class CLASS { \
    model = QGVAR(mp5); \
    stock = QUOTE(STOCK); \
    fireSelector = QUOTE(FIRESELECTOR); \
    handGuardRails = QUOTE(HANDGUARDRAILS); \
};

class XtdGearInfos {
    class CfgWeapons {
        XTDMP5(hlc_smg_mp5a2, solid, text, no)
        XTDMP5(hlc_smg_mp5a2_Sfire, "", "", "") // Think it should be hidden in the arsenal but not sure so adding it
        XTDMP5(hlc_smg_mp5a2_tac, solid, text, yes)
        XTDMP5(hlc_smg_mp5a3, collapsible, text, no)
        XTDMP5(hlc_smg_mp5a3_tac, collapsible, text, yes)
        XTDMP5(hlc_smg_mp5a4, solid, iconography, no)
        XTDMP5(hlc_smg_mp5a4_tac, solid, iconography, yes)
        XTDMP5(hlc_smg_MP5N, collapsible, iconography, no)
        XTDMP5(hlc_smg_mp5N_tac, collapsible, iconography, yes)

        class hlc_smg_mp5sd5 {
            model = QGVAR(mp5s);
            stock = "solid";
        };
        class hlc_smg_mp5sd6 {
            model = QGVAR(mp5s);
            stock = "collapsible";
        };
        class hlc_smg_mp510 {
            model = QGVAR(mp510);
            handGuardRails = "no";
        };
        class hlc_mp510_tac {
            model = QGVAR(mp510);
            handGuardRails = "yes";
        };
    };
};
