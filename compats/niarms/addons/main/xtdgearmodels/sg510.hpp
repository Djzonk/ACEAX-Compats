class GVAR(stgw57): GVAR(base) {
    label = "STGW57";
    options[] = {"variant", "rails", "gl"};
    class variant {
        label = "variant";
        alwaysSelectable = 1;
        values[] = {"base", "commando", "510", "5104", "amt"};
        class base {
            label = "Base";
        };
        class commando {
            label = "Commando";
        };
        class 510 {
            label = "510";
        };
        class 5104 {
            label = "510-4";
        };
        class amt {
            label = "AMT";
            description = "American match trigger";
        };
    };
    class gl {
        label = "Grenade Launcher";
        values[] = {"no", "yes"};
        alwaysSelectable = 0;
        class no {
            label = "No";
        };
        class yes {
            label = "Yes";
        };
    };
    class rails {
        label = "Rails";
        values[] = {"no", "yes"};
        alwaysSelectable = 0;
        class no {
            label = "No";
        };
        class yes {
            label = "Yes";
        };
    };
};
