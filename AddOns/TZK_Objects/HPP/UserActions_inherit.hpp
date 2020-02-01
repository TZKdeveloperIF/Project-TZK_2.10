// UserActions including CTI-Useful-Functions.
// Unsupported to inherit the whole UserActions class directly since parameters of UserActions are custom actions' class.
// Surely using "#define" can make UserActions expressed by string constant, but it's poor readability and inconvenient for further editing.
	
// UA for Player
class UA_MHQBuildMenu {
	displayName="MHQ Build Menu";
	position=gunnerview;
	radius=0.01;
	condition="(player == this) && mhqNearby";
};
class UA_MCVBuildMenu {
	displayName="MCV Build Menu";
	position=gunnerview;
	radius=0.01;
	condition="(player == this) && MCVNearby";
};
class UA_SupBuildMenu {
	displayName="Support Vehicle Build Menu";
	position=gunnerview;
	radius=0.01;
	condition="(player == this) && SupNearby";
};

class UA_SelfMedic {
	displayName="Self-Medic";
	position=gunnerview;
	radius=0.01;
	condition="(player == this) && ""_x=={Medkit_xj200}"" count magazines this > 0 && damage this > 0.01";
	statement="this exec {\TZK_Objects\Scripts\SelfMedic.sqs}";
};

// UA for Art Vehicle
class UA_BulletCamTurnON {
	displayName="BulletCam Turn ON";
	position="pos gunner";
	radius=5;
	condition="(player == gunner this) && !(bTrackBullet)";
	statement="[] exec {\TZK_Objects\Scripts_CTI\BulletCamTurnON.sqs}";
};
class UA_BulletCamTurnOFF {
	displayName="BulletCam Turn OFF";
	position="pos gunner";
	radius=5;
	condition="(player == gunner this) && (bTrackBullet)";
	statement="[] exec {\TZK_Objects\Scripts_CTI\BulletCamTurnOFF.sqs}";
};

// UA for Transport Vehicle
class UA_TransportTurnON {
	displayName="Transport Turn ON";
	position="pos driver";
	radius=5;
	condition="(driver this in units group player) && !(this in TransportActivatedVehicles)";
	statement="[this] exec {\TZK_Objects\Scripts_CTI\TransportTurnON.sqs}";
};
class UA_TransportTurnOFF {
	displayName="Transport Turn OFF";
	position="pos driver";
	radius=5;
	condition="(driver this in units group player) && (this in TransportActivatedVehicles)";
	statement="[this] exec {\TZK_Objects\Scripts_CTI\TransportTurnOFF.sqs}";
};
class UA_EjectOneCargo {
	displayName="Eject One Cargo";
	position="pos driver";
	priority=1; // Useless parameter in OFP.
	hideOnUse=false; // Useless parameter in OFP. The reason remaining it is to show the purpose of this Action, which is wished to keep on show after having activated it.
	radius=5;
	condition="(driver this in units group player)";
	statement="[this, siPlayer] exec {\TZK_Objects\Scripts_CTI\EjectOneCargo.sqs}";
};
class UA_EjectAllCargo {
	displayName="Eject All Cargo";
	position="pos driver";
	priority=2; // Useless parameter in OFP.
	radius=5;
	condition="(driver this in units group player)";
	statement="[this, siPlayer] exec {\TZK_Objects\Scripts_CTI\EjectAllCargo.sqs}";
};
class UA_EjectAICargo {
	displayName="Eject AI Units";
	position="pos driver";
	priority=2;
	radius=5;
	condition="(driver this in units group player)";
	statement="[this, siPlayer] exec {\TZK_Objects\Scripts_CTI\EjectAIUnits.sqs}";
};

