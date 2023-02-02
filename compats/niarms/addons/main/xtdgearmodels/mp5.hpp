class GVAR(mp5): GVAR(base) {
    label = "MP5";
    options[] = {"stock", "fireSelector","handGuardRails"};
    class stock {
        label = "Stock";
        values[] = {"solid", "collapsible"};
        class solid {
            label = "Solid";
        };
        class collapsible {
            label = "Collapsible";
        };
    };
    class fireSelector {
        label = "Fire Selector Style";
        values[] = {"text", "iconography"};
        class text {
            label = "Text";
        };
        class iconography {
            label = "Iconography";
        };
    };
    class handGuardRails {
        label = "Hand Guard Rails";
        values[] = {"no", "yes"};
        class no {
            label = "No";
        };
        class yes {
            label = "Yes";
        };
    };
};
class GVAR(mp5s): GVAR(base) {
    label = "MP5 Integrally suppressed";
    options[] = {"stock"};
    class stock {
        label = "Stock";
        values[] = {"solid", "collapsible"};
        class solid {
            label = "Solid";
        };
        class collapsible {
            label = "Collapsible";
        };
    };
};
class GVAR(mp510): GVAR(base) {
    label = "MP5 10MM";
    options[] = {"handGuardRails"};
    class handGuardRails {
        label = "Hand Guard Rails";
        values[] = {"no", "yes"};
        class no {
            label = "No";
        };
        class yes {
            label = "Yes";
        };
    };
};
