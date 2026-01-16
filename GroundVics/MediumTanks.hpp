class O_OBTWordBearers40k_WB_IW_Deimos_Predator_Annihilator_01 : AoD_Pred_Tank_Las_IW_OCimport_02 {
    author = "[SB] Balderic Caeledis";
    scope = 2;
    scopeCurator = 2;
    displayName = "WB - IW Deimos Predator Annihilator";
    side = 0;
    editorSubcategory = "BT_WordBearers_Medium_Tanks"; 
    faction = "O__BT_WordBearers_40k";
    crew = "O_BTWord_Bearers_Mk_2VeteranRotor_Cannon_40k_01";

    class Turrets : Turrets {
        class CommanderOptics : CommanderOptics { gunnerType = "O_BTWord_Bearers_MK_4OfficerLascannon_Shoulder_40k_01"; };
        class Left_Turret : Left_Turret { gunnerType = "O_BTWord_Bearers_Mk_6Initiate_3Phobos_40k_01"; };
        class Right_Turret : Right_Turret { gunnerType = "O_BTWord_Bearers_MK_5Initiate_2Tigrus_Bolter_40k_01"; };
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
class O_OBTWordBearers40k_WB_IW_Deimos_Predator_Destructor_01 : AoD_Pred_Tank_IW_OCimport_02 {
    author = "[SB] Balderic Caeledis";
    scope = 2;
    scopeCurator = 2;
    displayName = "WB - IW Deimos Predator Destructor";
    side = 0;
    editorSubcategory = "BT_WordBearers_Medium_Tanks"; 
    faction = "O__BT_WordBearers_40k";
    crew = "O_BTWord_Bearers_MK_6VeteranRyza_Plasma_Gun_40k_01";

    class Turrets : Turrets {
        class CommanderOptics : CommanderOptics { gunnerType = "O_BTWord_Bearers_MK_2OfficerHeavy_Bolter_40k_01"; };
        class Left_Turret : Left_Turret { gunnerType = "O_BTWord_Bearers_Mk_2Initiate_2Tigrus_Bolter_40k_01"; };
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

class O_OBTWordBearers40k_WB_IW_Deimos_Predator_Infernus_01 : AoD_Pred_Tank_Melt_IW_OCimport_02 {
    author = "[SB] Balderic Caeledis";
    scope = 2;
    scopeCurator = 2;
    displayName = "WB - IW Deimos Predator Infernus";
    side = 0;
    editorSubcategory = "BT_WordBearers_Medium_Tanks"; 
    faction = "O__BT_WordBearers_40k";
    crew = "O_BTWord_Bearers_MK_4VeteranTigrus_Combi_Bolter_40k_01";

    class Turrets : Turrets {
        class CommanderOptics : CommanderOptics { gunnerType = "O_BTWord_Bearers_MK_6OfficerPrimus_Melta_40k_01"; };
        class Left_Turret : Left_Turret { gunnerType = "O_BTWord_Bearers_Mk_2Initiate_2Tigrus_Bolter_40k_01"; };
        class Right_Turret : Right_Turret { gunnerType = "O_BTWord_Bearers_MK_6Initiate_1Tigrus_Bolter_40k_01"; };
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

class O_OBTWordBearers40k_WB_IW_Deimos_Predator_Neutron_Blaster_01 : AoD_Pred_Tank_NL_IW_OCimport_02 {
    author = "[SB] Balderic Caeledis";
    scope = 2;
    scopeCurator = 2;
    displayName = "WB - IW Deimos Predator Neutron Blaster";
    side = 0;
    editorSubcategory = "BT_WordBearers_Medium_Tanks"; 
    faction = "O__BT_WordBearers_40k";
    crew = "O_BTWord_Bearers_Mk_2VeteranPhobos_Combi_Bolter_40k_01";

    class Turrets : Turrets {
        class CommanderOptics : CommanderOptics { gunnerType = "O_BTWord_Bearers_MK_6OfficerVolkite_Charger_40k_01"; };
        class Left_Turret : Left_Turret { gunnerType = "O_BTWord_Bearers_Mk_2initiate_3Phobos_40k_01"; };
        class Right_Turret : Right_Turret { gunnerType = "O_BTWord_Bearers_MK_4Initiate_1Phobos_40k_01"; };
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