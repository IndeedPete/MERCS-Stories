// Uniforms
class UniformItem;
class U_I_CombatUniform;
class U_I_CombatUniform_shortsleeve;
class U_BG_Guerrilla_6_1;
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
		uniformClass = "IP_MERCS_Dummy_Classic_Woodland";
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
		uniformClass = "IP_MERCS_Dummy_Classic_Woodland_Vest";
		uniformModel = "-";
	};
};

class IP_U_B_Irregular_3_MERCS_Classic_Woodland_Black: U_BG_Guerrilla_6_1 
{
	author = authorValue;
	displayName = "ION Combat Pants Classic (Woodland) and Green Pullover";
	hiddenSelectionsTextures[] = {"\IP_MERCS_STORIES\txt\men\ig_guerrilla_6_1_mercs_m81_black_co.paa"};
	picture = "\IP_MERCS_STORIES\txt\men\ui\icon_u_g_guerrilla_6_1_mercs_m81_black_ca.paa";
	
	class ItemInfo: UniformItem 
	{
		containerClass = "Supply30";
		hiddenSelections[] = {"camo"};
		mass = 30;
		uniformModel = "-";
		uniformClass = "IP_MERCS_Second_F";
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
		uniformClass = "IP_MERCS_Dummy_Modern_Woodland";
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
		uniformClass = "IP_MERCS_Dummy_Modern_Woodland_Vest";
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
		uniformClass = "IP_MERCS_Dummy_Modern_Woodland_T";
		uniformModel = "-";
	};
};

class IP_U_B_CombatUniform_MERCS_Modern_Black: U_B_CombatUniform_mcam 
{
	author = authorValue;
	displayName = "ION Combat Suit Modern (Black)";
	hiddenSelectionsTextures[] = {"\IP_MERCS_STORIES\txt\men\clothing1_MERCS_Black_co.paa"};
	picture = "\IP_MERCS_STORIES\txt\men\ui\clothing1_MERCS_Black_ca.paa";

	class ItemInfo: UniformItem 
	{
		containerClass = "Supply40";
		mass = 40;
		scope = 0;
		type = 801;
		uniformClass = "IP_MERCS_Dummy_Modern_Black";
		uniformModel = "-";
	};
};

class IP_U_B_CombatUniform_MERCS_Modern_Black_Rolled: U_B_CombatUniform_mcam_vest 
{
	author = authorValue;
	displayName = "ION Combat Suit Modern (Rolled-up, Black)";
	hiddenSelectionsTextures[] = {"\IP_MERCS_STORIES\txt\men\clothing1_MERCS_Black_co.paa"};
	picture = "\IP_MERCS_STORIES\txt\men\ui\clothing1_MERCS_Black_vest_ca.paa";

	class ItemInfo: UniformItem 
	{
		containerClass = "Supply40";
		mass = 40;
		scope = 0;
		type = 801;
		uniformClass = "IP_MERCS_Dummy_Modern_Black_Vest";
		uniformModel = "-";
	};
};

class IP_U_B_CombatUniform_MERCS_Modern_Black_T: U_B_CombatUniform_mcam_tshirt 
{
	author = authorValue;
	displayName = "ION Combat Suit Modern (T-Shirt, Black)";
	hiddenSelections[] = {"camo","camo2"};
	hiddenSelectionsTextures[] = {"\IP_MERCS_STORIES\txt\men\clothing1_MERCS_Black_co.paa","\IP_MERCS_STORIES\txt\men\basicbody_MERCS_co.paa"};
	picture = "\IP_MERCS_STORIES\txt\men\ui\clothing1_MERCS_Black_t_ca.paa";

	class ItemInfo: UniformItem 
	{
		containerClass = "Supply40";
		mass = 40;
		scope = 0;
		type = 801;
		uniformClass = "IP_MERCS_Dummy_Modern_Black_T";
		uniformModel = "-";
	};
};

