params [
	["_map", objNull, [objNull]],
	["_key", "", [""]],
	["_val", "", ["", objNull, 0, true, []]],
	"_vals"
];

_vals = _map getVariable [_key, []];
_vals pushBack _val;
_map setVariable [_key, _vals];