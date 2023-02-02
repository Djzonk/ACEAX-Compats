class GVAR(p226): GVAR(base) {
    label = "P226";
    options[] = {"caliber", "type", "rails", "threadedBarrel"};
    class type {
        label = "Type";
        changeingame = 0;
        alwaysSelectable = 1;
        values[] = {"base", "elite", "equinox", "stainless", "westGerman"};
        class base {
            label = "Base";
        };
        class elite {
            label = "Elite";
            description = "Lengthened Beavertail";
        };
        class equinox {
            label = "Equinox";
        };
        class stainless {
            label = "Stainless Steel";
            description = "Stainless-Steel Slide, Nickel Finish";
        };
        class westGerman {
            label = "West German";
            description = "Orig. West-German Run";
        };
    };
    class caliber {
        label = "Caliber";
        changeingame = 0;
        alwaysSelectable = 1;
        values[] = {"9mm", "40sw", "357"};
        class 9mm {
            label = "9x19mm";
        };
        class 40sw {
            label = ".40 S&W";
        };
        class 357 {
            label = ".357 SIG";
        };
    };
    class rails {
        label = "Rails";
        changeingame = 0;
        alwaysSelectable = 1;
        values[] = {"no", "yes"};
        class no {
            label = "No";
        };
        class yes {
            label = "yes";
        };
    };
    class threadedBarrel {
        label = "Threaded Barrel";
        changeingame = 0;
        alwaysSelectable = 1;
        values[] = {"no", "yes"};
        class no {
            label = "No";
        };
        class yes {
            label = "yes";
        };
    };
};
class GVAR(p229): GVAR(base) {
    label = "P229";
    options[] = {"caliber", "type", "threadedBarrel"};
    class type {
        label = "Type";
        changeingame = 0;
        alwaysSelectable = 1;
        values[] = {"base", "elite", "equinox", "stainless"};
        class base {
            label = "Base";
        };
        class elite {
            label = "Elite";
            description = "Lengthened Beavertail";
        };
        class equinox {
            label = "Equinox";
        };
        class stainless {
            label = "Stainless Steel";
            description = "Stainless-Steel Slide, Nickel Finish";
        };
    };
    class caliber {
        label = "Caliber";
        changeingame = 0;
        alwaysSelectable = 1;
        values[] = {"9mm", "40sw", "357"};
        class 9mm {
            label = "9x19mm";
        };
        class 40sw {
            label = ".40 S&W";
        };
        class 357 {
            label = ".357 SIG";
        };
    };
    class threadedBarrel {
        label = "Threaded Barrel";
        changeingame = 0;
        alwaysSelectable = 1;
        values[] = {"no", "yes"};
        class no {
            label = "No";
        };
        class yes {
            label = "yes";
        };
    };
};
class GVAR(mk25): GVAR(base) {
    label = "MK25";
    options[] = {"finish", "threadedBarrel"};
    class finish {
        label = "Finish";
        changeingame = 0;
        values[] = {"black", "tan"};
        class black {
            label = "Black";
        };
        class tan {
            label = "Tan";
        };
    };
    class threadedBarrel {
        label = "Threaded Barrel";
        changeingame = 0;
        alwaysSelectable = 1;
        values[] = {"no", "yes"};
        class no {
            label = "No";
        };
        class yes {
            label = "yes";
        };
    };
};
class GVAR(p239): GVAR(base) {
    label = "P239 Subcompact";
    options[] = {"caliber"};
    class caliber {
        label = "Caliber";
        changeingame = 0;
        values[] = {"9mm", "40sw", "357"};
        class 9mm {
            label = "9x19mm";
        };
        class 40sw {
            label = ".40 S&W";
        };
        class 357 {
            label = ".357 SIG";
        };
    };
};
class GVAR(mk11): GVAR(base) {
    label = "MK11";
    options[] = {"type"};
    class type {
        label = "Type";
        changeingame = 0;
        values[] = {"mk11", "mk11a1", "mk11a1d"};
        class mk11 {
            label = "MK11";
            description = "Orig. West-German Run,US DOD Markings";
        };
        class mk11a1 {
            label = "MK11A1";
            description = "Commercial reproduction";
        };
        class mk11a1d {
            label = "MK11A1D";
            description = "Commercial reproduction, Sand/Tan Finish";
        };
    };
};
