params [
	["_map", objNull, [objNull]],
	["_keys", "", ["", []]]
];

if (typeName _keys == typeName "") then {
	_keys = [_keys];
};

{
	_key = _x;
	_vals = _map getVariable [_key, []];
	{deleteVehicle _x} forEach _vals;
	_map setVariable [_key, []];
} forEach _keys;