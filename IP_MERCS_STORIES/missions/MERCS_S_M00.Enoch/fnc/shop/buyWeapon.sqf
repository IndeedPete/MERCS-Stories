private ["_i", "_weapons", "_weapon", "_box", /*"_category",*/ "_price"];
_i = _this;
if (_i == -1) exitWith {hint "You have to select a weapon first!"};

_weapons = IP_WeaponFilter call IP_fnc_weaponFilter;
_weapon = _weapons select _i;

_box = player getVariable ["IP_ShopBox", ObjNull];
if (_weapon in (IP_Terminal call BIS_fnc_getVirtualWeaponCargo)) exitWith {
	hint "A licence for this weapon is already in your possession!";
};

//_category = [(missionConfigFile >> "ShopWeapons"), _weapon] call IP_fnc_getConfigCategory;
//_price = getNumber(missionConfigFile >> "ShopWeapons" >> _category >> _weapon >> "price");
_price = ["ShopWeapons", _weapon] call IP_fnc_getPrice;

if (_price call IP_fnc_purchase) then {
	//_box addWeaponCargo [_weapon, 1];
	[_box, [_weapon], false, true] call BIS_fnc_addVirtualWeaponCargo;
	call IP_fnc_closeShop;
	["Weapons", _i] spawn IP_fnc_openShop;
};