/*class rscTitles
{
	class IP_DLG_SIMPLESENTENCE
	{
		idd = 20000;
		movingenable = false;
		duration = 1e+1000;
		onLoad = "UINamespace setVariable ['DLG_SimpleSentence', _this select 0]"; 		
		
		class Controls
		{
			class IP_BOX_MAIN: BOX
			{
				idc = -1;
				text = ""; //--- ToDo: Localize;
				x = 0.5 * GUI_GRID_W + GUI_GRID_X;
				y = 19.5 * GUI_GRID_H + GUI_GRID_Y;
				w = 39 * GUI_GRID_W;
				h = 4 * GUI_GRID_H;
			};
			
			////////////////////////////////////////////////////////
			// GUI EDITOR OUTPUT START (by IndeedPete, v1.063, #Cyvode)
			////////////////////////////////////////////////////////

			class RscFrame_1800: RscFrame
			{
				idc = 1800;
				x = 0.5 * GUI_GRID_W + GUI_GRID_X;
				y = 19.5 * GUI_GRID_H + GUI_GRID_Y;
				w = 39 * GUI_GRID_W;
				h = 4 * GUI_GRID_H;
			};
			class RscPicture_1200: RscPicture
			{
				idc = 1200;
				text = "#(argb,256,256,1)r2t(camrender0,1.0)";
				x = 1 * GUI_GRID_W + GUI_GRID_X;
				y = 20 * GUI_GRID_H + GUI_GRID_Y;
				w = 5 * GUI_GRID_W;
				h = 3 * GUI_GRID_H;
			};
			class RscStructuredText_1100: RscStructuredText
			{
				idc = 1100;
				x = 6.5 * GUI_GRID_W + GUI_GRID_X;
				y = 20 * GUI_GRID_H + GUI_GRID_Y;
				w = 32.5 * GUI_GRID_W;
				h = 3 * GUI_GRID_H;
			};
			////////////////////////////////////////////////////////
			// GUI EDITOR OUTPUT END
			////////////////////////////////////////////////////////
		};
	};
	
	class IP_DLG_SIMPLESENTENCE_LARGE
	{
		idd = 20008;
		movingenable = false;
		duration = 1e+1000;
		onLoad = "UINamespace setVariable ['DLG_SimpleSentence', _this select 0]"; 		
		
		class Controls
		{
			class IP_BOX_MAIN: BOX
			{
				idc = -1;
				text = ""; //--- ToDo: Localize;
				x = 0.5 * GUI_GRID_W + GUI_GRID_X;
				y = 19.5 * GUI_GRID_H + GUI_GRID_Y;
				w = 39 * GUI_GRID_W;
				h = 8 * GUI_GRID_H;
			};
			
			////////////////////////////////////////////////////////
			// GUI EDITOR OUTPUT START (by IndeedPete, v1.063, #Cyvode)
			////////////////////////////////////////////////////////

			class RscFrame_1800: RscFrame
			{
				idc = 1800;
				x = 0.5 * GUI_GRID_W + GUI_GRID_X;
				y = 19.5 * GUI_GRID_H + GUI_GRID_Y;
				w = 39 * GUI_GRID_W;
				h = 8 * GUI_GRID_H;
			};
			class RscPicture_1200: RscPicture
			{
				idc = 1200;
				text = "#(argb,256,256,1)r2t(camrender0,1.0)";
				x = 1 * GUI_GRID_W + GUI_GRID_X;
				y = 20 * GUI_GRID_H + GUI_GRID_Y;
				w = 5 * GUI_GRID_W;
				h = 3 * GUI_GRID_H;
			};
			class RscStructuredText_1100: RscStructuredText
			{
				idc = 1100;
				x = 6.5 * GUI_GRID_W + GUI_GRID_X;
				y = 20 * GUI_GRID_H + GUI_GRID_Y;
				w = 32.5 * GUI_GRID_W;
				h = 7 * GUI_GRID_H;
			};
			////////////////////////////////////////////////////////
			// GUI EDITOR OUTPUT END
			////////////////////////////////////////////////////////
		};
	};
	
	// Include Dictionary Rsc - idd = 20002
	//#include "\Campaigns\IP_CMP_ICE\cfg\dict\dialogs.hpp"
	
	// Include Credit Image (overview)
	class IP_RSC_MAIN_PICTURE
	{
		idd = 20003;
		movingenable = false;
		duration = 1e+1000;
	
		class Controls
		{
			class IP_PIC_MAIN: RscPicture
			{
				idc = -1;
				text = "\Campaigns\IP_CMP_ICE\img\ICE_Logo_01.paa"; //--- ToDo: Localize;
				x = 0;
				y = 0;
				w = 1;
				h = 0.5;
			};
		};
	};
	
	// Include Glass Details - idds = 20004, 20005, 20006
	//#include "\Campaigns\IP_CMP_ICE\cfg\glass\dialogs.hpp"
	
	// Include Hazard Zone (RAD Only) - idd = 20007
	//#include "\Campaigns\IP_CMP_ICE\cfg\hazard\dialogs.hpp"
	
	// Include Campaign Specific Dialogs (BSM_M02 Supply Status) - idds = 20008
	//#include "\Campaigns\IP_CMP_ICE\cfg\cmp\dialogs.hpp"
};*/

