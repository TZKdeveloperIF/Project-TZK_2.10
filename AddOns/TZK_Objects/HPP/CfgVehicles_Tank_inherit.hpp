// Tanks
// Basic Tank Definations Used For Inherit Only. Besides it seems necessary to set a base class to inherit to avoid/fix some problem like model and Air's armor/accuracy.
	class M1A1_Base_xj200: M1Abrams {
		scope = private; displayName = "M1A1"; vehicleClass = "TZK_Units_200";
	//	model = "M1_abrams"; picture = "iabrams"; // Model and Picture is important in CTI while Icon isn't.
		threat[] = {1, 1, 0.5}; maxSpeed = 72; accuracy = 1.90;
		brakeDistance= 14; camouflage = 8; fuelCapacity = 700; // camouflage should be 8 for tanks.
		
		class HitEngine {armor=0.8;material=50;name=engine;passThrough=1;};
		class HitHull {armor=0.9;material=50;name=hull;passThrough=1;};
		class HitTurret {armor=1;material=50;name=turet;passThrough=1;};
		class HitGun {armor=1;material=50;name=gun;passThrough=1;};
		class HitLTrack {armor=0.6;material=53;name=pasL;passThrough=1;};
		class HitRTrack {armor=0.6;material=54;name=pasP;passThrough=1;};
		armorHull=1; armorTurret=1; armorGun=1; armorEngine=0.9; armorLights=0.4; armorTracks=0.6;

		weapons[] = {"M1Gun_xj200","M1MG_xj200"};
		magazines[]={"M1Sabot_xj200","M1Heat_xj200","MachineGun12_7_xj200","MachineGun12_7_xj200","CoaxW_xj200"};
		
		irScanRangeMin = 500; irScanRangeMax = 4000; irScanToEyeFactor = 0.616; irScanGround = true;
		class UserActions {};
		class EventHandlers : EH_Tank {};
	};
	class T80_Base_xj200: T80 {
		scope = private; displayName = "T80"; vehicleClass = "TZK_Units_200";
	//	model = "T80.p3d"; picture = "it80"; // Model and Picture is important in CTI while Icon isn't.
		threat[] = {1, 1, 0.5}; maxSpeed = 70; accuracy = 1.90;
		brakeDistance= 14; camouflage = 8; fuelCapacity = 700;
		cost = 4000000; armor = 1500; armorStructural = 2; // Necessary for T80 to redefine cost and armor in CTI.
		class HitEngine {armor=0.8;material=50;name=engine;passThrough=1;};
		class HitHull {armor=0.9;material=50;name=hull;passThrough=1;};
		class HitTurret {armor=1;material=50;name=turet;passThrough=1;};
		class HitGun {armor=1;material=50;name=gun;passThrough=1;};
		class HitLTrack {armor=0.6;material=53;name=pasL;passThrough=1;};
		class HitRTrack {armor=0.6;material=54;name=pasP;passThrough=1;};
		armorHull=1; armorTurret=1; armorGun=1; armorEngine=0.9; armorLights=0.4; armorTracks=0.6;
		
		weapons[] = {"T80Gun_xj200","MachineGun12_7_xj200"};
		magazines[]={"T80Sabot_xj200","T80Heat_xj200","MachineGun12_7_xj200","MachineGun12_7_xj200"};
		
		irScanRangeMin = 500; irScanRangeMax = 4000; irScanToEyeFactor = 0.616; irScanGround = true;
		class UserActions {
		//	class Equip9K119 : UA_Equip9K119 {};
		};
		class EventHandlers : EH_Tank {};
	};
	class T80Res_Base_xj200: T80Res {
		scope = private; accuracy = 0.5;
		class HitGun {armor=3;material=52;name=gun;passThrough=1;}; armorGun=3;
		class EventHandlers : EH_Tank {
			Init = "";
			Hit = "";
			IncomingMissile = "";
		};
	}

