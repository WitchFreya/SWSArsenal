#define COMPONENT Logic
#include "\x\SWS\addons\main\script_mod.hpp"

// #define DEBUG_MODE_FULL
// #define DISABLE_COMPILE_CACHE

#ifdef DEBUG_ENABLED_INGAME
    #define DEBUG_MODE_FULL
#endif
#ifdef DEBUG_SETTINGS_LOGIC
    #define DEBUG_SETTINGS DEBUG_SETTINGS_INGAME
#endif

#include "\x\SWS\addons\main\script_macros.hpp"

#define MODULE(var0) TRIPLES(PREFIX,Module,var0)
#define QMODULE(var0) QUOTE(MODULE(var0))
