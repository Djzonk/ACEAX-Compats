class XtdGearModels {
    class CfgWeapons {
        class GVAR(m14) {
            label = "M14";
            author = "Toadie | ACEAX Compat By DJZonk";
            options[] = {"varient", "rail", "bipod"};
            class varient {
                label = "Varient";
                alwaysSelectable = 1;
                changeingame = 0;
                values[] = {"standard", "dmr"};
                class standard {
                    label = "Standard";
                };
                class dmr {
                    label = "DMR";
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
        class GVAR(m21) {
            label = "M21";
            author = "Toadie | ACEAX Compat By DJZonk";
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
    };
};