// WEST Heavy Tanks
	class M1A1_xj200: M1A1_Base_xj200 {
		//Strengthen M1A1's armor to T80N's level by increasing armor. Raise armorgun to 1.5 since M1A1's gun still too weak
		scope = public;
		model = "\TZK_Objects\Model\M1_abrams.p3d";
		driverCanSee = "1+4+8+16"; gunnerCanSee = "1+4+8+16"; // Special benifit for M1A1, M1A2
	//	model="M1_abrams.p3d";
	//	model = "\TZK_Objects\Model\M1_abrams.p3d"; for test only
		armor=1138;
		armorStructural= 2;
	/*	class Animations {
			class Recoil {
				type = rotation;
				animperiod = 0.05;
				selection = gunrec;
				axis = osa_gunrec;
				angle0 = 0.0;
				angle1 = 0.080000;
			};
			class Recoil2 {
				type = rotation;
				animperiod = 0.15;
				selection = gunrec;
				axis = osa_gunrec_R;
				angle0 = 0.0;
				angle1 = -0.080000;
			};
			class MultiRecoil1 {
				type = rotation;
				animperiod = 0.11;
				selection = osa_gunrec2;
				axis = osa_gunrec;
				angle0 = 0.0;
				angle1 = 1.570796;
			};
			class MultiRecoil2 {
				type = rotation;
				animperiod = 0.11;
				selection = osa_gunrec3;
				axis = osa_gunrec2;
				angle0 = 0.0;
				angle1 = 1.570796;
			};
			class MultiRecoil3 {
				type = rotation;
				animperiod = 0.15;
				selection = gunrec;
				axis = osa_gunrec3;
				angle0 = 0.0;
				angle1 = 0.02;
			};
		};
			*/
		class HitGun {armor=1.5;material=50;name=gun;passThrough=1;}; armorGun=1.5;
		class EventHandlers : EH_Tank {
		//	Fired = "_shot = nearestObject [_this select 0, _this select 4]; if (local _shot) then {_this exec {\TZK_Objects\Scripts\GunRecoil.sqs}}";
		//	Fired = "_shot = nearestObject [_this select 0, _this select 4]; if (local _shot) then {_this exec {\TZK_Objects\Scripts\FiredEffect\MultiGunRecoil.sqs}}";
		};
	};
	class M1A1_Art_xj200: M1A1_xj200 {
		displayName="M1A1 Art";
		irScanToEyeFactor = 1 // Allow Art Vehicles scan far.
		weapons[] = {"M1Gun_xj200","M1MG_xj200"};
		magazines[]={"M1Heat_xj200","M1Heat_xj200","MachineGun12_7_xj200","MachineGun12_7_xj200","CoaxW_xj200"};
		class EventHandlers : EH_ArtTank {};
		class UserActions {
			class BulletCamTurnON : UA_BulletCamTurnON {}; class BulletCamTurnOFF : UA_BulletCamTurnOFF {};
		};
	};
	class M1A2_Base_xj200: M1A1_Base_xj200 {
		displayName = "M1A2";
	};
	class M1A2_INQ_xj200: M1A2_Base_xj200 {
		scope = public; displayName="M1A2 SEP"; vehicleClass = "TZK_Units_200";
		armor=1500;
		armorStructural=2.0;
		class HitEngine {armor=0.8;material=60;name=engine;passThrough=1;};
		class HitHull {armor=1;material=50;name=hull;passThrough=1;};
		class HitTurret {armor=1;material=51;name=turet;passThrough=1;};
		class HitGun {armor=1.5;material=52;name=gun;passThrough=1;};
		armorGun=1.5;
		armorEngine=0.8;
		maxSpeed = 67;
		hiddenSelections[] = {"BS1","BS2","BS3","_mark","_chevron","_for"};
		gunnerOpticsColor[] = {0,0,0,1};
		commanderOpticsColor[] = {0,0,0,1};
		gunnerOpticsModel = "\INQ_M1\GunnerM1.zzz";
		commanderOpticsModel = "\INQ_M1\CommanderM1.zzz";
		driverCanSee = "1+4+8+16"; gunnerCanSee = "1+4+8+16"; // Special benifit for M1A1, M1A2
		
		weapons[] = {"M12Gun_xj200","M1MG_xj200"};
		magazines[]={"M12Sabot_xj200","M12Heat_xj200","MachineGun12_7_xj200","MachineGun12_7_xj200","CoaxW_xj200"};
		picture = "\TZK_Objects\Texture\M1A2_INQ.paa"
		
		soundEngine[]={"Vehicles\ModernIdle1",0.031622775,1};
		soundEnviron[]={"Vehicles\ModernRolling_Treads1",0.01,1};
		soundLandCrash[]={"Explosions\intoground",0.3162278,1};
		soundCrash[]={"Vehicles\crash_small2",0.3162278,1};
		soundGear[]={"Vehicles\Gear_Trans1",0.0031623,1};
		soundDammage[]={"Objects\alarm_loop1",0.01,1};
		model="\TZK_Objects\Model\M1A2_INQ.p3d";
	//	model="\TZK_Objects\Model\INQ_M1A2.p3d";
		forceHideGunner = 0;
		forceHideCommander = 0;
		hideWeaponsCargo = 1;
		gunnerAction = "ManActm1a1gunnerout";
		commanderAction = "ManActm1a2commanderout";
		class TurretBase {
			gunAxis = "OsaHlavne";
			turretAxis = "OsaVeze";
			soundServo[] = {"\TZK_Objects\sound\M1_Turret.wss",0.031622775,0.9};
			gunBeg = "usti hlavne";
			gunEnd = "konec hlavne";
			minElev = -6;
			maxElev = 18;
			minTurn = -360;
			maxTurn = 360;
			body = "OtocVez";
			gun = "OtocHlaven";
		};
		class Turret: TurretBase {};
		class ComTurret {
			turretAxis = "OsaVelitele";
			gunAxis = "OsaHlavneVelitele";
			gunBeg = "usti hlavne";
			gunEnd = "konec hlavne";
			soundServo[] = {"\TZK_Objects\sound\M1_Turret.wss",0.00031622775,1.08};
			minElev = -6;
			maxElev = 18;
			minTurn = -360;
			maxTurn = 360;
			body = "OtocVelitele";
			gun = "OtocHlavenVelitele";
		};

		class WeaponFireGun {
			cloudletDuration = 1.3;		// time to live (not including fades)
			cloudletAnimPeriod = 1.0; 	// animation speed
			cloudletSize = 2.0;
			cloudletAlpha = 1.0;
			cloudletGrowUp = 0.2;	// grow-up time
			cloudletFadeIn = 0.01;		// fade-in time
			cloudletFadeOut = 0.5;		// fade-out time
			cloudletAccY = 0;		// vertical acceleration
			cloudletMinYSpeed = -100;	// vertical speed range
			cloudletMaxYSpeed = 100;
			cloudletShape = "cl_fired";
			cloudletColor[] = {1, 1, 1, 0};
			// source parameters
			interval = 0.01;
			size = 6;
			sourceSize = 0.5;
			timeToLive = 0;

			initT = 4500;
			deltaT = -3000;
			class Table
			{
				class T0 {maxT = 0; color[] = {0.82, 0.95, 0.93, 0};}
				class T1 {maxT = 200; color[] = {0.75, 0.77, 0.9, 0};}
				class T2 {maxT = 400; color[] = {0.56, 0.62, 0.67, 0};}
				class T3 {maxT = 600; color[] = {0.39, 0.46, 0.47, 0};}
				class T4 {maxT = 800; color[] = {0.24, 0.31, 0.31, 0};}
				class T5 {maxT = 1000; color[] = {0.23, 0.31, 0.29, 0};}
				class T6 {maxT = 1500; color[] = {0.21, 0.29, 0.27, 0};}
				class T7 {maxT = 2000; color[] = {0.19, 0.23, 0.21, 0};}
				class T8 {maxT = 2300; color[] = {0.22, 0.19, 0.1, 0};}
				class T9 {maxT = 2500; color[] = {0.35, 0.2, 0.02, 0};}
				class T10 {maxT = 2600; color[] = {0.62, 0.29, 0.03, 0};}
				class T11 {maxT = 2650; color[] = {0.59, 0.35, 0.05, 0};}
				class T12 {maxT = 2700; color[] = {0.75, 0.37, 0.03, 0};}
				class T13 {maxT = 2750; color[] = {0.88, 0.34, 0.03, 0};}
				class T14 {maxT = 2800; color[] = {0.91, 0.5, 0.17, 0};}
				class T15 {maxT = 2850; color[] = {1, 0.6, 0.2, 0};}
				class T16 {maxT = 2900; color[] = {1, 0.71, 0.3, 0};}
				class T17 {maxT = 2950; color[] = {0.98, 0.83, 0.41, 0};}
				class T18 {maxT = 3000; color[] = {0.98, 0.91, 0.54, 0};}
				class T19 {maxT = 3100; color[] = {0.98, 0.99, 0.6, 0};}
				class T20 {maxT = 3300; color[] = {0.96, 0.99, 0.72, 0};}
				class T21 {maxT = 3600; color[] = {1, 0.98, 0.91, 0};}
				class T22 {maxT = 4200; color[] = {1, 1, 1, 0};}
			}
		};
		class WeaponCloudsGun {
			access = ReadOnlyVerified;
			// single cloudlet parameters
			cloudletDuration = 0.1;		// time to live (not including fades)
			cloudletAnimPeriod = 1.0; 	// animation speed
			cloudletSize = 1.0;
			cloudletAlpha = 2.0;
			cloudletGrowUp = 2;		// grow-up time
			cloudletFadeIn = 0.01;		// fade-in time
			cloudletFadeOut = 0.8;		// fade-out time
			cloudletAccY = 0.4;		// vertical acceleration
			cloudletMinYSpeed = 0.2;	// vertical speed range
			cloudletMaxYSpeed = 0.8;
			cloudletShape = "cl_basic";
			cloudletColor[] = {1, 1, 1, 0};
			// source parameters
			interval = 0.05;
			size = 2;
			sourceSize = 0.5;
			timeToLive = 0.1;

			initT = 0;
			deltaT = 0;
			class Table
			{
				class T0 {maxT = 0; color[] = {1, 1, 1, 0};}
			}
		};
		class WeaponCloudsMGun : WeaponCloudsGun {
			access = ReadOnlyVerified;

			cloudletGrowUp = 0.05;		// grow-up time
			cloudletFadeIn = 0;		// fade-in time
			cloudletFadeOut = 0.1;		// fade-out time
			cloudletDuration = 0.05;	// time to live (not including fades)

			cloudletAlpha = 0.3;

			cloudletAccY = 0;		// vertical acceleration
			cloudletMinYSpeed = -100;	// vertical speed range
			cloudletMaxYSpeed = 120;

			interval = 0.02;
			size = 0.3;
			sourceSize = 0.02;
		};
		class WeaponFireMGun : WeaponFireGun {
			cloudletDuration = 0;		// time to live (not including fades)
			cloudletGrowUp = 0.06;		// grow-up time
			cloudletFadeIn = 0.01;		// fade-in time
			cloudletFadeOut = 0.12;		// fade-out time

			interval = 0.006;
			size = 0.3;
			sourceSize = 0.02;

			initT = 3200;
			deltaT = -4000;
		};
		class GunFire : WeaponFireGun{};
		class GunClouds : WeaponCloudsGun{};
		class MGunFire : WeaponFireMGun{};
		class MGunClouds : WeaponCloudsMGun{};

		class Animations {
			class Recoil {
				animperiod = 0.1;
				selection = "recoil";
				axis = "osa_rec";
				angle0 = 0;
				angle1 = 0.006;
				type = "rotation";
			};
			class suspension {
				animperiod = 0.5;
				selection = "sus";
				axis = "sus_osa";
				angle0 = "-0.09";
				angle1 = 0.09;
				type = "rotation";
			};
			class suspension2 {
				animperiod = 0.5;
				selection = "sus2";
				axis = "sus2_osa";
				angle0 = "-0.09";
				angle1 = 0.09;
				type = "rotation";
			};
		};
		class EventHandlers: EH_Tank {
		//	init = "_this exec ""\INQ_M1\scripts\INQ_M1_Init.sqs""";
		};
	};
	class Leo2A6_Base_xj200: M1A1_Base_xj200 {
		scope = private; displayName = "Leopard 2A6"; vehicleClass = "TZK_Units_200";
		accuracy = 0.4;
		soundEngine[] = {"\TZK_Objects\Sound\LeoEngine.wss",0.031622775,1};
		soundEnviron[] = {"Vehicles\ModernRolling_Treads1",0.01,0.8};

		nameSound="tank";
		picture="\BWMOD_Leo2A6\pic\leopic.paa";
		maxSpeed = 70;
		armor=1500;
		forceHideGunner=1;
		unloadInCombat=2;

		gunnerOpticsModel = "\BWMOD_Leo2A6\Leo2A6_optik2";
		gunnerOpticsColor[] = {0, 0, 0, 1};

		commanderOpticsModel = "\BWMOD_Leo2A6\Leo2A6_optik";
		commanderOpticsColor[] = {0, 0, 0, 1};

		gunnerInAction = ManActBWMODLeo2A6Gun;

		driverAction = ManActBWMODLeo2A6DrvOut;
		driverInAction = ManActBWMODLeo2A6Drv;

		commanderAction = ManActBWMODLeo2A6CmdOut;
		commanderInAction = ManActBWMODLeo2A6Cmd;

		class ViewGunnerBase {
			initAngleX=5;
			minAngleX=-30;
			maxAngleX=30;
			initAngleY=0;
			minAngleY=-100;
			maxAngleY=100;
			initFov=0.550000;
			minFov=0.320000;
			maxFov=0.850000;
		};
		class Turret {
			gunAxis = "OsaHlavne";
			turretAxis = "OsaVeze";

			soundServo[]={"\TZK_Objects\Sound\LeoTurret.wss",0.0031622775,1};

			gunBeg = "usti hlavne";
			gunEnd = "konec hlavne";

			minElev=-9; maxElev=+20;
			minTurn=-360; maxTurn=+360;

			body = "OtocVez";
			gun = "OtocHlaven";
		};
		class HatchDriver {
			selection = "poklop_driver";
			axis = "osa_poklop_driver";
		//	angle=-1.2;
			angle = -180; // Modified to avoid too long osa in memory-LOD.
		};
		class HatchCommander {
			selection = "poklop_commander";
			axis = "osa_poklop_commander";
			angle=180;
		};
		class HatchGunner {
			selection = "poklop_gunner";
			axis = "osa_poklop_gunner";
			angle=-180;
		};
		class Reflectors {
			class Left
			{
				color[]={0.900000,0.800000,0.800000,1.000000};
				ambient[]= {0.100000,0.100000,0.100000,1.000000};
				position="svetlo PL";
				direction="konec L svetla";
				hitpoint="svetlo PL";
				selection = "svetlo PL";
				size=0.500000;
				brightness=0.250000;
			};
			class Right
			{
				color[]={0.900000,0.800000,0.800000,1.000000};
				ambient[]={0.100000,0.100000,0.100000,1.000000};
				position="svetlo PP";
				direction="konec P svetla";
				hitpoint="svetlo PP";
				selection = "svetlo PP";
				size=0.500000;
				brightness=0.250000;
			};
		};
		class Animations {
			class Recoil {
				type = rotation;
				animperiod = 0.15;
				selection = gunrec;
				axis = osa_gunrec;
				angle0 = 0.0;
				angle1 = 0.005000;
			};
			class NebelAnim {
				type="rotation";
				animperiod = 0.1;
				selection = "NebelAnim";
				axis = "osa_NebelAnim";
				angle0 = 0;
				angle1 = 3.14159265;
			};
		};

		class WeaponFireGun {
			cloudletDuration = 1.3;		// time to live (not including fades)
			cloudletAnimPeriod = 1.0; 	// animation speed
			cloudletSize = 2.0;
			cloudletAlpha = 1.0;
			cloudletGrowUp = 0.2;	// grow-up time
			cloudletFadeIn = 0.01;		// fade-in time
			cloudletFadeOut = 0.5;		// fade-out time
			cloudletAccY = 0;		// vertical acceleration
			cloudletMinYSpeed = -100;	// vertical speed range
			cloudletMaxYSpeed = 100;
			cloudletShape = "cl_fired";
			cloudletColor[] = {1, 1, 1, 0};
			// source parameters
			interval = 0.01;
			size = 7;
			sourceSize = 0.5;
			timeToLive = 0;

			initT = 4500;
			deltaT = -3000;
			class Table
			{
				class T0 {maxT = 0; color[] = {0.82, 0.95, 0.93, 0};}
				class T1 {maxT = 200; color[] = {0.75, 0.77, 0.9, 0};}
				class T2 {maxT = 400; color[] = {0.56, 0.62, 0.67, 0};}
				class T3 {maxT = 600; color[] = {0.39, 0.46, 0.47, 0};}
				class T4 {maxT = 800; color[] = {0.24, 0.31, 0.31, 0};}
				class T5 {maxT = 1000; color[] = {0.23, 0.31, 0.29, 0};}
				class T6 {maxT = 1500; color[] = {0.21, 0.29, 0.27, 0};}
				class T7 {maxT = 2000; color[] = {0.19, 0.23, 0.21, 0};}
				class T8 {maxT = 2300; color[] = {0.22, 0.19, 0.1, 0};}
				class T9 {maxT = 2500; color[] = {0.35, 0.2, 0.02, 0};}
				class T10 {maxT = 2600; color[] = {0.62, 0.29, 0.03, 0};}
				class T11 {maxT = 2650; color[] = {0.59, 0.35, 0.05, 0};}
				class T12 {maxT = 2700; color[] = {0.75, 0.37, 0.03, 0};}
				class T13 {maxT = 2750; color[] = {0.88, 0.34, 0.03, 0};}
				class T14 {maxT = 2800; color[] = {0.91, 0.5, 0.17, 0};}
				class T15 {maxT = 2850; color[] = {1, 0.6, 0.2, 0};}
				class T16 {maxT = 2900; color[] = {1, 0.71, 0.3, 0};}
				class T17 {maxT = 2950; color[] = {0.98, 0.83, 0.41, 0};}
				class T18 {maxT = 3000; color[] = {0.98, 0.91, 0.54, 0};}
				class T19 {maxT = 3100; color[] = {0.98, 0.99, 0.6, 0};}
				class T20 {maxT = 3300; color[] = {0.96, 0.99, 0.72, 0};}
				class T21 {maxT = 3600; color[] = {1, 0.98, 0.91, 0};}
				class T22 {maxT = 4200; color[] = {1, 1, 1, 0};}
			}
		};
		class WeaponCloudsGun {
			access = ReadOnlyVerified;
			// single cloudlet parameters
			cloudletDuration = 0.1;		// time to live (not including fades)
			cloudletAnimPeriod = 1.0; 	// animation speed
			cloudletSize = 1.0;
			cloudletAlpha = 2.0;
			cloudletGrowUp = 2;		// grow-up time
			cloudletFadeIn = 0.01;		// fade-in time
			cloudletFadeOut = 0.8;		// fade-out time
			cloudletAccY = 0.4;		// vertical acceleration
			cloudletMinYSpeed = 0.2;	// vertical speed range
			cloudletMaxYSpeed = 0.8;
			cloudletShape = "cl_basic";
			cloudletColor[] = {1, 1, 1, 0};
			// source parameters
			interval = 0.05;
			size = 2;
			sourceSize = 0.5;
			timeToLive = 0.1;

			initT = 0;
			deltaT = 0;
			class Table
			{
				class T0 {maxT = 0; color[] = {1, 1, 1, 0};}
			}
		};
		class WeaponCloudsMGun : WeaponCloudsGun {
			access = ReadOnlyVerified;

			cloudletGrowUp = 0.05;		// grow-up time
			cloudletFadeIn = 0;		// fade-in time
			cloudletFadeOut = 0.1;		// fade-out time
			cloudletDuration = 0.05;	// time to live (not including fades)

			cloudletAlpha = 0.3;

			cloudletAccY = 0;		// vertical acceleration
			cloudletMinYSpeed = -100;	// vertical speed range
			cloudletMaxYSpeed = 120;

			interval = 0.02;
			size = 0.3;
			sourceSize = 0.02;
		};
		class WeaponFireMGun : WeaponFireGun {
			cloudletDuration = 0;		// time to live (not including fades)
			cloudletGrowUp = 0.06;		// grow-up time
			cloudletFadeIn = 0.01;		// fade-in time
			cloudletFadeOut = 0.12;		// fade-out time

			interval = 0.006;
			size = 0.3;
			sourceSize = 0.02;

			initT = 3200;
			deltaT = -4000;
		};
		class GunFire : WeaponFireGun{};
		class GunClouds : WeaponCloudsGun{};
		class MGunFire : WeaponFireMGun{};
		class MGunClouds : WeaponCloudsMGun{};
	};
	class Leo2A6_xj200: Leo2A6_Base_xj200 {
		scope = public; accuracy = 1.90;
	//	model="\TZK_Objects\Model\Leo2A6_xj200.p3d";
		model="\TZK_Objects\Model\Leo2A6.p3d";
		hiddenSelections[]={"Takt_Kp","Takt_Symbol","Takt_Btl_1","Takt_Btl_2","Takt_Btl_3","nr1","nr2","nr3"};
		class HitGun {armor=1.5;material=50;name=gun;passThrough=1;}; armorGun=1.5;
		weapons[] = {"LeoGun_xj200","LeoMG_xj200"};
		magazines[]={"LeoSabot_xj200","LeoHeat_xj200","LeoMG_xj200"};
		class EventHandlers : EH_Tank {};
	};
