// Virtual bullet used to create missiles for car/ship
// Those vehicles whose simulation is "car" or "ship" can't shot missiles thus shoulde use Fired-EH instead.


	class VirtualLAW_xj200: LAW {
		thrust = 0; thrustTime = 0.01;
	};
	class VirtualRPG_xj200: RPG {
		thrust = 0; thrustTime = 0.01;
	};
	class VirtualBulletLAW_xj200: Bullet7_6 {};
	class VirtualBulletRPG_xj200: Bullet7_6 {};
	
	class VirtualCarlGustav_xj200: CarlGustav {
		thrust = 0; thrustTime = 0.01;
	};
	class VirtualAT4_xj200: AT4 {
		thrust = 0; thrustTime = 0.01;
	};
	class VirtualBulletCarlGustav_xj200: Bullet7_6 {};
	class VirtualBulletAT4_xj200: Bullet7_6 {};
	
	class VirtualAA_xj200: Bullet7_6 {};
	class Virtual9K32_xj200: Bullet7_6 {};
	
	class VirtualGrenade_xj200: Grenade {};
	class VirtualBulletGrenade_xj200: Bullet7_6 {};
	class VirtualMortar_xj200: MortarShell_xj200 {};
	class VirtualBulletMortar_xj200: Bullet7_6 {};
	
	
	
	
	class VirtualZuni_xj200: Zuni {
		thrust = 0; thrustTime = 0.01;
	};
	class VirtualBulletZuni_xj200: Bullet7_6 {};
	
	
	
	
	class VirtualAT_APC_xj200: Bullet7_6 {};
	class VirtualAT_Heli_xj200: Bullet7_6 {};
	class VirtualStinger_xj200: Bullet7_6 {};
	class VirtualStrela_xj200: Bullet7_6 {};