class O_MRAP_02_F;

class IP_MERCS_MRAP_02_Black_F: O_MRAP_02_F
{
	author = authorValue;
	crew = "B_Soldier_F";
	displayName = "Punisher (Black)";
	faction = "IP_MERCS";
	hiddenSelectionsTextures[] = {"\IP_MERCS_STORIES\txt\cars\mrap_02_ext_01_MERCS_black_co.paa","\IP_MERCS_STORIES\txt\cars\mrap_02_ext_02_MERCS_black_co.paa"};
	scope = 2;
	scopeCurator = 2;
	side = 1;
	textureList[] = {"IP_MERCS_BLACK",1};
	typicalCargo[] = {"B_Soldier_F"};
	
	class TextureSources
	{
		class IP_MERCS_BLACK
		{
			author = authorValue;
			displayName = "Black";
			factions[] = {"IP_MERCS"};
			textures[] = {"\IP_MERCS_STORIES\txt\cars\mrap_02_ext_01_MERCS_black_co.paa","\IP_MERCS_STORIES\txt\cars\mrap_02_ext_02_MERCS_black_co.paa"};
		};
	};
	
	class TransportItems
	{
		itemcargo(FirstAidKit, 10)
		itemcargo(ToolKit, 1)
		itemcargo(Medikit, 1)
	};
	
	class TransportMagazines {};	
	class TransportWeapons {};
};