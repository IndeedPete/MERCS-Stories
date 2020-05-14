params [	
	["_unit", player, [objNull]],
	["_delay", 5, [0]],
	["_shape", "ICON", [""]],
	["_type", "mil_dot", [""]],
	["_colour", "", [""]],
	["_text", false, ["", true]],
	["_del", false, [true]],
	["_cond", {IP_TESTMODE}, [{}]],
	"_isBol"
];
if (_colour == "") then {
	_colour = [(side _unit), true] call BIS_fnc_sideColor;
};
_isBol = (typeName _text == "BOOL");

if (call _cond) then {
	_marker = createMarker[str _unit, getPos _unit];
	_marker setMarkerShape _shape;
	_marker setMarkerType _type;
	_marker setMarkerColor _colour;
	if (!_isBol) then {_marker setMarkerText _text};

	_grp = group _unit;
	while {{alive _x} count (units _grp) > 0} do {
		_leader = leader _grp;
		while {alive _leader} do {
			_marker setMarkerPos getPos _leader;
			sleep _delay;
			if (_isBol) then {_marker setMarkerText format ["%1", ({alive _x} count (units _grp))]};
		};
	};

	if (_del) then {
		deleteMarker _marker;
	} else {
		_marker setMarkerColor "ColorBlack";
		if (_isBol) then {_marker setMarkerText ""};
	};
};