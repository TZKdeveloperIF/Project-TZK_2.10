#define SHADOWLVL 0.5

class CfgMaterials {
	class OFPbuildings {
		ambient[] = {SHADOWLVL,SHADOWLVL,SHADOWLVL,1};
		diffuse[] = {1,1,1,1};
		forcedDiffuse[] = {0,0,0,0};
		specular[] = {0.3,0.3,0.3,0};
		specularPower = 0.5;
		emmisive[] = {0,0,0,0};
	};
	class OFPmetal {
		ambient[] = {SHADOWLVL,SHADOWLVL,SHADOWLVL,1};
		diffuse[] = {1,1,1,1};
		forcedDiffuse[] = {0,0,0,0};
		specular[] = {0.2,0.2,0.2,1};
		specularPower = 10;
		emmisive[] = {0,0,0,0};
	};
	class OFPmetalVeh {
		ambient[] = {SHADOWLVL*0.8,SHADOWLVL*0.8,SHADOWLVL*0.8,1};
		diffuse[] = {1,1,1,1};
		forcedDiffuse[] = {0,0,0,0};
		specular[] = {0.5,0.5,0.5,1};
		specularPower = 900;
		emmisive[] = {0,0,0,0};
	};
	class OFPriflemetal {
		ambient[] = {SHADOWLVL,SHADOWLVL,SHADOWLVL,1};
		diffuse[] = {1,1,1,1};
		forcedDiffuse[] = {0,0,0,0};
		specular[] = {0.3,0.3,0.3,1};
		specularPower = 900;
		emmisive[] = {0,0,0,0};
	};
	class OFPterrain {
		ambient[] = {SHADOWLVL,SHADOWLVL,SHADOWLVL,1};
		diffuse[] = {1,1,1,1};
		forcedDiffuse[] = {0,0,0,0};
		specular[] = {0.1,0.1,0.1,0};
		specularPower = 3;
		emmisive[] = {0,0,0,0};
	};
	class OFProads {
		ambient[] = {SHADOWLVL,SHADOWLVL,SHADOWLVL,1};
		diffuse[] = {1,1,1,1};
		forcedDiffuse[] = {0,0,0,0};
		specular[] = {0.1,0.1,0.1,0};
		specularPower = 3;
		emmisive[] = {0,0,0,0};
	};
	class OFPvegetation {
		/*
		ambient[] = {SHADOWLVL*1.1,SHADOWLVL*1.1,SHADOWLVL*1.1,1};
		diffuse[] = {1,1,1,1};
		forcedDiffuse[] = {0,0,0,0};
		specular[] = {0.07,0.07,0.07,0};
		specularPower = 1;
		emmisive[] = {0,0,0,0};
		*/
		ambient[] = {SHADOWLVL*1.1,SHADOWLVL*1.1,SHADOWLVL*1.1,1};
		diffuse[] = {1,1,1,1};
		forcedDiffuse[] = {0,0,0,0};
		specular[] = {0.01,0.01,0.01,0};
		specularPower = 0.55;
		emmisive[] = {0,0,0,0};
	};
	class OFPWater {
		ambient[] = {1,1,1,1};
		diffuse[] = {1,1,1,1};
		forcedDiffuse[] = {0,0,0,0};
		specular[] = {0.4,0.4,0.45,0};
		specularPower = 6;
		emmisive[] = {0,0,0,0};
	};
	class OFPparticles {
		ambient[] = {SHADOWLVL,SHADOWLVL,SHADOWLVL,1};
		diffuse[] = {1,1,1,1};
		forcedDiffuse[] = {0,0,0,0};
		specular[] = {0.2,0.2,0.2,0};
		specularPower = 3;
		emmisive[] = {0,0,0,0};
	};
	class OFPshining {
		ambient[] = {1,1,1,1};
		diffuse[] = {1,1,1,1};
		forcedDiffuse[] = {0,0,0,0};
		specular[] = {0.2,0.2,0.2,0};
		specularPower = 0;
		emmisive[] = {1,1,1,1};
	};