class IP_DLG_CONVERSATION
{
    idd = 20001;
    movingenable = true;   
    
    class Controls
    {
		class IP_BOX_MAIN: BOX
		{
			idc = -1;
			text = ""; //--- ToDo: Localize;
			x = 0 * GUI_GRID_W + GUI_GRID_X;
			y = 0 * GUI_GRID_H + GUI_GRID_Y;
			w = 40 * GUI_GRID_W;
			h = 25 * GUI_GRID_H;
		};
		
		////////////////////////////////////////////////////////
		// GUI EDITOR OUTPUT START (by IndeedPete, v1.063, #Momuqa)
		////////////////////////////////////////////////////////

		class IP_FRM_CONVERSATION: RscFrame
		{
			idc = 1800;
			x = 0 * GUI_GRID_W + GUI_GRID_X;
			y = 0 * GUI_GRID_H + GUI_GRID_Y;
			w = 40 * GUI_GRID_W;
			h = 25 * GUI_GRID_H;
		};
		class IP_PIC_FIRST: RscPicture
		{
			idc = 1200;
			text = "#(argb,8,8,3)color(1,1,1,1)";
			x = 1 * GUI_GRID_W + GUI_GRID_X;
			y = 1 * GUI_GRID_H + GUI_GRID_Y;
			w = 6 * GUI_GRID_W;
			h = 4 * GUI_GRID_H;
		};
		class IP_PIC_SECOND: RscPicture
		{
			idc = 1201;
			text = "#(argb,8,8,3)color(1,1,1,1)";
			x = 33 * GUI_GRID_W + GUI_GRID_X;
			y = 1 * GUI_GRID_H + GUI_GRID_Y;
			w = 6 * GUI_GRID_W;
			h = 4 * GUI_GRID_H;
		};
		class IP_STX_CONVERSATION: RscStructuredText
		{
			idc = 1100;
			text = ""; //--- ToDo: Localize;
			x = 9 * GUI_GRID_W + GUI_GRID_X;
			y = 1 * GUI_GRID_H + GUI_GRID_Y;
			w = 22 * GUI_GRID_W;
			h = 18 * GUI_GRID_H;
		};
		class IP_LSB_RESPONSES: RscListbox
		{
			idc = 1500;
			x = 1 * GUI_GRID_W + GUI_GRID_X;
			y = 20 * GUI_GRID_H + GUI_GRID_Y;
			w = 38 * GUI_GRID_W;
			h = 4 * GUI_GRID_H;
			onLBSelChanged = "((_this select 0) lbData (_this select 1)) call IP_fnc_selectResponse";
		};
		class IP_STX_FIRST: RscStructuredText
		{
			idc = 1101;
			x = 0.5 * GUI_GRID_W + GUI_GRID_X;
			y = 5.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 7.5 * GUI_GRID_W;
			h = 13.5 * GUI_GRID_H;
		};
		class IP_STX_SECOND: RscStructuredText
		{
			idc = 1102;
			x = 32 * GUI_GRID_W + GUI_GRID_X;
			y = 5.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 7.5 * GUI_GRID_W;
			h = 13.5 * GUI_GRID_H;
		};
		////////////////////////////////////////////////////////
		// GUI EDITOR OUTPUT END
		////////////////////////////////////////////////////////
	};
};