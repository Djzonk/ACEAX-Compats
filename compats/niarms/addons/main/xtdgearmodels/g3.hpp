class GVAR(g3): GVAR(base) {
    label = "G3";
    options[] = {"variant", "gl", "handGuard", "opticRails"};
    class variant {
        label = "Variant";
        alwaysSelectable = 1;
        values[] = {"standard", "sniper", "ras"};
        class standard {
            label = "Standard";
        };
        class sniper {
            label = "Sniper";
        };
        class ras {
            label = "RAS";
            description = "Modernization";
        };
    };
    class gl {
        label = "Gernade Launcher";
        alwaysSelectable = 1;
        values[] = {"no", "yes"};
        class no {
            label = "No";
        };
        class yes {
            label = "Yes";
        };
    };
    class handGuard {
        label = "handGuard";
        alwaysSelectable = 1;
        values[] = {"standard", "wide", "rails"};
        class standard {
            label = "Standard";
        };
        class wide {
            label = "Wide";
        };
        class rails {
            label = "Rails";
        };
    };
    class opticRails {
        label = "Optic Rails";
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
class GVAR(hk33): GVAR(base) {
    label = "HK33";
    options[] = {"varient", "gl", "rails"};
        class variant {
        label = "Variant";
        alwaysSelectable = 1;
        values[] = {"a2", "a3"};
        class a2 {
            label = "A2";
        };
        class a3 {
            label = "A3";
        };
    };
    class gl {
        label = "Gernade Launcher";
        alwaysSelectable = 1;
        values[] = {"no", "yes"};
        class no {
            label = "No";
        };
        class yes {
            label = "Yes";
        };
    };
    class rails {
        label = "Rails";
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
class GVAR(hk53): GVAR(base) {
    label = "HK33";
    options[] = {"rails"};
    class rails {
        label = "Rails";
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
class GVAR(psg1): GVAR(base) {
    label = "PSG1";
    options[] = {"optic"};
    class optic {
        label = "optic";
        alwaysSelectable = 1;
        values[] = {"builtIn", "adapter", "rail"};
        class builtIn {
            label = "Built In";
        };
        class adapter {
            label = "adapter";
            description = "Limited selection of optics with adapters.";
        };
        class rail {
            label = "Rail";
        };
    };
};
