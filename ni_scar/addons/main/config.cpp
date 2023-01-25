#include "mod_macros.hpp"
class CfgPatches {
    class ADDON {
        name = QUOTE(COMPONENT);
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"cba_main", "aceax_main", "hlcweapons_core", "hlcweapons_SCAR"};
        author = "DJZonk";
        VERSION_CONFIG;
    };
};
#include "XtdGearModels.hpp"
#include "XtdGearInfos.hpp"
