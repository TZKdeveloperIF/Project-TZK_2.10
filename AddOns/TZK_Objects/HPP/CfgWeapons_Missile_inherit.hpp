// Missile launcher
	// Original OFP Aircrafts' Missile Launcher
	class HellfireLauncherCobra_xj200: HellfireLauncherCobra {
		ammo = HellfireCobra_xj200;
	};
	class HellfireLauncherApach_xj200: HellfireLauncher {
		ammo = HellfireApach_xj200;
		displayName = $STR_DN_AH64Ammo;
		displayNameMagazine = $STR_MN_AH64Ammo;
		shortNameMagazine = $STR_SN_AH64Ammo;
		count = 8;
	};
	class HellfireLauncherHind_xj200: HellfireLauncherHind {
		ammo = "AT6_xj200";
	};
	class HellfireLauncherKamov_xj200: HellfireLauncherHind {
		ammo="AT6_xj200";
		displayName="$STR_DN_AT6";
		displayNameMagazine="$STR_MN_AT6";
		shortNameMagazine="$STR_SN_AT6";
		count=12
		initSpeed=30
	};
	
	class Rocket57x40Kamov_xj200: Rocket57x64 {
		ammo="Rocket57";
		displayName="$STR_DN_ROCKET_57";
		displayNameMagazine="$STR_MN_ROCKET_57";
		shortNameMagazine="$STR_SN_ROCKET_57";
		count=40
	};

	class Ch29TLauncher_xj200: MaverickLauncher {
		ammo=Ch29T;
		displayName=$STR_DN_CH29T;
		displayNameMagazine=$STR_MN_CH29T;
		shortNameMagazine=$STR_SN_CH29T;
		count=6;
	};

	// Vehicle's AA Launcher
	class Stinger_xj200: AT3Launcher {
		count = 2;
		ammo = Stinger_xj200;
		displayName="Stinger";
		displayNameMagazine="Stinger";
		shortNameMagazine="Stinger";
		reloadTime=1.0;
		magazineReloadTime=5;
		aiRateOfFire=3.0;
		aiRateOfFireDistance=2000;
		maxLeadSpeed=600;
		sound[]={Weapons\missile,db10,1};
	};
	class StingerT_xj200: Stinger_xj200 {
		count = 1;
		magazineReloadTime=4;
	};
	class Strela_xj200: Stinger_xj200 {
		ammo = Strela_xj200;
		displayName="Strela";
		displayNameMagazine="Strela";
		shortNameMagazine="Strela";
	};
	class StrelaT_xj200: Strela_xj200 {
		count = 1;
		magazineReloadTime=4;
	};

	class RedTop_26_xj200: HellfireLauncher {
		ammo=RedTop_26_xj200;
		displayName="RedTop AAM";
		displayNameMagazine="RedTop";
		shortNameMagazine="RedTop";
		count=4;
		initspeed=30;
		reloadTime=2;
		magazineReloadTime=15;
		aiRateOfFire=6;
		aiRateOfFireDistance=2000;
		maxLeadSpeed=2500;
	};
	class RedTop_30_xj200: RedTop_26_xj200 {
		ammo=RedTop_30_xj200;
	};
	class RedTop_40_xj200: RedTop_26_xj200 {
		ammo=RedTop_40_xj200;
	};

	class StingerShip_xj200: MachineGun12_7_xj200 {
		count = 2;
		ammo = Stinger_xj200;
		displayName="Stinger";
		displayNameMagazine="Stinger";
		shortNameMagazine="Stinger";
		reloadTime=1.0;
		magazineReloadTime=5;
		aiRateOfFire=3.0;
		aiRateOfFireDistance=2000;
		maxLeadSpeed=600;
		sound[]={Weapons\missile,db10,1};
	};
	class StrelaShip_xj200: StingerShip_xj200 {
		ammo = Strela_xj200;
		displayName="Strela";
		displayNameMagazine="Strela";
		shortNameMagazine="Strela";
	};

	class HellfireLauncherBMP2_xj200: AT3Launcher {
		count = 8;
		reloadTime = 30;
		displayName = $STR_DN_ADD_BMP2_AT;
		displayNameMagazine = $STR_DN_ADD_BMP2_AT;
		shortNameMagazine = $STR_DN_ADD_BMP2_AT;
	};
	class HellfireLauncherM2A2_xj200: AT3Launcher {
		count = 2;
		reloadTime = 0.5;
		displayName = $STR_DN_TOW;
		displayNameMagazine = $STR_DN_TOW;
		shortNameMagazine = $STR_DN_TOW;
		cost = 20000;
	};

	// Vehicle's AT Launcher
	class GuidedAT_APC_xj200: AT3Launcher {
		count = 2;
		ammo = GuidedAT_APC_xj200;
		displayName="AT";
		displayNameMagazine="AT";
		shortNameMagazine="AT";
		reloadTime=1.0; magazineReloadTime=10;
		aiRateOfFire=4;
		aiRateOfFireDistance=1000;
		sound[]={Weapons\at_launch,db10,1};
	};
	class ATLauncherTank_xj200: AT3Launcher {
		magazines[]={GuidedAT_APC_xj200};
		aiDispersionCoefX=8;
		aiDispersionCoefY=8;
	};
	class ATLauncherShip_xj200: MachineGun12_7_xj200 {
		count = 2;
		ammo = GuidedAT_APC_xj200;
		displayName="AT";
		displayNameMagazine="AT";
		shortNameMagazine="AT";
		reloadTime=1.0; magazineReloadTime=10;
		aiRateOfFire=4;
		aiRateOfFireDistance=1000;
		sound[]={Weapons\at_launch,db10,1};
	};

	class GuidedAT_Heli_8_xj200: GuidedAT_APC_xj200 {
		count = 8;
		ammo = GuidedAT_Heli_xj200;
		reloadTime = 0.5;
		sound[]={Weapons\TOW,db-30,1};
		reloadSound[]={Weapons\missload,db-70,1};
		aiRateOfFire=4;
		aiRateOfFireDistance=1000;
	};
	class GuidedAT_Cobra_8_xj200: GuidedAT_Heli_8_xj200 {
		ammo = GuidedAT_Cobra_xj200;
	};
	class GuidedAT_Heli_12_xj200: GuidedAT_APC_xj200 {
		count = 12;
		ammo = GuidedAT_Heli_xj200
		reloadTime = 0.5;
		sound[]={Weapons\TOW,db-30,1};
		reloadSound[]={Weapons\missload,db-70,1};
		aiRateOfFire=4;
		aiRateOfFireDistance=1000;
	};
	class ATLauncherAir_xj200: HellfireLauncher {
		magazines[]={GuidedAT_Heli_8_xj200, GuidedAT_Cobra_8_xj200, GuidedAT_Heli_12_xj200};
		magazineReloadTime=10;
		aiRateOfFire=4;
		aiRateOfFireDistance=1000;
		multiplier = 1;
		aiDispersionCoefX=8;
		aiDispersionCoefY=8;
	};

	class HOT3Launcher_xj200: HellfireLauncher {
		ammo = HOT3Rocket_xj200;
		displayName = "HOT 3";
		displayNameMagazine = "HOT 3";
		shortNameMagazine = "HOT3";
		count = 8;
	};
	class PARS3Launcher_xj200: GuidedAT_Heli_8_xj200 {
		ammo = PARS3Rocket_xj200;
		displayName="PARS 3 LR";
		displayNameMagazine="PARS 3 LR";
		shortNameMagazine="PARS3";
		count = 8;
	};

	// Rocket Launcher
	class Zuni_MaverickLike_xj200: ZuniLauncher38 {
		ammo = "Zuni_MaverickLike_xj200";
		count = 8;
		magazineReloadTime = 0.1;
	}
	class ZuniLauncherOH_xj200: ZuniLauncher38 {
		opticsZoomMin = 0.08;
		opticsZoomMax = 0.84;
		count = 14;
		reloadTime = 0.15;
	};
	class Rocket57x14_xj200: Rocket57x64 {
		count=14
	};
	class ZuniLauncherShip_xj200: MachineGun12_7_xj200 {
		scopeWeapon = 2;
		scopeMagazine = 2;
		ammo = "Zuni";
		displayName = "$STR_DN_FFAR";
		displayNameMagazine = "$STR_MN_FFAR";
		shortNameMagazine = "$STR_SN_FFAR";
		count = 14;
		reloadTime = 0.1;
		aiRateOfFire = 0.4;
		aiRateOfFireDistance = 1000;
		sound[] = {"Weapons\rocket1",0.031622775,1};
		reloadSound[] = {"Weapons\missload",0.00031622773,1};
		initSpeed = 44;
		autoFire = 1;
	};
	class RocketLauncherShip_xj200: ZuniLauncherShip_xj200 {
		ammo = "Rocket57";
		displayName = "$STR_DN_ROCKET_57";
		displayNameMagazine = "$STR_MN_ROCKET_57";
		shortNameMagazine = "$STR_SN_ROCKET_57";
		count = 14;
	};
	
	class SNEB70Launcher_xj200: ZuniLauncher38 {
		ammo = "SNEB70_xj200";
		displayName="SNEB70";
		displayNameMagazine="SNEB70";
		shortNameMagazine="SNEB70";
	};
	
	// Tomahawk & Raguda launcher
	class Tomahawk_xj200: MaverickLauncher {
		ammo="tomahawk_xj200";
		displayName="BGM-109 Tomahawk";
		displayNameMagazine="BGM-109 Tomahawk";
		shortNameMagazine="BGM-109 Tomahawk";
		count=2;
	};
	class Raduga_xj200: Tomahawk_xj200 {
		displayName="Raduga Kh-65";
		displayNameMagazine="Raduga Kh-65";
		shortNameMagazine="Raduga Kh-65";
	};

	// Bomb Launcher
	class LaserGuidedBombLauncher_xj200: HellfireLauncher {
		picture = Hellfire;
		ammo = LaserGuidedBomb_xj200;
		displayName = $STR_DN_LASER_BOMB;
		displayNameMagazine = $STR_DN_LASER_BOMB;
		shortNameMagazine = $STR_DN_LASER_BOMB;
		count = 8;
		reloadTime = 0.5;
		sound[] = {"",0.0316228,1};
		reloadSound[] = {"",0.000316228,1};
		initSpeed = 0;
		aiRateOfFire = 13;
		aiRateOfFireDistance = 2500;
	};
	class LGBLauncher_xj200: LaserGuidedBombLauncher_xj200 {
		magazines[]={Mag_LGB_2_xj200, Mag_LGB_4_xj200, Mag_LGB_8_xj200};
	};
	class Mag_LGB_2_xj200: LaserGuidedBombLauncher_xj200 {
		displayName = "LGB";
		displayNameMagazine = "LGB";
		shortNameMagazine = "LGB";
		ammo = LaserGuidedBomb_xj200;
		count = 2;
		reloadTime = 0.1;
	};
	class Mag_LGB_4_xj200: Mag_LGB_2_xj200 {
		count = 4;
	};
	class Mag_LGB_8_xj200: Mag_LGB_2_xj200 {
		count = 8;
	};
	class RKTHunter_BombRail_xj200: HellfireLauncher {
		ammo=RKTHunter_Bomb_xj200;
		displayName="500lb Bomb";
		displayNameMagazine="Bomb";
		shortNameMagazine="Bomb";
		sound[]={"",1,1};
		count=14;
		initspeed=10;
		reloadTime =2;
		aiRateOfFire=10.0;
		aiRateOfFireDistance=0.01;
		maxLeadSpeed=1500;
	};

	
//EOF