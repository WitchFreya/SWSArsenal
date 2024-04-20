#include "script_component.inc.sqf"

/*
 * Author: Maid
 * Drop an orbital resupply on the position.
 *
 * Arguments:
 * 0: Units to resupply <OBJECT[]>
 * 1: Drop height in meters <NUMBER>
 * 2: Destination drop position <PosASL>
 * 3: Vehicle to drop <STRING> OPTIONAL - Defaults to SWS_Ammo_SupplyPod
 *
 * Return Value:
 * None
 *
 * Example:
 * [[player], 100, [0, 0, 0]] call sws_resupply_fnc_dropOrbitalResupply;
 *
 * Public: No
 */

params [
  ["_unitsToResupply", [], [[]]],
  ["_dropHeight", 100, [0]],
  ["_dropPosASL", [0, 0, 0], [[]]],
  ["_carrier", "SWS_Ammo_SupplyPod", [""]]
];

TRACE_1(QGVAR(fnc_dropOrbitalResupply),_this);

private _dropPosATL /* PosATL */ = [_dropPosASL, _dropHeight, _carrier] call {
  params ["_posASL", "_height", "_carrier"];
  private _posATL = ASLToATL _posASL;
  if (_height == 0) exitWith {_posATL};

  private _minimumDistance = 0;
  private _maximumDistance = 50;
  private _safePos /* [x, y, 0] | [] */ = _posATL findEmptyPosition [_minimumDistance, _maximumDistance, _carrier];
  ([_safePos, _posATL] select (count _safePos == 0)) params ["_x", "_y"];
  private _z = (_posATL select 2) + _height;
  [_x, _y, _z];
};


private _box = createVehicle [_carrier, _dropPosATL, [], 0, "CAN_COLLIDE"];
[_box, _unitsToResupply] call FUNC(addRestockAction);
_box setVelocity [0, 0, -20];

/** getPos becomes exceptionally slow in busy areas. this is an effort to compensate for that. */
private _fn_notFalling = {
  private _isFalling = _this call {
    params ["_object"];
    private _zVelocity = velocity _object select 2;
    if (_zVelocity < -2) exitWith {true};
    if (round _zVelocity != 0) exitWith {true};
    private _posZ = getPos _object select 2;
    round _posZ != 0;
  };
  !_isFalling;
};

private _fn_onDone = {
  params ["_box"];
  // make sure it's on the ground
  _box setPos (getPos _box vectorMultiply [1, 1, 0]);
  [QGVAR(resupplyPodHitGround), [_box], _box] call CBA_fnc_targetEvent;
};


[
  _fn_notFalling,
  _fn_onDone,
  [_box],
  // based on an initial velocity of -20m/s and a maximum height of 1000, this should be more than enough timeout
  20,
  _fn_onDone
] call CBA_fnc_waitUntilAndExecute;