// EAST Heavy Tanks
	class T80_xj200: T80_Base_xj200 {
		//change T80's model to the modified
		//set commander's and gunner's cargoAction as M1A1 members'
		scope = public;
		model = "\TZK_Objects\Model\T80.p3d";
	//	hiddenSelections[] = {"pruh"}; // Unnecessary to redefine this since it's inherited from T80 defined in OFPR.
		class Animations {
			class Recoil {
				type = rotation;
				animperiod = 0.15;
				selection = gunrec;
				axis = osa_gunrec;
				angle0 = 0.0;
				angle1 = 0.005000;
			};
		};
		class EventHandlers : EH_Tank {
		//	Fired = "_shot = nearestObject [_this select 0, _this select 4]; if (local _shot) then {_this exec {\TZK_Objects\Scripts\GunRecoil.sqs}}";
		};
		gunnerInAction="ManActM1A1Gunner";
		commanderInAction="ManActM1A1Commander";
	};
	class T80_Art_xj200: T80_xj200 {
		displayName="T80 Art";
		irScanToEyeFactor = 1 // Allow Art Vehicles scan far.
		weapons[] = {"T80Gun_xj200","MachineGun12_7_xj200"};
		magazines[]={"T80Heat_xj200","T80Heat_xj200","MachineGun12_7_xj200","MachineGun12_7_xj200"};
		class EventHandlers : EH_ArtTank {};
		class UserActions {
			class BulletCamTurnON : UA_BulletCamTurnON {}; class BulletCamTurnOFF : UA_BulletCamTurnOFF {};
		//	class Equip9K119 : UA_Equip9K119 {};
		};
	};
	class T90_Base_xj200: T80_xj200 {
		scope = private; vehicleClass = "TZK_Units_200"; displayName = "T90";

		nameSound="tank";
		soundEngine[]={"\TZK_Objects\sound\T90Engine.wss",0.031622775,1};
		soundEnviron[]={"\TZK_Objects\sound\T90Treads.wss",0.01,1};
		soundGear[]={"\TZK_Objects\sound\T90Gear.wss",0.0031622775,0.8};
		picture="\TZK_Objects\Texture\T90.paa";
		maxSpeed = 70;
		armor=1540;
		armorStructural=2.0;
		hiddenselections[]={"TR","pl","fire1","fire2","fire3","fire4","fire5","fire6","rak1","rak2","rak3","rak4","Flag"};
		class HatchDriver {
			selection = "poklop_driver";
			axis = "osa_poklop_driver";
			angle=-100
		};
		class HatchGunner {
			selection = "poklop_gunner";
			axis = "osa_poklop_gunner";
			angle=-100
		};
		class HatchCommander {
			selection = "poklop_commander";
			axis = "osa_poklop_commander";
			angle=-100
		};
		class ViewGunnerBase {
			initAngleX=5;
			minAngleX=-30;
			maxAngleX=30;
			initAngleY=0;
			minAngleY=-100;
			maxAngleY=100;
			initFov=0.550000;
			minFov=0.320000;
			maxFov=0.850000;
		};
		class TurretBase {
			soundServo[]={"\TZK_Objects\sound\T90Turret.wss",0.031622775,1.0};
			gunAxis = "OsaHlavne";
			turretAxis = "OsaVeze";

			gunBeg = "usti hlavne";
			gunEnd = "konec hlavne";

			minElev=-4; maxElev=+20;
			minTurn=-360; maxTurn=+360;

			body = "OtocVez";
			gun = "OtocHlaven";
		};
		class Animations {
			class SetNumber
			{
				type="rotation";
				animperiod = 0.5;
				selection = "useract";
				axis = "osa_useract";
				angle0 = 0;
				angle1 = 0;
			};
			class InFlamed
			{
				type="rotation";
				animperiod = 0.5;
				selection = "useract";
				axis = "osa_useract";
				angle0 = 0;
				angle1 = 0;
			};
			class SmokeLaunch
			{
				type="rotation";
				animperiod = 0.1;
				selection = "useract";
				axis = "osa_useract";
				angle0 = 0;
				angle1 = 0;
			};
			class Minoiskatel
			{
				type ="rotation";
				animPeriod =0.5;
				selection ="mini";
				axis ="osa_mini";
				angle0 =0;
				angle1 =1;
			};
			class OtstrelGilz
			{
				type ="rotation";
				animPeriod =0.5;
				selection ="Krish";
				axis ="osa_krish";
				angle0 =0;
				angle1 =-2.5;
			};
			class Recoil {
				type ="rotation";
				animPeriod =0.1;
				selection ="stv";
				axis ="osa_stv";
				angle0 =0;
				angle1 =-0.0098;
			};			  
			class Podveska
			{
				type ="rotation";
										animperiod = 0.5;
				selection = "podv";
				axis = "osa_sus";
				angle0 = -0.041;
				angle1 = 0.041;
			};
		};

	};
	class T90_xj200: T90_Base_xj200 {
		scope = public;
		model="\TZK_Objects\Model\T90_ICP.p3d";
		class HitGun {armor=1.5;material=52;name=gun;passThrough=1;}; armorGun=1.5;
		gunnerInAction="ManActM1A1Gunner";
		commanderInAction="ManActM1A1Commander";
		weapons[] = {"T90Gun_xj200","MachineGun12_7_xj200"};
		magazines[]={"T90Sabot_xj200","T90Heat_xj200","MachineGun12_7_xj200","MachineGun12_7_xj200"};
		
		class UserActions {
		//	class Equip9K119 : UA_Equip9K119 {};
		};
		class EventHandlers : EH_Tank {};
};
	class ZTZ99_Base_xj200: T72 {
		scope = private; displayName="ZTZ-99G"; vehicleClass = "TZK_Units_200";
		accuracy = 0.5;
		nameSound="tank";
		picture="\TZK_Objects\Texture\ZTZ99.paa";
		hiddenSelections[] = {"n1"};

		maxSpeed = 70;
		armor = 1150;
		class HitEngine {armor=0.8;material=50;name=engine;passThrough=1;};
		class HitHull {armor=0.9;material=50;name=hull;passThrough=1;};
		class HitTurret {armor=1;material=50;name=turet;passThrough=1;};
		class HitGun {armor=1;material=50;name=gun;passThrough=1;};
		class HitLTrack {armor=0.8;material=53;name=pasL;passThrough=1;};
		class HitRTrack {armor=0.8;material=54;name=pasP;passThrough=1;};
		armorHull=1;
		armorTurret=1;
		armorGun=1;
		armorEngine=0.9;
		armorLights=0.4;
		armorTracks=0.8;
		// ZTZ99 is a little weak in Track thus raise its value to 0.8
		irScanRangeMin = 500; irScanRangeMax = 4000; irScanToEyeFactor = 0.616; irScanGround = true;
		fuelCapacity = 700;

   		soundEngine[]={"\TZK_Objects\Sound\M1_Turbine.wss",0.031622775,1.1};
		soundEnviron[]={"\TZK_Objects\Sound\M1_Treads.wss",0.01,1};

		driverInAction="ManActT80Driver";
		gunnerInAction="ManActM1A1Gunner";
		commanderInAction="ManActM1A1Commander";

		threat[]={1, 1, 0.5};
		gunnerOpticsModel="\VME_ZTZ99\ViewGunner.p3d";
		commanderOpticsModel="\VME_ZTZ99\ViewCommander.p3d";
		class Animations {
			class suspension {
				type = rotation;
				animperiod = .5;
				selection = sus_F;
				axis = osa_sus;
				angle0 =  -.06;
				angle1 =  .06;  
			};
			class PaoGuanHZ_UP {
				type="rotation";
				animperiod = 0.001;
				selection = "paoguan";
				axis = "osa_paoguan1";
				angle0 = 0;
				angle1 = -0.015;
			};
			class PaoGuanHZ_DOWN {
				type="rotation";
				animperiod = 0.001;
				selection = "paoguan";
				axis = "osa_paoguan2";
				angle0 = 0;
				angle1 = 0.015;
			};
		};
	};
	class ZTZ99_xj200: ZTZ99_Base_xj200 {
		scope = public; accuracy = 1.90;
	//	model = "\TZK_Objects\Model\ZTZ99_xj200.p3d";
		model = "\TZK_Objects\Model\ZTZ99.p3d";
		class HitGun {armor=1.5;material=50;name=gun;passThrough=1;}; armorGun=1.5;
		weapons[] = {"PLAGun_xj200","PLAMG_xj200"};
		magazines[]={"PLASabot_xj200","PLAHeat_xj200","PLAMG_xj200","PLAMG_xj200"};
		class UserActions {
		//	class EquipATGM125 : UA_EquipATGM125 {};
		};
		class EventHandlers: EH_Tank {};
	};
