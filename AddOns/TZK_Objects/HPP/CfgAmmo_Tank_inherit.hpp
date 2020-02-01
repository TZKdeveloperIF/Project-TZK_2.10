//Ammos used mainly by tanks.

	class M1Sabot_xj200: Shell120 {
		hit=575; indirectHit=10; indirectHitRange=5;
		minRange=1; minRangeProbab=0.95;
		midRange=1000; midRangeProbab=0.95;
		maxRange=2500; maxRangeProbab=0.95;
		soundHit[]={"Explosions\expl4",100.000008,1};
	};
	class M1Heat_xj200: Heat120 {
		airLock=0;
		hit=350; indirectHit=150; indirectHitRange=8;
		minRange=5; minRangeProbab=0.95;
		midRange=1000; midRangeProbab=0.95;
		maxRange=2500; maxRangeProbab=0.95;
		soundHit[]={"Explosions\expl4",100.000008,1};
	};
	class T80Sabot_xj200: Shell120 {
		hit=575; indirectHit=10; indirectHitRange=5;
		minRange=1; minRangeProbab=0.95;
		midRange=1000; midRangeProbab=0.95;
		maxRange=2500; maxRangeProbab=0.95;
		soundHit[]={"Explosions\expl4",100.000008,1};
	};
	class T80Heat_xj200: Heat120 {
		airLock=0;
		hit=350; indirectHit=150; indirectHitRange=8;
		minRange=5; minRangeProbab=0.95;
		midRange=1000; midRangeProbab=0.95;
		maxRange=2500; maxRangeProbab=0.95;
		soundHit[]={"Explosions\expl4",100.000008,1};
	};

	class LeoSabot_xj200: Shell120 {
		hit=575; indirectHit=10; indirectHitRange=5;
		minRange=1; minRangeProbab=0.95;
		midRange=1000; midRangeProbab=0.95;
		maxRange=5000; maxRangeProbab=0.95;
		soundHit[]={"Explosions\expl4",100.000008,1};
		soundFly[]={"\bwmod_leo2a6\snd\fly.wss",25.00000,0.8};
		model="\BWMOD_Leo2A6\DM63";
	};
	class LeoHeat_xj200: Heat120 {
		airLock=0;
		hit=350; indirectHit=150; indirectHitRange=8;
		minRange=5; minRangeProbab=0.95;
		midRange=1000; midRangeProbab=0.95;
		maxRange=5000; maxRangeProbab=0.95;
		soundHit[]={"Explosions\explosion_large1.wss",15.000008,1};
		soundFly[]={"\bwmod_leo2a6\snd\fly.wss",25.00000,0.8};
		model="\BWMOD_Leo2A6\DM63";
	};
	class M12Sabot_xj200: M1Sabot_xj200 {
		soundHit[] = {"Explosions\explosion_large1",100.00001,1};
		soundFly[]={"\TZK_Objects\Sound\shellfly.wss",8.000000,1.0};
		soundHit2[]={"\TZK_Objects\Sound\Shellground.wss",10.000000,1};
		hitGround[]={soundHit2,1};
		soundHit3[]={"\TZK_Objects\Sound\Shellground.wss",10.000000,1};
		hitBuilding[]={soundHit3,1};
	};
	class M12Heat_xj200: M1Heat_xj200 {
		soundHit[] = {"Explosions\explosion_large1",100.00001,1};
		soundFly[]={"\TZK_Objects\Sound\shellfly.wss",8.000000,1.0};
		soundHit2[]={"\TZK_Objects\Sound\Shellground.wss",10.000000,1};
		soundHit3[]={"\TZK_Objects\Sound\Shellground.wss",10.000000,1};
		soundHit4[]={"\TZK_Objects\Sound\Heat-Hit.wss",10.000000,1};
		hitArmor[]={soundHit4,1};
		soundHit5[]={"\TZK_Objects\Sound\Explosion4.wss",10.000000,1};
		hitGround[]={soundHit5,1};
		soundHit6[]={"\TZK_Objects\Sound\Explosion3.wss",10.000000,1};
		hitBuilding[]={soundHit6,1};
	};

	class PLASabot_xj200: Shell120 {
		hit=575; indirectHit=10; indirectHitRange=5;
		minRange=1; minRangeProbab=0.95;
		midRange=1000; midRangeProbab=0.95;
		maxRange=2500; maxRangeProbab=0.95;
		soundHit[]={\VME_tex\sound\e.wav,100,1};
		soundHitArmor1[]={\VME_tex\sound\e2.wav,100,1}; 
		soundHitArmor2[]={\VME_tex\sound\e3.wav,100,1};
		soundHitArmor3[]={\VME_tex\sound\e4.wav,100,1};
		hitGround[]={"soundHit",1};
		hitArmor[]={"soundHitArmor1",0.35,"soundHitArmor2",0.35,"soundHitArmor3",0.3};
		soundFly[]={"\VME_tex\sound\s.ogg",1,0};
	};
	class PLAHeat_xj200: Heat120 {
		airLock=0;
		hit=350; indirectHit=150; indirectHitRange=8;
		minRange=5; minRangeProbab=0.95;
		midRange=1000; midRangeProbab=0.95;
		maxRange=2500; maxRangeProbab=0.95;
		soundHit[]={"Explosions\expl4",100.000008,1};
		soundHitArmor1[]={"\VME_tex\sound\sabot1.wav",100,1};
		soundHitArmor2[]={"\VME_tex\sound\sabot2.wav",100,1};
		hitArmor[]={"soundHitArmor1",0.5,"soundHitArmor2",0.5};
		soundFly[]={"\VME_tex\sound\s.ogg",1,0};
	};

	class 9M112_xj200: AA {
		hit=250;
		indirectHit=10;
		indirectHitRange=2.500000;
		minRange=100;
		minRangeProbab=0.500000;
		midRange=400;
		midRangeProbab=0.950000;
		maxRange=5000;
		maxRangeProbab=0.500000;
		model="AT1";
		simulation="shotmissile";
 		simulationStep=0.050000;
		cost=5000;
		soundFly[]={"\ICP_t72s\sound\missilefly.ogg",2,0.7};
		soundHit[]={"\ICP_t72s\sound\explosion.wav",31.622778,1};
		soundEngine[] = {"\ICP_t72s\sound\noise.wss",0.001000,1};
		maxSpeed=300;
		airLock = true;
		irLock = true;
		laserlock=1;
		manualControl=1;
		maxControlRange=2500;
		initTime=0.150000;
		thrustTime=10.00000;
		thrust=600;
		maneuvrability=5.00000;
	};
	class 9M120_xj200: AA {
		hit=500;
		indirectHit=70;
		indirectHitRange=2.500000;
		minRange=100;
		minRangeProbab=0.500000;
		midRange=400;
		midRangeProbab=0.950000;
		maxRange=5000;
		maxRangeProbab=0.500000;
		model="AT1";
		simulation="shotmissile";
 		simulationStep=0.050000;
		cost=5000;
		soundFly[]={"\ICP_t72s\sound\missilefly.ogg",2,0.7};
		soundHit[]={"\ICP_t72s\sound\explosion.wav",31.622778,1};
		soundEngine[] = {"\ICP_t72s\sound\noise.wss",0.001000,1};
		maxSpeed=350;
		irLock=1;
		airlock=0;
		laserlock=1;
		manualControl=1;
		maxControlRange=2500;
		initTime=0.150000;
		thrustTime=15.00000;
		thrust=700;
		maneuvrability=10.00000;
	};
	class PLA_ATGM125_xj200: AT3 {
		hit=1400;indirectHit=1200;indirectHitRange=2.0;
		minRange=1000;
		minRangeProbab=0.500000;
		midRange=2000;
		midRangeProbab=0.950000;
		maxRange=5000;
		maxRangeProbab=0.750000;
		maxSpeed=500;
		laserlock=true;
		soundHit[]={"\VME_tex\sound\AA2.wav",100,1};
		soundHitArmor1[]={"\VME_tex\sound\AA.wav",100,1};
		soundHitArmor2[]={"\VME_tex\sound\AA3.wav",100,1};
		soundHitArmor3[]={"\VME_tex\sound\AA4.wav",100,1};
		hitGround[]={"soundHit",1,};
		hitArmor[]={"soundHitArmor1",0.35,"soundHitArmor2",0.35,"soundHitArmor3",0.3};
		soundFly[]={"\VME_tex\sound\towfly.ogg",10,1};
		maxControlRange=2500;
		initTime=0.150000;
		thrustTime=15.00000;
		thrust=700;
		maneuvrability=10.00000;
	};

	class CoaxW_xj200: Bullet7_6 {
		hit = 6; cost = 5;
		tracerColor[]={1,0.25000,0.12500,0.5};
		minRange=1; minRangeProbab=1;
		midRange=800; midRangeProbab=0.5;
		maxRange=1600; maxRangeProbab=0.1;
	};
	class 50calW_xj200: Bullet12_7 {
		airLock = 1; hit = 19; cost = 10;
		tracerColor[]={1,0.25000,0.12500,1};
		minRange=1; minRangeProbab=1;
		midRange=1000; midRangeProbab=0.5;
		maxRange=2000; maxRangeProbab=0.1;
	};
	class CoaxE_xj200: Bullet7_6 {
		hit = 6; cost = 5;
		tracerColor[]={0.12500,0.25000,1,0.5};
		minRange=1; minRangeProbab=1;
		midRange=800; midRangeProbab=0.5;
		maxRange=1600; maxRangeProbab=0.1;
	};
	class 50calE_xj200: Bullet12_7 {
		airLock = 1; hit = 19; cost = 10;
		tracerColor[]={0.12500,0.25000,1,1};
		minRange=1; minRangeProbab=1;
		midRange=1000; midRangeProbab=0.5;
		maxRange=2000; maxRangeProbab=0.1;
	};

	//M109 Paladin from CoC_Arty, 2S19 from CoC_HWK2S19 and 2S25 Sprut-SD from mfm_cit_sprut
	class DKMM_HEAT155_xj200: Heat125 {
		airLock=0;
		hit=950;
		indirectHit=490;
		indirectHitRange=20;
		tracerColor[]={1,0.25000,0.12500,1};
		soundFly[]={"\CoC_Arty\M109\shellfly.wss",.05,1};
		soundHit[]={"\CoC_Arty\M109\impact.wss",db+40,1};
		explosive=1;
		minRange=50;
		minRangeProbab=1;
		midRange=2000;
		midRangeProbab=0.9;
		maxRange=4000;
		maxrangeprobab=0.75;
		irlock=True;
		laserlock=True;
		radarlock=True;
		sideAirFriction=100;
			visibleFire=32; // how much is visible when this weapon is fired
			audibleFire=32;
			visibleFireTime=6;
		cost=500;
		recoil={1.00,3.5,1.0};
	};
	class DKMM_AP155_xj200: DKMM_HEAT155_xj200 {
		hit=1500; indirectHit=200; indirectHitRange=5;
		minRange=30;
		minRangeProbab=0.5;
	};
	class Sprut_3BM42_xj200: Heat125 {
		hit=1300;
		indirectHit=30;
		indirectHitRange=5;
		cost=200;
		minRange=1;
		minRangeProbab=0.5;
		midRange=1500;
		midRangeProbab=1;
		maxRange=2500;
		maxRangeProbab=1;
		soundFly[]={"\mfm_cit_sprut\s\125fly.ogg",1,3};
	};
	class Sprut_3OF26_xj200: Shell125 {
		hit=650;
		indirectHit=300;
		indirectHitRange=15;
		cost=200;
		minRange=50;
		minRangeProbab=0.5;
		midRange=1500;
		midRangeProbab=1;
		maxRange=2500;
		maxRangeProbab=1;
	};

//EOF