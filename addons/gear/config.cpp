#include "script_component.hpp"

#include "CfgWeapons.hpp"
#include "CfgGlasses.hpp"
#include "XtdGearModels.hpp"
#include "XtdGearInfos.hpp"

class CfgPatches
{
    class ADDON
    {
        name = QUOTE(COMPONENT);
        units[] = {};
        weapons[] = { CLASSES_WEAPONS };
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "OPTRE_UNSC_Units",
            "LM_OPCAN_UNSC",
            "SWS_Main"};
        author = QUOTE(AUTHOR);
        VERSION_CONFIG;
    };
};
