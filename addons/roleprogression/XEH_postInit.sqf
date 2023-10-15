#include "script_component.hpp"

GVAR(defaultRole) = "Rifleman";
GVAR(role) = GVAR(defaultRole);

["CBA_loadoutSet", {
    params ["", "", "_extendedInfo"];
    GVAR(role) = _extendedInfo getOrDefault [QGVARMAIN(role), GVAR(defaultRole)];
}] call CBA_fnc_addEventHandler;

["CBA_loadoutGet", {
    params ["", "", "_extendedInfo"];
    _extendedInfo set [QGVARMAIN(role), GVAR(role)];
}] call CBA_fnc_addEventHandler;

[QGVAR(changeRole), { _this call FUNC(changeRole); }] call CBA_fnc_addEventHandler;

if (!isMultiplayer) exitWith {};

[QGVAR(debrief), { _this call FUNC(onDebrief); }] call CBA_fnc_addEventHandler;
[QGVAR(saveRoleProgress), { _this call FUNC(saveRole); }] call CBA_fnc_addEventHandler;

private _action = ["recordRole", "[SWS] Record Role Progress", "", FUNC(debrief), {true}] call ace_interact_menu_fnc_createAction;
[["ACE_ZeusActions"], _action] call ace_interact_menu_fnc_addActionToZeus;
