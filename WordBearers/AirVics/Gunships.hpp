class O_OBTWordBearers40k_WB_IW_Thunderhawk_Gunship_01 : Thunderhawk_1_IW_TIOW_OCimport_02 {
    author = "[SB] Balderic Caeledis";
    scope = 2;
    scopeCurator = 2;
    displayName = "WB Thunderhawk Gunship";
    side = 0;
    editorSubcategory = "BT_WordBearers_Gunships";
    faction = "O__BT_WordBearers_40k";
    crew = "O_BTWord_Bearers_MK_4OfficerTigrus_Bolter_40k_01";

    class Turrets : Turrets {
        class Co_pilot : Co_pilot { gunnerType = "O_BTWord_Bearers_Mk_2VeteranTigrus_Bolter_40k_01"; };
        class Left_Gunner : Left_Gunner { gunnerType = "O_BTWord_Bearers_Mk_4Initiate_3Tigrus_Bolter_40k_01"; };
        class Right_Gunner : Right_Gunner { gunnerType = "O_BTWord_Bearers_MK_4Initiate_2Tigrus_Bolter_40k_01"; };
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

class O_OBTWordBearers40k_WB_WE_Fire_Raptor_Gunship_01 : AoD_FR_WE_OCimport_02 {
    author = "[SB] Balderic Caeledis";
    scope = 2;
    scopeCurator = 2;
    displayName = "WB Fire Raptor Gunship";
    side = 0;
    editorSubcategory = "BT_WordBearers_Gunships";
    faction = "O__BT_WordBearers_40k";
    crew = "O_BTWord_Bearers_MK_6OfficerPhobos_40k_01";

    class Turrets : Turrets {
        class GunnerTurret_01 : GunnerTurret_01 { gunnerType = "O_BTWord_Bearers_Mk_2Initiate_3Tigrus_Bolter_40k_01"; };
        class GunnerTurret_02 : GunnerTurret_02 { gunnerType = "O_BTWord_Bearers_Mk_4Initiate_1Umbra_Bolter_40k_01"; };
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

class O_OBTWordBearers40k_WB_WE_Storm_Eagle_Gunship_01 : AoD_SE_WE_OCimport_02 {
    author = "[SB] Balderic Caeledis";
    scope = 2;
    scopeCurator = 2;
    displayName = "WB Storm Eagle Gunship";
    side = 0;
    editorSubcategory = "BT_WordBearers_Gunships";
    faction = "O__BT_WordBearers_40k";
    crew = "O_BTWord_Bearers_Mk_6OfficerUmbra_Bolter_40k_01";


    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};