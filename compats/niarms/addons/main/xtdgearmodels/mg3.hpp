class GVAR(mg42): GVAR(base) {
    label = "MG42";
    options[] = {"kws", "camo", "stock"};
    class kws {
        label = "KWS Modernization";
        alwaysSelectable = 1;
        values[] = {"no", "yes"};
        class no {
            label = "No";
        };
        class yes {
            label = "yes";
        };
    };
    class camo {
        label = "Color";
        alwaysSelectable = 1;
        values[] = {"gunMetal", "black", "green", "tan"};
        class gunMetal {
            label = "Gun Metal";
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
        class tan {
            label = "Tan";
            // image = "";
        };
    };
    class stock {
        label = "Stock";
        values[] = {"base", "bakelite"};
        class base {
            label = "Base";
        };
        class bakelite {
            label = "Bakelite";
        };
    };
};
class GVAR(mg3): GVAR(base) {
    label = "MG3";
    options[] = {"kws", "camo", "rail"};
    class kws {
        label = "KWS Modernization";
        alwaysSelectable = 1;
        values[] = {"no", "yes"};
        class no {
            label = "No";
        };
        class yes {
            label = "yes";
        };
    };
    class camo {
        label = "Color";
        alwaysSelectable = 1;
        values[] = {"gunMetal", "black", "green", "tan"};
        class gunMetal {
            label = "Gun Metal";
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
        class tan {
            label = "Tan";
            // image = "";
        };
    };
    class rail {
        label = "Optic Rail";
        values[] = {"no", "yes"};
        class no {
            label = "No";
        };
        class yes {
            label = "yes";
        };
    };
};
