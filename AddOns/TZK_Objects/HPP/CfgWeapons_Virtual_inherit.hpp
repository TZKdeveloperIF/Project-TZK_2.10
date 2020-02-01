// Virtual bullet used to create missiles for car/ship
// Those vehicles whose simulation is "car" or "ship" can't shot missiles thus shoulde use Fired-EH instead.
	class VirtualCountMag_xj200: MachineGun7_6 {};
	class VirtualEquipSwitchMag_xj200: MachineGun7_6 {};

	class VirtualInfLauncher_xj200: MachineGun7_6 {
		count = 1;
		reloadTime = 3;
		sound[] = {"Weapons\at_launch",0.01,1};
		initSpeed = 30;
	};
	class VirtualLAW_xj200: VirtualInfLauncher_xj200 {
		ammo = "VirtualBulletLAW_xj200";
		recoil = "LAWSingle";
		aiRateOfFire = 10.0;
		aiRateOfFireDistance = 500;
		optics = 1;
		primary = 0;
		opticsZoomMin = 0.18;
		opticsZoomMax = 0.18;
		distanceZoomMin = 100;
		distanceZoomMax = 100;
		displayName = "$STR_DN_LAW";
		displayNameMagazine = "$STR_MN_LAW";
		shortNameMagazine = "$STR_SN_LAW";
	};
	class VirtualRPG_xj200: VirtualLAW_xj200 {
		ammo = "VirtualBulletRPG_xj200";
		displayName = "$STR_DN_RPG";
		displayNameMagazine = "$STR_MN_RPG";
		shortNameMagazine = "$STR_SN_RPG";
	};

	class VirtualCarlGustav_xj200: VirtualLAW_xj200 {
		ammo = "VirtualBulletCarlGustav_xj200";
		displayName = "$STR_DN_CARL_GUSTAV";
		displayNameMagazine = "$STR_MN_CARL_GUSTAV";
		shortNameMagazine = "$STR_SN_CARL_GUSTAV";
	};
	class VirtualAT4_xj200: VirtualCarlGustav_xj200 {
		ammo = "VirtualBulletAT4_xj200";
		displayName = "$STR_DN_AT4";
		displayNameMagazine = "$STR_MN_AT4";
		shortNameMagazine = "$STR_SN_AT4";
	};
	
	class VirtualAA_xj200: VirtualInfLauncher_xj200 {
		reloadTime = 5;
		ammo = "VirtualAA_xj200";
	};
	class Virtual9K32_xj200: VirtualInfLauncher_xj200 {
		reloadTime = 5;
		ammo = "Virtual9K32_xj200";
	};

	class VirtualGrenade_xj200 : VirtualInfLauncher_xj200 {
		count = 6;
		ammo = "VirtualBulletGrenade_xj200";
		reloadTime = 0.5;
		displayName = "$STR_DN_GRENADE";
		displayNameMagazine = "$STR_MN_GRENADE";
		shortNameMagazine = "$STR_SN_GRENADE";
		sound[] = {"Weapons\grenade_launch",0.00031622773,1};
		reloadSound[] = {"Weapons\M16load",0.00031622773,1};
		reloadMagazineSound[] = {"Weapons\M16load",0.00031622773,1};
		dispersion = 0.015;
		aiDispersionCoefY = 2.0;
	};
	class VirtualMortar_xj200: VirtualGrenade_xj200 {
		count = 1;
		ammo = "VirtualBulletMortar_xj200";
		reloadTime = 1.5;
		displayName = "$STR_DN_MORTAR_W";
		displayNameMagazine = "$STR_MN_MORTAR_W";
		shortNameMagazine = "$STR_SN_MORTAR_W";
	};
	
	class VirtualInfWeapons_xj200: VirtualInfLauncher_xj200 {
		magazines[]={"Mag_12mm7_100_xj200", "VirtualLAW_xj200", "VirtualRPG_xj200", "VirtualCarlGustav_xj200", "VirtualAT4_xj200", "VirtualAA_xj200", "Virtual9K32_xj200", "VirtualGrenade_xj200", "VirtualMortar_xj200"};
		magazineReloadTime = 3;
		reloadMagazineSound[] = {"Weapons\at_load",0.00031622773,1};
		aiDispersionCoefX=8;
		aiDispersionCoefY=8;
	};
	
	
	class VirtualVehLauncher_xj200: MachineGun7_6 {
		sound[] = {"Weapons\missile",0.0031622774,1};
		reloadSound[] = {"Weapons\missload",0.00031622773,1};
		aiRateOfFire = 0.4;
		aiRateOfFireDistance = 1000;
	};
	class VirtualZuni_xj200 : VirtualVehLauncher_xj200 {
		count = 2;
		ammo = "VirtualBulletZuni_xj200";
		reloadTime = 0.1;
		magazineReloadTime = 0.1;
		displayName = "$STR_DN_FFAR";
		displayNameMagazine = "$STR_MN_FFAR";
		shortNameMagazine = "$STR_SN_FFAR";
		autoFire = 1;
	};
	
	class VirtualVehWeapons_xj200: VirtualVehLauncher_xj200 {
		magazines[]={"VirtualZuni_xj200",  };
		aiDispersionCoefX=8;
		aiDispersionCoefY=8;
	};
	
	
	
	
	class VirtualAT_APC_xj200: VirtualInfLauncher_xj200 {};
	class VirtualAT_Heli_xj200: VirtualInfLauncher_xj200 {};
	class VirtualStinger_xj200: VirtualInfLauncher_xj200 {};
	class VirtualStrela_xj200: VirtualInfLauncher_xj200 {};