class CfgVehicleActions {
	ah64pilot="ah64pilot";
	ah64gunner="ah64gunner";
	
	CWKZodiacDriverA_xj200 = "CWKZodiacDriverA_xj200";
	
	BWMODLeo2A6drv = "BWMODLeo2A6drv";
	BWMODLeo2A6drvout = "BWMODLeo2A6drvout";
	BWMODLeo2A6gun = "BWMODLeo2A6gun";
	BWMODLeo2A6cmd = "BWMODLeo2A6cmd";
	BWMODLeo2A6cmdout = "BWMODLeo2A6cmdout";
	
	m1a1gunnerout = "m1a1commanderout";
	m1a2commanderout = "m113gunner";
	
	BWMOD_TigerPilot= "BWMOD_Tigerpilot";
	BWMOD_TigerGunner= "BWMOD_TigerGunner";
	
	DKMM_M46_gunner = "Crouch";
};
class CfgMovesMC {
	class Default {};
	class DefaultDie: Default {};
	class States {
		class Driver: Default {};
		class Gunner: Default {};
		class Cargo: Default {};
		class Commander: Default {};
		
		class ah64Pilot: Driver {
			file="\apac\ah64pilotstat.rtm";
			speed=10000000000.000000;
			looped=1
			variantsAI[]={"ah64PilotV1",0.700000,"ah64Pilot"};
			interpolateWith[]={"ah64PilotV1",0.500000};
			equivalentTo="ah64Pilot";
			interpolationSpeed=1
			connectTo[]={"ah64PilotDying",1};
		};
		class ah64PilotV1: ah64Pilot {
			file="\apac\ah64pilot.rtm";
			speed="- 4";
			looped=1
		};
		class ah64PilotDying: DefaultDie {
			actions="NoActions";
			file="\apac\ah64pilotsmrt.rtm";
			speed="- 1";
			looped=0
			soundEnabled=0
			connectFrom[]={"ah64Pilot",1};
		};
		class ah64PilotDead: ah64PilotDying {
			actions="DeadActions";
			file="\apac\ah64pilotsmrt2.rtm";
			speed=10000000000.000000;
			terminal=1
			connectFrom[]={"ah64PilotDying",1};
			connectTo[]={"DeadState",1};
		};
		class ah64Gunner: Driver {
			file="\apac\ah64gunnerstat.rtm";
			speed=10000000000.000000;
			looped=1
			variantsAI[]={"ah64GunnerV1",0.700000,"ah64Gunner"};
			interpolateWith[]={"ah64GunnerV1",0.500000};
			equivalentTo="ah64Gunner";
			interpolationSpeed=1
			connectTo[]={"ah64GunnerDying",1};
		};
		class ah64GunnerV1: ah64Gunner {
			file="\apac\ah64gunner.rtm";
			speed="- 4";
			looped=1
		};
		class ah64GunnerDying: DefaultDie {
			actions="NoActions";
			file="\apac\ah64gunnersmrt.rtm";
			speed="- 1";
			looped=0
			soundEnabled=0
			connectFrom[]={"ah64Gunner",1};
		};
		class ah64GunnerDead: ah64GunnerDying {
			actions="DeadActions";
			file="\apac\ah64gunnersmrt2.rtm";
			speed=10000000000.000000;
			terminal=1
			connectFrom[]={"ah64GunnerDying",1};
			connectTo[]={"DeadState",1};
		};

		class pbrdriver: Driver{};
		// zodiac driver **************************
		class CWKZodiacDriverA_xj200: pbrdriver {
			file="\cwkzodiac\rtm\cwkZodiacDriver.rtm";
			speed=10000000000.000000;
			looped=1;
			variantsAI[]={"cwkzodiacdriverAV1_xj200",0.700000,"cwkzodiacdriverA_xj200"};
			interpolateWith[]={"cwkzodiacdriverAV1_xj200",0.500000};
			equivalentTo="CWKZodiacDriverA_xj200";
			interpolationSpeed=1;
			connectTo[]={"cwkzodiacdriverDyingA_xj200",1};
		};
		class cwkzodiacdriverAV1_xj200: cwkzodiacdriverA_xj200 {
			file="\cwkzodiac\rtm\cwkZodiacDriver.rtm";
			speed=-4;
			looped=1;
		};
		class cwkzodiacdriverDyingA_xj200: DefaultDie {
			actions="NoActions";
			file="\cwkzodiac\rtm\cwkZodiacDriver.rtm";
			speed=-1;
			looped=0;
			soundEnabled=0;
			connectFrom[]={"cwkzodiacdriverA_xj200",1};
		};
	

