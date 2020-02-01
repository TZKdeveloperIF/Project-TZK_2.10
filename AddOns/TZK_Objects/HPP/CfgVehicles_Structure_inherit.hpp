// Structures. Mainly used for defense.

// Mortar Structure
	class Mortar5Base_xj200: M2StaticMG {
		scope = private;
		displayName="Mortar 60mm";
		picture="\PackMortar\artyu.jpg";
		cost=15000;
		weapons[]={"Mortar4_xj200"};
		magazines[]={"Mortar4Mag_xj200", "Mortar4Mag_xj200", "Mortar4Mag_xj200", "Mortar4Mag_xj200", "Mortar4Mag_xj200", "Mortar4Mag_xj200", "Mortar4Mag_xj200", "Mortar4Mag_xj200", "Mortar4Mag_xj200", "Mortar4Mag_xj200"};
		side=1;
		armor=100;
		vehicleClass = "TZK_Units_200"
		crew = "SoldierW";
		sensitivity=3;
		irScanRange=800;
		irScanGround=true;
		hasCommander=0;
		threat[]={1,0.100000,0.100000};
		armorStructural=1.000000;
		icon="kulomet.paa";
		commanderAction="ManActmortarGunner";
		commanderInAction="ManActmortarGunner";
		gunnerAction="ManActUpAction";
		gunnerInAction="ManActUpAction";
		gunnerOpticsModel="\PackMortar\optika_MRT.p3d";
		class GunFire: WeaponCloudsMGun{};
		class GunClouds: mortar1Clouds {};
		class MGunFire: WeaponFireMGun {};
		class MGunClouds: WeaponCloudsMGun {};
		class Turret {
			gunAxis = "osahlavne";
			turretAxis = "osaveze";
			soundServo[]={\PackMortar\mortar_move.ogg,0.3,0.7};
			gunBeg = "usti hlavne";
			gunEnd = "konec hlavne";
			body = "OtocVez";
			gun = "OtocHlaven";
			minElev=-10;
			maxElev=+90;
			minTurn=-180;
			maxTurn=+180;
		};
		class ViewOptics {
			initAngleX=+15; minAngleX=-20; maxAngleX=+30;
			initAngleY=0; minAngleY=-70; maxAngleY=+70;
			initFov=0.5; minFov=0.5; maxFov=0.5;
		};

		class EventHandlers {
			Fired = "_this exec {\TZK_Objects\Scripts_CTI\ImpactPointMarker.sqs}";
		};
	};
	class Mortar5_W_xj200 : Mortar5Base_xj200 {
		scope = public;
        model="\PackMortar\mortar5";
		side = TWest;
		irScanRangeMin = 500
		irScanRangeMax = 4000
		irScanToEyeFactor = 0.616
		irScanGround = true;
	};
	class Mortar5_E_xj200 : Mortar5_W_xj200 {
		side = TEast; crew = "SoldierE";
		
	};
	class Building_xj200: Building {
		audible=1; // audible - bigger - better heard
		cost = 10000000;
		accuracy=0.5
		camouflage=0.1
		irTarget = true

		vehicleClass = "TZK_Units_200";
		scope = private;
		side = TCivilian;
		type = VArmor;
		ladders[] = {};
		threat[]={0, 0, 0};
	};
	class CommCenter_xj200: Building_xj200 {
		armor = 200;
		accuracy=1
		displayName = "Comm Center";
		model = "budova5";
		scope = public;
	};
	class CommCenterW_xj200: CommCenter_xj200 {
		side = TWest
		displayName = "Comm Center West"
		accuracy=2
	};
	class CommCenterE_xj200: CommCenter_xj200 {
		side = TEast
		displayName = "Comm Center East"
		accuracy=2
	};

	class Mortar6_W_xj200: Mortar5_W_xj200 {
		gunnerOpticsModel="\TZK_Objects\Model\optika_Mortar6_xj200.p3d";
		displayName="Mortar 60mm+";
		weapons[]={"Mortar6_xj200"};
		magazines[]={"Mortar6Mag_xj200", "Mortar6Mag_xj200", "Mortar6Mag_xj200", "Mortar6Mag_xj200", "Mortar6Mag_xj200", "Mortar6Mag_xj200", "Mortar6Mag_xj200", "Mortar6Mag_xj200", "Mortar6Mag_xj200", "Mortar6Mag_xj200"};
	};
	class Mortar6_E_xj200: Mortar6_W_xj200 {
		side = TEast; crew = "SoldierE";
	};
