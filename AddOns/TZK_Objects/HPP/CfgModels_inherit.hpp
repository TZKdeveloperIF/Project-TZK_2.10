class CfgModels {
	class Default {
		sections[] = {};
		sectionsInherit="";
	};
	class Vehicle: Default{};
	
	class Car: Vehicle {};
	class wood_hmmwv_m2wS: Car {
		sections[]={"sklo predni p","sklo predni l","zadni svetlo","brzdove svetlo","IFF_Hood","IFF_Door1","IFF_Door2","StuffA1","StuffA2","StuffB1","StuffC1","StuffD1","StuffD2","StuffD3","StuffE1"};
	};
	class BAS_BRDM_PK: Car {};
	class mcar_hmmwv: Car {
		sectionsInherit="Vehicle";
		sections[] = {"mishead","misback","ammo","sklo predni p","sklo predni l","zadni svetlo","brzdove svetlo"};
	};
	class mcar_gaskin: Car {
		sectionsInherit="Vehicle";
		sections[] = {"pod1bck","pod2bck","pod3bck","pod4bck","latpod","ammo","sklo predni p","sklo predni l","zadni svetlo","brzdove svetlo","missile1","missile2","missile3","missile4"};
	};

	class Tank: Vehicle
	{
		sectionsInherit="Vehicle";
		sections[]=
		{
			"zadni svetlo",
			"brzdove svetlo",
			"pruh"
		};
	};
	class DKMM_M109A6: Tank  {
		sectionsInherit="Tank";
		sections[]={"vlam","mk4","mk5","mk6","mk7"};
	};
	class DKMM_M109A6D: DKMM_M109A6 {};
	class DKMM_TOS1: DKMM_M109A6  {
		sectionsInherit="Tank";
		sections[]={"n1", "n2", "n3", "lidF","lidR","m1","m2","m3","m4","m5","m6","m7","m8","m9","m10","m11","m12","m13","m14","m15","m16","m17","m18","m19","m20","m21","m22","m23","m24","m25","m26","m27","m28","m29","m30"};
	};

	class M109A6_CoC: Tank {};
};

