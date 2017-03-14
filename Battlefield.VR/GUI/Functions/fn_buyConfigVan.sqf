if(!isServer) exitWith {};

ccl_sign = "Sign_F";
publicVariable "ccl_sign";

//Tanks
tankMaxBlufor = 3;
tankActBlufor = 0;

tankBlufor = [
	["B_MBT_01_arty_F", 200],
	["B_MBT_01_TUSK_F", 150],
	["B_APC_Tracked_01_AA_F", 100]
];

ccl_tankBlufor = ["tankActBlufor","tankMaxBlufor", "tankBlufor", west];

publicVariable "tankMaxBlufor";
publicVariable "tankActBlufor";
publicVariable "tankBlufor";
publicVariable "ccl_tankBlufor";


//Cars
carsMaxBlufor = 10;
carsActBlufor = 0;

carsBlufor = [
	["B_APC_Wheeled_01_cannon_F", 50],
	["B_MRAP_01_hmg_F", 20],
	["B_MRAP_01_gmg_F", 25],
	["B_MRAP_01_F", 10],
	["B_LSV_01_armed_F", 15],
	["B_LSV_01_unarmed_F", 10],
	["B_Quadbike_01_F", 1]
];

ccl_carsBlufor = ["carsActBlufor","carsMaxBlufor", "carsBlufor", west];

publicVariable "carsMaxBlufor";
publicVariable "carsActBlufor";
publicVariable "carsBlufor";
publicVariable "ccl_carsBlufor";

//Air
airMaxBlufor = 2;
airActBlufor = 0;

airBlufor = [
	["B_Heli_Transport_03_unarmed_F", 75],
	["B_Heli_Light_01_F", 50]
];

ccl_airBlufor = ["airActBlufor","airMaxBlufor", "airBlufor", west];

publicVariable "airMaxBlufor";
publicVariable "airActBlufor";
publicVariable "airBlufor";
publicVariable "ccl_airBlufor";

//Support
supportMaxBlufor = 10;
supportActBlufor = 0;

supportBlufor = [
	["B_Mortar_01_F", 100],
	["B_static_AT_F", 20],
	["B_static_AA_F", 20],
	["B_HMG_01_high_F", 10],
	["B_HMG_01_F", 10],
	["B_GMG_01_high_F", 15],
	["B_GMG_01_F", 15]
	
];

ccl_supportBlufor = ["supportActBlufor","supportMaxBlufor", "supportBlufor", west];

publicVariable "supportMaxBlufor";
publicVariable "supportActBlufor";
publicVariable "supportBlufor";
publicVariable "ccl_supportBlufor";



//Tanks
tankMaxOpfor = 3;
tankActOpfor = 0;

tankOpfor = [
	["O_MBT_02_arty_F", 200],
	["O_MBT_02_cannon_F", 150],
	["O_APC_Tracked_02_AA_F", 100]
];

ccl_tankOpfor = ["tankActOpfor","tankMaxOpfor", "tankOpfor", east];

publicVariable "tankMaxOpfor";
publicVariable "tankActOpfor";
publicVariable "tankOpfor";
publicVariable "ccl_tankOpfor";

//Cars
carsMaxOpfor = 10;
carsActOpfor = 0;

carsOpfor = [
	["O_APC_Wheeled_02_rcws_F", 50],
	["O_MRAP_02_hmg_F", 20],
	["O_MRAP_02_gmg_F", 25],
	["O_MRAP_02_F", 10],
	["O_LSV_02_armed_F", 15],
	["O_LSV_02_unarmed_F", 10],
	["O_Quadbike_01_F", 1]
];

ccl_carsOpfor = ["carsActOpfor","carsMaxOpfor", "carsOpfor", east];

publicVariable "carsMaxOpfor";
publicVariable "carsActOpfor";
publicVariable "carsOpfor";
publicVariable "ccl_carsOpfor";


//Air
airMaxOpfor = 2;
airActOpfor = 0;

airOpfor = [
	["O_Heli_Transport_04_covered_F", 75],
	["O_Heli_Light_02_unarmed_F", 50]
];

ccl_airOpfor = ["airActOpfor","airMaxOpfor", "airOpfor", east];

publicVariable "airMaxOpfor";
publicVariable "airActOpfor";
publicVariable "airOpfor";
publicVariable "ccl_airOpfor";

//Support
supportMaxOpfor = 10;
supportActOpfor = 0;

supportOpfor = [
	["O_Mortar_01_F", 100],
	["O_static_AT_F", 20],
	["O_static_AA_F", 20],
	["O_HMG_01_high_F", 10],
	["O_HMG_01_F", 10],
	["O_GMG_01_high_F", 15],
	["O_GMG_01_F", 15]
];

ccl_supportOpfor = ["supportActOpfor","supportMaxOpfor", "supportOpfor", east];


publicVariable "supportMaxOpfor";
publicVariable "supportActOpfor";
publicVariable "supportOpfor";
publicVariable "ccl_supportOpfor";