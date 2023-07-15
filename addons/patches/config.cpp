#include "script_component.hpp"

#include "CfgAmmo.hpp"
#include "CfgVehicles.hpp"

class CfgPatches
{
    class ADDON
    {
        name = QUOTE(COMPONENT);
        units[] = { CLASSES_VEHICLES };
        weapons[] = { };
        magazines[] = { };
        ammo[] = { };
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = { "1st_MEU_patch_11th_stb_weapons_ammo", "SAG6_Ordinance", "OPAEX_Hornet", "SWS_Main", "SWS_Weapons" };
        author = QUOTE(AUTHOR);
        VERSION_CONFIG;
    };
};
