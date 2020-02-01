	//Basic Machine-Gun redefinations, sounds copied from "MOHsnd.pbo"
	class MachineGun7_6_xj200: MachineGun7_6 {
		sound[]={"\TZK_Objects\Sound\MOH_mk48_s1.wss",3.1622777,1};
		soundContinuous=0;
		displayName="7.62mm MGun";
		displayNameMagazine="7.62mm MG";
		shortNameMagazine="7.62mm";
	};
	class MachineGun12_7_xj200: MachineGun12_7 {
		sound[]={"\TZK_Objects\Sound\MOH_pkt_s1.wss",3.1622777,1};
		soundContinuous=0;
		displayName="12.7mm MGun";
		displayNameMagazine="12.7mm MG";
		shortNameMagazine="12.7mm";
	};
	class Browning_xj200: MachineGun12_7 {
		ammo="Bullet12_7";
		sound[]={"\TZK_Objects\Sound\MOH_m249_s1.wss",31.622778,1};
		soundContinuous=0;
	};

	//Main Heavy Tank Weapons
	class M1Gun_xj200: Gun120 {
		displayName="M256 120mm Smoothbore";
		reloadSound[]={"\TZK_Objects\Sound\gunreload.wss",0.5,0.8};
		magazines[]={"M1Sabot_xj200","M1Heat_xj200"};
		aiRateOfFire=0;
		aiRateOfFireDistance=0;
		opticsZoomMin=0.333333;
		opticsZoomMax=0.1;
	};
	class M1Sabot_xj200: Shell120 {
		displayName="M256 120mm APFSDS";
		displayNameMagazine="M829 APFSDS";
		shortNameMagazine="M829 120mm Sabot";
		ammo="M1Sabot_xj200";
		count=35;
		initSpeed=1500;
		nameSound="heat";
		reloadTime=8;
		sound[]={"\TZK_Objects\Sound\maingun.wss",10.000000,1};
		aiRateOfFire=0;
		aiRateOfFireDistance=0;
	};
	class M1Heat_xj200: Heat120 {
		displayName="M256 120mm HEAT";
		displayNameMagazine="M830 HEAT";
		shortNameMagazine="M830 120mm HEAT";
		ammo="M1Heat_xj200";
		count=35;
		initSpeed=1500;
		nameSound="shell";
		reloadTime=8;
		sound[]={"\TZK_Objects\Sound\maingun.wss",10.000000,1};
		aiRateOfFire=0;
		aiRateOfFireDistance=0;
	};
	class M1MG_xj200: MachineGun12_7 {
		magazines[]={"MachineGun12_7_xj200", "CoaxW_xj200"};
	};
	class M12Gun_xj200: M1Gun_xj200 {
	//	reloadSound[]={"Weapons\missload",0.5,1}; // Not to redefine reloadSound.
		magazines[]={"M12Sabot_xj200","M12Heat_xj200"};
	};
	class M12Sabot_xj200: M1Sabot_xj200 {
	//	ammo = "M12Sabot_xj200"; // Not to use redefined ammo which is only modified sounds.
		displayName="M829A3 APFSDS-T";
		displayNameMagazine="M829A3 APFSDS-T";
		shortNameMagazine="M829A3 APFSDS-T";
	//	sound[]={"\TZK_Objects\Sound\Gun120.wss",10,1};
	//	reloadSound[]={"Weapons\missload",0.0003162,1};
	};
	class M12Heat_xj200: M1Heat_xj200 {
	//	ammo = "M12Heat_xj200";
		displayName="M830A1 MPAT-T";
		displayNameMagazine="M830A1 MPAT-T";
		shortNameMagazine="M830A1 MPAT-T";
	//	sound[]={"\TZK_Objects\Sound\Gun120.wss",10,1};
	//	reloadSound[]={"Weapons\missload",0.0003162,1};
	};
	
	class T80Gun_xj200: Gun120 {
		displayName="2A46 120mm Smoothbore";
		reloadSound[]={"\TZK_Objects\Sound\gun2reload.wss",0.25,1};
		magazines[]={"T80Sabot_xj200","T80Heat_xj200","9K112_xj200","9K119_xj200"};
		aiRateOfFire=0;
		aiRateOfFireDistance=0;
		opticsZoomMin=0.27777;
		opticsZoomMax=0.08333;
	};
	class T80Sabot_xj200: Shell120 {
		displayName="2A46 120mm APFSDS";
		displayNameMagazine="BM-42M APFSDS";
		shortNameMagazine="BM-42M APFSDS";
		ammo="T80Sabot_xj200";
		count=35;
		initSpeed=1500;
		nameSound="heat";
		reloadTime=8;
		sound[]={"\TZK_Objects\Sound\125mm.wss",10.000000,1};
		aiRateOfFire=0;
		aiRateOfFireDistance=0;
	};
	class T80Heat_xj200: Heat120 {
		displayName="2A46 120mm HEAT";
		displayNameMagazine="BK-27 HEAT";
		shortNameMagazine="BK-27 HEAT";
		ammo="T80Heat_xj200";
		count=35;
		initSpeed=1500;
		nameSound="shell";
		reloadTime=8;
		sound[]={"\TZK_Objects\Sound\125mm.wss",10.000000,1};
		aiRateOfFire=0;
		aiRateOfFireDistance=0;
	};
	class 9K112_xj200: AT3Launcher {
	   	ammo="9M112_xj200";
		displayName="9K112 ATGM";
		displayNameMagazine="9K112";
		shortNameMagazine="9K112";
		initspeed=80;
		reloadtime=8;
		sound[]={"\ICP_t72s\sound\launch.ogg",12.727272,1};
		count=4;
		canLock=2;
		autoReload=1;
		aiRateOfFire=2;
		aiRateOfFireDistance=0;
	};
	
	class LeoGun_xj200: Gun120 {
		reloadSound[]={"\BWMOD_Leo2A6\snd\reload.wss",0.5,1};
		magazines[]={"LeoSabot_xj200","LeoHeat_xj200"};
		aiRateOfFire=0;
		aiRateOfFireDistance=0;
		opticsZoomMin=0.333333;
		opticsZoomMax=0.1;
	};
	class LeoSabot_xj200: Shell120 {
		displayname="DM63 APFSDS-T";
		displaynameMagazine="DM63 APFSDS-T";
		shortnameMagazine="DM63 APFSDS-T";
		ammo="LeoSabot_xj200";
		count=35;
		initSpeed=1750;
		nameSound="heat";
		reloadTime=8;
		sound[]={"\BWMOD_Leo2A6\snd\fire.wss",10,1};
		aiRateOfFire=0;
		aiRateOfFireDistance=0;
	};
	class LeoHeat_xj200: Heat120 {
		displayName="DM22 HE-MP-T";
		displayNameMagazine="DM22 HE-MP-T";
		shortNameMagazine="DM22 (HE)";
		ammo="LeoHeat_xj200";
		count=35;
		initSpeed=1750;
		nameSound="shell";
		reloadTime=8;
		sound[]={"\BWMOD_Leo2A6\snd\fire.wss",10,1};
		aiRateOfFire=0;
		aiRateOfFireDistance=0;
	};
	class LeoMG_xj200: MachineGun12_7 {
		scopeWeapon=2;
		scopeMagazine=2;
		displayName="MG3A1";
		dispersion=0.0005;
		reloadTime=0.065;
		initspeed=800;
		count=4750; 
		sound[]={"\TZK_Objects\Sound\mg3_fire.wss",3.1622777,1};
		soundContinuous=0;
	//	magazineReloadTime=5;
	};

	class PLAGun_xj200: Gun120 {
		displayName="Gun125";
		reloadSound[]={"\VME_tex\sound\aa1.wav",0.25,1};
		magazines[]={"PLASabot_xj200","PLAHeat_xj200","ATGM125_xj200"};
		aiRateOfFire=0;
		aiRateOfFireDistance=0;
		opticsZoomMin=0.27777;
		opticsZoomMax=0.08333;
	};
	class PLASabot_xj200: Shell120 {
		displayName="FSAPDS125";
		displayNameMagazine="FSAPDS125";
		shortNameMagazine="FSAPDS125";
		ammo="PLASabot_xj200";
		count=35;
		nameSound="heat";
		initSpeed=1500;
		reloadTime=8;
		sound[]={"\VME_tex\sound\fire2.wav",10,0};
		reloadSound[]={"\VME_tex\sound\aa1.wav",db-40,0};
		aiRateOfFire=0;
		aiRateOfFireDistance=0;
	};
	class PLAHeat_xj200: Heat120 {
		count=35;
		initSpeed=1500;
		ammo="PLAHeat_xj200";
		displayName="Heat125";
		displayNameMagazine="Heat125";
		shortNameMagazine="Heat125";
		nameSound="shell";
		reloadTime=8;
		sound[]={"\VME_tex\sound\fire2.wav",10,0};
		reloadSound[]={"\VME_tex\sound\aa1.wav",db-40,0};
		aiRateOfFire=0;
		aiRateOfFireDistance=0;
	};
	class ATGM125_xj200: AT3Launcher {
		ammo="PLA_ATGM125_xj200";
		model="\VME_ZTZ99\PSDD.P3D";
		displayName="ATGM125";
		displayNameMagazine="ATGM125";
		shortNameMagazine="ATGM125";
		count=4;
		reloadTime=8;
		reloadSound[]={"\VME_tex\sound\r.wav",db-40,0};
		sound[]={"\VME_tex\sound\tow1.wav",12.727272,1};
		
		initSpeed=400;
		aiRateOfFire=1.0;
		aiRateOfFireDistance=5000;
	};	
	class PLAMG_xj200: MachineGun12_7_xj200 {
		sound[]={"\TZK_Objects\Sound\jiqiang.wss",3.1622777,1};
	};
	
	class T90Gun_xj200: T80Gun_xj200 {
	//	reloadSound[]={"\ICP_t72s\sound\loader.wav",0.25,1};
		magazines[]={"T90Sabot_xj200","T90Heat_xj200","9K112_xj200","9K119_xj200"};
	};
	class T90Sabot_xj200: T80Sabot_xj200 {
		displayName="3BM42 APFSDS";
		displayNameMagazine="3BM42";
		shortNameMagazine="3BM42";
		sound[]={"\ICP_t72s\sound\125mm.wav",10.000000,1};
	};
 	class T90Heat_xj200: T80Heat_xj200 {
		displayName="3OF26 HE-FRAG";
		displayNameMagazine="3OF26";
		shortNameMagazine="3OF26";
		ffMagnitude=1;
		aiRateOfFire=0;
		aiRateOfFireDistance=0;
		sound[]={"\ICP_t72s\sound\125mm.wav",10.000000,1};
	};	
	class T90MG_xj200: MachineGun12_7 {
		magazines[]={"MachineGun12_7_xj200", "MachineGun7_6_xj200"};
	};	
	class 9K119_xj200: AT3Launcher {
	   	ammo="9M120_xj200";
		displayName="9K119 (9M120) ATGM";
		displayNameMagazine="9K119";
		shortNameMagazine="9K119";
		initspeed=80;
		reloadtime=8;
		sound[]={"\ICP_t72s\sound\launch.ogg",12.727272,1};
		count=4;
		canLock=2;
		autoReload=1;
		aiRateOfFire=2;
		aiRateOfFireDistance=0;
	};

	// BackUp for M1A2/T90 gun. The sound of fire, hit and reload about M1A2/T90 is not good thus plan to keep same with M1A1/T80. However players may wish to use old sounds defined in TZK_2.00, so it's necessary to remain a backuup define to make it possible to recover it in CTI mission scripts.
	class M12Gun_Backup_xj200: M1Gun_xj200 {
		reloadSound[]={"Weapons\missload",0.5,1};
		magazines[]={"M12Sabot_xj200","M12Heat_xj200"};
	};
	class M1A2Sabot_Backup_xj200: M1Sabot_xj200 {
		ammo = "M12Sabot_xj200";
		displayName="M829A3 APFSDS-T";
		displayNameMagazine="M829A3 APFSDS-T";
		shortNameMagazine="M829A3 APFSDS-T";
		sound[]={"\TZK_Objects\Sound\Gun120.wss",10,1};
		reloadSound[]={"Weapons\missload",0.0003162,1};
	};
	class M1A2Heat_Backup_xj200: M1Heat_xj200 {
		ammo = "M12Heat_xj200";
		displayName="M830A1 MPAT-T";
		displayNameMagazine="M830A1 MPAT-T";
		shortNameMagazine="M830A1 MPAT-T";
		sound[]={"\TZK_Objects\Sound\Gun120.wss",10,1};
		reloadSound[]={"Weapons\missload",0.0003162,1};
	};
	class T90Gun_Backup_xj200: Gun120 {
		displayName="2A46 120mm Smoothbore";
		reloadSound[]={"\ICP_t72s\sound\loader.wav",0.25,1};
		reloadTime=8;
		magazines[]={"T90Sabot_xj200","T90Heat_xj200","9K112_xj200","9K119_xj200"};
		aiRateOfFire=0;
		aiRateOfFireDistance=0;
		opticsZoomMin=0.27777;
		opticsZoomMax=0.08333;
	};
	class T90Sabot_Backup_xj200: T80Sabot_xj200 {
		displayName="3BM42 APFSDS";
		displayNameMagazine="3BM42";
		shortNameMagazine="3BM42";
		sound[]={"\ICP_t72s\sound\125mm.wav",10.000000,1};
	};
 	class T90Heat_Backup_xj200: T80Heat_xj200 {
		displayName="3OF26 HE-FRAG";
		displayNameMagazine="3OF26";
		shortNameMagazine="3OF26";
		ffMagnitude=1;
		aiRateOfFire=0;
		aiRateOfFireDistance=0;
		sound[]={"\ICP_t72s\sound\125mm.wav",10.000000,1};
	};	
	
	class CoaxW_xj200: MachineGun7_6 {
		ammo="CoaxW_xj200";
		displayName="M240 7.62mm Co-ax";
		displayNameMagazine="Co-ax";
		shortNameMagazine="7.62mm M240 Ammo";
		count=11400;
		reloadTime=0.075;
		sound[]={"\TZK_Objects\Sound\gun.wss",3.1622777,1};
		soundContinuous=0;
		initSpeed=1000;
		flash="gunfire";
		flashSize=0.900000;
		dispersion=0.00065;
		maxLeadSpeed=50;
		aiRateOfFire=0;
		aiRateOfFireDistance=0;
		autoFire=1;
		optics=1;
	};
	class CoaxE_xj200: MachineGun7_6 {
		ammo="CoaxE_xj200";
		displayName="PKT 7.62mm Coax";
		displayNameMagazine="PKT Coax";
		shortNameMagazine="PKT Coax";
		count=1000;
		reloadTime=0.075;
		sound[]={"\TZK_Objects\Sound\emg.wss",3.1622777,1};
		soundContinuous=0;
		initSpeed=1000;
		flctipc="gunfire";
		flctipcSize=0.900000;
		dispersion=0.00065;
		maxLeadSpeed=50;
		aiRateOfFire=0;
		aiRateOfFireDistance=0;
		autoFire=1;
		optics=1;
	};	
	class 50calW_xj200: MachineGun12_7 {
		ammo="50calW_xj200";
		displayName="M2 12.7mm MG";
		displayNameMagazine="M2 AA MG";
		shortNameMagazine="M2 AA MG";
		count=50;
		reloadTime=0.11;
		reloadSound[]={"",1,1};
		sound[]={"\TZK_Objects\Sound\mg.wss",4,1};
		reloadMagazineSound[]={"\TZK_Objects\Sound\mgreload.wss",0.3,1};
		soundContinuous=0;
		initSpeed=1300;
		flash="gunfire";
		flashSize=1.500000;
		dispersion=0.00125;
		maxLeadSpeed=50;
		aiRateOfFire=0;
		aiRateOfFireDistance=0;
		autoFire=1;
		optics=1;
		autoReload=1;
		magazineReloadTime=1;
	};
	class 50calE_xj200: MachineGun12_7 {
		ammo="50calE_xj200";
		displayName="NSVT 12.7mm MG";
		displayNameMagazine="NSVT AA MG";
		shortNameMagazine="NSVT AA MG";
		count=50;
		reloadTime=0.11;
		reloadSound[]={"",1,1};
		sound[]={"\TZK_Objects\Sound\nsvt.wss",4,1};
		reloadMagazineSound[]={"\TZK_Objects\Sound\nsvtreload.wss",0.3,1};
		soundContinuous=0;
		initSpeed=1300;
		flctipc="gunfire";
		flctipcSize=1.500000;
		dispersion=0.00125;
		maxLeadSpeed=50;
		aiRateOfFire=0;
		aiRateOfFireDistance=0;
		autoFire=1;
		optics=1;
		autoReload=1;
		magazineReloadTime=1
	};

	//M109 Paladin weapon from CoC_Arty
	class DKMM_Gun155HE_xj200: shell125 {
		model="\coc_arty\m109\heat155.p3d";
		sound[]={"\coc_arty\sounds\m109f_b.wss",15,1};
		reloadSound[]={"\SIG_MN\breech.wav",db-20,1};
		opticsZoomMin=0.2;
		opticsZoomMax=0.9;
		count=30;
		reloadTime=12;
//		reloadSound[]={"",1,1};
		initSpeed=827;
		flash="gunfire";
		flashSize=10.000000;
		thrustTime=1.000000;
		dispersion=0.00055;
		maxLeadSpeed=400;
		canLock=2;
		ammo="DKMM_HEAT155_xj200";
		autoFire=0;
		optics=1;
		aiRateOfFire=0.06;
		aiRateOfFireDistance=10000;
		displayName="155mm HE";
		displayNameMagazine="155mm HE";
		shortNameMagazine="HE";
		// position and direction of muzzle
		muzzlePos="usti hlavne";
		muzzleEnd="konec hlavne";
		// position and velocity of outgoing empty cartridge
		//cartridgePos="nabojnicestart";
		//cartridgeVel="nabojniceend";
	};
	class DKMM_Gun155AP_xj200: DKMM_Gun155HE_xj200 {
		ammo="DKMM_AP155_xj200";
		displayName="155mm AP";
		displayNameMagazine="155mm AP";
		shortNameMagazine="AP";
	};
	class Gun155_xj200: DKMM_Gun155HE_xj200 {
		magazines[]={"DKMM_Gun155AP_xj200","DKMM_Gun155HE_xj200"};
	};
	// 2S25 Sprut-SD Weapon from mfm_cit_sprut
	class Sprut_3VBM17_xj200: Heat125 {
		ammo="Sprut_3BM42_xj200";
		displayName="$STR_Sprut_3BM42";
		displayNameMagazine="$STR_Sprut_3BM42s";
		shortNameMagazine="$STR_Sprut_3BM42s";
		namesound="sabot";
		count=30;
		initSpeed=1800; //2000
		sound[]={"\mfm_cit_sprut\s\125mm_3p.wav",15,1};
		reloadTime=12;
		aiRateOfFire=0.06;
		aiRateOfFireDistance=10000;
	};
	class Sprut_3VBK25_xj200: Heat125 {
		ammo="Sprut_3OF26_xj200";
		displayName="$STR_Sprut_3VBK25";
		displayNameMagazine="$STR_Sprut_3VBK25s";
		shortNameMagazine="$STR_Sprut_3VBK25s";
		count=30;
		nameSound="heat";
		initSpeed=1500; //1500
		reloadTime=12;
		aiRateOfFire=0.06;
		aiRateOfFireDistance=10000;
        sound[]={"\mfm_cit_sprut\s\125mm_3p.wav",15,1};
	};
	class Sprut_2A75_xj200: Gun125 {
		reloadSound[]={"\mfm_cit_sprut\s\125mmreload.wav",0.1,0.9};
		reloadTime=12; //8
		magazines[]={"Sprut_3VBM17_xj200","Sprut_3VBK25_xj200"};
	};
	// PLZ05 Weapon from PLA3.5
	class PLA155HE_xj200: DKMM_Gun155HE_xj200 {
		 sound[]={"\TZK_Objects\Sound\plz89.wav",15,1};
		initSpeed=930;
	};
	class PLA155AP_xj200: DKMM_Gun155AP_xj200 {
		 sound[]={"\TZK_Objects\Sound\plz89.wav",15,1};
		initSpeed=930;
	};
	class PLA155Gun_xj200: PLA155HE_xj200 {
		magazines[]={"PLA155AP_xj200","PLA155HE_xj200"};
	};
	
		 
//EOF