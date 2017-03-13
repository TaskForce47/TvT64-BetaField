/*
*	@description
*		Handles the "buying" of a vehicle
* 	@params:
* 		none
*
*	@returns:
*		nothing
* 	@example: 
* 		[] spawn tf47_ccl_buy_fnc_buyVehicle;
*
* 	@Tested with :
* 		Arma 3 1.62.137494
*
*	@category   CCL (Willard und Johns TvT Sector Control Mission)
* 	@package    TF47_CCL
* 	@author     [TF47] Willard
* 	@website	http://armasim.de/
* 	@version    0.1
*/
// Disable Serialization
disableSerialization;

// Get dialog and listbox
_dialog = uiNamespace getVariable ['tf47_ccl_buy_dialog_var',nil];
_listBox = _dialog displayCtrl 1500;

// id of selected row
_id = lnbCurSelRow _listBox;

// className saved in the 0th column
_classname = _listBox lnbData [_id, 0];

// tickets saved in the 1st column
_tickets = call compileFinal (_listBox lnbData [_id, 1]);

// actual vehicles, max vehicles, markername and side saved in 0,2 seperated with '#'
_varArray = _listBox lnbData [0, 2];
_varArray = (_varArray splitString "#");
// hint str _varArray;
_act = call compileFinal (_varArray select 0);
_max = call compileFinal (_varArray select 1);
_marker = (_varArray select 2);
_side = call compileFinal (_varArray select 3);

// exit if too many vehicles are on the field
if (_act >= _max) exitWith { hint "Too many vehicles spawned!"; };

// increase actual number of vehicles
_actString = (_varArray select 0);
call compileFinal format["%1 = %1 + 1; publicVariable '%1';",_actString];

// create vehicle
_veh = _classname createVehicle (getMarkerPos _marker);
_veh lock 0;
// adjust tickets
[_side, -_tickets] call BIS_fnc_respawnTickets;

// refresh ui
_nul = [[_dialog]] spawn tf47_ccl_buy_fnc_onLoadBuy;

// add eventhandler which decreases the actual vehicle count
_veh setVariable ["tf47_ccl_buy_actString", _actString];
_veh addEventHandler ["Killed", {_veh = (_this select 0); _actString = _veh getVariable ["tf47_ccl_buy_actString",""]; call compileFinal format["%1 = %1 - 1; publicVariable '%1';",_actString]; } ];