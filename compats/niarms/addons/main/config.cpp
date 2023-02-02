#include "mod_macros.hpp"
class CfgPatches {
    class ADDON {
        name = QUOTE(COMPONENT);
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"cba_main", "aceax_main", "hlcweapons_core"};
        author = "DJZonk";
        VERSION_CONFIG;
    };
};

class XtdGearModels {
    class CfgWeapons {
        class GVAR(base) {
            label = "";
            author = "Toadie | ACEAX Compat By DJZonk";
            options[] = {};
        };
        #include "xtdgearmodels\acr.hpp"
        #include "xtdgearmodels\ak.hpp"
        #include "xtdgearmodels\ar15.hpp"
        #include "xtdgearmodels\aug.hpp"
        #include "xtdgearmodels\awm.hpp"
        #include "xtdgearmodels\c96.hpp"
        #include "xtdgearmodels\fal.hpp"
        #include "xtdgearmodels\fn3011.hpp"
        #include "xtdgearmodels\g3.hpp"
        #include "xtdgearmodels\g36.hpp"
        #include "xtdgearmodels\hk416.hpp"
        #include "xtdgearmodels\m14.hpp"
        #include "xtdgearmodels\mg3.hpp"
        #include "xtdgearmodels\minimi.hpp"
        #include "xtdgearmodels\mp5.hpp"
        #include "xtdgearmodels\p226.hpp"
        #include "xtdgearmodels\scar.hpp"
        #include "xtdgearmodels\sg510.hpp"
        #include "xtdgearmodels\sg550.hpp"
        #include "xtdgearmodels\xm8.hpp"
        #include "xtdgearmodels\misc_weapons.hpp"
    };
};

class XtdGearInfos {
    class CfgWeapons {

        #include "xtdgearinfos\acr.hpp"
        #include "xtdgearinfos\ak.hpp"
        #include "xtdgearinfos\ar15.hpp"
        #include "xtdgearinfos\aug.hpp"
        #include "xtdgearinfos\awm.hpp"
        #include "xtdgearinfos\c96.hpp"
        #include "xtdgearinfos\fal.hpp"
        #include "xtdgearinfos\fn3011.hpp"
        #include "xtdgearinfos\g3.hpp"
        #include "xtdgearinfos\g36.hpp"
        #include "xtdgearinfos\hk416.hpp"
        #include "xtdgearinfos\m14.hpp"
        #include "xtdgearinfos\mg3.hpp"
        #include "xtdgearinfos\minimi.hpp"
        #include "xtdgearinfos\mp5.hpp"
        #include "xtdgearinfos\p226.hpp"
        #include "xtdgearinfos\scar.hpp"
        #include "xtdgearinfos\sg510.hpp"
        #include "xtdgearinfos\sg550.hpp"
        #include "xtdgearinfos\xm8.hpp"
        #include "xtdgearinfos\misc_weapons.hpp"
    };
};
