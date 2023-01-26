#define COMPONENT main
#define MAINPREFIX z
#define PREFIX aceax_niarmsm14_compat

#define MAJOR 1
#define MINOR 0
#define PATCH 0
#define BUILD 0

#define VERSION MAJOR.MINOR
#define VERSION_STR MAJOR.MINOR.PATCHLVL.BUILD
#define VERSION_AR MAJOR,MINOR,PATCH,BUILD

#define REQUIRED_VERSION 1.88

// #define DEBUG_MODE_FULL
// #define DISABLE_COMPILE_CACHE

#ifdef DEBUG_ENABLED_MAIN
    #define DEBUG_MODE_FULL
#endif
    #ifdef DEBUG_SETTINGS_MAIN
    #define DEBUG_SETTINGS DEBUG_SETTINGS_MAIN
#endif

#include "\x\cba\addons\main\script_macros_common.hpp"
