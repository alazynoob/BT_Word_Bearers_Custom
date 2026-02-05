class O_OBTWordBearers40k_WB_IW_Whirlwind_Arty_01 : AoD_Whirl_Tank_IW_OCimport_02 {
    author = "[SB] Balderic Caeledis";
    scope = 2;
    scopeCurator = 2;
    displayName = "WB - IW Whirlwind (Arty)";
    side = 0;
    editorSubcategory = "BT_WordBearers_Artillery_Vehicles"; 
    faction = "O__BT_WordBearers_40k";
    crew = "O_BTWord_Bearers_MK_4VeteranPrimus_Melta_40k_01";

    class Turrets : Turrets {
        class Main_Arty : Main_Arty { gunnerType = "O_BTWord_Bearers_MK_4OfficerLascannon_Shoulder_40k_01"; };
        class CommanderOptics : CommanderOptics { gunnerType = "O_BTWord_Bearers_Mk_2initiate_1Phobos_40k_01"; };
        class Right_Turret : Right_Turret { gunnerType = "O_BTWord_Bearers_MK_4Initiate_2Phobos_40k_01"; };
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

class O_OBTWordBearers40k_WB_IW_Whirlwind_AA_01 : AoD_Whirl_Tank_AA_IW_OCimport_02 {
    author = "[SB] Balderic Caeledis";
    scope = 2;
    scopeCurator = 2;
    displayName = "WB - IW Whirlwind (AA)";
    side = 0;
    editorSubcategory = "BT_WordBearers_Artillery_Vehicles"; 
    faction = "O__BT_WordBearers_40k";
    crew = "TIOW_Tactical_IW_1";

    class Turrets : Turrets {
        class Main_AA : Main_AA { gunnerType = "O_BTWord_Bearers_MK_2OfficerLascannon_Shoulder_40k_01"; };
        class CommanderOptics : CommanderOptics { gunnerType = "O_BTWord_Bearers_Mk_4initiate_1Phobos_40k_01"; };
        class Right_Turret : Right_Turret { gunnerType = "O_BTWord_Bearers_Mk_4Initiate_2Umbra_Bolter_40k_01"; };
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


class O_OBTWordBearers40k_WB_IW_Hippo_Deng_Mortis_01 : AoD_Hippo_Tank_CSG_Mort_OCimport_02 {
    author = "[SB] Balderic Caeledis";
    scope = 2;
    scopeCurator = 2;
    displayName = "WB - IW Hippo Deng-Mortis";
    side = 0;
    editorSubcategory = "BT_WordBearers_Artillery_Vehicles";
    faction = "O__BT_WordBearers_40k";

    crew = "O_BTWord_Bearers_MK_4VeteranTigrus_Combi_Bolter_40k_01";

    class Turrets : Turrets {
        class Main_Arty : Main_Arty { gunnerType = "O_BTWord_Bearers_Mk_2OfficerLascutter_40k_01"; };
        class CommanderOptics : CommanderOptics { gunnerType = "O_BTWord_Bearers_Mk_2Initiate_1Tigrus_Bolter_40k_01"; };
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

