class GVAR(aug) {
    label = "AUG";
    author = "Toadie | ACEAX Compat By DJZonk";
    options[] = {"variant", "camo", "length", "gl", "rails"};
    class variant {
        label = "Variant";
        alwaysSelectable = 1;
        changeingame = 0;
        values[] = {"a1", "a2", "a3", "sr", "para", "a2para"};
        class a1 {
            label = "A1";
        };
        class a2 {
            label = "A2";
        };
        class A3 {
            label = "A3";
        };
        class sr {
            label = "SR";
            description = "Special Reciever (Single Fire)";
        };
        class para {
            label = "Para 9mm";
        };
        class a2para {
            label = "A2 Para 9mm";
        };
    };
    class camo {
        label = "Camo";
        changeingame = 0;
        values[] = {"blk", "od", "tan", "blue", "green"};
        class od {
            label = "OD";
        };
        class blue {
            label = "Blue";
        };
        class green {
            label = "Green";
        };
    };
    class length {
        label = "Barrel Length";
        changeingame = 0;
        values[] = {"standard", "carbine", "hbar"};
        class standard {
            label = "standard";
        };
        class carbine {
            label = "Carbine";
        };
        class hbar {
            label = "HBAR";
            description = "Heavy Longer Barrel";
        };
    };
    class gl {
        label = "Grenade Launcher";
        values[] = {"no", "yes"};
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
    class rails {
        label = "rails";
        values[] = {"no", "yes", "opticonly"};
        alwaysSelectable = 1;
        class no {
            label = "No";
            // description = "";
        };
        class yes {
            label = "Yes";
            description = "Has both handguard and optic rails";
        };
        class opticonly {
            label = "Optic Only";
            // description = "";
        };
    };
};

