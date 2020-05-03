class ShopCampVehicles
{
	class Cars
	{
		displayName = "Cars";
		
		class IP_I_Quadbike_01_FGUERSnowDigi
		{
			price = 1000;
		};
		
		class IP_C_Offroad_01_FGUERSnowDigi
		{
			price = 5000;
		};
		
		class IP_I_Offroad_01_armed_FGUERSnowDigi
		{
			price = 10000;
		};
		
		class IP_B_MRAP_01_FBSM
		{
			price = 25000;
			unique = 1;
		};
		
		class B_mas_HMMWV_UNA
		{
			price = 20000;
		};
		class B_mas_cars_LR_Unarmed: B_mas_HMMWV_UNA {};
		class CUP_B_HMMWV_Unarmed_USMC: B_mas_HMMWV_UNA {};
		class rhsusf_m1025_w: B_mas_HMMWV_UNA {};
		class CUP_O_UAZ_Unarmed_CHDKZ: B_mas_HMMWV_UNA {};
		class CUP_O_UAZ_Open_CHDKZ: B_mas_HMMWV_UNA {};
		class rhs_tigr_msv: B_mas_HMMWV_UNA {};
		class rhs_tigr_ffv_msv: B_mas_HMMWV_UNA {};
		class RHS_UAZ_MSV_01: B_mas_HMMWV_UNA {};
		class rhs_uaz_open_MSV_01: B_mas_HMMWV_UNA {};
		class CUP_O_UAZ_Unarmed_RU: B_mas_HMMWV_UNA {};
		class CUP_O_UAZ_Open_RU: B_mas_HMMWV_UNA {};
		class CUP_I_UAZ_Unarmed_UN: B_mas_HMMWV_UNA {};
		class CUP_I_UAZ_Open_UN: B_mas_HMMWV_UNA {};
		
		class B_mas_HMMWV_M2
		{
			price = 25000;
		};
		class B_mas_cars_LR_M2: B_mas_HMMWV_M2 {};
		class CUP_B_HMMWV_M2_USMC: B_mas_HMMWV_M2 {};
		class CUP_B_HMMWV_M1114_USMC: B_mas_HMMWV_M2 {};
		class rhsusf_m1025_w_m2: B_mas_HMMWV_M2 {};
		class CUP_O_UAZ_MG_CHDKZ: B_mas_HMMWV_M2 {};
		class CUP_O_UAZ_MG_RU: B_mas_HMMWV_M2 {};
		class CUP_I_UAZ_MG_UN: B_mas_HMMWV_M2 {};
		
		class B_mas_HMMWV_M134
		{
			price = 30000;
		};
		class B_mas_HMMWV_SOV_M134: B_mas_HMMWV_M134 {};
		class CUP_BAF_Jackal2_L2A1_W: B_mas_HMMWV_M134 {};
		
		class B_mas_HMMWV_MK19
		{
			price = 30000;
		};
		class B_mas_HMMWV_SOV: B_mas_HMMWV_MK19 {};
		class B_mas_cars_LR_Mk19: B_mas_HMMWV_MK19 {};
		class CUP_BAF_Jackal2_GMG_W: B_mas_HMMWV_MK19 {};
		class CUP_B_HMMWV_MK19_USMC: B_mas_HMMWV_MK19 {};
		class rhsusf_m1025_w_mk19: B_mas_HMMWV_MK19 {};
		class CUP_O_UAZ_AGS30_CHDKZ: B_mas_HMMWV_MK19 {};
		class CUP_O_UAZ_AGS30_RU: B_mas_HMMWV_MK19 {};
		class CUP_I_UAZ_AGS30_UN: B_mas_HMMWV_MK19 {};
		
		class IP_I_MRAP_03_digi_F
		{
			price = 50000;
		};
		
		class IP_I_MRAP_03_hmg_digi_F
		{
			price = 75000;
		};
		
		class IP_I_MRAP_03_gmg_digi_F
		{
			price = 75000;
		};
	};
	
	class Armour
	{
		displayName = "Armour";
		
		class I_mas_BRDM2
		{
			price = 75000;
		};
		class CUP_I_BRDM2_NAPA: I_mas_BRDM2 {};
		class CUP_I_M113_UN: I_mas_BRDM2 {};
		class CUP_I_BRDM2_UN: I_mas_BRDM2 {};
		
		class IP_I_APC_tracked_03_cannon_F
		{
			price = 125000;
		};
		class I_mas_BMP1_AAF_01: IP_I_APC_tracked_03_cannon_F {};
		class I_mas_BMP1P_AAF_01: IP_I_APC_tracked_03_cannon_F {};
		class I_mas_BMP2_AAF_01: IP_I_APC_tracked_03_cannon_F {};
		class I_mas_BTR60: IP_I_APC_tracked_03_cannon_F {};
		
		class IP_I_APC_Wheeled_03_cannon_F
		{
			price = 150000;
		};
	};
	
	class Air
	{
		displayName = "Air";
		
		class IP_C_Heli_Light_01_civil_FPO
		{
			price = 25000;
		};
		
		class IP_I_Heli_Light_01_digi_F
		{
			price = 50000;
		};
		
		class IP_I_Heli_Light_01_armed_digi_F
		{
			cas = 1;
			price = 75000;
		};
		
		class IP_I_Heli_light_03_unarmed_digi_F
		{
			price = 100000;
		};
		
		class IP_I_Heli_light_03_digi_F
		{
			cas = 1;
			price = 125000;
		};
		class CUP_I_Mi24_D_ION: IP_I_Heli_light_03_digi_F {};
		class CUP_I_Mi24_D_UN: IP_I_Heli_light_03_digi_F {};
	};	
};