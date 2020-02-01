/*
The "TZK_Objects" AddOn defines objects used in @TZK CTI missions, Made by excellent CTI Commander, Player and Editer "IF". Patch name is TZK_Objects_210a.


Some objects are just redefined, set no change on parameters but rename their class name. There are few reasons for this:
First, it's hard to unify all player's OFP games. Hence files in AddOns or Res\AddOns may be different, and, in addition, if the dedicated server used the function "chechfiles[]" on these files, a long files' list might be displayed in MULTIPLAYER games. Redefining ammos, magazines, weapons and vehicles in these AddOns and giving them different class names can unify these objects' parameters, and server only need to check this TZK_Objects AddOn's PBO file. However, this AddOn didn't copy models and textures packaged in official AddOns, so it's necessary to keep those AddOns' model and texture files original.
As for config.bin's unifying, it's a piece of cake. Just put a credible original config.bin in CTImod\Bin and ask the dedicated server to check config.bin and config.cpp in CTImod\Bin, Res\Bin and \Bin, then everything would be OK.
Second, CTI missions are still evolving. It's possible to adjust any objects' parameters. Redefinition them in one PBO file is a preparation for future CTI updates. For example, markers defined in "cti_markers" are a little larger than actual requirement, and more color are needed to show a more colorful map-marking. So copying all codes from cti_markers to the TZK_Markers, redefining markers' size and defining new colors can make it easier for debugging and unifying AddOns.
Third, in some IncomingMissile warning system, AA ammos' class name are shown. Rename them can make it clearer for pilot to know which kind of AA is coming.

Some redefinations are set "scope = private" for inherit-only. "Protected" scope means the class can be used in game but hided in Mission Editor, making the units' list clearly.


Critical objects used in @TZK CTI missions have the postfix "_xj200", which means personal naming and version of CTI missions and AddOns. Some objects are modified basing AddOns CR09, Tank_1.2N, RKTHunter, PackMortar, cti_markers, gdtcti and some other AddOns packed in @xrOFP. Great thankful to their authors.
These objects' parameters are adjusted to fit CTI battle, basing on author's CTI experience. Version number is necessary, make sure different classes have different class name, so that parameters won't conflict or cover each other.

You might contact with "IF" by sending Email to qq454914340@gmail.com if you want to join TZK CTI battle or to ask for a signature in AddOn and CTI missions' briefing as AddOn's or CTI missions' author.
*/

#define TEast 0
#define TWest 1
#define TGuerrila 2
#define TCivilian 3
#define TSideUnknown 4
#define TEnemy 5
#define TFriendly 6
#define TLogic 7

#define true 1
#define false 0

#define private 0
#define protected 1
#define public 2

#define WeaponNoSlot			0// 	dummy weapons
#define WeaponSlotPrimary		1// 	primary weapons
#define WeaponSlotSecondary		16// 	secondary weapons
#define WeaponSlotItem			256// 	items
#define WeaponSlotBinocular		4096// 	binocular
#define WeaponHardMounted		65536

#define VSoft 0
#define VArmor 1
#define VAir 2

#define CanSeeRadar 1
#define CanSeeEye 2
#define CanSeeOptics 4
#define CanSeeEar 8
#define CanSeeCompass 16
#define CanSeeRadarC CanSeeRadar+CanSeeCompass
#define CanSeeAll 31
#define CanSee_VehicleWithRadar CanSeeEye+CanSeeEar+CanSeeOptics+CanSeeCompass+CanSeeRadar
#define CanSee_VehicleNoRadar CanSeeEye+CanSeeEar+CanSeeOptics+CanSeeCompass


/*
	TZK_Objects_210a is CfgPatches class name, used for CTI missions to recognize if player has correct addon.
	_xj200 is postfix of class name keep same with TZK version avoiding different version using same class name.
	TZK_Units_200 is vehicleClass name shown in OFP Mission Editor. TZK_Training_200 is another vehicleClass used for editing simple training missions.
	TZK_Objects\ is the path for OFP to read files defined here.
*/

