
_faction = ["tf47_betafield_faction",0] call BIS_fnc_getParamValue;


_factionString = switch (_faction) do {
    case 0: {"van"};
    case 1: {"rhs"};
    default {"van"};
};
_weirdArrays = [[32, 32], [6, 32], [6, 32], [3, 3], [3, 3], 
    [3, 3], [8, 16], [4, 16], [4, 16], [9, 13], [3, 13], [1, 13]];

_max = 12;

for "_i" from 1 to _max do {
    [west, ["blufor_" + _factionString + "_" + str (_i)] + (_weirdArrays select 0)] call BIS_fnc_addRespawnInventory;
};

for "_i" from 1 to _max do {
    [east, ["opfor_" + _factionString + "_" + str (_i)] + (_weirdArrays select 0)] call BIS_fnc_addRespawnInventory;
};    

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

