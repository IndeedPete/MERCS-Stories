params [
	["_dude", objNull, [objNull]],
	["_anims", [], [[]]],
	["_timeout", 60, [0]],
	["_cond", {true}, [{}]]
];

while {(alive _dude) && {call _cond}} do {
	_anim = selectRandom _anims;
	_dude switchMove _anim;
	_t = time + _timeout;
	waitUntil {
		(animationState _dude != _anim) OR
		{time > _t}
	};
};