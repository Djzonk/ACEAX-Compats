class GVAR(sg550): GVAR(base) {
    label = "SG550";
    options[] = {"varient","gl", "opticRail", "barrelRail"};
    class varient {
        label = "Varient";
        changeingame = 0;
        values[] = {"standard", "sniper"};
        class standard {
            label = "Standard";
        };
        class sniper {
            label = "Sniper";
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
    class opticRail {
        label = "Optic Rail";
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
    class barrelRail {
        label = "Barrel Rails";
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
};
class GVAR(sg551): GVAR(base) {
    label = "SG551";
    options[] = {"barrel", "gl", "opticRail", "barrelRail"};
    class barrel {
        label = "Barrel";
        changeingame = 0;
        values[] = {"short", "long"};
        class short {
            label = "Short";
        };
        class long {
            label = "Long";
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
    class opticRail {
        label = "Optic Rail";
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
    class barrelRail {
        label = "Barrel Rails";
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
};
class GVAR(sg553): GVAR(base) {
    label = "SG553";
    options[] = {"caliber", "barrel", "opticRail", "barrelRail"};
    class caliber {
        label = "Caliber";
        changeingame = 0;
        alwaysSelectable = 1;
        values[] = {"556", "762"};
        class 556 {
            label = "5.56";
        };
        class 762 {
            label = "7.67";
        };
    };
    class barrel {
        label = "Barrel";
        changeingame = 0;
        values[] = {"short", "long"};
        class short {
            label = "Short";
        };
        class long {
            label = "Long";
        };
    };
    class opticRail {
        label = "Optic Rail";
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
    class barrelRail {
        label = "Barrel Rails";
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
};