class CfgPatches {
	class TZK_Objects_210a {
		name = "TZK_Units_200";
		author = "IF";
		units[] = {};
		requiredAddons[] = {
			TZK_Markers_200,
			6G30, AH64, BIS_Resistance, BIS_WeaponPack, Bizon, BMP2, Bradley, BRDM,
			G36a, HMMWV, LaserGuided, MM1, Steyr, Su25, Vulcan, XMS,
			CWKZodiac, EUDEF_MP5SD6soldier, GST_KawaP, JahSG551, KEGak107, KSVK, kyl_kasap, mVSS, RFSVUa, RKTMod, VNgroza1sscope,
			PackMortar,
			Mi2NO,
			C8X_RUSS, C8X_Magazines, ICP_weaponpack, JAM_Magazines, JAM_Sounds, LSR_uswp,
			M109A6, CoCHWK_2S19, mfm_cit_sprutsd, DC3, hwk_C130, INQ_M1A2, psy_mcar
		};
		requiredVersion = 1.96;
	};
};

// Extend Material Effects is defined in TZK_Effects

	#include "TZK_Objects\HPP\CfgModels_inherit.hpp"

class CfgAmmo {
	#include "TZK_Objects\HPP\CfgAmmo_default_inherit.hpp"
	#include "TZK_Objects\HPP\CfgAmmo_Tank_inherit.hpp"
	#include "TZK_Objects\HPP\CfgAmmo_Infantry_inherit.hpp"
	#include "TZK_Objects\HPP\CfgAmmo_Cannon_inherit.hpp"
	#include "TZK_Objects\HPP\CfgAmmo_Missile_inherit.hpp"

	class Ammo_12mm7_xj200: Bullet12_7 {
		hit=20; indirectHit=2; indirectHitRange=0.2;
		minRange=1;minRangeProbab=0.9;
		midRange=250;midRangeProbab=0.9;
		maxRange=500;maxRangeProbab=0.1;
		visibleFire=32; audibleFire=32; visibleFireTime=2
		cost = 10;
	};
	class Mortar4Ammo_xj200: MortarShell {
		hit=600;
		indirectHit=200;
		indirectHitRange=20;
		minRange=75;
		minRangeProbab=0.950000;
		midRange=500;
		midRangeProbab=0.950000;
		maxRange=1000;
		maxRangeProbab=0.950000;
		soundHit[]={\PackMortar\exp.ogg,db60,1};
		soundFly[]={"objects\bulletnoise",0.251189,0.700000};
		soundHit1[]={"\PackMortar\grenade1.ogg",38.333333,1};
		soundHit2[]={"\PackMortar\grenade2.ogg",38.333333,1};
		soundHit3[]={"\PackMortar\grenade3.ogg",38.333333,1};
		hitGround[]={"soundHit1",0.330000,"soundHit2",0.330000,"soundHit3",0.330000};
		hitArmor[]={"soundHit1",0.330000,"soundHit2",0.330000,"soundHit3",0.330000};
		hitBuilding[]={"soundHit1",0.330000,"soundHit2",0.330000,"soundHit3",0.330000};
		hitMan[]={"soundHit1",0.300000,"soundHit2",0.300000,"soundHit3",0.300000};
		cost = 1;
	};
	// M46 Ammo
	class AP130_DKMM_xj200: Heat73 {
	//	hit = 700; indirectHit = 50; indirectHitRange = 4; // Original power defined in dkmm_m46
		hit = 730; indirectHit = 40; indirectHitRange = 4; // Value calculated by linear interpolation depending on 125 and 155 ammo.
		soundFly[] = {"\dkmm_m46\shellfly.wav","db+2",1};
		visibleFire = 25;
		audibleFire = 25;
		visibleFireTime = 3;
		cost = 600;
		model = "\dkmm_m46\HEAT130.p3d";
	};
	class HE130_DKMM_xj200: shell73 {
	//	hit = 190; indirectHit = 60; indirectHitRange = 11; // Original power defined in dkmm_m46
		hit = 450; indirectHit = 205; indirectHitRange = 10; // Value calculated by linear interpolation depending on 125 and 155 ammo.
		soundFly[] = {"\dkmm_m46\shellfly.wav","db+2",4};
		visibleFire = 25;
		audibleFire = 25;
		visibleFireTime = 3;
		cost = 300;
		model = "\dkmm_m46\HEAT130.p3d";
	};
	
	class MG3bullet_DVD_xj200: BulletSingle {
		hit=11;
		indirectHit=2;
		indirectHitRange=0.15;