// M2 MG
	class StaticMG_12mm7_xj200: M2StaticMG {
		displayName = "Static MG 12.7mm"
		side = TCivilian;
		cost = 100000;
		accuracy = 0.1;
		vehicleClass = "TZK_Units_200";
		secondaryExplosion = 1;
		weapons[] = {StaticMG_12mm7_xj200};
		magazines[]={
			Mag_12mm7_100_xj200,
			Mag_12mm7_100_xj200,
			Mag_12mm7_100_xj200,
			Mag_12mm7_100_xj200,
			Mag_12mm7_100_xj200,
			Mag_12mm7_100_xj200,
			Mag_12mm7_100_xj200,
			Mag_12mm7_100_xj200,
			Mag_12mm7_100_xj200,
			Mag_12mm7_100_xj200,
		};
		threat[]={1, 0.5, 1};
		// hideUnitInfo=true;
	};
	class StaticMG_12mm7_W_xj200: StaticMG_12mm7_xj200 {
		displayName = "Static MG 12.7mm West";
		side = TWest;
		accuracy = 0.1;
	};
	class StaticMG_12mm7_E_xj200: StaticMG_12mm7_xj200 {
		displayName = "Static MG 12.7mm East";
		side = TEast; crew = "SoldierE";
		accuracy = 0.1;
	};

