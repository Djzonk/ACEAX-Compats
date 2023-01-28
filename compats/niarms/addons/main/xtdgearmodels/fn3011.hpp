class GVAR(fn3011) {
    label = "FN30-11";
    author = "Toadie | ACEAX Compat By DJZonk";
    options[] = {"variant", "camo"};
    class variant {
        label = "Variant";
        values[] = {"og", "modernized", "tac", "lynx"};
        changeingame = 0;
        alwaysSelectable = 1;
        class og {
            label = "Original";
        };
        class modernized {
            label = "Modernized";
            description = "5.56 with rails";
        };
        class tac {
            label = "TAC";
            description = "5.56 no rails";
        };
        class lynx {
            label = "LYNX";
            description = "5.56 no rails";
        };
    };
    class camo {
        label = "Camo";
        values[] = {"none", "woodland", "green", "arctic", "grayash", "walnut"};
        changeingame = 0;
        class none {
            label = "None";
        };
        class woodland {
            label = "Woodland";
        };
        class green {
            label = "Green";
        };
        class arctic {
            label = "Arctic";
        };
        class grayash {
            label = "Gray Ash";
        };
        class walnut {
            label = "Walnut";
        };
    };
};
