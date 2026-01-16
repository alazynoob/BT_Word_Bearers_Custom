class O_OBTWordBearers40k_WB_IW_Sicarian_Battle_Tank_01 : AoD_Sic_Tank_IW_OCimport_02 {
    author = "[SB] Balderic Caeledis";
    scope = 2;
    scopeCurator = 2;
    displayName = "WB - IW Sicarian Battle Tank";
    side = 0;
    editorSubcategory = "BT_WordBearers_Heavy_Tanks"; 
    faction = "O__BT_WordBearers_40k";
    crew = "O_BTWord_Bearers_MK_4VeteranTigrus_Combi_Melta_40k_01";

    class Turrets : Turrets {
        class CommanderOptics : CommanderOptics { gunnerType = "O_BTWord_Bearers_Mk_3Initiate_3Phobos_40k_01"; };
        class MainTurret : MainTurret { gunnerType = "O_BTWord_Bearers_MK_4OfficerRyza_Plasma_Gun_40k_01"; };
        class SicLeftGun : SicLeftGun { gunnerType = "O_BTWord_Bearers_Mk_2Initiate_2Umbra_Bolter_40k_01"; };
        class SicRightGun : SicRightGun { gunnerType = "O_BTWord_Bearers_Mk_2Initiate_3Tigrus_Bolter_40k_01"; };
    };



    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class O_OBTWordBearers40k_WB_IW_Sicarian_Punisher_Tank_01 : AoD_Sic_Tank_Punisher_IW_OCimport_02 {
    author = "[SB] Balderic Caeledis";
    scope = 2;
    scopeCurator = 2;
    displayName = "WB - IW Sicarian Punisher Tank";
    side = 0;
    editorSubcategory = "BT_WordBearers_Heavy_Tanks"; 
    faction = "O__BT_WordBearers_40k";
    crew = "O_BTWord_Bearers_MK_6VeteranTigrus_Combi_Plasma_40k_01";

    class Turrets : Turrets {
        class CommanderOptics : CommanderOptics { gunnerType = "O_BTWord_Bearers_Mk_2initiate_3Phobos_40k_01"; };
        class MainTurret : MainTurret { gunnerType = "O_BTWord_Bearers_MK_4OfficerPrimus_Melta_40k_01"; };
        class SicLeftGun : SicLeftGun { gunnerType = "O_BTWord_Bearers_Mk_4Initiate_3Phobos_40k_01"; };
        class SicRightGun : SicRightGun { gunnerType = "O_BTWord_Bearers_MK_6OfficerTigrus_Bolter_40k_01"; };
    };



    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class O_OBTWordBearers40k_WB_IW_Sicarian_Vanquisher_Tank_01 : AoD_Sic_Tank_Cannon_IW_OCimport_02 {
    author = "[SB] Balderic Caeledis";
    scope = 2;
    scopeCurator = 2;
    displayName = "WB - IW Sicarian Vanquisher Tank";
    side = 0;
    editorSubcategory = "BT_WordBearers_Heavy_Tanks"; 
    faction = "O__BT_WordBearers_40k";
    crew = "O_BTWord_Bearers_Mk_2VeteranPhobos_Combi_Bolter_40k_01";

    class Turrets : Turrets {
        class CommanderOptics : CommanderOptics { gunnerType = "O_BTWord_Bearers_Mk_2initiate_3Phobos_40k_01"; };
        class MainTurret : MainTurret { gunnerType = "O_BTWord_Bearers_Mk_2OfficerLascutter_40k_01"; };
        class SicLeftGun : SicLeftGun { gunnerType = "O_BTWord_Bearers_MK_4Initiate_2Tigrus_Bolter_40k_01"; };
        class SicRightGun : SicRightGun { gunnerType = "O_BTWord_Bearers_Mk_6Initiate_1Umbra_Bolter_40k_01"; };
    };



    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class O_OBTWordBearers40k_Sicarian_Venator_Tank_Hunter_Laser_01 : AoD_Sic_Tank_V_IW_OCimport_02 {
    author = "[SB] Balderic Caeledis";
    scope = 2;
    scopeCurator = 2;
    displayName = "WB - IW Sicarian Venator Tank Hunter (Laser)";
    side = 0;
    editorSubcategory = "BT_WordBearers_Heavy_Tanks"; 
    faction = "O__BT_WordBearers_40k";
    crew = "O_BTWord_Bearers_MK_4VeteranPhobos_Combi_Bolter_40k_01";

    class Turrets : Turrets {
        class MainTurret : MainTurret { gunnerType = "O_BTWord_Bearers_MK_4OfficerLascannon_Hip_40k_01"; };
        class SicLeftGun : SicLeftGun { gunnerType = "O_BTWord_Bearers_Mk_2Initiate_3Tigrus_Bolter_40k_01"; };
        class SicRightGun : SicRightGun { gunnerType = "O_BTWord_Bearers_Mk_6Initiate_3Tigrus_Bolter_40k_01"; };
    };



    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class O_OBTWordBearers40k_WB_IW_Sicarian_Venator_Tank_Hunter_Bolter_01 : AoD_Sic_Tank_V_HB_IW_OCimport_02 {
    author = "[SB] Balderic Caeledis";
    scope = 2;
    scopeCurator = 2;
    displayName = "WB - IW Sicarian Venator Tank Hunter (Bolter)";
    side = 0;
    editorSubcategory = "BT_WordBearers_Heavy_Tanks"; 
    faction = "O__BT_WordBearers_40k";
    crew = "O_BTWord_Bearers_MK_6VeteranTigrus_Combi_Bolter_40k_01";

    class Turrets : Turrets {
        class MainTurret : MainTurret { gunnerType = "O_BTWord_Bearers_MK_3OfficerPrimus_Melta_40k_01"; };
        class SicLeftGun : SicLeftGun { gunnerType = "O_BTWord_Bearers_Mk_2initiate_1Phobos_40k_01"; };
        class SicRightGun : SicRightGun { gunnerType = "O_BTWord_Bearers_Mk_4Initiate_3Tigrus_Bolter_40k_01"; };
    };



    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class O_OBTWordBearers40k_WB_IW_Sicarian_Vindicator_Siege_Tank_01 : AoD_Sic_Tank_Vind_IW_OCimport_02 {
    author = "[SB] Balderic Caeledis";
    scope = 2;
    scopeCurator = 2;
    displayName = "WB - IW Sicarian Vindicator Siege Tank";
    side = 0;
    editorSubcategory = "BT_WordBearers_Heavy_Tanks"; 
    faction = "O__BT_WordBearers_40k";
    crew = "O_BTWord_Bearers_MK_4VeteranTigrus_Combi_Plasma_40k_01";

    class Turrets : Turrets {
        class MainTurret : MainTurret { gunnerType = "O_BTWord_Bearers_Mk_2OfficerLascutter_40k_01"; };
        class SicLeftGun : SicLeftGun { gunnerType = "O_BTWord_Bearers_MK_6Initiate_1Tigrus_Bolter_40k_01"; };
        class SicRightGun : SicRightGun { gunnerType = "O_BTWord_Bearers_MK_4Initiate_1Phobos_40k_01"; };
    };



    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};