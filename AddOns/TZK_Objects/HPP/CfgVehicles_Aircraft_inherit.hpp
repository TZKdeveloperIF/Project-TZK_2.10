// Helicopter
#define SpoofMagazines "SpoofSwitch_xj200", "SpoofCount_xj200", "SpoofCount_xj200", "SpoofCount_xj200", "SpoofCount_xj200", "SpoofCount_xj200", "SpoofCount_xj200", "SpoofCount_xj200", "SpoofCount_xj200"
	// Standard Transport Helicopter
	class Mi17_xj200: Mi17 {
		vehicleClass = "TZK_Units_200";
		accuracy = 1000 // make ai use MG ON it (ofp bug)
		weapons[] = {};
		magazines[]={SpoofMagazines};
		class EventHandlers : EH_Heli {};
		class UserActions {
			class SetFlightAltitude : UA_SetFlightAltitude {};

			class SpoofMissileON : UA_SpoofMissileON{}; class SpoofMissileOFF : UA_SpoofMissileOFF{};
			
			class AttachInVehicle : UA_AttachInVehicle_Heli {}; class AttachOnFoot : UA_AttachOnFoot_Heli {};
			class TransportTurnON : UA_TransportTurnON {}; class TransportTurnOFF : UA_TransportTurnOFF {};
			class EjectOneCargo : UA_EjectOneCargo {}; class EjectAllCargo : UA_EjectAllCargo {};

			class LAND : UA_LAND_Heli {};
		};
	};
	class Mi17_MG_xj200: Mi17_xj200 {
		displayName = "Mi17 MG";
		weapons[] = {Cannon_Heli_xj200};
		magazines[]={Mag_Heli_2000_xj200, SpoofMagazines};
	};
	class Mi17_LGB_xj200: Mi17_xj200 {
		displayName = "Mi17 LGB";
		laserScanner = true;
		weapons[] = {LGBLauncher_xj200};
		magazines[]={Mag_LGB_2_xj200, SpoofMagazines};
	};

	class Mi17_Base_C_xj200:Helicopter {
		scope = private;
		crew="SoldierEPilot";
		picture="imi17";
		maxSpeed=240;
		side=0;
		displayName="$STR_DN_MI17";
		nameSound="mi17";
		accuracy=0.5;
		cost=3000000;
		armor=50;
		//model="mi17_HIP";
		//model="\mcm_ru_air\hip\Mi17_rus2.p3d";
		//model below has woodland camo but not as nice as the model above
		model="\mcm_ru_air\hip\Mi17_rus2.p3d";
		hiddenSelections[]={"cdln1","cdrn1","cdln2","cdrn2","zasleh2","zasleh3","zasleh4","zasleh5","ss_cms","ss_engine1","ss_engine2","ss_fuel","ss_gun","ss_transm","ss_weap","num_1","num_2","deslight"};
		rotorBig="hip_vrt_v";
		rotorBigBlend="hip_vrtblur_v";
		rotorSmall="vrthind_m";
		rotorSmallBlend="vrthind_m_bl";
		soundEngine[]={"vehicles\Slow4blade_Loop1",3.1622777,1};
		weapons[] = {"Rocket57x192"};
		magazines[]={"Rocket57x192", SpoofMagazines};
		driverAction="ManActMi17Pilot";
		gunnerAction="ManActMi17Pilot";
	//	gunnerUsesPilotView=1;
		gunnerUsesPilotView=0;
		transportSoldier=12;
		transportAmmo=0;
		type=2;
		threat[]={0.6,1,0.4};
		typicalCargo[]={"Soldier","Soldier","SoldierLAW","SoldierLAW"};
		class IndicatorAltRadar {
			selection="alt";
			axis="osa_alt";
			angle=-360;
			min=0;
			max=304;
		};
		class IndicatorAltBaro {
			selection="nm_alt";
			axis="osa_nm_alt";
			angle=-180;
			min=0;
			max=61;
			};
		class IndicatorSpeed {
			selection="mph";
			axis="osa_mph";
			angle=-350;
			min=0;
			max=125;
			};
		class IndicatorVertSpeed {
			selection="vert_speed";
			axis="osa_vert_speed";
			angle=-300;
			min=-30;
			max=30;
			};
		class IndicatorRPM {
			selection="rpm";
			axis="osa_rpm";
			angle=-320;
			min=0;
			max=12;
			};
		class IndicatorAltRadar2:IndicatorAltRadar {
			selection="alt2";
			axis="osa_alt2";
			};
		class IndicatorAltBaro2:IndicatorAltBaro {
			selection="nm_alt2";
			axis="osa_nm_alt2";
			};
		class IndicatorSpeed2:IndicatorSpeed {
			selection="mph2";
			axis="osa_mph2";
			};
		class IndicatorVertSpeed2:IndicatorVertSpeed {
			selection="vert_speed2";
			axis="osa_vert_speed2";
			};
		class IndicatorRPM2:IndicatorRPM {
			selection="rpm2";
			axis="osa_rpm2";
			};
		class Reflectors {

			class Left
				{
				color[]={0.8,0.8,1.0,1.0};
				ambient[]={0.07,0.07,0.07,1.0};
				position="L svetlo";
				direction="konec L svetla";
				hitpoint="L svetlo";
				selection="L svetlo";
				size=0.5;
				brightness=1.0;
				};

			class Right
				{
				color[]={0.8,0.8,1.0,1.0};
				ambient[]={0.07,0.07,0.07,1.0};
				position="P svetlo";
				direction="konec P svetla";
				hitpoint="P svetlo";
				selection="P svetlo";
				size=0.5;
				brightness=1.0;
				};
			};
	};
	class Mi17_C_xj200: Mi17_Base_C_xj200 {
		scope = public; vehicleClass = "TZK_Units_200_C";
		accuracy = 1000 // make ai use MG ON it (ofp bug)
		weapons[] = {};
		magazines[]={SpoofMagazines};
		class EventHandlers : EH_Heli {};
		class UserActions {
			class SetFlightAltitude : UA_SetFlightAltitude {};

			class SpoofMissileON : UA_SpoofMissileON{}; class SpoofMissileOFF : UA_SpoofMissileOFF{};
			
			class AttachInVehicle : UA_AttachInVehicle_Heli {}; class AttachOnFoot : UA_AttachOnFoot_Heli {};
			class TransportTurnON : UA_TransportTurnON {}; class TransportTurnOFF : UA_TransportTurnOFF {};
			class EjectOneCargo : UA_EjectOneCargo {}; class EjectAllCargo : UA_EjectAllCargo {};

			class LAND : UA_LAND_Heli {};
		};
	};
	class Mi17_MG_C_xj200: Mi17_C_xj200 {
		displayName = "Mi17 MG";
		weapons[] = {Cannon_Heli_xj200};
		magazines[]={Mag_Heli_2000_xj200, SpoofMagazines};
	};
	class Mi17_LGB_C_xj200: Mi17_C_xj200 {
		displayName = "Mi17 LGB";
		laserScanner = true;
		weapons[] = {LGBLauncher_xj200};
		magazines[]={Mag_LGB_2_xj200, SpoofMagazines};
	};

	class UH60_xj200: UH60 {
		vehicleClass = "TZK_Units_200";
		accuracy = 1000;
		weapons[] = {};
		magazines[]={SpoofMagazines};
		class EventHandlers : EH_Heli {};
		class UserActions {
			class SetFlightAltitude : UA_SetFlightAltitude {};

			class SpoofMissileON : UA_SpoofMissileON{}; class SpoofMissileOFF : UA_SpoofMissileOFF{};
			
			class AttachInVehicle : UA_AttachInVehicle_Heli {}; class AttachOnFoot : UA_AttachOnFoot_Heli {};
			class TransportTurnON : UA_TransportTurnON {}; class TransportTurnOFF : UA_TransportTurnOFF {};
			class EjectOneCargo : UA_EjectOneCargo {}; class EjectAllCargo : UA_EjectAllCargo {};

			class LAND : UA_LAND_Heli {};
		};
	};
	class UH60_MG_xj200: UH60_xj200 {
		displayName = "UH60 MG";
		weapons[] = {Cannon_Heli_xj200};
		magazines[]={Mag_Heli_2000_xj200, SpoofMagazines};
	};
	class UH60_LGB_xj200: UH60_xj200 {
		displayName = "UH60 LGB";
		laserScanner = true;
		weapons[] = {LGBLauncher_xj200};
		magazines[]={Mag_LGB_2_xj200, SpoofMagazines};
	};
	// UH60 with side-door-MG
	class UH60MG_xj200: UH60MG {
		vehicleClass = "TZK_Units_200";
		accuracy = 1000;
		weapons[] = {Cannon_Heli_xj200};
		magazines[]={Mag_Heli_2000_xj200, SpoofMagazines};
		class EventHandlers : EH_Heli {};
		class UserActions {
			class SetFlightAltitude : UA_SetFlightAltitude {};

			class SpoofMissileON : UA_SpoofMissileON{}; class SpoofMissileOFF : UA_SpoofMissileOFF{};
			
			class SwitchToDriverAir : UA_SwitchToDriverAir {}; class SwitchToGunnerAir : UA_SwitchToGunnerAir {};
			
			class AttachInVehicle : UA_AttachInVehicle_Heli {}; class AttachOnFoot : UA_AttachOnFoot_Heli {};
			class TransportTurnON : UA_TransportTurnON {}; class TransportTurnOFF : UA_TransportTurnOFF {};
			class EjectOneCargo : UA_EjectOneCargo {}; class EjectAllCargo : UA_EjectAllCargo {};

			class LAND : UA_LAND_Heli {};
		};
	};

	class UH60_Base_C_xj200: Helicopter {
		scope = private;
		crew="SoldierWPilot";
		picture="iuh60";
		maxSpeed=270;
		side=1;
		displayName="$STR_DN_UH60";
		nameSound="blackhawk";
		accuracy=0.3;
		armor=60;
		cost=10000000;
		mainRotorSpeed=-1;
		model="\CSLA_US\CSLA2_UH60A";
		dammageHalf[]={"\CSLA_us\Uh-60a\ps_sklo.paa","\CSLA_us\Uh-60a\ps_sklo2.paa","\CSLA_us\Uh-60a\zp_sklo.paa","\CSLA_us\Uh-60a\zp_sklo2.paa","\CSLA_us\Uh-60a\po_sklo.paa","\CSLA_us\Uh-60a\po_sklo2.paa","\CSLA_us\Uh-60a\pp_sklo.paa","\CSLA_us\Uh-60a\pp_sklo2.paa"};
		dammageFull[]={"\CSLA_us\Uh-60a\ps_sklo.paa","\CSLA_us\Uh-60a\ps_sklo3.paa","\CSLA_us\Uh-60a\zp_sklo.paa","\CSLA_us\Uh-60a\zp_sklo3.paa","\CSLA_us\Uh-60a\po_sklo.paa","\CSLA_us\Uh-60a\po_sklo3.paa","\CSLA_us\Uh-60a\pp_sklo.paa","\CSLA_us\Uh-60a\pp_sklo3.paa"};
		rotorBig="vrtule_uh_v";
		rotorBigBlend="vrtule_uh_v_bl";
		rotorSmall="vrtule_uh_m";
		rotorSmallBlend="vrtule_uh_m_bl";
		soundEngine[]={"Vehicles\uh1",3.1622777,1.5};
		weapons[] = {"ZuniLauncher38"};
		magazines[]={"ZuniLauncher38", SpoofMagazines};
		driverAction="ManActUH60Pilot";
		gunnerAction="ManActUH60Pilot";
		gunnerUsesPilotView=1;
		transportSoldier=12;
		transportAmmo=0;
		initCargoAngleY=10;
		minCargoAngleY=-60;
		maxCargoAngleY=120;
		type=2;
		threat[]={0.3,1,0.4};
		typicalCargo[]={"Soldier","Soldier","SoldierLAW","SoldierLAW"};
		transportMaxMagazines=150;
		transportMaxWeapons=30;
		class Reflectors {
			class Left {
				color[]={0.8,0.8,1.0,1.0};
				ambient[]={0.07,0.07,0.07,1.0};
				position="L svetlo";
				direction="konec L svetla";
				hitpoint="L svetlo";
				selection="L svetlo";
				size=0.5;
				brightness=1.0;
				};
			class Right
				{
				color[]={0.8,0.8,1.0,1.0};
				ambient[]={0.07,0.07,0.07,1.0};
				position="P svetlo";
				direction="konec P svetla";
				hitpoint="P svetlo";
				selection="P svetlo";
				size=0.5;
				brightness=1.0;
				};
			};
		class IndicatorAltRadar {
			selection="alt";
			axis="osa_alt";
			angle=-360;
			min=0;
			max=304;
			};
		class IndicatorAltBaro {
			selection="nm_alt";
			axis="osa_nm_alt";
			angle=-180;
			min=0;
			max=61;
			};
		class IndicatorSpeed {
			selection="mph";
			axis="osa_mph";
			angle=-350;
			min=0;
			max=175;
			};
		class IndicatorVertSpeed {
			selection="vert_speed";
			axis="osa_vert_speed";
			angle=-300;
			min=-30;
			max=30;
			};
		class IndicatorRPM {
			selection="rpm";
			axis="osa_rpm";
			angle=-320;
			min=0;
			max=12;
			};
		class IndicatorAltRadar2 {
			selection="alt2";
			axis="osa_alt2";
			angle=-360;
			min=0;
			max=304;
			};
		class IndicatorAltBaro2 {
			selection="nm_alt2";
			axis="osa_nm_alt2";
			angle=-180;
			min=0;
			max=61;
			};
		class IndicatorSpeed2 {
			selection="mph2";
			axis="osa_mph2";
			angle=-350;
			min=0;
			max=175;
			};
		class IndicatorVertSpeed2 {
			selection="vert_speed2";
			axis="osa_vert_speed2";
			angle=-300;
			min=-30;
			max=30;
			};
		class IndicatorRPM2 {
			selection="rpm2";
			axis="osa_rpm2";
			angle=-320;
			min=0;
			max=12;
			};
		class ViewGunnerBase {
			initAngleX=5;
			minAngleX=-30;
			maxAngleX=30;
			initAngleY=0;
			minAngleY=-100;
			maxAngleY=100;
			initFov=0.7;
			minFov=0.42;
			maxFov=0.85;
		};
	};
	class UH60_C_xj200: UH60_Base_C_xj200 {
		scope = public; vehicleClass = "TZK_Units_200_C";
		accuracy = 1000;
		weapons[] = {};
		magazines[]={SpoofMagazines};
		class EventHandlers : EH_Heli {};
		class UserActions {
			class SetFlightAltitude : UA_SetFlightAltitude {};

			class SpoofMissileON : UA_SpoofMissileON{}; class SpoofMissileOFF : UA_SpoofMissileOFF{};
			
			class AttachInVehicle : UA_AttachInVehicle_Heli {}; class AttachOnFoot : UA_AttachOnFoot_Heli {};
			class TransportTurnON : UA_TransportTurnON {}; class TransportTurnOFF : UA_TransportTurnOFF {};
			class EjectOneCargo : UA_EjectOneCargo {}; class EjectAllCargo : UA_EjectAllCargo {};

			class LAND : UA_LAND_Heli {};
		};
	};
	class UH60_MG_C_xj200: UH60_C_xj200 {
		displayName = "UH60 MG";
		weapons[] = {Cannon_Heli_xj200};
		magazines[]={Mag_Heli_2000_xj200, SpoofMagazines};
	};
	class UH60_LGB_C_xj200: UH60_C_xj200 {
		displayName = "UH60 LGB";
		laserScanner = true;
		weapons[] = {LGBLauncher_xj200};
		magazines[]={Mag_LGB_2_xj200, SpoofMagazines};
	};
	// UH60 with side-door-MG
	class UH60MG_Base_C_xj200: UH60_Base_C_xj200 {
		displayName="$STR_DN_UH60_MG";
		nameSound="blackhawk";
		accuracy=1000;
		model="\CSLA_US\CSLA2_UH60A_M2";
		transportSoldier=12;
		enableSweep=0;
		gunnerAction="ManActUH60Gunner";
		gunnerOpticsModel="optika_empty";
		weapons[] = {"Browning"};
		magazines[]={"Browning", SpoofMagazines};
		class Turret {
			gunAxis="OsaHlavne";
			turretAxis="OsaVeze";
			gunBeg="usti hlavne";
			gunEnd="konec hlavne";
			soundServo[]={"",0.01,1.0};
			minElev=-42;
			maxElev=5;
			minTurn=30;
			maxTurn=150;
			body="OtocVez";
			gun="OtocHlaven";
		};
		class ViewGunner:ViewGunnerBase {
			initAngleY=90;
			minAngleY=30;
			maxAngleY=150;
			initAngleX=0;
			minAngleX=-42;
			maxAngleX=5;
		};
	};
	class UH60MG_C_xj200: UH60MG_Base_C_xj200 {
		scope = public; vehicleClass = "TZK_Units_200_C";
		accuracy = 1000;
		weapons[] = {Cannon_Heli_xj200};
		magazines[]={Mag_Heli_2000_xj200, SpoofMagazines};
		class EventHandlers : EH_Heli {};
		class UserActions {
			class SetFlightAltitude : UA_SetFlightAltitude {};

			class SpoofMissileON : UA_SpoofMissileON{}; class SpoofMissileOFF : UA_SpoofMissileOFF{};
			
			class SwitchToDriverAir : UA_SwitchToDriverAir {}; class SwitchToGunnerAir : UA_SwitchToGunnerAir {};
			
			class AttachInVehicle : UA_AttachInVehicle_Heli {}; class AttachOnFoot : UA_AttachOnFoot_Heli {};
			class TransportTurnON : UA_TransportTurnON {}; class TransportTurnOFF : UA_TransportTurnOFF {};
			class EjectOneCargo : UA_EjectOneCargo {}; class EjectAllCargo : UA_EjectAllCargo {};

			class LAND : UA_LAND_Heli {};
		};
	};

	// Small Helicopter
	class MH6_Base_xj200: Helicopter {
		vehicleClass = "TZK_Units_200";
		displayName="MH-6J";
		nameSound="chopper";	// Pour les "2, Get in chopper..."

		picture=\DrKk_MH6\oh6icon;
		crew = SoldierWPilot;
		scope = private;
		side = TWest;

		type=VAir;
		//threat[] VSoft, VArmor, VAir
		threat[]={0.6, 0.6, 0.3};

		accuracy=0.3;

		// Commandant ********************************
		hasCommander = false;

		// Pilote **************************************
		driverIsCommander=true;
		castDriverShadow = true;
		driverAction = ManActUH60Pilot;

		// Gunner *************************************
		gunnerUsesPilotView = true;
		castGunnerShadow = true;
		gunnerAction = ManActUH60Pilot;

		// Cargo **************************************
		transportSoldier = 6;
		typicalCargo[]={Soldier, Soldier, SoldierLAW, SoldierLAW};
		castCargoShadow = true;

		// Caracteristiques ******************************
		fuelCapacity=140;
		maxSpeed = 305;
		armor=20;
		cost=10000000;

		formationX=10;
		formationZ=20;


		// Sons **************************************
		//soundEngine[]={\DrKk_MH6\MH6J,db+5,1};
		soundEngine[]={\DrKk_MH6\mh6.ogg,db+0,1};
		//soundEngine[]={\DrKk_MH6\MH-6J.wav,0.609333,1};

		// Modelisation ********************************
		model=\TZK_Objects\Model\MH6J_xj200.p3d;
		rotorBig = vrtule_velka;
		rotorBigBlend = vrtule_velka_bl_;
		rotorSmall = vrtule_mala;
		rotorSmallBlend = vrtule_mala_bl;

		// Detection ennemis ***************************
		driverCanSee=CanSeeEye+CanSeeEar;
		irScanRangeMin = 1000
		irScanToEyeFactor = 0.75
		weapons[] = {"Cannon_Heli_xj200"};
		magazines[]={"Mag_Heli_2000_xj200", SpoofMagazines};

		// Degats ************************************
		dammageHalf[]=
		{
			\DrKk_MH6\c130_window.paa, \DrKk_MH6\oh6_window_b.paa,
		};
		dammageFull[]=
		{
			\DrKk_MH6\c130_window.paa, \DrKk_MH6\ovh6_window_c.paa,
		};
	};
	class MH6_xj200: MH6_Base_xj200 {
		scope = protected;
		accuracy=1000;
		weapons[] = {};
		magazines[]={SpoofMagazines};
	};
	class MH6_Bas_Base_xj200: Cobra {
		side = TWest; scope = private; displayName="MH-6"; nameSound="chopper";
		accuracy = 0.3; armor = 30; cost=10000000;
		
		icon = "\bas_lbs\basmh6icon.paa"; picture = "\bas_lbs\imh6.paa"; mapSize = 10;
		gunnerUsesPilotView = false;
		typicalCargo[]={Soldier, Soldier, SoldierLAW, SoldierLAW};
		transportSoldier = 5; getInRadius=5.00000;
		weapons[] = {};
		magazines[]={};
		driverAction = ManActUH60Pilot;
		gunnerAction = ManActUH60Pilot;
		gunnerOpticsModel = "optika_heli_gunner";
		maxSpeed = 235;
		soundEngine[]={"\bas_lbs\mh6.wav",3.162278,1};

		mainRotorSpeed = -1;
		rotorBig = vrtule_velka;
		rotorBigBlend = vrtule_velka_bl_;
		rotorSmall = vrtule_mala;
		rotorSmallBlend = vrtule_mala_bl;
		type = VAir;
		threat[]={1,0.050000,0.050000};
		class Reflectors {
			class Reflector
			{
				color[] = {0.8, 0.8, 1.0, 1.0};
				ambient[] = {0.07, 0.07, 0.07, 1.0};
				position = "L svetlo";
				direction = "konec L svetla";
				hitpoint = "L svetlo";
				selection = "L svetlo";
				size = 0.5;
				brightness = 1.0;
			};
		};
		class IndicatorAltRadar {
			// max for this indicator is 1000 feet (i.e. 304m)
			// note: this is actualy Baro altitude (name is wrong)
			selection = "alt";
			axis = "osa_alt";
			angle = -360;
			min = 0;
			max = 304;
		};
		class IndicatorAltBaro {
			// max for this indicator is 200 feet (i.e. 61m)
			// note: this is actualy Radar altitude (name is wrong)
			selection = "nm_alt";
			axis = "osa_nm_alt";
			angle = -180;
			min = 0;
			max = 70;
		};
		class IndicatorSpeed {
			selection = "mph";
			axis = "osa_mph";
			angle = -320;
			min = 0;
			max = 125;
			reversed = true;
		};
		class IndicatorVertSpeed {
			selection = "vert_speed";
			axis = "osa_vert_speed";
			angle = -300;
			min = -30;
			max = 30;
		};
		class IndicatorRPM {
			selection = "rpm";
			axis = "osa_rpm";
			angle = -320;
			min = 0;
			max = 80;
		};
		class IndicatorCompass {
			selection = "kompas";
			axis = "osa_kompas";
			angle = -360;
			min = -3.1415926536;
			max = 3.1415926536;
		};
		class IndicatorWatch {
			hour = "hodinova";
			minute = "minutova";
			axis = "osa_time";
			reversed = true;
		};
	};
	class MH6_Bas_xj200: MH6_Bas_Base_xj200 {
		scope = public; displayName="MH-6"; vehicleClass = "TZK_Units_200";
		accuracy = 1000;
		weapons[] = {};
		magazines[]={SpoofMagazines};
		model="\TZK_Objects\Model\MH6_Bas_xj200.p3d";
		class EventHandlers : EH_Heli {};
		class UserActions {
			class SetFlightAltitude : UA_SetFlightAltitude {};

			class SpoofMissileON : UA_SpoofMissileON{}; class SpoofMissileOFF : UA_SpoofMissileOFF{};
			class TransportTurnON : UA_TransportTurnON {}; class TransportTurnOFF : UA_TransportTurnOFF {};
			class EjectOneCargo : UA_EjectOneCargo {}; class EjectAllCargo : UA_EjectAllCargo {};

			class LAND : UA_LAND_Heli {};
		};
	};
	class Mi2NOE_Base_xj200: Helicopter {
		scope = private;
		crew="SoldierEPilot";
		picture="\Mi2NO\Mi2icon.paa";
		maxSpeed=215;
		side = TEast;
		displayName="Mi-2";
		vehicleClass = "TZK_Units_200";
		fuelCapacity=150;
		mainRotorSpeed = 1.0;
		backRotorSpeed = -2.5;
		cost=1000000;
		hasGunner=0;
		armor=40;
		soundEngine[]={"\Mi2NO\mi2s.ogg",db+10,0.95};
		driverAction="ManActMi24Pilot";
		transportSoldier=5;
		typicalCargo[]={"Soldier","SoldierLAW"};
		accuracy=0.3;
		model="\Mi2NO\Mi2NO.p3d";
		weapons[] = {"Cannon_Heli_xj200"};
		magazines[]={"Mag_Heli_2000_xj200", SpoofMagazines};
		type=2;
		//threat[] Vsoft,VArmor, VAir
		threat[]={0.1, 1, 0.7};
		armorStructural=1.0;
		armorHull=0.4;
		armorEngine=1.5;
		armorAvionics=0.7;
		armorVRotor=0.7;
		armorHRotor=0.5;
		armorMissiles=0.3;
		armorGlass=0.2;
		class IndicatorAltBaro
		{
			selection = "alt";
			axis = "osa_alt";
			angle = -360;
			min = 0;
			max = 1000;
		};
		class IndicatorAltBaro2
		{
			selection = "alt2";
			axis = "osa_alt2";
			angle = -360;
			min = 0;
			max = 1000;
		};
		class IndicatorAltRadar
		{
			selection = "nm_alt";
			axis = "osa_nm_alt";
			angle = -320;
			min = 0;
			max = 300;
		};
		class IndicatorSpeed
		{
			selection = "mph";
			axis = "osa_mph";
			angle = -340;
			min = 0;
			max = 70;
		};
		class IndicatorRPM
		{
			selection = "rpm";
			axis = "osa_rpm";
			angle = -330;
			min = 0;
			max = 11;
		};
		class IndicatorRPM2
		{
			selection = "rpm2";
			axis = "osa_rpm2";
			angle = -330;
			min = 0;
			max = 11;
		};
		dammageHalf[]={\Mi2NO\glass0.paa,\Mi2NO\glass1.paa,\Mi2NO\glass10.paa,\Mi2NO\glass11.paa};
		dammageFull[]={\Mi2NO\glass0.paa,\Mi2NO\glass2.paa,\Mi2NO\glass10.paa,\Mi2NO\glass12.paa};

		class Reflectors
		{
			class Left
			{
				color[] = {0.8, 0.8, 1.0, 1.0};
				ambient[] = {0.07, 0.07, 0.07, 1.0};
				position = "L svetlo";
				direction = "konec L svetla";
				hitpoint = "L svetlo";
				selection = "L svetlo";
				size = 0.85;
				brightness = 1.5;
			};
		};
		class Animations
		{
			class Susp_R
			{
				type="rotation";
				animPeriod=0.1;
				selection="R_susp";
				axis="R_susp_osa";
				angle0=0;
				angle1=0.261799387799149436538553615273292;
			};
			class Susp_L
			{
				type="rotation";
				animPeriod=0.1;
				selection="L_susp";
				axis="L_susp_osa";
				angle0=0;
				angle1=-0.261799387799149436538553615273292;
			};
			class Switch
			{
				type="rotation";
				animPeriod=0.1;
				selection="switch";
				axis="osa switch";
				angle0=0;
				angle1=1;
			};
			class Switch_2
			{
				type="rotation";
				animPeriod=0.1;
				selection="switch_2";
				axis="osa_switch_2";
				angle0=0;
				angle1=1;
			};
			class Cooler
			{
				type="rotation";
				animPeriod=5;
				selection="vent_a";
				axis="vent osa";
				angle0=0;
				angle1=2261.94671058465113169310323596;
			};
			class Temp1
			{
				type="rotation";
				animPeriod=30;
				selection="temp";
				axis="osa_temp";
				angle0=0;
				angle1=-3;
			};
			class Temp2
			{
				type="rotation";
				animPeriod=45;
				selection="temp2";
				axis="osa_temp2";
				angle0=0;
				angle1=-2.8;
			};
			class Fuel
			{
				type="rotation";
				animPeriod=1;
				selection="fuel";
				axis="osa fuel";
				angle0=0;
				angle1=-3.66519;
			};
		};
	};
	class Mi2NOE_xj200: Mi2NOE_Base_xj200 {
		scope = public;
		accuracy=1000;
		weapons[] = {};
		magazines[]={SpoofMagazines};
		class EventHandlers : EH_Heli {};
		class UserActions {
			class SetFlightAltitude : UA_SetFlightAltitude {};

			class SpoofMissileON : UA_SpoofMissileON{}; class SpoofMissileOFF : UA_SpoofMissileOFF{};
			class TransportTurnON : UA_TransportTurnON {}; class TransportTurnOFF : UA_TransportTurnOFF {};
			class EjectOneCargo : UA_EjectOneCargo {}; class EjectAllCargo : UA_EjectAllCargo {};

			class LAND : UA_LAND_Heli {};
		};
	};

	// Gunship
	class AH1_xj200: Cobra {
		accuracy = 1000
		sensitivity=2; sensitivityEar=0.015
		camouflage=16; audible=20
		displayName = "AH1";
		vehicleClass = "TZK_Units_200";
		secondaryExplosion = 1;
		laserScanner = true;
		armorEngine = 0.96; //x1.6
		weapons[] = {"MachineGun30W","HellfireLauncherCobra_xj200","ZuniLauncher38"};
		magazines[]={"MachineGun30W","HellfireLauncherCobra_xj200","ZuniLauncher38", SpoofMagazines};
		class EventHandlers : EH_Heli {};
		class UserActions {
			class SetFlightAltitude : UA_SetFlightAltitude {};

			class SpoofMissileON : UA_SpoofMissileON{}; class SpoofMissileOFF : UA_SpoofMissileOFF{};
			
			class SwitchToDriverAir : UA_SwitchToDriverAir {}; class SwitchToGunnerAir : UA_SwitchToGunnerAir {};

			class LAND : UA_LAND_Heli {};
		};
	};
	class AH1_AT_xj200: AH1_xj200 {
		accuracy = 1000
		irScanRangeMin = 1000
		irScanToEyeFactor = 0.75
		armor = 80;
		armorEngine = 0.6;
		displayName = "AH1 AT";
		weapons[] = {ATLauncherAir_xj200, Cannon_20HE_xj200, Cannon_20AP_xj200};
		magazines[]={GuidedAT_Cobra_8_xj200, Mag_20HE_800_01_xj200, Mag_20AP_200_01_xj200, SpoofMagazines};
	};

	class AH1_Base_C_xj200: Helicopter {
		picture="icobra";
		crew="SoldierWPilot";
		scope = private;
		side = TWest;
		nameSound="cobra";
		accuracy=0.3;
		driverAction="ManActAH1Pilot";
		gunnerAction="ManActAH1Gunner";
		maxSpeed=270;
		armor=50;
		cost=10000000;
		weapons[] = {"M197_xj200","HellfireLauncherCobra_xj200","ZuniLauncher38"};
		magazines[]={"M197_xj200","HellfireLauncherCobra_xj200","ZuniLauncher38", SpoofMagazines};
		model = "ah1_cobra";
		hiddenSelections[] = {"n1","n2","miss1","miss2"};
		dammageHalf[]={"\Vit_AH-1W\window1.paa","\Vit_AH-1W\window1b.paa","\Vit_AH-1W\Canopy.paa","\Vit_AH-1W\window1b.paa","\Vit_AH-1W\Marine2\Lside.pac","\Vit_AH-1W\Marine2\LsideB.pac","\Vit_AH-1W\Marine2\Sside.pac","\Vit_AH-1W\Marine2\SsideB.pac"};
		dammageFull[]={"\Vit_AH-1W\window1.paa","\Vit_AH-1W\window1b.paa","\Vit_AH-1W\Canopy.paa","\Vit_AH-1W\window1b.paa","\Vit_AH-1W\Marine2\Lside.pac","\Vit_AH-1W\Marine2\LsideC.pac","\Vit_AH-1W\Marine2\Sside.pac","\Vit_AH-1W\Marine2\SsideC.pac"};
		rotorBig = vrtule_velka;
		rotorBigBlend = vrtule_velka_blur;
		rotorSmall = vrtule_mala;
		rotorSmallBlend = vrtule_mala_blur;
		class IndicatorAltRadar {
			selection="alt";
			axis="osa_alt";
			angle=-360;
			min=0;
			max=304;
			};
		class IndicatorAltBaro {
			selection="nm_alt";
			axis="osa_nm_alt";
			angle=-180;
			min=0;
			max=61;
			};
		class IndicatorSpeed {
			selection="mph";
			axis="osa_mph";
			angle=-320;
			min=0;
			max=125;
			};
		class IndicatorVertSpeed {
			selection="vert_speed";
			axis="osa_vert_speed";
			angle=-300;
			min=-30;
			max=30;
			};
		class IndicatorRPM {
			selection="rpm";
			axis="osa_rpm";
			angle=-320;
			min=0;
			max=12;
			};
		class ReloadAnimations {
            class M197_xj200 {
				weapon = "M197_xj200";
				angle0=0;
				angle1="-2 * 3.141592654";
				multiplier=500;
				type="rotation";
				animPeriod=1;
				selection="gatling";
				begin="usti hlavne";
				end="konec hlavne";
            };
			class Cannon_20HE_xj200 {
				weapon = "Cannon_20HE_xj200";
				angle0=0;
				angle1="-2 * 3.141592654";
				multiplier=500;
				type="rotation";
				animPeriod=1;
				selection="gatling";
				begin="usti hlavne";
				end="konec hlavne";
            };
			class Cannon_20AP_xj200 {
				weapon = "Cannon_20AP_xj200";
				angle0=0;
				angle1="-2 * 3.141592654";
				multiplier=500;
				type="rotation";
				animPeriod=1;
				selection="gatling";
				begin="usti hlavne";
				end="konec hlavne";
            };
		};
		sensitivity=2; sensitivityEar=0.015
		camouflage=16; audible=20
		displayName = "AH1";
		vehicleClass = "TZK_Units_200_C";
		secondaryExplosion = 1;
		laserScanner = true;
		armorEngine = 0.96; //x1.6
		type=2;
		threat[]={0.3,1,0.8};
	};
	class AH1_C_xj200: AH1_Base_C_xj200 {
		scope = public; accuracy = 1000;
		picture="\TZK_Objects\Texture\Vit_AH1W.paa";
		model = "\TZK_Objects\Model\AH1W_Vit_xj200.p3d";
		class EventHandlers : EH_Heli {};
		class UserActions {
			class SetFlightAltitude : UA_SetFlightAltitude {};

			class SpoofMissileON : UA_SpoofMissileON{}; class SpoofMissileOFF : UA_SpoofMissileOFF{};
			
			class SwitchToDriverAir : UA_SwitchToDriverAir {}; class SwitchToGunnerAir : UA_SwitchToGunnerAir {};

			class LAND : UA_LAND_Heli {};
		};
	};
	class AH1_AT_C_xj200: AH1_C_xj200 {
		accuracy = 1000
		irScanRangeMin = 1000
		irScanToEyeFactor = 0.75
		armor = 80;
		armorEngine = 0.6;
		displayName = "AH1 AT";
		weapons[] = {ATLauncherAir_xj200, Cannon_20HE_xj200, Cannon_20AP_xj200};
		magazines[]={GuidedAT_Cobra_8_xj200, Mag_20HE_800_01_xj200, Mag_20AP_200_01_xj200, SpoofMagazines};
	};

	class AH64_Base_xj200: Helicopter {
		scope = private; vehicleClass = "TZK_Units_200";
		picture = "\apac\iAH64";
		crew = "SoldierWPilot";
		side = 1;
		displayName = $STR_DN_AH64;
		nameSound = chopper;
		accuracy = 0.3;
		driverAction = "ManActAH64Pilot";
		gunnerAction = "ManActAH64Gunner";
		maxSpeed = 296;
		soundEngine[] = {"\apac\ah64engine",3.16228,1};
		armor = 50; //Must be low value else subclass won't be attack by machine gun
		armorEngine=0.6;
		cost = 10000000;
		model = "\Apac\Apac";
		laserScanner = 1;
		rotorBig = "apach_vrtule";
		rotorBigBlend = "apach_vrtule";
		rotorSmall = "apach_vrtulka";
		rotorSmallBlend = "apach_vrtule2";
		weapons[] = {"M197_xj200", HellfireLauncherApach_xj200,ZuniLauncher38};
		magazines[]={"M197_xj200", HellfireLauncherApach_xj200,ZuniLauncher38, SpoofMagazines};
		type = "VAir";
		threat[] = {0.3,1,0.8};
		dammageHalf[] = {"\apac\apach_in_skla.paa","\apac\apach_in_sklaC.paa"};
		dammageFull[] = {"\apac\apach_in_skla.paa","\apac\apach_in_sklaC.paa"};
		class Turret {
			gunAxis = "OsaHlavne";
			turretAxis = "OsaVeze";
			gunBeg = "usti hlavne";
			gunEnd = "konec hlavne";
			soundServo[] = {};
			minElev = -60;
			maxElev = 11;
			minTurn = -86;
			maxTurn = 86;
			body = "OtocVez";
			gun = "OtocHlaven";
		};
		class IndicatorAltRadar {
			selection = "alt";
			axis = "osa_alt";
			angle = -360;
			min = 0;
			max = 304;
		};
		class IndicatorAltBaro {
			selection = "nm_alt";
			axis = "osa_nm_alt";
			angle = -180;
			min = 0;
			max = 61;
		};
		class IndicatorSpeed {
			selection = "mph";
			axis = "osa_mph";
			angle = -320;
			min = 0;
			max = 125;
		};
		class IndicatorVertSpeed {
			selection = "vert_speed";
			axis = "osa_vert_speed";
			angle = -300;
			min = -30;
			max = 30;
		};
		class IndicatorRPM {
			selection = "rpm";
			axis = "osa_rpm";
			angle = -320;
			min = 0;
			max = 12;
		};
		class IndicatorCompass2 {
			selection = "kompas2";
			axis = "osa_kompas2";
			angle = -360;
			min = -3.1415927;
			max = 3.1415927;
		};

		class EventHandlers : EH_Heli {};
		class UserActions {
			class SetFlightAltitude : UA_SetFlightAltitude {};

			class SpoofMissileON : UA_SpoofMissileON{}; class SpoofMissileOFF : UA_SpoofMissileOFF{};
			
			class SwitchToDriverAir : UA_SwitchToDriverAir {}; class SwitchToGunnerAir : UA_SwitchToGunnerAir {};

			class LAND : UA_LAND_Heli {};
		};
	};
	class AH64_xj200: AH64_Base_xj200 {
		scope = public;
		sensitivity=2; sensitivityEar=0.015
		camouflage=16; audible=20
		accuracy = 1000
		armor = 80;
		displayName = "AH64";
		secondaryExplosion = 1;
	};
	class AH64_AT_xj200: AH64_Base_xj200 {
		scope = public;
		sensitivity=2; sensitivityEar=0.015
		camouflage=16; audible=20
		accuracy = 1000
		irScanRangeMin = 1000
		irScanToEyeFactor = 0.75
		armor = 100; //x1.25
		displayName = "AH64 AT";
		secondaryExplosion = 1;
		weapons[] = {ATLauncherAir_xj200, Cannon_20HE_xj200, Cannon_20AP_xj200};
		magazines[]={GuidedAT_Heli_8_xj200, Mag_20HE_800_01_xj200, Mag_20AP_200_01_xj200, SpoofMagazines};
	};

	class Mi24_Base_xj200: Mi24 {
		scope = private; vehicleClass = "TZK_Units_200";
		sensitivity=2; sensitivityEar=0.015
		camouflage=16; audible=20
		armor = 50; //Must be low value else subclass won't be attack by machine gun
		armorEngine=0.6;
		weapons[] = {"MachineGun30E","HellfireLauncherHind_xj200","Rocket57x64"};
		magazines[]={"MachineGun30E","HellfireLauncherHind_xj200","Rocket57x64", SpoofMagazines};
		displayName = "Mi24";
		secondaryExplosion = 1;
		laserScanner = true;
		class EventHandlers : EH_Heli {};
		class UserActions {
			class SetFlightAltitude : UA_SetFlightAltitude {};
			
			class SpoofMissileON : UA_SpoofMissileON{}; class SpoofMissileOFF : UA_SpoofMissileOFF{};
			
			class SwitchToDriverAir : UA_SwitchToDriverAir {}; class SwitchToGunnerAir : UA_SwitchToGunnerAir {};
			class TransportTurnON : UA_TransportTurnON {}; class TransportTurnOFF : UA_TransportTurnOFF {};
			class EjectOneCargo : UA_EjectOneCargo {}; class EjectAllCargo : UA_EjectAllCargo {};

			class LAND : UA_LAND_Heli {};
		};
	};
	class Mi24_xj200: Mi24_Base_xj200 {
		scope = public;
		accuracy = 1000
		armor = 100;
	};
	class Mi24_AT_xj200: Mi24_Base_xj200 {
		scope = public;
		accuracy = 1000
		irScanRangeMin = 1000
		irScanToEyeFactor = 0.75
		armor = 125; //x1.25
		displayName = "Mi24 AT";
		weapons[] = {ATLauncherAir_xj200, CannonE_20HE_xj200, CannonE_20AP_xj200};
		magazines[]={GuidedAT_Heli_8_xj200, Mag_20HE_800_01_xj200, Mag_20AP_200_01_xj200, SpoofMagazines};
	};

	class Mi24_Base_C_xj200: Helicopter {
		scope = private; vehicleClass = "TZK_Units_200_C";
		sensitivity=2; sensitivityEar=0.015
		camouflage=16; audible=20
		armor = 50; //Must be low value else subclass won't be attack by machine gun
		armorEngine=0.6;
		secondaryExplosion = 1;
		laserScanner = true;
		crew="SoldierEPilot";
		picture="imi24";
		maxSpeed=294;
		side=0;
		displayName="$STR_DN_MI24";
		nameSound="hind";
		accuracy=0.5;
		cost=4000000;
		model="\ffur_ruair\mi24\RHS_Mi24V_AT.p3d";
		hiddenSelections[]={"n1","n2","gearlight","enginelight","fire","fireB","missilelight"};
		rotorBig="hip_vrt_v";
		rotorBigBlend="hip_vrtblur_v";
		rotorSmall="vrthind_m";
		rotorSmallBlend="vrthind_m_bl";
		soundEngine[]={"vehicles\mi_helicopter",3.1622777,1};
		weapons[] = {"MachineGun30E","HellfireLauncherHind_xj200","Rocket57x64"};
		magazines[]={"MachineGun30E","HellfireLauncherHind_xj200","Rocket57x64", SpoofMagazines};
		transportSoldier=8;
		transportAmmo=0;
		type=2;
		threat[]={0.6,1,0.8};
		typicalCargo[]={"Soldier","SoldierLAW"};
		driverAction="ManActMi24Pilot";
		gunnerAction="ManActMi24Gunner";
		class Reflectors {
			class Left {
				color[]={0.8,0.8,1.0,1.0};
				ambient[]={0.07,0.07,0.07,1.0};
				position="L svetlo";
				direction="konec L svetla";
				hitpoint="L svetlo";
				selection="L svetlo";
				size=0.5;
				brightness=1.0;
			};
			class Right {
				color[]={0.8,0.8,1.0,1.0};
				ambient[]={0.07,0.07,0.07,1.0};
				position="P svetlo";
				direction="konec P svetla";
				hitpoint="P svetlo";
				selection="P svetlo";
				size=0.5;
				brightness=1.0;
			};
		};
		class IndicatorAltRadar {
			selection="alt";
			axis="osa_alt";
			angle=-360;
			min=0;
			max=304;
		};
		class IndicatorAltBaro {
			selection="nm_alt";
			axis="osa_nm_alt";
			angle=-180;
			min=0;
			max=61;
		};
		class IndicatorSpeed {
			selection="mph";
			axis="osa_mph";
			angle=-350;
			min=0;
			max=175;
		};
		class IndicatorVertSpeed {
			selection="vert_speed";
			axis="osa_vert_speed";
			angle=-300;
			min=-35;
			max=35;
		};
		class IndicatorRPM {
			selection="rpm";
			axis="osa_rpm";
			angle=-320;
			min=0;
			max=12;
		};
		class IndicatorWatch {
			hour="hodinova";
			minute="minutova";
			axis="osa_time";
			reversed=0;
		};
		class ReloadAnimations {
			class MachineGun30E {
				weapon="MachineGun30E";
				angle0=0;
				angle1="-2 * 3.141592654";
				multiplier=500;
				type="rotation";
				animPeriod=0.5;
				selection="gatling";
				begin="usti hlavne";
				end="konec hlavne";
			};
			class CannonE_20HE_xj200 {
				weapon = "CannonE_20HE_xj200";
				angle0=0;
				angle1="-2 * 3.141592654";
				multiplier=500;
				type="rotation";
				animPeriod=1;
				selection="gatling";
				begin="usti hlavne";
				end="konec hlavne";
            };
			class CannonE_20AP_xj200 {
				weapon = "CannonE_20AP_xj200";
				angle0=0;
				angle1="-2 * 3.141592654";
				multiplier=500;
				type="rotation";
				animPeriod=1;
				selection="gatling";
				begin="usti hlavne";
				end="konec hlavne";
            };
		};

		class EventHandlers : EH_Heli {};
		class UserActions {
			class SetFlightAltitude : UA_SetFlightAltitude {};
			
			class SpoofMissileON : UA_SpoofMissileON{}; class SpoofMissileOFF : UA_SpoofMissileOFF{};
			
			class SwitchToDriverAir : UA_SwitchToDriverAir {}; class SwitchToGunnerAir : UA_SwitchToGunnerAir {};
			class TransportTurnON : UA_TransportTurnON {}; class TransportTurnOFF : UA_TransportTurnOFF {};
			class EjectOneCargo : UA_EjectOneCargo {}; class EjectAllCargo : UA_EjectAllCargo {};

			class LAND : UA_LAND_Heli {};
		};
	};
	class Mi24_C_xj200: Mi24_Base_C_xj200 {
		scope = public; accuracy = 1000;
		picture="\TZK_Objects\Texture\RHS_Mi24V.paa";
		armor = 100;
	};
	class Mi24_AT_C_xj200: Mi24_Base_C_xj200 {
		scope = public;
		accuracy = 1000
		irScanRangeMin = 1000
		irScanToEyeFactor = 0.75
		armor = 125; //x1.25
		displayName = "Mi24 AT";
		weapons[] = {ATLauncherAir_xj200, CannonE_20HE_xj200, CannonE_20AP_xj200};
		magazines[]={GuidedAT_Heli_8_xj200, Mag_20HE_800_01_xj200, Mag_20AP_200_01_xj200, SpoofMagazines};
	};

	class Kamov_Base_xj200: Mi24 {
		scope = private; vehicleClass = "TZK_Units_200";
		access = 2;
		crew="SoldierEPilot";
		picture = "\TZK_Objects\Texture\Ka50.paa"
		maxSpeed = 400;
		side = 0;
		displayName="$STR_DN_OUT_HELI_KAM";
		nameSound = "chopper";
		accuracy = 0.5;
		cost = 4000000;
		armor = 50; //Must be low value else subclass won't be attack by machine gun
	//	model = "\O\Vehl\V80";
		model = "\TZK_Objects\Model\V80_xj200.p3d";
		rotorBig = "hip_vrt_v";
		rotorBigBlend = "hip_vrtblur_v";
		rotorSmall = "vrthind_m";
		rotorSmallBlend = "vrthind_m_bl";
		soundEngine[] = {"vehicles\mi_helicopter",3.1622777,1};
		weapons[] = {"Cannon30_Kamov_xj200","HellfireLauncherKamov_xj200","Rocket57x40Kamov_xj200"};
		magazines[]={"Cannon30HE_Kamov_xj200","Cannon30AP_Kamov_xj200","HellfireLauncherKamov_xj200","Rocket57x40Kamov_xj200", SpoofMagazines};
		driverOpticsModel = "\o\vehl\V80_optika.p3d";
		transportSoldier = 0;
		transportAmmo = 0;
		type = "VAir";
		threat[] = {0.6,1,0.8};
		typicalCargo[] = {"Soldier"};
		hasGunner = 0;
		driverAction = "ManActA10Pilot";
		class Turret {
			gunAxis = "OsaHlavne";
			turretAxis = "OsaVeze";
			soundServo[] = {};
			gunBeg = "usti hlavne";
			gunEnd = "konec hlavne";
			minElev = -45;
			maxElev = 10;
			minTurn = -360;
			maxTurn = 360;
			body = "OtocVez";
			gun = "OtocHlaven";
		};
		class Viewoptics {
			initAngleX = 0;
			minAngleX = 0;
			maxAngleX = 0;
			initAngleY = 0;
			minAngleY = 0;
			maxAngleY = 0;
			initFov = 0.1;
			minFov = 0.1;
			maxFov = 1.2;
		};
		class Reflectors {
			class Left {
				color[] = {0.8,0.8,1.0,1.0};
				ambient[] = {0.07,0.07,0.07,1.0};
				position = "L svetlo";
				direction = "konec L svetla";
				hitpoint = "L svetlo";
				selection = "L svetlo";
				size = 0.5;
				brightness = 1.0;
			};
		};
		class IndicatorAltRadar {
			selection = "alt";
			axis = "osa_alt";
			angle = -360;
			min = 0;
			max = 304;
		};
		class IndicatorAltBaro {
			selection = "nm_alt";
			axis = "osa_nm_alt";
			angle = -180;
			min = 0;
			max = 61;
		};
		class IndicatorSpeed {
			selection = "mph";
			axis = "osa_mph";
			angle = -350;
			min = 0;
			max = 175;
		};
		class IndicatorVertSpeed {
			selection = "vert_speed";
			axis = "osa_vert_speed";
			angle = -300;
			min = -35;
			max = 35;
		};
		class IndicatorRPM {
			selection = "rpm";
			axis = "osa_rpm";
			angle = -320;
			min = 0;
			max = 12;
		};
		class IndicatorWatch {
			hour = "hodinova";
			minute = "minutova";
			axis = "osa_time";
			reversed = 0;
		};

		class EventHandlers : EH_Heli {};
		class UserActions {
			class SetFlightAltitude : UA_SetFlightAltitude {};

			class SpoofMissileON : UA_SpoofMissileON{}; class SpoofMissileOFF : UA_SpoofMissileOFF{};

			class LAND : UA_LAND_Heli {};
		};
	};
	class Ka50_xj200: Kamov_Base_xj200 {
		scope = public;
		sensitivity=2; sensitivityEar=0.015
		camouflage=16; audible=20
		accuracy = 1000
		armor = 75; // half the value since new model with partial hit-points
		displayName = "Ka50";
		secondaryExplosion = 1;
		laserScanner = true;
	};
	class Ka50_AT_xj200: Kamov_Base_xj200 {
		scope = public;
		sensitivity=2; sensitivityEar=0.015
		camouflage=16; audible=20
		accuracy = 1000
		irScanRangeMin = 1000
		irScanToEyeFactor = 0.75
		armor = 90; // = 75 x 1.2
		displayName = "Ka50 AT";
		secondaryExplosion = 1;
		laserScanner = true;
		weapons[] = {ATLauncherAir_xj200, CannonE_20HE_xj200, CannonE_20AP_xj200};
		magazines[]={GuidedAT_Heli_12_xj200, Mag_20HE_800_01_xj200, Mag_20AP_200_01_xj200, SpoofMagazines};
		class EventHandlers : EH_Heli {};
	};

	class BWMOD_Tiger_RMK30_xj200: Cobra {
		scope = private; vehicleClass = "TZK_Units_200"; displayName = "Tiger"; // displayName = "UH Tiger (RMK30)";
		model = "\BWMOD_Tiger\BWMOD_Tiger_RMK.p3d";
		picture="\BWMOD_Tiger\pictureRMK.paa";
		icon="\BWMOD_Tiger\icon.paa";
		accuracy=0.08;
		namesound="chopper";
	//	weapons[]={"BWMOD_StingerLauncher"};
	//	magazines[]={"BWMOD_Stinger"};
		weapons[] = {"MachineGun30W","HellfireLauncherCobra_xj200","SNEB70Launcher_xj200"};
		magazines[]={"MachineGun30W","HellfireLauncherCobra_xj200","SNEB70Launcher_xj200", SpoofMagazines};
		getInRadius=2;
		
   		driverAction = "ManActBWMOD_TigerPilot";
   		gunnerAction = "ManActBWMOD_TigerGunner";
		gunnerOpticsModel="optika_heli_gunner";
		soundEngine[]={"\BWMOD_Tiger\snd\engine.ogg",3.1622777,1};
		insideSoundCoef=0.0013;
		hiddenSelections[]={strobo,strobo2,redlight,whitelight,greenlight,display1,display2,display3,display4,display5,display6,display7,nr1,nr2,badge,numbers,waffen1,waffen2,waffen3,waffen4};
		
	//	crew="BWMOD_HeloPilot_Tiger";
		crew = "SoldierWPilot";
		maxSpeed=320;
		transportSoldier=2;
		transportMaxMagazines=0;
		transportMaxWeapons=0;

		class Reflectors {
			class Left {
				color[]={0.9, 0.8, 0.8, 1.0};
				ambient[]={0.1, 0.1, 0.1, 1.0};
				position="L svetlo";
				direction="konec L svetla";
				hitpoint="L svetlo";
				selection="L svetlo";
				size=0.5;
				brightness=0.25;
			};
		};
		class Turret {
			gunAxis="Osa Hlavne";
			turretAxis="Osa Veze";
			gunBeg="usti hlavne";
			gunEnd="konec hlavne";
			soundServo[]={"",0,0};
			minElev=-45;
			maxElev=20;
			minTurn=-140;
			maxTurn=140;
			body="OtocVez";
			gun="OtocHlaven";
		};
		
		class IndicatorWatch {
			hour="hodinova";
			minute="minutova";
			axis="osa_time";
			reversed=false;
		};
		class IndicatorVertSpeed {
			selection = "vert_speed";
			axis = "osa_vert_speed";
			angle = -28.5;
			min = -20;
			max = 20;
		};
		class IndicatorCompass {
			selection="kompas";
			axis="osa_kompas";
			angle=+360;
			min=-3.1415926536;
			max=3.1415926536;
		};
		class IndicatorAltRadar {
			selection = "alt";
			axis = "osa_alt";
			angle = 360;
			min = 0;
			max = 304;
		};
		class IndicatorRPM {
			selection = "rpm";
			axis = "osa_rpm";
			angle = 360;
			min = 0;
			max=18;
		};
		class IndicatorSpeed {
			selection = "mph";
			axis = "osa_mph";
			angle = 360;
			min = 0;
			max = 320;
		};
		class IndicatorVertSpeed2 {
			selection = "vert_speed2";
			axis = "osa_vert_speed2";
			angle = 360;
			min = -60;
			max = 60;
		};

		animated=1;
		class Animations {
			class Door1
			{
				type="rotation";
				animPeriod=1;
				selection="door1";
				axis="osa_door1";
				angle0=0
				angle1=1.308992;
			};

			class Door2
			{
				type="rotation";
				animPeriod=1;
				selection="door2";
				axis="osa_door2";
				angle0=0
				angle1=-1.221726;
			};

			class DamperL
			{
				type="rotation";
				animperiod=1;
				selection="damperL";
				axis="osa_damperL";
				angle0=-0.2;
				angle1=0;
			};

			class DamperR
			{
				type="rotation";
				animperiod=1;
				selection="damperR";
				axis="osa_damperR";
				angle0=-0.2;
				angle1=0;
			};

			class dummy
			{
				type="rotation";
				animperiod=1;
				selection="dummy";
				axis="osa_dummy";
				angle0=0;
				angle1=3;
			};

			class HID
			{
				type="rotation";
				animperiod=1;
				selection="HID";
				axis="osa_HID";
				angle0=0;
				angle1=-1.18;
			};

			class HIDinnen
			{
				type="rotation";
				animperiod=1;
				selection="HIDinnen";
				axis="osa_HID";
				angle0=0;
				angle1=-1.24;
			};

			class RBremse
			{
				type="rotation";
				animPeriod=0.7;
				selection="RBremse";
				axis="osa_RBremse";
				angle0=0;
				angle1=-1.6;
			};

			class bat1
			{
				type="rotation";
				animPeriod=0.5;
				selection="bat1";
				axis="osa_bat";
				angle0=0;
				angle1=1.8;
			};

			class bat2
			{
				type="rotation";
				animPeriod=0.5;
				selection="bat2";
				axis="osa_bat";
				angle0=0;
				angle1=1.8;
			};

			class bat3
			{
				type="rotation";
				animPeriod=0.5;
				selection="bat3";
				axis="osa_bat3";
				angle0=0;
				angle1=1.8;
	       		};

			class Temp1
			{
				type=rotation;
				animPeriod=30;
				selection=Temp1;
				axis=osa_Temp1;
				angle0=0;
				angle1=2.1;
			};

			class Temp2
			{
				type=rotation;
				animPeriod=30;
				selection=Temp2;
				axis=osa_Temp2;
				angle0=0;
				angle1=2;
			};

			class OPress1
			{
				type=rotation;
				animPeriod=20;
				selection=OPress1;
				axis=osa_OPress1;
				angle0=0;
				angle1=1.5;
			};

			class OPress2
			{
				type=rotation;
				animPeriod=20;
				selection=OPress2;
				axis=osa_OPress2;
				angle0=0;
				angle1=1.6;
			};

			class HPress1
			{
				type=rotation;
				animPeriod=15;
				selection=HPress1;
				axis=osa_HPress1;
				angle0=0;
				angle1=1.5;
			};

			class HPress2
			{
				type=rotation;
				animPeriod=15;
				selection=HPress2;
				axis=osa_HPress2;
				angle0=0;
				angle1=1.6;
			};

			class Torque
			{
				type=rotation;
				animPeriod=10;
				selection=Torque;
				axis=osa_Torque;
				angle0=0;
				angle1=1.8;
			};

			class Engine_rpm
			{
				type=rotation;
				animPeriod=2.5;
				selection=ERPM;
				axis=osa_ERPM;
				angle0=0;
				angle1=2.8;
			};

			class Rotor_rpm
			{
				type=rotation;
				animPeriod=11;
				selection=RRPM;
				axis=osa_RRPM;
				angle0=0;
				angle1=1;
			};

			class Temp1_2
			{
				type=rotation;
				animPeriod=30;
				selection=Temp1_2;
				axis=osa_Temp1_2;
				angle0=0;
				angle1=2.1;
			};

			class Temp2_2
			{
				type=rotation;
				animPeriod=30;
				selection=Temp2_2;
				axis=osa_Temp2_2;
				angle0=0;
				angle1=2;
			};

			class OPress1_2
			{
				type=rotation;
				animPeriod=20;
				selection=OPress1_2;
				axis=osa_OPress1_2;
				angle0=0;
				angle1=1.5;
			};

			class OPress2_2
			{
				type=rotation;
				animPeriod=20;
				selection=OPress2_2;
				axis=osa_OPress2_2;
				angle0=0;
				angle1=1.6;
			};

			class HPress1_2
			{
				type=rotation;
				animPeriod=15;
				selection=HPress1_2;
				axis=osa_HPress1_2;
				angle0=0;
				angle1=1.5;
			};

			class HPress2_2
			{
				type=rotation;
				animPeriod=15;
				selection=HPress2_2;
				axis=osa_HPress2_2;
				angle0=0;
				angle1=1.6;
			};

			class Torque_2
			{
				type=rotation;
				animPeriod=10;
				selection=Torque_2;
				axis=osa_Torque_2;
				angle0=0;
				angle1=1.8;
			};

			class Engine_rpm_2
			{
				type=rotation;
				animPeriod=2.5;
				selection=ERPM_2;
				axis=osa_ERPM_2;
				angle0=0;
				angle1=2.8;
			};

			class Rotor_rpm_2
			{
				type=rotation;
				animPeriod=11;
				selection=RRPM_2;
				axis=osa_RRPM_2;
				angle0=0;
				angle1=1;
			};

			class Tank1
			{
				type="rotation";
				animPeriod=10;
				selection="tank1";
				axis="osa_tank1";
				angle0=0;
				angle1=-0.14;
			};

			class Tank2
			{
				type="rotation";
				animPeriod=10;
				selection="tank2";
				axis="osa_tank2";
				angle0=0;
				angle1=-0.14;
			};

			class Tank3
			{
				type="rotation";
				animPeriod=10;
				selection="tank3";
				axis="osa_tank3";
				angle0=0;
				angle1=-5.04;
			};

			// Makro
			#define anim_xx(a,b,c,d) \
				class ##a \
				{ \
					type="rotation"; animPeriod=d; \
					selection=##a; axis=##b; \
					angle0=0; \
					angle1=c*radfactor; \
				}

			#define n_xx(a,b) \
				class n##a \
				{ \
					type="rotation"; animPeriod=2; \
					selection=n##a; axis=osa n##a; \
					angle0=0; \
					angle1=-17*b*radfactor; \
				}

			// SYNTAX: anim_xx (selection, axis, degrees, seconds)


			// HUD
			anim_xx(mph1, osa hud, -327.27, 0.001);
			anim_xx(mph2, osa hud, -327.27, 0.001);
			anim_xx(mph3, osa hud, -327.27, 0.001);
			anim_xx(mph4, osa hud, -327.27, 0.001);
			anim_xx(alt1, osa hud, -327.27, 0.001);
			anim_xx(alt2, osa hud, -327.27, 0.001);
			anim_xx(alt3, osa hud, -327.27, 0.001);
			anim_xx(alt4, osa hud, -327.27, 0.001);
		};

	/*	class UserActions {
		    class OpenDoors
		    {
				displayName="$STR_OpenDoors";
				position="pdoors";
				radius=2;
				condition="getpos this select 2 < 2 && this animationphase ""Door1"" < 0.5 && speed this < 10";
				statement="this animate [""Door1"", 1],this animate [""Door2"", 1]";
		    };
		    class CloseDoors
		    {
				displayName="$STR_CloseDoors";
				position="pdoors";
				radius=2;
				condition="this animationphase ""Door1"" >= 0.5";
				statement="this animate [""Door1"", 0],this animate [""Door2"", 0]";
		    };
		    class Lightson
		    {
				displayName="$STR_PosLampAn";
				position="pdoors";
				radius=9;
				condition="(player == driver this) && this animationphase ""dummy"" < 0.5";
				statement="[this] exec ""\BWMOD_Tiger\scr\lights.sqs""";
		    };
	 	    class Lightsoff
		    {
				displayName="$STR_PosLampAus";
				position="pdoors";
				radius=9;
				condition="(player == driver this) && this animationphase ""dummy"" >= 0.5";
				statement="this animate [""dummy"", 0]";
		    };
		};
		class EventHandlers {
			engine="[_this select 0,_this select 1] exec {\BWMOD_Tiger\scr\engine.sqs}; if (_this select 1) then {[_this select 0,25] exec ""\BWMOD_Tiger\scr\dust.sqs""};";
			init="[_this select 0,""PARS3"",""PARS3""] exec ""\BWMOD_Tiger\scr\loadout.sqs""; [_this select 0] exec ""\BWMOD_Tiger\scr\init.sqs"";";
			incomingMissile="[_this select 0,_this select 1,_this select 2] exec {\BWMOD_Tiger\scr\incoming_missile.sqs}; [_this select 0,_this select 1,_this select 2] exec {\BWMOD_Tiger\scr\incoming_fx.sqs}; [_this] exec {\BWMOD_Tiger\scr\autoflares.sqs};";
			killed="_this exec {\BWMOD_Scripts\shared\fire.sqs}";
			getin="[_this select 0] exec {\BWMod_Tiger\scr\hid.sqs}";
			getout="[_this select 0] exec {\BWMod_Tiger\scr\hid.sqs};";
		};
	*/
		class EventHandlers : EH_Heli {};
		class UserActions {
			class SetFlightAltitude : UA_SetFlightAltitude {};

			class SpoofMissileON : UA_SpoofMissileON{}; class SpoofMissileOFF : UA_SpoofMissileOFF{};
			
			class SwitchToDriverAir : UA_SwitchToDriverAir {}; class SwitchToGunnerAir : UA_SwitchToGunnerAir {};

			class LAND : UA_LAND_Heli {};
		};
	};
	class Tiger_HOT3_xj200: BWMOD_Tiger_RMK30_xj200 {
		scope = public; accuracy = 1000; displayName="Tiger";
		sensitivity=2; sensitivityEar=0.015
		camouflage=16; audible=20
		armor=80; // Same as AH1 AT. Equipping weak but long range missile and can bring 2 cargo thus pricing $25000
		
		armorHull=1.0;
		armorEngine=0.6; // 0.8 maybe too strong.
		armorAvionics=1.4;
		armorVRotor=0.8;
		armorHRotor=0.8;
		armorMissiles=1.6;
		armorGlass=0.8;
		
		weapons[] = {HOT3Launcher_xj200, RMKHETiger_DVD_xj200, RMKAPTiger_DVD_xj200, "SNEB70Launcher_xj200"};
		magazines[]={HOT3Launcher_xj200, Mag_RMKHETiger_400_xj200, Mag_RMKAPTiger_300_xj200, "SNEB70Launcher_xj200", SpoofMagazines};
		
		soundEngine[] = {"\TZK_Objects\Sound\BWMOD\engine.wss",3.162277,1};
		insideSoundCoef=0.05; // Same as original OFP value.
	};
	class Tiger_PARS3_Base_xj200: BWMOD_Tiger_RMK30_xj200 {
		scope = private; displayName="Tiger AT";
	//	accuracy = 0.08; // If you wish to rename unit in 2-list, 4-list and locked-target, it's necessary to set a class redefine its name while setting a little accuracy, and define the actual vehicle's class inheriting the class.
	};
	class Tiger_PARS3_xj200 : Tiger_PARS3_Base_xj200 {
		scope = public; 
		irScanRangeMin = 1000
		irScanToEyeFactor = 0.75
		accuracy = 1000; displayName="Tiger AT";
		weapons[] = {PARS3Launcher_xj200, RMKHETiger_DVD_xj200, RMKAPTiger_DVD_xj200};
		magazines[]={PARS3Launcher_xj200, Mag_RMKHETiger_400_xj200, Mag_RMKAPTiger_300_xj200, SpoofMagazines};
	};
	
	// Fighter Plane
	class A10_Base_xj200: A10 {
		scope = private; accuracy = 1000;
		sensitivity=2; sensitivityEar=0.015
		camouflage=16; audible=20
		armor = 50;
		vehicleClass = "TZK_Units_200";
		weapons[] = {"MaverickLauncher","MachineGun30A10"};
		magazines[]={"MaverickLauncher","MachineGun30A10", SpoofMagazines};
		// The usage of afterburner is learnt and transplanted from rktf15c
	//	model = "\TZK_Objects\Model\A10_xj200.p3d";
		model = "\TZK_Objects\Model\A10_xj200.p3d";
		hiddenselections[]={"vrtule", "vrtule 1"};
	};
	class A10_xj200: A10_Base_xj200 {
		scope = public;
		irScanToEyeFactor = 3; // Enlarge Planes' scan range thus they can spot enemy far, design their route and attack.
		armor = 70;
		animated =1;
		class Animations {
			class AB {
				type ="rotation";
				animPeriod =.1;
				selection ="AB";
				axis ="osa AB";
				angle0 =0;
				angle1 =-1.57;
			};
		};
		class EventHandlers : EH_Plane {};
		class UserActions {
			class SetFlightAltitude : UA_SetFlightAltitude {};

			class AfterBurnerON : UA_AfterBurnerON {
				condition = "(this animationphase ""AB"" < 0.5) && (isengineon this) && bAfterBurner && (driver this) in units group player";
				statement = "[this] exec ""\TZK_Objects\Scripts\AfterBurnerA10.sqs""; ";
			};
			class AfterBurnerOFF : UA_AfterBurnerOFF {
				condition = "this animationphase ""AB"" > 0.5 && (driver this) in units group player";
				statement = "this animate[""AB"", 0]";
			};

			class SpoofMissileON : UA_SpoofMissileON{}; class SpoofMissileOFF : UA_SpoofMissileOFF{};
		};
	};
	class A10_FFAR_xj200: A10_xj200 {
		displayName = "A10 FFAR";
		weapons[] = {"Zuni_MaverickLike_xj200" };
		magazines[]={"Zuni_MaverickLike_xj200", "Zuni_MaverickLike_xj200", "Zuni_MaverickLike_xj200", "Zuni_MaverickLike_xj200", "Zuni_MaverickLike_xj200", "Zuni_MaverickLike_xj200", "Zuni_MaverickLike_xj200", "Zuni_MaverickLike_xj200", "Zuni_MaverickLike_xj200", "Zuni_MaverickLike_xj200", "Zuni_MaverickLike_xj200", "Zuni_MaverickLike_xj200", "Zuni_MaverickLike_xj200", "Zuni_MaverickLike_xj200", "Zuni_MaverickLike_xj200", "Zuni_MaverickLike_xj200", "Zuni_MaverickLike_xj200", "Zuni_MaverickLike_xj200", "Zuni_MaverickLike_xj200", "Zuni_MaverickLike_xj200", "Zuni_MaverickLike_xj200", "Zuni_MaverickLike_xj200", "Zuni_MaverickLike_xj200", "Zuni_MaverickLike_xj200", SpoofMagazines };
	};
	class A10_LGB_xj200: A10_xj200 {
		displayName = "A10 LGB";
		weapons[] = {LGBLauncher_xj200, Cannon_30APHE_xj200};
		magazines[]={Mag_LGB_8_xj200, Mag_30APHE_1200_01_xj200, SpoofMagazines};
	};
	class A10_Buster_xj200: A10_LGB_xj200 {
		displayName = "A10 Buster";
		weapons[] = {"LGBLauncher_xj200"};
		magazines[]={"Mag_LGB_8_xj200" , SpoofMagazines};
		class EventHandlers : EH_SpecialPlane {};
	};
	class A10_Tomahawk_xj200: A10_xj200 {
		camouflage = 100; audible = 50
		displayName = "A10 Tomahawk";
		weapons[] = {"Tomahawk_xj200"};
		magazines[]={"Tomahawk_xj200", SpoofMagazines};
		class EventHandlers : EH_SpecialPlane {};
	};
	class A10_Support_xj200 : A10_xj200 {
		maxSpeed = 400; // 2/3 of A10's maxspeed thus A10 can approach it easier.
		displayName = "A10 Support";
		weapons[] = {};
		magazines[]={SpoofMagazines};
	};

	class Su25_Base_xj200: Plane {
		scope = private;
		crew = SoldierEPilot;
		picture=\su25\isu25;

		side = TEast;
		displayName=$STR_DN_SU25;
		accuracy=0.30;

		driverAction = ManActA10Pilot;

		maxSpeed = 800;

		armor=24;
		cost=20000000;
		model="\su25\su25";
		weapons[] = {Ch29TLauncher_xj200, Rocket57x64, MachineGun30A10};
		magazines[]={Ch29TLauncher_xj200, Rocket57x64, MachineGun30A10, SpoofMagazines};
		fov=0.5;

		type=VAir;
		//threat[] VSoft, VArmor, VAir
		threat[]={0.1, 1, 0.7};

		class Reflectors {
			class Reflector
			{
				color[] = {0.9, 0.8, 0.8, 1.0};
				ambient[] = {0.1, 0.1, 0.1, 1.0};
				position = "L svetlo";
				direction = "konec L svetla";
				hitpoint = "L svetlo";
				selection = "L svetlo";
				size = 0.5;
				brightness = 0.25;
			};
		};
		class IndicatorAltRadar {
			// max for this indicator is 1000 feet (i.e. 304m)
			// note: this is actualy Baro altitude (name is wrong)
			selection = "alt";
			axis = "osa_alt";
			angle = -340;
			min = 0;
			max = 1000;
		};
		class IndicatorAltRadar2 {
			// max for this indicator is 1000 feet (i.e. 304m)
			// note: this is actualy Baro altitude (name is wrong)
			selection = "alt2";
			axis = "osa_alt2";
			angle = -340;
			min = 0;
			max = 1000;
		};
		class IndicatorSpeed {
			selection = "mph";
			axis = "osa_mph";
			angle = -350;
			min = 0;
			max = 1000 / 3.6;
		};
		class IndicatorVertSpeed {
			selection = "vert_speed";
			axis = "osa_vert_speed";
			angle = -240;
			min = -150;
			max = 150;
		};
		class IndicatorVertSpeed2 {
			selection = "vert_speed2";
			axis = "osa_vert_speed2";
			angle = -240;
			min = -150;
			max = 150;
		};
	};
	class Su25_xj200: Su25_Base_xj200 {
		scope = public; accuracy = 1000; vehicleClass = "TZK_Units_200"; displayName = "Su25";
		irScanToEyeFactor = 3; // Enlarge Planes' scan range thus they can spot enemy far, design their route and attack.
		sensitivity=2; sensitivityEar=0.015
		camouflage=16; audible=20
		laserScanner = true;
		
		model = "\TZK_Objects\Model\Su25_xj200.p3d";
		hiddenselections[]={"vrtule", "vrtule 1"};
		animated =1;
		class Animations {
			class AftTrigger {
				type ="rotation";
				animPeriod =.1;
				selection ="afttrigger";
				axis ="axis afttrigger";
				angle0 =0;
				angle1 =-1.57;
			};
		};
		class EventHandlers : EH_Plane {};
		class UserActions {
			class SetFlightAltitude : UA_SetFlightAltitude {};

			class AfterBurnerON : UA_AfterBurnerON {
				condition = "(this animationphase ""afttrigger"" < 0.5) && (isengineon this) && bAfterBurner && (driver this) in units group player";
				statement = "[this] exec ""\TZK_Objects\Scripts\AfterBurnerSu25.sqs""; ";
			};
			class AfterBurnerOFF : UA_AfterBurnerOFF {
				condition = "this animationphase ""afttrigger"" > 0.5 && (driver this) in units group player";
				statement = "this animate[""afttrigger"", 0]";
			};
			
			class SpoofMissileON : UA_SpoofMissileON{}; class SpoofMissileOFF : UA_SpoofMissileOFF{};
		};
	};
	class Su25_Rocket_xj200: Su25_xj200 {
		displayName = "Su25 Rocket";
		weapons[] = {"Rocket57x192" };
		magazines[]={"Rocket57x192", SpoofMagazines};
	};
	class Su25_LGB_xj200: Su25_xj200 {
		displayName = "Su25 LGB";
		weapons[] = {LGBLauncher_xj200, Cannon_30APHE_xj200};
		magazines[]={Mag_LGB_8_xj200, Mag_30APHE_1200_01_xj200, SpoofMagazines};
	};
	class Su25_Buster_xj200: Su25_LGB_xj200 {
		displayName = "Su25 Buster";
		weapons[] = {"LGBLauncher_xj200"};
		magazines[]={"Mag_LGB_8_xj200", SpoofMagazines};
		class EventHandlers : EH_SpecialPlane {};
	};
	class Su25_Raduga_xj200: Su25_LGB_xj200 {
		camouflage = 100; audible = 50
		displayName = "Su25 Raduga";
		weapons[] = {"Raduga_xj200"};
		magazines[]={"Raduga_xj200", SpoofMagazines};
		class EventHandlers : EH_SpecialPlane {};
	};
	class Su25_Support_xj200 : Su25_xj200 {
		displayName = "Su25 Support";
		weapons[] = {};
		magazines[]={SpoofMagazines};
		maxSpeed = 533; // 2/3 of Su25's maxspeed thus Su25 can approach it easier.
	};

	// Transport Plane
	class C130_Base_xj200: Plane {
		scope = private; side = TWest; vehicleClass = "TZK_Units_200";
		accuracy = 0.3; // value should be low in father class
		armor = 50; // value should be low in father class
		transportSoldier = 60; // original value is 38

		crew = SoldierWPilot;
		icon = "\HWK_c130\c130icon.paa";
		picture = "\TZK_Objects\Texture\C130.paa";
		model="\TZK_Objects\Model\C130_xj200.p3d";
		displayName="C-130";
		nameSound="Plane";
	//	transportFuel = 100000;
		transportVehiclesCount = 3;
		transportVehiclesMass = 45000;
	//	transportAmmo = 100000;
		gearRetracting = true;
		animated=1;
		formationX=20;
		formationZ=20;
		formationTime=10;
		precision=200; // vehicle movement precision
		mapSize = 10;
		cost=10000000;

		hasgunner=1;
		driverIsCommander=1;
		driverAction=ManActCessnaPilot;
		gunnerAction=ManActCessnaPilot;

		insideSoundCoef = 0.01;

		cargoAction[]={ManActCargo};

		nightVision=1;
		typicalCargo[]={};
		ejectSpeed[]={0,0,0};
		getInRadius=1.5;

		maxSpeed = 600;
		//landingSpeed = 180;

		soundEngine[]={\HWK_c130\engine.wav,db-10,1};

		weapons[] = {"c130_Flare_xj200"};
		magazines[]={"c130_Flare_xj200", SpoofMagazines};

		wheelSteeringSensitivity = 6.5
		maneuvrability=60;
		flapsFrictionCoef = 2.0
		aileronSensitivity = 0.8;
		elevatorSensitivity = 1.0; // relative elevator sensitivity
		brakeDistance=250;
		noseDownCoef =  0.1; // how much goes nose down during turns
		irTarget = true;
		fov=0.5;
		type=VAir;

		dammageHalf[] = { kiowa_sklo.paa,uh60_kab_sklo2B.paa };
		dammageFull[] = { kiowa_sklo.paa,uh60_kab_sklo2C.paa };
		class Reflectors {
			class Left
			{
				color[] = {0.8, 0.8, 1.0, 1.0};
				ambient[] = {0.07, 0.07, 0.07, 1.0};
				position = "L svetlo";
				direction = "konec L svetla";
				hitpoint = "L svetlo";
				selection = "L svetlo";
				size = 0.5;
				brightness = 1.0;
			};
			class Right
			{
				color[] = {0.8, 0.8, 1.0, 1.0};
				ambient[] = {0.07, 0.07, 0.07, 1.0};
				position = "P svetlo";
				direction = "konec P svetla";
				hitpoint = "P svetlo";
				selection = "P svetlo";
				size = 0.5;
				brightness = 1.0;
			};
		};
		class IndicatorAltRadar {
			selection = "alt";
			axis = "osa_alt";
			angle = -360;
			min = 0;
			max = 360;
		};
		class IndicatorAltBaro {
			selection = "nm_alt";
			axis = "osa_nm_alt";
			angle = 330;
			min = 0;
			max = 330;
		};
		class IndicatorSpeed {
			selection = "mph";
			axis = "osa_mph";
			angle = -350;
			min =  0;
			max = 330;
		};
		class IndicatorVertSpeed {
			selection = "vert_speed";
			axis = "osa_vert_speed";
			angle = 330;
			min = 165;
			max = -165;
		};
		class IndicatorCompass {
			selection = "kompas";
			axis = "osa_kompas";
			angle = 360;
			min = -3.1415926536;
			max = 3.1415926536;
		};
		class IndicatorWatch {
			hour = "hodinova";
			minute = "minutova";
			axis = "osa_time";
			reversed = true;

//--------------------------------------------------------------------
		};
		class IndicatorAltRadar2 {
			selection = "alt2";
			axis = "osa_alt2";
			angle = -360;
			min = 0;
			max = 360;
		};
		class IndicatorAltBaro2 {
			selection = "nm_alt2";
			axis = "osa_nm_alt2";
			angle = 330;
			min = 0;
			max = 330;
		};
		class IndicatorSpeed2 {
			selection = "mph2";
			axis = "osa_mph2";
			angle = -350;
			min = 0;
			max = 330;
		};
		class IndicatorVertSpeed2 {
			selection = "vert_speed2";
			axis = "osa_vert_speed2";
			angle = 330;
			min = 165;
			max = -165;
		};
		class IndicatorCompass2 {
			selection = "kompas2";
			axis = "osa_kompas2";
			angle = 360;
			min = -3.1415926536;
			max = 3.1415926536;
		};
		class IndicatorWatch2 {
			hour = "hodinova2";
			minute = "minutova2";
			axis = "osa_time2";
			reversed = true;
		};

		class Animations {
			class backgear0
			{
				type="rotation";
				animPeriod=6;
				selection="backgear0";
				axis="osbackgear0";
				angle0=0
				angle1=0.872;
			};
			class backgear1
			{
				type="rotation";
				animPeriod=6;
				selection="backgear1";
				axis="osbackgear1";
				angle0=0
				angle1=0.872;
			};
			class leftkl
			{
				type="rotation";
				animPeriod=2;
				selection="leftkl";
				axis="osleftkl";
				angle0=0
				angle1=-0.523;
			};
			class leftkl1
			{
				type="rotation";
				animPeriod=1.2;
				selection="leftkl1";
				axis="osleftkl1";
				angle0=0
				angle1=3.14;
			};
			class rightkl
			{
				type="rotation";
				animPeriod=2;
				selection="rightkl";
				axis="osrightkl";
				angle0=0
				angle1=0.523;
			};
			class rightkl1
			{
				type="rotation";
				animPeriod=1.2;
				selection="rightkl1";
				axis="osrightkl1";
				angle0=0
				angle1=-3.14;
			};
			class frontkl
			{
				type="rotation";
				animPeriod=2;
				selection="frontkl";
				axis="osfrontkl";
				angle0=0
				angle1=0.195;
			};
			class NoseGear
			{
				type="rotation";
				animPeriod=6;
				selection="front_gear";
				axis="osfront_gear";
				angle0=0
				angle1=1.6;
			};
			class rampa
			{
				type="rotation";
				animPeriod=6;
				selection="rampa";
				axis="osrampa";
				angle0=0;
				angle1=0.66;
			};
			class rampa1
			{
				type="rotation";
				animPeriod=5;
				selection="rampa1";
				axis="osrampa1";
				angle0=0;
				angle1=0.523;
			};
			class door1
			{
				type="rotation";
				animPeriod=4;
				selection="door1";
				axis="osdoor1";
				angle0=0;
				angle1=-2.4;
			};
			class door2
			{
				type="rotation";
				animPeriod=3;
				selection="door2";
				axis="osdoors";
				angle0=0;
				angle1=0.785;
			};
			class door3
			{
				type="rotation";
				animPeriod=3;
				selection="door3";
				axis="osdoors";
				angle0=0;
				angle1=-0.785;
			};
			class trotle1
			{
				type="rotation";
				animPeriod=2;
				selection="trotle1";
				axis="ostrotle";
				angle0=0;
				angle1=1.918;
			};
			class trotle2
			{
				type="rotation";
				animPeriod=2;
				selection="trotle2";
				axis="ostrotle";
				angle0=0;
				angle1=1.918;
			};
			class trotle3
			{
				type="rotation";
				animPeriod=2;
				selection="trotle3";
				axis="ostrotle";
				angle0=0;
				angle1=1.918;
			};
			class trotle4
			{
				type="rotation";
				animPeriod=2;
				selection="trotle4";
				axis="ostrotle";
				angle0=0;
				angle1=1.918;
			};
			class reverseprops
			{
				type="rotation";
				animPeriod=1;
				selection="reverseprops";
				axis="ostrotle";
				angle0=0;
				angle1=-1.7;
			};

			class gasolinerope0
			{
				type="rotation";
				animPeriod=15;
				selection="gasolinerope0";
				axis="osgasolinerope";
				angle0=0
				angle1=0.35;
			};
			class gasolinerope1
			{
				type="rotation";
				animPeriod=15;
				selection="gasolinerope1";
				axis="osgasolinerope";
				angle0=0
			angle1=0.35;
			};
			class gasolinerope2
			{
				type="rotation";
				animPeriod=15;
				selection="gasolinerope2";
				axis="osgasolinerope";
				angle0=0
			angle1=0.35;
			};
			class gasolinerope3
			{
				type="rotation";
				animPeriod=15;
				selection="gasolinerope3";
				axis="osgasolinerope";
				angle0=0
				angle1=0.35;
			};
			class gasolinerope4
			{
				type="rotation";
				animPeriod=15;
				selection="gasolinerope4";
				axis="osgasolinerope";
				angle0=0
				angle1=0.35;
			};
			class gasolinerope5
			{
				type="rotation";
				animPeriod=15;
				selection="gasolinerope5";
				axis="osgasolinerope";
				angle0=0
				angle1=0.35;
			};
			class gasolinerope6
			{
				type="rotation";
				animPeriod=15;
				selection="gasolinerope6";
				axis="osgasolinerope";
				angle0=0
			angle1=0.35;
			};
			class gasolinerope7
			{
				type="rotation";
				animPeriod=15;
				selection="gasolinerope7";
				axis="osgasolinerope";
				angle0=0
				angle1=0.35;
			};
			class gasolinerope8
			{
				type="rotation";
				animPeriod=15;
				selection="gasolinerope8";
				axis="osgasolinerope";
				angle0=0
				angle1=0.35;
			};
			class gasolinerope9
			{
				type="rotation";
				animPeriod=15;
				selection="gasolinerope9";
				axis="osgasolinerope";
				angle0=0
			angle1=0.35;
			};
			class gasolinerope10
			{
				type="rotation";
				animPeriod=15;
				selection="gasolinerope10";
				axis="osgasolinerope";
				angle0=0
				angle1=0.35;
			};
			class gasolinerope11
			{
				type="rotation";
				animPeriod=15;
				selection="gasolinerope11";
				axis="osgasolinerope";
				angle0=0
			angle1=0.35;
			};
			class cargoload
			{
				type="rotation";
				animPeriod=0.01;
				selection="something";
				axis="osrampa";
				angle0=0
				angle1=1;
			};
			class relase
			{
				type="rotation";
				animPeriod=0.01;
				selection="relase";
				axis="osrampa";
				angle0=0
				angle1=1;
			};
			class fuellight
			{
				type="rotation";
				animPeriod=0.05;
				selection="fuellight";
				axis="osfuellight";
				angle0=0
				angle1=3.14;
			};
			class ramplight
			{
				type="rotation";
				animPeriod=0.05;
				selection="ramplight";
				axis="osramplight";
				angle0=0
				angle1=3.14;
			};
			class warninglightl
			{
				type="rotation";
				animPeriod=0.05;
				selection="warninglightl";
				axis="oswarninglightl";
				angle0=0
				angle1=3.14;
			};
			class warninglightr
			{
				type="rotation";
				animPeriod=0.05;
				selection="warninglightr";
				axis="oswarninglightr";
				angle0=0
				angle1=3.14;
			};
			class stall
			{
				type="rotation";
				animPeriod=0.05;
				selection="stall";
				axis="osstall";
				angle0=0
				angle1=3.14;
			};
			class hight
			{
				type="rotation";
				animPeriod=0.05;
				selection="hight";
				axis="oshight";
				angle0=0
				angle1=3.14;
			};
			class jumpprepare
			{
				type="rotation";
				animPeriod=3;
				selection="jumpprepare";
				axis="osjump";
				angle0=0
				angle1=3.14;
			};
			class jump
			{
				type="rotation";
				animPeriod=0.05;
				selection="jump";
				axis="osjump";
				angle0=0
				angle1=3.14;
			};
			class r1
			{
				type="rotation";
				animPeriod=0.05;
				selection="r1";
				axis="osr1";
				angle0=0
				angle1=3.14;
			};
			class g1
			{
				type="rotation";
				animPeriod=0.05;
				selection="g1";
				axis="osg1";
				angle0=0
				angle1=3.14;
			};
			class r2
			{
				type="rotation";
				animPeriod=0.05;
				selection="r2";
				axis="osr2";
				angle0=0
				angle1=3.14;
			};
			class g2
			{
				type="rotation";
				animPeriod=0.05;
				selection="g2";
				axis="osg2";
				angle0=0
				angle1=3.14;
			};
			class r3
			{
				type="rotation";
				animPeriod=0.05;
				selection="r3";
				axis="osr3";
				angle0=0
				angle1=3.14;
			};
			class g3
			{
				type="rotation";
				animPeriod=0.05;
				selection="g3";
				axis="osg3";
				angle0=0
				angle1=3.14;
			};
			class engine1
			{
				type="rotation";
				animPeriod=0.01;
				selection="engine1";
				axis="osengine";
				angle0=0;
				angle1=3.14;
			};
			class engine2
			{
				type="rotation";
				animPeriod=0.01;
				selection="engine2";
				axis="osengine";
				angle0=0;
				angle1=3.14;
			};
			class engine3
			{
				type="rotation";
				animPeriod=0.01;
				selection="engine3";
				axis="osengine";
				angle0=0;
				angle1=3.14;
			};
			class engine4
			{
				type="rotation";
				animPeriod=0.01;
				selection="engine4";
				axis="osengine";
				angle0=0;
				angle1=3.14;
			};
		};
	};
	class C130_xj200: C130_Base_xj200 {
		scope = public;
		accuracy = 1000; // Important for aircrafts used in CTI
		armor = 100; // the exact armor value in son class (original value in addon is 150)
		class UserActions {
			class reverseprops
			{
				displayName="THRUST REVERSE ON";
				position="ostrotle";
				radius=2;
				condition="(this animationPhase ""NoseGear"" == 0) and (isengineon this) and (speed this < 250) and (this animationPhase ""reverseprops"" == 0)";
				statement="this animate[""reverseprops"",1];[this] exec {\hwk_C130\script\reverseprops.sqs}";
			};
			class unreverseprops
			{
				displayName="THRUST REVERSE OFF";
				position="ostrotle";
				radius=2;
				condition="(this animationPhase ""reverseprops"" > 0)";
				statement="this animate[""reverseprops"",0]";
			};
			class Opensrampa
			{
				displayName="Open cargo ramp";
				position="osrampa";
				radius=16;
				condition="this animationPhase ""rampa"" < 0.5";
				statement="[this] exec {\hwk_C130\script\openramp.sqs}";
			};
			class Closerampa
			{
				displayName="Close cargo ramp";
				position="osrampa";
				radius=16;
				condition="this animationPhase ""rampa"" >= 0.5";
				statement="[this] exec {\hwk_C130\script\closeramp.sqs}";
			};


			class SetFlightAltitude : UA_SetFlightAltitude {
				position="ostrotle";
			};

			class SpoofMissileON : UA_SpoofMissileON{}; class SpoofMissileOFF : UA_SpoofMissileOFF{};
			
			class AttachInVehicle : UA_AttachInVehicle_Heli {
				position="ostrotle";
			};
			class AttachOnFoot : UA_AttachOnFoot_Heli {
				position="ostrotle";
			};

			class TransportTurnON : UA_TransportTurnON {
				position="ostrotle";
			};
			class TransportTurnOFF : UA_TransportTurnOFF {
				position="ostrotle";
			};
			class EjectOneCargo : UA_EjectOneCargo {
				position="ostrotle";
			};
			class EjectAllCargo : UA_EjectAllCargo {
				position="ostrotle";
			};
			class EjectAICargo : UA_EjectAICargo {
				position="ostrotle";
			};
		};
		class EventHandlers : EH_Plane {
			Init = "_this exec {\TZK_Objects\Scripts\InitEventHandlers\C130.sqs}";
			Engine = "if (_this Select 1) then {[_this select 0] exec {\TZK_Objects\Scripts\C130CloseRamp.sqs}; [_this select 0] exec {\hwk_C130\script\enginestart.sqs}} else {[_this select 0] exec {\hwk_C130\script\openramp.sqs}; [_this select 0] exec {\hwk_C130\script\enginestop.sqs} } ";
			Fired = "if ((_this select 1) =={c130_Flare_xj200}) then {[_this Select 0] exec {\HWK_c130\script\flare.sqs}} ";
			Gear = "if (_this Select 1) then {[_this select 0] exec {\hwk_C130\script\geardown.sqs}; [_this select 0] exec {\hwk_C130\script\closegas.sqs}} else {[_this select 0] exec {\hwk_C130\script\gearup.sqs}} "
			Getin = "[_this select 0] exec {\hwk_C130\script\desantin.sqs}";
			GetOut = "[_this select 0] exec {\hwk_C130\script\desantout.sqs}";
		};
	};
	class C130_Support_xj200: C130_xj200 {
		scope = protected; displayName="C-130 Support";
		transportFuel = 100000; // Allow players use it to refuel.
		maxSpeed = 400; // Fly slower for A10 to get close easier.
	};
	class An12_Base_xj200: Plane {
		scope = private; side = TEast; vehicleClass = "TZK_Units_200";
		accuracy = 0.3; // value should be low in father class
		armor = 50; // value should be low in father class

		simulation=airPlane;
		displayName="An-12";
		model="\TZK_Objects\Model\an12_xj200.p3d";
		picture = "\TZK_Objects\Texture\an12.paa";
		hasgunner=0;
		driveriscommander=1;
		gearRetracting=1;
		nameSound="Plane";
		driverCanSee =16;
		landingAoa = 10*3.1415/180;
		soundEngine[]={"\an12pack\an12_engine.wav",0.316228,1};
		soundEnviron[]={"Objects\noise",0.001000,1.000000};
		soundServo[]={"Vehicles\gun_elevate",0.010000,0.400000};
		cost=4000000;
		formationX=200;
		formationZ=300;
		formationTime=30;
		precision=500;//200
		maneuvrability=50.0;
		maxSpeed=750;
		aileronSensitivity=1;
		elevatorSensitivity=2;
		noseDownCoef=1;
		flapsFrictionCoef = 0.1;
		wheelSteeringSensitivity = 4.0;
		brakeDistance=500;// vehicle movement precision
		steerAheadSimul=1.0;
		steerAheadPlan=2.0;
		transportSoldier=60;
		driverAction="ManActCessnaPilot";
		gunnerAction="ManActCessnaPilot";
		cargoAction[]={"ManActCessnaCargo"};
		crew = SoldierEPilot;
		threat[]={0, 0, 0};
		extCameraPosition[]={0,5,-50};
		weapons[] = {};
		magazines[]={SpoofMagazines};
		class ViewPilot {
			initFov=0.7;
			minFov=0.4;
			maxFov=0.9;
			initAngleX=0;
			minAngleX=-20;
			maxAngleX=20;
			initAngleY=0;
			minAngleY=-120;
			maxAngleY=120;
		};
		animated=1;
		class Animations {
			class Rbht
			{
				type="rotation";
				animPeriod=2.5;
				selection="bht";
				axis="osa bht";
				angle0=0;
				angle1=0.3;
			};
			class Rbhr
			{
				type="rotation";
				animPeriod=2.5;
				selection="bhr";
				axis="osa bhr";
				angle0=0;
				angle1=1.4;
			};
			class Rbhl
			{
				type="rotation";
				animPeriod=2.5;
				selection="bhl";
				axis="osa bhl";
				angle0=0;
				angle1=-1.4;
			};
			class Fg1
			{
				type="rotation";
				animPeriod=3;
				selection="Fg1";
				axis="osa Fg1";
				angle0=0;
				angle1=1.5;
			};
			class Fcr
			{
				type="rotation";
				animPeriod=2.4;
				selection="Fcr";
				axis="osa Fcr";
				angle0=0;
				angle1=-1.8;
			};
			class Fcl
			{
				type="rotation";
				animPeriod=2.4;
				selection="Fcl";
				axis="osa Fcl";
				angle0=0;
				angle1=1.8;
			};
			class Fcf
			{
				type="rotation";
				animPeriod=2.4;
				selection="Fcf";
				axis="osa Fcf";
				angle0=0;
				angle1=1.6;
			};
			class Lg1
			{
				type="rotation";
				animPeriod=2.4;
				selection="Lg1";
				axis="osa Lg1";
				angle0=0;
				angle1=-1.75;
			};
			class Lcl
			{
				type="rotation";
				animPeriod=2.4;
				selection="Lcl";
				axis="osa Lcl";
				angle0=0;
				angle1=1.65;
			};
			class Lcc
			{
				type="rotation";
				animPeriod=2.4;
				selection="Lcc";
				axis="osa Lcc";
				angle0=0;
				angle1=-1.5;
			};
			class Rg1
			{
				type="rotation";
				animPeriod=2.4;
				selection="Rg1";
				axis="osa Rg1";
				angle0=0;
				angle1=1.75;
			};
			class Rcr
			{
				type="rotation";
				animPeriod=2.4;
				selection="Rcr";
				axis="osa Rcr";
				angle0=0;
				angle1=-1.65;
			};
			class Rcc
			{
				type="rotation";
				animPeriod=2.4;
				selection="Rcc";
				axis="osa Rcc";
				angle0=0;
				angle1=1.5;
			};
			class slope
			{
				type="rotation";
				animPeriod=3;
				selection="slope";
				axis="osa slope";
				angle0=0;
				angle1=3.55;
			};
		};
	};
	class An12_xj200: An12_Base_xj200 {
		scope = public;
		accuracy = 1000; // Important for aircrafts used in CTI
		armor = 100; // the exact armor value in son class (original value in addon is 85)
		class UserActions {
			class OpenRamp
			{
				displayName="Open Ramp";
				position="ramp switch";
				radius=4;
				condition="this animationphase ""Rbht"" < 0.4";
				statement="[this] exec {\an12pack\Copen.sqs}";
			};


			class SetFlightAltitude : UA_SetFlightAltitude {
				position="ramp switch";
			};

			class SpoofMissileON : UA_SpoofMissileON{}; class SpoofMissileOFF : UA_SpoofMissileOFF{};
			
			class AttachInVehicle : UA_AttachInVehicle_Heli {
				position="ramp switch";
			};
			class AttachOnFoot : UA_AttachOnFoot_Heli {
				position="ramp switch";
			};

			class TransportTurnON : UA_TransportTurnON {
				position="ramp switch";
			};
			class TransportTurnOFF : UA_TransportTurnOFF {
				position="ramp switch";
			};
			class EjectOneCargo : UA_EjectOneCargo {
				position="ramp switch";
			};
			class EjectAllCargo : UA_EjectAllCargo {
				position="ramp switch";
			};
			class EjectAICargo : UA_EjectAICargo {
				position="ramp switch";
			};

			class CloseRamp
			{
				displayName="Close Ramp";
				position="ramp switch";
				radius=4;
				condition="(this animationphase ""Rbht"" >=0.4)&&(this animationphase ""Slope"" < 0.1)";
				statement="[this] exec {\an12pack\Cclose.sqs}";
			};
			class DownSlope
			{
				displayName="Down Slope";
				position="ramp switch";
				radius=4;
				condition="(this animationphase ""Slope"" < 0.1)&&(this animationphase ""Rbht"" >=0.9)";
				statement="[this] exec {\an12pack\Sopen.sqs}";
			};
			class UpSlope
			{
				displayName="Up Slope";
				position="ramp switch";
				radius=4;
				condition="this animationphase ""Slope"" >=0.1";
				statement="[this] exec {\an12pack\Sclose.sqs}";
			};
		};
		class EventHandlers : EH_Plane {
			Init = "_this exec {\TZK_Objects\Scripts\InitEventHandlers\An12.sqs}";
			Gear = "if (_this Select 1) then {[_this select 0] exec {\an12pack\geardown.sqs}} else {[_this select 0] exec {\an12pack\gearup.sqs}} ";
		};
	};
	class An12_Support_xj200: An12_xj200 {
		scope = protected; displayName="An-12 Support"; // However An12 is not a support plane. But IL-76 too tough thus still use An12.
		transportFuel = 100000; // Allow players use it to refuel.
		maxSpeed = 500; // Fly slower for Su25 to get close easier.
	};

	
	class C17_Base_xj200: A10 {
		scope = private; side = TWest; vehicleClass = "TZK_Units_200";
		displayName = "C17";
		accuracy = 0.3; // value should be low in father class
		armor = 50; // value should be low in father class
		transportSoldier = 60; // original value is 39
		
		nameSound="plane";
		gearRetracting = true;
		ejectSpeed[]={0,0,0};
	
		driverAction=ManActCessnaPilot;
		cargoAction[]={ManActCessnaPilot,ManActCargo};
		typicalCargo[]={Soldier, Soldier, SoldierLAW, SoldierLAW};

		maxSpeed = 500;
		soundEngine[]={\C17Glob\C17.wav,db-10,1};
		
		cost=10000000;
		model="\C17Glob\C17Glob";
	
		weapons[] = {};
		magazines[]={SpoofMagazines};

		fov=0.5;

		type=VAir;
		//threat[] VSoft, VArmor, VAir 
		threat[]={0.1, 1, 0.7};
	};
	class C17_xj200: C17_Base_xj200 {
		scope = public;
		accuracy = 1000; // Important for aircrafts used in CTI
		armor = 500; // the exact armor value in son class
		picture = "\TZK_Objects\Texture\C17.paa";
		model = "\TZK_Objects\Model\C17Glob.p3d";
		maxSpeed = 400; // Fly slower for A10 to get close easier.
		soundEngine[]={"\TZK_Objects\Sound\C17.wss",1.0,1};
		weapons[] = {};
		magazines[]={SpoofMagazines};
		class UserActions {
			class SetFlightAltitude : UA_SetFlightAltitude {};

			class SpoofMissileON : UA_SpoofMissileON{}; class SpoofMissileOFF : UA_SpoofMissileOFF{};
			
			class AttachInVehicle : UA_AttachInVehicle_Heli {};
			class AttachOnFoot : UA_AttachOnFoot_Heli {};

			class TransportTurnON : UA_TransportTurnON {};
			class TransportTurnOFF : UA_TransportTurnOFF {};
			class EjectOneCargo : UA_EjectOneCargo {};
			class EjectAllCargo : UA_EjectAllCargo {};
			class EjectAICargo : UA_EjectAICargo {};
		};
		class EventHandlers : EH_Plane {
			Init = "if (local (_this select 0)) then { hint {The model of C-17 and IL-76 is roug. It's welcomed if player can provide better Models or AddOns. Transplant model from Arma may be a solution.} }";
		};
	};
	class KJ2000_VME_Base_xj200: A10 {
		scope = private; side = TEast; vehicleClass = "TZK_Units_200";
		displayName="PLA-IL76";
		accuracy = 0.2; // value should be low in father class
		armor = 50; // value should be low in father class
		brakeDistance=400;
		crew = SoldierEPilot; hasgunner=1; driveriscommander=1;	
		picture = "\VME_KJ2000\kj2000p.paa";
		
		irTarget=1; irScanGround=0;
		
		driverAction = ManActCessnaPilot;
		cargoAction[] = {ManActCessnaCoPilot, ManActCargo};

		maxSpeed = 600;
		
		soundengine[]={"\VME_KJ2000\Antonov1.wav",db+20,1};
		soundEnviron[]={Objects\noise,db-60,1.0};
		
		weapons[] = {};
		magazines[]={SpoofMagazines};

		cost=2000000;
		transportSoldier=72;

		fov=0.7;
		aileronSensitivity = 1;
		elevatorSensitivity = 1; // relative elevator sensitivity
		noseDownCoef = 0.8; // how much goes nose down during turns
		landingAoa = 8*3.1415/180;
		gearRetracting = true;
		ejectSpeed[]={0,0,0};

		extCameraPosition[]={0,9,-100};


		type=VAir;
		//threat[] VSoft, VArmor, VAir 
		threat[]={0.8, 0.8, 1.0};
	
		class Reflectors {
			class Left
			{
				color[] = {0.8, 0.8, 1.0, 1.0};
				ambient[] = {0.07, 0.07, 0.07, 1.0};
				position = "L svetlo";
				direction = "konec L svetla";
				hitpoint = "L svetlo";
				selection = "L svetlo";
				size = 0.5;
				brightness = 1.0;
			};
			class Right
			{
				color[] = {0.8, 0.8, 1.0, 1.0};
				ambient[] = {0.07, 0.07, 0.07, 1.0};
				position = "P svetlo";
				direction = "konec P svetla";
				hitpoint = "P svetlo";
				selection = "P svetlo";
				size = 0.5;
				brightness = 1.0;
			};
		};
	};
	class IL76_VME_xj200: KJ2000_VME_Base_xj200 {
		scope = public;
		accuracy = 1000; // Important for aircrafts used in CTI
		armor = 190; // the exact armor value in son class
		picture = "\VME_KJ2000\kj2000p.paa";
		hiddenSelections[] = {"foldwheelfront", "foldwheelrear","foldwheelrear1", "spinwheelfront", "spinwheelrear", "spinwheelrear1"};
		maxSpeed = 500; // IL-76 will be used as Support Plane, thus make it fly slower for Su25 to get close easier.
		soundengine[]={"\VME_KJ2000\Antonov1.wav",1.0,1};
		soundEnviron[]={Objects\noise,0.31622776,1.0};
		weapons[] = {};
		magazines[]={SpoofMagazines};
		model = "\TZK_Objects\Model\VME_KJ2000.p3d";
		animated=1;
		class UserActions {
			class SetFlightAltitude : UA_SetFlightAltitude {};

			class SpoofMissileON : UA_SpoofMissileON{}; class SpoofMissileOFF : UA_SpoofMissileOFF{};
			
			class AttachInVehicle : UA_AttachInVehicle_Heli {};
			class AttachOnFoot : UA_AttachOnFoot_Heli {};

			class TransportTurnON : UA_TransportTurnON {};
			class TransportTurnOFF : UA_TransportTurnOFF {};
			class EjectOneCargo : UA_EjectOneCargo {};
			class EjectAllCargo : UA_EjectAllCargo {};
			class EjectAICargo : UA_EjectAICargo {};
		};
      	class Animations {
			class Rbht
			{
				type="rotation";
				animPeriod=2.5;
				selection="bht";
				axis="osa bht";
				angle0=0;
				angle1=0.3;
			};
			class Rbhr
			{
				type="rotation";
				animPeriod=2.5;
				selection="bhr";
				axis="osa bhr";
				angle0=0;
				angle1=1.4;
			};
			class Rbhl
			{
				type="rotation";
				animPeriod=2.5;
				selection="bhl";
				axis="osa bhl";
				angle0=0;
				angle1=-1.4;
			};
			class Fg1
			{
				type="rotation";
				animPeriod=3;
				selection="Fg1";
				axis="osa Fg1";
				angle0=0;
				angle1=1.5;
			};
			class Fcr
			{
				type="rotation";
				animPeriod=2.4;
				selection="Fcr";
				axis="osa Fcr";
				angle0=0;
				angle1=-1.8;
			};
			class Fcl
			{
				type="rotation";
				animPeriod=2.4;
				selection="Fcl";
				axis="osa Fcl";
				angle0=0;
				angle1=1.8;
			};
			class Fcf
			{
				type="rotation";
				animPeriod=2.4;
				selection="Fcf";
				axis="osa Fcf";
				angle0=0;
				angle1=1.6;
			};
			class Lg1
			{
				type="rotation";
				animPeriod=2.4;
				selection="Lg1";
				axis="osa Lg1";
				angle0=0;
				angle1=-1.75;
			};
			class Lcl
			{
				type="rotation";
				animPeriod=2.4;
				selection="Lcl";
				axis="osa Lcl";
				angle0=0;
				angle1=1.65;
			};
			class Lcc
			{
				type="rotation";
				animPeriod=2.4;
				selection="Lcc";
				axis="osa Lcc";
				angle0=0;
				angle1=-1.5;
			};
			class Rg1
			{
				type="rotation";
				animPeriod=2.4;
				selection="Rg1";
				axis="osa Rg1";
				angle0=0;
				angle1=1.75;
			};
			class Rcr
			{
				type="rotation";
				animPeriod=2.4;
				selection="Rcr";
				axis="osa Rcr";
				angle0=0;
				angle1=-1.65;
			};
			class Rcc
			{
				type="rotation";
				animPeriod=2.4;
				selection="Rcc";
				axis="osa Rcc";
				angle0=0;
				angle1=1.5;
			};
			class slope
			{
				type="rotation";
				animPeriod=3;
				selection="slope";
				axis="osa slope";
				angle0=0.25;
				angle1=3.55;
			};
			class signal_rouge
			{
				type="rotation";
				animPeriod=0.001;
				selection="signal_rouge";
				axis="axe_signal_rouge";
				angle0=0;
				angle1=3.141581;
			};
			class signal_vert
			{
				type="rotation";
				animPeriod=0.001;
				selection="signal_vert";
				axis="axe_signal_vert";
				angle0=0;
				angle1=3.141581;
			};
                        class SWF
			{
				type ="rotation"; animPeriod =.0001;
				selection ="spinwheelfront";axis="axis_spinwheelfront";
				angle0=0;angle1=6.28;
			};
			class SWR
			{
				type ="rotation"; animPeriod =.0001;
				selection ="spinwheelrear";axis ="axis_spinwheelrear";
				angle0=0;angle1=6.28;
			};
                        class SWR1
			{
				type ="rotation"; animPeriod =.0001;
				selection ="spinwheelrear1";axis ="axis_spinwheelrear1";
				angle0=0;angle1=6.28;
			};
		};
		class EventHandlers : EH_Plane {
			Init = "if (local (_this select 0)) then { hint {The model of C-17 and IL-76 is roug. It's welcomed if player can provide better Models or AddOns. Transplant model from Arma may be a solution.} }; [_this select 0] exec {\VME_KJ2000\common_init.sqs} ";
			Gear = "if (_this select 1) then {[_this select 0] exec{\VME_KJ2000\geardown.sqs}} else {[_this select 0] exec{\VME_KJ2000\gearup.sqs}}";
		};
	};
//EOF