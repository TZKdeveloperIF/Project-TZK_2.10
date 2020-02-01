//Ammos used mainly by soldiers.

	// Res, O.pbo, @xrofp
	class EUDEF_MP5SD6_xj200: Riffle {
		scopeWeapon = public;
		scopeMagazine = private;
		weaponType = 1;
		displayName = MP5SD6;
		model ="\EUDEF_MP5SD6\mp5.p3d";
		modelOptics="\EUDEF_MP5SD6\optik.p3d";
		picture="\EUDEF_MP5SD6\display.paa";
		drySound[]={"weapons\M16dry",db-40,1};
		reloadMagazineSound[]={"\EUDEF_MP5SD6\Reload.wav",db-40,1};
		magazines[]={EUDEF_MP5SD6_MAG_xj200};
		optics=true;
		opticsZoomMin=0.35;
		opticsZoomMax=0.35;
		modes[]={"Single","Three","FullAuto"};
		class Single
		{
			ammo= EUDEF_MP5SD6_MAGx_xj200;
			multiplier=1;
			burst=1;
			displayName="Semi MP5SD6";
			dispersion=0.003;
			sound[]={"\EUDEF_MP5SD6\Singleshot.wav",db0,1};
			soundContinuous=0;
			reloadTime=0.0857142;
			ffCount=1;
			recoil="sniperSingle";
			autoFire=0;
			aiRateOfFire=0.01;
			aiRateOfFireDistance=500;
			useAction=0;
			useActionTitle="";
		};
		class Three
		{
			ammo= EUDEF_MP5SD6_MAGx_xj200;
			multiplier=1;
			burst=3;
			displayName="Burst MP5SD6";
			dispersion=0.005;
			sound[]={"\EUDEF_MP5SD6\Burstshot.wav",db0,1};
			soundContinuous=0;
			reloadTime=0.0857142;
			ffCount=1;
			recoil="MgunBurst3";
			autoFire=0;
			aiRateOfFire=0.01;
			aiRateOfFireDistance=500;
			useAction=0;
			useActionTitle="";
		};
		class FullAuto
		{
			ammo=EUDEF_MP5SD6_MAGx_xj200;
			multiplier=1;
			burst=1;
			displayName="Auto MP5SD6";
			dispersion=0.005;
			sound[]={"\EUDEF_MP5SD6\Autoshot.wav",db0,1};
			soundContinuous=0;
			reloadTime=0.0857142;
			ffCount=1;
			recoil="sniperSingle";
			autoFire=1;
			aiRateOfFire=0.01;
			aiRateOfFireDistance=500;
			useAction=0;
			useActionTitle="";
		};

	};
	class EUDEF_MP5SD6_MAG_xj200: EUDEF_MP5SD6_xj200 {
		scopeWeapon = private;
		scopeMagazine = public;
		displayName= MP5SD6;
		displayNameMagazine = MP5SD6 Mag;
		shortNameMagazine = EUDEF_MP5SD6_MAG;
		picture="\dtaExt\equip\m\m_hk.paa";
	};
	class JahSG551_xj200: Riffle {
		scopeWeapon = public;
		scopeMagazine = public;
		model="\JahSG551\sg551_proxy.p3d";
		picture="\JahSG551\w_sg551.pac";
		modelOptics="\JahSG551\optika_sg551.p3d";
		displayName="SG551";
		drySound[]={"weapons\M16Dry",0.003162,1};
		magazines[]={"JahSG551mag_xj200"};
		opticsZoomMin=0.04;
		opticsZoomMax=0.12;
		distanceZoomMin=400;
		distanceZoomMax=80;
		flash="gunfire";
		flashSize=5;
		initSpeed=938;
		opticsFlare= true;
		modes[]= {"Single","Burst","Full"};
		class Single
		{
			ammo="JahSDSingleW_xj200";
			multiplier=1;
			burst=1;
			displayName="SG551";
			dispersion=0.0002000;
			sound[]={"\JahSG551\sg551fire.wav",1.000000,1};
			soundContinuous=0;
			ffCount=1;
			reloadTime=0.100000;
			recoil="riffleSilenced";
			autofire=0;
			aiRateOfFire=5.0000;
			aiRateOfFireDistance = 200;
			UseAction=0;
			useActionTitle="";
		};
		class Burst
		{
			ammo="JahSDBurstW_xj200";
			multiplier=1;
			burst=3;
			displayName="SG551 Burst";
			dispersion=0.0002000;
			sound[]={"\JahSG551\sg551fireb.wav",1.000000,1};
			soundContinuous=0;
			reloadTime=0.100000;
			ffCount=3;
			recoil=riffleSilenced;
			autoFire=0;
			aiRateOfFire=5.0000;
			aiRateOfFireDistance=200;
			useAction= 0;
			useActionTitle="";
		};
		class Full
		{
			ammo="JahSDBurstW_xj200";
			multiplier= 1;
			burst= 1;
			displayName= "SG551 Full Auto";
			dispersion=0.0008000;
			sound[]={"\JahSG551\sg551fire.wav",1.000000,1};
			soundContinuous=0;
			reloadTime=0.100000;
			ffCount=3;
			recoil="riffleSilenced";
			autoFire=1;
			aiRateOfFire=5.00000;
			aiRateOfFireDistance=200;
			useAction = 0;
			useActionTitle="";
		};
	};
	class JahSG551mag_xj200: JahSG551_xj200 {
		scopeWeapon=public;
		scopeMagazine=2;
		displayNameMagazine="SG551 Mag";
		shortNameMagazine="SG551";
		picture="\JahSG551\m_sg551.pac";
	};
	class KEGAK107Base_xj200: Riffle {
		scopeWeapon=2;
		scopeMagazine=2;
		model="\KEGak107\KEGak107";
		modelOptics="\KEGak107\KEGak107_sight";
		optics=1;
		opticsZoomMin=0.280000;
		opticsZoomMax=0.280000;
		displayName="AK107";
		displayNameMagazine="AK107 Mag.";
		shortNameMagazine="AK107";
		drySound[]={"weapons\AK74Dry",1.000000,1};
		modes[]={"Single","Burst","FullAuto"};
		magazines[]={"KEGAK107Mag_xj200"};

		class Single
		{
			ammo="KEGAK107Bullet_xj200";
			multiplier=1;
			burst=1;
			displayName="AK107";
			dispersion=0.000110;
			sound[]={"\KEGak107\single.wav",1.000000,1.00};
			soundContinuous=0;
			reloadTime=0.100000;
			ffCount=1;
			recoil="riffleSingle";
			autoFire=0;
			aiRateOfFire=5.000000;
			aiRateOfFireDistance=500;
			useAction=0;
			useActionTitle="";
		};
		class Burst
		{
			ammo="KEGAK107Bullet_xj200";
			multiplier=1;
			burst=3;
			displayName="AK107 Burst";
			dispersion=0.000875;
			sound[]={"\KEGak107\burst.wav",1.000000,1.00};
			soundContinuous=0;
			reloadTime=0.0700;
			ffCount=3;
			recoil="KEGriffleBalanced";
			autoFire=0;
			aiRateOfFire=5.000000;
			aiRateOfFireDistance=500;
			useAction=0;
			useActionTitle="";
		};
		class FullAuto
		{
			ammo="KEGAK107Bullet_xj200";
			multiplier=1;
			burst=1;
			displayName="AK107 Full Auto";
			dispersion=0.001800;
			sound[]={"\KEGak107\single.wav",1.000000,1.00};

			soundContinuous=0;
			reloadTime=0.0667;
			ffCount=30;
			recoil="KEGriffleBalanced";
			autoFire=1;
			aiRateOfFire=5.000000;
			aiRateOfFireDistance=500;
			useAction=0;
			useActionTitle="";
		};
	};
	class KEGAK107_xj200: KEGAK107Base_xj200 {
		picture="\KEGak107\gear1.paa";
		scopeWeapon=2;
		scopeMagazine=0;
	};
	class KEGAK107Mag_xj200: KEGAK107Base_xj200 {
		picture="\KEGak107\gear2.paa";
		scopeWeapon=0;
		scopeMagazine=2;
	};
	class KSVK_xj200: SniperRiffle {
		scopeWeapon=2;
		scopeMagazine=0;
		weaponType=1;
		model="\KSVK\KSVK.p3d";

		displayName="KSVK 12.7";
		picture="\KSVK\images\KSVK.paa";
		sound[]={\KSVK\sound\ksvksingle.wav,1,1};
        drySound[]={"weapons\AK74Dry",1.000000,1};

		optics = true;
		modelOptics="\KSVK\scope\KSVKscope.p3d";
		///flashSize=2.500000;

		opticsZoomMin=0.02;
		opticsZoomMax=0.1;
		distanceZoomMin=400;
		distanceZoomMax=400;

		ammo=KSVK_xj200;
		count=5;
		initSpeed=870;
		multiplier=1;
		division=1;
		burst=1;
		dispersion=0.0007;
		maxLeadSpeed=870;

		soundContinuous=0;
		reloadTime=1.7;
		magazineReloadTime=2.5;
		magazines[]={KSVKmag_xj200};
		recoil=KSVK_xj200;
		autoFire=0;
		autoReload=0;

		aiRateOfFire=2.0;
		aiRateOfFireDistance=1700;
		aiDispersionCoefX=0.000009;
		aiDispersionCoefY=0.000007;
		threat[]={1,0.5,0.1};
		enableAttack=1;

		useAction=0;
		useActionTitle="";
	};
	class KSVKmag_xj200: KSVK_xj200 {
		displayNameMagazine = KSVKmag;
		shortNameMagazine = KSVKmag;
		picture="\KSVK\images\KSVKMag.paa";
		scopeWeapon=0;
		scopeMagazine=2;
	};
	class mVSS_xj200: SVDDragunov {
		scopeWeapon=2;
		scopeMagazine=2;
		model="\mVSS\mVSS";
		picture="\mVSS\vss.jpg";
		modelOptics="\mVSS\optika";
		optics = true;
		opticsZoomMin=0.080000;
		opticsZoomMax=0.080000;
		distanceZoomMin=400;
		distanceZoomMax=400;
		flashSize=0;
		count=20;
		displayName="VSS";
		displayNameMagazine="VSS mag";
		shortNameMagazine="VSS mag";
		initSpeed=938;
		drySound[]={"weapons\AK74Dry",0.003162,1};
		magazines[]={"mVSSmag_xj200"};
		modes[]={"Single","Fullauto"};
		class Single
		{
			ammo="sp6_xj200";
			multiplier=1;
			burst=1;
			displayName="VSS";
			dispersion=0.0020000000;
			sound[]={"\mVSS\vss.wav",0.000316,1};
			soundContinuous=0;
			reloadTime=0.100000;
			ffCount=1;
			recoil="riffleSilenced";
			autoFire=0;
			aiRateOfFire=5.000000;
			aiRateOfFireDistance=50;
			useAction=0;
			useActionTitle="";
		};
		class FullAuto
		{
			ammo="sp6_xj200";
			multiplier=1;
			burst=1;
			dispersion=0.004000001;
			displayName="VSS Auto";
			sound[]={"\mVSS\vss.wav",0.000316,1};
			soundContinuous=0;
			reloadTime=0.100000;
			ffCount=30;
			recoil="riffleBurst3";
			autoFire=1;
			aiRateOfFire=5.000000;
			aiRateOfFireDistance=100;
			useAction=0;
			useActionTitle="";
		};
	};
	class mVSSmag_xj200: mVSS_xj200 {
		scopeWeapon=0;
		scopeMagazine=2;
		displayNameMagazine="VSS mag";
		shortNameMagazine="VSS mag";
		picture="\mVSS\vssmag.jpg";
	};
	class RFSVUa_xj200:SVDDragunov {
		modelOptics="\RFSVUa\optika.p3d";
		picture="\RFSVUa\SVU.jpg";
		model="\RFSVUa\RFSVUa.p3d";
		drySound[]={"weapons\AK74Dry",1.000000,1};
		reloadMagazineSound[]={"\RFSVUa\reload.wav",2.000000,1};
		displayName="SVU-A";
		displayNameMagazine="SVUa Mag";
		shortNameMagazine="SVUa";
		modes[]={"Single","FullAuto"};
		magazines[]={"RFSVUAmag_xj200"};

		class Single
		{
			ammo="BulletSniperE";
			multiplier=1;
			burst=1;
			displayName="SVU-A";
			dispersion=0.000110;
			sound[]={\RFSVUa\single.wav,1,1};
			soundContinuous=0;
			reloadTime=0.130000;
			ffCount=1;
			recoil="riffleSingle";
			autoFire=0;
			aiRateOfFire=5.000000;
			aiRateOfFireDistance=500;
			useAction=0;
			useActionTitle="";
		};
		class FullAuto
		{
			ammo="BulletSniperE";
			multiplier=1;
			burst=1;
			displayName="SVU-A Full Auto";
			dispersion=0.000800;
			sound[]={\RFSVUa\single.wav,1,1};
			soundContinuous=0;
			reloadTime=0.100000;
			ffCount=30;
			recoil="riffleBurst3";
			autoFire=1;
			aiRateOfFire=5.000000;
			aiRateOfFireDistance=500;
			useAction=0;
			useActionTitle="";
		};
	};
	class RFSVUAmag_xj200: RFSVUa_xj200 {
		picture="\RFSVUa\svumag.jpg";
		scopeWeapon=0;
		scopeMagazine=2;
		count=20;
	};
	class VNgroza1sscope_xj200: Riffle {
		scopeWeapon=2;
		scopeMagazine=2;
		model="\VNGroza\grozasscope.p3d";
		modelOptics="\VNGroza\Scope\scope.p3d";
		optics=1;
		opticsZoomMin=0.250000;
		drySound[]={"\Sound\weapons\M16dry.wss",0.010000,1};
		picture="\VNGroza\Kuvat\w_grozasscope.paa";
		opticsZoomMax=0.250000;
		displayName="Groza-1 SD + scope";
		displayNameMagazine="Groza-1 SD Mag.";
		shortNameMagazine="Groza1SDmag";
		modes[]={"Single","Burst","FullAuto"};
		magazines[]={"VNgroza1sMag_xj200"};
		class Single
		{
			ammo="Groza1SDammo_xj200";
			multiplier=1;
			burst=1;
			displayName="Groza-1 SD";
			dispersion=0.002800;
			sound[]={"\VNGroza\Sounds\grozas.wav",0.050000,1};
			soundContinuous=0;
			reloadTime=0.100000;
			ffCount=1;
			recoil="riffleSingle";
			autoFire=0;
			aiRateOfFire=5.000000;
			aiRateOfFireDistance=500;
			useAction=0;
			useActionTitle="";
		};
		class Burst
		{
			ammo="Groza1SDammo_xj200";
			multiplier=1;
			burst=3;
			displayName="Groza-1 SD Burst";
			dispersion=0.00340;
			sound[]={"\VNGroza\Sounds\grozasb.wav",0.050000,1};
			soundContinuous=0;
			reloadTime=0.100000;
			ffCount=3;
			recoil="riffleBurst3";
			autoFire=0;
			aiRateOfFire=5.000000;
			aiRateOfFireDistance=500;
			useAction=0;
			useActionTitle="";
		};
		class FullAuto
		{
			ammo="Groza1SDammo_xj200";
			multiplier=1;
			burst=1;
			displayName="Groza-1 SD Auto";
			dispersion=0.0051000;
			sound[]={"\VNGroza\Sounds\grozas.wav",0.050000,1};
			soundContinuous=0;
			reloadTime=0.100000;
			ffCount=30;
			recoil="riffleBurst3";
			autoFire=1;
			aiRateOfFire=5.000000;
			aiRateOfFireDistance=500;
			useAction=0;
			useActionTitle="";
		};
	};
	class VNgroza1sMag_xj200: VNgroza1sscope_xj200 {
		picture="\VNGroza\Kuvat\m_groza.paa";
		model="\VNGroza\grozas.p3d";
		modelOptics="\data3d\optika_m16.p3d";
		opticsZoomMin=0.350000;
		opticsZoomMax=0.350000;
		displayName="Groza-1 SD";
	};
	class 6G30Base_xj200: GrenadeLauncher {
		scopeWeapon = 1;
		scopeMagazine = 1;
		weaponType = "1 + 	16";
		magazineType = "4 * 			256";
		displayName = $STR_DN_6G30;
		displayNameMagazine = $STR_MN_6G30;
		shortNameMagazine = $STR_SN_6G30;
		count = 6;
		reloadTime = 0.5;
		magazineReloadTime = 12;
		model = "\6g30\6g30";
		modelOptics = "\6g30\optika_6g30";
		picture = "\6g30\6g30.paa";
		revolving = buben;
		revolvingAxis = osa_buben;
	};
	class 6G30Magazine_xj200: 6G30Base_xj200 {
		scopeMagazine = 2;
		picture = "\6g30\m_6g30.paa";
	};
	class 6G30_xj200: 6G30Base_xj200 {
		scopeWeapon = 2;
		magazines[]={6G30Magazine_xj200};
	};
	class BizonBase_xj200: Riffle {
		scopeWeapon = 1;
		scopeMagazine = 1;
		model = "\Bizon\Bizon";
		modelOptics = "\Bizon\optika_Bizon";
		picture = "\bizon\w_bizon.paa";
		count = 64;
		optics = 1;
		opticsZoomMin = 0.35;
		opticsZoomMax = 0.35;
		distanceZoomMin = 300;
		distanceZoomMax = 300;
		displayName = $STR_DN_ADD_BIZON;
		displayNameMagazine = $STR_DN_ADD_BIZON_MAG;
		shortNameMagazine = $STR_DN_ADD_BIZON;
		drySound[] = {"weapons\M16dry",0.00316228,1};
		modes[] = {Single,Fullauto};
		class Single
		{
			ammo = Bizon_Bullet_xj200;
			multiplier = 1;
			burst = 1;
			displayName = $STR_DN_ADD_BIZON;
			dispersion = 0.01;
			sound[] = {"\Bizon\bizon",0.000316228,1};
			soundContinuous = 0;
			reloadTime = 0.1;
			ffCount = 1;
			recoil = riffleSilenced;
			autoFire = 0;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 500;
			useAction = 0;
			useActionTitle = "";
		};
		class FullAuto
		{
			ammo = Bizon_Bullet_xj200;
			multiplier = 1;
			burst = 1;
			displayName = $STR_DN_ADD_BIZON_AUTO;
			dispersion = 0.015;
			sound[] = {"\Bizon\bizon",0.000316228,1};
			soundContinuous = 0;
			reloadTime = 0.07;
			ffCount = 1;
			recoil = riffleSilenced;
			autoFire = 1;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 500;
			useAction = 0;
			useActionTitle = "";
		};
	};
	class BizonMag_xj200: BizonBase_xj200 {
		scopeMagazine = 2;
		picture = "\Bizon\m_bizon.paa";
	};
	class Bizon_xj200: BizonBase_xj200 {
		scopeWeapon = 2;
		magazines[]={BizonMag_xj200};
	};
	class G36aBase_xj200: Riffle {
		scopeWeapon = 2;
		scopeMagazine = 2;
		model = "\G36A\G36";
		modelOptics = "\G36A\G36_optics";
		picture = "\G36A\w_g36.paa";
		optics = 1;
		opticsZoomMin = 0.28;
		opticsZoomMax = 0.28;
		distanceZoomMin = 300;
		distanceZoomMax = 300;
		displayName = $STR_DN_ADD_G36;
		displayNameMagazine = $STR_DN_ADD_G36_AMMO;
		shortNameMagazine = $STR_DN_ADD_G36_AMMO;
		drySound[] = {"weapons\M16dry",0.00316228,1};
		magazines[]={G36a_xj200};
		modes[] = {Single,Burst,Fullauto};
		class Single
		{
			ammo = G36a_Bullet_xj200;
			multiplier = 1;
			burst = 1;
			displayName = $STR_DN_ADD_G36;
			dispersion = 0.0002;
			sound[] = {"\G36A\g36a.wss",1,1};
			soundContinuous = 0;
			reloadTime = 0.1;
			ffCount = 1;
			recoil = riffleSingle;
			autoFire = 0;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 500;
			useAction = 0;
			useActionTitle = "";
		};
		class Burst
		{
			ammo = G36a_Bullet_xj200;
			multiplier = 1;
			burst = 3;
			displayName = $STR_DN_ADD_G36_BURST;
			dispersion = 0.001;
			sound[] = {"\G36A\g36a_burst",1,1};
			soundContinuous = 0;
			reloadTime = 0.1;
			ffCount = 3;
			recoil = riffleBurst3;
			autoFire = 0;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 500;
			useAction = 0;
			useActionTitle = "";
		};
		class FullAuto
		{
			ammo = G36a_Bullet_xj200;
			multiplier = 1;
			burst = 1;
			displayName = "G36 Auto";
			dispersion = 0.0003;
			sound[] = {"\G36A\g36a_full",1,1};
			soundContinuous = 0;
			reloadTime = 0.07;
			ffCount = 1;
			recoil = riffleBurst3;
			autoFire = 1;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 500;
			useAction = 0;
			useActionTitle = "";
		};
	};
	class G36aMag_xj200: G36aBase_xj200 {
		scopeMagazine = 2;
		picture = "\G36a\m_G36.paa";
	};
	class G36a_xj200: G36aBase_xj200 {
		scopeWeapon = 2;
		magazines[]={G36aMag_xj200};
	};
	class Mm1Base_xj200: GrenadeLauncher {
		scopeWeapon = 1;
		scopeMagazine = 1;
		weaponType = "1 + 	16";
		magazineType = "8 * 			256";
		displayName = $STR_DN_MM1;
		displayNameMagazine = $STR_DN_MM1_MAG;
		shortNameMagazine = $STR_DN_MM1;
		count = 12;
		reloadTime = 0.5;
		magazineReloadTime = 12;
		model = "\MM-1\MM-1";
		modelOptics = "\MM-1\optika_MM-1";
		picture = "\MM-1\mm-1.paa";
		revolving = buben;
		revolvingAxis = osa_buben;
	};
	class MM1Magazine_xj200: Mm1Base_xj200 {
		scopeMagazine = 2;
		picture = "\MM-1\m_mm1.paa";
	};
	class MM1_xj200: Mm1Base_xj200 {
		scopeWeapon = 2;
		magazines[]={MM1Magazine_xj200};
	};
	class SteyrBase_xj200: Riffle {
		scopeWeapon = 1;
		scopeMagazine = 1;
		model = "\steyr\steyr";
		modelOptics = "\steyr\optika_steyr";
		picture = "\Steyr\w_steyr.paa";
		optics = 1;
		opticsZoomMin = 0.28;
		opticsZoomMax = 0.28;
		distanceZoomMin = 300;
		distanceZoomMax = 300;
		displayName = $STR_DN_ADD_STEYR;
		displayNameMagazine = $STR_DN_ADD_STEYR_AMMO;
		shortNameMagazine = $STR_DN_ADD_STEYR_AMMO_SHORT;
		drySound[] = {"weapons\M16dry",0.00316228,1};
		modes[] = {Single,Fullauto};
		class Single
		{
			ammo = Steyr_Bullet_xj200;
			multiplier = 1;
			burst = 1;
			displayName = $STR_DN_ADD_STEYR;
			dispersion = 0.0002;
			sound[] = {"\Steyr\Steyr",1,1};
			soundContinuous = 0;
			reloadTime = 0.1;
			ffCount = 1;
			recoil = riffleSingle;
			autoFire = 0;
			aiRateOfFire = 2.5;
			aiRateOfFireDistance = 500;
			useAction = 0;
			useActionTitle = "";
		};
		class FullAuto
		{
			ammo = Steyr_Bullet_xj200;
			multiplier = 1;
			burst = 1;
			displayName = $STR_DN_ADD_STEYR_AUTO;
			dispersion = 0.0003;
			sound[] = {"\Steyr\Steyr",1,1};
			soundContinuous = 0;
			reloadTime = 0.07;
			ffCount = 1;
			recoil = riffleBurst3;
			recoilFixed = riffleSingleFixed;
			autoFire = 1;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 500;
			useAction = 0;
			useActionTitle = "";
		};
	};
	class SteyrMag_xj200: SteyrBase_xj200 {
		scopeMagazine = 2;
		picture = "\Steyr\m_steyr.paa";
	};
	class Steyr_xj200: SteyrBase_xj200 {
		scopeWeapon = 2;
		magazines[]={SteyrMag_xj200};
	};

	// LSR, JAM, c8x, ICP
	//M240, PKM
	class LSR_M240_xj200: MachineGun7_6Manual {
		displayName="M240B";
		weaponType="1 + 16";
		model="\LSR_uswp\m240\LSR_m240.p3d";
		picture="\LSR_uswp\weapics\w_m240.paa";
		scopeWeapon = 2;
		scopeMagazine = 2;
		modelOptics="\LSR_uswp\opt\opt_m240.p3d";
		optics = true;
		opticsFlare=1;
		opticsZoomMin=0.35;
		opticsZoomMax=0.35;
		distanceZoomMin=300;
		distanceZoomMax=300;
		displayNameMagazine="7.62x51 100 rd. box";
		shortNameMagazine="7.62x51 100 rd. box";
		reloadSound[] = {"\LSR_uswp\sounds\m240belt.wss",0.010316,1};
		backgroundReload=1;
		reloadMagazineSound[]={"\LSR_uswp\sounds\m249reload.wav",0.010316,1};
		count=100;
		uipicture="\LSR_uswp\uipics\ismg.paa";
		magazines[]={"LSR_M240Mag_xj200"};

		modes[] = {"Fullauto"};
		class Fullauto
		{
			ammo=LSR_m240_Bullet_xj200;
			multiplier=1;
			burst=1;
			displayName="7,62x51";
			sound[]={"\LSR_uswp\sounds\M240Fire.wss",db7,1};
			soundContinuous=0;
			reloadTime = 0.070500;
			ffCount=6;
			ffMagnitude=0.500000;
			ffFrequency=11;
			dispersion=0.002500;
			aiDispersionCoefX=5.000000;// dispersion used to simulate horizontal burst
			maxLeadSpeed=300;
			recoil="LSR_m249_750Recoil_xj200";
			autoFire = true;
			useAction= false;
			useActionTitle="";
			aiRateOfFire = 0.075000;
			aiRateOfFireDistance=1000;
		};
	};
	class LSR_M240Mag_xj200 : LSR_M240_xj200 {
		picture="\LSR_uswp\weapics\m_m240.paa";
		magazineType="2 * 256";
	};
    class ICP_PKMMag : MachineGun7_6Manual {};
	class PKM_Mag_xj200 : ICP_PKMMag {
		ammo="PKM_AMMO_xj200";
	};
	class PKM_xj200 : PKM_Mag_xj200 {
		scopeWeapon = public;
		scopeMagazine = private;
		weaponType="1	 + 	16";
		displayName = "PKM";
		picture="\ICP_rfwp\weapics\w_pkm.paa";
		model="\icp_rfwp\icp_pkm.p3d";
		magazines[]={"PKM_Mag_xj200"};
		drySound[]={"weapons\AK74dry",db-40,1};
		reloadMagazineSound[]={"\ICP_rfwp\Sounds\pkreload.wss",0.05,1};
		modelOptics="\ICP_rfwp\pkm_opt.p3d";
		optics = true;
		opticsZoomMin=0.350000;
		opticsZoomMax=0.350000;
		distanceZoomMin=400;
		distanceZoomMax=400;
		uiPicture="ismg";
		canDrop = true;
	};
	//M24, SVDS
	class M24_xj200: M21 {
		displayName = "M24 SWS";
		scopeWeapon = 2;
		scopeMagazine = 0;
		model = "\LSR_uswp\M24\LSR_m24.p3d";
		modelOptics = "\LSR_uswp\Opt\opt_m24.p3d";
		picture = "\LSR_uswp\weapics\w_m24.paa";
		optics = 1;
		opticsZoomMin = 0.07;
		opticsZoomMax = 0.07;
		initspeed = 950;
		maxLeadSpeed = 50;
		uipicture="\LSR_uswp\uipics\isniper.paa";
		drySound[]={"weapons\m16dry",db-70,1};
		reloadSound[] = {"\LSR_uswp\sounds\m24boltload.wss",0.010316,1};
		backgroundReload=1;
		reloadMagazineSound[] = {"\LSR_uswp\sounds\m24reload.wss",0.010316,1};
		magazines[]={"M24Mag_xj200"};
		count = 5;
		modes[] =  {"Single"};
		class Single
		{
			ammo = "M24Bullet_xj200";
			multiplier = 1;
			burst = 1;
			displayName = "7.62x51 Match";
			soundContinuous =  0;
			sound[] = {"\LSR_uswp\sounds\M24Fire.wss",db+10,1};
			ffCount = 1;
			dispersion = 0.00003;
			reloadTime = 1.100000;
			autofire = 0;
			aiRateOfFire = 5.0000;
			aiRateOfFireDistance = 500;
			UseAction = 0;
			useActionTitle = "";
			recoil = sniperSingle;
		};
		canDrop = 1;
	};
	class M24Mag_xj200: M24_xj200 {
		displayNameMagazine = "7.62x51 5 rd. Clip";
		shortNameMagazine = "7.62x51 5 rd. Clip";
		picture = "\LSR_uswp\weapics\m_M24.paa";
		scopeWeapon = 0;
		scopeMagazine = 2;
		canDrop = 1;
	};
	class ICP_SVD: SVDDragunov {};
	class ICP_SVDS: ICP_svd	{};
	class SVDS_xj200 : ICP_SVDS {
		modes[]={"Single"};
		magazines[]={"SVDSMag_xj200"};
		class Single
		{
			ammo="SVDSBullet_xj200";
			multiplier=1;
			burst=1;
			displayName="7.62x54R";
			dispersion=0.00002;
			sound[]={"\ICP_rfwp\sounds\svdfire.wss",1.000000,1.00};
			soundContinuous=0;
			reloadTime=0.400000;
			ffCount=1;
			recoil="sniperSingle";
			recoilFixed="sniperSingle";
			autoFire=0;
			aiRateOfFire=3.000000;
			aiRateOfFireDistance=500;
			useAction=0;
			useActionTitle="";
		};
	};
	class SVDSMag_xj200: SVDS_xj200 {
		picture="\ICP_rfwp\weapics\m_svd.paa";
		scopeWeapon=0;
		scopeMagazine=2;
	};
	//M16A4_M203, AK74M_GP25
	class JAM_M433grenade_xj200: grenadelauncher {
		cursor="t_select.paa";
		scopeMagazine=2;
		weaponType=0;
		magazineType="256";
		ammo=JAM_West_M433_Grenade_xj200;
		picture="\JAM_Magazines\pics\JAM_M433HEDP.paa";
		displayName="M433 HEDP Grenade";
		displayNameMagazine="M433 HEDP";
		shortNameMagazine="M433 HEDP";
		count=1;
		initSpeed=85;
		reloadTime=0;
		sound[]={"\JAM_Sounds\sounds\GP30_Fire.wss",0.000316,1};
		reloadMagazineSound[]={"\JAM_Sounds\sounds\M203reload.ogg",0.010316,1};
		canDrop = true;
	};
	class M433Vest_xj200: JAM_M433grenade_xj200 {
		scopeMagazine=2;
		weaponType=0;
		magazineType = 6 * 256;
		reloadTime=5;
		ammo="Grenade";
		drySound[]={"weapons\M16dry",db-40,1};
		picture="\JAM_Magazines\pics\JAM_40mmvest.paa";
		sound[]={"\JAM_Sounds\sounds\M203_FireVest.wss",0.000316,1};
		reloadSound[]={,1,1};
		initSpeed=85;
		reloadMagazineSound[]={,1,1};
		displayName="M433 HEDP Vest";
		displayNameMagazine="M433 HEDP Vest";
		shortNameMagazine="M433 HEDP Vest";
		count=24;
		canDrop = true;
	};
	class LSR_m16Base: Riffle {
		scopeWeapon=2;
		scopeMagazine=2;
		model="\LSR_uswp\m16\LSR_m16a2.p3d";
		modelOptics="\LSR_uswp\opt\opt_m16.p3d";
		reloadMagazineSound[]={"\LSR_uswp\sounds\M16reload.wss",0.010316,1};
		drySound[]={"weapons\M16dry",db-40,1};
		optics=1;
		opticsZoomMin=0.350;
		opticsZoomMax=0.350;
		opticsFlare = true;
		displayName="M16A2";
		uipicture="\LSR_uswp\uipics\ivojak.paa";
		modes[]={"Single","Burst"};
		magazines[]={"LSR_m16mag_xj200","M16"};
	};
	class LSR_m16mag_xj200: LSR_m16Base {
		scopeWeapon=0;
		scopeMagazine=2;
		picture="\lsr_uswp\weapics\m_ar15.paa";
		count=30;
		initSpeed=874;
		displayNameMagazine = "5.56x45 30 rd. Mag";
		shortNameMagazine = "5.56x45 30 rd. Mag";
		reloadMagazineSound[]={"\LSR_uswp\sounds\M16reload.wss",db-50,1};
		modes[] = {Single, Burst};
		class Single
		{
			ammo = lsr_m16_single_bullet_xj200;
			multiplier=1;
			burst=1;
			displayName="5.56x45 Semi";
			dispersion=0.0002;
			sound[]={"\LSR_uswp\sounds\M16single.wss",db0,1};
			soundContinuous=0;
			reloadTime=0.075;
			ffCount=1;
			recoil=LSR_m16Recoil_xj200;
			autoFire = 0;
			aiRateOfFire=0.50000; // delay between shots at given distance
			aiRateOfFireDistance=500; // at shorter distance delay goes lineary to zero
			useAction = false;
			useActionTitle = "";
		};
		class Burst
		{
			ammo = lsr_m16_burst_bullet_xj200;
			multiplier=1;
			burst=3;
			displayName="5.56x45 Burst";
			dispersion=0.0004;
			sound[]={"\LSR_uswp\sounds\M16Burst.wss",db0,1};
			soundContinuous=0;
			reloadTime=0.075;
			ffCount=3;
			recoil=LSR_m16BurstRecoil_xj200;
			autoFire = 0;
			aiRateOfFire=0.02000; // delay between shots at given distance
			aiRateOfFireDistance=500; // at shorter distance delay goes lineary to zero
			useAction = false;
			useActionTitle = "";
		};
	};
	class LSR_m16a4_xj200: LSR_m16Base {
		scopeWeapon=2;
		scopeMagazine=0;
		uipicture="\LSR_uswp\uipics\ivojak.paa";
		model="\LSR_uswp\m16\LSR_m16a4.p3d";
		picture="\LSR_uswp\weapics\w_m16a4.paa";
		displayName="M16A4";
	};
	class M16A4_M203_xj200: GrenadeLauncher {
		scopeWeapon = public;
		scopeMagazine = private;
		reloadMagazineSound[]={"\LSR_uswp\sounds\M16reload.wss",0.010316,1};
		drySound[]={"weapons\M16dry",db-40,1};
		picture="\LSR_uswp\weapics\w_m16a4_m203.paa";
		weaponType = 1;
		displayName = "M16A4 /M203";
		model="\LSR_uswp\m16\lsr_m16a4_m203.p3d";
		uipicture="\LSR_uswp\uipics\igrenadier.paa";
		muzzles[] = {M16Muzzle, M203Muzzle};
		class M16Muzzle : LSR_m16a4_xj200
		{
			magazines[]={"LSR_m16mag_xj200","M16"};
		};
		class M203Muzzle : GrenadeLauncher
		{
			displayName="M203";
			modelOptics="\LSR_uswp\opt\opt_m203.p3d";
			optics = 1;
			opticsZoomMin=0.40;
			opticsZoomMax=0.40;
			reloadMagazineSound[]={"\LSR_uswp\sounds\M203_reload.wss",0.010316,1};
			drySound[]={"weapons\M16dry",db-40,1};
			magazines[]={GrenadeLauncher,Flare,FlareGreen,FlareRed,FlareYellow,JAM_M433grenade_xj200, M433Vest_xj200};
		};
		canDrop = true;
	};
	class c8xgp25grenade_xj200: grenadelauncher {
		cursor="t_select.paa";
		scopeMagazine=2;
		weaponType=0;
		magazineType="256";
		ammo=c8x_gp25gl_grenade_xj200;
		picture="\c8xmag\pics\gp25grenade.paa";
		displayName="GP25 Grenade Launcher";
		displayNameMagazine="GP25 Grenade";
		shortNameMagazine="GP25 Grenade";
		sound[]={"\c8xmag\sounds\east_g_fire.wss",1.000000,1};
		reloadMagazineSound[]={"\c8xmag\sounds\east_g_reload.wss",0.010316,1};
		count=1;
		initSpeed=85;
		reloadTime=0;
		canDrop = true;
	};
	class GP25Vest_xj200: c8xgp25grenade_xj200 {
		scopeMagazine=2;
		weaponType=0;
		magazineType = 6 * 256;
		ammo=c8x_gp25gl_grenade_xj200;
		picture="\c8xmag\pics\vogvest.paa";
		sound[]={"\c8xmag\sounds\east_g_fire.wss",1.000000,1};
		reloadSound[]={"\c8xmag\sounds\east_gvest_reload.wss",0.010316,1};
		reloadMagazineSound[]={"\c8xmag\sounds\east_gvest_reload.wss",0.010316,1};
		displayName="GP25 Grenade Launcher";
		displayNameMagazine="GP25 Vest";
		shortNameMagazine="GP25 Vest";
		count=24;
		initSpeed=85;
		reloadTime=5;
		canDrop = true;
	};
	class C8XAK74MAG_xj200: AK74 {
		scopeWeapon=0;
		scopeMagazine=2;
		displayNameMagazine = "AK74m Mag";
		shortNameMagazine = "AK74m Mag";
		picture="\c8xmag\pics\ak74Mag.paa";
		count=30;
		initSpeed=899
		reloadMagazineSound[]={"weapons\m16load",db-70,1};
		modes[]={"Single","FullAuto"};
		class Single
		{
			ammo = c8x_ak74m_Single_Bullet_xj200;
			multiplier = 1;
			burst=1;
			displayName = "AK74m Semi";
			dispersion=0.00027075;
			sound[]={"\c8xmag\sounds\AK74Fire.wss",db0,1};
			soundContinuous=0;
			reloadTime=0.092;
			ffCount=1;
			recoil=c8xak74mRecoil_xj200;
			autoFire = 0;
			aiRateOfFire=1.00000;
			aiRateOfFireDistance=500;

			useAction = false;
			useActionTitle = "";
		};
		class FullAuto
		{
			ammo = c8x_ak74m_Auto_Bullet_xj200;
			multiplier=1;
			burst=1;
			displayName = "AK74m Auto";
			dispersion=0.001083;
			sound[]={"\c8xmag\sounds\AK74Fire.wss",db0,1};
			soundContinuous=0;
			reloadTime=0.092;
			ffCount=30;
			recoil=c8xak74mFullRecoil_xj200;
			autoFire = true;
			aiRateOfFire=1.00000;
			aiRateOfFireDistance=500;

			useAction = false;
			useActionTitle = "";
		};
	};
	class C8XAK74Mcobra_xj200 : C8XAK74MAG_xj200 {
		scopeWeapon=2;
		scopeMagazine=0;
		model="\c8x_russ\C8XAK74Mcobra.p3d";
		modelOptics="\c8x_russ\optic_cobra.p3d";
		reloadMagazineSound[]={"\C8Xmag\sounds\ak74reload.wss",0.010316,1};
		drySound[]={"weapons\AK74Dry",db-40,1};
		optics=1;
		opticsZoomMin=0.350;
		opticsZoomMax=0.350;
		opticsFlare = false;
		distanceZoomMin=100;
		distanceZoomMax=100;
		picture="\c8x_russ\inv_pics\ak74mcobra.paa";
		displayName="AK74M Cobra";
		uipicture="\c8x_russ\icons\AK74Mcobra.paa";
	};
	class AK74MGP25_xj200: GrenadeLauncher {
		scopeWeapon=2;
		scopeMagazine=0;
		weaponType = 1;
		displayName = "AK74M/GP25 cobra";
		picture="\c8x_russ\inv_pics\ak74mcobragp25.paa";
		uipicture="\c8x_russ\icons\AK74MGcobra.paa";
		model="\c8x_russ\C8XAK74MGP25cobra.p3d";
		muzzles[] = {AK74MMuzzle, GP25Muzzle};
		class AK74MMuzzle : C8XAK74Mcobra_xj200
		{
			magazines[]={"C8XAK74MAG_xj200"};
		};
		class GP25Muzzle : GrenadeLauncher
		{
			displayName="GP25";
			modelOptics="\c8x_russ\optic_gl.p3d";
			optics = 1;
			opticsZoomMin=0.40;
			opticsZoomMax=0.40;
			reloadMagazineSound[]={"\C8Xmag\sounds\east_g_reload.wss",0.010316,1};
			drySound[]={"weapons\AK74Dry",db-40,1};
			magazines[]={Flare, FlareGreen, FlareRed, FlareYellow,c8xgp25grenade_xj200,grenadelauncher, GP25Vest_xj200};
		}
		canDrop = true;
	};
	//M249, RPK74
	class LSR_m249spw_acog_xj200: MachineGun7_6Manual {
		displayName="M249 SPW ACOG";
		weaponType=1;
		model="\LSR_uswp\m249\LSR_m249spw_acog.p3d";
		picture="\LSR_uswp\weapics\w_spw.paa";
		scopeWeapon = 2;
		scopeMagazine = 2;
		modelOptics="\LSR_uswp\opt\opt_acog.p3d";
		optics = true;
		opticsFlare=0;
		opticsZoomMin=0.16;
		opticsZoomMax=0.16;
		displayNameMagazine="5.56x45 200 rd. box";
		shortNameMagazine="5.56x45 200 rd. box";
		reloadSound[] = {"\LSR_uswp\sounds\m240belt.wss",0.010316,1};
		backgroundReload=1;
		reloadMagazineSound[]={"\LSR_uswp\sounds\m249reload.wav",0.010316,1};
		count=200;
		uipicture="\LSR_uswp\uipics\ismg.paa";
		magazines[]={"LSR_M249Mag_xj200"};

		modes[] = {"Fullauto"};
		class Fullauto
		{
			ammo=LSR_SAW_mg_Bullet_xj200;
			multiplier=1;
			burst=1;
			displayName="5,56x45";
			sound[]={"\LSR_uswp\sounds\M249Fire.wss",db7,1};
			soundContinuous=0;
			reloadTime=0.085000;
			ffCount=6;
			ffMagnitude=0.500000;
			ffFrequency=11;
			dispersion=0.002500;
			aiDispersionCoefX=5.000000;// dispersion used to simulate horizontal burst
			maxLeadSpeed=300;
			recoil="LSR_m249_750Recoil_xj200";
			autoFire = true;
			useAction= false;
			useActionTitle="";
			aiRateOfFire=0.50000;
			aiRateOfFireDistance=1000;
		};
	};
	class LSR_M249Mag_xj200 : LSR_m249spw_acog_xj200 {
		picture="\LSR_uswp\weapics\m_m249.paa";
		magazineType="2 * 256";
	};
	class C8XRPK74MAG_xj200: AK74 {
		scopeWeapon=0;
		scopeMagazine=2;

		displayNameMagazine = "RPK74 Mag";
		shortNameMagazine = "RPK74 Mag";
		picture="\c8xmag\pics\rpk74Mag.paa";
		count=45;
		initSpeed=899;
		reloadMagazineSound[]={"weapons\m16load",db-70,1};
		modes[]={"Single","FullAuto"};
		class Single
		{
			ammo = c8x_rpk74_Single_Bullet_xj200;
			multiplier = 1;
			burst=1;
			displayName = "RPK74 Semi";
			dispersion=0.0004;
			sound[]={"\c8xmag\sounds\AK74Fire.wss",db0,1};
			soundContinuous=0;
			reloadTime=0.092;
			ffCount=1;
			recoil=c8xRPK74Recoil_xj200;
			autoFire = 0;
			aiRateOfFire=1.00000;
			aiRateOfFireDistance=500;

			useAction = false;
			useActionTitle = "";
		};
		class FullAuto
		{
			ammo = c8x_rpk74_Full_Bullet_xj200;
			multiplier=1;
			burst=1;
			displayName = "RPK74 Auto";
			dispersion=0.001;
			sound[]={"\c8xmag\sounds\AK74Fire.wss",db0,1};
			soundContinuous=0;
			reloadTime=0.092;
			ffCount=30;
			recoil=c8xRPK74FullRecoil_xj200;
			autoFire = true;
			aiRateOfFire=1.00000;
			aiRateOfFireDistance=500;

			useAction = false;
			useActionTitle = "";
		};
	};
	class C8XRPK74M1p29_xj200: C8XRPK74MAG_xj200 {
		scopeWeapon=2;
		scopeMagazine=0;
		model="\C8X_RUSS\C8XRPK74M1p29.p3d";
		picture="\c8x_russ\inv_pics\rpk741p29.paa";
		modelOptics="\c8x_russ\optic_1p29_def.p3d";
		reloadMagazineSound[]={"\C8Xmag\sounds\rpk74reload.wss",0.010316,1};
		drySound[]={"weapons\AK74Dry",db-40,1};
		optics=1;
		opticsZoomMin=0.16;
		opticsZoomMax=0.16;
		opticsFlare = false;
		displayName="RPK74M 1P29";
		uipicture="\c8x_russ\icons\RPK74M1p29.paa";
		modes[]={"Single","FullAuto"};
		magazines[]={"C8XRPK74MAG_xj200"};
	};

	// 4*Mag's AT/AA Magazine & Launcher
	class CarlGustavIn4_xj200: CarlGustavLauncher {
		magazineType = "4 * 256";
		picture = "\dtaExt\equip\m\m_carlgustavlauncher.paa";
		displayName="Carl Gustav* Launcher";
		displayNameMagazine="Carl Gustav*";
		shortNameMagazine="Carl Gustav*";
	};
	class AT4In4_xj200: AT4Launcher {
		magazineType = "4 * 256";
		picture = "\dtaExt\equip\m\m_at4launcher.paa";
		displayName="AT4* Launcher";
		displayNameMagazine="AT4*";
		shortNameMagazine="AT4*";
	};
	class AAIn4_xj200: AALauncher {
		magazineType = "4 * 256";
		picture = "\dtaExt\equip\m\m_aalauncher.paa";
		displayName="AA* Launcher";
		displayNameMagazine="AA*";
		shortNameMagazine="AA*";
	};
	class 9k32In4_xj200: 9K32Launcher {
		magazineType = "4 * 256";
		picture = "\dtaExt\equip\m\m_9k32launcher.paa";
		displayName="9k32 Strela* Launcher";
		displayNameMagazine="9k32 Strela*";
		shortNameMagazine="9k32*";
	};
	class AT_AALauncherW_xj200: CarlGustavLauncher {
		displayName="AT&AA Launcher W";
		magazines[]={CarlGustavIn4_xj200,AAIn4_xj200,CarlGustavLauncher,AALauncher};
		picture = "\dtaExt\equip\w\w_carlgustavlauncher.paa";
		canlock = 2;
	};
	class AT_AALauncherE_xj200: AT4Launcher {
		displayName="AT&AA Launcher E";
		magazines[]={AT4In4_xj200,9k32In4_xj200,AT4Launcher,9K32Launcher};
		picture = "\dtaExt\equip\w\w_at4launcher.paa";
		canlock = 2;
	};

	// Modified soldier's Mortar, AI will use them more frequency
	class Mortar_xj200: Mortar {
		ammo="MortarShell_xj200";
		reloadAction="ManActReloadMagazine";
		picture = "\dtaExt\equip\m\m_mortar.paa";

	};
	class M16_xj200: M16 {
		picture = "\dtaExt\equip\w\w_m16.paa";
		magazines[]={"M16","Mortar_xj200"};
	};
	class M4_xj200: M4 {
		picture = "\dtaExt\equip\w\w_m4.paa";
		magazines[]={"M4","Mortar_xj200"};
	};
	class XMS_xj200: M4_xj200 {
		model = "\XMS\XMS";
		modelOptics = "\XMS\optika_XMS";
		picture = "\XMS\w_XMS.paa";
		optics = 1;
		opticsZoomMin = 0.28;
		opticsZoomMax = 0.28;
		displayName = $STR_DN_ADD_XMS;
		displayNameMagazine = $STR_DN_ADD_XMS_AMMO;
		shortNameMagazine = $STR_DN_ADD_XMS;
	};

	
	class KasaThrow_xj200: Throw {
		magazines[]={SmokeShell,SmokeShellRed,SmokeShellGreen,Kasap_xj200,Handgrenade};
	};
	class Kasap_xj200: GrenadeLauncher {
		scopeWeapon = private;
		scopeMagazine = public;
		ammo=Kasap_Ammo_xj200;
		displayName="Kasapanos 5kg";
		displayNameMagazine="Kasapanos 5kg";
		shortNameMagazine=kasap;
		initSpeed = 22;
		maxLeadSpeed = 6;
		reloadTime = 3;
		count = 1;
		sound[]={"\kyl_kasap\Throw.ogg",db-60,1};
		picture="\kyl_kasap\kyl_kasapanos.jpg";
	};

	// Medkit (Only for Player), Satchel and Mine occupying handgun slot
	class Medkit_xj200: Default {
		access = 2;
		valueWeapon = 4;
		valueMagazine = 2;
		scopeWeapon = 0;
		scopeMagazine = 2;
		weaponType = 2;
		magazineType = 32;
		enableAttack = 0;
		ammo = "";
		count = 1;
		initSpeed = 0;
		maxLeadSpeed = 0;
		picture = "\data\sanita_02.paa";
		displayName = "Medkit";
		displayNameMagazine = "Medkit";
		shortNameMagazine = "Medkit";
	};
	class PipeBomb_Pistol_xj200: PipeBomb {
		magazineType = 32;
		picture = "\dtaExt\equip\m\m_timebomb.paa";
	};
	class Mine_Pistol_xj200: Mine {
		magazineType = 32;
		picture = "\dtaExt\equip\m\m_mine.paa";
	};
	
//EOF