// UA for Attach
class UA_AttachInVehicle {
	displayName="Attach/Detach Vehicle";
	position="pos driver";
	radius=4.52;
	condition="alive this && player != vehicle player && ( count (units player) > count ((units player)-(crew this)) || ( count (units player) == count ((units player) - (crew this)) && ((vehicle player) distance this) > 7.142 ) ) ";
//	condition="alive this && (count (units player)>count ((units player)-(crew this))||(count (units player)==count ((units player)-(crew this))&&((vehicle player) distance this)>7.142 )) && player != vehicle player";
//	"player != vehicle player" means player is in vehicle
//	((vehicle player) distance this) > 7.142 means player is far from the vehicle (7.142 > 4.52 thus player in vehicle won't see this action in action-list) whose crew don't include player's member, and player can ask its units activate this action when the unit is closed to vehicle enough.
};
class UA_AttachOnFoot {
	displayName="Attach/Detach Vehicle";
	position="pos driver";
	radius=7.12;
	condition="alive this && player == vehicle player && (driver this in units group player || isNull driver this) ";
	statement="[this, tsCenter, ttTruck] exec {\TZK_Objects\Scripts_CTI\AttachDetachVehicle.sqs}";
};
class UA_AttachInVehicle_Truck : UA_AttachInVehicle {
	statement="[this, tsCenter, ttTruck] exec {\TZK_Objects\Scripts_CTI\AttachDetachVehicle.sqs}";
};
class UA_AttachOnFoot_Truck : UA_AttachOnFoot {
	statement="[this, tsCenter, ttTruck] exec {\TZK_Objects\Scripts_CTI\AttachDetachVehicle.sqs}";
};

class UA_AttachInVehicle_Center : UA_AttachInVehicle {
	displayName="Attach/Detach Center Vehicle";
	statement="[this, tsCenter, ttBoat] exec {\TZK_Objects\Scripts_CTI\AttachDetachVehicle.sqs}";
};
class UA_AttachInVehicle_Right : UA_AttachInVehicle {
	displayName="Attach/Detach Right Vehicle";
	statement="[this, tsRight, ttBoat] exec {\TZK_Objects\Scripts_CTI\AttachDetachVehicle.sqs}";
};
class UA_AttachInVehicle_Left : UA_AttachInVehicle {
	displayName="Attach/Detach Left Vehicle";
	statement="[this, tsLeft, ttBoat] exec {\TZK_Objects\Scripts_CTI\AttachDetachVehicle.sqs}";
};
class UA_AttachOnFoot_Center : UA_AttachOnFoot {
	displayName="Attach/Detach Center Vehicle";
	statement="[this, tsCenter, ttBoat] exec {\TZK_Objects\Scripts_CTI\AttachDetachVehicle.sqs}";
};
class UA_AttachOnFoot_Right : UA_AttachOnFoot {
	displayName="Attach/Detach Right Vehicle";
	statement="[this, tsRight, ttBoat] exec {\TZK_Objects\Scripts_CTI\AttachDetachVehicle.sqs}";
};
class UA_AttachOnFoot_Left : UA_AttachOnFoot {
	displayName="Attach/Detach Left Vehicle";
	statement="[this, tsLeft, ttBoat] exec {\TZK_Objects\Scripts_CTI\AttachDetachVehicle.sqs}";
};

class UA_AttachInVehicle_APC : UA_AttachInVehicle {
	statement="[this, tsCenter, ttAPC] exec {\TZK_Objects\Scripts_CTI\AttachDetachVehicle.sqs}";
};
class UA_AttachOnFoot_APC : UA_AttachOnFoot {
	statement="[this, tsCenter, ttAPC] exec {\TZK_Objects\Scripts_CTI\AttachDetachVehicle.sqs}";
};

class UA_AttachInVehicle_Heli : UA_AttachInVehicle {
	statement="[this, tsCenter, ttHeli] exec {\TZK_Objects\Scripts_CTI\AttachDetachVehicle.sqs}";
};
class UA_AttachOnFoot_Heli : UA_AttachOnFoot {
	statement="[this, tsCenter, ttHeli] exec {\TZK_Objects\Scripts_CTI\AttachDetachVehicle.sqs}";
};

// UA for driver-gunner-switch
class UA_SwitchToDriverAir {
	displayName="To driver's seat";
	position="pos gunner";
	radius=5;
	condition="player == gunner this && abs(speed this) < 3 && (isNull driver this || local driver this) && local this";
	statement="this exec {\TZK_Objects\Scripts\SwitchToDriver.sqs}";
};
class UA_SwitchToGunnerAir {
	displayName="To gunner's seat";
	position="pos driver";
	radius=5;
	condition="player == driver this && abs(speed this) < 3 && (isNull gunner this || local gunner this) && local this";
	statement="this exec {\TZK_Objects\Scripts\SwitchToGunner.sqs}";
};
class UA_SwitchToDriverLand : UA_SwitchToDriverAir {
	condition="player == gunner this && (isNull driver this || local driver this) && local this";
};
class UA_SwitchToGunnerLand : UA_SwitchToGunnerAir {
	condition="player == driver this && (isNull gunner this || local gunner this) && local this";
};

