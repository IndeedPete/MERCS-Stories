#define add_2(x) x, x
#define add_3(x) x, x, x
#define add_4(x) x, x, x, x
#define add_5(x) x, x, x, x, x
#define add_6(x) x, x, x, x, x, x
#define add_7(x) x, x, x, x, x, x, x
#define add_8(x) x, x, x, x, x, x, x, x
#define add_9(x) x, x, x, x, x, x, x, x, x
#define add_10(x) x, x, x, x, x, x, x, x, x, x
#define add_11(x) x, x, x, x, x, x, x, x, x, x, x
#define add_12(x) x, x, x, x, x, x, x, x, x, x, x, x
#define itemcargo(item, num) class _xx_##item {name = #item; count = num;}
#define magcargo(mag, num) class _xx_##mag {magazine = #mag; count = num;}		
#define wepcargo(wep, num) class _xx_##wep {weapon = #wep; count = num;}
#define default_linkedItems ItemMap,ItemCompass,ItemWatch,ItemRadio
#define default_linkedItems_special ItemMap,ItemCompass,ItemWatch,ItemRadio,ItemGPS
#define default_mags add_3(16Rnd_9x21_Mag),SmokeShell,add_2(Chemlight_green)
#define default_weapons_no_pistol Throw,Put
#define default_weapons IP_hgun_P07_KSK_Tropic_F,Throw,Put
#define default_weapons_special IP_hgun_P07_KSK_Tropic_SP_F,Throw,Put
#define factionName $STR_IP_KSK_TROPIC_FACTION_NAME
#define authorValue "IndeedPete"

class CfgMods
{
	class IP_MERCS_STORIES
	{
		//action = "http://www.bwmod.armedassault.info";
		dir = "IP_MERCS_STORIES";		
		hideName = 1;		
		hidePicture = 0;
		logo = "\IP_MERCS_STORIES\icon_desat.paa";
		logoOver = "\IP_MERCS_STORIES\icon.paa";
		name = $STR_IP_MERCS_STORIES_NAME;
		overview = $STR_IP_MERCS_STORIES_MOD_DESC;
		picture = "\IP_MERCS_STORIES\logo.paa";	
	};
};

class CfgMissions
{	
	/*class Campaigns
	{
		class IP_CMP_KSK_ALTIS
		{
			directory = "IP_MERCS_STORIES\campaign_altis";
		};
	};*/
};

class CfgMainMenuSpotlight
{
	class IP_MERCS_STORIES
	{
		text = $STR_IP_MERCS_STORIES_NAME; // Text displayed on the square button, converted to upper-case
		textIsQuote = 1; // 1 to add quotation marks around the text
		picture = "\IP_MERCS_STORIES\img\menu.paa"; // Square picture, ideally 512x512
		video = "\IP_MERCS_STORIES\vid\menu.ogv"; // Video played on mouse hover
		action = "uiNamespace setVariable ['RscDisplayCampaignLoad_filter', 'IP_CMP_KSK_ALTIS']; ctrlActivate ((ctrlParent (_this select 0)) displayCtrl 101);";
		//action = "ctrlactivate ((ctrlparent (_this select 0)) displayctrl 101);"; // Code called upon clicking, passed arguments are [<button:Control>]
		actionText = $STR_A3_RscDisplayMain_Spotlight_Play; // Text displayed in top left corner of on-hover white frame
		condition = "true"; // Condition for showing the spotlight
	};
};

class CfgPatches
{
	#include "cfg\patches.hpp"
};

class CfgIdentities
{
	#include "cfg\identities.hpp"
};

class CfgVehicles
{
	// Air
	//#include "air.hpp"
	
	// Armour
	//#include "armour.hpp"
	
	// Autonomous
	//#include "autonomous.hpp"
	
	// Backpacks
	//#include "backpacks.hpp"
	
	// Cars
	//#include "cars.hpp"
	
	// Holders
	//#include "holders.hpp"
	
	// Men
	#include "cfg\men.hpp"
};

class CfgWeapons 
{	
	//#include "headgear.hpp"	
	#include "cfg\uniforms.hpp"
	//#include "weapons.hpp"
};