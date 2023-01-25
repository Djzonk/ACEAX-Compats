#include "mod_macros.hpp"
class CfgPatches {
    class ADDON {
        name = QUOTE(COMPONENT);
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"cba_main", "aceax_main"};
        author = "DJZonk";
        VERSION_CONFIG;
    };
};

#include "XtxGearInfos.hpp"
#include "XtxGearModels.hpp"
