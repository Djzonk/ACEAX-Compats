class GVAR(xm8) {
    label = "XM8";
    author = "Toadie | ACEAX Compat By DJZonk";
    options[] = {"variant", "length", "camo", "gl"};
    class variant {
        label = "Variant";
        changeingame = 0;
        alwaysSelectable = 1;
        values[] = {"standard", "prototype", "mwsf"};
        class standard {
            label = "Standard";
            // description = "";
        };
        class prototype {
            label = "Prototype";
            // description = "";
        };
        class mwsf {
            label = "MWSF";
            description = "Modular Weapons System Family";
        };
    };
    class length {
        label = "Length";
        alwaysSelectable = 1;
        changeingame = 0;
        values[] = {"compact", "carbine", "dmar"};
        class compact {
            label = "Compact";
        };
        class carbine {
            label = "Carbine";
        };
        class dmar {
            label = "DMAR";
        };
    };
    class camo {
        label = "Camo";
        changeingame = 0;
        values[] = {"black", "green", "od", "tan"};
        class black: BLK {
            label = "Black";
        };
        class green {
            label = "Green";
        };
        class od:OD {};
        class woodland {
            label = "woodland";
        };
    };
    class gl {
        label = "Grenade Launcher";
        values[] = {"no", "yes"};
        alwaysSelectable = 0;
        class no {
            label = "No";
        };
        class yes {
            label = "Yes";
        };
    };
};
