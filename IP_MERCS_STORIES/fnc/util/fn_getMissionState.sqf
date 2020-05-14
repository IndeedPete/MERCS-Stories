private "_state";
_state = missionNameSpace getVariable ["IP_MissionState", ""];
if (_state == "") then {
	"IP_MissionState is empty!" call BIS_fnc_error;
};

_state