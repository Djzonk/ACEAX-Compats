class GVAR(acr): GVAR(base) {
    label = "ACR-E";
    options[] = {"camo", "barrel", "gl"};
    class camo {
        label = "Camo";
        changeingame = 0;
        values[] = {"tan", "black", "green"};
        class tan {
            label = "Tan";
            // image = "";
        };
        class black {
            label = "Black";
            // image = "";
        };
        class camo {
            label = "Green";
            // image = "";
        };
    };
    class barrel {
        label = "Barrel Length";
        changeingame = 0;
        values[] = {"compact", "carbine", "mid", "long"};
        class compact {
            label = "Compact";
        };
        class carbine {
            label = "Carbine";
        };
        class mid {
            label = "Mid";
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
};
class GVAR(acr68): GVAR(base) {
    label = "ACR-E 6.8mm";
    options[] = {"camo", "barrel", "gl"};
    class camo {
        label = "Camo";
        changeingame = 0;
        values[] = {"tan", "black", "green"};
        class tan {
            label = "Tan";
            // image = "";
        };
        class black {
            label = "Black";
            // image = "";
        };
        class green {
            label = "Green";
            // image = "";
        };
    };
    class barrel {
        label = "Barrel Length";
        changeingame = 0;
        values[] = {"compact", "carbine", "mid", "long"};
        class compact {
            label = "Compact";
        };
        class carbine {
            label = "Carbine";
        };
        class mid {
            label = "Mid";
        };
        class long {
            label = "Long";
        };
    };
    class gl {
        label = "Grenade Launcher";
        values[] = {"no","yes"};
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
class GVAR(acr_cliffhanger): GVAR(base) {
    label = "ACR-E Cliffhanger";
    options[] = {"gl"};
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
};
