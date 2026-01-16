class O_OBTWordBearers40k_WB_IW_Land_Speeder_Storm_01 : 30k_Steve_WB_Storm_OCimport_02 {
    author = "[SB] Balderic Caeledis";
    scope = 2;
    scopeCurator = 2;
    displayName = "WB - IW Land Speeder Storm";
    side = 0;
    editorSubcategory = "BT_WordBearers_Air_Transport";
    faction = "O__BT_WordBearers_40k";
    crew = "O_BTWord_Bearers_MK_6OfficerPhobos_40k_01";

    class Turrets : Turrets {
        class SpeederGunner : SpeederGunner { gunnerType = "O_BTWord_Bearers_MK_3VeteranPhobos_40k_01"; };
        class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
        class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
        class CargoTurret_03 : CargoTurret_03 { gunnerType = ""; };
        class CargoTurret_04 : CargoTurret_04 { gunnerType = ""; };
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

class O_OBTWordBearers40k_WB_IW_Caestus_Assault_Ram_01 : AoD_Assault_Ram_IW_OCimport_02 {
    author = "[SB] Balderic Caeledis";
    scope = 2;
    scopeCurator = 2;
    displayName = "WB - IW Caestus Assault Ram";
    side = 0;
    editorSubcategory = "BT_WordBearers_Air_Transport";
    faction = "O__BT_WordBearers_40k";
    crew = "O_BTWord_Bearers_MK_4OfficerTigrus_Bolter_40k_01";


    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class O_OBTWordBearers40k_WB_IW_Columba_Dropship_01 : AoD_Columba_Ram_IW_OCimport_02 {
    author = "[SB] Balderic Caeledis";
    scope = 2;
    scopeCurator = 2;
    displayName = "WB - IW Columba Dropship";
    side = 0;
    editorSubcategory = "BT_WordBearers_Air_Transport";
    faction = "O__BT_WordBearers_40k";
    crew = "O_BTWord_Bearers_MK_2OfficerTigrus_Bolter_40k_01";


    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class O_OBTWordBearers40k_WB_IW_Thunderhawk_Transport_01 : Thunderhawk_2_AV_TIOW_OCimport_02 {
    author = "[SB] Balderic Caeledis";
    scope = 2;
    scopeCurator = 2;
    displayName = "WB - IW Thunderhawk Transport";
    side = 0;
    editorSubcategory = "BT_WordBearers_Air_Transport";
    faction = "O__BT_WordBearers_40k";
    crew = "O_BTWord_Bearers_MK_2OfficerTigrus_Bolter_40k_01";

    class Turrets : Turrets {
        class Co_pilot : Co_pilot { gunnerType = "O_BTWord_Bearers_Mk_2Initiate_3Tigrus_Bolter_40k_01"; };
        class Left_Gunner : Left_Gunner { gunnerType = "O_BTWord_Bearers_Mk_4Initiate_1Tigrus_Bolter_40k_01"; };
        class Right_Gunner : Right_Gunner { gunnerType = "O_BTWord_Bearers_Mk_6Initiate_2Tigrus_Bolter_40k_01"; };
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

