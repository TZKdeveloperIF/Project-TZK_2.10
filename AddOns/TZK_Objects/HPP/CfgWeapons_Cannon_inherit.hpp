// Cannon
	class Cannon30HE_BMP2_xj200: Default {
		scopeWeapon = 0;
		scopeMagazine = 2;
		primary = 0;
		autoFire = 1;
		shotFromTurret = 1;
		displayName = $STR_DN_ADD_BMP2_HE;
		displayNameMagazine = $STR_DN_ADD_BMP2_HE;
		shortNameMagazine = $STR_DN_ADD_BMP2_HE;
		nameSound = shell;
		ammo = Cannon30HE_BMP2_xj200;
		count = 250;
		multiplier = 2;
		reloadTime = 0.18;
		initSpeed = 1000;
		sound[] = {"\bmp2\bmp2_cannon",3.16228,1};
		flashSize = 1.1;
		maxLeadSpeed = 450;
		optics = 1;
		ffCount = 1;
	};
	class Cannon30AP_BMP2_xj200: Cannon30HE_BMP2_xj200 {
		shotFromTurret = 1;
		ammo = Cannon30AP_BMP2_xj200;
		displayName = $STR_DN_ADD_BMP2_AP;
		displayNameMagazine = $STR_DN_ADD_BMP2_AP;
		shortNameMagazine = $STR_DN_ADD_BMP2_AP;
		nameSound = heat;
	};
	class Cannon30_BMP2_xj200: Default {
		scopeWeapon = 2;
		scopeMagazine = 0;
		shotFromTurret = 1;
		displayName = $STR_DN_GUN;
		sound[] = {"\bmp2\bmp2_cannon",3.16228,1};
		reloadSound[] = {"Weapons\reload",0.000316228,1};
		backgroundReload = 1;
		ffMagnitude = 1;
		ffFrequency = 5;
		magazines[]={Cannon30HE_BMP2_xj200,Cannon30AP_BMP2_xj200};
	};

	class Cannon30HE_Kamov_xj200: Default {
		scopeWeapon=0
		scopeMagazine=2
		primary=0
		autoFire=1
		shotFromTurret=1
		displayName="$STR_DN_OUT_V80_HE";
		displayNameMagazine="$STR_DN_OUT_V80_HE";
		shortNameMagazine="$STR_DN_OUT_V80_HE";
		nameSound="shell";
		ammo="Cannon30HE_Kamov_xj200";
		count=250
		multiplier=2
		reloadTime=0.180000;
		initSpeed=1000
		sound[]={"\o\vehl\v80_cannon",3.162278,1};
		flashSize=1.100000;
		maxLeadSpeed=450
		optics=1
		ffCount=1
	};
	class Cannon30AP_Kamov_xj200: Cannon30HE_Kamov_xj200 {
		shotFromTurret=1
		ammo="Cannon30AP_Kamov_xj200";
		displayName="$STR_DN_OUT_V80_AP";
		displayNameMagazine="$STR_DN_OUT_V80_AP";
		shortNameMagazine="$STR_DN_OUT_V80_AP";
		nameSound="heat";
	};
	class Cannon30_Kamov_xj200: Default {
		scopeWeapon=2
		scopeMagazine=0
		shotFromTurret=1
		displayName="$STR_DN_GUN";
		sound[]={"\o\vehl\v80_cannon",3.162278,1};
		reloadSound[]={"Weapons\reload",0.000316,1};
		backgroundReload=1
		ffMagnitude=1
		ffFrequency=5
		magazines[]={"Cannon30AP_Kamov_xj200","Cannon30HE_Kamov_xj200"};
	};

	class Cannon25HE_xj200: Default {
		scopeWeapon = 2;
		scopeMagazine = 2;
		shotFromTurret = 1;
		autoFire = 1;
		magazineReloadTime = 1.5;
		displayName = $STR_DN_ADD_M2A2_25;
		displayNameMagazine = $STR_DN_ADD_M2A2_25;
		shortNameMagazine = $STR_DN_ADD_M2A2_25;
		ammo = Cannon25HE_xj200;
		count = 300;
		reloadTime = 0.14;
		initSpeed = 1000;
		sound[] = {"\m2a2\cannon.wss",3.16228,1};
		flashSize = 1.1;
		maxLeadSpeed = 450;
		optics = 1;
		ffCount = 1;
		multiplier = 2;
	};
	class VulcanCannon_xj200: MachineGun30 {
		ammo = Bullet4x20_xj200;
		count = 2000;
		multiplier = 4;
		initSpeed = 900;
		flashSize = 1.2;
		reloadTime = 0.15;
		displayName = $STR_DN_VULCAN20;
		displayNameMagazine = $STR_DN_VULCAN20;
		shortNameMagazine = $STR_DN_VULCAN20;
		dispersion = 0.0015;
		maxLeadSpeed = 900;
		aiRateOfFire = 0.3;
		aiRateOfFireDistance = 3000;
	};

	class M197_xj200: MachineGun30 {
		sound[]={"\WP_sound\m197.wss",4,1};
		flashSize=1.1;
		soundContinuous=1;
	};

	class Cannon_Heli_xj200: VulcanCannon_xj200 {
		count = 2000;
		magazines[]={Mag_Heli_2000_xj200, Mag_Heli_Rocket_2000_xj200};
		magazineReloadTime=1;
		aiDispersionCoefX=10.0;
		aiDispersionCoefY=5.0;
	};
	class Mag_Heli_2000_xj200: VulcanCannon_xj200 {
		displayName = "Cannon"
		displayNameMagazine = "Cannon"
		shortNameMagazine = "Cannon"
		count = 2000;
		ammo = Cannon_Heli_xj200;
		reloadTime=0.1;
		aiRateOfFire=0.1;
		aiRateOfFireDistance=1000;
		multiplier=1;
		sound[]={"Weapons\automatic_cannon",db10,1};
	};
	// A cannon mag whose ammo has a simulation "shotmissile" thus will be fired from rocket launcher
	class Mag_Heli_Rocket_2000_xj200: VulcanCannon_xj200 {
		displayName = "Cannon"
		displayNameMagazine = "Cannon"
		shortNameMagazine = "Cannon"
		count = 2000;
		ammo = Cannon_Heli_Rocket_xj200;
		reloadTime=0.1;
		aiRateOfFire=0.1;
		aiRateOfFireDistance=1000;
		multiplier=1;
		sound[]={"Weapons\automatic_cannon",db10,1};
	};

	class Cannon_20HE_xj200: Cannon30_Kamov_xj200 {
		magazines[] ={Mag_20HE_800_01_xj200, Mag_20HE_800_03_xj200};
		magazineReloadTime=1.0;
		aiDispersionCoefX=10.0;
		aiDispersionCoefY=10.0;
	};
	class Cannon_20AP_xj200: Cannon30_Kamov_xj200 {
		magazines[] ={Mag_20AP_200_01_xj200, Mag_20AP_200_03_xj200};
		magazineReloadTime=1.0;
		aiDispersionCoefX=10.0;
		aiDispersionCoefY=10.0;
	};
	class CannonE_20HE_xj200: Cannon_20HE_xj200 {};
	class CannonE_20AP_xj200: Cannon_20AP_xj200 {};
	class Mag_20HE_800_01_xj200: Cannon30HE_Kamov_xj200 {
		count = 800;
		reloadTime=0.1;
		displayName = "20mm Cannon HE"; displayNameMagazine = "20mm HE"; shortNameMagazine = "20mm HE";
		ammo = Cannon_20HE_xj200;
		aiRateOfFire = 0.1;
		aiRateOfFireDistance = 500;
		multiplier = 1;
	};
	class Mag_20HE_800_03_xj200: Mag_20HE_800_01_xj200 {
		reloadTime=0.3;
	};
	class Mag_20AP_200_01_xj200: Cannon30AP_Kamov_xj200 {
		count = 200;
		reloadTime=0.1;
		displayName = "20mm Cannon AP"; displayNameMagazine = "20mm AP"; shortNameMagazine = "20mm AP";
		ammo = Cannon_20AP_xj200;
		aiRateOfFire = 0.1;
		aiRateOfFireDistance = 500;
		multiplier = 1;
	};
	class Mag_20AP_200_03_xj200: Mag_20AP_200_01_xj200 {
		reloadTime=0.3;
	};

	class Cannon_30APHE_xj200: Cannon_20HE_xj200 {
		magazines[] ={Mag_30APHE_1200_01_xj200};
	};
	class Mag_30APHE_1200_01_xj200: Mag_20AP_200_01_xj200 {
		reloadTime=0.1;
		count = 1200;
		displayName = "30mm AP/HE"; displayNameMagazine = "30mm AP/HE"; shortNameMagazine = "30mm AP/HE";
		ammo = Cannon_30APHE_xj200;
		sound[]={"Weapons\automatic_cannon",db-30,1};
	};

	class RMKHETiger_DVD_xj200: MachineGun7_6 {
		scopeWeapon=2;
		scopeMagazine=0;

		ammo = "Mi24HEammo_DVD_xj200";
		autoFire=1;
		shotFromTurret=1;
		multiplier=1;
		reloadTime=0.1;
		magazineReloadTime=2.5;
		displayName="RMK 30mm HE";
		displayNameMagazine="30mm HE";
		shortNameMagazine="30mm HE";
		maxLeadSpeed=800;
		dispersion=0.0010;
		sound[]={"\TZK_Objects\Sound\DVD_Config\20mm_fire.wss", db+0.1, 1};
		soundContinuous=false;
		ffCount=30;

		aiRateOfFire=0.2;
		aiRateOfFireDistance=500;

		magazines[]={"Mag_RMKHETiger_400_xj200"};
	};
	class Mag_RMKHETiger_400_xj200: RMKHETiger_DVD_xj200 { 
		scopeWeapon=0;
		scopeMagazine=2;
		count=400;
	};	
	class RMKAPTiger_DVD_xj200: RMKHETiger_DVD_xj200 {
		scopeWeapon=2;
		scopeMagazine=0;

		ammo = "BMKAP30_DVD_xj200";
		displayName="RMK 30mm AP";
		displayNameMagazine="30mm AP";
		shortNameMagazine="30mm AP";

		magazines[]={"Mag_RMKAPTiger_300_xj200"};
	};
	class Mag_RMKAPTiger_300_xj200: RMKAPTiger_DVD_xj200 {
		scopeWeapon=0;
		scopeMagazine=2;
		count=300;
	};	

	class MachineGun30PlaneLGB_xj200 : MachineGun30A10Burst {
		canlock=2;
		ammo = "Bullet30PlaneLGB_xj200";
	};

//EOF