// Uniforms
class UniformItem;
class U_I_CombatUniform;
class U_I_CombatUniform_shortsleeve;
class U_B_CombatUniform_mcam;
class U_B_CombatUniform_mcam_vest;
class U_B_CombatUniform_mcam_tshirt;

class IP_U_B_CombatUniform_MERCS_Classic_Woodland: U_I_CombatUniform 
{
	author = authorValue;
	displayName = "ION Combat Suit Classic (Woodland)";
	hiddenSelectionsTextures[] = {"\IP_MERCS_STORIES\txt\men\ia_soldier_01_clothing_MERCS_M81_co.paa"};
	picture = "\IP_MERCS_STORIES\txt\men\ui\MERCS_Classic_Woodland_ca.paa";

	class ItemInfo: UniformItem 
	{
		containerClass = "Supply40";
		hiddenSelections[] = {"Camo"};
		mass = 40;
		scope = 0;
		type = 801;
		uniformClass = "MERCS_Dummy_Classic_Woodland";
		uniformModel = "-";
	};
};

class IP_U_B_CombatUniform_MERCS_Classic_Woodland_Rolled: U_I_CombatUniform_shortsleeve 
{
	author = authorValue;
	displayName = "ION Combat Suit Classic (Rolled-up, Woodland)";
	hiddenSelectionsTextures[] = {"\IP_MERCS_STORIES\txt\men\ia_soldier_01_clothing_MERCS_M81_co.paa"};
	picture = "\IP_MERCS_STORIES\txt\men\ui\MERCS_Classic_Woodland_rolled_ca.paa";

	class ItemInfo: UniformItem 
	{
		containerClass = "Supply40";
		hiddenSelections[] = {"Camo"};
		mass = 40;
		scope = 0;
		type = 801;
		uniformClass = "MERCS_Dummy_Classic_Woodland_Vest";
		uniformModel = "-";
	};
};

class IP_U_B_CombatUniform_MERCS_Modern_Woodland: U_B_CombatUniform_mcam 
{
	author = authorValue;
	displayName = "ION Combat Suit Modern (Woodland)";
	hiddenSelectionsTextures[] = {"\IP_MERCS_STORIES\txt\men\clothing1_MERCS_Woodland_co.paa"};
	picture = "\IP_MERCS_STORIES\txt\men\ui\clothing1_MERCS_Woodland_ca.paa";

	class ItemInfo: UniformItem 
	{
		containerClass = "Supply40";
		mass = 40;
		scope = 0;
		type = 801;
		uniformClass = "MERCS_Dummy_Modern_Woodland";
		uniformModel = "-";
	};
};

class IP_U_B_CombatUniform_MERCS_Modern_Woodland_Rolled: U_B_CombatUniform_mcam_vest 
{
	author = authorValue;
	displayName = "ION Combat Suit Modern (Rolled-up, Woodland)";
	hiddenSelectionsTextures[] = {"\IP_MERCS_STORIES\txt\men\clothing1_MERCS_Woodland_co.paa"};
	picture = "\IP_MERCS_STORIES\txt\men\ui\clothing1_MERCS_Woodland_vest_ca.paa";

	class ItemInfo: UniformItem 
	{
		containerClass = "Supply40";
		mass = 40;
		scope = 0;
		type = 801;
		uniformClass = "MERCS_Dummy_Modern_Woodland_Vest";
		uniformModel = "-";
	};
};

class IP_U_B_CombatUniform_MERCS_Modern_Woodland_T: U_B_CombatUniform_mcam_tshirt 
{
	author = authorValue;
	displayName = "ION Combat Suit Modern (T-Shirt, Woodland)";
	hiddenSelections[] = {"camo","camo2"};
	hiddenSelectionsTextures[] = {"\IP_MERCS_STORIES\txt\men\clothing1_MERCS_Woodland_co.paa","\IP_MERCS_STORIES\txt\men\basicbody_MERCS_co.paa"};
	picture = "\IP_MERCS_STORIES\txt\men\ui\clothing1_MERCS_Woodland_t_ca.paa";

	class ItemInfo: UniformItem 
	{
		containerClass = "Supply40";
		mass = 40;
		scope = 0;
		type = 801;
		uniformClass = "MERCS_Dummy_Modern_Woodland_T";
		uniformModel = "-";
	};
};