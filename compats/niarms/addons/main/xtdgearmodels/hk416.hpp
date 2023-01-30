class GVAR(hk416) {
    label = "HK416";
    author = "Toadie | ACEAX Compat By DJZonk";
    options[] = {"variant", "length", "camo", "gl"};
    class length {
        label = "Barrel Length";
        alwaysSelectable = 1;
        changeingame = 0;
        values[] = {"9in", "10in", "145in", "165in", "20in"};
        class 9in {
            label = "9in";
        };
        class 10in {
            label = "10in";
        };
        class 145in {
            label = "14.5in";
        };
        class 165in {
            label = "16.5in";
        };
        class 20in {
            label = "20in";
        };
    };
    class variant {
        label = "Variant";
        changeingame = 0;
        alwaysSelectable = 1;
        values[] = {"c", "d", "n", "devgru", "potato", "rahg", "smr", "ptc", "cag", "iar"};
        class d {
            label = "D";
            // description = "";
        };
        class c {
            label = "C";
            description = "C-variant Buffer/Bolt/Stock assembly";
        };
        class n {
            label = "N";
            // description = "";
        };
        class devgru {
            label = "DEVGRU";
            description = "DEVGRU Mockup (RAHG, Hogue Overmold Pistol Grip, CTR Stock, Geissele Match Trigger)";
        };
        class potato {
            label = "Potato";
            description = "SMR, Gunfighter Pistol Grip,Gunfighter Trigger Guard, Vltor IMOD Stock, Surefire 3-Prong Muzzle Brake";
        };
        class rahg {
            label = "RAHG";
            description = "Remington Accessories Hand Guard";
        };
        class smr {
            label = "SMR";
            description = "Geissele SMR Mk.1";
        };
        class ptc {
            label = "PTC";
            description = "C variant with a angry maple leaf";
        };
        class cag {
            label = "CAG";
            description = "Delta Force Mockup ( CTR Stock, Black Geissele SMR Rail)";
        };
        class iar {
            label = "IAR";
            description = "USMC M27 Infantry Automatic Rifle with 16.5in Barrel ( Blueforce Gear Sling mount, Knights's Micro BUIS)";
        };
    };
    class camo {
        label = "Camo";
        changeingame = 0;
        values[] = {"black", "tan", "woodland"};
        class black: BLK {
            label = "Black";
        };
        class woodland {
            label = "woodland";
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
};
