#include "script_component.hpp"
#include "..\defines.hpp"

_this call aceax_arsenal_fnc_onSelChangedLeft;

if (ace_arsenal_currentLeftPanel != IDC_buttonRole) exitWith {};

params ["_control", "_curSel"];

if (_curSel < 0) exitwith {};

private _display = ctrlParent _control;

private _selection = _control lbData _curSel;

GVAR(role) = _selection;

