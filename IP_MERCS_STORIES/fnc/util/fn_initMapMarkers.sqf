params [
	["_toHide", [], [[]]],
	["_testMode", false, [true]]
];

{
	_loc = localize (markerText _x);
	if (_loc != "") then {
		_x setMarkerText _loc;
	};
	
	if (!_testMode && (_x in _toHide)) then {
		_x setMarkerAlpha 0;
	};
} forEach allMapMarkers;