//Ammos used mainly by soldiers.
	
	// Res, O.pbo, @xrofp
	class EUDEF_MP5SD6_MAGx_xj200: BulletSingle {
		hit=12;indirectHit=0.1;indirectHitRange=0.1;
	};
	class JahSDSingleW_xj200: BulletSilencedSingleW {
		hit=8; indirectHit=1; indirectHitRange=0.100000;
		minRange=1; minRangeProbab=0.100000;
		midRange=200; midRangeProbab=0.800000;
		maxRange=900; maxRangeProbab=0.050000;
		visibleFire=0.7500;
		audibleFire=0.7500;
		visibleFireTime=2
		tracerColor[]={0,0,0,0.005000};
		tracerColorR[]={0,0,0,0.005000};
	};
	class JahSDBurstW_xj200: BulletSilencedBurstW {
		hit=8; indirectHit=1; indirectHitRange=0.100000;
		minRange=1; minRangeProbab=0.100000;
		midRange=200; midRangeProbab=0.800000;
		maxRange=900; maxRangeProbab=0.050000;
		visibleFire=1.0000;
		audibleFire=1.0000;
		visibleFireTime=3
		tracerColor[]={0,0,0,0.005000};
		tracerColorR[]={0,0,0,0.005000};
	};
	class KEGAK107Bullet_xj200 : BulletSingleE {
		hit=9;
		indirectHit=1;
		indirectHitRange=0.100000;
	};
	class KSVK_xj200: BulletSingle {
		hit=90; indirectHit=6; indirectHitRange=0.100000;
		explosive=0;
		cost=40;
		maxSpeed=870;
		minRange=1; minRangeProbab=0.300000;
		midRange=750; midRangeProbab=0.600000;
		maxRange=2000; maxRangeProbab=0.90000;
		visibleFire=300; audibleFire=2000; visibleFireTime=2;
	};
	class SP6_xj200: BulletSilencedSingle {
		hit=11;
		model="shell";
		simulation="shotBullet";
		simulationStep=0.050000;
		soundFly[]={"objects\bulletnoise",0.251189,0.700000};
		explosive=0;
		minRange=1; minRangeProbab=0.100000;
		midRange=200; midRangeProbab=0.800000;
		maxRange=900; maxRangeProbab=0.050000;
		visibleFire=0.035000;
		audibleFire=0.035000;
		visibleFireTime=0;
		tracerColor[]={0,0,0,0.000000};
		tracerColorR[]={0,0,0,0.000000};
		soundHit1[]={"weapons\bulletricochet1",0.031623,1};
		soundHit2[]={"weapons\bulletricochet2",0.031623,1};
		soundHit3[]={"weapons\bulletricochet3",0.031623,1};
		soundHitMan1[]={"weapons\bullethitman1",0.012589,1};
		soundHitMan2[]={"weapons\bullethitman2",0.012589,1};
		soundHitArmor1[]={"weapons\small_impact1",0.031623,1};
		soundHitArmor2[]={"weapons\Big_Impact2",0.031623,1};
		soundHitBuilding1[]={"weapons\bulletricochet4",0.031623,1};
		soundHitBuilding2[]={"weapons\bulletricochet5",0.031623,1};
		hitGround[]={"soundHit1",0.330000,"soundHit2",0.330000,"soundHit3",0.330000};
		hitMan[]={"soundHitMan1",0.500000,"soundHitMan2",0.500000};
		hitArmor[]={"soundHitArmor1",0.700000,"soundHitArmor2",0.300000};
		hitBuilding[]={"soundHitBuilding1",0.500000,"soundHitBuilding2",0.500000};
		cartridge="FxCartridge";
		cost=0.700000;
//		initSpeed=520;
	};
	class Groza1SDammo_xj200: BulletSingleG {
		indirectHitRange=0.10000;
		visibleFire=0.0300;
		audibleFire=0.0300;
		visibleFireTime=2;
	};
	class Bizon_Bullet_xj200: BulletSilencedSingle {
		hit = 7;
		indirectHit = 1;
		indirectHitRange = 0.1;
	};
	class G36a_Bullet_xj200: BulletSingle {
		hit = 11;
		indirectHit = 1;
		indirectHitRange = 0.1;
	};
	class Steyr_Bullet_xj200: BulletSingle {
		hit = 10;
		indirectHit = 1;
		indirectHitRange = 0.1;
	};

	// LSR, JAM, c8x, ICP
	class LSR_Bullet_xj200: BulletSingle {

		soundHit1[]={"\LSR_uswp\soundhit\hit_ground1.wss",0.031623,1};
		soundHit2[]={"\LSR_uswp\soundhit\hit_ground2.wss",0.031623,1};
		soundHit3[]={"\LSR_uswp\soundhit\hit_ground3.wss",0.031623,1};
		soundHit4[]={"\LSR_uswp\soundhit\hit_ground4.wss",0.031623,1};
		soundHit5[]={"\LSR_uswp\soundhit\hit_ground5.wss",0.031623,1};
		soundHit6[]={"\LSR_uswp\soundhit\hit_ground6.wss",0.031623,1};
		soundHit7[]={"\LSR_uswp\soundhit\hit_ground7.wss",0.031623,1};
		soundHit8[]={"\LSR_uswp\soundhit\hit_ground8.wss",0.031623,1};

		soundHitMan1[]={"\LSR_uswp\soundhit\hit_man1.wss",0.012589,1};
		soundHitMan2[]={"\LSR_uswp\soundhit\hit_man2.wss",0.012589,1};
		soundHitMan3[]={"\LSR_uswp\soundhit\hit_man4.wss",0.012589,1};
		soundHitMan4[]={"\LSR_uswp\soundhit\hit_man5.wss",0.012589,1};
		soundHitMan5[]={"\LSR_uswp\soundhit\hit_man6.wss",0.012589,1};
		soundHitMan6[]={"\LSR_uswp\soundhit\hit_man7.wss",0.012589,1};

		soundHitArmor1[]={"\LSR_uswp\soundhit\hit_metal1.wss",0.031623,1};
		soundHitArmor2[]={"\LSR_uswp\soundhit\hit_metal2.wss",0.031623,1};
		soundHitArmor3[]={"\LSR_uswp\soundhit\hit_metal3.wss",0.031623,1};
		soundHitArmor4[]={"\LSR_uswp\soundhit\hit_metal4.wss",0.031623,1};
		soundHitArmor5[]={"\LSR_uswp\soundhit\hit_metal5.wss",0.031623,1};
		soundHitArmor6[]={"\LSR_uswp\soundhit\hit_metal6.wss",0.031623,1};
		soundHitArmor7[]={"\LSR_uswp\soundhit\hit_metal7.wss",0.031623,1};
		soundHitArmor8[]={"\LSR_uswp\soundhit\hit_metal8.wss",0.031623,1};

		soundHitBuilding1[]={"\LSR_uswp\soundhit\ric1.wss",0.031623,1};
		soundHitBuilding2[]={"\LSR_uswp\soundhit\ric2.wss",0.031623,1};
		soundHitBuilding3[]={"\LSR_uswp\soundhit\ric3.wss",0.031623,1};
		soundHitBuilding4[]={"\LSR_uswp\soundhit\ric4.wss",0.031623,1};
		soundHitBuilding5[]={"\LSR_uswp\soundhit\ric5.wss",0.031623,1};
		soundHitBuilding6[]={"\LSR_uswp\soundhit\ric6.wss",0.031623,1};
		soundHitBuilding7[]={"\LSR_uswp\soundhit\ric7.wss",0.031623,1};
		soundHitBuilding8[]={"\LSR_uswp\soundhit\ric8.wss",0.031623,1};
		soundHitBuilding9[]={"\LSR_uswp\soundhit\ric9.wss",0.031623,1};
		soundHitBuilding10[]={"\LSR_uswp\soundhit\ric10.wss",0.031623,1};
		soundHitBuilding11[]={"\LSR_uswp\soundhit\ric11.wss",0.031623,1};
		soundHitBuilding12[]={"\LSR_uswp\soundhit\ric12.wss",0.031623,1};
		soundHitBuilding13[]={"\LSR_uswp\soundhit\ric13.wss",0.031623,1};

		soundfly1[]={"\LSR_uswp\soundhit\fly1.wss",0.031623,1};
		soundfly2[]={"\LSR_uswp\soundhit\fly2.wss",0.031623,1};
		soundfly3[]={"\LSR_uswp\soundhit\fly3.wss",0.031623,1};
		soundfly4[]={"\LSR_uswp\soundhit\fly4.wss",0.031623,1};
		soundfly5[]={"\LSR_uswp\soundhit\fly4.wss",0.031623,1};

		soundfly[]={"soundfly1",0.2,"soundfly2",0.2,"soundfly3",0.2,"soundfly4",0.2,"soundfly5",0.2};
		hitGround[]={"soundHit1",0.125,"soundHit2",0.125,"soundHit3",0.125,"soundHit4",0.125,"soundHit5",0.125,"soundHit6",0.125,"soundHit7",0.125,"soundHit8",0.125};
		hitMan[]={"soundHitMan1",0.166667,"soundHitMan2",0.166667,"soundHitMan3",0.166667,"soundHitMan4",0.166667,"soundHitMan5",0.166667,"soundHitMan6",0.166667};
		hitArmor[]={"soundHitArmor1",0.125,"soundHitArmor2",0.125,"soundHitArmor3",0.125,"soundHitArmor4",0.125,"soundHitArmor5",0.125,"soundHitArmor6",0.125,"soundHitArmor7",0.125,"soundHitArmor8",0.125};
		hitBuilding[]={"soundHitBuilding1",0.076,"soundHitBuilding2",0.076,"soundHitBuilding3",0.076,"soundHitBuilding4",0.076,"soundHitBuilding5",0.076,"soundHitBuilding6",0.076,"soundHitBuilding7",0.076,"soundHitBuilding8",0.076,"soundHitBuilding10",0.076,"soundHitBuilding11",0.076,"soundHitBuilding12",0.076,"soundHitBuilding13",0.076};

	};
	class LSR_m240_Bullet_xj200: LSR_Bullet_xj200 {
		airLock=true;
		hit=10.5;indirectHit=2;indirectHitRange=0.1;
		minRange=1;minRangeProbab=0.90;
		midRange=200;midRangeProbab=0.50;
		maxRange=500;maxRangeProbab=0.05;
		cost=6;
		tracerColor[]={0.8,0.2,0.0,0.25};
		tracerColorR[]={0,0,0,0.005};
	};
	class M24Bullet_xj200: LSR_Bullet_xj200	{
		hit=11;
		indirectHit=0; //non HE
		indirectHitRange=0;
		minRange=1;
		minRangeProbab=0.100000;
		midRange=400;
		midRangeProbab=0.300000;
		maxRange=900;
		maxRangeProbab=0.90000;
		tracerColor[]={0,0.000000,0.00000,0};
		soundFly[]={"objects\bulletnoise",0.251189,0.700000};
	};
	class lsr_m16_single_bullet_xj200 : LSR_Bullet_xj200 {
		hit=9;indirectHit=2;indirectHitRange=0.1;
		visibleFire=16;
		audibleFire=16;
		visibleFireTime=3;
		minRange=0.5;minRangeProbab=0.10;
		midRange=150;midRangeProbab=0.38;
		maxRange=300;maxRangeProbab=0.04;
		cost = 0.7;
		tracerColor[]={0,0.000000,0.00000,0};
		soundFly[]={"objects\bulletnoise",0.251189,0.700000};
	};
	class lsr_m16_burst_bullet_xj200: LSR_Bullet_xj200 {
		hit=9;indirectHit=2;indirectHitRange=0.1;
		minRange=0.5;minRangeProbab=0.10;
		midRange=140;midRangeProbab=0.38;
		maxRange=300;maxRangeProbab=0.04;
		visibleFire=25;
		audibleFire=25;
		visibleFireTime=5;
		cost = 2.1;
		tracerColor[]={0,0.000000,0.00000,0};
		soundFly[]={"objects\bulletnoise",0.251189,0.700000};
	};
	class JAM_West_M433_Grenade_xj200: Grenade {
		hit=20;indirectHit=18;indirectHitRange=5;
		minRange=15;minRangeProbab=0.01;
		midRange=100;midRangeProbab=0.4;
		maxRange=250;maxRangeProbab=0.5;
		cost=30;
		visibleFire=2; // how much is visible when this weapon is fired
		audibleFire=0.25;
		visibleFireTime=0; // how long is it visible
	};
	class LSR_SAW_mg_Bullet_xj200: LSR_Bullet_xj200 {
		airLock=true;
		hit=9;indirectHit=2;indirectHitRange=0.1;
		minRange=1;minRangeProbab=0.90;
		midRange=200;midRangeProbab=0.50;
		maxRange=500;maxRangeProbab=0.05;
		cost=4;
		tracerColor[]={0.8,0.2,0.0,0.25};
		tracerColorR[]={0,0,0,0.005};
	};

	class c8x_Bullet_xj200: BulletSingle {
		soundHit1[]={"\c8xmag\soundhit\hit_ground1.wss",0.031623,1};
		soundHit2[]={"\c8xmag\soundhit\hit_ground2.wss",0.031623,1};
		soundHit3[]={"\c8xmag\soundhit\hit_ground3.wss",0.031623,1};
		soundHit4[]={"\c8xmag\soundhit\hit_ground4.wss",0.031623,1};
		soundHit5[]={"\c8xmag\soundhit\hit_ground5.wss",0.031623,1};
		soundHit6[]={"\c8xmag\soundhit\hit_ground6.wss",0.031623,1};
		soundHit7[]={"\c8xmag\soundhit\hit_ground7.wss",0.031623,1};
		soundHit8[]={"\c8xmag\soundhit\hit_ground8.wss",0.031623,1};

		soundHitMan1[]={"\c8xmag\soundhit\hit_man1.wss",0.012589,1};
		soundHitMan2[]={"\c8xmag\soundhit\hit_man2.wss",0.012589,1};
		soundHitMan3[]={"\c8xmag\soundhit\hit_man4.wss",0.012589,1};
		soundHitMan4[]={"\c8xmag\soundhit\hit_man5.wss",0.012589,1};
		soundHitMan5[]={"\c8xmag\soundhit\hit_man6.wss",0.012589,1};
		soundHitMan6[]={"\c8xmag\soundhit\hit_man7.wss",0.012589,1};

		soundHitArmor1[]={"\c8xmag\soundhit\hit_metal1.wss",0.031623,1};
		soundHitArmor2[]={"\c8xmag\soundhit\hit_metal2.wss",0.031623,1};
		soundHitArmor3[]={"\c8xmag\soundhit\hit_metal3.wss",0.031623,1};
		soundHitArmor4[]={"\c8xmag\soundhit\hit_metal4.wss",0.031623,1};
		soundHitArmor5[]={"\c8xmag\soundhit\hit_metal5.wss",0.031623,1};
		soundHitArmor6[]={"\c8xmag\soundhit\hit_metal6.wss",0.031623,1};
		soundHitArmor7[]={"\c8xmag\soundhit\hit_metal7.wss",0.031623,1};
		soundHitArmor8[]={"\c8xmag\soundhit\hit_metal8.wss",0.031623,1};

		soundHitBuilding1[]={"\c8xmag\soundhit\ric1.wss",0.031623,1};
		soundHitBuilding2[]={"\c8xmag\soundhit\ric2.wss",0.031623,1};
		soundHitBuilding3[]={"\c8xmag\soundhit\ric3.wss",0.031623,1};
		soundHitBuilding4[]={"\c8xmag\soundhit\ric4.wss",0.031623,1};
		soundHitBuilding5[]={"\c8xmag\soundhit\ric5.wss",0.031623,1};
		soundHitBuilding6[]={"\c8xmag\soundhit\ric6.wss",0.031623,1};
		soundHitBuilding7[]={"\c8xmag\soundhit\ric7.wss",0.031623,1};
		soundHitBuilding8[]={"\c8xmag\soundhit\ric8.wss",0.031623,1};
		soundHitBuilding9[]={"\c8xmag\soundhit\ric9.wss",0.031623,1};
		soundHitBuilding10[]={"\c8xmag\soundhit\ric10.wss",0.031623,1};
		soundHitBuilding11[]={"\c8xmag\soundhit\ric11.wss",0.031623,1};
		soundHitBuilding12[]={"\c8xmag\soundhit\ric12.wss",0.031623,1};
		soundHitBuilding13[]={"\c8xmag\soundhit\ric13.wss",0.031623,1};

		soundfly1[]={"\c8xmag\soundhit\fly1.wss",0.031623,1};
		soundfly2[]={"\c8xmag\soundhit\fly2.wss",0.031623,1};
		soundfly3[]={"\c8xmag\soundhit\fly3.wss",0.031623,1};
		soundfly4[]={"\c8xmag\soundhit\fly4.wss",0.031623,1};
		soundfly5[]={"\c8xmag\soundhit\fly4.wss",0.031623,1};

		soundfly[]={"soundfly1",0.2,"soundfly2",0.2,"soundfly3",0.2,"soundfly4",0.2,"soundfly5",0.2};
		hitGround[]={"soundHit1",0.125,"soundHit2",0.125,"soundHit3",0.125,"soundHit4",0.125,"soundHit5",0.125,"soundHit6",0.125,"soundHit7",0.125,"soundHit8",0.125};
		hitMan[]={"soundHitMan1",0.166667,"soundHitMan2",0.166667,"soundHitMan3",0.166667,"soundHitMan4",0.166667,"soundHitMan5",0.166667,"soundHitMan6",0.166667};
		hitArmor[]={"soundHitArmor1",0.125,"soundHitArmor2",0.125,"soundHitArmor3",0.125,"soundHitArmor4",0.125,"soundHitArmor5",0.125,"soundHitArmor6",0.125,"soundHitArmor7",0.125,"soundHitArmor8",0.125};
		hitBuilding[]={"soundHitBuilding1",0.076,"soundHitBuilding2",0.076,"soundHitBuilding3",0.076,"soundHitBuilding4",0.076,"soundHitBuilding5",0.076,"soundHitBuilding6",0.076,"soundHitBuilding7",0.076,"soundHitBuilding8",0.076,"soundHitBuilding10",0.076,"soundHitBuilding11",0.076,"soundHitBuilding12",0.076,"soundHitBuilding13",0.076};
	};
	class c8xak74m_Single_Bullet_xj200 : c8x_Bullet_xj200 {
		hit=9;indirectHit=2;indirectHitRange=0.1;

		visibleFire=16;
		audibleFire=16;
		visibleFireTime=3;

		minRange=0.5;minRangeProbab=0.10;
		midRange=50;midRangeProbab=0.38;
		maxRange=250;maxRangeProbab=0.04;

		cost = 2.1;
	};
	class c8x_ak74m_Single_Bullet_xj200: c8xak74m_Single_Bullet_xj200 {
		tracerColor[]={0.2,0.8,0.1,0.25};
		tracerColorR[]={0,0,0,0.005};
	};
	class c8xak74m_Auto_Bullet_xj200: c8x_Bullet_xj200 {
		hit=9;indirectHit=2;indirectHitRange=0.1;
		visibleFire=16;
		audibleFire=16;
		visibleFireTime=3;

		minRange=0.5;minRangeProbab=0.10;
		midRange=50;midRangeProbab=0.38;
		maxRange=250;maxRangeProbab=0.04;

		cost = 2.1;
	};
	class c8x_ak74m_Auto_Bullet_xj200: c8xak74m_Auto_Bullet_xj200 {
		tracerColor[]={0.2,0.8,0.1,0.25};
		tracerColorR[]={0,0,0,0.005};
	};
	class c8x_gp25gl_grenade_xj200: Grenade {
		hit=20;indirectHit=18;indirectHitRange=7;
		minRange=15;minRangeProbab=0.30;
		midRange=80;midRangeProbab=0.55;
		maxRange=150;maxRangeProbab=0.00;
		SoundHit[]={"\c8xmag\sounds\east_g_exp_grnd.wss",15.000000,1};
		SoundHitArmor1[]={"\c8xmag\sounds\east_g_exp_veh.wss",15.000000,1};
		soundHitBuilding1[]={"\c8xmag\sounds\east_g_exp_bldg.wss",10.000000,1};
		hitArmor[]={soundHitArmor1,1.0};
		hitBuilding[]={soundHitBuilding1,1.0};
		cost=40;
		visibleFire=2;
		audibleFire=0.25;
		visibleFireTime=0;
	};
	class c8xrpk74_Single_Bullet_xj200: c8x_Bullet_xj200 {
		hit=9.25;indirectHit=2;indirectHitRange=0.1;
		visibleFire=16;
		audibleFire=16;
		visibleFireTime=3;

		minRange=1;minRangeProbab=0.90;
		midRange=100;midRangeProbab=0.50;
		maxRange=350;maxRangeProbab=0.05;

		cost=3.1;
	};
	class c8xrpk74_Full_Bullet_xj200: c8x_Bullet_xj200 {
		hit=9.25;indirectHit=2;indirectHitRange=0.1;
		visibleFire=16;
		audibleFire=16;
		visibleFireTime=3;

		minRange=1;minRangeProbab=0.90;
		midRange=75;midRangeProbab=0.50;
		maxRange=150;maxRangeProbab=0.05;

		cost=3.1;
	};
	class c8x_rpk74_Single_Bullet_xj200: c8xrpk74_Single_Bullet_xj200 {
		tracerColor[]={0.2,0.8,0.1,0.25};
		tracerColorR[]={0,0,0,0.005};
	};
	class c8x_rpk74_Full_Bullet_xj200: c8xrpk74_Full_Bullet_xj200 {
		tracerColor[]={0.2,0.8,0.1,0.25};
		tracerColorR[]={0,0,0,0.005};
	};

	class ICP_SVD : BulletSniper {};
	class SVDSBullet_xj200 : ICP_SVD {
		minRange=1;
		minRangeProbab=0.10;
		midRange=400;
		midRangeProbab=0.30;
		maxRange=900;
		maxRangeProbab=0.90;
	};
	class ICP_BulletMG: Bullet7_6W {};
	class PKM_AMMO_xj200 : ICP_BulletMG {
		minRange=1;
		minRangeProbab=0.900000;
		midRange=200;
		midRangeProbab=0.500000;
		maxRange=500;
		maxRangeProbab=0.050000;
	};
	
	
	class MortarShell_xj200: MortarShell {
		minRange=45; minRangeProbab=0.600000;
		midRange=240; midRangeProbab=0.750000;
		maxRange=450; maxRangeProbab=0.000000;
		cost = 1;
	};

	
	class Kasap_Ammo_xj200: GrenadeHand {
		hit=550;
		indirectHit=150;
		indirectHitRange=6;
		model="\kyl_kasap\kasapanos.p3d";
		soundHit1[]={"\kyl_kasap\Boom2.ogg",db40,1};
		soundHit2[]={"\kyl_kasap\Boom3.ogg",db40,1};
		soundHit3[]={"\kyl_kasap\Boom4.ogg",db40,1};
		soundHit4[]={"\kyl_kasap\Boom5.ogg",db40,1};
		hitGround[]={soundHit1,0.25,soundHit2,0.25,soundHit3,0.25,soundHit4,0.25};
		hitMan[]={soundHit1,0.25,soundHit2,0.25,soundHit3,0.25,soundHit4,0.25};
		hitArmor[]={soundHit1,0.25,soundHit2,0.25,soundHit3,0.25,soundHit4,0.25};
		hitBuilding[]={soundHit1,0.25,soundHit2,0.25,soundHit3,0.25,soundHit4,0.25};
	};
	
	
//EOF