class O_OBTWordBearers40k_WB_IW_Assault_Bike_Bolter_01 : TIOW_Bike_WB_1_OCimport_02 {
    author = "[SB] Balderic Caeledis";
    scope = 2;
    scopeCurator = 2;
    displayName = "WB - IW Assault Bike (Bolter)";
    side = 0;
    editorSubcategory = "BT_WordBearers_Small_Vehicles"; 
    faction = "O__BT_WordBearers_40k";
    crew = "O_BTWord_Bearers_MK_6Initiate_1Phobos_40k_01";


    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class O_OBTWordBearers40k_WB_IW_Assault_Bike_Plasma_01 : TIOW_Bike_WB_2_OCimport_02 {
    author = "[SB] Balderic Caeledis";
    scope = 2;
    scopeCurator = 2;
    displayName = "WB - IW Assault Bike (Plasma)";
    side = 0;
    editorSubcategory = "BT_WordBearers_Small_Vehicles"; 
    faction = "O__BT_WordBearers_40k";
    crew = "O_BTWord_Bearers_MK_4VeteranPhobos_Combi_Bolter_40k_01";


    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class O_OBTWordBearers40k_WB_IW_Attack_Bike_Bolter_01 : TIOW_Bike_WB_3_OCimport_02 {
    author = "[SB] Balderic Caeledis";
    scope = 2;
    scopeCurator = 2;
    displayName = "WB - IW Attack Bike (Bolter)";
    side = 0;
    editorSubcategory = "BT_WordBearers_Small_Vehicles"; 
    faction = "O__BT_WordBearers_40k";
    crew = "O_BTWord_Bearers_Mk_6Initiate_3Tigrus_Bolter_40k_01";

    class Turrets : Turrets {
        class Bike_Turret : Bike_Turret { gunnerType = "O_BTWord_Bearers_MK_2NeophytePhobos_40k_01"; };
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

class O_OBTWordBearers40k_WB_IW_Attack_Bike_Melta_01 : TIOW_Bike_WB_4_OCimport_02 {
    author = "[SB] Balderic Caeledis";
    scope = 2;
    scopeCurator = 2;
    displayName = "WB - IW Attack Bike (Melta)";
    side = 0;
    editorSubcategory = "BT_WordBearers_Small_Vehicles"; 
    faction = "O__BT_WordBearers_40k";
    crew = "O_BTWord_Bearers_Mk_2VeteranTigrus_Combi_Plasma_40k_01";

    class Turrets : Turrets {
        class Bike_Turret : Bike_Turret { gunnerType = "O_BTWord_Bearers_Mk_2initiate_1Phobos_40k_01"; };
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

class O_OBTWordBearers40k_WB_IW_Rapier_Laser_Destroyer_01 : AoD_Rapier_Tank_CSM_OCimport_02 {
    author = "[SB] Balderic Caeledis";
    scope = 2;
    scopeCurator = 2;
    displayName = "WB - IW Rapier Laser Destroyer";
    side = 0;
    editorSubcategory = "BT_WordBearers_Small_Vehicles"; 
    faction = "O__BT_WordBearers_40k";
    crew = "O_UAV_AI";

    class Turrets : Turrets {
        class MainTurret : MainTurret { gunnerType = ""; };
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


class O_OBTWordBearers40k_WB_IW_Rapier_Quad_Heavy_Bolters_01 : AoD_Rapier_Tank_CSM_HB_OCimport_02 {
    author = "[SB] Balderic Caeledis";
    scope = 2;
    scopeCurator = 2;
    displayName = "WB - IW Rapier Quad Heavy Bolters";
    side = 0;
    editorSubcategory = "BT_WordBearers_Small_Vehicles"; 
    faction = "O__BT_WordBearers_40k";
    crew = "O_UAV_AI";

    class Turrets : Turrets {
        class MainTurret : MainTurret { gunnerType = ""; };
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
