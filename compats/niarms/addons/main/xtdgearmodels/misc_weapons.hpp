class GVAR(m60): GVAR(base) {
    label = "M60";
    options[] = {"variant"};
    class variant {
        label = "variant";
        values[] = {"base", "e4"};
        class base {
            label = "Base";
        };
        class e4 {
            label = "E4";
        };
    };
};

class GVAR(m1903a1): GVAR(base) {
    label = "M1903A1";
    options[] = {"variant"};
    class variant {
        label = "variant";
        values[] = {"base", "guthrie", "scope"};
        class base {
            label = "Base";
        };
        class guthrie {
            label = "Guthrie";
        };
        class scope {
            label = "Scope";
        };
    };
};
