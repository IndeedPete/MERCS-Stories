private ["_unit", "_cycle", "_reaction", "_cond", "_callback", "_min", "_diff"];
_unit = [_this, 0, ObjNull, [ObjNull]] call BIS_fnc_param;
if (isNull _unit) exitWith {};
_cycle = [_this, 1, 5, [0]] call BIS_fnc_param;
_reaction = [_this, 2, [30, 60], [[]]] call BIS_fnc_param;
_cond = [_this, 3, {false}, [{}]] call BIS_fnc_param;
_callback = [_this, 4, {hint "Alarm triggered!"}, [{}]] call BIS_fnc_param;

_min = _reaction select 0;
_diff = (_reaction select 1) - _min;

waitUntil {sleep _cycle; !(alive _unit) OR {isNull _unit} OR {_unit call BIS_fnc_enemyDetected} OR {call _cond}};

sleep (_min + (random _diff));
if (!(alive _unit) OR {isNull _unit} OR {call _cond}) exitWith {};

_unit call _callback;