		class BWMODLeo2A6drv: Driver {
			file="\BWMOD_Leo2A6\anim\BWMODLeo2A6drv.rtm";
			speed=-1.000000;
			looped=1;
			connectTo[]={"BWMODLeo2A6drvsmrt.rtm",1};
			interpolateTo[]={"BWMODLeo2A6drvsmrt",0.100000};
		};
		class BWMODLeo2A6drvsmrt: DefaultDie {
			actions="NoActions";
			file="\BWMOD_Leo2A6\anim\BWMODLeo2A6drvsmrt.rtm";
			speed=-0.5;
			looped=0;
			soundEnabled=0;
			connectFrom[]={"BWMODLeo2A6drv",1};
		};
		class BWMODLeo2A6drvsmrt2: BWMODLeo2A6drvsmrt {
			actions="DeadActions";
			file="\BWMOD_Leo2A6\anim\BWMODLeo2A6drvsmrt2.rtm";
			speed=10000000000.000000;
			terminal=1;
			connectFrom[]={"BWMODLeo2A6drvsmrt",1};
			connectTo[]={"DeadState",1};
		};
		class BWMODLeo2A6drvout: Driver {
			file="\BWMOD_Leo2A6\anim\BWMODLeo2A6drvout.rtm";
			speed=-1.000000;
			looped=1;
			connectTo[]={"BWMODLeo2A6drvoutsmrt.rtm",1};
			interpolateTo[]={"BWMODLeo2A6drvoutsmrt",0.100000};
		};
		class BWMODLeo2A6drvoutsmrt: DefaultDie {
			actions="NoActions";
			file="\BWMOD_Leo2A6\anim\BWMODLeo2A6drvoutsmrt.rtm";
			speed=-0.5;
			looped=0;
			soundEnabled=0;
			connectFrom[]={"BWMODLeo2A6drvout",1};
		};
		class BWMODLeo2A6drvoutsmrt2: BWMODLeo2A6drvoutsmrt {
			actions="DeadActions";
			file="\BWMOD_Leo2A6\anim\BWMODLeo2A6drvoutsmrt2.rtm";
			speed=10000000000.000000;
			terminal=1;
			connectFrom[]={"BWMODLeo2A6drvoutsmrt",1};
			connectTo[]={"DeadState",1};
		};
		class BWMODLeo2A6gun: Cargo {
			file="\BWMOD_Leo2A6\anim\BWMODLeo2A6gun.rtm";
			speed=-1.000000;
			looped=1;
			connectTo[]={"BWMODLeo2A6gunsmrt.rtm",1};
			interpolateTo[]={"BWMODLeo2A6gunsmrt",0.100000};
		};
		class BWMODLeo2A6gunsmrt: DefaultDie {
			actions="NoActions";
			file="\BWMOD_Leo2A6\anim\BWMODLeo2A6gunsmrt.rtm";
			speed=-0.5;
			looped=0;
			soundEnabled=0;
			connectFrom[]={"BWMODLeo2A6gun",1};
		};
		class BWMODLeo2A6gunsmrt2: BWMODLeo2A6gunsmrt {
			actions="DeadActions";
			file="\BWMOD_Leo2A6\anim\BWMODLeo2A6gunsmrt2.rtm";
			speed=10000000000.000000;
			terminal=1;
			connectFrom[]={"BWMODLeo2A6gunsmrt",1};
			connectTo[]={"DeadState",1};
		};
		class BWMODLeo2A6cmd: Commander {
			file="\BWMOD_Leo2A6\anim\BWMODLeo2A6cmd.rtm";
			speed=-1.000000;
			looped=1;
			connectTo[]={"BWMODLeo2A6cmdsmrt.rtm",1};
			interpolateTo[]={"BWMODLeo2A6cmdsmrt",0.100000};
		};
		class BWMODLeo2A6cmdsmrt: DefaultDie {
			actions="NoActions";
			file="\BWMOD_Leo2A6\anim\BWMODLeo2A6cmdsmrt.rtm";
			speed=-0.5;
			looped=0;
			soundEnabled=0;
			connectFrom[]={"BWMODLeo2A6cmd",1};
		};
		class BWMODLeo2A6cmdsmrt2: BWMODLeo2A6cmdsmrt {
			actions="DeadActions";
			file="\BWMOD_Leo2A6\anim\BWMODLeo2A6cmdsmrt2.rtm";
			speed=10000000000.000000;
			terminal=1;
			connectFrom[]={"BWMODLeo2A6cmdsmrt",1};
			connectTo[]={"DeadState",1};
		};
		class BWMODLeo2A6cmdout: Commander {
			file="\BWMOD_Leo2A6\anim\BWMODLeo2A6cmdout.rtm";
			speed=-1.000000;
			looped=1;
			connectTo[]={"BWMODLeo2A6cmdoutsmrt.rtm",1};
			interpolateTo[]={"BWMODLeo2A6cmdoutsmrt",0.100000};
		};
		class BWMODLeo2A6cmdoutsmrt: DefaultDie {
			actions="NoActions";
			file="\BWMOD_Leo2A6\anim\BWMODLeo2A6cmdoutsmrt.rtm";
			speed=-0.5;
			looped=0;
			soundEnabled=0;
			connectFrom[]={"BWMODLeo2A6cmdout",1};
		};
		class BWMODLeo2A6cmdoutsmrt2: BWMODLeo2A6cmdoutsmrt {
			actions="DeadActions";
			file="\BWMOD_Leo2A6\anim\BWMODLeo2A6cmdoutsmrt2.rtm";
			speed=10000000000.000000;
			terminal=1;
			connectFrom[]={"BWMODLeo2A6cmdoutsmrt",1};
			connectTo[]={"DeadState",1};
		};	

		class BWMOD_TigerPilot: Driver {
			file="\BWMOD_Tiger\anim\BWMOD_TigerPilot.rtm";
			speed=-1.000000;
			looped=1;
			connectTo[]={"BWMOD_TigerPilotsmrt",1};
			interpolateTo[]={"BWMOD_TigerPilotsmrt",0.100000};
		};	
		class BWMOD_TigerGunner: Gunner {
			file="\BWMOD_Tiger\anim\BWMOD_Tigergun.rtm";
			speed=-1.000000;
			looped=1;
			connectTo[]={"BWMOD_TigerGunnnersmrt",1};
			interpolateTo[]={"BWMOD_TigerGunnersmrt",0.100000};
		};

	};
};


//EOF