// UA for Aircraft
class UA_SetFlightAltitude {
	displayName="Set Flight Altitude";
	position="pos driver";
	radius=5;
	condition="driver this in ((units group player) - [player])";
	statement="[this, driver this] exec {Player\Dialog SetFlightAltitude.sqs}";
};
class UA_LAND_Heli {
	displayName="Land Chopper";
	position="pos driver";
	priority=0;
	radius=5;
	condition="driver this in ((units group player) - [player])";
	statement="doStop this; this land ""LAND""";
}

class UA_AfterBurnerON {
	displayName ="AfterBurner ON";
	position = "pos driver";
	radius =10;
};
class UA_AfterBurnerOFF {
	displayName ="AfterBurner OFF";
	position = "pos driver";
	radius =10;
};

class UA_SpoofMissileON {
	displayName ="SpoofMissile ON";
	position = "pos driver";
	radius =10;
	condition = "bSpoofMissile && ""_x=={SpoofSwitch_xj200}"" count magazines this > 0 && (driver this) in units group player && isengineon this";
	statement = "this removeMagazines {SpoofSwitch_xj200}";
};
class UA_SpoofMissileOFF {
	displayName ="SpoofMissile OFF";
	position = "pos driver";
	radius =10;
	condition = " ""_x=={SpoofSwitch_xj200}"" count magazines this == 0 && count magazines this > 0 && (driver this) in units group player && isengineon this";
	statement = "this addMagazine {SpoofSwitch_xj200}";
};

// The script command addMagazine and removeMagazine(s) is local. Thus the following actions for car/ship only show to local client.
// UA for Virtual Weapons Rearm
class UA_EquipLAW {
	displayName ="Equip LAW($25)";
	position = "pos driver";
	radius = 5;
	condition = "{_x=={VirtualEquipSwitchMag_xj200}} count magazines this > 0 && count magazines this < 10 && local this && ((driver this) in units group player || (gunner this) in units group player)";
	statement = "[this, [{VirtualLAW_xj200}], 25] exec {\TZK_Objects\Scripts_CTI\EquipVirtualWeapon.sqs}";
}
class UA_EquipRPG {
	displayName ="Equip RPG($25)";
	position = "pos driver";
	radius = 5;
	condition = "{_x=={VirtualEquipSwitchMag_xj200}} count magazines this > 0 && count magazines this < 10 && local this && ((driver this) in units group player || (gunner this) in units group player)";
	statement = "[this, [{VirtualRPG_xj200}], 25] exec {\TZK_Objects\Scripts_CTI\EquipVirtualWeapon.sqs}";
}
class UA_EquipCarlGustav {
	displayName ="Equip CarlGustav($60)";
	position = "pos driver";
	radius = 5;
	condition = "{_x=={VirtualEquipSwitchMag_xj200}} count magazines this > 0 && count magazines this < 8 && local this && ((driver this) in units group player || (gunner this) in units group player)";
	statement = "[this, [{VirtualCarlGustav_xj200},{VirtualCountMag_xj200},{VirtualCountMag_xj200}], 60] exec {\TZK_Objects\Scripts_CTI\EquipVirtualWeapon.sqs}";
}
class UA_EquipAT4 {
	displayName ="Equip AT4($60)";
	position = "pos driver";
	radius = 5;
	condition = "{_x=={VirtualEquipSwitchMag_xj200}} count magazines this > 0 && count magazines this < 8 && local this && ((driver this) in units group player || (gunner this) in units group player)";
	statement = "[this, [{VirtualAT4_xj200},{VirtualCountMag_xj200},{VirtualCountMag_xj200}], 60] exec {\TZK_Objects\Scripts_CTI\EquipVirtualWeapon.sqs}";
}
class UA_EquipGrenade {
	displayName ="Equip Grenade($10)";
	position = "pos driver";
	radius = 5;
	condition = "{_x=={VirtualEquipSwitchMag_xj200}} count magazines this > 0 && count magazines this < 10 && local this && ((driver this) in units group player || (gunner this) in units group player)";
	statement = "[this, [{VirtualGrenade_xj200}], 10] exec {\TZK_Objects\Scripts_CTI\EquipVirtualWeapon.sqs}";
}
class UA_EquipMortar {
	displayName ="Equip Mortar($20)";
	position = "pos driver";
	radius = 5;
	condition = "{_x=={VirtualEquipSwitchMag_xj200}} count magazines this > 0 && count magazines this < 10 && local this && ((driver this) in units group player || (gunner this) in units group player)";
	statement = "[this, [{VirtualMortar_xj200}], 20] exec {\TZK_Objects\Scripts_CTI\EquipVirtualWeapon.sqs}";
}	
class UA_EquipMG {
	displayName ="Equip MG($20)";
	position = "pos driver";
	radius = 5;
	condition = "{_x=={VirtualEquipSwitchMag_xj200}} count magazines this > 0 && count magazines this < 10 && local this && ((driver this) in units group player || (gunner this) in units group player)";
	statement = "[this, [{Mag_12mm7_100_xj200}], 20] exec {\TZK_Objects\Scripts_CTI\EquipVirtualWeapon.sqs}";
}

