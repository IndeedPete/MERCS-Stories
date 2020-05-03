// Uniform Dummies
class B_Soldier_F;

class MERCS_Dummy_Classic_Woodland: B_Soldier_F
{
	hiddenSelections[] = {"Camo","Insignia"};
	hiddenSelectionsTextures[] = {"\IP_MERCS_STORIES\txt\men\ia_soldier_01_clothing_MERCS_M81_co.paa"};
	model = "\A3\Characters_F_Beta\INDEP\ia_soldier_01.p3d";
	scope = 1;
	uniformClass = "IP_U_B_CombatUniform_MERCS_Classic_Woodland";
};

class MERCS_Dummy_Classic_Woodland_Vest: MERCS_Dummy_Classic_Woodland
{
	model = "\A3\Characters_F_Beta\INDEP\ia_soldier_02.p3d";
	uniformClass = "IP_U_B_CombatUniform_MERCS_Classic_Woodland_Rolled";
};

class MERCS_Dummy_Modern_Woodland: B_Soldier_F
{
	hiddenSelections[] = {"Camo","Insignia"};
	hiddenSelectionsTextures[] = {"\IP_MERCS_STORIES\txt\men\clothing1_MERCS_Woodland_co.paa"};
	model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
	scope = 1;
	uniformClass = "IP_U_B_CombatUniform_MERCS_Modern_Woodland";
};

class MERCS_Dummy_Modern_Woodland_Vest: MERCS_Dummy_Modern_Woodland
{
	model = "\A3\characters_F\BLUFOR\b_soldier_03.p3d";
	uniformClass = "IP_U_B_CombatUniform_MERCS_Modern_Woodland_Rolled";
};

class MERCS_Dummy_Modern_Woodland_T: MERCS_Dummy_Modern_Woodland
{
	hiddenSelections[] = {"camo","camo2","Insignia"};
	hiddenSelectionsTextures[] = {"\IP_MERCS_STORIES\txt\men\clothing1_MERCS_Woodland_co.paa","\IP_MERCS_STORIES\txt\men\basicbody_MERCS_co.paa"};
	model = "\A3\characters_F\BLUFOR\b_soldier_02.p3d";
	uniformClass = "IP_U_B_CombatUniform_MERCS_Modern_Woodland_T";
};