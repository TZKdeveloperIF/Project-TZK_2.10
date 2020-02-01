// Car

	class QUAD_xj200: Car {
		scope = public;
		vehicleClass = "TZK_Units_200";
		displayName="QUAD";
		model="\GST_KawaP\GST_KawaP";
		picture="\GST_KawaP\KPpict";
		icon="\GST_KawaP\KPicon";
		crew = "Civilian6";
		side = 3;
		unloadInCombat = true;
		cost = 40000;
		maxSpeed=90;
		nameSound="car";
		accuracy=1.500000; //0.5. should be raised like 1.5 thus shilka will attack it
		fuelCapacity=50;
		armor=20;
		weapons[]={"SportCarHorn"};
		magazines[]={};
		driverAction="ManActJAWADriver";
		cargoAction[]={"ManActJAWACoDriver"};
		transportSoldier=0;
		transportAmmo=0
		extCameraPosition[]={0.5,1,-5};
		driverCanSee = "2+8+16";
		terrainCoef=1;
		turnCoef=2;
		brakeDistance=5;
		precision=8;
		preferRoads=flase;
		unitInfoType="UnitInfoCar";
		hideUnitInfo=0;
		armorWheels=0.1;
		armorEngine=0.5;
		damperSize = 0.1;
		damperForce = 20;
		predictTurnSimul=2.0;
		predictTurnPlan=2.0;
		class IndicatorSpeed
		{
			selection="ukaz_rychlo";
			axis="osa_rychlo";
			angle=270;
			min=0;
			max = 170/ 4.8;
		};
		class UserActions {
			class Unflip {
				displayName="Unflip Quad";
				position="pos driver";
				priority=3;
				radius=12;
				condition="alive this";
				statement="[this] exec {\TZK_Objects\Scripts\UnflipVehicle.sqs}";
			};
		};
	};

	class Jeep_xj200: Jeep {
		vehicleClass = "TZK_Units_200";
		class UserActions {
			class TransportTurnON : UA_TransportTurnON {}; class TransportTurnOFF : UA_TransportTurnOFF {};
			class EjectOneCargo : UA_EjectOneCargo {}; class EjectAllCargo : UA_EjectAllCargo {};
		};
	};
	class JeepMG_xj200: JeepMG {
		vehicleClass = "TZK_Units_200";
		class HitGun {armor=3;material=52;name=gun;passThrough=1;}; armorGun=3;
		class UserActions {
			class SwitchToDriverLand : UA_SwitchToDriverLand {}; class SwitchToGunnerLand : UA_SwitchToGunnerLand {};
		};
	};
	class HMMWV_xj200: Jeep {
		vehicleClass = "TZK_Units_200";
		displayName= $STR_DN_HMMV;
		model=\humr\HMMWV.p3d;
		picture=\humr\ihmmwv.paa;
		armor = 80;
		type=VArmor;
		cost=100000;
		dammageHalf[]=
		{
			jeep4x4_glass.paa,jeep4x4_glassB.paa,
			jeep_kab_sklo1.paa,jeep_kab_sklo1B.paa,
			jeep_kab_sklo2.paa,jeep_kab_sklo2B.paa,
			scud_sklo.paa,scud_skloB.paa,
			scud_sklo2.paa,scud_sklo2B.paa,
			scud_sklo3.paa,scud_sklo3B.paa,
			scud_sklo4.paa,scud_sklo4B.paa
		};
		dammageFull[]=
		{
			jeep4x4_glass.paa,jeep4x4_glassB.paa,
			jeep_kab_sklo1.paa,jeep_kab_sklo1B.paa,
			jeep_kab_sklo2.paa,jeep_kab_sklo2B.paa,
			scud_sklo.paa,scud_skloB.paa,
			scud_sklo2.paa,scud_sklo2B.paa,
			scud_sklo3.paa,scud_sklo3B.paa,
			scud_sklo4.paa,scud_sklo4B.paa
		};
		armorGlass=0.5;
		armorWheels=0.1;
		soundEngine[]={\humr\HMMWVengine,db-25,1.25};
		typicalCargo[]={Soldier, Soldier, SoldierLAW, Officer};
		class UserActions {
			class TransportTurnON : UA_TransportTurnON {}; class TransportTurnOFF : UA_TransportTurnOFF {};
			class EjectOneCargo : UA_EjectOneCargo {}; class EjectAllCargo : UA_EjectAllCargo {};
		};
	};
	class UAZ_xj200: UAZ {
		vehicleClass = "TZK_Units_200";
		class UserActions {
			class TransportTurnON : UA_TransportTurnON {}; class TransportTurnOFF : UA_TransportTurnOFF {};
			class EjectOneCargo : UA_EjectOneCargo {}; class EjectAllCargo : UA_EjectAllCargo {};
		};
	};
	class BRDM_xj200: LandVehicle {
		vehicleClass = "TZK_Units_200";
		unloadInCombat = 1;
		fuelCapacity = 100;
		scope = 2;
		crew = SoldierEB;
		side = 0;
		accuracy = 0.5;
		nameSound = APC;
		transportSoldier = 3;
		transportAmmo = 0;
		maxSpeed = 100;
		preferRoads = 1;
		unitInfoType = UnitInfoCar;
		hideUnitInfo = 1;
		cargoAction[] = {ManActUazCoDriver,ManActCargo};
		cargoIsCoDriver[] = {1,0};
		soundEngine[] = {"Vehicles\OldIdle1",0.316228,1.25};
		class ViewPilot
		{
			initAngleX = 10;
			minAngleX = -30;
			maxAngleX = 30;
			initAngleY = 0;
			minAngleY = -100;
			maxAngleY = 100;
			initFov = 0.7;
			minFov = 0.42;
			maxFov = 0.85;
		};
		threat[] = {0.5,0.5,0.1};
		class IndicatorSpeed
		{
			selection = ukaz_rychlo;
			axis = osa_rychlo;
			angle = -240;
			min = 0;
			max = 40;
		};
		class IndicatorRPM
		{
			selection = ukaz_rpm;
			axis = osa_rpm;
			angle = -170;
			min = 0;
			max = 1;
		};
		icon = bmp;
		soundGear[] = {"Vehicles\Gear_Trans1",0.001,1};
		soundCrash[] = {"Vehicles\crash_small2",0.316228,1};
		soundEnviron[] = {"Objects\noise",0.00316228,0.25};
		displayName = $STR_DN_BRMD;
		model = "\brmd\brmd.p3d";
		picture = "\brmd\ibrmd.paa";
		armor = 80;
		type = VArmor;
		cost = 100000;
		canFloat = 1;
		simulation = car;
		hasDriver = 1;
		hasGunner = 0;
		hasCommander = 0;
		hideProxyInCombat = 0;
		weapons[] = {CarHorn};
		magazines[]={};
		wheelCircumference = 4.513;
		turnCoef = 6;
		driverAction = ManActV3SDriver;
		dammageHalf[] = {"jeep_kab_sklo1.paa","jeep_kab_sklo1B.paa"};
		dammageFull[] = {"jeep_kab_sklo1.paa","jeep_kab_sklo1B.paa"};
		armorGlass = 0.5;
		armorWheels = 0.15;
		terrainCoef = 2;
		damperSize = 0.1;
		damperForce = 30;
		armorBody = 0.4;
		armorFuel = 1.4;
		armorLights = 0.4;
		scudLaunch = "";
		scudStart = "";
		typicalCargo[] = {Soldier,Soldier,SoldierLAW,Officer};
		class HitEngine
		{
			armor = 1.2;
			material = 60;
			name = engine;
			passThrough = 1;
		};
		formationX = 20;
		formationZ = 20;
		precision = 10;
		brakeDistance = 10;
		steerAheadSimul = 0.5;
		steerAheadPlan = 0.35;
		predictTurnSimul = 1.2;
		predictTurnPlan = 1.2;
		sensitivity = 0.6;
		class IndicatorSpeed2
		{
			selection = ukaz_rychlo2;
			axis = osa_rychlo2;
			angle = -240;
			min = 0;
			max = 16.67;
		};
		class UserActions {
			class TransportTurnON : UA_TransportTurnON {}; class TransportTurnOFF : UA_TransportTurnOFF {};
			class EjectOneCargo : UA_EjectOneCargo {}; class EjectAllCargo : UA_EjectAllCargo {};
		};
	};

	class Truck5t_xj200: Truck5t {
		vehicleClass = "TZK_Units_200";
		class UserActions {
			class TransportTurnON : UA_TransportTurnON {}; class TransportTurnOFF : UA_TransportTurnOFF {};
			class EjectOneCargo : UA_EjectOneCargo {}; class EjectAllCargo : UA_EjectAllCargo {};
		};
	};
	class Truck5t_C_xj200: Truck5t {
		vehicleClass = "TZK_Units_200_C";
        model="\ffur_uveh\5t\Mp_nato5t";
        hiddenSelections[]={"ammo"};
		class IndicatorSpeed {
			selection="ukaz_rychlo";
			axis="osa_rychlo";
			angle=-210;
			min=0;
			max="100 / 3.6";
		};
		class IndicatorRPM {
			selection="ukaz_rpm";
			axis="osa_rpm";
			angle=-220;
			min=0;
			max=1;
		};
		class UserActions {
			class TransportTurnON : UA_TransportTurnON {}; class TransportTurnOFF : UA_TransportTurnOFF {};
			class EjectOneCargo : UA_EjectOneCargo {}; class EjectAllCargo : UA_EjectAllCargo {};
		};
	};
	class Truck5tRepair_xj200: Truck5tRepair {
		class UserActions {
			class AttachInVehicle_Truck : UA_AttachInVehicle_Truck {}; class AttachOnFoot_Truck : UA_AttachOnFoot_Truck {};
		};
	};

	class Ural_xj200: Ural {
		vehicleClass = "TZK_Units_200";
		class UserActions {
			class TransportTurnON : UA_TransportTurnON {}; class TransportTurnOFF : UA_TransportTurnOFF {};
			class EjectOneCargo : UA_EjectOneCargo {}; class EjectAllCargo : UA_EjectAllCargo {};
		};
	};
	class UralRepair_xj200: UralRepair {
		class UserActions {
			class AttachInVehicle_Truck : UA_AttachInVehicle_Truck {}; class AttachOnFoot_Truck : UA_AttachOnFoot_Truck {};
		};
	};

	class Ural_C_xj200: Ural {
		vehicleClass = "TZK_Units_200_C";
        model="\URALS_NEW\ural4320_closed.p3d";
        hiddenSelections[]={"ammo"};
		dammageHalf[]={"\URALS_NEW\in5okno.paa","\URALS_NEW\dead\in5okno.paa","\URALS_NEW\ural_1.paa","\URALS_NEW\dead\ural_1.paa","\URALS_NEW\ural_2.paa","\URALS_NEW\dead\ural_2.paa","\URALS_NEW\ural_3.paa","\URALS_NEW\dead\ural_3.paa"};
		dammageFull[]={"\URALS_NEW\in5okno.paa","\URALS_NEW\dead\in5okno.paa","\URALS_NEW\ural_1.paa","\URALS_NEW\dead\ural_1.paa","\URALS_NEW\ural_2.paa","\URALS_NEW\dead\ural_2.paa","\URALS_NEW\ural_3.paa","\URALS_NEW\dead\ural_3.paa"};
		class IndicatorSpeed {
			selection="ukaz_rychlo";
			axis="osa_rychlo";
			angle=-280;
			min=0;
			max=40;
		};
		class IndicatorRPM {
			selection="ukaz_rpm";
			axis="osa_rpm";
			angle=-280;
			min=0;
			max=1;
		};
		class UserActions {
			class TransportTurnON : UA_TransportTurnON {}; class TransportTurnOFF : UA_TransportTurnOFF {};
			class EjectOneCargo : UA_EjectOneCargo {}; class EjectAllCargo : UA_EjectAllCargo {};
		};
	};
	class UralRepair_C_xj200: Ural_C_xj200 {
        model="\URALS_NEW\ural4320_repair.p3d";
		displayName = "$STR_DN_URAL_REPAIR";
        hiddenSelections[]={};
		transportSoldier=2;
		transportRepair=200000000;
		weapons[] = {};
		magazines[]={};
		type=0;
		threat[]={0.0,0.0,0.0};
		typicalCargo[]={};
		class UserActions {
			class AttachInVehicle_Truck : UA_AttachInVehicle_Truck {}; class AttachOnFoot_Truck : UA_AttachOnFoot_Truck {};
		};
	};
	class UralRefuel_C_xj200: Ural_C_xj200 {
		picture="iuralfuel";
		icon="Fuel_move";
		scope=2;
		displayName="$STR_DN_URAL_FUEL";
		accuracy=0.8;
        model="\URALS_NEW\ural4320_GAS.p3d";
        hiddenSelections[]={};
		weapons[] = {};
		magazines[]={};
		transportFuel=3000;
		transportSoldier=2;
		transportAmmo=0;
		type=0;
		threat[]={0.0,0.0,0.0};
	};

	class HMMWV_M2wS_xj200: jeepMG {
		vehicleClass = "TZK_Units_200"; displayName="HMMWV M2";
		model = "\TZK_Objects\Model\wood_hmmwv_m2wS.p3d";
		picture="\FK_HMMWV\ihmmwv_f.paa";
		weapons[] = {}; // Car with weapon should better not equip weapon. But editors shouldn't make them haven't any magazines as well.
		magazines[]={Browning_xj200}; // Magazines must be empty for cars or game may crash in some situation, but they should be removed but not define an empty array here.
		accuracy=1.500000; // Should be raised like 1.5 thus shilka will attack it

		hiddenselections[]={"IFF_Hood","IFF_Door1","IFF_Door2","StuffA1","StuffA2","StuffB1","StuffC1","StuffD1","StuffD2","StuffD3","StuffE1"};

		maxSpeed=100;
		preferRoads=true;

		scope=public;
		scopeWeapon=2;
		scopeMagazine=2;
		optics=true;
		opticsZoomMin=0.0;
		opticsZoomMax=0.0;
		opticsFlare = false; 

		soundEngine[]={"\FK_HMMWV\sound\Engine_hmmwv.wss",db-25,1.25};

		armor=80;
		armorGlass=1.5
		armorWheels=0.5
		type=VArmor;
		cost=100000;

		transportSoldier = 3;
		hideWeaponsDriver=true;
		hideWeaponsGunner=true;
		hideWeaponsCargo=false;
		cargoAction[]={"ManActHmmwvCargo01","ManActHmmwvCargo02","ManActHmmwvCargo03","ManActJeepDriver"};

		class TurretBase {};
		class Turret: TurretBase {
			gunAxis = "OsaHlavne";
			turretAxis = "OsaVeze";
			soundServo[]={"",1.0};

			gunBeg = "usti hlavne";
			gunEnd = "konec hlavne";
			
			minElev=-10; 
			maxElev=+20;
			minTurn=-180; 
			maxTurn=+180;

			body = "OtocVez";
			gun = "OtocHlaven";
		};
		gunnerAction="ManActHmmwvGunner01";
		ejectDeadGunner=false;
		hasCommander=false;
		driverIsCommander=true;

		class UserActions {
			class EquipM2 : UA_EquipM2 {};
			
			class SwitchToDriverLand : UA_SwitchToDriverLand {}; class SwitchToGunnerLand : UA_SwitchToGunnerLand {};
			class TransportTurnON : UA_TransportTurnON {}; class TransportTurnOFF : UA_TransportTurnOFF {};
			class EjectOneCargo : UA_EjectOneCargo {}; class EjectAllCargo : UA_EjectAllCargo {};
		};
		class EventHandlers {
			Init = "[_this select 0] exec ""\FK_HMMWV\script\IFF_show.sqs"", [_this select 0] exec ""\FK_HMMWV\script\Stuff_show.sqs"";  _this exec {\TZK_Objects\Scripts\InitEventHandlers\removeAllWeapons.sqs};  ";
		};
	};
	class BRDM_PK_xj200: BRDM {
		vehicleClass = "TZK_Units_200"; displayName = "BRDM PK";
		model = "\BAS_RUSOPFOR\BAS_BRDM_PK.p3d";
		class HitHull {armor = 1;material = 50;name = hull;passThrough = 1;};
		weapons[] = {}; // Car with weapon should better not equip weapon. But editors shouldn't make them haven't any magazines as well.
		magazines[]={Browning_xj200}; // Magazines must be empty for cars or game may crash in some situation, but they should be removed but not define an empty array here.
		accuracy=1.500000; // Should be raised like 1.5 thus shilka will attack it

		armor = 120;
		destrType = DestructEngine;
		
		extCameraPosition[]={0,1,-10};
		picture = "\TZK_Objects\Texture\BRDMPK.paa";

		unitInfoType = UnitInfoSoldier;
		hideUnitInfo = false;

		hasGunner = true;
		gunnerAction = ManActBAS_RUSGunner;
		gunnerCanSee = CanSeeRadarC+CanSeeOptics+CanSeeEar;
		irScanRangeMin = 50;
		irScanRangeMax = 1000;
		irScanToEyeFactor = 0.616;
		irScanGround = true;
		driverIsCommander = true;
		driverCanSee = CanSeeRadarC+CanSeeEar;
		gunnerOpticsModel = "optika_empty";
		castGunnerShadow = true;

		type = VArmor;
		//threat[] VSoft, VArmor, VAir
		threat[] = {0.8, 0.2, 0.6};

		transportSoldier = 4;

		driverAction = ManActV3SDriver;
		cargoAction[] = {ManActCargo};

		class WeaponCloudsGun {};
		class WeaponCloudsMGun: WeaponCloudsGun {};
		class MGunClouds: WeaponCloudsMGun {
			access = ReadOnlyVerified;
			cloudletDuration = 0.2;
			cloudletAnimPeriod = 0.4;
			cloudletSize = 4.0;
			cloudletAlpha = 0.3;
			cloudletGrowUp = 0.05;
			cloudletFadeIn = 0;
			cloudletFadeOut = 0.1;
			cloudletAccY = 0.4;
			cloudletMinYSpeed = 0.2;
			cloudletMaxYSpeed = 0.6;
			cloudletShape = "missileSmoke";
			cloudletColor[] = {0.6, 0.6, 0.6, 0.25};
			interval = 0.02;
			size = 1;
			sourceSize = 0.5;
			timeToLive = 0.1;
			initT = 0;
			deltaT = 0;
			class Table
			{
				class T0 {maxT = 0; color[] = {1, 1, 1, 0};}
			}
		};
		class TurretBase {};
		class Turret: TurretBase {
			gunAxis = "OsaHlavne";
			turretAxis = "OsaVeze";
			soundServo[] =  {};

			gunBeg = "usti hlavne";
			gunEnd = "konec hlavne";
			minElev = -20;
			maxElev = 55;
			minTurn = -360;
			maxTurn = 360;
			body = "OtocVez";
			gun = "OtocHlaven";
		};
		class ViewGunner {
			initAngleX = 5; minAngleX = -30; maxAngleX = +30;
			initAngleY = 0; minAngleY = 0; maxAngleY = 0;
			initFov = 0.7; minFov = 0.42; maxFov = 0.85;
		};
		class ViewOpticsBase {};
		class ViewOptics: ViewOpticsBase {
			initFov = 0.3; minFov = 0.07; maxFov = 0.35;
			initAngleX = 5; minAngleX = -30; maxAngleX = 80;
			initAngleY = 0; minAngleY = -180; maxAngleY = 180;
		};
		
		class UserActions {
			class EquipPKT : UA_EquipPKT {};
			
			class SwitchToDriverLand : UA_SwitchToDriverLand {}; class SwitchToGunnerLand : UA_SwitchToGunnerLand {};
			class TransportTurnON : UA_TransportTurnON {}; class TransportTurnOFF : UA_TransportTurnOFF {};
			class EjectOneCargo : UA_EjectOneCargo {}; class EjectAllCargo : UA_EjectAllCargo {};
		};
		class EventHandlers { Init = " _this exec {\TZK_Objects\Scripts\InitEventHandlers\removeAllWeapons.sqs}; "; };
	};
	class HMMMV_TOW2A_xj200 : JeepMG {
		model="\TZK_Objects\Model\mcar_hmmwv_xj200.p3d";
		displayName="HMMWV TOW";
		weapons[] = {}; // Car with weapon should better not equip weapon. But editors shouldn't make them haven't any magazines as well.
		magazines[]={Browning_xj200}; // Magazines must be empty for cars or game may crash in some situation, but they should be removed but not define an empty array here.
		accuracy=1.500000; // Should be raised like 1.5 thus shilka will attack it

		unitInfoType="UnitInfoShip";
		hideUnitInfo = 0;
		camouflage = 2;
		audible = 3;
		sensitivity=3;
		sensitivityEar=0.0175;
		maxSpeed=90;
		side = TWest;
		
		threat[]={0.4, 1, 0.2};
		airLock=0;
		picture="\MCAR_humvee\ihmmwv";
		vehicleClass = "TZK_Units_200";
		
		getInRadius = 3.5;
		fuelCapacity=400;
		irScanGround=1;
		irScanRangeMin=100;
		irScanRangeMax=3000;
		irScanToEyeFactor=0.616;
		driverCanSee=31;
		gunnerCanSee=31;
		gunnerHasOptics=1;
		castGunnerShadow = 1;
		hideProxyInCombat=0;
		ejectDeadDriver = 0;
		ejectDeadGunner = 0;
		ejectDeadCommander = 0;
		ejectDeadCargo = 0;
		castDriverShadow=0;
		hasCommander=0;
		driverIsCommander=1;
		nightVision=1;
		cost=100000;
		formationX=20;
		formationZ=30;
		formationTime=30;
		transportSoldier=3;
		
		transportMaxWeapons=4;
		transportMaxMagazines=20;

		hiddenSelections[]={"mishead","misback"};

		class Turret {
			gunAxis = "OsaHlavne";
			turretAxis = "OsaVeze";
			gunBeg = "usti hlavne";
			gunEnd = "konec hlavne";
			body = "otocvez";
			gun = "otochlaven";

			minElev=-9;
			maxElev= 45;
			minTurn=-360;
			maxTurn= 360;
			soundServo[]={"",0,0};
		};
		class ViewOpticsBase {};
		class ViewOptics: ViewOpticsBase {
			initAngleX=0;
			minAngleX=-30;
			maxAngleX=+30;
			initAngleY=70;
			minAngleY=-100;
			maxAngleY=+100;
			initFov=0.18;
			minFov=0.18;
			maxFov=0.18;
		};
		class ViewGunner {
			initAngleX=0;
			minAngleX=0;
			maxAngleX=0;
			initAngleY=0;
			minAngleY=0;
			maxAngleY=0;
			initFov=0.700000;
			minFov=0.420000;
			maxFov=0.850000;
		};
		gunnerOpticsModel="optika_LAW";
		class MGunClouds: WeaponFireMGun {};

		class UserActions {
			class SwitchToDriverLand : UA_SwitchToDriverLand {}; class SwitchToGunnerLand : UA_SwitchToGunnerLand {};
			
			class EquipLAW: UA_EquipLAW {};
			class EquipCarlGustav: UA_EquipCarlGustav {};
			class EquipGrenade: UA_EquipGrenade {};
			class EquipMortar: UA_EquipMortar {};
			class EquipMG: UA_EquipMG {};
			class ShowEquipList: UA_ShowEquipList {}; class HideEquipList: UA_HideEquipList {};
			class TransportTurnON : UA_TransportTurnON {}; class TransportTurnOFF : UA_TransportTurnOFF {};
			class EjectOneCargo : UA_EjectOneCargo {}; class EjectAllCargo : UA_EjectAllCargo {};
		};
		class EventHandlers {
			Init = " _this exec {\TZK_Objects\Scripts\InitEventHandlers\removeAllWeapons.sqs}";
			Fired = "_this exec {\TZK_Objects\Scripts\VirtualFired.sqs}";
		//	Init = " _this exec {\TZK_Objects\Scripts\InitEventHandlers\removeAllWeapons.sqs}; if !(isNull player) then {(_this select 0) addEventHandler [{Fired}, {if (local (_this select 0)) then {_this exec {\TZK_Objects\Scripts\VirtualFired.sqs}}}]};";
		//	Fired = "if (local (_this select 0)) then {_this exec {\TZK_Objects\Scripts\VirtualFired.sqs}}";
		};
	};
	class BRDM_Gaskin_xj200 : BRDM_xj200 {
		displayName="BRDM Gaskin"; vehicleClass = "TZK_Units_200";
		model="\TZK_Objects\Model\mcar_gaskin_xj200.p3d";
		picture="\mcar_gaskin\sa9\hudi_sa9.paa"; icon="bmp";
		weapons[] = {}; // Car with weapon should better not equip weapon. But editors shouldn't make them haven't any magazines as well.
		magazines[]={Browning_xj200}; // Magazines must be empty for cars or game may crash in some situation, but they should be removed but not define an empty array here.
		accuracy=1.500000; // Should be raised like 1.5 thus shilka will attack it
		
		side = TEast;
		unitInfoType="UnitInfoShip";
		hideUnitInfo = 0;
		fuelCapacity=100;
		
		nameSound="APC";
		unloadInCombat=0;
		crew="SoldierECrew";
		transportSoldier=3;
		maxSpeed=95;
		threat[]= {0,0.2,1};
		castGunnerShadow=0;
		ejectDeadDriver = 0;
		ejectDeadGunner = 0;
		ejectDeadCommander = 0;
		ejectDeadCargo = 0;
		castDriverShadow=0;
		irScanRangeMin=300;
		irScanRangeMax=5000;
		irScanToEyeFactor=0.616;
	   	irScanGround=0;
		class Turret {
			gunAxis = "OsaHlavne";
			turretAxis = "OsaVeze";
			gunBeg = "usti hlavne";
			gunEnd = "konec hlavne";
			body = "OtocVez";
			gun = "OtocHlaven";

			minElev=-10;
			maxElev=45;
			minTurn=-360;
			maxTurn=360;
			soundServo[]={"Vehicles\gun_elevate",0.021623,1.000000};
		};
		gunnerOpticsModel="optika_RPG";
		armor=100;
		type="VSoft";
		cost=10000000;
		hasDriver=1;
		hasGunner=1;
		hasCommander=0;
		driverIsCommander=1;
		viewGunnerInExternal=1;
		hideProxyInCombat=0;
		camouflage=2;
		audible=3;
		sensitivity=2;
		sensitivityEar=0.02;
		driverCanSee=31;
		gunnerCanSee=31;
		gunnerAction="ManActBMPGunnerOut";
		gunnerInAction="ManActBMPGunnerOut";
		driverAction = "ManActV3SDriver";
		
		class MGunClouds: WeaponFireMGun {};
		hiddenselections[] = {"pod1bck","pod2bck","pod3bck","pod4bck","latpod","missile1","missile2","missile3","missile4"};
		class Animations {
			class pod1
			{
				type ="rotation";
				animPeriod =.25;
				selection ="pod1frt";
				axis ="axispod1";
				angle0 =0;
				angle1 =-1.65;
			};
			class pod2
			{
				type ="rotation";
				animPeriod =.25;
				selection ="pod2frt";
				axis ="axispod2";
				angle0 =0;
				angle1 =-1.65;
			};
			class pod3
			{
				type ="rotation";
				animPeriod =.25;
				selection ="pod3frt";
				axis ="axispod3";
				angle0 =0;
				angle1 =-1.65;
			};
			class pod4
			{
				type ="rotation";
				animPeriod =.25;
				selection ="pod4frt";
				axis ="axispod4";
				angle0 =0;
				angle1 =-1.65;
			};
		};

		class UserActions {
			class SwitchToDriverLand : UA_SwitchToDriverLand {}; class SwitchToGunnerLand : UA_SwitchToGunnerLand {};
			
			class EquipRPG: UA_EquipRPG {};
			class EquipAT4: UA_EquipAT4 {};
			class EquipGrenade: UA_EquipGrenade {};
			class EquipMortar: UA_EquipMortar {};
			class EquipMG: UA_EquipMG {};
			class ShowEquipList: UA_ShowEquipList {}; class HideEquipList: UA_HideEquipList {};
			class TransportTurnON : UA_TransportTurnON {}; class TransportTurnOFF : UA_TransportTurnOFF {};
			class EjectOneCargo : UA_EjectOneCargo {}; class EjectAllCargo : UA_EjectAllCargo {};
		};
		class EventHandlers {
			Init = " _this exec {\TZK_Objects\Scripts\InitEventHandlers\removeAllWeapons.sqs}";
			Fired = "_this exec {\TZK_Objects\Scripts\VirtualFired.sqs}";
		//	Init = " _this exec {\TZK_Objects\Scripts\InitEventHandlers\removeAllWeapons.sqs}; if !(isNull player) then {(_this select 0) addEventHandler [{Fired}, {if (local (_this select 0)) then {_this exec {\TZK_Objects\Scripts\VirtualFired.sqs}}}]};";
		//	Fired = "if (local (_this select 0)) then {_this exec {\TZK_Objects\Scripts\VirtualFired.sqs}}";
		};
	};
	
