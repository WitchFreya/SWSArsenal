#define COMPONENT vehicles
#define COMPONENT_BEAUTIFIED Vehicles
#include "\x\sws\addons\main\script_mod.hpp"

// #define DEBUG_MODE_FULL
// #define DISABLE_COMPILE_CACHE

#ifdef DEBUG_ENABLED_INGAME
    #define DEBUG_MODE_FULL
#endif
#ifdef DEBUG_SETTINGS_WEAPONS
    #define DEBUG_SETTINGS DEBUG_SETTINGS_INGAME
#endif

#undef AUTHOR
#define AUTHOR Ashes

#define AUTHORS \
    "Ashes",    \
    "Maid"

#include "\x\sws\addons\main\script_macros.hpp"

// scopeArsenal not necessary for vehicles.
#undef SCOPE
#define SCOPE(var0) \
    scope = var0;   \
    scopeCurator = var0