// GUER Heavy Tanks	
	class T80Res_xj200: T80Res_Base_xj200 {
		scope = public; accuracy = 1.9; vehicleClass = "TZK_Units_200";
		model = "\TZK_Objects\Model\T80.p3d";
		gunnerInAction="ManActM1A1Gunner";
		commanderInAction="ManActM1A1Commander";
		class Animations {
			class Recoil {
				type = rotation;
				animperiod = 0.15;
				selection = gunrec;
				axis = osa_gunrec;
				angle0 = 0.0;
				angle1 = 0.005000;
			};
		};
		class EventHandlers : EH_Tank {
			Init = "";
		//	Fired = "_shot = nearestObject [_this select 0, _this select 4]; if (local _shot) then {_this exec {\TZK_Objects\Scripts\GunRecoil.sqs}}";
			Hit = "";
			IncomingMissile = "";
		};
	};
	class T80Res_Orange_xj200: T80Res_xj200 {
		vehicleClass = "TZK_Training_200";
		hiddenSelections[] = {"pruh"}; // Define this parameter to control its texture.
		class EventHandlers : EH_Tank {
			Init = "(_this select 0) setObjectTexture [0, {\TZK_Objects\Texture\pruh_orange.paa}]";
			Hit = "";
			IncomingMissile = "";
		};
	};
	class T80Res_Yellow_xj200: T80Res_Orange_xj200 {
		class EventHandlers : EH_Tank {
			Init = "(_this select 0) setObjectTexture [0, {\TZK_Objects\Texture\pruh_yellow.paa}]";
			Hit = "";
			IncomingMissile = "";
		};
	};
	class T80Res_Purple_xj200: T80Res_Orange_xj200 {
		class EventHandlers : EH_Tank {
			Init = "(_this select 0) setObjectTexture [0, {\TZK_Objects\Texture\pruh_purple.paa}]";
			Hit = "";
			IncomingMissile = "";
		};
	};
	class T80Res_Green_xj200: T80Res_Base_xj200 {
		// This unit using original OFPR T80Res Model.
		scope = public; accuracy = 1.9; vehicleClass = "TZK_Training_200";
	};
// Light Tanks
	class M60_xj200: M60 {
		armor=400;
		displayName = M60A3;
		weapons[] = {"Gun120","MachineGun7_6_xj200"};
		magazines[]={"Heat120","Shell120","MachineGun7_6_xj200"};
		vehicleClass = "TZK_Units_200";
		class HitGun {armor=3;material=52;name=gun;passThrough=1;}; armorGun=3;
		class EventHandlers : EH_Tank {
			hit="_this exec ""\TZK_Objects\Scripts_CTI\DamageShowTank.sqs"" ";
		};
	};
	class M60_120S_xj200: M60_xj200 {
		displayName = M60-120S;
		model = "\TZK_Objects\Model\M60_120S_xj200.p3d";
		gunnerAction = "ManActM1A1Gunner";
		gunnerInAction = "ManActM1A1Gunner";
		commanderAction = "ManActM1A1CommanderOut";
		commanderInAction = "ManActM1A1Commander";
		class HatchDriver {
			selection = "poklop_driver";
			axis = "osa_poklop_driver";
			angle = -100;
		};
		class HatchCommander {
			selection = "poklop_commander";
			axis = "osa_poklop_commander";
			angle = 95;
		};
	};
	class M60_C_xj200: M60 {
		armor = 400;
		displayName = M60;
		model="\ffur_uarm\m60\INQ_M60A1";
		weapons[] = {"Gun120","MachineGun7_6_xj200"};
		magazines[]={"Heat120","Shell120","MachineGun7_6_xj200"};
		vehicleClass = "TZK_Units_200_C";
		class HitGun {armor=3;material=52;name=gun;passThrough=1;}; armorGun=3;
		class HatchDriver {
			selection = "poklop_driver";
			axis = "osa_poklop_driver";
			angle=-100;
		};
		class HatchCommander {
			selection = "poklop_commander";
			axis = "osa_poklop_commander";
			angle=-95;
		};
		class IndicatorSpeed {
			selection = "ukaz_rychlo";
			axis = "osa_rychlo";
			angle=-270;
			min=0;
			max="60 / 3.6";
		};
		class IndicatorRPM {
			selection = "ukaz_rpm";
			axis = "osa_rpm";
			angle=-315;
			min=0;
			max=1;
		};

		class EventHandlers : EH_Tank {
			hit="_this exec ""\TZK_Objects\Scripts_CTI\DamageShowTank.sqs"" ";
		};
	};
	class T72_xj200: T72 {
		weapons[] = {"Gun120","MachineGun7_6_xj200"};
		magazines[]={"Heat120","Shell120","MachineGun7_6_xj200"};
		vehicleClass = "TZK_Units_200";
		class HitGun {armor=3;material=52;name=gun;passThrough=1;}; armorGun=3;
		class EventHandlers : EH_Tank {
			hit="_this exec ""\TZK_Objects\Scripts_CTI\DamageShowTank.sqs"" ";
		};
	};
