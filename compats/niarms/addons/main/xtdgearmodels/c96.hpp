class GVAR(c96): GVAR(base) {
    label = "C96";
    options[] = {"variant", "barrelLength", "stock", "wear"};
    class variant {
        label = "Variant";
        values[] = {"standard", "custom", "prussian", "fullauto"};
        changeingame = 0;
        alwaysSelectable = 1;
        class standard {
            label = "Standard";
            // description = "";
        };
        class custom {
            label = "Custom";
            // description = "";
        };
        class prussian {
            label = "prussian";
            description = "9mm";
        };
        class fullauto {
            label = "Full Auto";
            // description = "";
        };
    };
    class barrelLength {
        label = "Variant";
        values[] = {"short", "long"};
        changeingame = 0;
        alwaysSelectable = 1;
        class short {
            label = "Short";
            // description = "";
        };
        class long {
            label = "Long";
            // description = "";
        };
    };
    class stock {
        label = "Stock";
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
    class wear {
        label = "Wear";
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
