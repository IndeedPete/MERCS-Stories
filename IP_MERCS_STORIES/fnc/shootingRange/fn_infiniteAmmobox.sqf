params [
	["_box", ObjNull, [ObjNull]]
];

_box setVariable ["IP_BoxContents", [((backpackCargo _box) call IP_fnc_clusterArray), ((itemCargo _box) call IP_fnc_clusterArray), ((magazineCargo _box) call IP_fnc_clusterArray), ((weaponCargo _box) call IP_fnc_clusterArray)]];
_box addEventHandler ["ContainerClosed", {
	_box = _this select 0;
	clearBackpackCargo _box;
	clearItemCargo _box;
	clearMagazineCargo _box;
	clearWeaponCargo _box;
	
	{_box addBackpackCargo _x} forEach ((_box getVariable ["IP_BoxContents", [[], [], [], []]]) select 0);
	{_box addItemCargo _x} forEach ((_box getVariable ["IP_BoxContents", [[], [], [], []]]) select 1);
	{_box addMagazineCargo _x} forEach ((_box getVariable ["IP_BoxContents", [[], [], [], []]]) select 2);
	{_box addWeaponCargo _x} forEach ((_box getVariable ["IP_BoxContents", [[], [], [], []]]) select 3);
}];