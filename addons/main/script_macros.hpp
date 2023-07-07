#include "\x\cba\addons\main\script_macros_common.hpp"

#define DFUNC(var1) TRIPLES(ADDON,fnc,var1)

#ifdef DISABLE_COMPILE_CACHE
    #undef PREP
    #define PREP(fncName) DFUNC(fncName) = compile preprocessFileLineNumbers QPATHTOF(functions\DOUBLES(fnc,fncName).sqf)
#else
    #undef PREP
    #define PREP(fncName) [QPATHTOF(functions\DOUBLES(fnc,fncName).sqf), QFUNC(fncName)] call CBA_fnc_compileFunction
#endif

#define MATERIAL(var0) QPATHTOF(data\materials\var0.rvmat)
#define TEXTURE(var0,var1) QPATHTOF(TRIPLES(data\textures\var0,var1,co.paa))

#define SCOPE(varScope)      \
    scope = varScope;        \
    scopeCurator = varScope; \
    scopeArsenal = varScope

#define META                \
    dlc = QUOTE(PREFIX);    \
    author = QUOTE(AUTHOR)

#define ITEM_META(varScope) \
    META;                   \
    SCOPE(varScope)

#define QPREFIX QUOTE(PREFIX)

#define NAME(var0) QUOTE([PREFIX] var0)
#define BAG(var0) TRIPLES(PREFIX,Pack,var0)
#define QBAG(var0) QUOTE(BAG(var0))
#define VEHICLE(var0) TRIPLES(PREFIX,V,var0)
#define QVEHICLE(var0) QUOTE(VEHICLE(var0))