/*
	// CfgModels used for MLOD-format p3d normalizing in OFP game. It's necessary to define a class in CfgModels whose name same with the P3D, and declare sections belong to OFP critical defines or same with those custom components which have been defined in P3D. For those OFP-had-defined component, game will recognize them and make them work normally. As for those custom components, it's able to use them creating animations and combining them with scripts they can perfrom quite good.
	
	
	// Classes listed below for reference only.
	// They were used when debugging MLOD-format models
	// After having binarized model with pasting CfgModels-classes-info to binarize-tool-CfgModels.hpp, the defination of these classes is useless and can be removed from config.cpp
	// Editors may compare them with CfgModels in old version TZK config.

	class Helicopter: Default {};
	class DrKk_MH6: Helicopter {};
	// The DrKk_MH6.p3d is renamed as MH6J_xj200 and saved in TZK_Objects\Models
	
	class cobra : Helicopter {
		sectionsInherit="Vehicle";
		sections[]=
		{
                        "n1",
                        "n2",
                        "podsvit pristroju",
			"sklo predni p",
			"sklo predni l",
			"velka vrtule staticka",
			"velka vrtule blur",
			"mala vrtule staticka",
			"mala vrtule blur",
			"clan",
			"clan_sign",
                        "miss1",
                        "miss2"
		};
   };
	class V80_xj200: Helicopter {};
	// The cobra.p3d is renamed as AH1W_Vit_xj200 and saved in TZK_Objects\Models

	class C17Glob: A10 {};
	class VME_KJ2000: A10 {
		sectionsInherit="Vehicle";
		sections[]= {
				"vrtule staticka","vrtule blur","chair","foldwheelfront", "foldwheelrear","foldwheelrear1", "spinwheelfront", "spinwheelrear", "spinwheelrear1"
		};
	};
	class A10: Vehicle {
		sectionsInherit="Vehicle";
		sections[]={"vrtule", "vrtule 1"};
	};
	class Su25_xj200: A10_xj200{};
	// Modified original planes with extra After-Burner-Flame

	class Tank: Vehicle
	{
		sectionsInherit="Vehicle";
		sections[]=
		{
			"zadni svetlo",
			"brzdove svetlo",
			"pruh"
		};
	};
	class INQ_M1A2: Tank {
		sectionsInherit = "Tank";
		sections[] = {"BS1","BS2","BS3","_mark","_chevron","_for"};
	};
	class Leo2A6: Tank {
		sectionsInherit="Tank";
		sections[]={"zadni svetlo","Takt_Kp","Takt_Symbol","Takt_Btl_1","Takt_Btl_2","Takt_Btl_3","nr1","nr2","nr3"};
	};
	class T80_xj200: Tank {};
	class T80Res_xj200: Tank {};
	
	class csla2_tank2: Tank {
		sectionsInherit = "Tank";
		sections[] = {"csla","cccp","emb","n1","n2","n3","gvard","shield"};
	};
	class csla2_t80: csla2_tank2 {};
	class T90_ICP_xj200: Tank {
		sectionsInherit="Vehicle";
		sections[]=
		{
			"zasleh",
			"L svetlo",
			"P svetlo",
			"zadni svetlo",
			"TR",
			"zak",
			"dz",
			"pl",
			"no1",
			"no2",
			"no3",
			"fire1",
			"fire2",
			"fire3",
			"fire4",
			"fire5",
			"fire6",         
			"rak1",
			"rak2",
			"rak3",
			"rak4",
			"Flag"
		};
	};
	class M60_120S_xj200: Tank {};
	
	class m113: Tank {};
	class M113_Cannon_xj200: M113{};
	
	class m2a2: Tank {};
	class m2a2_xj200: m2a2 {};
	class M2A2_CBT_a1_w_xj200: m2a2 {};
	
	class Tank: Vehicle
	{
		sectionsInherit="Vehicle";
		sections[]=
		{
			"zadni svetlo",
			"brzdove svetlo",
			"pruh"
		};
	};
	class ZTZ99:TANK {
		sectionsInherit="TANK";
		sections[] =
		{
			"n1"
		};
	};	
	class VME_PLZ05:ZTZ99{
		sectionsInherit="TANK";
		sections[] =
		{
			"n1", "zhijia"
		};
	};
	class AN12_xj200 {
		sectionsInherit="Vehicle";
		sections[]={"vrtule staticka","vrtule blur"};
	};

	class C130: Vehicle {
		sectionsInherit="Vehicle";
		sections[]=
		{
			"cislo",
			"grupa",
			"side",
			"sektor",
			"clan",
			"podsvit pristroju",
			"poskozeni",
			"L svetlo",
			"P svetlo",
			"zasleh",
			"sklo predni p",
			"sklo predni l",
			"vrtule staticka",
			"vrtule blur"
		};
	};
	class MH6_Bas_xj200: Helicopter {
		sectionsInherit="Vehicle";
		sections[]={"sklo predni p","sklo predni l","velka vrtule staticka","velka vrtule blur","mala vrtule staticka","mala vrtule blur"};
	};
	
	class BWMOD_Tiger: Helicopter
	{
		sectionsInherit="Vehicle";
		sections[]={"strobo","strobo2","redlight","whitelight","greenlight","display1","display2","display3","display4","display5","display6","display7","nr1","nr2","badge","numbers","waffen1","waffen2","waffen3","waffen4","velka vrtule staticka","velka vrtule blur","mala vrtule staticka","mala vrtule blur","lsvetlo"};
	};
	class BWMOD_Tiger_RMK: BWMOD_Tiger
	{
		sectionsInherit="Vehicle";
		sections[]={"strobo","strobo2","redlight","whitelight","greenlight","display1","display2","display3","display4","display5","display6","display7","nr1","nr2","badge","numbers","waffen1","waffen2","waffen3","waffen4","velka vrtule staticka","velka vrtule blur","mala vrtule staticka","mala vrtule blur","lsvetlo"};
	};
	

*/