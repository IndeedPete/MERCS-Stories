_ring = {
	params ["_camshake", "_length", "_sound", "_time"];
	_time = time + _length;	
	playSound _sound;
	if (_camshake) then {
		enableCamShake true;
		addCamShake [0.25, 1, 10];
	};
	waitUntil {time > _time};
};

params [
	["_force", false, [true]],
	["_unit", objNull, [objNull]],
	["_conversation", "", [""]],
	["_object", player, [objNull]],
	["_camshake", true, [false]],
	["_length", 1.70, [0]],
	["_sound", "KSK_Phone_Vibrate", [""]],
	"_time"
];

if (dialog) then {
	waitUntil {
		diag_log "fn_phoneCall: Cannot phone call because a dialog is opened!";
		sleep 5;
		!dialog
	};
};

for "_i" from 0 to 1 do {
	[_camshake, _length, _sound] call _ring;
};

[_unit, _conversation, _object] call IP_fnc_addConversation;
if (_force) exitWith {
	[_object, _unit, _conversation] call IP_fnc_openConversation;
};

while {!dialog && {!([_unit, _conversation] call IP_fnc_checkConvKey)}} do {
	[_camshake, _length, _sound] call _ring;
};