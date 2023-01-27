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
        #include "xtdgearmodels\acr.hpp"
        #include "xtdgearmodels\m14.hpp"
        #include "xtdgearmodels\mg3.hpp"
        #include "xtdgearmodels\minimi.hpp"
        #include "xtdgearmodels\mp5.hpp"
        #include "xtdgearmodels\p226.hpp"
        #include "xtdgearmodels\scar.hpp"
        #include "xtdgearmodels\sg510.hpp"
        #include "xtdgearmodels\g36.hpp"
        #include "xtdgearmodels\g3.hpp"
        #include "xtdgearmodels\fal.hpp"
        #include "xtdgearmodels\awm.hpp"
    };
};

class XtdGearInfos {
    class CfgWeapons {
        #include "xtdgearinfos\acr.hpp"
        #include "xtdgearinfos\m14.hpp"
        #include "xtdgearinfos\mg3.hpp"
        #include "xtdgearinfos\minimi.hpp"
        #include "xtdgearinfos\mp5.hpp"
        #include "xtdgearinfos\p226.hpp"
        #include "xtdgearinfos\scar.hpp"
        #include "xtdgearinfos\sg510.hpp"
        #include "xtdgearinfos\g36.hpp"
        #include "xtdgearinfos\g3.hpp"
        #include "xtdgearinfos\fal.hpp"
        #include "xtdgearinfos\awm.hpp"
    };
};
