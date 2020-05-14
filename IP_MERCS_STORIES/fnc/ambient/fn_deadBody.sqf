params [
	["_unit", objNull, [objNull]],
	["_dir", (random 360), [0]],
	["_anims", ["", "KIA_passenger_injured_medevac_truck01", "KIA_passenger_injured_medevac_truck02", "KIA_passenger_injured_medevac_truck03", "AadjPpneMstpSrasWrflDright", "AadjPpneMstpSrasWrflDleft", "AadjPpneMstpSrasWrflDdown", "KIA_gunner_standup01", "KIA_gunner_static_low01", "Static_Dead"], [[]]],
	"_anim"
];

_anim = selectRandom _anims;
_unit setDir _dir;
_unit setCaptive true;
_unit setDamage 1;

if (_anim != "") then {
	[_unit, _anim] spawn {
		waitUntil{time > 0};
		(_this select 0) switchMove (_this select 1);
	};
};