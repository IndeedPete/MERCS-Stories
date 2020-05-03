class ShopMetaInformation
{
	basicCostRate = 0;
	currency = "Swiss Franc";
	currencyShort = "CHF";
	defaultBuildTime = 0;
	defaultPicture = "";
	excludedMods[] = {"IP_KSK_6094_ARID","IP_KSK_6094_EUROPE","IP_KSK_6094_TROPIC","IP_KSK_ARID","IP_KSK_DIPLOMATIC_CORPS_TROPIC","IP_KSK_EUROPE","IP_KSK_TROPIC"};
	sellingDisvisor = 2;
	stockPriceRange[] = {1, 100};
	teamLimit = 7;
};

class ShopCategories
{
	class Missions
	{
		active = 0;
		displayName = "Missions";
		labelName = "NAME: ";
		labelRank = "RANK: ";
		labelFunds = "FUNDS: ";
	};
	
	class Personnel
	{
		active = 0;
		displayName = "Personnel";
		labelAdditionalButtonOn = "Silencers: ON";
		labelAdditionalButtonOff = "Silencers: OFF";
		labelPurchaseButton = "Add";
		labelSellButton = "Remove";
		labelLeft = "Available Personnel";
		labelRight = "In Team";
		labelFunds = "Total Cost Rate";
	};
	
	class Weapons
	{
		active = 1;
		displayName = "Weapons";
		labelPurchaseButton = "Purchase";
		labelSellButton = "Sell";
		labelAdditionalButton = "Open Arsenal";
		labelLeft = "Available Weapon Licences";
		labelRight = "In Possession";
	};
	
	class Magazines
	{
		active = 0;
		displayName = "Magazines";
		labelLeft = "Available Magazines";
		labelRight = "In Possession";
	};
	
	class Items
	{
		active = 1;
		displayName = "Items";
		labelAdditionalButton = "Open Arsenal";
		labelLeft = "Available Items";
		labelRight = "In Possession";
	};
	
	class Uniforms
	{
		active = 1;
		displayName = "Uniforms";
		labelSellButton = "Arsenal";
		labelAdditionalButton = "Open Arsenal";
		labelLeft = "Available Uniforms";
		labelRight = "In Possession";
	};
	
	class CampEnhancements
	{
		active = 0;
		displayName = "Camp Enhancements";
		labelLeft = "Available Camp Enhancements";
		labelRight = "In Possession";
	};
	
	class CampVehicles
	{
		active = 0;
		displayName = "Camp Vehicles";
		labelAdditionalButton = "Select for Insertion";
		labelLeft = "Available Vehicles Enhancements";
		labelRight = "In Possession";
	};
	
	class StockMarket
	{
		active = 0;
		displayName = "Stock Market";
		labelLeft = "Available Stocks";
		labelRight = "In Depot";
	};
};

class ShopInsertionTypes
{
	class foot
	{
		displayName = "On Foot";
	};
};