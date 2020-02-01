// Cannon

	class Bullet4x23_xj200: Bullet4x23 {
		hit=40
		indirectHit=20
		indirectHitRange=2
		minRange=20
		minRangeProbab=0.800000;
		midRange=500
		midRangeProbab=0.950000;
		maxRange=3000
		maxRangeProbab=0.050000;
		cost=30
		tracerColor[]={0.200000,0.800000,0.100000,0.250000};
		tracerColorR[]={0.200000,0.800000,0.100000,0.250000};
	};
	class Bullet4x20_xj200: Bullet4x20 {
		access=2
		hit=90
		indirectHit=45
		indirectHitRange=2
		minRange=20
		minRangeProbab=0.800000;
		midRange=500
		midRangeProbab=0.950000;
		maxRange=3000
		maxRangeProbab=0.050000;
		cost=30
		tracerColor[]={0.800000,0.500000,0.100000,0.250000};
		tracerColorR[]={0.800000,0.500000,0.100000,0.250000};
	};

	class Cannon25HE_xj200: ExplosiveBullet {
		hit=30
		indirectHit=15
		indirectHitRange=3
		minRange=20
		minRangeProbab=0.800000;
		midRange=500
		midRangeProbab=0.950000;
		maxRange=3000
		maxRangeProbab=0.050000;
		cost=200;
		soundHit[] = {"\m2a2\double_expl.wss",31.6228,1};
	};
	class Cannon30HE_BMP2_xj200: ExplosiveBullet {
		hit=20
		indirectHit=15
		indirectHitRange=3
		minRange=20
		minRangeProbab=0.800000;
		midRange=500
		midRangeProbab=0.950000;
		maxRange=3000
		maxRangeProbab=0.050000;
		soundHit[] = {"\bmp2\bmp2_expl.wss",31.6228,1};
		cost=40;
	};
	class Cannon30AP_BMP2_xj200: BulletSingle {
		hit=70
		indirectHit=5
		indirectHitRange=1
		minRange=20
		minRangeProbab=0.800000;
		midRange=500
		midRangeProbab=0.950000;
		maxRange=3000
		maxRangeProbab=0.050000;
		soundHit[] = {"weapons\Big_Impact2",0.0316228,1};
		cost=80;
	};

	class Cannon30HE_Kamov_xj200: ExplosiveBullet {
		hit=20
		indirectHit=10
		indirectHitRange=3
		minRange=20
		minRangeProbab=0.800000;
		midRange=500
		midRangeProbab=0.950000;
		maxRange=3000
		maxRangeProbab=0.050000;
		soundHit[]={"\o\vehl\v80_expl.wss",31.622778,1};
		cost=40
	};
	class Cannon30AP_Kamov_xj200: BulletSingle {
		hit=90
		indirectHit=5
		indirectHitRange=1
		minRange=20
		minRangeProbab=0.800000;
		midRange=500
		midRangeProbab=0.950000;
		maxRange=3000
		maxRangeProbab=0.050000;
		soundHit[]={"weapons\Big_Impact2",0.031623,1};
		cost=80
	};

	class Cannon_Heli_xj200: Bullet4x20_xj200 {
		hit=30; indirectHit=15; indirectHitRange=2;
		minRange=20; minRangeProbab=0.800000;
		midRange=500;midRangeProbab=0.950000;
		maxRange=3000; maxRangeProbab=0.050000;
		cost=10;
		tracerColor[]={0.7,0.7,0.5,0.25};tracerColorR[]={0.7,0.7,0.5,0.25};
	};
	class Cannon_Heli_Rocket_xj200: Cannon_Heli_xj200 {
		simulation = "shotRocket";
		simulationStep = 0.05;
	};

	class Cannon_20HE_xj200: Cannon30HE_Kamov_xj200 {
		//Being defined in CR09
		hit=20; indirectHit=10; indirectHitRange=3
		cost = 10;
		airLock = true;
		minRange=20; minRangeProbab=0.800000;
		midRange=500;midRangeProbab=0.950000;
		maxRange=3000; maxRangeProbab=0.050000;
	};
	class Cannon_20AP_xj200: Cannon30AP_Kamov_xj200 {
		hit=60; indirectHit=6; indirectHitRange=0.5;
		cost = 200;
		airLock = false;
		minRange=20; minRangeProbab=0.800000;
		midRange=500;midRangeProbab=0.950000;
		maxRange=3000; maxRangeProbab=0.050000;

		soundFly[]={objects\bulletnoise,db10,0.7};
		soundHit1[]={weapons\bulletricochet1,db-20,1};
		soundHit2[]={weapons\bulletricochet2,db-20,1};
		soundHit3[]={weapons\bulletricochet3,db-20,1};
		soundHitMan1[]={weapons\bullethitman1,db-28,1};
		soundHitMan2[]={weapons\bullethitman2,db-28,1};
		soundHitArmor1[]={weapons\small_impact1,db10,1};
		soundHitArmor2[]={weapons\Big_Impact2,db10,1};
		soundHitBuilding1[]={weapons\bulletricochet4,db-10,1};
		soundHitBuilding2[]={weapons\bulletricochet5,db-10,1};
	};
	class Cannon_30APHE_xj200: Cannon_20HE_xj200 {
		hit=200; indirectHit=20; indirectHitRange=2;
	};

	class BMKHE20_DVD_xj200: ExplosiveBullet {
		hit=20;
		indirectHit=15;
		indirectHitRange=5;
		minRange=5;
		minRangeProbab=0.2;
		midRange=200;
		midRangeProbab=0.5;
		maxRange=1000;
		maxRangeProbab=0.05;
		soundHit4[]={"\TZK_Objects\Sound\DVD_Config\30mmmetal.wss",0.50,1};
		hitArmor[]={soundHit4,1};
		
		soundHit1[]={"\TZK_Objects\Sound\DVD_Config\grenade1.wss",0.80,1};
		soundHit2[]={"\TZK_Objects\Sound\DVD_Config\grenade2.wss",0.80,1};
		soundHit3[]={"\TZK_Objects\Sound\DVD_Config\grenade3.wss",0.80,1};
		soundHit5[]={"Explosions\expl4",8.0,1};
		hitGround[]={"soundHit1",0.25,"soundHit2",0.25,"soundHit3",0.25,"soundHit5",0.25};
		
		soundHit6[]={"\TZK_Objects\Sound\DVD_Config\30mmbuild.wss",0.20,1};
		hitBuilding[]={soundHit6,1};
		
		cost=12
	};
	class Mi24HEammo_DVD_xj200: BMKHE20_DVD_xj200 {
	//	hit=30; indirectHit=20; indirectHitRange=3; // Original Power defined in DVD
		hit=25; indirectHit=15; indirectHitRange=3; // Keep same with common HE
		minRange=1;
		minRangeProbab=1.0000;
		midRange=500;
		midRangeProbab=0.7500;
		maxRange=1000;
		maxRangeProbab=0.5000;
	};
	class BMKAP30_DVD_xj200:Bullet30 {
	//	hit=80; indirectHit=10; indirectHitRange=0.5; // Original Power defined in DVD
		hit=80; indirectHit=10; indirectHitRange=0.5;
		minRange=5;
		minRangeProbab=0.2;
		midRange=200;
		midRangeProbab=0.5;
		maxRange=1000;
		maxRangeProbab=0.05;
		explosive=0;
		soundHit4[]={"\TZK_Objects\Sound\DVD_Config\30mmmetal.wss",0.50,1};
		hitArmor[]={soundHit4,1};
		
		soundHit5[]={"\TZK_Objects\Sound\DVD_Config\30mmAPground.wss",0.10,1};
		hitGround[]={soundHit5,1};
		
		soundHit6[]={"\TZK_Objects\Sound\DVD_Config\30mmbuild.wss",0.20,1};
		hitBuilding[]={soundHit6,1};
			
		cost=15
	};
 	
	
	class Bullet30PlaneLGB_xj200 : Bullet30A10 {
		irLock = 0;
		laserLock = 1;
	};

//EOF