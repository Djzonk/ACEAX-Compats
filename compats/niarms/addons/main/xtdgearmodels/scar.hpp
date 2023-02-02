class GVAR(scarl): GVAR(base) {
    label = "FN SCAR-L";
    options[] = {"camo", "gl", "barrel", "railExtension"};
    class camo {
        label = "Camo";
        changeingame = 0;
        values[] = {"tan", "black", "camo"};
        class tan {
            label = "Tan";
            // image = "";
        };
        class black {
            label = "Black";
            // image = "";
        };
        class camo {
            label = "Camo";
            // image = "";
        };
    };
    class gl {
        label = "Grenade Launcher";
        values[] = {"no", "yes"};
        changeingame = 0;
        alwaysSelectable = 1;
        class no {
            label = "No";
            // description = "";
        };
        class yes {
            label = "Yes";
            // description = "";
        };
    };
    class barrel {
        label = "Barrel Length";
        values[] = {"cqc", "std", "lb"};
        changeingame = 0;
        class cqc {
            label = "CQC";
            description = "Short Barrel";
        };
        class std {
            label = "STD";
            description = "Standard Barrel";
        };
        class lb {
            label = "Long";
            description = "Long Barrel";
        };
    };
    class railExtension {
        label = "SRX Rail Extension";
        values[] = {"no", "yes"};
        changeingame = 0;
        class no {
            label = "No";
            // description = "";
        };
        class yes {
            label = "Yes";
            // description = "";
        };
    };
};
class GVAR(scarl300): GVAR(base){
    label = "FN SCAR-L (.300)";
    autor = "Toadie | ACEAX Compat By DJZonk";
    options[] = {"camo", "gl", "barrel", "railExtension"};
    class camo {
        label = "Camo";
        changeingame = 0;
        values[] = {"tan", "black", "camo"};
        class tan {
            label = "Tan";
            // image = "";
        };
        class black {
            label = "Black";
            // image = "";
        };
        class camo {
            label = "Camo";
            // image = "";
        };
    };
    class gl {
        label = "Grenade Launcher";
        values[] = {"no", "yes"};
        changeingame = 0;
        alwaysSelectable = 1;
        class no {
            label = "No";
            // description = "";
        };
        class yes {
            label = "Yes";
            // description = "";
        };
    };
    class barrel {
        label = "Barrel Length";
        values[] = {"cqc", "std"};
        changeingame = 0;
        class cqc {
            label = "CQC";
            description = "Short Barrel";
        };
        class std {
            label = "STD";
            description = "Standard Barrel";
        };
    };
    class railExtension {
        label = "SRX Rail Extension";
        values[] = {"no", "yes"};
        changeingame = 0;
        class no {
            label = "No";
            // description = "";
        };
        class yes {
            label = "Yes";
            // description = "";
        };
    };
};
class GVAR(scarh): GVAR(base) {
    label = "FN SCAR-H";
    options[] = {"camo", "gl", "barrel", "railExtension"};
    class camo {
        label = "Camo";
        changeingame = 0;
        values[] = {"tan", "black", "camo"};
        class tan {
            label = "Tan";
            // image = "";
        };
        class black {
            label = "Black";
            // image = "";
        };
        class camo {
            label = "Camo";
            // image = "";
        };
    };
    class gl {
        label = "Grenade Launcher";
        values[] = {"no", "yes"};
        changeingame = 0;
        alwaysSelectable = 1;
        class no {
            label = "No";
            // description = "";
        };
        class yes {
            label = "Yes";
            // description = "";
        };
    };
    class barrel {
        label = "Barrel Length";
        values[] = {"cqc", "std", "lb"};
        changeingame = 0;
        class cqc {
            label = "CQC";
            description = "Short Barrel";
        };
        class std {
            label = "STD";
            description = "Standard Barrel";
        };
        class lb {
            label = "Long";
            description = "Long Barrel";
        };
    };
    class railExtension {
        label = "SRX Rail Extension";
        values[] = {"no", "yes"};
        changeingame = 0;
        class no {
            label = "No";
            // description = "";
        };
        class yes {
            label = "Yes";
            // description = "";
        };
    };
};
class GVAR(scarsc): GVAR(base) {
    label = "FN SCAR-SC";
    options[] = {"camo"};
    class camo {
        label = "Camo";
        changeingame = 0;
        values[] = {"tan", "black", "camo"};
        class tan {
            label = "Tan";
            // image = "";
        };
        class black {
            label = "Black";
            // image = "";
        };
        class camo {
            label = "Camo";
            // image = "";
        };
    };
};
class GVAR(tpr): GVAR(base) {
    label = "FN TPR";
    options[] = {"camo"};
    class camo {
        label = "Camo";
        changeingame = 0;
        values[] = {"tan", "black", "camo"};
        class tan {
            label = "Tan";
        };
        class black {
            label = "Black";
            // image = "";
        };
        class camo {
            label = "Camo";
            // image = "";
        };
    };
};
class GVAR(mk17): GVAR(base) {
    label = "MK 17";
    options[] = {"mod", "camo", "caliber", "barrel", "gl"};
    class mod {
        label = "Mod";
        changeingame = 0;
        values[] = {"0", "iur"};
        class 0 {
            label = "Mod 0";
            // description = "";
        };
        class iur {
            label = "IUR";
            // description = "";
        };
    };
    class camo {
        label = "Camo";
        changeingame = 0;
        values[] = {"tan", "camo"};
        class tan {
            label = "Tan";
        };
        class camo {
            label = "Camo";
            // image = "";
        };
    };
    class caliber {
        label = "Caliber";
        changeingame = 0;
        alwaysSelectable = 1;
        values[] = {"300", "556nato", "762nato","762ak"};
        class 300 {
            label = ".300 Blackout";
        };
        class 556nato {
            label = "5.56 NATO";
        };
        class 762nato {
            label = "7.62 NATO";
        };
        class 762ak {
            label = "5.56 AK";
        };
    };
    class barrel {
        label = "Barel Length";
        changeingame = 0;
        values[] = {"std", "cqc"};
        class std {
            label = "Standard";
        };
        class cqc {
            label = "CQC";
        };
    };
    class gl {
        label = "Grenade Launcher";
        changeingame = 0;
        alwaysSelectable = 1;
        values[] = {"no", "yes"};
        class no {
            label = "No";
            // description = "";
        };
        class yes {
            label = "Yes";
            // description = "";
        };
    };
};
