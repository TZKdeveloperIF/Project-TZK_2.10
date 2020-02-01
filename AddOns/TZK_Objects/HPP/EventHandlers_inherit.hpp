// EventHandlers including Effects and CTI-Useful-Functions.
class EH_Tank {
//	Init = "_this exec {\TZK_Objects\Scripts\EffectInitTank.sqs} ";
	Hit = "_this exec {\TZK_Objects\skrypt\hit.sqs}; _this exec {\TZK_Objects\Scripts_CTI\DamageShowTank.sqs} ";
	IncomingMissile = "if (local (_this select 0)) then {[_this] exec {\TZK_Objects\skrypt\alert.sqs}} ";
//	Killed = "pvKilledTank = _this select 0; publicVariable {pvKilledTank} ";
};
class EH_ArtTank : EH_Tank {
//	Init = "_this exec {\TZK_Objects\Scripts\EffectInitArtTank.sqs} ";
	Fired = "_this exec {\TZK_Objects\Scripts_CTI\ImpactPointMarker.sqs}; if (player == gunner (_this select 0)) then { [ nearestObject[_this select 0, _this select 4] ] exec {\TZK_Objects\Scripts_CTI\TrackBullet.sqs} }";
};
class EH_Howitzer : EH_Tank {
//	Init = "TracerCnt = 0; _this exec {\TZK_Objects\Scripts\EffectInitHowitzer.sqs} ";
	Init = "TracerCnt = 0 ";
	Fired = "_this exec {\TZK_Objects\Scripts\FiredEffect\Howitzer.sqs} ";
	Hit = "_this exec {\TZK_Objects\Scripts_CTI\DamageShowTank.sqs} ";
};
class EH_ArtHowitzer : EH_Howitzer {
//	Init = "TracerCnt = 0; _this exec {\TZK_Objects\Scripts\EffectInitArtHowitzer.sqs} ";
	Init = "TracerCnt = 0 ";
	Fired = "_this exec {\TZK_Objects\Scripts\FiredEffect\Howitzer.sqs}; if (player == gunner (_this select 0)) then { [ nearestObject[_this select 0, _this select 4] ] exec {\TZK_Objects\Scripts_CTI\TrackBullet.sqs} } ";
};


class EH_APC {
//	Init = "_this exec {\TZK_Objects\Scripts\EffectInitAPC.sqs} ";
	Hit = "_this exec {\TZK_Objects\Scripts_CTI\DamageShowTank.sqs}";
//	Killed = "pvKilledTank = _this select 0; publicVariable {pvKilledTank} ";
};

class EH_Heli {
//	Init = "_this exec {\TZK_Objects\Scripts\EffectInitHeli.sqs} ";
	GetOut = "_this exec {\TZK_Objects\Scripts_CTI\GetOutHeli.sqs} ";
	IncomingMissile = "_this exec {\TZK_Objects\Scripts\IncomingMissileToAir.sqs}; _this exec {\TZK_Objects\Scripts\Spoofmissile.sqs}; _this exec {\TZK_Objects\Scripts\SpoofFlare.sqs} ";
	Killed = "(_this select 0) exec {\TZK_Objects\Scripts_CTI\csla_AircraftKilled.sqs}";
};
class EH_Plane {
//	Init = "_this exec {\TZK_Objects\Scripts\EffectInitPlane.sqs} ";
	Init = "_plane = _this select 0; if ((typeOf _plane) in [{A10_Tomahawk_xj200}, {Su25_Raduga_xj200}]) then {_plane say {NuclearMissileReady_xj200}}";
	GetOut = "_this exec {\TZK_Objects\Scripts_CTI\GetOutHeli.sqs} ";
	IncomingMissile = "_this exec {\TZK_Objects\Scripts\IncomingMissileToAir.sqs}; _this exec {\TZK_Objects\Scripts\Spoofmissile.sqs}; _this exec {\TZK_Objects\Scripts\SpoofFlare.sqs} ";
	Killed = "(_this select 0) exec {\TZK_Objects\Scripts_CTI\csla_AircraftKilled.sqs}";
};
class EH_SpecialPlane: EH_Plane {
	Fired = "_this exec {\TZK_Objects\Scripts_CTI\PlaneFired.sqs}";
};

class EH_Boat {
	Killed = "pvKilledBoat = _this select 0; publicVariable {pvKilledBoat} ";
};

//EOF