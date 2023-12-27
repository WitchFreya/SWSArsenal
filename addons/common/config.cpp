#include "script_component.hpp"

#include "CfgEventHandlers.inc"
#include "CfgFactionClasses.inc"

class CfgPatches
{
  class ADDON
  {
    name = QUOTE(COMPONENT);
    units[] = { };
    weapons[] = { };
    requiredVersion = REQUIRED_VERSION;
    requiredAddons[] = {};
    author = QUOTE(AUTHOR);
    VERSION_CONFIG;
  };
};
