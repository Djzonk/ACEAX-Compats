class GVAR(m14): GVAR(base) {
    label = "M14";
    options[] = {"varient", "rail", "bipod"};
    class varient {
        label = "Varient";
        alwaysSelectable = 1;
        changeingame = 0;
        values[] = {"standard", "dmr", "sopmod"};
        class standard {
            label = "Standard";
        };
        class dmr {
            label = "DMR";
        };
        class sopmod {
            label = "SOPMOD";
        };
    };
    class rail {
        label = "Optic Rail";
        alwaysSelectable = 1;
        changeingame = 0;
        values[] = {"no", "yes"};
        class no {
            label = "No";
        };
        class yes {
            label = "Yes";
        };
    };
    class bipod {
        label = "Bipod";
        alwaysSelectable = 1;
        changeingame = 0;
        values[] = {"no", "yes"};
        class no {
            label = "No";
        };
        class yes {
            label = "Yes";
        };
    };
};
class GVAR(m21): GVAR(base) {
    label = "M21";
    options[] = {"rail"};
    class rail {
        label = "Optic Rail";
        changeingame = 0;
        values[] = {"no", "yes"};
        class no {
            label = "No";
        };
        class yes {
            label = "Yes";
        };
    };
};
