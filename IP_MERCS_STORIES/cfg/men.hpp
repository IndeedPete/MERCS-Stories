// Uniform Dummies
class B_Soldier_F;
class B_Officer_F;

class IP_MERCS_Dummy_Classic_Woodland: B_Soldier_F
{
	faction = "IP_MERCS";
	hiddenSelections[] = {"Camo","Insignia"};
	hiddenSelectionsTextures[] = {"\IP_MERCS_STORIES\txt\men\ia_soldier_01_clothing_MERCS_M81_co.paa"};
	model = "\A3\Characters_F_Beta\INDEP\ia_soldier_01.p3d";
	scope = 1;
	uniformClass = "IP_U_B_CombatUniform_MERCS_Classic_Woodland";
};

class IP_MERCS_Dummy_Classic_Woodland_Vest: IP_MERCS_Dummy_Classic_Woodland
{
	model = "\A3\Characters_F_Beta\INDEP\ia_soldier_02.p3d";
	uniformClass = "IP_U_B_CombatUniform_MERCS_Classic_Woodland_Rolled";
};

class IP_MERCS_Dummy_Modern_Woodland: B_Soldier_F
{
	faction = "IP_MERCS";
	hiddenSelections[] = {"Camo","Insignia"};
	hiddenSelectionsTextures[] = {"\IP_MERCS_STORIES\txt\men\clothing1_MERCS_Woodland_co.paa"};
	model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
	scope = 1;
	uniformClass = "IP_U_B_CombatUniform_MERCS_Modern_Woodland";
};

class IP_MERCS_Dummy_Modern_Woodland_Vest: IP_MERCS_Dummy_Modern_Woodland
{
	model = "\A3\characters_F\BLUFOR\b_soldier_03.p3d";
	uniformClass = "IP_U_B_CombatUniform_MERCS_Modern_Woodland_Rolled";
};

class IP_MERCS_Dummy_Modern_Woodland_T: IP_MERCS_Dummy_Modern_Woodland
{
	hiddenSelections[] = {"camo","camo2","Insignia"};
	hiddenSelectionsTextures[] = {"\IP_MERCS_STORIES\txt\men\clothing1_MERCS_Woodland_co.paa","\IP_MERCS_STORIES\txt\men\basicbody_MERCS_co.paa"};
	model = "\A3\characters_F\BLUFOR\b_soldier_02.p3d";
	uniformClass = "IP_U_B_CombatUniform_MERCS_Modern_Woodland_T";
};

class IP_MERCS_Dummy_Modern_Black: B_Soldier_F
{
	faction = "IP_MERCS";
	hiddenSelections[] = {"Camo","Insignia"};
	hiddenSelectionsTextures[] = {"\IP_MERCS_STORIES\txt\men\clothing1_MERCS_Black_co.paa"};
	model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
	scope = 1;
	uniformClass = "IP_U_B_CombatUniform_MERCS_Modern_Black";
};

class IP_MERCS_Dummy_Modern_Black_Vest: IP_MERCS_Dummy_Modern_Black
{
	model = "\A3\characters_F\BLUFOR\b_soldier_03.p3d";
	uniformClass = "IP_U_B_CombatUniform_MERCS_Modern_Black_Rolled";
};

class IP_MERCS_Dummy_Modern_Black_T: IP_MERCS_Dummy_Modern_Black
{
	hiddenSelections[] = {"camo","camo2","Insignia"};
	hiddenSelectionsTextures[] = {"\IP_MERCS_STORIES\txt\men\clothing1_MERCS_Black_co.paa","\IP_MERCS_STORIES\txt\men\basicbody_MERCS_co.paa"};
	model = "\A3\characters_F\BLUFOR\b_soldier_02.p3d";
	uniformClass = "IP_U_B_CombatUniform_MERCS_Modern_Black_T";
};

class IP_MERCS_Dummy_Modern_Woodland_Black_Top: B_Soldier_F
{
	faction = "IP_MERCS";
	hiddenSelections[] = {"Camo","Insignia"};
	hiddenSelectionsTextures[] = {"\IP_MERCS_STORIES\txt\men\clothing1_MERCS_Woodland_Black_Top_co.paa"};
	model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
	scope = 1;
	uniformClass = "IP_U_B_CombatUniform_MERCS_Modern_Woodland_Black_Top";
};

class IP_MERCS_Dummy_Modern_Woodland_Black_Top_Vest: IP_MERCS_Dummy_Modern_Woodland_Black_Top
{
	model = "\A3\characters_F\BLUFOR\b_soldier_03.p3d";
	uniformClass = "IP_U_B_CombatUniform_MERCS_Modern_Woodland_Black_Top_Rolled";
};

class IP_MERCS_Dummy_Modern_Woodland_Black_Pants: B_Soldier_F
{
	faction = "IP_MERCS";
	hiddenSelections[] = {"Camo","Insignia"};
	hiddenSelectionsTextures[] = {"\IP_MERCS_STORIES\txt\men\clothing1_MERCS_Woodland_Black_Pants_co.paa"};
	model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
	scope = 1;
	uniformClass = "IP_U_B_CombatUniform_MERCS_Modern_Woodland_Black_Pants";
};

class IP_MERCS_Dummy_Modern_Woodland_Black_Pants_Vest: IP_MERCS_Dummy_Modern_Woodland_Black_Pants
{
	model = "\A3\characters_F\BLUFOR\b_soldier_03.p3d";
	uniformClass = "IP_U_B_CombatUniform_MERCS_Modern_Woodland_Black_Pants_Rolled";
};

class IP_MERCS_Leader_F: B_Officer_F
{
	author = authorValue;
	backpack = "";
	displayName = "Salih";
	faction = "IP_MERCS";
	hiddenSelections[] = {"Camo","Insignia"};
	hiddenSelectionsTextures[] = {"\IP_MERCS_STORIES\txt\men\clothing1_MERCS_Woodland_black_top_leader_co.paa"};
	items[] = {FirstAidKit};
	linkedItems[] = {default_linkedItems};
	magazines[] = {};
	model = "\A3\characters_F\BLUFOR\b_soldier_03.p3d";
	respawnItems[] = {FirstAidKit};
	respawnLinkedItems[] = {default_linkedItems};
	respawnMagazines[] = {};
	respawnWeapons[] = {Throw,Put};
	scope = 2;
	uniformClass = "IP_U_B_CombatUniform_MERCS_Modern_Woodland_Black_Top_Rolled_Leader";
	weapons[] = {Throw,Put};

	class EventHandlers
	{
		init = "(_this select 0) setIdentity 'IP_MERCS_Salih';";
	};
};