class UA_ShowEquipList {
	displayName ="Show Equip List";
	position = "pos driver";
	radius = 5;
	condition = "{_x=={VirtualEquipSwitchMag_xj200}} count magazines this ==0 && local this && ((driver this) in units group player || (gunner this) in units group player)";
	statement = "this addMagazine {VirtualEquipSwitchMag_xj200}";
}
class UA_HideEquipList {
	displayName ="Hide Equip List";
	position = "pos driver";
	radius = 5;
	condition = "{_x=={VirtualEquipSwitchMag_xj200}} count magazines this > 0 && local this && ((driver this) in units group player || (gunner this) in units group player)";
	statement = "this removeMagazines {VirtualEquipSwitchMag_xj200}";
}

// UA for MG Car Weapons. Car with weapon and none magazines will cause crash when they target objects, thus necessary to use UA to rearm instead rearm-system in CTI.
class UA_EquipM2 {
	displayName ="Equip M2($50)";
	position = "pos driver";
	radius = 5;
	condition = "count magazines this == 0 && local this && ((driver this) in units group player || (gunner this) in units group player)";
	statement = "[this, [{M2cal50_DVDUS_xj200},{M2cal50_DVDUS_xj200},{M2cal50_DVDUS_xj200},{M2cal50_DVDUS_xj200},{M2cal50_DVDUS_xj200}], 50, [{M2cal50_DVDUS_xj200}]] exec {\TZK_Objects\Scripts_CTI\EquipCarMG.sqs}";
};
class UA_EquipPKT {
	displayName ="Equip PKT($50)";
	position = "pos driver";
	radius = 5;
	condition = "count magazines this == 0 && local this && ((driver this) in units group player || (gunner this) in units group player)";
	statement = "[this, [{PKTUAZ_DVD_xj200},{PKTUAZ_DVD_xj200},{PKTUAZ_DVD_xj200},{PKTUAZ_DVD_xj200}], 50, [{PKTUAZ_DVD_xj200}]] exec {\TZK_Objects\Scripts_CTI\EquipCarMG.sqs}";
};

// UA for EAST Tanks Missile
class UA_Equip9K112 {
	displayName ="Equip 9K112($1000)";
	position = "pos driver";
	radius = 5;
	condition = "count magazines this == 0 && ((driver this) in units group player || (gunner this) in units group player || (commander this) in units group player)";
	statement = "[this, [{9K112_xj200}], 1000] exec {\TZK_Objects\Scripts_CTI\EquipTankMissile.sqs}";
};
class UA_Equip9K119 {
	displayName ="Equip 9K119($1000)";
	position = "pos driver";
	radius = 5;
	condition = "count magazines this == 0 && ((driver this) in units group player || (gunner this) in units group player || (commander this) in units group player)";
	statement = "[this, [{9K119_xj200}], 1000] exec {\TZK_Objects\Scripts_CTI\EquipTankMissile.sqs}";
};
class UA_EquipATGM125 {
	displayName ="Equip ATGM125($1000)";
	position = "pos driver";
	radius = 5;
	condition = "count magazines this == 0 && ((driver this) in units group player || (gunner this) in units group player || (commander this) in units group player)";
	statement = "[this, [{ATGM125_xj200}], 1000] exec {\TZK_Objects\Scripts_CTI\EquipTankMissile.sqs}";
};
//EOF