// Howitzers
	// M109 Paladin from CoC_Arty
	class M109_Base_xj200: M1A1_Base_xj200 {
		scope = private; displayName="M109"; vehicleClass = "TZK_Units_200";
		irScanRangeMax = 6000;
		side = TWest;
		type=Varmor;
		camouflage=2.2;
		threat[]={1,1,0.4};
		nameSound="Tank";
		maxSpeed=67;
		simulation="tank";
		picture="\TZK_Objects\Texture\Paladin.paa";
		icon="\TZK_Objects\Texture\Sprut_icon.paa";
		canfloat=0;
		soundEngine[]={"\CoC_Arty\M109\diesel.wss",0.5,2};
		soundEnviron[] = {"Vehicles\ModernRolling_Treads1",0.01,1}; // tac: replaced with non-ogg for now
		soundGear[] = {"\CoC_Arty\M109\shift.wss",db-25,1};
		cost=750000;
		extCameraPosition[] = {0,2.5,-12};
		gunnerOpticsModel="optika_tankw_auxiliary";
		CommanderHasOptics=0;
		hasGunner=1;
		hascommander=1;

		formationX=30; // formation spacing
		formationZ=40;
		formationTime=10;

		irTarget = true;
		irScanGround=true;
		laserScanner = True;
		getInRadius = 3.5;
		getInAction = ManActGetInTank;
		getOutAction = ManActGetOutTank;
		preferRoads=false;
		unitInfoType=UnitInfoTank;
		hideUnitInfo=false;
		nightVision=True;

		wheelCircumference=2.82600;
		turnCoef=5.000000;

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

		crew = "SoldierWCrew";

// crew actions ==============================================================
		driverAction="ManActBMPDriverOut";
		gunnerAction="ManActBMPGunnerOut";
		commanderAction="ManActBMPCommander";
		driverInAction="ManActBMPDriver";
		gunnerInAction="ManActBMPGunner";
		commanderInAction="ManActBMPCommanderOut";

		commanderCanSee = CanSeeAll;
		gunnerCanSee = CanSeeAll;
		drivercansee = CanSeeAll;
		castdrivershadow=True;
		castGunnerShadow = True;
		castCommanderShadow = true;
		forcehideDriver=False;
		forceHideGunner = False;
		forcehideCommander=False;

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

	};
	class M109_Paladin_xj200: M109_Base_xj200 {
		scope = protected; accuracy=0.700000;
		model="\TZK_Objects\Model\M109A6_CoC.p3d";
		armor = 175; //can survive from 1 RPG but not 2 AA/9k32
		weapons[] = {"Gun155_xj200", "MachineGun12_7_xj200"};
		magazines[]={"DKMM_Gun155AP_xj200","DKMM_Gun155HE_xj200", "MachineGun12_7_xj200"};
		class EventHandlers : EH_Howitzer {};
};
	class M109_Art_xj200: M109_Paladin_xj200 {
		displayName="M109 Art";
		irScanToEyeFactor = 1 // Allow Art Vehicles scan far.
		class EventHandlers : EH_ArtHowitzer {};
	//	class EventHandlers : EH_ArtTank {};
		class UserActions {
			class BulletCamTurnON : UA_BulletCamTurnON {}; class BulletCamTurnOFF : UA_BulletCamTurnOFF {};
		};
	};
	// M109A6 from DKMM_Arty
	class DKMM_M109A6_xj200: M1Abrams { 
	//	displayName="M109A6-G Paladin";
		scope = private; displayName="M109A6-G"; vehicleClass = "TZK_Training_200";
		model="\dkmm_ARTY\dkmm_m109A6.p3d";
		picture="\dkmm_arty\m109a6_g.paa";
		
		hiddenselections[] ={"vlam","mk4","mk5","mk6","mk7"};
		side = TWest;
		type = Varmor;
		camouflage=2.2;
		threat[]={0.8,0.8,0.1};
		nameSound="weapon";
//		accuracy=0.700000;
		maxSpeed=60;
//		icon="\dkmm_M109A6\ipal.paa";
		soundGear[] = {"\dkmm_arty\s\shift.wss",db-25,1};
		soundEnviron[]={"m1treads.ogg",1,1};
		soundEngine[]={"\dkmm_arty\s\diesel.wav",0.5,1.2};
		armor=150;
		cost=750000;
		extCameraPosition[] = {0,2.5,-12};
		gunnerOpticsModel="optika_tankw_auxiliary";
		CommanderOpticsModel="optika_tankw_auxiliary";
		DriverOpticsModel="optika_empty";
		hasGunner=1;
		gunnercansee = 31;

		formationX=30; // formation spacing
		formationZ=40;


		irScanRangeMin = 35;
		irScanRangeMax = 10000;

		irTarget = 1;
		irScanGround=1;
		irScanToEyeFactor=5;
		laserScanner = 1;
		getInRadius = 3.5;
		getInAction = ManActGetInTank;
		getOutAction = ManActGetOutTank;
		nightVision=1;

		weapons[] = {"Gun155_xj200", "MachineGun12_7_xj200"};
		magazines[]={"DKMM_Gun155AP_xj200","DKMM_Gun155HE_xj200", "MachineGun12_7_xj200"};

		turnCoef=5.000000;

		class HitEngine {armor=0.8;material=60;name=engine;passThrough=1;}
		class HitHull {armor=1;material=50;name=hull;passThrough=1;};
		class HitTurret {armor=0.8;material=51;name=turet;passThrough=1;};
		class HitGun {armor=0.6;material=52;name=gun;passThrough=1;};
		class HitLTrack {armor=0.6;material=53;name=pasL;passThrough=1;};
		class HitRTrack {armor=0.6;material=54;name=pasP;passThrough=1;};

		armorHull=1;
		armorTurret=0.9;
		armorGun=0.8;
		armorEngine=0.8;
		armorLights=0.2;
		armorTracks=0.6;

		crew = "SoldierWCrew";

		driverAction="ManActBMPDriverOut";
		gunnerAction="ManActBMPGunnerOut";
		commanderAction="ManActBMPCommander";
		driverInAction="ManActBMPDriver";
		gunnerInAction="ManActBMPGunner";
		commanderInAction="ManActBMPCommanderOut";
		commanderCanSee = 31;
		drivercansee = CanseeCompass+CanSeeRadar+CanSeeEye+CanSeeEar;
		castdrivershadow=1;
		castGunnerShadow = 1;
		castCommanderShadow = 1;
		forcehideDriver=False;
		forceHideGunner = False;
		forcehideCommander=False;
		class HatchDriver
		{
			selection = "poklop_driver";
			axis = "osa_poklop_driver";
			angle=155;
		};
		class HatchCommander
		{
			selection = "poklop_commander";
			axis = "osa_poklop_commander";
			angle=110;
		};
		class HatchGunner
		{
			  selection = "poklop_gunner";
			  axis = "osa_poklop_gunner";
			  angle=100;
		};
		class Turret
		{ 
			gunaxis = "OsaHlavne";
			turretaxis = "OsaVeze";
			soundServo[]={"\dkmm_m109a6\servo.wss",0.18,1};
			gunBeg="usti hlavne";
			gunEnd="konec hlavne";
			minElev=-4;
			maxElev=68;
			minTurn=-360;
			maxTurn=360; 	
			body="OtocVez";
			gun="OtocHlaven";
		};
		class ComTurret
		{
			turretAxis = "comturAx";
			gunAxis = "comgunAx";
			soundServo[]={Vehicles\gun_elevate,db-70,1.2};
			gunBeg = "comgunB"; // currently ignored
			gunEnd = "comgunE";
			minElev=-4; maxElev=+20;
			minTurn=-360; maxTurn=+360;
			body = "cmdrturret";
			gun = "cmdrgun";
		};	
		class Animations
		{

			//barrel recoil
			class gun_recoil
			{
				type = rotation;
				animperiod = .1;
				selection = rec;
				axis = osa_rec;
				angle0 =  0;	
				angle1 =  .004; 	

			};
			//suspension
			class suspension : gun_Recoil
			{
				animperiod = .5;
				selection = sus_F;
				axis = osa_sus;
				angle0 =  -.08;
				angle1 =  .08; 	
			};
			class backdoor
			{
				type = rotation;
				animperiod = .5;
				selection = backdoor;
				axis = osa_bd;
				angle0 =  0;
				angle1 =  1.61; 	
			};
			class sidedoor: backdoor
			{
				selection = sidedoor;
				axis = osa_sd;
				angle0 =  0;
				angle1 =  3.1415; 	
			};
			//shovels
			class shovL : suspension
			{
				selection = shovL;
				axis = osa_shov;
				angle0 =  0;
				angle1 =  2.8;
				animperiod = .7;	
			};
			class clamp : suspension
			{
				selection = clamp;
				axis = osa_clamp;
				angle0 =  0;
				angle1 =  1.62;
				animperiod = 1.2;	
			};
			class shovR : shovL
			{
				selection = shovR;
				axis = osa_shov;
			};
			class BoxL : shovL
			{
				selection = boxL;
				axis = osa_boxL;
				angle0 =  0;
				angle1 =  -3.1415;
				animperiod = 1;	
			};
			class BoxR : BoxL
			{
				selection = boxR;
				axis = osa_boxR;
			};
		};
		class UserActions
		{
			class prepfire
			{
				displayName="Take firing position";
				position="osahlavne";
				radius=5;
				condition="player == leader this && this animationphase {backdoor} == 0";
				statement="[this,1] exec {\DKMM_ARTY\scripts\DKMM_M109_Mode.sqs}";
			};
			class prepdrive
			{
				displayName="Driving mode";
				position="osahlavne";
				radius=5;
				condition="player == leader this && this animationphase {backdoor} == 1";
				statement="[this,0] exec {\DKMM_ARTY\scripts\DKMM_M109_Mode.sqs}";
			};
		};
		class EventHandlers 
		{
			fired = "if ((_this select 1) != {DKMM_M109_MG50}) Then {_this exec {\dkmm_arty\scripts\DKMM_M109_Gun155.sqs}}";
			init = "(_this select 0) exec {\dkmm_arty\scripts\DKMM_M109_Init.sqs}";
			engine = "if (_this select 1) Then {[_this select 0, {Suspension},{Ant}] exec {\DKMM_ARTY\scripts\DKMM_Tank_AccelAdv.sqs}}";
			hit = "if (((DKMM_Allow_Smoke || !((_this select 0) in units group player))) && getdammage (_this select 0) > .5) Then {[_this select 0,0] exec {\dkmm_rsc\scripts\dkmm_cr2_smokecontrol.sqs}}";
			killed = "(_this select 0) exec {\dkmm_rsc\scripts\dkmm_rsc_veh_burner.sqs}";
		};
	};
	class M109A6_Paladin_xj200: DKMM_M109A6_xj200 {	
		scope = public; accuracy=0.700000;
		picture="\TZK_Objects\Texture\DKMM_M109A6G.paa";
		icon="\TZK_Objects\Texture\Sprut_icon.paa";
		driverOpticsModel = "optika_tank_driver";
		
		irScanRangeMin = 500
		irScanRangeMax = 4000
		irScanToEyeFactor = 0.616
		class ComTurret
		{
			turretAxis = "OsaVelitele";
			gunAxis = "OsaVelitele";
			soundServo[]={Vehicles\gun_elevate,db-70,1.2};
			gunBeg = "usti hlavne";
			gunEnd = "konec hlavne";
			minElev=-4; maxElev=+20;
			minTurn=-360; maxTurn=+360;
			body = "OtocVelitele";
			gun = "commanderView";
		};
		
	//	model="\TZK_Objects\Model\M109A6_CoC.p3d";
	//	armor = 175; //can survive from 1 RPG but not 2 AA/9k32
		class EventHandlers : EH_Howitzer {
			Init = "[_this select 0] exec {\TZK_Objects\Scripts\Howitzer\DKMM_M109_Init.sqs}";
		};
		class UserActions {
			class prepfire
			{
				displayName="Take Firing Position";
				position="osahlavne";
				radius=5;
				condition="({_x == leader this} count (units group player)) > 0 && local this && this animationphase {backdoor} == 0";
				statement="[this,1] exec {\TZK_Objects\Scripts\Howitzer\DKMM_M109_Mode.sqs}";
			};
			class prepdrive
			{
				displayName="Driving Mode";
				position="osahlavne";
				radius=5;
				condition="({_x == leader this} count (units group player)) > 0 && local this && this animationphase {backdoor} == 1";
				statement="[this,0] exec {\TZK_Objects\Scripts\Howitzer\DKMM_M109_Mode.sqs}";
			};
		};

	};
	// PLZ05 from PLA3.5
	class PLZ05_VME_Base_xj200: T72 {
		scope = private; displayName="PLZ-05"; vehicleClass = "TZK_Units_200";
		side = TEast; accuracy=1.90;
		nameSound="tank";
		mapSize = 10;
		gunnerInAction = ManActT80Gunner;
		driverInAction = ManActT55Driver;
		commanderInAction = ManActT80Commander;
		Maxspeed=60;
		canfloat=true;
		
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
	};
	class PLZ05_VME_xj200: PLZ05_VME_Base_xj200 {
		scope = protected; displayName="PLZ-05"; accuracy=0.700000;
		model = "\TZK_Objects\Model\PLZ05.p3d";
		picture="\TZK_Objects\Texture\PLZ05.paa";
   		soundEngine[]={"\TZK_Objects\Sound\M1_Turbine.wss",0.031622775,1.1};
		soundEnviron[]={"\TZK_Objects\Sound\M1_Treads.wss",0.01,1};
		hiddenSelections[] = {"n1", "zhijia"};
		armor=200;
		weapons[] = {"PLA155Gun_xj200", "MachineGun12_7_xj200"};
		magazines[]={"PLA155AP_xj200", "PLA155HE_xj200", "MachineGun12_7_xj200"};
		class Animations {
			class suspension {
				type = rotation;
				animperiod = .5;
				selection = sus_F;
				axis = osa_sus;
				angle0 =  -.06;
				angle1 =  .06;  
			};
			class Zhuchuan_UpDown {
				type="rotation";
				animperiod = 5.00;
				selection = "zhuchuan";
				axis = "osa_zhuchuan";
				angle0 = 0;
				angle1 = -2.67035;
			};
			class PaoGuanHZ_UP {
				type="rotation";
				animperiod = 0.005;
				selection = "paoguan";
				axis = "osa_paoguan1";
				angle0 = 0;
				angle1 = -0.020;
			};
			class PaoGuanHZ_DOWN {
				type="rotation";
				animperiod = 0.005;
				selection = "paoguan";
				axis = "osa_paoguan2";
				angle0 = 0;
				angle1 = 0.020;
			};
		};
		class EventHandlers : EH_Howitzer {
		//	Init =  "[_this select 0] exec ""\VME_PLA_Addons\Script\zhuchuan.sqs""";
		//	engine = "if (_this select 1) Then {(_this select 0) exec {\VME_PLA_Addons\99_Tank_Accel.sqs}}";
		};
	};
	class PLZ05_Art_xj200: PLZ05_VME_xj200 {
		displayName="PLZ-05 Art";
		irScanToEyeFactor = 1 // Allow Art Vehicles scan far.
		class EventHandlers : EH_ArtHowitzer {};
	//	class EventHandlers : EH_ArtTank {};
		class UserActions {
			class BulletCamTurnON : UA_BulletCamTurnON {}; class BulletCamTurnOFF : UA_BulletCamTurnOFF {};
		};
	};
	// PLZ05 consulting DKMM_Arty
	class PLZ05_xj200: PLZ05_VME_xj200 {
		scope = public; displayName="PLZ-05"; vehicleClass = "TZK_Training_200";
		accuracy=0.700000;
		class Animations {
			class suspension {
				type = rotation;
				animperiod = .5;
				selection = sus_F;
				axis = osa_sus;
				angle0 =  -.06;
				angle1 =  .06;  
			};
			class Zhuchuan_UpDown {
				type="rotation";
				animperiod = 3.50;
				selection = "zhuchuan";
				axis = "osa_zhuchuan";
				angle0 = 0;
				angle1 = -2.67035;
			};
			class PaoGuanHZ_UP {
				type="rotation";
				animperiod = 0.005;
				selection = "paoguan";
				axis = "osa_paoguan1";
				angle0 = 0;
				angle1 = -0.020;
			};
			class PaoGuanHZ_DOWN {
				type="rotation";
				animperiod = 0.005;
				selection = "paoguan";
				axis = "osa_paoguan2";
				angle0 = 0;
				angle1 = 0.020;
			};
		};

		class EventHandlers : EH_Howitzer {
			Init = "[_this select 0] exec {\TZK_Objects\Scripts\Howitzer\PLZ05_Init.sqs}";
		};
		class UserActions {
			class prepfire
			{
				displayName="Take Firing Position";
				position="osahlavne";
				radius=5;
				condition="({_x == leader this} count (units group player)) > 0 && local this && this animationphase {Zhuchuan_UpDown} == 0";
				statement="[this,1] exec {\TZK_Objects\Scripts\Howitzer\PLZ05_Mode.sqs}";
			};
			class prepdrive
			{
				displayName="Driving Mode";
				position="osahlavne";
				radius=5;
				condition="({_x == leader this} count (units group player)) > 0 && local this && this animationphase {Zhuchuan_UpDown} == 1";
				statement="[this,0] exec {\TZK_Objects\Scripts\Howitzer\PLZ05_Mode.sqs}";
			};
		};
	};

	// 2S19 from CoC_HWK2S19
	class 2S19_Base_xj200: T72 {
		scope = private; displayName="2S19 MSTA-S"; vehicleClass = "TZK_Units_200";
		side = TEast; accuracy=1.90;
		nameSound="tank";
		irScanRangeMin = 500
		irScanRangeMax = 6000
		irScanToEyeFactor = 0.616
		irScanGround = true;
		
		irTarget=true;
		soundGear[]	= {"\CoCHWK_2S19\sounds\shift.wss",1,1};
		soundEnviron[] = {"\CoCHWK_2S19\sounds\T80treads.wss",0.5,1};
		soundEngine[]  = {Vehicles\OldIdle1,db-10,1};
		extCameraPosition[] = {0,2.5,-12};
		
		threat[]={0.9,0.95,0.3};
		camuflage=7;
		maxSpeed=60;
		fuelCapacity=475;
		type=1;
		audible=6;
		laserScanner = true;
		preferRoads = false;
		nightVision = true;
		minFireTime=160;
		typicalCargo[]={};
		transportSoldier=2;
		class TransportMagazines {};
		
		commanderCanSee = CanSeeAll;
		commanderOpticsModel = "optika_tankw_auxiliary";
		commanderAction = "ManActT72CommanderOut";
		commanderInAction="ManActT72Commander";
		forceHideCommander = 0;
		
		driverCanSee = CanseeCompass+CanSeeRadar+CanSeeEye+CanSeeEar;
		driverAction="ManActT72DriverOut";
		driverInAction="ManActT72Driver";
		forceHideDriver = 0;
		
		gunnerCanSee = CanSeeAll;
		gunnerOpticsModel="\CoCHWK_2S19\2S19\optika_2s19";
		gunnerAction = "ManActT72GunnerOut";
		gunnerInAction="ManActT72Gunner";
		forceHideGunner = 0;
		
	//	outGunnerMayFire = true;
		hasCommander=1;
		hasdriver=1;
		hasgunner=1;
		unloadInCombat=1;
		
		armor=150;
		
		armorStructural=2.0;
		
		class HitEngine {armor=0.8;material=60;name=engine;passThrough=1;};
		class HitHull   {armor=1.0;material=50;name=hull;passThrough=1;};
		class HitTurret {armor=0.5;material=51;name=turet;passThrough=1;};
		class HitGun	{armor=0.8;material=52;name=gun;passThrough=1;};
		class HitLTrack {armor=0.7;material=53;name=pasL;passThrough=1;};
		class HitRTrack {armor=0.7;material=54;name=pasP;passThrough=1;};

		class Reflectors {
			class Left
			{
				color[] = {0.9, 0.8, 0.8, 1.0};
				ambient[] = {0.1, 0.1, 0.1, 1.0};
				position = "L svetlo";
				direction = "konec L svetla";
				hitpoint = "L svetlo";
				selection = "L svetlo";
				size = 0.5;
				brightness = 0.7;
			};
			class Right
			{
				color[] = {0.9, 0.8, 0.8, 1.0};
				ambient[] = {0.1, 0.1, 0.1, 1.0};
				position = "P svetlo";
				direction = "konec P svetla";
				hitpoint = "P svetlo";
				selection = "P svetlo";
				size = 0.5;
				brightness = 0.7;
			};
			class szperacz
			{
				color[] = {0.9, 0.8, 0.8, 1.0};
				ambient[] = {0.1, 0.1, 0.1, 1.0};
				position = "szperacz";
				direction = "konec szperacz";
				hitpoint = "szperacz";
				selection = "szperacz";
				size = 0.5;
				brightness = 0.7;
			};
		};
		class HatchDriver {
			selection = "poklop_driver";
			axis = "osa_poklop_driver";
			angle=-160;
		};
		class HatchCommander {
			selection = "poklop_commander";
			axis = "osa_poklop_commander";
			angle=90;
		};
		class HatchGunner {
			selection = "poklop_gunner";
			axis = "osa_poklop_gunner";
			angle=90;
		};
		class IndicatorSpeed {
			selection = "ukaz_rychlo";
			axis = "osa_rychlo";
			angle=-320;
			min=0;
			max="60 / 3.6";
		};
		class IndicatorRPM {
			selection = "ukaz_rpm";
			axis = "osa_rpm";
			angle=-230;
			min=0;
			max="100/3.6";
		};
		class IndicatorTurret {
			selection = "ukazsmer";
			axis = "osa_ukazsmer";
			angle = 360;
			min = 0;
			max = 1;
		};
		class TurretBase {
			soundServo[]={"\CoCHWK_2S19\sounds\elevate.wss",0.05,1};
			gunaxis = "osahlavne";
			turretaxis = "osaveze";
			gunBeg="usti hlavne";
			gunEnd="konec hlavne";
			minElev=-3;
			maxElev=68;
			minTurn=-360;
			maxTurn=360;
			body="otocvez";
			gun="otochlaven";
		};
		class Turret: TurretBase {};
		class ComTurret {
			turretaxis = "osavelitele";
			gunaxis = "osahlavnevelitele";
			gunBeg="usti hlavne";
		  	gunEnd="konec hlavne";
			minElev=-4;
			maxElev=45;
			minTurn=-360;
			maxTurn=360;
			body="otocvelitele";
			gun="otochlavenvelitele";
			soundServo[]={"\CoCHWK_2S19\sounds\servo.wss",0.1,1.2};
		};
	};
	class 2S19M1_xj200: 2S19_Base_xj200 {
		scope = protected; displayName="2S19M1"; accuracy=0.700000;
		picture = "\CoCHWK_2S19\2S19\2s19.paa";
		icon	= "\CoCHWK_2S19\2S19\2s19ico.paa";
		model   = "\TZK_Objects\Model\2s19_CoCHWK_xj200.p3d";
		gunnerOpticsModel="optika_tankw_auxiliary"; //Original 2S19 gunnerOptics isn't fit the mode gunnerview moving with turret.
		hiddenSelections[]={"numberfl","numberfr","cammo"};		
		armor = 195; //can survive from 1 RPG but not 2 AA/9k32
		weapons[] = {"Gun155_xj200", "MachineGun12_7_xj200"}; // 2S19M1 use NATO weapons.
		magazines[]={"DKMM_Gun155AP_xj200","DKMM_Gun155HE_xj200", "MachineGun12_7_xj200"};
		class Animations {
			// Support
			class podpora
			{
				type="rotation";
				animperiod = 2;
				selection = "podpora";
				axis = "ospodpora";
				angle0 = 0;
				angle1 = -1.8;
			};
			class lufaodrzurt
			{
				type="rotation";
				animperiod = 0.3;
				selection = "lufa";
				axis = "os lufa";
				angle0 = 0;
				angle1 = -0.01046;
			};
			class set_a
			{
				type="rotation";
				animperiod = 0.01;
				selection = "set_a";
				axis = "osset";
				angle0 = 0;
				angle1 = 0.01;
			};
			class set_b
			{
				type="rotation";
				animperiod = 0.01;
				selection = "set_b";
				axis = "osset";
				angle0 = 0;
				angle1 = 0.01;
			};
			class set_c
			{
				type="rotation";
				animperiod = 0.01;
				selection = "set_c";
				axis = "osset";
				angle0 = 0;
				angle1 = 0.01;
			};
			class set_d
			{
				type="rotation";
				animperiod = 0.01;
				selection = "set_d";
				axis = "osset";
				angle0 = 0;
				angle1 = 0.01;
			};
			class target_a
			{
				type="rotation";
				animperiod = 0.01;
				selection = "target_a";
				axis = "osset";
				angle0 = 0;
				angle1 = 0.01;
			};
			class target_b
			{
				type="rotation";
				animperiod = 0.01;
				selection = "target_b";
				axis = "osset";
				angle0 = 0;
				angle1 = 0.01;
			};
			class target_c
			{
				type="rotation";
				animperiod = 0.01;
				selection = "target_c";
				axis = "osset";
				angle0 = 0;
				angle1 = 0.01;
			};
			class target_d
			{
				type="rotation";
				animperiod = 0.01;
				selection = "target_d";
				axis = "osset";
				angle0 = 0;
				angle1 = 0.01;
			};
			class target_lock
			{
				type="rotation";
				animperiod = 0.01;
				selection = "target_lock";
				axis = "osset";
				angle0 = 0;
				angle1 = 0.01;
			};
			class corector
			{
				type="rotation";
				animperiod = 0.01;
				selection = "corector";
				axis = "osset";
				angle0 = 0;
				angle1 = 0.01;
			};
			class corectorh
			{
				type="rotation";
				animperiod = 0.01;
				selection = "corectorh";
				axis = "osset";
				angle0 = 0;
				angle1 = 0.01;
			};
			class fireon
			{
				type="rotation";
				animperiod = 0.01;
				selection = "fire";
				axis = "osset";
				angle0 = 0;
				angle1 = 0.01;
			};
			class magazine
			{
				type="rotation";
				animperiod = 0.01;
				selection = "magazine";
				axis = "osset";
				angle0 = 0;
				angle1 = 0.01;
			};
			class cammo_switch
			{
				type="rotation";
				animperiod = 0.01;
				selection = "cammo_switch";
				axis = "osset";
				angle0 = 0;
				angle1 = 0.01;
			};
			
			class suspension
			{
				type="rotation";
				animperiod = .5;
				selection = "suspension";
				axis = "osa_suspension";
				angle0 =  0.052;
				angle1 =  -0.052;
			};
		};
		class EventHandlers : EH_Howitzer {};
	};
	class 2S19M1_Art_xj200: 2S19M1_xj200 {
		displayName="2S19M1 Art";
		irScanToEyeFactor = 1 // Allow Art Vehicles scan far.
		class EventHandlers : EH_ArtHowitzer {};
	//	class EventHandlers : EH_ArtTank {};
		class UserActions {
			class BulletCamTurnON : UA_BulletCamTurnON {}; class BulletCamTurnOFF : UA_BulletCamTurnOFF {};
		};
	};
	// 2S25 Sprut-SD from mfm_cit_sprut
	class 2S25_Base_xj200: BMP {
		scope = private; displayName="2S25"; vehicleClass = "TZK_Units_200";
		side = TEast;
		icon="\TZK_Objects\Texture\Sprut_icon.paa";
		picture="\TZK_Objects\Texture\Sprut.paa";

		gunnerOpticsModel="\mfm_cit_sprut\opt\G_Optic.p3d";
		commanderOpticsModel="\mfm_cit_sprut\opt\C_Optic.p3d";

		nameSound="tank";
		irScanRangeMin = 500
		irScanRangeMax = 6000
		irScanToEyeFactor = 0.616
		laserscanner=1;
		laserscanrange=5000;
		irscanner=1;
		accuracy=0.11;
		canFloat=1;
		transportSoldier=0;
		class TransportMagazines{};

		cost=950000;
		maxspeed=70;

		driverAction="ManActT72DriverOut";
		gunnerAction="ManActT72GunnerOut";
		commanderAction="ManActT72CommanderOut";
		driverInAction="ManActBMPDriver";
		gunnerInAction="ManActT72Gunner";
		commanderInAction="ManActT72Commander";
		commandercansee=31;
		drivercansee=31;
		gunnercansee=31;
		hascommander=1;


		soundEngine[]={"\TZK_Objects\sound\2S25Engine.wss",0.031622775,1};
		soundEnviron[]={"\TZK_Objects\sound\2S25Tracks.wss",0.01,0.800000};
		soundGear[]={"\TZK_Objects\sound\T90Gear.wss",0.0031622775,0.8};

		type=1;
		threat[]={0.6,1,0.3}; //Soft, Armor, Air
		class Reflectors {
			class Left
			{
				color[]={0.9,0.8,0.8,1.0};
				ambient[]={0.1,0.1,0.1,1.0};
				position="L svetlo";
				direction="konec L svetla";
				hitpoint="L svetlo";
				selection = "L svetlo";
				size=0.5;
				brightness=0.25;
			};
		};
		class TurretBase {
			gunaxis = "osahlavne";
			turretaxis = "osaveze";
			soundServo[]={"Vehicles\gun_elevate",0.0316228,1.0};
			gunBeg="usti hlavne";
			gunEnd="konec hlavne";
			minElev=-5
			maxElev=17
			minTurn=-360
			maxTurn=360
			initangl=8;
			body="otocvez";
			gun="otochlaven";
		};
		class Turret: TurretBase{};
		class ComTurret {
			turretaxis = "OsaVelitele";
			gunaxis = "OsaHlavneVelitele";
			soundServo[]={"Vehicles\gun_elevate",0.0003162,1.2};
			gunBeg="usti hlavne";
			gunEnd="konec hlavne";
			minElev=-6;
			maxElev=25;
			minTurn=-360;
			maxTurn=360;
			body="OtocVelitele";
			gun="OtocHlavenVelitele";
		};
		class Animations {
			class Recoil
			{
				type ="rotation";
				animPeriod =0.1;
				selection ="stv";
				axis ="osa_stv";
				angle0 =0;
				angle1 =-0.006;  //angle1 =-0.0042;
			};
			class Podveska
			{
				type="rotation";
				animperiod = 0.5;
				selection = "podw";
				axis = "osa_podw";
				angle0 = -0.04;
				angle1 = 0.04;
			};
		};

	};
	class 2S25_Sprut_SD_xj200: 2S25_Base_xj200 {
		scope = protected;
		model="\mfm_cit_sprut\cit_sprutsd.p3d";
		hiddenselections[]= {"no1", "no2", "no3"};
		armor=210; //can survive from 1 RPG but not 2 AA/9k32
		class HitGun {armor=1;material=52;name=gun;passThrough=1;};
		armorGun=1;
		weapons[] = {"Sprut_2A75_xj200"};
		magazines[]={"Sprut_3VBM17_xj200","Sprut_3VBK25_xj200"};
		class EventHandlers : EH_Howitzer {};
	};
	class 2S25_Art_xj200: 2S25_Sprut_SD_xj200 {
		displayName="2S25 Art";
		irScanToEyeFactor = 1 // Allow Art Vehicles scan far.
		class EventHandlers : EH_ArtHowitzer {};
	//	class EventHandlers : EH_ArtTank {};
		class UserActions {
			class BulletCamTurnON : UA_BulletCamTurnON {}; class BulletCamTurnOFF : UA_BulletCamTurnOFF {};
		};
	};

	// M109 from CoC_Arty with fixed turret
	class M109_Assault_xj200: M109_Paladin_xj200 {
		scope = public;
		class Turret: TurretBase {
			minTurn = -3;
			maxTurn = +3;
		};
	};
	// PLZ05 with fixed turret
	class PLZ05_Assault_xj200: PLZ05_VME_xj200 {
		scope = public;
		class Turret: TurretBase {
			minTurn = -3;
			maxTurn = +3;
		};
	};

	
	
