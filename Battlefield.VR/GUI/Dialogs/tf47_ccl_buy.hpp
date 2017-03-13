////////////////////////////////////////////////////////
// GUI EDITOR OUTPUT START (by Larry Lappen, v1.063, #Saryni)
////////////////////////////////////////////////////////
class tf47_ccl_buy_dialog
{
	idd = -1;
	movingEnable = 0;
	onLoad = "uiNamespace setVariable ['tf47_ccl_buy_dialog_var',_this select 0]; [_this] call tf47_ccl_buy_fnc_onLoadBuy;";
	onUnLoad = "uiNamespace setVariable ['tf47_ccl_buy_dialog_var',nil]";
	class ControlsBackground
	{
		class tf47_ccl_buy_background: tf47_ccl_base_rsctext
		{
			idc = 1000;
			x = 0.345312 * safezoneW + safezoneX;
			y = 0.335 * safezoneH + safezoneY;
			w = 0.309375 * safezoneW;
			h = 0.352 * safezoneH;
			colorBackground[] = {-1,-1,-1,0.8};
		};
		class tf47_ccl_buy_title: tf47_ccl_base_rsctext
		{
			idc = 1001;
			text = "buy menu"; //--- ToDo: Localize;
			x = 0.345312 * safezoneW + safezoneX;
			y = 0.313 * safezoneH + safezoneY;
			w = 0.309375 * safezoneW;
			h = 0.02 * safezoneH;
			colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.69])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.75])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.5])",1};
		};
		class tf47_ccl_buy_frame: tf47_ccl_base_frame
		{
			idc = 1800;
			x = 0.350469 * safezoneW + safezoneX;
			y = 0.368 * safezoneH + safezoneY;
			w = 0.299062 * safezoneW;
			h = 0.275 * safezoneH;
		};
	};
	class Controls 
	{
		class tf47_ccl_buy_list: tf47_ccl_adv_listbox
		{
			idc = 1500;
			x = 0.350469 * safezoneW + safezoneX;
			y = 0.367 * safezoneH + safezoneY;
			w = 0.299062 * safezoneW;
			h = 0.275 * safezoneH;
		};

		class tf47_ccl_buy_buy: tf47_ccl_base_rscbutton_main
		{
			idc = 1600;
			text = "Buy"; //--- ToDo: Localize;
			x = 0.355625 * safezoneW + safezoneX;
			y = 0.654 * safezoneH + safezoneY;
			w = 0.0464063 * safezoneW;
			h = 0.022 * safezoneH;
			action = "[] spawn tf47_ccl_buy_fnc_buyVehicle;";
		};
		class tf47_ccl_buy_close: tf47_ccl_base_rscbutton_main
		{
			idc = 1601;
			text = "Close"; //--- ToDo: Localize;
			x = 0.597969 * safezoneW + safezoneX;
			y = 0.654 * safezoneH + safezoneY;
			w = 0.0464063 * safezoneW;
			h = 0.022 * safezoneH;
			action = "closeDialog 2;"
		};
		class tf47_ccl_buy_cost: tf47_ccl_base_rsctext
		{
			idc = 1002;
			text = "Cost"; //--- ToDo: Localize;
			x = 0.575 * safezoneW + safezoneX;
			y = 0.34 * safezoneH + safezoneY;
			w = 0.0257812 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class tf47_ccl_buy_amount: tf47_ccl_base_rsctext
		{
			idc = 1003;
			text = "Amount"; //--- ToDo: Localize;
			x = 0.61 * safezoneW + safezoneX;
			y = 0.34 * safezoneH + safezoneY;
			w = 0.0360937 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class tf47_ccl_buy_unit: tf47_ccl_base_rsctext
		{
			idc = 1004;
			text = "Unit"; //--- ToDo: Localize;
			x = 0.355625 * safezoneW + safezoneX;
			y = 0.34 * safezoneH + safezoneY;
			w = 0.0257812 * safezoneW;
			h = 0.022 * safezoneH;
		};
	};
};
////////////////////////////////////////////////////////
// GUI EDITOR OUTPUT END
////////////////////////////////////////////////////////