		minRange=0.5;minRangeProbab=0.9;
		midRange=150;midRangeProbab=0.5;
		maxRange=275;maxRangeProbab=0.05;

		visibleFire=16;
		audibleFire=16;
		visibleFireTime=10;

		soundHit1[]={"\c8xmag\soundhit\hit_ground1.wss",0.011623,1};
		soundHit2[]={"\c8xmag\soundhit\hit_ground2.wss",0.011623,1};
		soundHit3[]={"\c8xmag\soundhit\hit_ground3.wss",0.011623,1};
		soundHit4[]={"\c8xmag\soundhit\hit_ground4.wss",0.011623,1};
		soundHit5[]={"\c8xmag\soundhit\hit_ground5.wss",0.011623,1};
		soundHit6[]={"\c8xmag\soundhit\hit_ground6.wss",0.011623,1};
		soundHit7[]={"\c8xmag\soundhit\hit_ground7.wss",0.011623,1};
		soundHit8[]={"\c8xmag\soundhit\hit_ground8.wss",0.011623,1};

		soundHitMan1[]={"\c8xmag\soundhit\hit_man1.wss",0.002589,1};
		soundHitMan2[]={"\c8xmag\soundhit\hit_man2.wss",0.002589,1};
		soundHitMan3[]={"\c8xmag\soundhit\hit_man4.wss",0.002589,1};
		soundHitMan4[]={"\c8xmag\soundhit\hit_man5.wss",0.002589,1};
		soundHitMan5[]={"\c8xmag\soundhit\hit_man6.wss",0.002589,1};
		soundHitMan6[]={"\c8xmag\soundhit\hit_man7.wss",0.002589,1};

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

		hitGround[]={"soundHit3",0.166667,"soundHit4",0.166667,"soundHit5",0.166667,"soundHit6",0.166667,"soundHit7",0.166667,"soundHit8",0.166667};
		hitMan[]={"soundHitMan2",0.333334,"soundHitMan3",0.333334,"soundHitMan6",0.333334};
		hitArmor[]={"soundHitArmor1",0.2,"soundHitArmor2",0.2,"soundHitArmor4",0.2,"soundHitArmor6",0.2,"soundHitArmor8",0.2};
		hitBuilding[]={"soundHitBuilding1",0.166667,"soundHitBuilding2",0.166667,"soundHitBuilding4",0.166667,"soundHitBuilding5",0.166667,"soundHitBuilding7",0.166667,"soundHitBuilding13",0.166667};
	};
	class SG762ammo_DVD_xj200: MG3bullet_DVD_xj200 {
		hit=11;
		minRange=100;minRangeProbab=0.10;
		midRange=150;midRangeProbab=0.38;
		maxRange=350;maxRangeProbab=0.04;

		cost = 0.7;
	};
	class MG3AAammo_DVD_xj200: SG762ammo_DVD_xj200 {
		hit=27;
		airLock=1;
		visibleFire=25;
		audibleFire=25;
		visibleFireTime=10;
		cost=10;
		minRange=4;minRangeProbab=1.0;
		midRange=200;midRangeProbab=0.5;
		maxRange=600;maxRangeProbab=0.05;
	};
	class MG3ammo_DVD_xj200: SG762ammo_DVD_xj200 {
		cost=6;
		visibleFire=25;
		audibleFire=25;
		visibleFireTime=10;
		minRange=0.1;minRangeProbab=1.0;
		midRange=100;midRangeProbab=0.5;
		maxRange=450;maxRangeProbab=0.05;
	}; 
	
	// C130 Flare
	class c130_Flare_xj200: Default {
		cost=20;
		model = "empty";
		maxControlRange=0;
		simulationStep=0.05;
		simulation=shotRocket;
		hit=0;indirectHit=0;indirectHitRange=0.001;
		minRange=50;minRangeProbab=0.20;
		midRange=300;midRangeProbab=0.95;
		maxRange=500;maxRangeProbab=0.20;
		soundHit[]={"Explosions\expl3",db-50,2};
		irLock=0;
		laserLock=0;
		dispersion=200.000000;
		sideAirFriction=1.0;
		maneuvrability=0;
		maxSpeed=100;
		initTime=0;
		thrustTime=0;
		thrust=0;
		explosive=0;
	};

