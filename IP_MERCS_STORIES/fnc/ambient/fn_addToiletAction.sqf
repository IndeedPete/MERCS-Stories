params [
	["_toilet", objNull, [objNull]]
];

_toilet addAction ["<img size='2' shadow='2' image='\a3\ui_f\data\igui\cfg\Actions\ico_cpt_thtl_idl_ca.paa'/> Take a Piss", {
	["IP_BlackScreen", true, 1.5, true] call IP_fnc_blackOut;
	sleep 1.5;
	
	player setDamage 0;
	playSound "MERCS_Pee_And_Fart";
	sleep 21.5;
	
	["IP_BlackScreen", true] call IP_fnc_blackIn;
}, [], 1.5, false, true, "", "(_this distance _target < 3)"];