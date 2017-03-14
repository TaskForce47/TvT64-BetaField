class opfor_van_1
{
    displayName = "Rifleman"; // Name visible in the menu
    icon = "\A3\ui_f\data\igui\cfg\weaponicons\GL_ca.paa"; // Icon displayed next to the name
    // Condition must return true in order for the loadout to be displayed in the menu.
    // Evaluated when the menu is opened.
    show = "side group _this == east";
    role = "Light"
    // Loadout definition, uses same entries as CfgVehicles classes
    uniformClass = "U_O_CombatUniform_ocamo";
    backpack = "";
    weapons[] = {"arifle_Katiba_ACO_pointer_F","hgun_Rook40_F","Binocular","Throw","Put"};
    magazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","Chemlight_red","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","Chemlight_red"};
    items[] = {"FirstAidKit"};
    linkedItems[] = {"V_HarnessO_brn","H_HelmetO_ocamo","","ItemMap","ItemCompass","tf_microdagr","tf_pnr1000a","NVGoggles_OPFOR"};
};

class opfor_van_2
{
    displayName = "Automatic Rifleman"; // Name visible in the menu
    icon = "\A3\ui_f\data\igui\cfg\weaponicons\GL_ca.paa"; // Icon displayed next to the name
    // Condition must return true in order for the loadout to be displayed in the menu.
    // Evaluated when the menu is opened.
    show = "side group _this == east";
    role = "Light"
    // Loadout definition, uses same entries as CfgVehicles classes
    uniformClass = "U_O_CombatUniform_ocamo";
    backpack = "";
    weapons[] = {"hgun_Rook40_F","LMG_Mk200_F","Binocular","Throw","Put"};
    magazines[] = {"HandGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red","200Rnd_65x39_cased_Box","200Rnd_65x39_cased_Box","16Rnd_9x21_Mag","16Rnd_9x21_Mag"};
    items[] = {"FirstAidKit"};
    linkedItems[] = {"V_HarnessO_brn","H_HelmetO_ocamo","","ItemMap","ItemCompass","tf_microdagr","tf_pnr1000a","NVGoggles_OPFOR"};
};

class opfor_van_3
{
    displayName = "Grenadier"; // Name visible in the menu
    icon = "\A3\ui_f\data\igui\cfg\weaponicons\GL_ca.paa"; // Icon displayed next to the name
    // Condition must return true in order for the loadout to be displayed in the menu.
    // Evaluated when the menu is opened.
    show = "side group _this == east";
    role = "Light"
    // Loadout definition, uses same entries as CfgVehicles classes
    uniformClass = "U_O_CombatUniform_ocamo";
    backpack = "";
    weapons[] = {"arifle_Katiba_GL_ACO_F","hgun_Rook40_F","Binocular","Throw","Put"};
    magazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","Chemlight_red","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","MiniGrenade","MiniGrenade","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","SmokeShell","SmokeShellRed","Chemlight_red","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell","1Rnd_SmokeYellow_Grenade_shell"};
    items[] = {"FirstAidKit"};
    linkedItems[] = {"V_HarnessOGL_brn","H_HelmetLeaderO_ocamo","","ItemMap","ItemCompass","tf_microdagr","tf_pnr1000a","NVGoggles_OPFOR"};
};

class opfor_van_4
{
    displayName = "Medium Machine Gunner"; // Name visible in the menu
    icon = "\A3\ui_f\data\igui\cfg\weaponicons\GL_ca.paa"; // Icon displayed next to the name
    // Condition must return true in order for the loadout to be displayed in the menu.
    // Evaluated when the menu is opened.
    show = "side group _this == east";
    role = "Heavy"
    // Loadout definition, uses same entries as CfgVehicles classes
    uniformClass = "U_O_CombatUniform_ocamo";
    backpack = "";
    weapons[] = {"MMG_01_hex_ARCO_LP_F","hgun_Rook40_F","Binocular","Throw","Put"};
    magazines[] = {"16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red","150Rnd_93x64_Mag","150Rnd_93x64_Mag"};
    items[] = {"FirstAidKit"};
    linkedItems[] = {"V_HarnessO_brn","H_HelmetO_ocamo","","ItemMap","ItemCompass","tf_microdagr","tf_pnr1000a","NVGoggles_OPFOR"};
};

