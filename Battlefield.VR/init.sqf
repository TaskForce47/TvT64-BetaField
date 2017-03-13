[west, ["WEST1",32,32]] call BIS_fnc_addRespawnInventory;
[west, ["WEST2",6,32]] call BIS_fnc_addRespawnInventory;
[west, ["WEST3",6,32]] call BIS_fnc_addRespawnInventory;
[west, ["WEST4",3,3]] call BIS_fnc_addRespawnInventory;
[west, ["WEST5",3,3]] call BIS_fnc_addRespawnInventory;
[west, ["WEST6",3,3]] call BIS_fnc_addRespawnInventory;
[west, ["WEST7",8,16]] call BIS_fnc_addRespawnInventory;
[west, ["WEST8",4,16]] call BIS_fnc_addRespawnInventory;
[west, ["WEST9",4,16]] call BIS_fnc_addRespawnInventory;
[west, ["WEST10",9,13]] call BIS_fnc_addRespawnInventory;
[west, ["WEST11",3,13]] call BIS_fnc_addRespawnInventory;
[west, ["WEST12",1,13]] call BIS_fnc_addRespawnInventory;

[east, ["EAST1",32,32]] call BIS_fnc_addRespawnInventory;
[east, ["EAST2",8,32]] call BIS_fnc_addRespawnInventory;
[east, ["EAST3",8,32]] call BIS_fnc_addRespawnInventory;
[east, ["EAST4",3,6]] call BIS_fnc_addRespawnInventory;
[east, ["EAST5",3,6]] call BIS_fnc_addRespawnInventory;
[east, ["EAST6",3,6]] call BIS_fnc_addRespawnInventory;
[east, ["EAST7",8,16]] call BIS_fnc_addRespawnInventory;
[east, ["EAST8",4,16]] call BIS_fnc_addRespawnInventory;
[east, ["EAST9",4,16]] call BIS_fnc_addRespawnInventory;
[east, ["EAST10",9,13]] call BIS_fnc_addRespawnInventory;
[east, ["EAST11",3,13]] call BIS_fnc_addRespawnInventory;
[east, ["EAST12",1,13]] call BIS_fnc_addRespawnInventory;

[] spawn {
	sleep 5;
	hint "Buying init complete";
	sign1 setVariable ["tf47_ccl_buy_type", ccl_tankBlufor, true];
	_nul = sign1 addAction ["Tank Spawner", "createDialog 'tf47_ccl_buy_dialog';", nil, 6, true, false, "", "true", 1.5];
};

[] spawn {
	sleep 5;
	hint "Buying init complete";
	sign2 setVariable ["tf47_ccl_buy_type", ccl_carsBlufor, true];
	_nul = sign2 addAction ["Car Spawner", "createDialog 'tf47_ccl_buy_dialog';", nil, 6, true, false, "", "true", 1.5];
};

[] spawn {
	sleep 5;
	hint "Buying init complete";
	sign3 setVariable ["tf47_ccl_buy_type", ccl_airBlufor, true];
	_nul = sign3 addAction ["Heli Spawner", "createDialog 'tf47_ccl_buy_dialog';", nil, 6, true, false, "", "true", 1.5];
};

[] spawn {
	sleep 5;
	hint "Buying init complete";
	sign4 setVariable ["tf47_ccl_buy_type", ccl_supportBlufor, true];
	_nul = sign4 addAction ["Support Spawner", "createDialog 'tf47_ccl_buy_dialog';", nil, 6, true, false, "", "true", 1.5];
};

[] spawn {
	sleep 5;
	hint "Buying init complete";
	sign6 setVariable ["tf47_ccl_buy_type", ccl_tankOpfor, true];
	_nul = sign6 addAction ["Tank Spawner", "createDialog 'tf47_ccl_buy_dialog';", nil, 6, true, false, "", "true", 1.5];
};

[] spawn {
	sleep 5;
	hint "Buying init complete";
	sign7 setVariable ["tf47_ccl_buy_type", ccl_carsOpfor, true];
	_nul = sign7 addAction ["Car Spawner", "createDialog 'tf47_ccl_buy_dialog';", nil, 6, true, false, "", "true", 1.5];
};

[] spawn {
	sleep 5;
	hint "Buying init complete";
	sign8 setVariable ["tf47_ccl_buy_type", ccl_airOpfor, true];
	_nul = sign8 addAction ["Heli Spawner", "createDialog 'tf47_ccl_buy_dialog';", nil, 6, true, false, "", "true", 1.5];
};

[] spawn {
	sleep 5;
	hint "Buying init complete";
	sign9 setVariable ["tf47_ccl_buy_type", ccl_supportOpfor, true];
	_nul = sign9 addAction ["Support Spawner", "createDialog 'tf47_ccl_buy_dialog';", nil, 6, true, false, "", "true", 1.5];
};