// M46
	class M46_W_DKMM_xj200: M2StaticMG {
		side = TWest; vehicleClass = "TZK_Units_200";
		insidesoundcoef = 1;
		type = "Varmor";
		displayName = "M46 Fieldgun";
		model = "\DKMM_M46\DKMM_M46.p3d";
		scope = 2;
		camouflage = 3.1;
		namesound = "weapon";
		threat[] = {0.9,0.95,0.05};
		weapons[] = {"Gun130_DKMM_xj200"};
		magazines[] = {"AP130_DKMM_xj200","HE130_DKMM_xj200"};
		picture = "\dkmm_m46\m46.paa";
		icon = "\DKMM_M46\defgun.paa";
		cost = 110000;
		extCameraPosition[] = {0,2.5,-12};
		gunnerOpticsModel = "optika_tanke_auxiliary";
		gunnerCanSee = "2 + 4 + 8 + 16";
		irScanRangeMin = 500
		irScanRangeMax = 4000
		irScanToEyeFactor = 1
		irTarget = 1;
		irScanGround = 1;
		getInRadius = 3.0;
		unitInfoType = "UnitInfoSoldier";
		hideUnitInfo = 0;
		nightVision = 1;
		outGunnerMayFire = 1;
		viewGunnerInExternal = 1;
		gunnerAction = "ManActDKMM_M46_gunner";
		gunnerInAction = "ManActDKMM_M46_gunner";
		castGunnerShadow = 1;
		armor = 110;
		crew = "SoldierW";
		gunnerhiddenwanted = 0;
		class Reflectors {};
		class HitHull {
			armor = 0.4;
			material = 50;
			name = "hull";
			passThrough = 1;
		};
		class HitTurret {
			armor = 0.9;
			material = 51;
			name = "turet";
			passThrough = 1;
		};
		class HitGun {
			armor = 0.75;
			material = 52;
			name = "gun";
			passThrough = 1;
		};
		armorHull = 0.4;
		armorTurret = 0.2;
		armorGun = 0.2;
		class Turret {
			gunAxis = "OsaHlavne";
			turretAxis = "OsaVeze";
			gunBeg = "usti hlavne";
			gunEnd = "konec hlavne";
			minElev = -10;
			maxElev = "+20";
			minTurn = -30;
			maxTurn = "+30";
			soundservo[] = {};
			body = "OtocVez";
			gun = "OtocHlaven";
		};
		class animations {
			class gun_rec {
				type = "rotation";
				animperiod = 0.1;
				selection = "barrel_rec";
				axis = "osa_barrel_rec";
				angle0 = 0;
				angle1 = 0.0038;
			};
			class bodyrec {
				type = "rotation";
				animperiod = 0.1;
				selection = "body_rec";
				axis = "osa_body_rec";
				angle0 = 0;
				angle1 = 0.00313;
			};
		};
		class EventHandlers {
			Init = "[_this select 0] exec {\dkmm_m46\dkmm_m46_init.sqs}; TracerCnt = 0";
			Fired = "[_this select 0] exec {\dkmm_m46\dkmm_blowback.sqs}; _this exec {\TZK_Objects\Scripts\FiredEffect\Howitzer.sqs}; [_this select 0, nearestObject[_this select 0, _this select 4], _this ] exec {Player\LimitWeaponRange.sqs}";
		};
	};
	class M46_E_DKMM_xj200: M46_W_DKMM_xj200 {
		side = TEast; crew = "SoldierE";
	};
	class M46_W_DKMM_Art_xj200: M46_W_DKMM_xj200 {
		class UserActions {
			class BulletCamTurnON : UA_BulletCamTurnON {}; class BulletCamTurnOFF : UA_BulletCamTurnOFF {};
		};
		class EventHandlers {
			Init = "[_this select 0] exec {\dkmm_m46\dkmm_m46_init.sqs}; TracerCnt = 0";
			Fired = "[_this select 0] exec {\dkmm_m46\dkmm_blowback.sqs}; if (player == gunner (_this select 0)) then { [ nearestObject[_this select 0, _this select 4] ] exec {\TZK_Objects\Scripts_CTI\TrackBullet.sqs} }; _this exec {\TZK_Objects\Scripts\FiredEffect\Howitzer.sqs}";
		};
	};
	class M46_E_DKMM_Art_xj200: M46_W_DKMM_Art_xj200 {
		side = TEast; crew = "SoldierE";
	};

	class M46_W_xj200: M46_W_DKMM_xj200 {
		// M46 without recoil and smoke effect
		scope = protected;
		class EventHandlers {
			Init = "TracerCnt = 0";
			Fired = "_this exec {\TZK_Objects\Scripts\FiredEffect\Howitzer.sqs}; [_this select 0, nearestObject[_this select 0, _this select 4], _this ] exec {Player\LimitWeaponRange.sqs}";
		};
	};
	class M46_E_xj200: M46_W_xj200 {
		side = TEast; crew = "SoldierE";
	};
	class M46_W_Art_xj200: M46_W_DKMM_xj200 {
		// M46 without recoil and smoke effect
		scope = protected;
		class UserActions {
			class BulletCamTurnON : UA_BulletCamTurnON {}; class BulletCamTurnOFF : UA_BulletCamTurnOFF {};
		};
		class EventHandlers {
			Init = "TracerCnt = 0";
			Fired = "if (player == gunner (_this select 0)) then { [ nearestObject[_this select 0, _this select 4] ] exec {\TZK_Objects\Scripts_CTI\TrackBullet.sqs} }; _this exec {\TZK_Objects\Scripts\FiredEffect\Howitzer.sqs}";
		};
	};
	class M46_E_Art_xj200: M46_W_Art_xj200 {
		side = TEast; crew = "SoldierE";
	};
	
