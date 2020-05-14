private "_getStr";

_getStr = {
	if (_this >= 10) then {
		(str _this)
	} else {
		("0" + str _this)
	};
};

(((date select 2) call _getStr) + "." + ((date select 1) call _getStr) + "." + str(date select 0) + " " + ((date select 3) call _getStr) + ((date select 4) call _getStr))