	#include "TZK_Objects\HPP\CfgAmmo_Virtual_inherit.hpp"
};
class CfgRecoils {
	KSVK_xj200[]={0.022000,0,0,0.060000,0.014000,0.020000,0.050000,0.006000,0.060000,0.340000,0,0};
	LSR_m249_750Recoil_xj200[] = {0.04,0.012,0.025, 0.007,0.007,0.019, 0.017,0,0};
	LSR_m16Recoil_xj200[] = {0.018,0.033,0.020, 0.048,0,-0.0010, 0.003,0,-0.0010, 0.005,0,0};
	LSR_m16BurstRecoil_xj200[] = {0.023,0.033,0.020, 0.048,0,-0.0010, 0.003,0,-0.0010, 0.005,0,0};
	c8xak74mRecoil_xj200[]=	 {0.0165,0.030,0.018, 0.042,0,-0.00095, 0.003,0,-0.00095, 0.0045,0,0};
	c8xak74mFullRecoil_xj200[]= {0.0350,0.018,0.018, 0.042,0,-0.00095, 0.003,0,-0.00095, 0.0045,0,0};
	c8xRPK74Recoil_xj200[]=	 {0.016,0.030,0.018, 0.035,0,-0.0008, 0.003,0,-0.0008, 0.0040,0,0};
	c8xRPK74FullRecoil_xj200[]= {0.018,0.020,0.020, 0.035,0,-0.0008, 0.003,0,-0.0008, 0.0040,0,0};
};
class CfgWeapons {
	#include "TZK_Objects\HPP\CfgWeapons_default_inherit.hpp"
	#include "TZK_Objects\HPP\CfgWeapons_Tank_inherit.hpp"
	#include "TZK_Objects\HPP\CfgWeapons_Infantry_inherit.hpp"
	#include "TZK_Objects\HPP\CfgWeapons_Cannon_inherit.hpp"
	#include "TZK_Objects\HPP\CfgWeapons_Missile_inherit.hpp"

	// StaticMG Weapon
	class StaticMG_12mm7_xj200: Browning_xj200 {
		magazines[]={Mag_12mm7_100_xj200, Mag_12mm7_1000_xj200};
		magazineReloadTime = 5
		reloadMagazineSound[]={"weapons\m16load",db-70,1};
		aiDispersionCoefX=10.0;
		aiDispersionCoefY=5.0;
		// optics = true;
		// modelOptics="optika_M60_MG";
	};
	class Mag_12mm7_100_xj200: Browning_xj200 {
		count = 100;
		ammo = "Ammo_12mm7_xj200";
		reloadTime = 0.15
		aiRateOfFire=0;
		aiRateOfFireDistance=500;
	};
	class Mag_12mm7_1000_xj200: Mag_12mm7_100_xj200 {
		count = 1000;
	};
	// Mortar Structure Weapon
	class Mortar4Base_xj200: Gun120 {
		ammo = Mortar4Ammo_xj200;
		displayName="Mortar";
		displayNameMagazine="Mortar";
		shortNameMagazine="Mortar";
		count=100;
		canLock=0;
		irLock=0;
		airLock=0;
		autoReload=1;
		autoFire = 1;
		enableAttack=1;
		ffMagnitude=0;
		ffFrequency=1;
		primary=10;
		initSpeed=80;
		reloadTime=3;
		magazineReloadTime=0.010000;
		aiRateOfFire=0.7;
		aiRateOfFireDistance=2000;
		sound[]={\PackMortar\mortar_fire.ogg,db70,1};
		reloadSound[]={\PackMortar\mortar_reload.ogg,0.0316,1};
	};
	class Mortar4Mag_xj200: Mortar4Base_xj200 {
		scopeMagazine = 2;
		count = 5;
	};
	class Mortar4_xj200: Mortar4Base_xj200 {
		magazines[]={"Mortar4Mag_xj200"};
		reloadTime=4;
		magazineReloadTime=10;
	};
	class Mortar6Base_xj200: Mortar4Base_xj200 {
		initSpeed=120;
	};
	class Mortar6Mag_xj200: Mortar6Base_xj200 {
		scopeMagazine = 2;
		count = 5;
	};
	class Mortar6_xj200: Mortar6Base_xj200 {
		magazines[]={"Mortar6Mag_xj200"};
		reloadTime=4;
		magazineReloadTime=10;
	};
	// M46 Weapon
	class AP130_DKMM_xj200: default {
		weaponType = 65536;
		scopeMagazine = 2;
		reloadTime = 8;
		ammo = "AP130_DKMM_xj200";
		displayName = "SABOT 130";
		displayNameMagazine = "SABOT 130";
		shortNameMagazine = "SABOT";
		nameSound = "shell";
		count = 20;
	//	initSpeed = 1500;
		initSpeed = 930; // Value from website.
		sound[] = {"Weapons\gun73","db20",1};
		reloadSound[] = {"Weapons\reload","db-60",1};
	};
	class HE130_DKMM_xj200: AP130_DKMM_xj200 {
		weaponType = 65536;
		displayName = "HE 130";
		displayNameMagazine = "HE 130";
		shortNameMagazine = "HE";
		namesound = "heat";
		count = 16;
		ammo = "HE130_DKMM_xj200";
	};
	class Gun130_DKMM_xj200: Gun73 {
		weaponType = 65536;
		reloadMagazineSound[] = {"Weapons\missload","db-70",1};
		reloadTime = 8;
		opticsZoomMin = 0.2;
		opticsZoomMax = 0.9;
		initSpeed = 1000;
		flash = "gunfire";
		flashSize = 12.0;
		dispersion = 0.00055;
		canLock = 2;
		magazineReloadTime = 10;
		magazines[] = {"AP130_DKMM_xj200","HE130_DKMM_xj200"};
		optics = 1;
		aiRateOfFire = 2;
		aiRateOfFireDistance = 1400;
		displayName = "HEAT130";
		autoFire = 0;
		autoReload = 1;
		backgroundReload = 1;
		visiblefire = 20;
		visiblefiretime = 2;
	};
	
