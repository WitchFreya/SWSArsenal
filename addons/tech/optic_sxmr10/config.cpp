#include "script_component.hpp"

class ItemInfo;
class OpticsModes;
class AMS;

#include "CfgWeapons.inc"

class CfgPatches
{
  class SUBADDON
  {
    name = COMPONENT_NAME;
    units[] = { };
    weapons[] = { CLASSES_WEAPONS };
    magazines[] = { };
    ammo[] = { };
    requiredVersion = REQUIRED_VERSION;
    requiredAddons[] = {
      "A3_Weapons_F_Mark_Acc"
    };
    VERSION_CONFIG;
    addonRootClass = QUOTE(ADDON);
  };
};
