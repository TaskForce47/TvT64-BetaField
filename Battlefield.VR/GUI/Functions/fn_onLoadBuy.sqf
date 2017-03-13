disableSerialization;
_dialog = (_this select 0) select 0;

_listBox = _dialog displayCtrl 1500;

// cleanup
lnbClear _listBox;


//_holderArr = ccl_tankBlufor;

_sign = nearestObject [position player, ccl_sign];
// hint str _sign;
_type = _sign getVariable ["tf47_ccl_buy_type", ""];

if(typeName _type != "ARRAY" ) exitWith { hint "error"; };

_holderArr = _type;

_actString = (_holderArr select 0);
_maxString =  (_holderArr select 1);
_tankString = (_holderArr select 2);
_sideString = str (_holderArr select 3);

{
	_className = (_x select 0);
	_tickets = (_x select 1);
	_picture = getText (configfile >> "CfgVehicles" >> _className >> "picture");
	_displayName = getText (configfile >> "CfgVehicles" >> _className >> "displayName");
	
	_index = _listBox lnbAddRow [ _displayName, str _tickets, format["%1/%2", (call compileFinal _actString), (call compileFinal _maxString)]];
	_listBox lnbSetPicture [[ _index, 0], _picture];
	_listBox lnbSetPictureColor [ [_index, 0], [1,1,1,1]]; 
	_listBox lnbSetData [[_index, 0], _className];
	_listBox lnbSetData [[_index, 1], str _tickets];

	
} foreach (call compileFinal _tankString);

// hint str _tankString;
// _tankString = [(str compile "tankBlufor"), "{", ""] call tf47_ccl_buy_fnc_stringReplace;
// _tankString = [_tankString, "}", ""] call tf47_ccl_buy_fnc_stringReplace;
// hint str _tankString;
_listBox lnbSetData [[0, 2], format["%1#%2#%3#%4", _actString, _maxString, _tankString, _sideString]];
//"tankActBlufor#tankMaxBlufor#tankBlufor#west"];




