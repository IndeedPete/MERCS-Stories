params [
	["_unit", objNull, [objNull]],
	["_targets", [], [[]]],
	["_condition", {true}, [{}]]
];

while {(alive _unit) && (call _condition)} do {
	_targetSet = selectRandom _targets;
	_target = _targetSet param [0, objNull, [objNull]];
	_stance = _targetSet param [1, "UP", [""]];
	_duration = _targetSet param [2, 30, [0]];
	_roundsPerBurst = _targetSet param [3, 5, [0]];
	_delayBetweenBursts = _targetSet param [4, 3, [0]];
	_delayBetweenShots = _targetSet param [5, 0.2, [0]];
	
	_roundsPerBurst = 1 + floor(random _roundsPerBurst);
	_duration = 1 + floor(random _duration);	
	_unit doWatch ObjNull;
	
	sleep 2.5;
	
	_unit setUnitPos _stance;
	_unit doWatch _target;
	_unit doTarget _target;
	
	sleep 5;
	
	_unit setVariable ["IP_Shooting", true];
	_hande = [_unit, _target, _roundsPerBurst, _delayBetweenBursts, _delayBetweenShots, {_this getVariable "IP_Shooting"}] spawn IP_fnc_suppressiveFire;
	sleep _duration;
	_unit setVariable ["IP_Shooting", false];
	waitUntil {scriptDone _hande};	
};