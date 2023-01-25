#include "mod_macros.hpp"
class CfgPatches {
    class ADDON {
        name = QUOTE(COMPONENT);
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"cba_main", "aceax_main", "hlcweapons_core", "hlcweapons_acr"};
        author = "DJZonk";
        VERSION_CONFIG;
    };
};

#include "XtxGearInfos.hpp"
#include "XtxGearModels.hpp"