// Redefine M1A1N from Tank_1.2N to set its effects and parameters
	class M1A1N: M1Abrams {};
	class M1A1N_xj200: M1A1N {
		vehicleClass = "TZK_Units_200";
		model = "\TZK_Objects\Model\M1_abrams.p3d";
		weapons[] = {"M1Gun_xj200","M1MG_xj200"};
		magazines[]={"M1Sabot_xj200","M1Heat_xj200","MachineGun12_7_xj200","MachineGun12_7_xj200","CoaxW_xj200"};
		irScanRangeMin = 500
		irScanRangeMax = 4000
		irScanToEyeFactor = 0.616
		class HitGun {armor=1.5;material=50;name=gun;passThrough=1;}; armorGun=1.5;
		class EventHandlers : EH_Tank {};
	};
	
// Abandoned units including "_C" series. Planned to made some tanks with modified models in TZK_2.00 but most of them are failures.
// Many models aren't good enough because they'll affect the fluency of the game, like M2A2 from CBT and BMP2 from csla.

	class M1_C_xj200: M1A1_xj200 {
		scope = protected; displayName="M1"; armor=550;
		class EventHandlers : EH_Tank {
			hit="_this exec ""\TZK_Objects\Scripts_CTI\DamageShowTank.sqs"" ";
		};
	};
	class M1A2_C_xj200: M1A1_Base_xj200 {
		wheelCircumference=8.513000;
		scope = protected; displayName="M1A2 SEP"; vehicleClass = "TZK_Training_200";
		armor=1500;
		armorStructural=2.0;

		class HitEngine {armor=0.8;material=60;name=engine;passThrough=1;};
		class HitHull {armor=1;material=50;name=hull;passThrough=1;};
		class HitTurret {armor=1;material=51;name=turet;passThrough=1;};
		class HitGun {armor=1.5;material=52;name=gun;passThrough=1;};
		armorGun=1.5;
		armorEngine=0.8;

		maxSpeed=72;
		gunnercansee="31";
		driverCanSee=31;
		soundEnviron[]={"\INQ_M1\sounds\M1_Treads.ogg",0.4,1};
		soundEngine[]={"\INQ_M1\sounds\M1_Turbine.ogg",0.031622775,1};
		soundGear[]={"\INQ_M1\sounds\Gear.ogg",0.07,1};
		gunnerOpticsModel="\INQ_M1\GunnerM1";
	//	commanderOpticsModel="\INQ_M1\CommanderM1";
		model="\INQ_M1\INQ_M1A2";
		picture = "\TZK_Objects\Texture\M1A2.paa"
		class HatchDriver {
			selection = "poklop_driver";
			axis = "osa_poklop_driver";
			angle=-100;
		};
		class HatchCommander {
			selection = "poklop_commander";
			axis = "osa_poklop_commander";
			angle=95;
		};
		class IndicatorSpeed {
			selection = "ukaz_rychlo";
			axis = "osa_rychlo";
			angle=-270;
			min=0;
			max="80 / 3.6";
		};
		class IndicatorRPM {
			selection = "ukaz_rpm";
			axis = "osa_rpm";
			angle=-270;
			min=0;
			max=1;
			};
	};
	class M1A2_Art_C_xj200: M1A2_C_xj200 {
		displayName="M1A2 Art";
		irScanToEyeFactor = 1 // Allow Art Vehicles scan far.
		weapons[] = {"M1Gun_xj200","MachineGun12_7_xj200"};
		magazines[]={"M1Heat_xj200","M1Heat_xj200","MachineGun12_7_xj200","MachineGun12_7_xj200"};
		class EventHandlers : EH_ArtTank {};
		class UserActions {
			class BulletCamTurnON : UA_BulletCamTurnON {}; class BulletCamTurnOFF : UA_BulletCamTurnOFF {};
		};
	};
	class M1A1_SIG_xj200: M1A1_xj200 {
		wheelCircumference=8.513000;
		scope = protected;
		laserscanner=1;
		laserscanrange=3333;
		irscanner=1;
		displayName="M1A1 2003";

		armor=1500;
		armorStructural=2.0;

		class HitEngine {armor=0.8;material=60;name=engine;passThrough=1;};
		class HitHull {armor=1;material=50;name=hull;passThrough=1;};
		class HitTurret {armor=0.96;material=51;name=turet;passThrough=1;};
		class HitGun {armor=1.5;material=52;name=gun;passThrough=1;};
		class HitLTrack {armor=0.6;material=53;name=pasL;passThrough=1;};
		class HitRTrack {armor=0.6;material=54;name=pasP;passThrough=1;};

		armorHull=1;
		armorTurret=0.96;
		armorGun=1.5;
		armorEngine=0.8;
		armorLights=0.4;
		armorTracks=0.6;

		cost=4000000;
		maxSpeed=72;
		
		gunnercansee="16";
		driverCanSee=16;
		soundEnviron[]={"\SIG_MN\m1treads.ogg",1,1};
		soundEngine[]={"\SIG_MN\m1engine.ogg",1,2};
		model="\SIG_MN\M1A1new.p3d";
		weapons[] = {"M12Gun_xj200","M1MG_xj200"};
		magazines[]={"M12Sabot_xj200","M12Heat_xj200","MachineGun12_7_xj200","MachineGun12_7_xj200","CoaxW_xj200"};
		gunnerAction="ManActM1A1Gunner";
		gunnerInAction="ManActM1A1Gunner";
		driverAction="ManActM1A1DriverOut";
		driverInAction="ManActM1A1Driver";
		commanderAction="ManActM1A1CommanderOut";
		commanderInAction="ManActM1A1Commander";
		type=1;
		class TurretBase {	  
			gunaxis = "OsaHlavne";
			turretaxis = "OsaVeze";
			soundServo[]={"\SIG_MN\m1turret.ogg",0.08,1};
			gunBeg="usti hlavne";
			gunEnd="konec hlavne";
			minElev=-5;
			maxElev=42;
			minTurn=-360;
			maxTurn=360;
			body="OtocVez";
			gun="OtocHlaven";
		};
		class HatchCommander {
			selection = "poklop_commander";
			axis = "osa_poklop_commander";
			angle = 165;
		};
		class Turret: TurretBase {};
	};
	class T80_C_xj200: T80_Base_xj200 {
		// Modification base ON CSLA_ARM
		scope = protected;
		vehicleClass = "TZK_Training_200";
		hiddenSelections[]={"emb"};
		soundEngine[]={"Vehicles\ModernIdle1",0.2,1};
		soundEnviron[]={"\ICP_t90\sound\treads.wav",0.4,1};
		soundGear[]={"\ICP_t90\sound\gear.wav",0.1,0.8};

	//	model="\CSLA_ARM\CSLA2_t80";
		model="\TZK_Objects\Model\T80_csla2_xj200.p3d";
		armor = 1607; //Armor is 1500 for standard original T80 in CTI
		gunnerInAction="ManActM1A1Gunner";
		commanderInAction="ManActM1A1Commander";
		maxSpeed=70;
		class IndicatorSpeed {
			selection = "ukaz_rychlo";
			axis = "osa_rychlo";
			angle=-270;
			min=0;
			max="100 / 3.6";
			};
		class IndicatorSpeed2 {
			selection = "ukaz_rychlo2";
			axis = "osa_rychlo2";
			angle=-270;
			min=0;
			max="100 / 3.6";
			};
		class IndicatorRPM {
			selection = "ukaz_rpm";
			axis = "osa_rpm";
			angle=-290;
			min=0;
			max=1;
			};

		class EventHandlers : EH_Tank {
			hit="_this exec ""\TZK_Objects\Scripts_CTI\DamageShowTank.sqs"" ";
		};
	};
	class T90_Art_xj200: T90_xj200 {
		scope = protected; displayName="T90 Art";
		irScanToEyeFactor = 1 // Allow Art Vehicles scan far.
		magazines[]={"T90Heat_xj200","T90Heat_xj200","MachineGun12_7_xj200","MachineGun12_7_xj200"};
		class EventHandlers : EH_ArtTank {};
		class UserActions {
			class BulletCamTurnON : UA_BulletCamTurnON {}; class BulletCamTurnOFF : UA_BulletCamTurnOFF {};
		//	class Equip9K119 : UA_Equip9K119 {};
		};
	};
	class T72_C_xj200: T72 {
		scope = protected;
		gunnerOpticsModel="\ICP_t72s\gunner.p3d";
		commanderOpticsModel="\ICP_t72s\sight.p3d";
		model="\ICP_t72s\T72b2.p3d";
		maxSpeed=60;
		hiddenSelections[]={"No1","No2","No3","n4","n5","n6","pruh","tanks"};
		soundEngine[]={"Vehicles\OldIdle1",0.031622775,1};
		soundEnviron[]={"\csla_snd\T72_Treads.wav",0.4,1};
		weapons[] = {"Gun120","MachineGun7_6_xj200"};
		magazines[]={"Heat120","Shell120","MachineGun7_6_xj200"};
		vehicleClass = "TZK_Units_200_C";
		class HitGun {armor=3;material=52;name=gun;passThrough=1;}; armorGun=3;
		class TurretBase {
			gunaxis = "OsaHlavne";
			turretaxis = "OsaVeze";
			soundServo[]={"\ICP_t72s\sound\turret.ogg",0.0316228,1.0};
			gunBeg="usti hlavne";
			gunEnd="konec hlavne";
			minElev=-4;
			maxElev=20;
			minTurn=-360;
			maxTurn=360;
			body="OtocVez";
			gun="OtocHlaven";
		};
		class Turret: TurretBase {};
		class GunFire: ICPT72FireGun {};
		class Animations {
			class SetNumber
			{
				type="rotation";
				animperiod = 0.5;
				selection = "useract";
				axis = "osa_useract";
				angle0 = 0;
				angle1 = 0;
			};
			class InFlamed
			{
				type="rotation";
				animperiod = 0.5;
				selection = "useract";
				axis = "osa_useract";
				angle0 = 0;
				angle1 = 0;
			};
			class SmokeLaunch
			{
				type="rotation";
				animperiod = 0.1;
				selection = "useract";
				axis = "osa_useract";
				angle0 = 0;
				angle1 = 0;
			};
			class Podveska
			{
				type="rotation";
				animperiod = 0.5;
				selection = "podv";
				axis = "osa_sus";
				angle0 = -0.04;
				angle1 = 0.04;
			};

			class Recoil
			{
				type="rotation";
				animperiod = 0.1;
				selection = "rec";
				axis = "osa_rec";
				angle0 = 0;
				angle1 = -0.005;
			};
		};

		class EventHandlers : EH_Tank {
		//	Fired = "if ((_this select 4) in [""Heat120"",""Shell120"", ""M1Sabot_xj200"", ""M1Heat_xj200"", ""T80Sabot_xj200"", ""T80Heat_xj200""]) then { [_this select 0] exec {\ICP_t72s\scripts\gunrec.sqs}};   "
			Hit = "_this exec ""\TZK_Objects\Scripts_CTI\DamageShowTank.sqs"" ";
		};
	};

	// T55. Abandoned units.
	class T55C_xj200 : T55G {
		vehicleClass = "TZK_Training_200";
		side = TCivilian;
	};
	class T55E_xj200 : T55G {
		vehicleClass = "TZK_Training_200";
		side = TEast;
	};

//EOF