class IP_U_B_CombatUniform_MERCS_Modern_Woodland_Black_Top: U_B_CombatUniform_mcam 
{
	author = authorValue;
	displayName = "ION Combat Suit Modern (Woodland, Black Top)";
	hiddenSelectionsTextures[] = {"\IP_MERCS_STORIES\txt\men\clothing1_MERCS_Woodland_Black_Top_co.paa"};
	picture = "\IP_MERCS_STORIES\txt\men\ui\clothing1_MERCS_Woodland_Black_Top_ca.paa";

	class ItemInfo: UniformItem 
	{
		containerClass = "Supply40";
		mass = 40;
		scope = 0;
		type = 801;
		uniformClass = "IP_MERCS_Dummy_Modern_Woodland_Black_Top";
		uniformModel = "-";
	};
};

class IP_U_B_CombatUniform_MERCS_Modern_Woodland_Black_Top_Rolled: U_B_CombatUniform_mcam_vest 
{
	author = authorValue;
	displayName = "ION Combat Suit Modern (Rolled-up, Woodland, Black Top)";
	hiddenSelectionsTextures[] = {"\IP_MERCS_STORIES\txt\men\clothing1_MERCS_Woodland_Black_Top_co.paa"};
	picture = "\IP_MERCS_STORIES\txt\men\ui\clothing1_MERCS_Woodland_Black_Top_vest_ca.paa";

	class ItemInfo: UniformItem 
	{
		containerClass = "Supply40";
		mass = 40;
		scope = 0;
		type = 801;
		uniformClass = "IP_MERCS_Dummy_Modern_Woodland_Black_Top_Vest";
		uniformModel = "-";
	};
};

class IP_U_B_CombatUniform_MERCS_Modern_Woodland_Black_Top_Rolled_Leader: U_B_CombatUniform_mcam_vest 
{
	author = authorValue;
	displayName = "ION Combat Suit Modern (Rolled-up, Woodland, Leader)";
	hiddenSelectionsTextures[] = {"\IP_MERCS_STORIES\txt\men\clothing1_MERCS_Woodland_black_top_leader_co.paa"};
	picture = "\IP_MERCS_STORIES\txt\men\ui\clothing1_MERCS_Woodland_Black_Top_vest_ca.paa";

	class ItemInfo: UniformItem 
	{
		containerClass = "Supply40";
		mass = 40;
		scope = 0;
		type = 801;
		uniformClass = "IP_MERCS_Leader_F";
		uniformModel = "-";
	};
};

class IP_U_B_CombatUniform_MERCS_Modern_Woodland_Black_Pants: U_B_CombatUniform_mcam 
{
	author = authorValue;
	displayName = "ION Combat Suit Modern (Woodland, Black Pants)";
	hiddenSelectionsTextures[] = {"\IP_MERCS_STORIES\txt\men\clothing1_MERCS_Woodland_Black_Pants_co.paa"};
	picture = "\IP_MERCS_STORIES\txt\men\ui\clothing1_MERCS_Woodland_Black_Pants_ca.paa";

	class ItemInfo: UniformItem 
	{
		containerClass = "Supply40";
		mass = 40;
		scope = 0;
		type = 801;
		uniformClass = "IP_MERCS_Dummy_Modern_Woodland_Black_Pants";
		uniformModel = "-";
	};
};

class IP_U_B_CombatUniform_MERCS_Modern_Woodland_Black_Pants_Rolled: U_B_CombatUniform_mcam_vest 
{
	author = authorValue;
	displayName = "ION Combat Suit Modern (Rolled-up, Woodland, Black Pants)";
	hiddenSelectionsTextures[] = {"\IP_MERCS_STORIES\txt\men\clothing1_MERCS_Woodland_Black_Pants_co.paa"};
	picture = "\IP_MERCS_STORIES\txt\men\ui\clothing1_MERCS_Woodland_Black_Pants_vest_ca.paa";

	class ItemInfo: UniformItem 
	{
		containerClass = "Supply40";
		mass = 40;
		scope = 0;
		type = 801;
		uniformClass = "IP_MERCS_Dummy_Modern_Woodland_Black_Pants_Vest";
		uniformModel = "-";
	};
};