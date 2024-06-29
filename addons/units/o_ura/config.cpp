#include "script_component.hpp"

#include "CfgFactionClasses.hpp"
#include "CfgGroups.hpp"

class CargoTurret_01;
class CargoTurret_02;
class CargoTurret_03;
class CodRiverTurret;
class CopilotTurret;
class MainTurret;
class LMG_Turret;
class LoadmasterTurret;
class TopTurret;
class Turrets;
class EventHandlers;

#include "CfgVehicles.hpp"

class CfgPatches {
  class SUBADDON {
    addonRootClass = QUOTE(ADDON);
    author = QUOTE(AUTHOR);
    authors[] = {AUTHORS};
    skipWhenMissingDependencies = TRUE;
    units[] = {CLASSES_VEHICLES};
    weapons[] = {};
    requiredVersion = 1.62;
    requiredAddons[] = {
      "EMP_Greystone_PMC" // TODO: Remove reliance on Fire Support+.
      , "ace_nouniformrestrictions"
      , "OPTRE_Core"
      , "OPTRE_Vehicles"
    };
    VERSION_CONFIG;
  };
};
