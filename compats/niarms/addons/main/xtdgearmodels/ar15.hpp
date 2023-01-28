class GVAR(m4) {
    label = "M4";
    author = "Toadie | ACEAX Compat By DJZonk";
    options[] = {"variant", "gl"};
    class variant {
        label = "Variant";
        alwaysSelectable = 1;
        changeingame = 0;
        values[] = {"m4", "m4a1", "m4a1ch", "m4le", "xm117e2", "mk18"};
        class m4 {
            label = "M4";
        };
        class m4a1 {
            label = "M4A1";
        };
        class m4a1ch {
            label = "M4A1 Carry Handle";
        };
        class m4le {
            label = "M4LE";
        };
        class xm117e2 {
            label = "XM117E2";
        };
        class mk18 {
            label = "MK 18";
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
};
class GVAR(ro727) {
    label = "Colt RO727";
    author = "Toadie | ACEAX Compat By DJZonk";
    options[] = {"variant", "gl"};
    class variant {
        label = "Variant";
        alwaysSelectable = 1;
        changeingame = 0;
        values[] = {"carbine", "commando", "commandoShort"};
        class carbine {
            label = "Carbine";
        };
        class commando {
            label = "Commando";
        };
        class commandoShort {
            label = "Commando Short Barrel";
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
};



class GVAR(ar15magpul) {
    label = "AR-15 Magpul";
    author = "Toadie | ACEAX Compat By DJZonk";
    options[] = {"variant"};
    class variant {
        label = "Variant";
        alwaysSelectable = 1;
        changeingame = 0;
        values[] = {"standard", "sanitised"};
        class standard{
            label = "Standard";
        };
        class sanitised {
            label = "Sanitised";
        };
    };
};
class GVAR(m16) {
    label = "M16";
    author = "Toadie | ACEAX Compat By DJZonk";
    options[] = {"variant", "gl"};
    class variant {
        label = "Variant";
        alwaysSelectable = 1;
        changeingame = 0;
        values[] = {"a1", "a2"};
        class a1 {
            label = "A1";
        };
        class a2 {
            label = "A2";
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
};
class GVAR(lar15) {
    label = "LAR-15";
    author = "Toadie | ACEAX Compat By DJZonk";
    options[] = {"camo"};
    class camo {
        label = "Camo";
        alwaysSelectable = 1;
        changeingame = 0;
        values[] = {"black", "tan"};
        class black: blk {
            label = "Black";
        };
        class tan {
            label = "Tan Lower";
            description = "Tan Lower randomly a anime stock (Not DJZonks fault)";
        };
    };
};
