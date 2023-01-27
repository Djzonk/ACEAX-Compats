class GVAR(awm) {
    label = "AWM";
    author = "Toadie | ACEAX Compat By DJZonk";
    options[] = {"camo", "suppressed", "ghillie"};
    class camo {
        label = "Camo";
        values[] = {"blk", "fde", "od"};
        class fde {
            label = "FDE";
        };
        class od {
            label = "OD";
        };
    };
    class suppressed {
        label = "Integrally suppressed";
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
    class ghillie {
        label = "Ghillie";
        values[] = {"no", "yes"};
        changeingame = 1;
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
