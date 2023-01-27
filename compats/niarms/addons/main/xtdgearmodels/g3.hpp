class GVAR(g3) {
    label = "G3";
    author = "Toadie | ACEAX Compat By DJZonk";
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
class GVAR(hk33) {
    label = "HK33";
    author = "Toadie | ACEAX Compat By DJZonk";
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
class GVAR(hk53) {
    label = "HK33";
    author = "Toadie | ACEAX Compat By DJZonk";
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
class GVAR(psg1) {
    label = "PSG1";
    author = "Toadie | ACEAX Compat By DJZonk";
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
