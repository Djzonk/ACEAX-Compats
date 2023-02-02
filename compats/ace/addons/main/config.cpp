#include "mod_macros.hpp"
class CfgPatches {
    class ADDON {
        name = QUOTE(COMPONENT);
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"cba_main", "ace_main", "aceax_main"};
        author = "DJZonk";
        VERSION_CONFIG;
    };
};

class XtdGearModels {
    class CfgWeapons {
        // No idea why it dosent work
        // class GVAR(gunbag) {
        //     label = "Gun Bag";
        //     author = "ACE Team | ACEAX Compat By DJZonk";
        //     options[] = {"color"};
        //     class color {
        //         label = "Color";
        //         values[] = {"green", "tan"};
        //         class green {
        //             label = "Green";
        //         };
        //         class tan {
        //             label = "Tan";
        //         };
        //     };
        // };
        class GVAR(nvgs) {
            label = "NVGs";
            author = "ACE Team | ACEAX Compat By DJZonk";
            options[] = {"generation", "color"};
            class generation {
                label = "Generation";
                values[] = {"gen1", "gen2", "gen3", "gen4", "wide"};
                class gen1 {
                    label = "Gen 1";
                };
                class gen2 {
                    label = "Gen 2";
                };
                class gen3 {
                    label = "Gen 3";
                };
                class gen4 {
                    label = "Gen 4";
                };
                class wide {
                    label = "Wide";
                };
            };
            class color {
                label = "Color";
                values[] = {"black", "brown", "green"};
                class black:blk {
                    label = "Black";
                };
                class brown {
                    label = "Brown";
                };
                class green {
                    label = "Green";
                };
            };
        };
        class GVAR(vector) {
            label = "Vector";
            author = "ACE Team | ACEAX Compat By DJZonk";
            options[] = {"type"};
            class type {
                label = "Type";
                values[] = {"day", "nite"};
                class day {
                    label = "Standard";
                    description = "No night vision capabilities.";
                };
                class nite {
                    label = "Nite";
                    description = "Has night vision capabilities.";
                };
            };
        };
        class GVAR(6p57tripod) {
            label = "6P57 Tripod";
            author = "ACE Team | ACEAX Compat By DJZonk";
            options[] = {"height"};
            class height {
                label = "Height";
                values[] = {"low", "high"};
                class low {
                    label = "low";
                };
                class high {
                    label = "High";
                };
            };
        };
        class GVAR(m3tripod): GVAR(6p57tripod) {
            label = "M3 Tripod";
        };
        class GVAR(titanbackpack) {
            label = "Titan";
            author = "ACE Team | ACEAX Compat By DJZonk";
            options[] = {"function"};
            class function {
                label = "Function";
                values[] = {"at", "aa"};
                class at {
                    label = "AT";
                };
                class aa {
                    label = "AA";
                };
            };
        };
    };
};

class XtdGearInfos {
    class CfgWeapons {
        class ace_csw_kordCarryTripod {
            model = QGVAR(6p57tripod);
            Height = "high";
        };
        class ace_csw_kordCarryTripodLow {
            model = QGVAR(6p57tripod);
            Height = "low";
        };
        class ace_csw_m3CarryTripod {
            model = QGVAR(m3tripod);
            Height = "high";
        };
        class ace_csw_m3CarryTripodLow {
            model = QGVAR(m3tripod);
            Height = "low";
        };
        class ace_csw_staticAACarry {
            model = QGVAR(titanbackpack);
            function = "aa";
        };
        class ace_csw_staticATCarry {
            model = QGVAR(titanbackpack);
            function = "at";
        };

        class ACE_VectorDay {
            model = QGVAR(vector);
            type = "day";
        };
        class ACE_Vector {
            model = QGVAR(vector);
            type = "nite";
        };

        // Dosent work no idea why
        // class ACE_gunbag {
        //     model = QGVAR(gunbag);
        //     color = "green";
        // };
        // class ACE_gunbag_Tan {
        //     model = QGVAR(gunbag);
        //     color = "tan";
        // };

        #define XTDNVGS(CLASS,GEN,COLOR) \
        class CLASS { \
            model = QGVAR(nvgs); \
            generation = QUOTE(GEN); \
            color = QUOTE(COLOR); \
        }; \

        XTDNVGS(ACE_NVG_Gen1,       gen1, black)
        XTDNVGS(ACE_NVG_Gen1_Brown, gen1, brown)
        XTDNVGS(ACE_NVG_Gen1_Green, gen1, green)
        XTDNVGS(ACE_NVG_Gen2_Black, gen2, black)
        XTDNVGS(ACE_NVG_Gen2_Brown, gen2, brown)
        XTDNVGS(ACE_NVG_Gen2,       gen2, green)
        XTDNVGS(NVGoggles_OPFOR,    gen3, black)
        XTDNVGS(NVGoggles,          gen3, brown)
        XTDNVGS(NVGoggles_INDEP,    gen3, green)
        XTDNVGS(ACE_NVG_Gen4_Black, gen4, black)
        XTDNVGS(ACE_NVG_Gen4,       gen4, brown)
        XTDNVGS(ACE_NVG_Gen4_Green, gen4, green)
        XTDNVGS(ACE_NVG_Wide_Black, wide, black)
        XTDNVGS(ACE_NVG_Wide,       wide, brown)
        XTDNVGS(ACE_NVG_Wide_Green, wide, green)
    };
};
