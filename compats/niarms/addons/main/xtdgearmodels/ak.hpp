class GVAR(slr107u): GVAR(base) {
    label = "SLR107U";
    options[] = {"rail"};
    class rail {
        label = "Rail Mount";
        values[] = {"no","yes"};
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
class GVAR(ak12): GVAR(base) {
    label = "AK12";
    options[] = {"Variant", "gl"};
    class variant {
        label = "Variant";
        values[] = {"standard","u"};
        changeingame = 0;
        alwaysSelectable = 1;
        class standard {
            label = "Standard";
            // description = "";
        };
        class u {
            label = "U";
            // description = "";
        };
    };
    class gl {
        label = "Grenade Launcher";
        values[] = {"no","yes"};
        changeingame = 0;
        alwaysSelectable = 1;
        class no {
            label = "no";
            // description = "";
        };
        class yes {
            label = "yes";
            // description = "";
        };
    };
};
class GVAR(ak74): GVAR(base) {
    label = "AK74";
    options[] = {"rail", "wear"};
    class rail {
        label = "Rail Adapter";
        values[] = {"no","yes"};
        changeingame = 0;
        alwaysSelectable = 1;
        class no {
            label = "no";
            // description = "";
        };
        class yes {
            label = "yes";
            // description = "";
        };
    };
    class wear {
        label = "Wear";
        values[] = {"none","wear1","wear2"};
        changeingame = 0;
        alwaysSelectable = 1;
        class no {
            label = "no";
            // description = "";
        };
        class wear1 {
            label = "Wear 1";
            // description = "";
        };
        class wear2 {
            label = "Wear 2";
            // description = "";
        };
    };
};
class GVAR(ak74m): GVAR(base) {
    label = "AK74M";
    options[] = {"gl", "rail"};
    class gl {
        label = "Grenade Launcher";
        values[] = {"no","yes"};
        changeingame = 0;
        alwaysSelectable = 1;
        class no {
            label = "no";
            // description = "";
        };
        class yes {
            label = "yes";
            // description = "";
        };
    };
    class rail {
        label = "Rail Adapter";
        values[] = {"no","yes"};
        changeingame = 0;
        alwaysSelectable = 1;
        class no {
            label = "no";
            // description = "";
        };
        class yes {
            label = "yes";
            // description = "";
        };
    };
};
class GVAR(akm): GVAR(base) {
    label = "AKM";
    options[] = {"gl", "rail"};
    class gl {
        label = "Grenade Launcher";
        values[] = {"no","yes"};
        changeingame = 0;
        alwaysSelectable = 1;
        class no {
            label = "no";
            // description = "";
        };
        class yes {
            label = "yes";
            // description = "";
        };
    };
    class rail {
        label = "Rail Adapter";
        values[] = {"no","yes"};
        changeingame = 0;
        alwaysSelectable = 1;
        class no {
            label = "no";
            // description = "";
        };
        class yes {
            label = "yes";
            // description = "";
        };
    };
};
class GVAR(aks): GVAR(base) {
    label = "AKS";
    options[] = {"variant", "rail", "gl"};
    class variant {
        label = "Variant";
        values[] = {"standard","u"};
        changeingame = 0;
        alwaysSelectable = 1;
        class standard {
            label = "Standard";
            // description = "";
        };
        class u {
            label = "U";
            // description = "";
        };
    };
    class rail {
        label = "Rail Adapter";
        values[] = {"no","yes"};
        changeingame = 0;
        alwaysSelectable = 1;
        class no {
            label = "no";
            // description = "";
        };
        class yes {
            label = "yes";
            // description = "";
        };
    };
    class gl {
        label = "Grenade Launcher";
        values[] = {"no","yes"};
        changeingame = 0;
        alwaysSelectable = 1;
        class no {
            label = "no";
            // description = "";
        };
        class yes {
            label = "yes";
            // description = "";
        };
    };
};
class GVAR(aks74u): GVAR(base) {
    label = "AKS74U";
    options[] = {"rail"};
    class rail {
        label = "Rail Adapter";
        values[] = {"no","yes"};
        changeingame = 0;
        alwaysSelectable = 1;
        class no {
            label = "no";
            // description = "";
        };
        class yes {
            label = "yes";
            // description = "";
        };
    };
};
class GVAR(aek): GVAR(base) {
    label = "AKS";
    options[] = {"rail", "wear"};
    class rail {
        label = "Rail Adapter";
        values[] = {"no","yes"};
        changeingame = 0;
        alwaysSelectable = 1;
        class no {
            label = "no";
            // description = "";
        };
        class yes {
            label = "yes";
            // description = "";
        };
    };
    class wear {
        label = "Wear";
        values[] = {"no","yes"};
        changeingame = 0;
        alwaysSelectable = 1;
        class no {
            label = "no";
            // description = "";
        };
        class yes {
            label = "yes";
            // description = "";
        };
    };
};
class GVAR(rpk): GVAR(base) {
    label = "RPK";
    options[] = {"variant"};
    class variant {
        label = "Variant";
        values[] = {"rpk", "rpk12", "rpk74"};
        changeingame = 0;
        alwaysSelectable = 1;
        class rpk {
            label = "RPK";
            description = "7.62 no rails";
        };
        class rpk12 {
            label = "RPK12";
            description = "5.56 with rails";
        };
        class rpk74 {
            label = "RPK74";
            description = "5.56 no rails";
        };
    };
};