	class M2cal50_DVDUS_xj200: MachineGun12_7_xj200 {
		ammo="MG3AAammo_DVD_xj200";
		displayName="M2 12.7mm";
		displayNameMagazine="M2 12.7mm";
		shortNameMagazine="M2 Box Mag";
		count=100;
		reloadTime=0.11;
		sound[]={"\TZK_Objects\Sound\mg.wss",4,1};
		reloadMagazineSound[]={"\TZK_Objects\Sound\mgreload.wss",0.3,1};
		soundContinuous=0;
		magazines[]={"M2cal50_DVDUS_xj200"};
		initSpeed=1000;
		autoFire=1;
		optics=1;
		autoReload=1;
		magazineReloadTime=10;
		dispersion=0.0030;
	};	
	class RUSPK_BAS_xj200: MachineGun7_6_xj200 {
		scopeWeapon = public;
		scopeMagazine = public;

		ammo = "Bullet7_6E";
		count = 200;
		magazineReloadTime = 4;
		modelOptics = "optika_PK";
		sound[] = {"Weapons\AK74full",db10,1};
		displayName = $STR_DN_PK;
		displayNameMagazine = $STR_MN_PK;
		shortNameMagazine = $STR_SN_PK;
	};
	
	class PKTbase_DVD_xj200: MachineGun7_6_xj200 {
		ammo="MG3ammo_DVD_xj200";
		displayName = $STR_DVDPKT;
		displayNameMagazine = $STR_DVDPKT;
		shortNameMagazine = $STR_DVDPKT;
		sound[]={"\TZK_Objects\Sound\PKTshot.wss",db -15, 1};
		soundContinuous=0;
		reloadTime=0.08;
		backgroundReload=1;
		dispersion=0.001500;
	};
	class PKTUAZ_DVD_xj200: PKTbase_DVD_xj200 {
		displayName = 7.62mm PK ;
		displayNameMagazine = 7.62mm PK ;
		shortNameMagazine = 7.62mm PK ;
		count = 200;
		autoReload = 1;
		magazineReloadTime = 12;
		reloadMagazineSound[]={"\TZK_Objects\Sound\mgreload.wss",0.3,1};
	};
	// Extended Magazine Type's Satchel and Mines
	class PipeBomb_xj200: PipeBomb {
		picture = "\dtaExt\equip\m\m_pipebomb.paa";
		magazineType = 32;
	};
	class Mine_xj200: Mine {
		picture = "\dtaExt\equip\m\m_mine.paa";
		magazineType = 32;
	};
	class Put_xj200: Put {
		magazines[]={"TimeBomb","PipeBomb","Mine","MineE","PipeBomb_xj200","Mine_xj200"};
	};

