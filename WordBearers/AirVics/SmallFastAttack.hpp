class O_OBTWordBearers40k_WB_IW_Land_Speeder_Tornado_01 : 30k_Steve_WB_Tornado_OCimport_02 {
    author = "[SB] Balderic Caeledis";
    scope = 2;
    scopeCurator = 2;
    displayName = "WB - IW Land Speeder Tornado";
    side = 0;
    editorSubcategory = "BT_WordBearers_Small_Fast_Attack";
    faction = "O__BT_WordBearers_40k";
    crew = "O_BTWord_Bearers_MK_6OfficerTigrus_Bolter_40k_01";

    class Turrets : Turrets {
        class SpeederGunner : SpeederGunner { gunnerType = "O_BTWord_Bearers_MK_4Initiate_2Tigrus_Bolter_40k_01"; };
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

class O_OBTWordBearers40k_WB_IW_Land_Speeder_Typhoon_01 : 30k_Steve_WB_Typhon_OCimport_02 {
    author = "[SB] Balderic Caeledis";
    scope = 2;
    scopeCurator = 2;
    displayName = "WB - IW Land Speeder Typhoon";
    side = 0;
    editorSubcategory = "BT_WordBearers_Small_Fast_Attack";
    faction = "O__BT_WordBearers_40k";
    crew = "O_BTWord_Bearers_Mk_2OfficerPhobos_40k_01";

    class Turrets : Turrets {
        class SpeederGunner : SpeederGunner { gunnerType = "O_BTWord_Bearers_Mk_4Initiate_3Umbra_Bolter_40k_01"; };
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

class O_OBTWordBearers40k_WB_IW_Scimitar_Jetbike_Heavy_Bolter_01 : 30k_Steve_WB_Jetbike_HB_OCimport_02 {
    author = "[SB] Balderic Caeledis";
    scope = 2;
    scopeCurator = 2;
    displayName = "WB - IW Scimitar Jetbike (Heavy Bolter)";
    side = 0;
    editorSubcategory = "BT_WordBearers_Small_Fast_Attack";
    faction = "O__BT_WordBearers_40k";
    crew = "O_BTWord_Bearers_MK_3OfficerPhobos_40k_01";


    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class O_OBTWordBearers40k_WB_IW_Scimitar_Jetbike_Multi_Melta_01 : 30k_Steve_WB_Jetbike_MM_OCimport_02 {
    author = "[SB] Balderic Caeledis";
    scope = 2;
    scopeCurator = 2;
    displayName = "WB - IW Scimitar Jetbike (Multi Melta)";
    side = 0;
    editorSubcategory = "BT_WordBearers_Small_Fast_Attack";
    faction = "O__BT_WordBearers_40k";
    crew = "O_BTWord_Bearers_MK_6OfficerPhobos_40k_01";


    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class O_OBTWordBearers40k_WB_IW_Scimitar_Jetbike_Plasma_Cannon_01 : 30k_Steve_WB_Jetbike_PC_OCimport_02 {
    author = "[SB] Balderic Caeledis";
    scope = 2;
    scopeCurator = 2;
    displayName = "WB - IW Scimitar Jetbike (Plasma Cannon)";
    side = 0;
    editorSubcategory = "BT_WordBearers_Small_Fast_Attack";
    faction = "O__BT_WordBearers_40k";
    crew = "O_BTWord_Bearers_MK_6OfficerTigrus_Combi_Bolter_40k_01";


    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class O_OBTWordBearers40k_WB_IW_Scimitar_Jetbike_Volkite_01 : 30k_Steve_WB_Jetbike_VLK_OCimport_02 {
    author = "[SB] Balderic Caeledis";
    scope = 2;
    scopeCurator = 2;
    displayName = "WB - IW Scimitar Jetbike (Volkite)";
    side = 0;
    editorSubcategory = "BT_WordBearers_Small_Fast_Attack";
    faction = "O__BT_WordBearers_40k";
    crew = "O_BTWord_Bearers_MK_4OfficerVolkite_Charger_40k_01";


    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};