class O_OBTWordBearers40k_WB_WE_Land_Raider_Phobos_01 : AoD_Land_Raider_Tank_WE_OCimport_02 {
    author = "[SB] Balderic Caeledis";
    scope = 2;
    scopeCurator = 2;
    displayName = "WB Land Raider Phobos";
    side = 0;
    editorSubcategory = "BT_WordBearers_APCs"; 
    faction = "O__BT_WordBearers_40k";
    crew = "O_BTWord_Bearers_MK_4VeteranTigrus_Combi_Bolter_40k_01";

    class Turrets : Turrets {
        class CommanderOptics : CommanderOptics { gunnerType = "O_BTWord_Bearers_MK_6OfficerPrimus_Melta_40k_01"; };
        class LeftTurt : LeftTurt { gunnerType = "O_BTWord_Bearers_Mk_2initiate_1Phobos_40k_01"; };
        class RightTurt : RightTurt { gunnerType = "O_BTWord_Bearers_Mk_2Initiate_3Umbra_Bolter_40k_01"; };
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
class O_OBTWordBearers40k_WB_WE_Deimos_Rhino_01 : AoD_Rhino_Tank_WE_OCimport_02 {
    author = "[SB] Balderic Caeledis";
    scope = 2;
    scopeCurator = 2;
    displayName = "WB Deimos Rhino";
    side = 0;
    editorSubcategory = "BT_WordBearers_APCs"; 
    faction = "O__BT_WordBearers_40k";
    crew = "O_BTWord_Bearers_Mk_2Initiate_1Umbra_Bolter_40k_01";

    class Turrets : Turrets {
        class CommanderOptics : CommanderOptics { gunnerType = "O_BTWord_Bearers_Mk_2VeteranPhobos_Combi_Bolter_40k_01"; };
        class Right_Turret : Right_Turret { gunnerType = "O_BTWord_Bearers_Mk_2Initiate_2Umbra_Bolter_40k_01"; };
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
class O_OBTWordBearers40k_WB_WE_Razorback_Heavy_Bolter_01 : TIOW_SM_Razorback_WB_OCimport_02 {
    author = "[SB] Balderic Caeledis";
    scope = 2;
    scopeCurator = 2;
    displayName = "WB Razorback (Heavy Bolter)";
    side = 0;
    editorSubcategory = "BT_WordBearers_APCs"; 
    faction = "O__BT_WordBearers_40k";
    crew = "O_BTWord_Bearers_Mk_2VeteranUmbra_Bolter_40k_01";

    class Turrets : Turrets {
        class MainTurret : MainTurret { gunnerType = "O_BTWord_Bearers_Mk_4Initiate_3Tigrus_Bolter_40k_01"; };
        class RemoteTurret : RemoteTurret { gunnerType = "O_BTWord_Bearers_Mk_2Initiate_2Tigrus_Bolter_40k_01"; };
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

class O_OBTWordBearers40k_WB_WE_Razorback_Assault_Cannon_01 : TIOW_SM_Razorback_AC_WB_OCimport_02 {
    author = "[SB] Balderic Caeledis";
    scope = 2;
    scopeCurator = 2;
    displayName = "WB Razorback (Assault Cannon)";
    side = 0;
    editorSubcategory = "BT_WordBearers_APCs"; 
    faction = "O__BT_WordBearers_40k";
    crew = "O_BTWord_Bearers_MK_6VeteranTigrus_Combi_Bolter_40k_01";

    class Turrets : Turrets {
        class MainTurret : MainTurret { gunnerType = "O_BTWord_Bearers_MK_4Initiate_2Tigrus_Bolter_40k_01"; };
        class RemoteTurret : RemoteTurret { gunnerType = "O_BTWord_Bearers_Mk_2Initiate_3Tigrus_Bolter_40k_01"; };
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

class O_OBTWordBearers40k_WB_WE_Razorback_Lascannon_01 : TIOW_SM_Razorback_LC_WB_OCimport_02 {
    author = "[SB] Balderic Caeledis";
    scope = 2;
    scopeCurator = 2;
    displayName = "WB Razorback (Lascannon)";
    side = 0;
    editorSubcategory = "BT_WordBearers_APCs"; 
    faction = "O__BT_WordBearers_40k";
    crew = "O_BTWord_Bearers_Mk_2VeteranLascannon_Hip_40k_01";

    class Turrets : Turrets {
        class MainTurret : MainTurret { gunnerType = "O_BTWord_Bearers_Mk_2Initiate_3Tigrus_Bolter_40k_01"; };
        class RemoteTurret : RemoteTurret { gunnerType = "O_BTWord_Bearers_MK_4Initiate_1Phobos_40k_01"; };
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