	// C130 Flare
	class c130_Flare_xj200: Default	{
		ammo = "c130_Flare_xj200";
		displayName=Flare;
		displayNameMagazine=c130_Flare;
		shortNameMagazine=c130_Flare;
		count=44;
		reloadTime=0.75;
		aiRateOfFire=0.0125;
		aiRateOfFireDistance=300;
		sound[]={"\HWK_c130\flare.ogg",db+80,1.5};
		reloadSound[]={Weapons\missload,db-70,1};
		initSpeed=10;
		magazineReloadTime=1.0;
		autoFire = true;
		burst=1;
	};

	// Spoof Switch & Limit
	// The best way define controller of spoof missile is animate of specific vehicle. But it'll be a large project thus using this way instead.
	class SpoofSwitch_xj200: Default {
		ammo = ""; count = 0;
		displayName = ""; displayNameMagazine = ""; shortNameMagazine = "";
	};
	class SpoofCount_xj200: SpoofSwitch_xj200 {};
	
	#include "TZK_Objects\HPP\CfgWeapons_Virtual_inherit.hpp"
};

	#include "TZK_Objects\HPP\WeaponFireClouds.hpp"
	#include "TZK_Objects\HPP\CfgVehicleActionsMovesMC.hpp"

	#include "TZK_Objects\HPP\UserActions_inherit.hpp"
	#include "TZK_Objects\HPP\EventHandlers_inherit.hpp"
// Treat EH's unique parameters carefully and make sure nothing left when inheriting.


class CfgVehicles {
	#include "TZK_Objects\HPP\CfgVehicles_default_inherit.hpp"
	#include "TZK_Objects\HPP\CfgVehicles_Man_inherit.hpp"
	#include "TZK_Objects\HPP\CfgVehicles_Tank_inherit.hpp"
	#include "TZK_Objects\HPP\CfgVehicles_Light_inherit.hpp"
	#include "TZK_Objects\HPP\CfgVehicles_APC_inherit.hpp"
	#include "TZK_Objects\HPP\CfgVehicles_Aircraft_inherit.hpp"
	#include "TZK_Objects\HPP\CfgVehicles_Structure_inherit.hpp"
	
	#include "TZK_Objects\HPP\CfgVehicles_Logic_inherit.hpp"

};

class CfgNonAIVehicles {
	access = 1;
	class ProxyWeapon {
		autocenter=0;
		scope=2;
		reversed=0;
		model="m16_proxy";
		simulation="ProxyWeapon";
	};

	// Proxy defined in {\ffur_ruair\mi24\}
	class Proxyat2_proxy:ProxyWeapon {
		model="\ffur_ruair\mi24\RHS_AT2_Proxy.p3d";
		simulation="maverickweapon";
	};
	class Proxyat6a:ProxyWeapon {
		model="\ffur_ruair\mi24\RHS_AT6a_Proxy.p3d";
		simulation="maverickweapon";
	};
	class Proxyat6b:ProxyWeapon {
		model="\ffur_ruair\mi24\RHS_AT6b_Proxy.p3d";
		simulation="maverickweapon";
	};
	class Proxyat6c:ProxyWeapon {
		model="\ffur_ruair\mi24\RHS_AT6c_Proxy.p3d";
		simulation="maverickweapon";
	};
	class Proxyat6d:ProxyWeapon {
		model="\ffur_ruair\mi24\RHS_AT6d_Proxy.p3d";
		simulation="maverickweapon";
	};
	
	// Proxy copied from BWMOD_TIGER\CONFIG. However there aren't such proxy's defination in tiger's model so Proxy defined here is non-sense.
	class ProxyROCKET_PARS3: ProxyWeapon {
		  model="TOW";
		  simulation="maverickweapon";
	};
	class ProxyROCKET_HOT3: ProxyWeapon {
		  model="TOW";
		  simulation="maverickweapon";
	};
	class ProxyROCKET_Stinger: ProxyWeapon {
		  model="TOW";
		  simulation="maverickweapon";
	};
	
};


// End of Config File