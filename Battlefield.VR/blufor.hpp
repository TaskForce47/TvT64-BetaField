	class WEST1
	{
		displayName = "Rifleman"; // Name visible in the menu
		icon = "\A3\ui_f\data\igui\cfg\weaponicons\GL_ca.paa"; // Icon displayed next to the name
		// Condition must return true in order for the loadout to be displayed in the menu.
		// Evaluated when the menu is opened.
		show = "side group _this == west";
		role = "Light";
		
		// Loadout definition, uses same entries as CfgVehicles classes
		uniformClass = "U_B_CombatUniform_mcam";
backpack = "";
weapons[] = {"arifle_MX_ACO_pointer_F","hgun_P07_F","Binocular","Throw","Put"};
magazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","Chemlight_green","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","HandGrenade","HandGrenade"};
items[] = {"FirstAidKit"};
linkedItems[] = {"V_PlateCarrier1_rgr","H_HelmetB","","ItemMap","ItemCompass","tf_microdagr","tf_rf7800str","NVGoggles"};
	};

	class WEST2
	{
		displayName = "Automatic Rifleman"; // Name visible in the menu
		icon = "\A3\ui_f\data\igui\cfg\weaponicons\MG_ca.paa"; // Icon displayed next to the name
		// Condition must return true in order for the loadout to be displayed in the menu.
		// Evaluated when the menu is opened.
		show = "side group _this == west";
		role = "Light";
		// Loadout definition, uses same entries as CfgVehicles classes
		uniformClass = "U_B_CombatUniform_mcam_tshirt";
backpack = "";
weapons[] = {"hgun_P07_F","LMG_Mk200_F","Binocular","Throw","Put"};
magazines[] = {"HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","200Rnd_65x39_cased_Box","200Rnd_65x39_cased_Box","16Rnd_9x21_Mag","16Rnd_9x21_Mag","Chemlight_green"};
items[] = {"FirstAidKit"};
linkedItems[] = {"V_PlateCarrier2_rgr","H_HelmetB_grass","G_Tactical_Clear","ItemMap","ItemCompass","tf_microdagr","tf_rf7800str","NVGoggles"};
	};

	class WEST3
	{
		displayName = "Grenadier"; // Name visible in the menu
		icon = "\A3\ui_f\data\igui\cfg\weaponicons\AT_ca.paa"; // Icon displayed next to the name
		// Condition must return true in order for the loadout to be displayed in the menu.
		// Evaluated when the menu is opened.
		show = "side group _this == west";
		role = "Light";
		// Loadout definition, uses same entries as CfgVehicles classes
		uniformClass = "U_B_CombatUniform_mcam";
backpack = "";
weapons[] = {"arifle_MX_GL_ACO_F","hgun_P07_F","Binocular","Throw","Put"};
magazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","Chemlight_green","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","HandGrenade","HandGrenade","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell"};
items[] = {"FirstAidKit"};
linkedItems[] = {"V_PlateCarrierGL_rgr","H_HelmetSpecB_blk","G_Combat","ItemMap","ItemCompass","tf_microdagr","tf_rf7800str","NVGoggles"};
	};

	class WEST4
	{
		displayName = "Medium Machine Gunner"; // Name visible in the menu
		icon = "\A3\ui_f\data\igui\cfg\weaponicons\srifle_ca.paa"; // Icon displayed next to the name
		// Condition must return true in order for the loadout to be displayed in the menu.
		// Evaluated when the menu is opened.
		show = "side group _this == west";
		role = "Heavy";
		// Loadout definition, uses same entries as CfgVehicles classes
		uniformClass = "U_B_CombatUniform_mcam";
backpack = "";
weapons[] = {"MMG_02_sand_RCO_LP_F","hgun_P07_F","Binocular","Throw","Put"};
magazines[] = {"16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","130Rnd_338_Mag","130Rnd_338_Mag"};
items[] = {"FirstAidKit"};
linkedItems[] = {"V_PlateCarrier1_rgr","H_HelmetB","G_Aviator","ItemMap","ItemCompass","tf_microdagr","tf_rf7800str","NVGoggles"};
	};

	class WEST5
	{
		displayName = "Anti-Tank"; // Name visible in the menu
		icon = "\A3\ui_f\data\igui\cfg\weaponicons\srifle_ca.paa"; // Icon displayed next to the name
		// Condition must return true in order for the loadout to be displayed in the menu.
		// Evaluated when the menu is opened.
		show = "side group _this == west";
		role = "Heavy";
		// Loadout definition, uses same entries as CfgVehicles classes
		uniformClass = "U_B_CombatUniform_mcam";
backpack = "B_AssaultPack_mcamo_AT";
weapons[] = {"arifle_MXC_Holo_pointer_F","launch_B_Titan_short_F","hgun_P07_F","Binocular","Throw","Put"};
magazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","Chemlight_green","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Titan_AT","Titan_AT","Titan_AP"};
items[] = {"FirstAidKit"};
linkedItems[] = {"V_PlateCarrier1_rgr","H_HelmetB_light_desert","G_Tactical_Clear","ItemMap","ItemCompass","tf_microdagr","tf_rf7800str","NVGoggles"};
	};
	
	class WEST6
	{
		displayName = "Marksman"; // Name visible in the menu
		icon = "\A3\ui_f\data\igui\cfg\weaponicons\srifle_ca.paa"; // Icon displayed next to the name
		// Condition must return true in order for the loadout to be displayed in the menu.
		// Evaluated when the menu is opened.
		show = "side group _this == west";
		role = "Heavy";
		// Loadout definition, uses same entries as CfgVehicles classes
		uniformClass = "U_B_CombatUniform_mcam";
backpack = "";
weapons[] = {"srifle_DMR_03_tan_AMS_LP_F","hgun_P07_F","Rangefinder","Throw","Put"};
magazines[] = {"20Rnd_762x51_Mag","Chemlight_green","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","HandGrenade","HandGrenade"};
items[] = {"FirstAidKit"};
linkedItems[] = {"V_PlateCarrier1_rgr","H_HelmetB","G_Combat","ItemMap","ItemCompass","tf_microdagr","tf_rf7800str","NVGoggles"};
	};
	
	class WEST7
	{
		displayName = "Medic"; // Name visible in the menu
		icon = "\A3\ui_f\data\igui\cfg\weaponicons\srifle_ca.paa"; // Icon displayed next to the name
		// Condition must return true in order for the loadout to be displayed in the menu.
		// Evaluated when the menu is opened.
		show = "side group _this == west";
		role = "Support";
		// Loadout definition, uses same entries as CfgVehicles classes
		uniformClass = "U_B_CombatUniform_mcam_tshirt";
backpack = "B_AssaultPack_rgr_Medic";
weapons[] = {"arifle_MX_pointer_F","hgun_P07_F","Binocular","Throw","Put"};
magazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","Chemlight_green","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green"};
items[] = {"FirstAidKit","Medikit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit"};
linkedItems[] = {"V_PlateCarrierSpec_rgr","H_HelmetB_light_desert","","ItemMap","ItemCompass","tf_microdagr","tf_rf7800str","NVGoggles"};
	};
	
	class WEST8
	{
		displayName = "Engineer"; // Name visible in the menu
		icon = "\A3\ui_f\data\igui\cfg\weaponicons\srifle_ca.paa"; // Icon displayed next to the name
		// Condition must return true in order for the loadout to be displayed in the menu.
		// Evaluated when the menu is opened.
		show = "side group _this == west";
		role = "Support";
		// Loadout definition, uses same entries as CfgVehicles classes
		uniformClass = "U_B_CombatUniform_mcam";
backpack = "B_AssaultPack_rgr_Repair";
weapons[] = {"hgun_P07_F","arifle_MXC_F","Binocular","Throw","Put"};
magazines[] = {"Chemlight_green","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag"};
items[] = {"FirstAidKit","ToolKit","ToolKit"};
linkedItems[] = {"V_PlateCarrier1_rgr","H_HelmetB_light_sand","G_Combat","ItemMap","ItemCompass","tf_microdagr","tf_rf7800str","NVGoggles"};
	};
	
	class WEST9
	{
		displayName = "Assistant"; // Name visible in the menu
		icon = "\A3\ui_f\data\igui\cfg\weaponicons\srifle_ca.paa"; // Icon displayed next to the name
		// Condition must return true in order for the loadout to be displayed in the menu.
		// Evaluated when the menu is opened.
		show = "side group _this == west";
		role = "Support";
		// Loadout definition, uses same entries as CfgVehicles classes
		uniformClass = "U_B_CombatUniform_mcam";
backpack = "B_UAV_01_backpack_F";
weapons[] = {"arifle_MX_ACO_pointer_F","hgun_P07_F","Binocular","Throw","Put"};
magazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","Chemlight_green","HandGrenade","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","Chemlight_green"};
items[] = {"FirstAidKit"};
linkedItems[] = {"V_PlateCarrierSpec_rgr","H_HelmetB","","ItemMap","ItemCompass","tf_microdagr","tf_rf7800str","B_UavTerminal","NVGoggles"};
	};
	
	class WEST10
	{
		displayName = "Teamleader"; // Name visible in the menu
		icon = "\A3\ui_f\data\igui\cfg\weaponicons\srifle_ca.paa"; // Icon displayed next to the name
		// Condition must return true in order for the loadout to be displayed in the menu.
		// Evaluated when the menu is opened.
		show = "side group _this == west";
		role = "Command";
		// Loadout definition, uses same entries as CfgVehicles classes
		uniformClass = "U_B_CombatUniform_mcam";
backpack = "tf_rt1523g_big";
weapons[] = {"arifle_MXC_ACO_F","hgun_Pistol_heavy_01_MRD_F","Rangefinder","Throw","Put"};
magazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","Chemlight_green","30Rnd_65x39_caseless_mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","SmokeShell","SmokeShellGreen","Chemlight_green"};
items[] = {"FirstAidKit"};
linkedItems[] = {"V_BandollierB_rgr","H_MilCap_mcamo","G_Aviator","ItemMap","ItemCompass","ItemWatch","tf_anprc152","ItemGPS"};
	};
	
	class WEST11
	{
		displayName = "Squadleader"; // Name visible in the menu
		icon = "\A3\ui_f\data\igui\cfg\weaponicons\srifle_ca.paa"; // Icon displayed next to the name
		// Condition must return true in order for the loadout to be displayed in the menu.
		// Evaluated when the menu is opened.
		show = "side group _this == west";
		role = "Command";
		// Loadout definition, uses same entries as CfgVehicles classes
		uniformClass = "U_B_CombatUniform_mcam_vest";
backpack = "tf_rt1523g";
weapons[] = {"arifle_MX_Hamr_pointer_F","hgun_P07_F","Rangefinder","Throw","Put"};
magazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","Chemlight_green","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag_Tracer","30Rnd_65x39_caseless_mag_Tracer","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green"};
items[] = {"FirstAidKit"};
linkedItems[] = {"V_PlateCarrierGL_rgr","H_HelmetB_desert","","ItemMap","ItemCompass","ItemWatch","tf_anprc152","ItemGPS","NVGoggles"};
	};
	
	class WEST12
	{
		displayName = "Godfather"; // Name visible in the menu
		icon = "\A3\ui_f\data\igui\cfg\weaponicons\srifle_ca.paa"; // Icon displayed next to the name
		// Condition must return true in order for the loadout to be displayed in the menu.
		// Evaluated when the menu is opened.
		show = "side group _this == west";
		role = "Command";
		// Loadout definition, uses same entries as CfgVehicles classes
		uniformClass = "U_B_CombatUniform_mcam_vest";
backpack = "";
weapons[] = {"arifle_MX_GL_Hamr_pointer_F","hgun_P07_F","Binocular","Throw","Put"};
magazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","Chemlight_green","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag_Tracer","30Rnd_65x39_caseless_mag_Tracer","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell"};
items[] = {"FirstAidKit"};
linkedItems[] = {"V_PlateCarrierGL_rgr","H_HelmetSpecB","G_Aviator","ItemMap","ItemCompass","ItemWatch","tf_anprc152","ItemGPS","NVGoggles"};
	};