private ["_i", "_uniforms", "_uniform", "_box", "_categoryIndex", "_price"];
_i = _this;
if (_i == -1) exitWith {hint "You have to select a uniform first!"};

_uniforms = IP_UniformFilter call IP_fnc_uniformFilter;
_uniform = _uniforms select _i;
//_category = [(missionConfigFile >> "ShopUniforms"), _uniform] call IP_fnc_getConfigCategory;

_box = player getVariable ["IP_ShopBox", ObjNull];
if (_weapon in (IP_Terminal call BIS_fnc_getVirtualItemCargo)) exitWith {
	hint "This uniform is already in your possession!";
};

_price = ["ShopUniforms", _uniform] call IP_fnc_getPrice;
if (_price call IP_fnc_purchase) then {
	_inPosession = player getVariable ["IP_ShopUniforms", []];
	_inPosession pushBack _uniform;
	player setVariable ["IP_ShopUniforms", _inPosession];
	[_box, [_uniform], false, true] call BIS_fnc_addVirtualItemCargo;
	//_categoryIndex = IP_UniformCategories find _category;
	
	_categoryIndex = 0;
	{
		_subset = _x;
		if ({_x == _uniform} count _subset > 0) exitWith {
			_categoryIndex = _forEachIndex;
		};
	} forEach IP_AvailableUniforms;
	
	_arr = (IP_AvailableUniforms select _categoryIndex) - [_uniform];
	IP_AvailableUniforms set [_categoryIndex, _arr];
	call IP_fnc_closeShop;
	["Uniforms", _i] spawn IP_fnc_openShop;
};