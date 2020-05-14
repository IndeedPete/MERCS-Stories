params [
	["_unit", objNull, [objNull]],
	["_skill", 0, [0]]
];

switch (_skill) do {
	case 0: {
		_unit setSkill ["aimingSpeed", 0.05];
        _unit setSkill ["spotDistance", 0.05];
        _unit setSkill ["aimingAccuracy", 0.02];
        _unit setSkill ["aimingShake", 0.02];
        _unit setSkill ["spotTime", 0.1];
        _unit setSkill ["spotDistance", 0.3];
        _unit setSkill ["commanding", 0.3];
        _unit setSkill ["general", 0.2];
	};
	
	case 1: {
		_unit setSkill ["aimingSpeed", 0.1];
        _unit setSkill ["spotDistance", 0.1];
        _unit setSkill ["aimingAccuracy", 0.05];
        _unit setSkill ["aimingShake", 0.05];
        _unit setSkill ["spotTime", 0.2];
        _unit setSkill ["spotDistance", 0.4];
        _unit setSkill ["commanding", 0.4];
        _unit setSkill ["general", 0.3];
	};

	case 2: {
		_unit setSkill ["aimingSpeed", 0.15];
        _unit setSkill ["spotDistance", 0.15];
        _unit setSkill ["aimingAccuracy", 0.1];
        _unit setSkill ["aimingShake", 0.1];
        _unit setSkill ["spotTime", 0.3];
        _unit setSkill ["spotDistance", 0.5];
        _unit setSkill ["commanding", 0.5];
        _unit setSkill ["general", 0.6];
	};

	case 3: {
        _unit setSkill ["aimingSpeed", 0.2];
        _unit setSkill ["spotDistance", 0.2];
        _unit setSkill ["aimingAccuracy", 0.2];
        _unit setSkill ["aimingShake", 0.2];
        _unit setSkill ["spotTime", 0.4];
        _unit setSkill ["spotDistance", 0.6];
        _unit setSkill ["commanding", 0.6];
        _unit setSkill ["general", 0.7];
	};
     
	case 4: {	 
        _unit setSkill ["aimingSpeed", 0.3];
        _unit setSkill ["spotDistance", 0.3];
        _unit setSkill ["aimingAccuracy", 0.3];
        _unit setSkill ["aimingShake", 0.3];
        _unit setSkill ["spotTime", 0.5];
        _unit setSkill ["spotDistance", 0.8];
        _unit setSkill ["commanding", 0.8];
        _unit setSkill ["general", 0.9];
	};
	
	default {["Skill level %1 not recognised! Must be 0-4!", _skill] call BIS_fnc_error};
};

_unit setVariable ["IP_SkillSet", _skill];