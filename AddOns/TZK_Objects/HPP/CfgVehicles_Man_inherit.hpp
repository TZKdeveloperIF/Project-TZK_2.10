// Man

	// Player
	class LeaderW_xj200: SoldierWB {
		scope = protected;
		canHideBodies = 1;
		class UserActions {
			class MHQBuildMenu : UA_MHQBuildMenu {
				statement="[utMHQ0,150] exec {Player\Dialog BuildMenu.sqs}";
			};
			class MCVBuildMenu : UA_MCVBuildMenu {
				statement="[utMCVW,150] exec {Player\Dialog BuildMenu.sqs}";
			};
			class SupBuildMenu : UA_SupBuildMenu {
				statement="[-1,50] exec {Player\Dialog BuildMenu.sqs}";
			};
			
			class SelfMedic: UA_SelfMedic {};
		};
	};
	class LeaderE_xj200: SoldierEB {
		scope = protected;
		canHideBodies = 1;
		class UserActions {
			class MHQBuildMenu : UA_MHQBuildMenu {
				statement="[utMHQ1,150] exec {Player\Dialog BuildMenu.sqs}";
			};
			class MCVBuildMenu : UA_MCVBuildMenu {
				statement="[utMCVE,150] exec {Player\Dialog BuildMenu.sqs}";
			};
			class SupBuildMenu : UA_SupBuildMenu {
				statement="[-1,50] exec {Player\Dialog BuildMenu.sqs}";
			};
			
			class SelfMedic: UA_SelfMedic {};
		};
	};
	class CommanderW_xj200: OfficerW {
		scope = protected;
		canHideBodies = 1;
		class UserActions {
			class MHQBuildMenu : UA_MHQBuildMenu {
				statement="[utMHQ0,150] exec {Player\Dialog BuildMenu.sqs}";
			};
			class MCVBuildMenu : UA_MCVBuildMenu {
				statement="[utMCVW,150] exec {Player\Dialog BuildMenu.sqs}";
			};
			class SupBuildMenu : UA_SupBuildMenu {
				statement="[-1,50] exec {Player\Dialog BuildMenu.sqs}";
			};
			
			class SelfMedic: UA_SelfMedic {};
		};
	};
	class CommanderE_xj200: OfficerE {
		scope = protected;
		canHideBodies = 1;
		class UserActions {
			class MHQBuildMenu : UA_MHQBuildMenu {
				statement="[utMHQ1,150] exec {Player\Dialog BuildMenu.sqs}";
			};
			class MCVBuildMenu : UA_MCVBuildMenu {
				statement="[utMCVE,150] exec {Player\Dialog BuildMenu.sqs}";
			};
			class SupBuildMenu : UA_SupBuildMenu {
				statement="[-1,50] exec {Player\Dialog BuildMenu.sqs}";
			};
			
			class SelfMedic: UA_SelfMedic {};
		};
	};
	// LAW/AT Sniper
	class LAWSniperW_xj200: SoldierWSniper {
		vehicleClass = "TZK_Units_200";
		displayName="LAW Sniper";
		weaponSlots="1	 + 	16	 + 10*		256	 + 2*	4096	 + 	2	 + 4*	32";
		weapons[]={"M21","LAWLauncher","Throw","Put","NVGoggles"};
		magazines[]={"M21","M21","M21","M21","LAWLauncher","LAWLauncher","LAWLauncher"};
		threat[]={1,0.900000,0.100000};
	};
	class ATSniperW_xj200: LAWSniperW_xj200 {
		displayName="AT Sniper";
		weapons[]={"M21","CarlGustavLauncher","Throw","Put","NVGoggles"};
		magazines[]={"M21","M21","M21","M21","CarlGustavLauncher"};
	};
	class RPGSniperW_xj200: SoldierESniper {
		vehicleClass = "TZK_Units_200";
		displayName="RPG Sniper";
		weaponSlots="1	 + 	16	 + 10*		256	 + 2*	4096	 + 	2	 + 4*	32";
		weapons[]={"SVDDragunov","RPGLauncher","Throw","Put","NVGoggles"};
		magazines[]={"SVDDragunov","SVDDragunov","SVDDragunov","SVDDragunov","RPGLauncher","RPGLauncher","RPGLauncher"};
		threat[]={1,0.900000,0.100000};
	};
	class ATSniperE_xj200: RPGSniperW_xj200 {
		displayName="AT Sniper";
		weapons[]={"SVDDragunov","AT4Launcher","Throw","Put","NVGoggles"};
		magazines[]={"SVDDragunov","SVDDragunov","SVDDragunov","SVDDragunov","AT4Launcher"};
	};

	// RES Soldiers equipping common weapons used in mission.sqm to initialize the CfgMaterials Effect
	class ResM249LAW_xj200: SoldierGB { weapons[]={"LSR_m249spw_acog_xj200","LAWLauncher"}; magazines[]={}; };
	class ResRPKRPG_xj200: SoldierGB { weapons[]={"C8XRPK74M1p29_xj200","RPGLauncher"}; magazines[]={}; };
	
	class ResM24AT_xj200: SoldierGB { weapons[]={"M24_xj200","CarlGustavLauncher"}; magazines[]={}; };
	class ResSVDSAT_xj200: SoldierGB { weapons[]={"SVDS_xj200","AT4Launcher"}; magazines[]={}; };
	
	class ResM16A4AA_xj200: SoldierGB { weapons[]={"M16A4_M203_xj200","AALauncher"}; magazines[]={}; };
	class ResAK74MAA_xj200: SoldierGB { weapons[]={"AK74MGP25_xj200","9K32Launcher"}; magazines[]={}; };
	
	class ResM240_xj200: SoldierGB { weapons[]={"LSR_M240_xj200"}; magazines[]={}; };
	class ResPKM_xj200: SoldierGB { weapons[]={"PKM_xj200"}; magazines[]={}; };
		
	class ResM60_xj200: SoldierGB { weapons[]={"M60"}; magazines[]={}; };
	class ResPK_xj200: SoldierGB { weapons[]={"PK"}; magazines[]={}; };
		
	class ResM21_xj200: SoldierGB { weapons[]={"M21", "LaserDesignator"}; magazines[]={}; };
	class ResSVD_xj200: SoldierGB { weapons[]={"SVDDragunov"}; magazines[]={}; };
