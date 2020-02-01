// APC

	class M113_xj200: M113 {
		vehicleClass = "TZK_Units_200";
		class HitGun {armor=4;material=52;name=gun;passThrough=1;}; armorGun=4;
		class EventHandlers : EH_APC {};
		class UserActions {
			class TransportTurnON : UA_TransportTurnON {}; class TransportTurnOFF : UA_TransportTurnOFF {};
			class EjectOneCargo : UA_EjectOneCargo {}; class EjectAllCargo : UA_EjectAllCargo {};
		};
	};
	class M113_AA_xj200: M113_xj200 {
		armor = 360;
		cost = 1000000;
		icon = "antiAC.paa";
		model="\TZK_Objects\Model\M113_Cannon.p3d";
		displayName = "M113 Cannon";
		irScanRange = 4000;
		irScanGround = 0;
		gunnerCanSee = "4+8+16 +1";
		weapons[] = {VulcanCannon_xj200};
		magazines[]={VulcanCannon_xj200};
		class Turret {
			gunAxis = "OsaHlavne";
			turretAxis = "OsaVeze";
			soundServo[] = {"Vehicles\gun_elevate",0.031622775,1.0};
			gunBeg = "usti hlavne";
			gunEnd = "konec hlavne";
			body = "OtocVez";
			gun = "OtocHlaven";
			minElev = -3;
			maxElev = 70;
			minTurn = -360;
			maxTurn = 360;
		};
		threat[] = {0.5,0.5,1};
		gunnerOpticsModel = "optika_zsu_gunner";
		commanderOpticsModel = "optika_tanke_auxiliary";
		gunnerAction = "ManActVulcanGunner";
		gunnerInAction = "ManActVulcanGunner";
		forceHideGunner = 1;
		viewGunnerInExternal = 1;
		class ReloadAnimations {
			class VulcanCannon_xj200 {
				weapon = "VulcanCannon_xj200";
				angle0 = 0;
				angle1 = "-2 * 3.141592654";
				multiplier = 500;
				type = "rotation";
				animPeriod = 1;
				selection = "gatling";
				begin = "usti hlavne";
				end = "konec hlavne";
			};
		};
	};
	class BMP_xj200: BMP {
		vehicleClass = "TZK_Units_200";
		class HitGun {armor=4;material=52;name=gun;passThrough=1;}; armorGun=4;
		class EventHandlers : EH_APC {};
		class UserActions {
			class TransportTurnON : UA_TransportTurnON {}; class TransportTurnOFF : UA_TransportTurnOFF {};
			class EjectOneCargo : UA_EjectOneCargo {}; class EjectAllCargo : UA_EjectAllCargo {};
		};
	};

	class M113Ambul_xj200: M113Ambul {
		vehicleClass = "TZK_Units_200";
		class TransportMagazines {};
		attendant=0;
		class EventHandlers : EH_APC {};
		class UserActions {
			class AttachInVehicle : UA_AttachInVehicle_APC {}; class AttachOnFoot : UA_AttachOnFoot_APC {};
		};
	};
	class MHQW_xj200: M113Ambul_xj200 {
		scope = protected;
		class UserActions {
			class AttachInVehicle : UA_AttachInVehicle_APC {}; class AttachOnFoot : UA_AttachOnFoot_APC {};
			class Unflip {
				displayName="Unflip MHQ";
				position="pos driver";
				priority=3;
				radius=25;
				condition="alive this && siPlayer == si0";
				statement="[this] exec {\TZK_Objects\Scripts\UnflipVehicle.sqs}";
			};
			class UnLock {
				displayName="Unlock MHQ";
				position="pos driver";
				priority=4;
				radius=25;
				condition="alive this && siPlayer == si0 && isCommander && locked this";
				statement="[this, !(locked this)] exec {Common\LockVehicle.sqs}";
			};
			class Lock {
				displayName="Lock MHQ";
				position="pos driver";
				priority=4;
				radius=25;
				condition="alive this && siPlayer == si0 && isCommander && !(locked this)";
				statement="[this, !(locked this)] exec {Common\LockVehicle.sqs}";
			};
			class RepairMHQ {
				displayName="Repair MHQ";
				position="pos driver";
				priority=3;
				radius=25;
				condition="siPlayer == si0 && !(alive this)";
				statement="[this] exec {Player\Action RepairMHQ.sqs}";
			};
		};
	};
	class MCVW_xj200: M113Ambul_xj200 {
		scope = protected;
		class UserActions {
			class AttachInVehicle : UA_AttachInVehicle_APC {}; class AttachOnFoot : UA_AttachOnFoot_APC {};
			class Unflip {
				displayName="Unflip MCV";
				position="pos driver";
				priority=3;
				radius=25;
				condition="alive this && siPlayer == si0";
				statement="[this] exec {\TZK_Objects\Scripts\UnflipVehicle.sqs}";
			};
			class RepairMCV {
				displayName="Repair MCV";
				position="pos driver";
				priority=3;
				radius=25;
				condition="siPlayer == si0 && !(alive this)";
				statement="[this] exec {Player\Action RepairMCV.sqs}";
			};
		};
	};

	class BMPAmbul_xj200: BMPAmbul {
		vehicleClass = "TZK_Units_200";
		class TransportMagazines {};
		attendant=0;
		class EventHandlers : EH_APC {};
		class UserActions {
			class AttachInVehicle : UA_AttachInVehicle_APC {}; class AttachOnFoot : UA_AttachOnFoot_APC {};
		};
	};
	class MHQE_xj200: BMPAmbul_xj200 {
		scope = protected;
		class UserActions
		{
			class AttachInVehicle : UA_AttachInVehicle_APC {}; class AttachOnFoot : UA_AttachOnFoot_APC {};
			class Unflip {
				displayName="Unflip MHQ";
				position="pos driver";
				priority=3;
				radius=25;
				condition="alive this && siPlayer == si1";
				statement="[this] exec {\TZK_Objects\Scripts\UnflipVehicle.sqs}";
			};
			class UnLock {
				displayName="Unlock MHQ";
				position="pos driver";
				priority=4;
				radius=25;
				condition="alive this && siPlayer == si1 && isCommander && locked this";
				statement="[this, !(locked this)] exec {Common\LockVehicle.sqs}";
			};
			class Lock {
				displayName="Lock MHQ";
				position="pos driver";
				priority=4;
				radius=25;
				condition="alive this && siPlayer == si1 && isCommander && !(locked this)";
				statement="[this, !(locked this)] exec {Common\LockVehicle.sqs}";
			};
			class RepairMHQ {
				displayName="Repair MHQ";
				position="pos driver";
				priority=3;
				radius=25;
				condition="siPlayer == si1 && !(alive this)";
				statement="[this] exec {Player\Action RepairMHQ.sqs}";
			};
		};
	};
	class MCVE_xj200: BMPAmbul_xj200 {
		scope = protected;
		class UserActions
		{
			class AttachInVehicle : UA_AttachInVehicle_APC {}; class AttachOnFoot : UA_AttachOnFoot_APC {};
			class Unflip {
				displayName="Unflip MCV";
				position="pos driver";
				priority=3;
				radius=25;
				condition="alive this && siPlayer == si1";
				statement="[this] exec {\TZK_Objects\Scripts\UnflipVehicle.sqs}";
			};
			class RepairMCV {
				displayName="Repair MCV";
				position="pos driver";
				priority=3;
				radius=25;
				condition="siPlayer == si1 && !(alive this)";
				statement="[this] exec {Player\Action RepairMCV.sqs}";
			};
		};
	};

	class M113_C_xj200: M113 {
		model="\CBT_m113a\CBT_M113a3_w.p3d";
		soundEnviron[]={"\CBT_Misc\sound\tread.ogg",0.4,1.0};
		soundEngine[]={"\CBT_Misc\sound\Engine_16.wav",0.2,1.0};
		soundCrash[]={"Vehicles\crash_small2",0.1,1};
		soundGear[]={"Vehicles\Gear_Trans1",0.01,1};
		maxSpeed=60;
		vehicleClass = "TZK_Units_200_C";
		class HitGun {armor=4;material=52;name=gun;passThrough=1;}; armorGun=4;
		class HatchDriver {
			selection="poklop_driver";
			axis="osa_poklop_driver";
			angle=175;
		};
		class IndicatorSpeed {
			selection="ukaz_rychlo";
			axis="osa_rychlo";
			angle=-290;
			min=0;
			max="64/3.6";
		};
		class IndicatorRPM {
			selection="ukaz_rpm";
			axis="osa_rpm";
			angle=-235;
			min=0;
			max=1;
		};

		class EventHandlers : EH_APC {};
		class UserActions {
			class TransportTurnON : UA_TransportTurnON {}; class TransportTurnOFF : UA_TransportTurnOFF {};
			class EjectOneCargo : UA_EjectOneCargo {}; class EjectAllCargo : UA_EjectAllCargo {};
		};
	};
	class M113_AA_C_xj200: M113_C_xj200 {
		scope = private;
		model="\TZK_Objects\Model\M113_Cannon.p3d";
		armor = 360;
		cost = 1000000;
		icon = "antiAC.paa";
		irScanRange = 4000;
		irScanGround = 0;
		gunnerCanSee = "4+8+16 +1";
		weapons[] = {VulcanCannon_xj200};
		magazines[]={VulcanCannon_xj200};
		class Turret
		{
			gunAxis = OsaHlavne;
			turretAxis = OsaVeze;
			soundServo[] = {"Vehicles\gun_elevate",0.0316228,1};
			gunBeg = "usti hlavne";
			gunEnd = "konec hlavne";
			body = OtocVez;
			gun = OtocHlaven;
			minElev = -3;
			maxElev = 70;
			minTurn = -360;
			maxTurn = 360;
		};
		threat[] = {0.5,0.5,1};
		gunnerOpticsModel = optika_zsu_gunner;
		commanderOpticsModel = optika_tanke_auxiliary;
		gunnerAction = ManActVulcanGunner;
		gunnerInAction = ManActVulcanGunner;
		forceHideGunner = 1;
		viewGunnerInExternal = 1;
	};
	class BMP_C_xj200: BMP {
		model="\CSLA_ARM\CSLA2_bmp1.p3d";
		maxSpeed=70;
		soundEnviron[]={"\csla_snd\BVP_Treads.wav",0.4,1};
		soundEngine[]={"\csla_snd\BVP_Engine.wav",0.2,1};
		vehicleClass = "TZK_Units_200_C";
		class HitGun {armor=4;material=52;name=gun;passThrough=1;}; armorGun=4;
		class HatchDriver {
			selection="poklop_driver";
			axis="osa_poklop_driver";
			angle=-100;
		};
		class HatchCommander {
			selection="poklop_commander";
			axis="osa_poklop_commander";
			angle=-90;
		};
		class HatchGunner {
			selection="poklop_gunner";
			axis="osa_poklop_gunner";
			angle=90;
		};
		class IndicatorSpeed {
			selection="ukaz_rychlo";
			axis="osa_rychlo";
			angle=-320;
			min=0;
			max="40 / 3.6";
		};
		class IndicatorRPM {
			selection="ukaz_rpm";
			axis="osa_rpm";
			angle=-230;
			min=0;
			max=1;
		};

		class EventHandlers : EH_APC {};
		class UserActions {
			class TransportTurnON : UA_TransportTurnON {}; class TransportTurnOFF : UA_TransportTurnOFF {};
			class EjectOneCargo : UA_EjectOneCargo {}; class EjectAllCargo : UA_EjectAllCargo {};
		};
	};
	class M113Ambul_C_xj200: M113_C_xj200 {
		accuracy=1000;
		icon="Ambulance_move";
		picture="im113_ambu";
		nameSound="ambulance";
		scope=2;
		displayName="$STR_DN_M113_AMB";
		attendant=0;
		model="\CBT_m113a\CBT_M113a3_amb_w.p3d";
		weapons[] = {};
		magazines[]={};
		hasGunner=0;
		transportSoldier=3;
		type=1;
		threat[]={0.0,0.0,0.0};
		typicalCargo[]={};
		cargoAction[]={"ManActM113Medic","ManActM113Medic","ManActM113Injured"};
		cargoIsCoDriver[]={0,0,0};
		transportMaxMagazines=0;
		transportMaxWeapons=0;
		vehicleClass = "TZK_Units_200_C";
		class TransportMagazines {};
		class UserActions {
			class AttachInVehicle : UA_AttachInVehicle_APC {}; class AttachOnFoot : UA_AttachOnFoot_APC {};
		};
	};
	class MHQW_C_xj200: M113Ambul_C_xj200 {
		scope = protected;
		class UserActions {
			class AttachInVehicle : UA_AttachInVehicle_APC {}; class AttachOnFoot : UA_AttachOnFoot_APC {};
			class Unflip {
				displayName="Unflip MHQ";
				position="pos driver";
				priority=3;
				radius=25;
				condition="alive this && siPlayer == si0";
				statement="[this] exec {\TZK_Objects\Scripts\UnflipVehicle.sqs}";
			};
			class UnLock {
				displayName="Unlock MHQ";
				position="pos driver";
				priority=4;
				radius=25;
				condition="alive this && siPlayer == si0 && isCommander && locked this";
				statement="[this, !(locked this)] exec {Common\LockVehicle.sqs}";
			};
			class Lock {
				displayName="Lock MHQ";
				position="pos driver";
				priority=4;
				radius=25;
				condition="alive this && siPlayer == si0 && isCommander && !(locked this)";
				statement="[this, !(locked this)] exec {Common\LockVehicle.sqs}";
			};
			class RepairMHQ {
				displayName="Repair MHQ";
				position="pos driver";
				priority=3;
				radius=25;
				condition="siPlayer == si0 && !(alive this)";
				statement="[this] exec {Player\Action RepairMHQ.sqs}";
			};
		};
	};
	class MCVW_C_xj200: M113Ambul_C_xj200 {
		scope = protected;
		class UserActions {
			class AttachInVehicle : UA_AttachInVehicle_APC {}; class AttachOnFoot : UA_AttachOnFoot_APC {};
			class Unflip {
				displayName="Unflip MCV";
				position="pos driver";
				priority=3;
				radius=25;
				condition="alive this && siPlayer == si0";
				statement="[this] exec {\TZK_Objects\Scripts\UnflipVehicle.sqs}";
			};
			class RepairMCV {
				displayName="Repair MCV";
				position="pos driver";
				priority=3;
				radius=25;
				condition="siPlayer == si0 && !(alive this)";
				statement="[this] exec {Player\Action RepairMCV.sqs}";
			};
		};
	};
	class BMPAmbul_C_xj200: BMP_xj200 {
		accuracy=1000;
		icon="Ambulance_move";
		nameSound="ambulance";
		picture="ibmp_abu";
		scope=2;
		displayName = "$STR_DN_BMP_AMB";
		attendant=0;
		hasGunner=0;
		transportSoldier=2;
		model="\CSLA_SUP\CSLA2_ambs";
		weapons[] = {};
		magazines[]={};
		minGunTurn=-6;
		type=0;
		threat[]={0.0,0.0,0.0};
		typicalCargo[]={};
		cargoAction[]={"ManActM113Medic","ManActM113Injured"};
		cargoIsCoDriver[]={0,0};
		vehicleClass = "TZK_Units_200_C";
		class TransportMagazines {};
		class UserActions {
			class AttachInVehicle : UA_AttachInVehicle_APC {}; class AttachOnFoot : UA_AttachOnFoot_APC {};
		};
	};
	class MHQE_C_xj200: BMPAmbul_C_xj200 {
		scope = protected;
		class UserActions {
			class AttachInVehicle : UA_AttachInVehicle_APC {}; class AttachOnFoot : UA_AttachOnFoot_APC {};
			class Unflip {
				displayName="Unflip MHQ";
				position="pos driver";
				priority=3;
				radius=25;
				condition="alive this && siPlayer == si1";
				statement="[this] exec {\TZK_Objects\Scripts\UnflipVehicle.sqs}";
			};
			class UnLock {
				displayName="Unlock MHQ";
				position="pos driver";
				priority=4;
				radius=25;
				condition="alive this && siPlayer == si1 && isCommander && locked this";
				statement="[this, !(locked this)] exec {Common\LockVehicle.sqs}";
			};
			class Lock {
				displayName="Lock MHQ";
				position="pos driver";
				priority=4;
				radius=25;
				condition="alive this && siPlayer == si1 && isCommander && !(locked this)";
				statement="[this, !(locked this)] exec {Common\LockVehicle.sqs}";
			};
			class RepairMHQ {
				displayName="Repair MHQ";
				position="pos driver";
				priority=3;
				radius=25;
				condition="siPlayer == si1 && !(alive this)";
				statement="[this] exec {Player\Action RepairMHQ.sqs}";
			};
		};
	};
	class MCVE_C_xj200: BMPAmbul_C_xj200 {
		scope = protected;
		class UserActions {
			class AttachInVehicle : UA_AttachInVehicle_APC {}; class AttachOnFoot : UA_AttachOnFoot_APC {};
			class Unflip {
				displayName="Unflip MCV";
				position="pos driver";
				priority=3;
				radius=25;
				condition="alive this && siPlayer == si1";
				statement="[this] exec {\TZK_Objects\Scripts\UnflipVehicle.sqs}";
			};
			class RepairMCV {
				displayName="Repair MCV";
				position="pos driver";
				priority=3;
				radius=25;
				condition="siPlayer == si1 && !(alive this)";
				statement="[this] exec {Player\Action RepairMCV.sqs}";
			};
		};
	};


	class Vulcan_xj200: M113 {
		vehicleClass = "TZK_Units_200";
		class HitGun {armor=4;material=52;name=gun;passThrough=1;}; armorGun=4;
		displayName = $STR_DN_VULCAN;
		picture = "\vulcan\ivulcan.paa";
		icon = "antiAC.paa";
		armor = 180;
		cost = 1000000;
		model = "\vulcan\m163a1vulcan";
		irScanRange = 4000;
		irScanGround = 0;
		gunnerCanSee = "4+8+16 +1";
		weapons[] = {VulcanCannon_xj200};
		magazines[]={VulcanCannon_xj200};
		class Turret {
			gunAxis = OsaHlavne;
			turretAxis = OsaVeze;
			soundServo[] = {"Vehicles\gun_elevate",0.0316228,1};
			gunBeg = "usti hlavne";
			gunEnd = "konec hlavne";
			body = OtocVez;
			gun = OtocHlaven;
			minElev = -3;
			maxElev = 70;
			minTurn = -360;
			maxTurn = 360;
		};
		threat[] = {0.5,0.5,1};
		gunnerOpticsModel = optika_zsu_gunner;
		commanderOpticsModel = optika_tanke_auxiliary;
		gunnerAction = ManActVulcanGunner;
		gunnerInAction = ManActVulcanGunner;
		forceHideGunner = 1;
		viewGunnerInExternal = 1;
		transportSoldier = 0;
		class ReloadAnimations {
			class VulcanCannon_xj200 {
				weapon = VulcanCannon_xj200;
				angle0 = 0;
				angle1 = "-2 * 3.141592654";
				multiplier = 500;
				type = rotation;
				animPeriod = 1;
				selection = gatling;
				begin = "usti hlavne";
				end = "konec hlavne";
			};
		};
		class EventHandlers : EH_APC {};
	};
	class VulcanTraining_xj200: Vulcan_xj200 {
		vehicleClass = "TZK_Training_200";
		weapons[] = {RedTop_26_xj200};
		magazines[]={RedTop_26_xj200};
	}
	class ZSU_xj200: ZSU {
		vehicleClass = "TZK_Units_200";
		class HitGun {armor=4;material=52;name=gun;passThrough=1;}; armorGun=4;
		class EventHandlers : EH_APC {};
	};
	class ZSUTraining_xj200: ZSU_xj200 {
		vehicleClass = "TZK_Training_200";
		weapons[] = {RedTop_26_xj200};
		magazines[]={RedTop_26_xj200};
	}


	class Bradley_xj200: M113 {
		vehicleClass = "TZK_Units_200";
		class HitGun {armor=4;material=52;name=gun;passThrough=1;}; armorGun=4;
		scope = private;
		displayName = $STR_DN_M2A2;
		picture = "\m2a2\im2a2.paa";
		model = "\TZK_Objects\Model\M2A2.p3d";
		canFloat = 0;
		armor = 200;
		nameSound = apc;
		weapons[] = {Cannon25HE_xj200,MachineGun7_6_xj200,HellfireLauncherM2A2_xj200};
		magazines[]={Cannon25HE_xj200,MachineGun7_6_xj200,HellfireLauncherM2A2_xj200,HellfireLauncherM2A2_xj200,HellfireLauncherM2A2_xj200,HellfireLauncherM2A2_xj200};
		threat[] = {0.5,0.5,1};
		gunnerOpticsModel = optika_tank_gunner;
		gunnerAction = ManActM2A2GunnerOut;
		gunnerInAction = ManActM2A2Gunner;
		driverAction = ManActM2A2Driver;
		driverInAction = ManActM2A2Driver;
		commanderAction = ManActM2A2CommanderOut;
		commanderInAction = ManActM2A2Commander;
		hasCommander = 1;
		outGunnerMayFire = 0;
		forceHideGunner = 0;
		viewGunnerInExternal = 0;
		commanderUsesPilotView = 1;
		transportSoldier = 6;
		class GunClouds: WeaponCloudsMGun {};
		class Turret {
			gunAxis = OsaHlavne;
			turretAxis = OsaVeze;
			soundServo[] = {"Vehicles\gun_elevate",0.0316228,1};
			gunBeg = "usti hlavne";
			gunEnd = "konec hlavne";
			body = OtocVez;
			gun = OtocHlaven;
			minElev = -4.5;
			maxElev = 74;
			minTurn = -360;
			maxTurn = 360;
		};
		class ComTurret {
			turretAxis = "OsaVelitele";
			gunAxis = "OsaHlavneVelitele";
			soundServo[] = {"Vehicles\gun_elevate",0.00031622773,1.2};
			gunBeg = "usti hlavne";
			gunEnd = "konec hlavne";
			minElev = -4;
			maxElev = 20;
			minTurn = -360;
			maxTurn = 360;
			body = "OtocVelitele";
			gun = "OtocHlavenVelitele";
		};
		class IndicatorSpeed {
			selection = ukaz_rychlo;
			axis = osa_rychlo;
			angle = -270;
			min = 0;
			max = 37;
		};
	};
	class M2A2_xj200: Bradley_xj200 {
		scope = public;
		sensitivity=5; sensitivityEar=0.015;
		irScanRangeMin = 500
		irScanRangeMax = 4000
		irScanToEyeFactor = 2
		irScanGround = 0;
		driverCanSee=31;
		gunnerCanSee=31;
		commanderCanSee=31;
		displayName = "M2A2";
		cost = 200000;
		armor = 350;
		class EventHandlers : EH_APC {};
		class UserActions {
			class TransportTurnON : UA_TransportTurnON {}; class TransportTurnOFF : UA_TransportTurnOFF {};
			class EjectOneCargo : UA_EjectOneCargo {}; class EjectAllCargo : UA_EjectAllCargo {};
		};
	};
	class M2A2_AT_xj200: M2A2_xj200 {
		displayName="M2A2 AT";
		cost = 2000000;
		weapons[]={ATLauncherTank_xj200, 50calW_xj200};
		magazines[]=
		{GuidedAT_APC_xj200, GuidedAT_APC_xj200, GuidedAT_APC_xj200, GuidedAT_APC_xj200, GuidedAT_APC_xj200, GuidedAT_APC_xj200, GuidedAT_APC_xj200,
		50calW_xj200, 50calW_xj200,50calW_xj200,50calW_xj200,50calW_xj200,50calW_xj200,50calW_xj200,50calW_xj200,50calW_xj200,50calW_xj200};
		threat[]={1, 1, 0.5};
	};
	class M2A2_AA_xj200: M2A2_xj200 {
		displayName = "M2A2 AA";
		weapons[]={Stinger_xj200, MachineGun7_6_xj200};
		magazines[]={Stinger_xj200, Stinger_xj200, Stinger_xj200, Stinger_xj200, Stinger_xj200, Stinger_xj200, Stinger_xj200, Stinger_xj200, MachineGun7_6_xj200};
		threat[]={1, 0.9, 1};
		minFireTime = 1;
	};
	class M2A2_AA_Town_xj200: M2A2_AA_xj200 {
		scope = protected; irScanToEyeFactor = 1.5;
	};

	class Bradley_C_xj200: M113 {
		vehicleClass = "TZK_Units_200_C";
		class HitGun {armor=4;material=52;name=gun;passThrough=1;}; armorGun=4;
		scope = private;
		displayName = $STR_DN_M2A2;
		picture = "\m2a2\im2a2.paa";
		model="\TZK_Objects\Model\M2A2_CBT_a1_w_xj200.p3d";
		canFloat = 0;
		armor = 200;
		nameSound = apc;
		weapons[] = {Cannon25HE_xj200,MachineGun7_6_xj200,HellfireLauncherM2A2_xj200};
		magazines[]={Cannon25HE_xj200,MachineGun7_6_xj200,HellfireLauncherM2A2_xj200,HellfireLauncherM2A2_xj200,HellfireLauncherM2A2_xj200,HellfireLauncherM2A2_xj200};
		threat[] = {0.5,0.5,1};
		gunnerOpticsModel="\CBT_Brad\CBT_m2_sight.p3d";
		soundEnviron[]={"\CBT_Brad\sound\m2treads.ogg",0.4,1.0};
		soundEngine[]={"\CBT_Brad\sound\m2eng.ogg",0.2,1.0};
		gunnerAction = ManActM2A2GunnerOut;
		gunnerInAction = ManActM2A2Gunner;
		driverAction = ManActM2A2Driver;
		driverInAction = ManActM2A2Driver;
		commanderAction = ManActM2A2CommanderOut;
		commanderInAction = ManActM2A2Commander;
		hasCommander = 1;
		outGunnerMayFire = 0;
		forceHideGunner = 0;
		viewGunnerInExternal = 0;
		commanderUsesPilotView = 1;
		transportSoldier = 6;
		class GunClouds: WeaponCloudsMGun {};
		class Turret {
			gunAxis = OsaHlavne;
			turretAxis = OsaVeze;
			soundServo[] = {"Vehicles\gun_elevate",0.0316228,1};
			gunBeg = "usti hlavne";
			gunEnd = "konec hlavne";
			body = OtocVez;
			gun = OtocHlaven;
			minElev = -4.5;
			maxElev = 74;
			minTurn = -360;
			maxTurn = 360;
		};
		class ComTurret {
			turretAxis = "OsaVelitele";
			gunAxis = "OsaHlavneVelitele";
			soundServo[] = {"Vehicles\gun_elevate",0.00031622773,1.2};
			gunBeg = "usti hlavne";
			gunEnd = "konec hlavne";
			minElev = -4;
			maxElev = 20;
			minTurn = -360;
			maxTurn = 360;
			body = "OtocVelitele";
			gun = "OtocHlavenVelitele";
		};
		class Animations {
			class CBT_TOW {
				type="rotation";
				animPeriod=3.0;
				selection="tow";
				axis="osa_tow";
				angle0=0;
				angle1=1.575;
			};
			class gun_recoil {
				type="rotation";
				animperiod=0.05;
				selection="rec";
				axis="osa_rec";
				angle0=0;
				angle1=-0.00103;
			};
			class suspension {
				type="rotation";
				animperiod=0.5;
				selection="sus_f";
				axis="osa_sus";
				angle0=-0.02;
				angle1=0.02;
			};
		};
		class IndicatorSpeed {
			selection = ukaz_rychlo;
			axis = osa_rychlo;
			angle = -270;
			min = 0;
			max = 37;
		};
	};
	class M2A2_C_xj200: Bradley_C_xj200 {
		scope = public;
		sensitivity=5; sensitivityEar=0.015;
		irScanRangeMin = 500
		irScanRangeMax = 4000
		irScanToEyeFactor = 2
		irScanGround = 0;
		driverCanSee=31;
		gunnerCanSee=31;
		commanderCanSee=31;
		displayName = "M2A2";
		cost = 200000;
		armor = 350;
		class EventHandlers : EH_APC {};
		class UserActions {
			class TransportTurnON : UA_TransportTurnON {}; class TransportTurnOFF : UA_TransportTurnOFF {};
			class EjectOneCargo : UA_EjectOneCargo {}; class EjectAllCargo : UA_EjectAllCargo {};
		};
	};
	class M2A2_AT_C_xj200: M2A2_C_xj200 {
		displayName="M2A2 AT";
		cost = 2000000;
		weapons[]={ATLauncherTank_xj200, 50calW_xj200};
		magazines[]=
		{GuidedAT_APC_xj200, GuidedAT_APC_xj200, GuidedAT_APC_xj200, GuidedAT_APC_xj200, GuidedAT_APC_xj200, GuidedAT_APC_xj200, GuidedAT_APC_xj200,
		50calW_xj200, 50calW_xj200,50calW_xj200,50calW_xj200,50calW_xj200,50calW_xj200,50calW_xj200,50calW_xj200,50calW_xj200,50calW_xj200};
		threat[]={1, 1, 0.5};
	};
	class M2A2_AA_C_xj200: M2A2_C_xj200 {
		displayName = "M2A2 AA";
		weapons[]={Stinger_xj200, MachineGun7_6_xj200};
		magazines[]={Stinger_xj200, Stinger_xj200, Stinger_xj200, Stinger_xj200, Stinger_xj200, Stinger_xj200, Stinger_xj200, Stinger_xj200, MachineGun7_6_xj200};
		threat[]={1, 0.9, 1};
		minFireTime = 1;
	};
	class M2A2_AA_Town_C_xj200: M2A2_AA_C_xj200 {
		scope = protected; irScanToEyeFactor = 1.5;
	};


	class BMP2_Base_xj200: BMP {
		vehicleClass = "TZK_Units_200";
		class HitGun {armor=4;material=52;name=gun;passThrough=1;}; armorGun=4;
		scope = private;
		displayName = $STR_DN_BMP2;
		model = "\bmp2\bmp2";
		armor = 250;
		weapons[] = {Cannon30_BMP2_xj200,MachineGun7_6_xj200,HellfireLauncherBMP2_xj200};
		magazines[]={Cannon30HE_BMP2_xj200,Cannon30AP_BMP2_xj200,MachineGun7_6_xj200,HellfireLauncherBMP2_xj200};
		class GunClouds: WeaponCloudsMGun {};
		class Turret {
			gunAxis = OsaHlavne;
			turretAxis = OsaVeze;
			soundServo[] = {"Vehicles\gun_elevate",0.0316228,1};
			gunBeg = "usti hlavne";
			gunEnd = "konec hlavne";
			body = OtocVez;
			gun = OtocHlaven;
			minElev = -4.5;
			maxElev = 74;
			minTurn = -360;
			maxTurn = 360;
		};
		class IndicatorSpeed {
			selection = ukaz_rychlo;
			axis = osa_rychlo;
			angle = -320;
			min = 0;
			max = 35;
		};
		threat[] = {0.5,0.5,1};
		transportSoldier = 6;
	};
	class BMP2_xj200: BMP2_Base_xj200 {
		scope = public;
		sensitivity=5; sensitivityEar=0.015;
		irScanRangeMin = 500
		irScanRangeMax = 4000
		irScanToEyeFactor = 2
		irScanGround = 0;
		driverCanSee=31;
		gunnerCanSee=31;
		commanderCanSee=31;
		armor = 330
		displayName="BMP2";
		class EventHandlers : EH_APC {};
		class UserActions {
			class TransportTurnON : UA_TransportTurnON {}; class TransportTurnOFF : UA_TransportTurnOFF {};
			class EjectOneCargo : UA_EjectOneCargo {}; class EjectAllCargo : UA_EjectAllCargo {};
		};
	};
	class BMP2_AT_xj200: BMP2_xj200 {
		displayName="BMP2 AT";
		cost = 2000000;
		weapons[]={ATLauncherTank_xj200, 50calE_xj200};
		magazines[]=
		{GuidedAT_APC_xj200, GuidedAT_APC_xj200, GuidedAT_APC_xj200, GuidedAT_APC_xj200, GuidedAT_APC_xj200, GuidedAT_APC_xj200, GuidedAT_APC_xj200,
		50calE_xj200, 50calE_xj200,50calE_xj200,50calE_xj200,50calE_xj200,50calE_xj200,50calE_xj200,50calE_xj200,50calE_xj200,50calE_xj200};
		threat[]={1, 1, 0.5};
	};
	class BMP2_AA_xj200: BMP2_xj200 {
		displayName="BMP2 AA";
		weapons[]={Strela_xj200, MachineGun7_6_xj200};
		magazines[]={Strela_xj200, Strela_xj200, Strela_xj200, Strela_xj200, Strela_xj200, Strela_xj200, Strela_xj200, Strela_xj200, MachineGun7_6_xj200};
		threat[]={1, 0.9, 1};
		minFireTime = 1;
	};
	class BMP2_AA_Town_xj200: BMP2_AA_xj200 {
		scope = protected; irScanToEyeFactor = 1.5;
	};

	class BMP2_Base_C_xj200: BMP {
		vehicleClass = "TZK_Units_200_C";
		class HitGun {armor=4;material=52;name=gun;passThrough=1;}; armorGun=4;
		scope = private;
		displayName = $STR_DN_BMP2;
		model="\CSLA_ARM\CSLA2_BMP2";
		armor = 250;
		weapons[] = {Cannon30_BMP2_xj200,MachineGun7_6_xj200,HellfireLauncherBMP2_xj200};
		magazines[]={Cannon30HE_BMP2_xj200,Cannon30AP_BMP2_xj200,MachineGun7_6_xj200,HellfireLauncherBMP2_xj200};
		class GunClouds: WeaponCloudsMGun {};
		class Turret {
			gunAxis = OsaHlavne;
			turretAxis = OsaVeze;
			soundServo[] = {"Vehicles\gun_elevate",0.0316228,1};
			gunBeg = "usti hlavne";
			gunEnd = "konec hlavne";
			body = OtocVez;
			gun = OtocHlaven;
			minElev = -4.5;
			maxElev = 74;
			minTurn = -360;
			maxTurn = 360;
		};
		class IndicatorSpeed{
			selection = ukaz_rychlo;
			axis = osa_rychlo;
			angle = -320;
			min = 0;
			max = 35;
		};
		threat[] = {0.5,0.5,1};
		transportSoldier = 6;
	};
	class BMP2_C_xj200: BMP2_Base_C_xj200 {
		scope = public;
		sensitivity=5; sensitivityEar=0.015;
		irScanRangeMin = 500
		irScanRangeMax = 4000
		irScanToEyeFactor = 2
		irScanGround = 0;
		driverCanSee=31;
		gunnerCanSee=31;
		commanderCanSee=31;
		armor = 330
		displayName="BMP2";
		class EventHandlers : EH_APC {};
		class UserActions {
			class TransportTurnON : UA_TransportTurnON {}; class TransportTurnOFF : UA_TransportTurnOFF {};
			class EjectOneCargo : UA_EjectOneCargo {}; class EjectAllCargo : UA_EjectAllCargo {};
		};
	};
	class BMP2_AT_C_xj200: BMP2_C_xj200 {
		displayName="BMP2 AT";
		cost = 2000000;
		weapons[]={ATLauncherTank_xj200, 50calE_xj200};
		magazines[]=
		{GuidedAT_APC_xj200, GuidedAT_APC_xj200, GuidedAT_APC_xj200, GuidedAT_APC_xj200, GuidedAT_APC_xj200, GuidedAT_APC_xj200, GuidedAT_APC_xj200,
		50calE_xj200, 50calE_xj200,50calE_xj200,50calE_xj200,50calE_xj200,50calE_xj200,50calE_xj200,50calE_xj200,50calE_xj200,50calE_xj200};
		threat[]={1, 1, 0.5};
	};
	class BMP2_AA_C_xj200: BMP2_C_xj200 {
		displayName="BMP2 AA";
		weapons[]={Strela_xj200, MachineGun7_6_xj200};
		magazines[]={Strela_xj200, Strela_xj200, Strela_xj200, Strela_xj200, Strela_xj200, Strela_xj200, Strela_xj200, Strela_xj200, MachineGun7_6_xj200};
		threat[]={1, 0.9, 1};
		minFireTime = 1;
	};
	class BMP2_AA_Town_C_xj200: BMP2_AA_C_xj200 {
		scope = protected; irScanToEyeFactor = 1.5;
	};

	
//EOF