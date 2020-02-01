	// Original Gunships' Missile
	class Hellfire_xj200: Hellfire {
		hit = 1050;
	};
	class HellfireCobra_xj200: Hellfire_xj200 {
		proxyShape="\Vit_AH-1W\Hellfire\Hellfirecobra_proxy";
	};
	class HellfireApach_xj200: Hellfire_xj200 {
		model = "\Apac\hellfire";
	};
	class AT6_xj200: AT6 {
		hit = 800;
		laserLock = 1;
	};
	// Rocket
	class Zuni_MaverickLike_xj200 : Zuni {
		simulation = "shotMissile";
		simulationStep = 0.05;
		maxControlRange = 100;
	};
	class SNEB70_xj200 : Zuni {
		model="\BWMOD_Tiger\wp\rocket_sneb70.p3d";
	};
	
	// Vehicle AA Missile
	class Stinger_xj200: AA {
		hit=80; indirectHit=40; indirectHitRange=5;
		minRange=20;minRangeProbab=0.9;
		midRange=1000;midRangeProbab=0.9;
		maxRange=3000;maxRangeProbab=0.9;
		airLock = 1; irlock = 0;
		cost=1000;
		maxControlRange = 3000
		initTime = 0
		maxSpeed = 800
		thrustTime = 3.0
		thrust = 1000
		maneuvrability = 5.0
		soundFly[]={objects\noise,db-20,1};
		soundEngine[]={objects\noise,db-10,1};
		visibleFire=32; audibleFire=32; visibleFireTime=4
	};
	class Strela_xj200: Stinger_xj200 {};
	class RedTop_26_xj200 : AA {
		model=\rkthunter\wep\hunt_redtop_Mesh;
		proxyshape=\rkthunter\wep\hunt_redtop_Mesh;
		hit=170;indirectHit=100;indirectHitRange=10;
		minRange=50; minRangeProbab=0.7;
		midRange=2000; midRangeProbab=0.95;
		maxRange=2600; maxRangeProbab=0.6;
		maneuvrability=50;
		airLock = 1; irlock = 0;
		initTime=0.4;
		thrustTime=500;
		maxControlRange=2600;
		thrust=600;
		maxSpeed=900;
	};
	class RedTop_30_xj200 : RedTop_26_xj200 {
		maxRange=3000;
		maxControlRange=3000;
	};
	class RedTop_40_xj200 : RedTop_26_xj200 {
		maxRange=4000;
		maxControlRange=4000;
	};
	// Guided AT
	class GuidedAT_APC_xj200: AT3 {
		hit=780; indirectHit=300; indirectHitRange=2;
		minRange=50;minRangeProbab=0.9;
		midRange=1000;midRangeProbab=0.9;
		maxRange=1500;maxRangeProbab=0.6;
		cost = 1000
		manualControl = false
		maxControlRange = 1000
		maxSpeed = 300
		thrustTime = 3.0
		thrust = 300
		maneuvrability = 3.0
		soundFly[]={objects\noise,db0,db-30,1};
		soundEngine[]={objects\noise,db-20,1};

		visibleFire=32; audibleFire=32; visibleFireTime=4
	};
	class GuidedAT_Heli_xj200: GuidedAT_APC_xj200 {
		hit=1275; indirectHit=600; indirectHitRange=2;
		minRange=100;minRangeProbab=0.9;
		maneuvrability=5.0;
	};
	class GuidedAT_Cobra_xj200: GuidedAT_Heli_xj200 {
		proxyShape="\Vit_AH-1W\Hellfire\Hellfirecobra_proxy";
	};

	class HOT3Rocket_xj200: Hellfire_xj200 {
		minRange=50;
		minRangeProbab=0.50;
		midRange=2500;
		midRangeProbab=0.95;
		maxRange=5000;
		maxRangeProbab=0.50;
		maxSpeed=350;
		cost=20000;
		irLock=1;
		laserLock=1;
		manualControl=1;
		maxControlRange=4000;
		maneuvrability=8.0;
		thrustTime=20.0;
		thrust=500;
		model="\BWMOD_Tiger\wp\rocket_hot3.p3d";
	};
	class PARS3Rocket_xj200: GuidedAT_Heli_xj200 {
		irLock=1;
		laserLock=1;
		manualControl=1;
		maneuvrability=8.0;
		thrustTime=20.0;
		thrust=500;
		model="\BWMOD_Tiger\wp\rocket_pars3.p3d";
	};
	
	class tomahawk_xj200: Maverick {
		hit=5000;
		indirectHit=5000;
		indirectHitRange=35;
		maxSpeed=50
		initTime=0.2;
		thrustTime=10;
		thrust=350
		maneuvrability=30.0;
		laserLock = 1;
		soundHit[]={"\TZK_Objects\Sound\nuke.wss",db+200,1};
		model="\TZK_Objects\Model\Tomahawk_gdtcti_xj200.p3d";
		proxyShape="\TZK_Objects\Model\Tomahawk_gdtcti_xj200.p3d";
	};
	class Scud_Cluster_xj200 : Grenade {
		hit=5000; indirectHit=5000; indirectHitRange=35;
		soundHit[]={"",1,1};
	};
	
	// Bomb
	class LaserGuidedBomb_xj200: Default {
		hit = 5000; indirectHit = 3500; indirectHitRange = 15;
		minRange = 50; minRangeProbab = 0.5;
		midRange = 300; midRangeProbab = 0.95;
		maxRange = 1500; maxRangeProbab = 0.5;
		soundHit[] = {"\LaserGuided\expl2",100,1};
		cost = 20000;
		model = Snake;
		proxyShape = Snake;
		irLock = 0;
		laserLock = 1;
		maxControlRange = 100000;
		maneuvrability = 16;
		sideAirFriction = 0.1;
		simulation = shotMissile;
		maxSpeed = 100;
		initTime = 0;
		thrustTime = 0;
		thrust = 0;
	};
	class RKTHunter_Bomb_xj200 : LaserGuidedBomb_xj200 {
		hit=1500; indirectHit=450; indirectHitRange=15;
		minRange=500; minRangeProbab=0.9;
		midRange=800; midRangeProbab=0.95;
		maxRange=1500; maxRangeProbab=0.9;
		model=\rkthunter\wep\hunt_bomb_mesh;
		proxyshape=\rkthunter\wep\hunt_bomb_mesh;
		sideAirFriction = 0.25;
		irLock = true;
		laserLock =false;
		maneuvrability=50.0;
		cost =2000;
	};

//EOF