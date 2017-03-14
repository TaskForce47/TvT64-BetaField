["Initialize", [true]] call BIS_fnc_dynamicGroups;

_faction = ["tf47_betafield_faction",0] call BIS_fnc_getParamValue;

switch (_faction) do {
    case 0: { _nul = [] call tf47_ccl_buy_fnc_buyConfigVan;};
    case 1: { _nul = [] call tf47_ccl_buy_fnc_buyConfigRHS;};
    default { _nul = [] call tf47_ccl_buy_fnc_buyConfigVan;};
};