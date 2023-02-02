class GVAR(g36mlic): GVAR(base) {
    label = "G36 6.5mm";
    options[] = {"length", "gl"};
    class length {
        label = "Length";
        alwaysSelectable = 1;
        values[] = {"compact", "short", "standard"};
        class compact {
            label = "Compact";
            // image = "";
        };
        class short {
            label = "Short";
            // image = "";
        };
        class standard {
            label = "Standard";
            // image = "";
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
};
class GVAR(g36): GVAR(base) {
    label = "G36";
    options[] = {"variant", "length", "tac", "gl", "rails"};
    class variant {
        label = "Variant";
        alwaysSelectable = 1;
        values[] = {"a", "e", "v", "tac", "ksk"};
        class a {
            label = "A";
            description = "Standard Version";
        };
        class e {
            label = "E";
            description = "Export Version";
        };
        class v {
            label = "V";
            description = "Diffrent Stock/ Iron Sights and has a rail system";
        };
        class tac {
            label = "TAC";
            description = "Diffrent Stock and Skeletonized Rails";
        };
        class ksk {
            label = "KSK";
            description = "Short Varient with Rail system and skeltonized handguard";
        };
    };
    class length {
        label = "Length";
        alwaysSelectable = 1;
        values[] = {"standard", "compact", "short"};
        class compact {
            label = "Compact";
            // image = "";
        };
        class short {
            label = "Short";
            // image = "";
        };
        class standard {
            label = "Standard";
            // image = "";
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