// Ship
	class CWKZodiac_xj200: BoatW {
		simulation = "ship";
		vehicleClass = "TZK_Units_200";
		scope = private;
		hasGunner= 0 ;
		soundEngine[]={\cwkzodiac\motor.wav,db-44,1};
		picture=\cwkzodiac\icon.paa;
		icon ="\cwkzodiac\zod.paa";
		driverAction= manactCWKZodiacDriverA_xj200;
		hasCommander=0;
		crew="SoldierWB";
		maxSpeed=70;
		side = TWest;
		transportSoldier=6;
		displayName="Zodiac - Grey";
		accuracy=1;
		precision=1;
		fuelCapacity=40;
		brakeDistance=0.00001;
		model="\CWKZodiac\CWKZodiac"
		weapons[] = {};
		magazines[]={};
		class EventHandlers : EH_Boat {};
	};
	class Zodiac_xj200: CWKZodiac_xj200 {
		sensitivity=5; sensitivityEar=0.03
		accuracy=0.5
		scope = private;
		armor = 20
		fuelCapacity=100;
		secondaryExplosion = 1;
		side = TCivilian;
		displayName = "Zodiac";
		typicalCargo[]={};
		threat[]={0.1, 0.1, 0.1};
		cost = 10000;
		class EventHandlers : EH_Boat {};
		class UserActions {
			class TransportTurnON : UA_TransportTurnON {}; class TransportTurnOFF : UA_TransportTurnOFF {};
			class EjectOneCargo : UA_EjectOneCargo {}; class EjectAllCargo : UA_EjectAllCargo {};
		};
	};
	class ZodiacW_xj200: Zodiac_xj200 {
		displayName = "Zodiac West";
		scope = public;
		side = TWest;
	};
	class ZodiacE_xj200: Zodiac_xj200 {
		displayName = "Zodiac East";
		scope = public;
		side = TEast;
	};
	class GunBoat_xj200: BoatW {
		sensitivity=5; sensitivityEar=0.03;
		accuracy=0.5;
		scope = private;
	//	simulation = "tank";  // Only when simulation changed can ship/car fire missiles. Another way is using "Fired"-EH.
		side = TCivilian;
		fuelCapacity=1000;
		secondaryExplosion = 1;
		displayName = "GunBoat";
		vehicleClass = "TZK_Units_200";
		weapons[]={Cannon_20HE_xj200, Cannon_20AP_xj200};
		magazines[]={Mag_20HE_800_03_xj200, Mag_20AP_200_03_xj200};
		typicalCargo[]={};
		threat[]={0.9, 0.4, 0.8};
		cost = 100000;
		class EventHandlers : EH_Boat {};
		class UserActions {
			class TransportTurnON : UA_TransportTurnON {}; class TransportTurnOFF : UA_TransportTurnOFF {};
			class EjectOneCargo : UA_EjectOneCargo {}; class EjectAllCargo : UA_EjectAllCargo {};
			
			class AttachInVehicleCenter : UA_AttachInVehicle_Center {};
			class AttachInVehicleRight : UA_AttachInVehicle_Right {};
			class AttachInVehicleLeft : UA_AttachInVehicle_Left {};
			class AttachOnFootCenter : UA_AttachOnFoot_Center {};
			class AttachOnFootRight : UA_AttachOnFoot_Right {};
			class AttachOnFootLeft : UA_AttachOnFoot_Left {};
			
			class SwitchToDriverLand : UA_SwitchToDriverLand {}; class SwitchToGunnerLand : UA_SwitchToGunnerLand {};
		};
	};
	class GunBoatW_xj200: GunBoat_xj200 {
		displayName = "GunBoat West";
		scope = public;
		side = TWest;
		armor = 500;
	};
	class GunBoatW_Custom_xj200: GunBoatW_xj200 {
		scope = protected;
		armor = 600;
		weapons[] = {}; // Unnecessary for ship to set weapons/magazines like this. Make uniform with car only.
		magazines[]={Browning_xj200};
		class UserActions {
			class SwitchToDriverLand : UA_SwitchToDriverLand {}; class SwitchToGunnerLand : UA_SwitchToGunnerLand {};
			
			class EquipLAW: UA_EquipLAW {
				condition = "{_x=={VirtualEquipSwitchMag_xj200}} count magazines this > 0 && count magazines this < 31 && local this && ((driver this) in units group player || (gunner this) in units group player)";
			};
			class EquipCarlGustav: UA_EquipCarlGustav {
				condition = "{_x=={VirtualEquipSwitchMag_xj200}} count magazines this > 0 && count magazines this < 29 && local this && ((driver this) in units group player || (gunner this) in units group player)";
			};
			class EquipGrenade: UA_EquipGrenade {
				condition = "{_x=={VirtualEquipSwitchMag_xj200}} count magazines this > 0 && count magazines this < 31 && local this && ((driver this) in units group player || (gunner this) in units group player)";
			};
			class EquipMortar: UA_EquipMortar {
				condition = "{_x=={VirtualEquipSwitchMag_xj200}} count magazines this > 0 && count magazines this < 31 && local this && ((driver this) in units group player || (gunner this) in units group player)";
			};
			class EquipMG: UA_EquipMG {
				condition = "{_x=={VirtualEquipSwitchMag_xj200}} count magazines this > 0 && count magazines this < 31 && local this && ((driver this) in units group player || (gunner this) in units group player)";
			};
			class ShowEquipList: UA_ShowEquipList {}; class HideEquipList: UA_HideEquipList {};
			class TransportTurnON : UA_TransportTurnON {}; class TransportTurnOFF : UA_TransportTurnOFF {};
			class EjectOneCargo : UA_EjectOneCargo {}; class EjectAllCargo : UA_EjectAllCargo {};
		};
		class EventHandlers : EH_Boat {
			Init = " _this exec {\TZK_Objects\Scripts\InitEventHandlers\removeAllWeapons.sqs}";
			Fired = "_this exec {\TZK_Objects\Scripts\VirtualFired.sqs}";
		//	Init = "if !(isNull player) then {(_this select 0) addEventHandler [{Fired}, {if (local (_this select 0)) then {_this exec {\TZK_Objects\Scripts\VirtualFired.sqs}}}]};";
		//	Fired = "if (local (_this select 0)) then {_this exec {\TZK_Objects\Scripts\VirtualFired.sqs}}";
		};
	};
	class GunBoatE_xj200: GunBoat_xj200 {
		scope = public;
		displayName = "GunBoat East";
		side = TEast;
		weapons[]={CannonE_20HE_xj200, CannonE_20AP_xj200};
		magazines[]={Mag_20HE_800_03_xj200, Mag_20AP_200_03_xj200};
		armor = 500;
		transportSoldier=10
	};
	class GunBoatE_Custom_xj200: GunBoatE_xj200 {
		scope = protected;
		armor = 600;
		weapons[] = {}; // Unnecessary for ship to set weapons/magazines like this. Make uniform with car only.
		magazines[]={Browning_xj200};
		class UserActions {
			class SwitchToDriverLand : UA_SwitchToDriverLand {}; class SwitchToGunnerLand : UA_SwitchToGunnerLand {};
			
			class EquipRPG: UA_EquipRPG {
				condition = "{_x=={VirtualEquipSwitchMag_xj200}} count magazines this > 0 && count magazines this < 31 && local this && ((driver this) in units group player || (gunner this) in units group player)";
			};
			class EquipAT4: UA_EquipAT4 {
				condition = "{_x=={VirtualEquipSwitchMag_xj200}} count magazines this > 0 && count magazines this < 29 && local this && ((driver this) in units group player || (gunner this) in units group player)";
			};
			class EquipGrenade: UA_EquipGrenade {
				condition = "{_x=={VirtualEquipSwitchMag_xj200}} count magazines this > 0 && count magazines this < 31 && local this && ((driver this) in units group player || (gunner this) in units group player)";
			};
			class EquipMortar: UA_EquipMortar {
				condition = "{_x=={VirtualEquipSwitchMag_xj200}} count magazines this > 0 && count magazines this < 31 && local this && ((driver this) in units group player || (gunner this) in units group player)";
			};
			class EquipMG: UA_EquipMG {
				condition = "{_x=={VirtualEquipSwitchMag_xj200}} count magazines this > 0 && count magazines this < 31 && local this && ((driver this) in units group player || (gunner this) in units group player)";
			};
			class ShowEquipList: UA_ShowEquipList {}; class HideEquipList: UA_HideEquipList {};
			class TransportTurnON : UA_TransportTurnON {}; class TransportTurnOFF : UA_TransportTurnOFF {};
			class EjectOneCargo : UA_EjectOneCargo {}; class EjectAllCargo : UA_EjectAllCargo {};
		};
		class EventHandlers : EH_Boat {
			Init = " _this exec {\TZK_Objects\Scripts\InitEventHandlers\removeAllWeapons.sqs}";
			Fired = "_this exec {\TZK_Objects\Scripts\VirtualFired.sqs}";
		//	Init = "if !(isNull player) then {(_this select 0) addEventHandler [{Fired}, {if (local (_this select 0)) then {_this exec {\TZK_Objects\Scripts\VirtualFired.sqs}}}]};";
		//	Fired = "if (local (_this select 0)) then {_this exec {\TZK_Objects\Scripts\VirtualFired.sqs}}";
		};
	}

// Scud. Abandoned units.
	class ScudW_xj200: Scud {
		vehicleClass="TZK_Units_200";
		side = TWest;
		class UserActions {
			class Introduction
			{
				displayName = "Introduction";
				radius = 3;
				position = "pos driver";
				hideOnUse = 0;
				condition = "player in (crew this)";
				statement = "this groupchat ""The Scud-D will assault co8. Please make sure co8 is set at the correct position before launch.""";
			};
		};
	};
	class ScudE_xj200: ScudW_xj200 {
		side = TEast;
	};

	
//EOF