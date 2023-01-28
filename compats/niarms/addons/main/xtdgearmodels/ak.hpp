class GVAR(slr107u) {
    label = "SLR107U";
    author = "Toadie | ACEAX Compat By DJZonk";
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
class GVAR(ak12) {
    label = "AK12";
    author = "Toadie | ACEAX Compat By DJZonk";
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
class GVAR(ak74) {
    label = "AK74";
    author = "Toadie | ACEAX Compat By DJZonk";
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
class GVAR(ak74m) {
    label = "AK74M";
    author = "Toadie | ACEAX Compat By DJZonk";
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
class GVAR(akm) {
    label = "AKM";
    author = "Toadie | ACEAX Compat By DJZonk";
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
class GVAR(aks) {
    label = "AKS";
    author = "Toadie | ACEAX Compat By DJZonk";
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
class GVAR(aks74u) {
    label = "AKS74U";
    author = "Toadie | ACEAX Compat By DJZonk";
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
class GVAR(aek) {
    label = "AKS";
    author = "Toadie | ACEAX Compat By DJZonk";
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
class GVAR(rpk) {
    label = "RPK";
    author = "Toadie | ACEAX Compat By DJZonk";
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
