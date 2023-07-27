#include "script_component.hpp"

#include "CfgAmmo.hpp"
#include "CfgVehicles.hpp"
#include "CfgWorlds.hpp"
#include "CfgEditorCategories.hpp"

class CfgPatches
{
    class ADDON
    {
        name = QUOTE(COMPONENT);
        units[] = { };
        weapons[] = { };
        magazines[] = { };
        ammo[] = { };
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"SAG6_Ordinance", "OPAEX_Hornet",  "TCGM_Girls", "TCGM_Divinities",  "Extended_EventHandlers", "SWS_Main", "SWS_Weapons" };
        author = QUOTE(AUTHOR);
        VERSION_CONFIG;
    };
};
