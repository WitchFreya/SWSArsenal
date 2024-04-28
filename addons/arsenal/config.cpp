#include "script_component.hpp"

#include "CfgEventHandlers.inc"
#include "RscCommon.hpp"
#include "defines.hpp"
#include "Cfg3DEN.inc"

class CfgPatches {
  class ADDON {
    name = QUOTE(COMPONENT);
    author = QUOTE(AUTHOR);
    units[] = { };
    weapons[] = {  };
    requiredVersion = REQUIRED_VERSION;
    requiredAddons[] = {"ace_arsenal", "sws_main","sws_common"};
    skipWhenMissingDependencies = TRUE;
    VERSION_CONFIG;
  };
};
