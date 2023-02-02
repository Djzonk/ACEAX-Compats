class GVAR(fal): GVAR(base) {
    label = "FAL";
    options[] = {"variant", "rail"};
    class variant {
        label = "Variant";
        changeingame = 0;
        values[] = {"standard", "para", "canada", "lar", "stg"};
        class standard {
            label = "Standard";
            // image = "";
        };
        class para {
            label = "Para";
            // image = "";
        };
        class canada {
            label = "Canada";
            // image = "";
        };
        class lar {
            label = "LAR";
            description = "Light infantry rifle contracted to Israel";
            // image = "";
        };
        class stg {
            label = "STG";
            description = "Steyr STG.58";
            // image = "";
        };
    };
    class rail {
        label = "Rail";
        changeingame = 0;
        values[] = {"no", "yes"};
        class no {
            label = "No";
        };
        class yes {
            label = "Yes";
        };
    };
};
class GVAR(falosw): GVAR(base) {
    label = "FAL OSW";
    options[] = {"gl"};
    class gl {
        label = "Gernade Launcher";
        changeingame = 0;
        values[] = {"no", "yes"};
        class no {
            label = "No";
        };
        class yes {
            label = "Yes";
        };
    };
};
class GVAR(slr): GVAR(base) {
    label = "SLR";
    options[] = {"variant"};
    class variant {
        label = "Variant";
        changeingame = 0;
        values[] = {"canada", "enfield", "lithgow", "lithgowCM"};
        class canada {
            label = "Canada";
            description = "Canadian SLR variant, manufactured by FN";
            // image = "";
        };
        class enfield {
            label = "Enfield";
            description = "Enfield L1A1 SLR";
            // image = "";
        };
        class lithgow {
            label = "Lithgow";
            description = "Australian manufactured L1A1";
            // image = "";
        };
        class lithgowCM {
            label = "Lithgow Chopmod";
            description = "L2A1 , Barrel sawn down, Pistol grip foregrip.";
            // image = "";
        };
    };
};
