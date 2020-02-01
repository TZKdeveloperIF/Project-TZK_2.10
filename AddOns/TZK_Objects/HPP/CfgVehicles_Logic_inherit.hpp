// Game-Logic. Using non-physical logic-objects to broadcast position data for killed-tank-effect. The command "CreateVehicle" here is better than "publicVariable" because the latter may cause bandwidth problem.

	class Logic: All {};
	
	class KilledTankLogic_M1A1_xj200 : Logic {
		class EventHandlers {
			Init = "[_this select 0, {M1A1_xj200}] exec {\TZK_Objects\Scripts\KilledBurnEffect\LogicSwitch.sqs}";
		};
	};
	class KilledTankLogic_M1A2_INQ_xj200 : Logic {
		class EventHandlers {
			Init = "[_this select 0, {M1A2_INQ_xj200}] exec {\TZK_Objects\Scripts\KilledBurnEffect\LogicSwitch.sqs}";
		};
	};
	class KilledTankLogic_Leo2A6_xj200 : Logic {
		class EventHandlers {
			Init = "[_this select 0, {Leo2A6_xj200}] exec {\TZK_Objects\Scripts\KilledBurnEffect\LogicSwitch.sqs}";
		};
	};
	class KilledTankLogic_M1A1_Art_xj200 : Logic {
		class EventHandlers {
			Init = "[_this select 0, {M1A1_Art_xj200}] exec {\TZK_Objects\Scripts\KilledBurnEffect\LogicSwitch.sqs}";
		};
	};
	
	class KilledTankLogic_T80_xj200 : Logic {
		class EventHandlers {
			Init = "[_this select 0, {T80_xj200}] exec {\TZK_Objects\Scripts\KilledBurnEffect\LogicSwitch.sqs}";
		};
	};
	class KilledTankLogic_T90_xj200 : Logic {
		class EventHandlers {
			Init = "[_this select 0, {T90_xj200}] exec {\TZK_Objects\Scripts\KilledBurnEffect\LogicSwitch.sqs}";
		};
	};
	class KilledTankLogic_ZTZ99_xj200 : Logic {
		class EventHandlers {
			Init = "[_this select 0, {ZTZ99_xj200}] exec {\TZK_Objects\Scripts\KilledBurnEffect\LogicSwitch.sqs}";
		};
	};
	class KilledTankLogic_T80_Art_xj200 : Logic {
		class EventHandlers {
			Init = "[_this select 0, {T80_Art_xj200}] exec {\TZK_Objects\Scripts\KilledBurnEffect\LogicSwitch.sqs}";
		};
	};
	
	class KilledTankLogic_M60_xj200 : Logic {
		class EventHandlers {
			Init = "[_this select 0, {M60_xj200}] exec {\TZK_Objects\Scripts\KilledBurnEffect\LogicSwitch.sqs}";
		};
	};
	class KilledTankLogic_T72_xj200 : Logic {
		class EventHandlers {
			Init = "[_this select 0, {T72_xj200}] exec {\TZK_Objects\Scripts\KilledBurnEffect\LogicSwitch.sqs}";
		};
	};

	class KilledTankLogic_M109_Paladin_xj200 : Logic {
		class EventHandlers {
			Init = "[_this select 0, {M109_Paladin_xj200}] exec {\TZK_Objects\Scripts\KilledBurnEffect\LogicSwitch.sqs}";
		};
	};
	class KilledTankLogic_M109_Art_xj200 : Logic {
		class EventHandlers {
			Init = "[_this select 0, {M109_Art_xj200}] exec {\TZK_Objects\Scripts\KilledBurnEffect\LogicSwitch.sqs}";
		};
	};
	class KilledTankLogic_PLZ05_VME_xj200 : Logic {
		class EventHandlers {
			Init = "[_this select 0, {PLZ05_VME_xj200}] exec {\TZK_Objects\Scripts\KilledBurnEffect\LogicSwitch.sqs}";
		};
	};
	class KilledTankLogic_PLZ05_Art_xj200 : Logic {
		class EventHandlers {
			Init = "[_this select 0, {PLZ05_Art_xj200}] exec {\TZK_Objects\Scripts\KilledBurnEffect\LogicSwitch.sqs}";
		};
	};

	class KilledTankLogic_T80Res_xj200 : Logic {
		class EventHandlers {
			Init = "[_this select 0, {T80Res_xj200}] exec {\TZK_Objects\Scripts\KilledBurnEffect\LogicSwitch.sqs}";
		};
	};
	class KilledTankLogic_T80Res_Green_xj200 : Logic {
		class EventHandlers {
			Init = "[_this select 0, {T80Res_Green_xj200}] exec {\TZK_Objects\Scripts\KilledBurnEffect\LogicSwitch.sqs}";
		};
	};
	
	class KilledTankLogic_M113_xj200 : Logic {
		class EventHandlers {
			Init = "[_this select 0, {M113_xj200}] exec {\TZK_Objects\Scripts\KilledBurnEffect\LogicSwitch.sqs}";
		};
	};
	class KilledTankLogic_M113_AA_xj200 : Logic {
		class EventHandlers {
			Init = "[_this select 0, {M113_AA_xj200}] exec {\TZK_Objects\Scripts\KilledBurnEffect\LogicSwitch.sqs}";
		};
	};
	class KilledTankLogic_M113Ambul_xj200 : Logic {
		class EventHandlers {
			Init = "[_this select 0, {M113Ambul_xj200}] exec {\TZK_Objects\Scripts\KilledBurnEffect\LogicSwitch.sqs}";
		};
	};
	class KilledTankLogic_MHQW_xj200 : Logic {
		class EventHandlers {
			Init = "[_this select 0, {MHQW_xj200}] exec {\TZK_Objects\Scripts\KilledBurnEffect\LogicSwitch.sqs}";
		};
	};
	class KilledTankLogic_MCVW_xj200 : Logic {
		class EventHandlers {
			Init = "[_this select 0, {MCVW_xj200}] exec {\TZK_Objects\Scripts\KilledBurnEffect\LogicSwitch.sqs}";
		};
	};

	class KilledTankLogic_Vulcan_xj200 : Logic {
		class EventHandlers {
			Init = "[_this select 0, {Vulcan_xj200}] exec {\TZK_Objects\Scripts\KilledBurnEffect\LogicSwitch.sqs}";
		};
	};
	class KilledTankLogic_M2A2_AA_xj200 : Logic {
		class EventHandlers {
			Init = "[_this select 0, {M2A2_AA_xj200}] exec {\TZK_Objects\Scripts\KilledBurnEffect\LogicSwitch.sqs}";
		};
	};
	class KilledTankLogic_M2A2_AA_Town_xj200 : Logic {
		class EventHandlers {
			Init = "[_this select 0, {M2A2_AA_Town_xj200}] exec {\TZK_Objects\Scripts\KilledBurnEffect\LogicSwitch.sqs}";
		};
	};

	class KilledTankLogic_BMP_xj200 : Logic {
		class EventHandlers {
			Init = "[_this select 0, {BMP_xj200}] exec {\TZK_Objects\Scripts\KilledBurnEffect\LogicSwitch.sqs}";
		};
	};
	class KilledTankLogic_BMPAmbul_xj200 : Logic {
		class EventHandlers {
			Init = "[_this select 0, {BMPAmbul_xj200}] exec {\TZK_Objects\Scripts\KilledBurnEffect\LogicSwitch.sqs}";
		};
	};
	class KilledTankLogic_MHQE_xj200 : Logic {
		class EventHandlers {
			Init = "[_this select 0, {MHQE_xj200}] exec {\TZK_Objects\Scripts\KilledBurnEffect\LogicSwitch.sqs}";
		};
	};
	class KilledTankLogic_MCVE_xj200 : Logic {
		class EventHandlers {
			Init = "[_this select 0, {MCVE_xj200}] exec {\TZK_Objects\Scripts\KilledBurnEffect\LogicSwitch.sqs}";
		};
	};
	
	class KilledTankLogic_ZSU_xj200 : Logic {
		class EventHandlers {
			Init = "[_this select 0, {ZSU_xj200}] exec {\TZK_Objects\Scripts\KilledBurnEffect\LogicSwitch.sqs}";
		};
	};
	class KilledTankLogic_BMP2_AA_xj200 : Logic {
		class EventHandlers {
			Init = "[_this select 0, {BMP2_AA_xj200}] exec {\TZK_Objects\Scripts\KilledBurnEffect\LogicSwitch.sqs}";
		};
	};
	class KilledTankLogic_BMP2_AA_Town_xj200 : Logic {
		class EventHandlers {
			Init = "[_this select 0, {BMP2_AA_Town_xj200}] exec {\TZK_Objects\Scripts\KilledBurnEffect\LogicSwitch.sqs}";
		};
	};

	class ExplodeLogic_M109A6_Paladin_xj200 : Logic {
		class EventHandlers {
			Init = "[_this select 0, {M109A6_Paladin_xj200}] exec {Player\ExplodeEffect.sqs}";
		};
	};
	class ExplodeLogic_PLZ05_xj200 : Logic {
		class EventHandlers {
			Init = "[_this select 0, {PLZ05_xj200}] exec {Player\ExplodeEffect.sqs}";
		};
	};
	class ExplodeLogic_M46_xj200 : Logic {
		class EventHandlers {
			Init = "[_this select 0, {M46_xj200}] exec {Player\ExplodeEffect.sqs}";
		};
	};
	class ExplodeLogic_Nuclear_xj200 : Logic {
		class EventHandlers {
			Init = "[_this select 0, {Nuclear_xj200}] exec {Player\ExplodeEffect.sqs}";
		};
	};
	
//EOF