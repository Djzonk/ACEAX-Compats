class GVAR(mk46): GVAR(base) {
    label = "MK46";
    options[] = {"mod"};
    class mod {
        label = "Mod";
        values[] = {"mod0", "mod1"};
        class mod0 {
            label = "Mod 0";
        };
        class mod1 {
            label = "Mod 1";
        };
    };
};
class GVAR(mk48): GVAR(mk46) {label = "MK48";};
class GVAR(m249): GVAR(base) {
    label = "M249";
    options[] = {"varient","barrel", "stock", "rail"};
    class varient {
        label = "Varient";
        alwaysSelectable = 1;
        values[] = {"base", "para", "pip"};
        class base {
            label = "Base";
        };
        class para {
            label = "Para";
        };
        class pip {
            label = "PIP";
            description = "Product Improvement Program kit";
        };
    };
    class barrel {
        label = "Barrel Length";
        alwaysSelectable = 1;
        values[] = {"short", "long"};
        class short {
            label = "Short";
        };
        class long {
            label = "Long";
        };
    };
    class stock {
        label = "Stock";
        alwaysSelectable = 1;
        values[] = {"solid", "para", "pip", "frame"};
        class solid {
            label = "Solid";
        };
        class para {
            label = "Para";
        };
        class pip {
            label = "PIP";
        };
        class frame {
            label = "Frame";
        };
    };
    class rail {
        label = "Optics Rail";
        alwaysSelectable = 1;
        values[] = {"no", "yes"};
        class no {
            label = "No";
        };
        class yes {
            label = "Yes";
        };
    };
};
class GVAR(minimi): GVAR(base) {
    label = "FN Minimi";
    options[] = {"stock", "barrel", "rail"};
    class stock {
        label = "Stock";
        alwaysSelectable = 1;
        values[] = {"solid", "para"};
        class solid {
            label = "Solid";
        };
        class para {
            label = "Para";
        };
    };
    class barrel {
        label = "Barrel Length";
        alwaysSelectable = 1;
        values[] = {"short", "long"};
        class short {
            label = "Short";
        };
        class long {
            label = "Long";
        };
    };
    class rail {
        label = "Optic Rail";
        alwaysSelectable = 1;
        values[] = {"no", "yes"};
        class no {
            label = "No";
        };
        class yes {
            label = "Yes";
        };
    };
};
