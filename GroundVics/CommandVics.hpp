class O_OBTWordBearers40k_Land_Raider_Phobos_Command_01 : AoD_Land_Raider_Command_IW_OCimport_02 {
    author = "[SB] Balderic Caeledis";
    scope = 2;
    scopeCurator = 2;
    displayName = "WB - IW Land Raider Phobos Command";
    side = 0;
    editorSubcategory = "BT_WordBearers_Command_Vehicles"; 
    faction = "O__BT_WordBearers_40k";
    crew = "O_BTWord_Bearers_Mk_2VeteranTigrus_Combi_Melta_40k_01";

    class Turrets : Turrets {
        class CommanderOptics : CommanderOptics { gunnerType = "O_BTWord_Bearers_MK_3OfficerVolkite_Charger_40k_01"; };
        class Missile_Turret : Missile_Turret { gunnerType = "O_BTWord_Bearers_MK_4VeteranPhobos_Combi_Bolter_40k_01"; };
        class LeftTurt : LeftTurt { gunnerType = "O_BTWord_Bearers_MK_6Initiate_2Tigrus_Bolter_40k_01"; };
        class RightTurt : RightTurt { gunnerType = "O_BTWord_Bearers_MK_6Initiate_1Phobos_40k_01"; };
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

class O_OBTWordBearers40k_WB_IW_Damocles_Command_Rhino_01 : AoD_Rhino_Tank_Command_IW_OCimport_02 {
    author = "[SB] Balderic Caeledis";
    scope = 2;
    scopeCurator = 2;
    displayName = "WB - IW Damocles Command Rhino";
    side = 0;
    editorSubcategory = "BT_WordBearers_Command_Vehicles"; 
    faction = "O__BT_WordBearers_40k";
    crew = "O_BTWord_Bearers_Mk_2VeteranTigrus_Combi_Bolter_40k_01";

    class Turrets : Turrets {
        class CommanderOptics : CommanderOptics { gunnerType = "O_BTWord_Bearers_MK_4OfficerVolkite_Charger_40k_01"; };
        class Right_Turret : Right_Turret { gunnerType = "O_BTWord_Bearers_MK_6VeteranTigrus_Combi_Bolter_40k_01"; };
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