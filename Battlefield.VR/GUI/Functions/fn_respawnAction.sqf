/*
*	@description
*		Add an action to a vehicle
* 	@params:
* 		0: The vehicle <OBJECT>
*       1: The event handler id of the "Killed" 
*          Event Handler attached to the vehicle <NUMBER>
*       2: side of the vehicle <SIDE>
*       3: tickets for the vehicle <NUMBER>
*
*	@returns:
*		nothing
* 	@example: 
* 		[_vehicle] spawn tf47_ccl_buy_fnc_respawnAction;
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

_veh = _this select 0;

_veh addAction ["Respawn Vehicle", {
    _veh = (_this select 3) select 0;
    _ehId = (_this select 3) select 1;
    _side = (_this select 3) select 2;
    _tickets = (_this select 3) select 3;
    
    if(!(crew _veh isEqualTo [])) exitWith { hint "Vehicle not empty!"};
    _veh lock true; 
    _veh removeEventHandler ["Killed", _ehId];
    _veh setPos [0,0,0];
    _veh setDamage 1;
    
    [_side, _tickets] call BIS_fnc_respawnTickets;
    
    _actString = _veh getVariable ["tf47_ccl_buy_actString",""];
    call compileFinal format["%1 = %1 - 1; publicVariable '%1';",_actString];
    
}, _this];