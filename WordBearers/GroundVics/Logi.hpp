class O_OBTWordBearers40k_WB_IW_Hippo_Atlas_01 : AoD_Hippo_Tank_CSG_Logi_OCimport_02 {
    author = "[SB] Balderic Caeledis";
    scope = 2;
    scopeCurator = 2;
    displayName = "WB - IW Hippo Atlas";
    side = 0;
    editorSubcategory = "BT_WordBearers_Logi_Vehicles";
    faction = "O__BT_WordBearers_40k";
    crew = "O_BTWord_Bearers_Mk_2Initiate_3Tigrus_Bolter_40k_01";

    class Turrets : Turrets {
        class CommanderOptics : CommanderOptics { gunnerType = "O_BTWord_Bearers_MK_4VeteranPhobos_40k_01"; };
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

class O_OBTWordBearers40k_WB_IW_Hippo_Judicator_01 : AoD_Hippo_Tank_CSG_OCimport_02 {
    author = "[SB] Balderic Caeledis";
    scope = 2;
    scopeCurator = 2;
    displayName = "WB - IW Hippo Judicator";
    side = 0;
    editorSubcategory = "BT_WordBearers_Logi_Vehicles";
    faction = "O__BT_WordBearers_40k";
    crew = "O_BTWord_Bearers_MK_6VeteranPhobos_40k_01";

    class Turrets : Turrets {
        class CommanderOptics : CommanderOptics { gunnerType = "O_BTWord_Bearers_Mk_2VeteranTigrus_Shield_40k_01"; };
        class CargoTurret_01 : CargoTurret_01 { gunnerType = "O_BTWord_Bearers_Mk_6Initiate_3Lascutter_40k_01"; };
        class CargoTurret_02 : CargoTurret_02 { gunnerType = "O_BTWord_Bearers_Mk_2VeteranLascutter_40k_01"; };
        class CargoTurret_03 : CargoTurret_03 { gunnerType = "O_BTWord_Bearers_MK_4NeophyteTigrus_Bolter_40k_01"; };
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


class O_OBTWordBearers40k_WB_IW_Hippo_Bastion_01 : AoD_Hippo_Tank_CSG_HB_OCimport_02 {
    author = "[SB] Balderic Caeledis";
    scope = 2;
    scopeCurator = 2;
    displayName = "WB - IW Hippo Bastion";
    side = 0;
    editorSubcategory = "BT_WordBearers_Logi_Vehicles";
    faction = "O__BT_WordBearers_40k";
    crew = "O_BTWord_Bearers_Mk_3Initiate_3Phobos_40k_01";

    class Turrets : Turrets {
        class CommanderOptics : CommanderOptics { gunnerType = "O_BTWord_Bearers_Mk_2OfficerPhobos_Combi_Bolter_40k_01"; };
        class CargoTurret_01 : CargoTurret_01 { gunnerType = "O_BTWord_Bearers_Mk_4Initiate_3Tigrus_Bolter_40k_01"; };
        class CargoTurret_02 : CargoTurret_02 { gunnerType = "O_BTWord_Bearers_Mk_4Initiate_3Tigrus_Bolter_40k_01"; };
        class CargoTurret_03 : CargoTurret_03 { gunnerType = "O_BTWord_Bearers_MK_6Initiate_1Phobos_40k_01"; };
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




class O_OBTWordBearers40k_WB_IW_Hippo_Munitorum_01 : AoD_Hippo_Tank_CSG_Arse_OCimport_02 {
    author = "[SB] Balderic Caeledis";
    scope = 2;
    scopeCurator = 2;
    displayName = "WB - IW Hippo Munitorum";
    side = 0;
    editorSubcategory = "BT_WordBearers_Logi_Vehicles";
    faction = "O__BT_WordBearers_40k";
    crew = "O_BTWord_Bearers_MK_3VeteranTigrus_Combi_Bolter_40k_01";

    class Turrets : Turrets {
        class CommanderOptics : CommanderOptics { gunnerType = "O_BTWord_Bearers_MK_3OfficerVolkite_Charger_40k_01"; };
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

class O_OBTWordBearers40k_WB_IW_Rapier_Lumentum_01 : AoD_Rapier_Tank_CSM_UGV_OCimport_02 {
    author = "[SB] Balderic Caeledis";
    scope = 2;
    scopeCurator = 2;
    displayName = "WB - IW Rapier Lumentum";
    side = 0;
    editorSubcategory = "BT_WordBearers_Logi_Vehicles";
    faction = "O__BT_WordBearers_40k";
    crew = "O_UAV_AI";


    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

