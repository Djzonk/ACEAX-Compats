
class GVAR(mp5) {
    label = "MP5";
    author = "Toadie | ACEAX Compat By DJZonk";
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
class GVAR(mp5s) {
    label = "MP5 Integrally suppressed";
    author = "Toadie | ACEAX Compat By DJZonk";
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
class GVAR(mp510) {
    label = "MP5 10MM";
    author = "Toadie | ACEAX Compat By DJZonk";
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