	class OFPglass {
		ambient[] = {0.9,0.9,0.9,1};
		diffuse[] = {1,1,1,1};
		forcedDiffuse[] = {0.5,0.5,0.5,1};
		specular[] = {1,1,1,1};
		specularPower = 900;
		emmisive[] = {0,0,0,0};
	};
	class OFPvehinterior {
		ambient[] = {SHADOWLVL,SHADOWLVL,SHADOWLVL,1};
		diffuse[] = {1,1,1,1};
		forcedDiffuse[] = {0,0,0,0};
		specular[] = {0,0,0,0};
		specularPower = 0;
		emmisive[] = {0,0,0,0};
	};

	class OFPskin {
		ambient[] = {SHADOWLVL,SHADOWLVL,SHADOWLVL,1};
		diffuse[] = {1,1,1,1};
		forcedDiffuse[] = {0,0,0,0};
		specular[] = {0.3,0.3,0.3,0};
		specularPower = 0.5;
		emmisive[] = {0,0,0,0};
	};
	class OFPclothing {
		ambient[] = {SHADOWLVL,SHADOWLVL,SHADOWLVL,1};
		diffuse[] = {1,1,1,1};
		forcedDiffuse[] = {0,0,0,0};
		specular[] = {0.2,0.2,0.2,0};
		specularPower = 0.3;
		emmisive[] = {0,0,0,0};
	};
	class OFPgear {
		ambient[] = {SHADOWLVL,SHADOWLVL,SHADOWLVL,1};
		diffuse[] = {1,1,1,1};
		forcedDiffuse[] = {0,0,0,0};
		specular[] = {0.2,0.2,0.2,0};
		specularPower = 0.5;
		emmisive[] = {0,0,0,0};
	};
	
	class TigerMetal {
		ambient[]={1,1,1,1];
		diffuse[]={1,1,1,1];
		forcedDiffuse[]={0,0,0,0];
		specular[]={0.6,0.6,0.6,0];
		specularPower=5;
		emisive[]={0,0,0,0};
	};
	class TigerInnenraum {
		ambient[]={1,1,1,1];
		diffuse[]={1,1,1,1];
		forcedDiffuse[]={0,0,0,0];
		specular[]={0.2,0.2,0.2,0];
		specularPower=5;
		emisive[]={0,0,0,0};
	};
	class TigerGlass {
		ambient[]={1,1,1,1};
		diffuse[]={1,1,1,1};
		forcedDiffuse[]={0,0,0,0};
		specular[]={0.8,0.8,0.8,0};
		specularPower=5;
		emmisive[]={0,0,0,0};
	};

	// *** DEFAULT DEFINITIONS OVERRIDE ***
	class Water {
		ambient[] = {SHADOWLVL,SHADOWLVL,SHADOWLVL,1};
		diffuse[] = {0.13,0.15,0.065,1.0};
		forcedDiffuse[] = {0.0264,0.03,0.013,0};
		specular[] = {0.5,0.5,0.5,0};
		specularPower = 4;
		emmisive[] = {0,0,0,0};
	};
	class Terrain {
		ambient[] = {SHADOWLVL,SHADOWLVL,SHADOWLVL,1};
		diffuse[] = {1,1,1,1};
		forcedDiffuse[] = {0,0,0,0};
		specular[] = {0.1,0.1,0.1,0};
		specularPower = 3;
		emmisive[] = {0,0,0,0};
	};
	class SpecularGlass {
		ambient[] = {0.9,0.9,0.9,1};
		diffuse[] = {1,1,1,1};
		forcedDiffuse[] = {0.5,0.5,0.5,1};
		specular[] = {1,1,1,1};
		specularPower = 900;
		emmisive[] = {0,0,0,0};
	};
	class Metal {
		ambient[] = {SHADOWLVL,SHADOWLVL,SHADOWLVL,1};
		diffuse[] = {1,1,1,1};
		forcedDiffuse[] = {0,0,0,0};
		specular[] = {0.3,0.3,0.3,1};
		specularPower = 300;
		emmisive[] = {0,0,0,0};
	};
	class RifleMetal {
		ambient[] = {SHADOWLVL,SHADOWLVL,SHADOWLVL,1};
		diffuse[] = {1,1,1,1};
		forcedDiffuse[] = {0,0,0,0};
		specular[] = {0.3,0.3,0.3,1};
		specularPower = 900;
		emmisive[] = {0,0,0,0};
	};
	
};