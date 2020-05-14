params [
	["_state", "", [""]],
	["_debug", false, [true]]
];

if (_state == "") exitWith {
	"_sate is empty!" call BIS_fnc_error;
};

missionNamespace setVariable ["IP_MissionState", _state];
_msg = "IP - Mission state changed to: " + _state;
diag_log _msg;
if (_debug) then {
	systemChat _msg;
};