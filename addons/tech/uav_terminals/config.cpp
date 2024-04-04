#include "script_component.hpp"

class ItemInfo;

#include "CfgWeapons.inc"

class CfgPatches {
  class SUBADDON {
    addonRootClass = QUOTE(ADDON);
    name = COMPONENT_NAME;
    units[] = { };
    weapons[] = { CLASSES_WEAPONS };
    ammo[] = { };
    magazines[] = { };
    requiredVersion = REQUIRED_VERSION;
    requiredAddons[] = {
      "A3_Weapons_F_Orange_Items"
      , "sws_main"
      , "sws_common"
    };
    VERSION_CONFIG;
  };
};
