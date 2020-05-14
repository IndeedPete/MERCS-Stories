private "_show";
_show = param [0, false, [true]];

if (_show) then {
	showHUD [true, true, true, true, true, true, true, true];
	IP_ShowHud = true;
} else {
	showHUD [false, false, false, false, false, false, false, false];
	showCinemaBorder false;
	
	// Disable DevBranch Watermark
	[] spawn {
		waitUntil {!(isNull findDisplay 46)};
		{
			(
				(findDisplay 46) displayCtrl _x
			) ctrlShow false;
		} forEach [1000, 1001, 1002, 1200, 1202];
	};
	
	IP_ShowHud = false;
};