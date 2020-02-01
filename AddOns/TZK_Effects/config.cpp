//	There is a problem to see Materal effects in MULTIPLAYER game, especially when playing CTI. Units created during game won't show Materal effects unless you use Alt+Tab. Maybe the reason have something to do with DirectX used by OFP. Hope some players would solve it.
class CfgPatches
{
	class TZK_Effects_200
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.96;
	};
};

//	#include "TZK_Effects\ETON_Materials.hpp"

#include "TZK_Effects\CfgMaterials_ofp_matdef_core_HighContrast.hpp"

class CfgTextureToMaterial {
	
	#include "TZK_Effects\CfgTextureToMaterial_ofp_matdef_core.hpp"
	#include "TZK_Effects\CfgTextureToMaterial_AddOns1.hpp"
	#include "TZK_Effects\CfgTextureToMaterial_TZK200.hpp"

	
	

};


// End Of Config File