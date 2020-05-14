/*
Name: openConversation
Author: IndeedPete
Purpose: Opens a conversation (dialog) from config.
----------
Parameters:
_first - OBJECT: The first conversation participant saying every EVEN sentence. - player
_second - OBJECT: The second conversation participant saying every ODD sentence.  - MyInterestingConversationPartner
_conversation - STRING: The config entry referring to the desired conversation. - "MyFirstConversation"
----------
Requires:
Dialog "IP_DLG_CONVERSATION"
.jpg - "Campaigns\IP_CMP_ICE\img\defaultAvatar.jpg"
*/

private ["_getArguments", "_defaultAvatar", "_configFile", "_config", "_handle", "_picture", "_rank", "_faction", "_str", "_sentences", "_i", "_arguments", "_text", "_key", "_responses", "_exit", "_sound", "_music", "_expression"];
_getArguments = {
	private ["_conversation", "_config", "_arguments"];
	_conversation = _this select 2;
	_config = _this select 3;
	_arguments = (_config >> "arguments");
	if ((isArray _arguments) && {count(getArray _arguments) > 0}) then {
		_arguments = getArray _arguments;
		for "_i" from 0 to ((count _arguments) - 1) do {
			_arguments set [_i, (_this call compile (_arguments select _i))];
		};
	} else {
		_arguments = [];
	};
	
	_arguments
};

params [
	["_first", objNull, [objNull]],
	["_second", objNull, [objNull]],
	["_conversation", "", [""]],
	["_defaultAvatar", "\IP_KSK_MISSIONS\img\defaultAvatar.jpg", [""]]
];
_configFile = missionConfigFile;
_config = missionConfigFile >> "Conversations" >> _conversation;

_handle = createDialog "IP_DLG_CONVERSATION";
_picture = _first getVariable ["IP_Avatar", _defaultAvatar];
ctrlSetText [1200, _picture];
_rank = (_first getVariable ["IP_Rank", (rank _first)]) + "<br/>";
_faction = if ((_first getVariable ["IP_Faction", ""]) != "") then {((getText(_configFile >> "Factions" >> (_first getVariable "IP_Faction") >> "displayNameShort")) + "<br/>")} else {""};
((findDisplay 20001) displayCtrl 1101) ctrlSetStructuredText (parseText(_rank + (name _first) + "<br/>" + _faction + (_first getVariable ["IP_ConvSpecial", ""])));
_picture = _second getVariable ["IP_Avatar", _defaultAvatar];
ctrlSetText [1201, _picture];
_rank = (_second getVariable ["IP_Rank", (rank _second)]) + "<br/>";
_faction = if ((_second getVariable ["IP_Faction", ""]) != "") then {((getText(_configFile >> "Factions" >> (_second getVariable "IP_Faction") >> "displayNameShort")) + "<br/>")} else {""};
((findDisplay 20001) displayCtrl 1102) ctrlSetStructuredText (parseText(_rank + (name _second) + "<br/>" + _faction + (_second getVariable ["IP_ConvSpecial", ""])));

_str = "";
_sentences = getArray(_config >> "sentences");
if (count _sentences == 0) exitWith {
	call IP_fnc_closeConversation; 
	[("Conversation " + str(_conversation) + " has no sentences!")] call BIS_fnc_error;
};

for "_i" from 0 to ((count _sentences) - 1) do {
	if (_i mod 2 == 0) then {
		_str = _str + "<t align='left'>" + (name _first) + ": " + (_sentences select _i) + "</t><br/><br/>";
	} else {
		_str = _str + "<t align='right'>" + (name _second) + ": " + (_sentences select _i) + "</t><br/><br/>";
	};
};

_arguments = [_first, _second, _conversation, _config] call _getArguments;
_str = format ([_str] + _arguments);
if (!(player diarySubjectExists "IP_ConvLog")) then {
	player createDiarySubject ["IP_ConvLog", "Conversation Log"];
};
player createDiaryRecord ["IP_ConvLog", [(name _second), _str]];
_text = parseText _str;
((findDisplay 20001) displayCtrl 1100) ctrlSetStructuredText _text;

_key = if (isText(_config >> "key") && (getText(_config >> "key") != "")) then {(getText(_config >> "key"))} else {_conversation};
[[_first, _second], _key] call IP_fnc_setConvKey;

_responses = (_config >> "responses");
if ((isArray _responses) && {count (getArray _responses) > 0}) then {
	_responses = getArray _responses;
	_i = 0;
	{
		_response = _x;
		_condition = (_configFile >> "Conversations" >> _response >> "condition");
		if (!(isText _condition) OR {((getText _condition) == "") OR {[_first, _second, _response] call compile (getText _condition)}}) then {
			_arguments = [_first, _second, _response, _config] call _getArguments;
			_sentence = str(_i + 1) + ". " + format ([((getArray(_configFile >> "Conversations" >> _response >> "sentences")) select 0)] + _arguments);
			_index = lbAdd [1500, _sentence];
			_hiddenData = "[" + str(_first) + ", " + str(_second) + ", '" + _response + "']";
			lbSetData [1500, _index, _hiddenData];
			_i = _i + 1;
		};
	} forEach _responses;
};

_exit = if (isNumber(_config >> "exit")) then {(getNumber(_config >> "exit"))} else {0};
if (_exit == 1) then {call IP_fnc_closeConversation};

_music = if (isText(_config >> "music")) then {(getText(_config >> "music"))} else {""};
if (_music != "") then {playMusic _music};

_sound = if (isText(_config >> "sound")) then {(getText(_config >> "sound"))} else {""};
if (_sound != "") then {playSound _sound};

_expression = (_config >> "expression");
if (isText _expression) then {
	_expression = getText _expression;
	if (_expression != "") then {
		[_first, _second, _conversation] spawn (compile _expression);
	}; 
};