class opfor_van_5
{
    displayName = "Anti-Tank"; // Name visible in the menu
    icon = "\A3\ui_f\data\igui\cfg\weaponicons\GL_ca.paa"; // Icon displayed next to the name
    // Condition must return true in order for the loadout to be displayed in the menu.
    // Evaluated when the menu is opened.
    show = "side group _this == east";
    role = "Heavy"
    // Loadout definition, uses same entries as CfgVehicles classes
    uniformClass = "U_O_CombatUniform_ocamo";
    backpack = "B_FieldPack_cbr_AT";
    weapons[] = {"arifle_Katiba_C_ACO_pointer_F","launch_O_Titan_short_F","hgun_Rook40_F","Binocular","Throw","Put"};
    magazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","Chemlight_red","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Titan_AT","Titan_AT"};
    items[] = {"FirstAidKit"};
    linkedItems[] = {"V_TacVest_khk","H_HelmetO_ocamo","","ItemMap","ItemCompass","tf_microdagr","tf_pnr1000a","NVGoggles_OPFOR"};
};

class opfor_van_6
{
    displayName = "Marksman"; // Name visible in the menu
    icon = "\A3\ui_f\data\igui\cfg\weaponicons\GL_ca.paa"; // Icon displayed next to the name
    // Condition must return true in order for the loadout to be displayed in the menu.
    // Evaluated when the menu is opened.
    show = "side group _this == east";
    role = "Heavy"
    // Loadout definition, uses same entries as CfgVehicles classes
    uniformClass = "U_O_CombatUniform_ocamo";
    backpack = "";
    weapons[] = {"srifle_DMR_01_DMS_BI_F","hgun_Rook40_F","Rangefinder","Throw","Put"};
    magazines[] = {"10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
    items[] = {"FirstAidKit"};
    linkedItems[] = {"V_TacVest_khk","H_HelmetO_ocamo","","ItemMap","ItemCompass","tf_microdagr","tf_pnr1000a","NVGoggles_OPFOR"};
};

class opfor_van_7
{
    displayName = "Medic"; // Name visible in the menu
    icon = "\A3\ui_f\data\igui\cfg\weaponicons\GL_ca.paa"; // Icon displayed next to the name
    // Condition must return true in order for the loadout to be displayed in the menu.
    // Evaluated when the menu is opened.
    show = "side group _this == east";
    role = "Support"
    // Loadout definition, uses same entries as CfgVehicles classes
    uniformClass = "U_O_CombatUniform_ocamo";
    backpack = "B_FieldPack_ocamo_Medic";
    weapons[] = {"arifle_Katiba_pointer_F","hgun_Rook40_F","Binocular","Throw","Put"};
    magazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","Chemlight_red","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red"};
    items[] = {"FirstAidKit","Medikit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit"};
    linkedItems[] = {"V_TacVest_khk","H_HelmetO_ocamo","","ItemMap","ItemCompass","tf_microdagr","tf_pnr1000a","NVGoggles_OPFOR"};
};

class opfor_van_8
{
    displayName = "Engineer"; // Name visible in the menu
    icon = "\A3\ui_f\data\igui\cfg\weaponicons\GL_ca.paa"; // Icon displayed next to the name
    // Condition must return true in order for the loadout to be displayed in the menu.
    // Evaluated when the menu is opened.
    show = "side group _this == east";
    role = "Support"
    // Loadout definition, uses same entries as CfgVehicles classes
    uniformClass = "U_O_CombatUniform_ocamo";
    backpack = "B_FieldPack_cbr_Repair";
    weapons[] = {"arifle_Katiba_C_ACO_pointer_F","hgun_Rook40_F","Binocular","Throw","Put"};
    magazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","Chemlight_red","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","SLAMDirectionalMine_Wire_Mag","SLAMDirectionalMine_Wire_Mag","APERSBoundingMine_Range_Mag"};
    items[] = {"FirstAidKit","ToolKit","MineDetector"};
    linkedItems[] = {"V_HarnessO_brn","H_HelmetO_ocamo","","ItemMap","ItemCompass","tf_microdagr","tf_pnr1000a","NVGoggles_OPFOR"};
};

class opfor_van_9
{
    displayName = "Assistant"; // Name visible in the menu
    icon = "\A3\ui_f\data\igui\cfg\weaponicons\GL_ca.paa"; // Icon displayed next to the name
    // Condition must return true in order for the loadout to be displayed in the menu.
    // Evaluated when the menu is opened.
    show = "side group _this == east";
    role = "Support"
    // Loadout definition, uses same entries as CfgVehicles classes
    uniformClass = "U_O_CombatUniform_ocamo";
    backpack = "O_UAV_01_backpack_F";
    weapons[] = {"arifle_Katiba_ACO_pointer_F","hgun_Rook40_F","Binocular","Throw","Put"};
    magazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","Chemlight_red","HandGrenade","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","Chemlight_red","SmokeShell"};
    items[] = {"FirstAidKit"};
    linkedItems[] = {"V_TacVest_brn","H_HelmetO_ocamo","","ItemMap","ItemCompass","tf_microdagr","tf_pnr1000a","O_UavTerminal","NVGoggles_OPFOR"};
};

class opfor_van_10
{
    displayName = "Teamleader"; // Name visible in the menu
    icon = "\A3\ui_f\data\igui\cfg\weaponicons\GL_ca.paa"; // Icon displayed next to the name
    // Condition must return true in order for the loadout to be displayed in the menu.
    // Evaluated when the menu is opened.
    show = "side group _this == east";
    role = "Command"
    // Loadout definition, uses same entries as CfgVehicles classes
    uniformClass = "U_O_OfficerUniform_ocamo";
    backpack = "tf_mr3000";
    weapons[] = {"arifle_Katiba_C_ACO_F","hgun_Pistol_heavy_02_Yorris_F","Rangefinder","Throw","Put"};
    magazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","Chemlight_red","30Rnd_65x39_caseless_green","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","SmokeShell","SmokeShellRed","Chemlight_red"};
    items[] = {"FirstAidKit"};
    linkedItems[] = {"V_BandollierB_khk","H_Beret_ocamo","","ItemMap","ItemCompass","ItemWatch","tf_fadak","ItemGPS"};
};

class opfor_van_11
{
    displayName = "Squadleader"; // Name visible in the menu
    icon = "\A3\ui_f\data\igui\cfg\weaponicons\GL_ca.paa"; // Icon displayed next to the name
    // Condition must return true in order for the loadout to be displayed in the menu.
    // Evaluated when the menu is opened.
    show = "side group _this == east";
    role = "Command"
    // Loadout definition, uses same entries as CfgVehicles classes
    uniformClass = "U_O_CombatUniform_ocamo";
    backpack = "tf_mr3000";
    weapons[] = {"arifle_Katiba_ARCO_pointer_F","hgun_Rook40_F","Rangefinder","Throw","Put"};
    magazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","Chemlight_red","Chemlight_red","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green_mag_Tracer","30Rnd_65x39_caseless_green_mag_Tracer","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow"};
    items[] = {"FirstAidKit"};
    linkedItems[] = {"V_TacVest_khk","H_HelmetLeaderO_ocamo","","ItemMap","ItemCompass","ItemWatch","tf_fadak","ItemGPS","NVGoggles_OPFOR"};
};

class opfor_van_12
{
    displayName = "Godfather"; // Name visible in the menu
    icon = "\A3\ui_f\data\igui\cfg\weaponicons\GL_ca.paa"; // Icon displayed next to the name
    // Condition must return true in order for the loadout to be displayed in the menu.
    // Evaluated when the menu is opened.
    show = "side group _this == east";
    role = "Command"
    // Loadout definition, uses same entries as CfgVehicles classes
    uniformClass = "U_O_CombatUniform_ocamo";
    backpack = "";
    weapons[] = {"arifle_Katiba_GL_ARCO_pointer_F","hgun_Rook40_F","Binocular","Throw","Put"};
    magazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","Chemlight_red","1Rnd_SmokeYellow_Grenade_shell","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green_mag_Tracer","30Rnd_65x39_caseless_green_mag_Tracer","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell"};
    items[] = {"FirstAidKit"};
    linkedItems[] = {"V_HarnessOGL_brn","H_HelmetLeaderO_ocamo","","ItemMap","ItemCompass","ItemWatch","tf_fadak","ItemGPS","NVGoggles_OPFOR"};
};