// Howitzer
	class M109_Static_xj200: M2StaticMG {
		scope = public; displayName = "M109 Fieldgun"; vehicleClass = "TZK_Units_200";
		side = TWest; crew = "SoldierW";
		insidesoundcoef = 1;
		type = "Varmor";
		model="\TZK_Objects\Model\M109A6_CoC.p3d";
	//	model = "\TZK_Objects\Model\T80.p3d";
		
		hideProxyInCombat = 1; // Set gunner in-vehicle in Howitzer Structure.
		outGunnerMayFire = 1;
		viewGunnerInExternal = 1;
		
		gunnerAction="ManActBMPGunnerOut";
		gunnerInAction="ManActBMPGunner";
		
		castGunnerShadow = 1;		
		gunnerhiddenwanted = 0;
		
		camouflage = 8;
		namesound = "tank";
		threat[] = {0.9,0.95,0.05};
		armor = 175; //can survive from 1 RPG but not 2 AA/9k32
		weapons[] = {"Gun155_xj200", "MachineGun12_7_xj200"};
		magazines[]={"DKMM_Gun155AP_xj200","DKMM_Gun155HE_xj200", "MachineGun12_7_xj200"};
		
		picture="\TZK_Objects\Texture\Paladin.paa";
		icon="\TZK_Objects\Texture\Sprut_icon.paa";
		cost=750000;
		extCameraPosition[] = {0,2.5,-12};
		gunnerOpticsModel = "optika_tanke_auxiliary";
		CommanderHasOptics=0;
		hasGunner = 1;
		hascommander = 0;
		
		gunnerCanSee = "2 + 4 + 8 + 16";
		irScanRangeMin = 500; irScanRangeMax = 4000; irScanToEyeFactor = 0.616; irScanGround = true;
		irTarget = 1;
		getInRadius = 3.0;
		unitInfoType = UnitInfoTank; // this is M109 parameter
		hideUnitInfo = 0;
		nightVision = 1;
		
		
		class HatchDriver {
			selection = "poklop_driver";
			axis = "osa_poklop_driver";
			angle=180;
		};
		class HatchCommander {
			selection = "poklop_commander";
			axis = "osa_poklop_commander";
			angle=110;
		};
		class HatchGunner {
			selection = "poklop_gunner";
			axis = "osa_poklop_gunner";
			angle=100;
		};
		class TurretBase {
			gunaxis = "OsaHlavne";
			turretaxis = "OsaVeze";
			soundServo[]={"\CoC_Arty\M109\servo.wss",0.18,1};
			gunBeg="usti hlavne";
			gunEnd="konec hlavne";
			minElev=-4;
			maxElev=68;
			minTurn=-360;
			maxTurn=360;
			body="OtocVez";
			gun="OtocHlaven";
		};
		class Turret: TurretBase {};
		class ComTurret {
			turretAxis = "OsaVelitele";
			gunAxis = "OsaHlavneVelitele";
			soundServo[]={Vehicles\gun_elevate,db-70,1.2};
			gunBeg = "usti hlavne";
			gunEnd = "konec hlavne";
			minElev=-4; maxElev=+20;
			minTurn=-360; maxTurn=+360;
			body = "OtocVelitele";
			gun = "OtocHlavenVelitele";
		};

		class HitEngine {armor=0.8;material=60;name=engine;passThrough=1;}
		class HitHull {armor=1;material=50;name=hull;passThrough=1;};
		class HitTurret {armor=0.8;material=51;name=turret;passThrough=1;};
		class HitGun {armor=0.6;material=52;name=gun;passThrough=1;};
		class HitLTrack {armor=0.6;material=53;name=pasL;passThrough=1;};
		class HitRTrack {armor=0.6;material=54;name=pasP;passThrough=1;};

		armorHull=1;
		armorTurret=0.9;
		armorGun=0.8; // hitpoints (relative to overall armor)
		armorEngine=0.8;
		armorLights=0.2;
		armorTracks=0.6;

		class EventHandlers : EH_Howitzer {
			Fired = "_this exec {\TZK_Objects\Scripts\FiredEffect\Howitzer.sqs}; [_this select 0, nearestObject[_this select 0, _this select 4], _this ] exec {Player\LimitWeaponRange.sqs}";
		};
	};
	class PLZ05_Static_xj200: M2StaticMG {		
		scope = public; displayName = "PLZ05 Fieldgun"; vehicleClass = "TZK_Units_200";
		side = TEast; crew = "SoldierE";
		accuracy=0.700000;
		
		model = "\TZK_Objects\Model\PLZ05.p3d";
		picture="\TZK_Objects\Texture\PLZ05.paa";
		hiddenSelections[] = {"n1", "zhijia"};
		armor=200;
		weapons[] = {"PLA155Gun_xj200", "MachineGun12_7_xj200"};
		magazines[]={"PLA155AP_xj200", "PLA155HE_xj200", "MachineGun12_7_xj200"};
		
		hideProxyInCombat = 1; // Set gunner in-vehicle in Howitzer Structure.
		outGunnerMayFire = 1;
		viewGunnerInExternal = 1;
		gunnerInAction = ManActT80Gunner;
		gunnerAction = "ManActT72GunnerOut";
		castGunnerShadow = 1;
		gunnerhiddenwanted = 0;
		
		insidesoundcoef = 1;
		type = "Varmor";
		camouflage = 3.1;
		namesound = "weapon";
		threat[] = {0.9,0.95,0.05};
		icon = "\DKMM_M46\defgun.paa";
		cost = 110000;
		extCameraPosition[] = {0,2.5,-12};
		gunnerOpticsModel = "optika_tanke_auxiliary";
		gunnerCanSee = "2 + 4 + 8 + 16";
		irTarget = 1;
		getInRadius = 3.0;
		unitInfoType = "UnitInfoSoldier";
		hideUnitInfo = 0;
		nightVision = 1;

		mapSize = 10;
		
		irScanRangeMin = 500; irScanRangeMax = 4000; irScanToEyeFactor = 0.616; irScanGround = true;
		
		class GunFire : WeaponFireGun {
			cloudletDuration = 0.4;		
			cloudletAnimPeriod = 1.50;
			cloudletSize = 6.0;			
			cloudletColor[] = {1, 1, 1, 1};			
			size = 9;			
		};
		class GunClouds : WeaponCloudsGun {
			cloudletDuration = 0.6;
			cloudletAnimPeriod = 1.50;
			cloudletSize = 6.0;			
			cloudletColor[] = {1, 1, 1, 1};
			size = 9;
			sourceSize = 0.5;			
		};
		
		class HatchGunner {
			selection = "poklop_gunner";
			axis = "osa_poklop_gunner";
			angle = 100;
		};
		class HatchCommander {
			selection = "poklop_Commander";
			axis = "osa_poklop_Commander";
			angle = 165;
		};
		class Hatchdriver {
			selection = "poklop_driver";
			axis = "osa_poklop_driver";
			angle = 100;
		};
		
		class TurretBase {
			gunAxis = "osahlavne";
			turretAxis = "osaveze";
			soundServo[]={"\TZK_Objects\Sound\PaotaZTZ99.wav",0.0031622775,1};

			gunBeg = "usti hlavne";
			gunEnd = "konec hlavne";
			
			body = "OtocVez";
			gun = "OtocHlaven";

			minElev=-3;
			maxElev=+65;
			minTurn=-360;
			maxTurn=+360;
		};
		class Turret: TurretBase {};
		
		class EventHandlers : EH_Howitzer {
			Fired = "_this exec {\TZK_Objects\Scripts\FiredEffect\Howitzer.sqs}; [_this select 0, nearestObject[_this select 0, _this select 4], _this ] exec {Player\LimitWeaponRange.sqs}";
		};
	};
	
//EOF