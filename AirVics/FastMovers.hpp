
    class O_OBTWordBearers40k_WB_IW_Xiphon_Interceptor_01 : AoD_Xiphon_IW_OCimport_02 {
        author = "[SB] Balderic Caeledis";
        scope = 2;
        scopeCurator = 2;
        displayName = "WB - IW Xiphon Interceptor";
        side = 0;
        editorSubcategory = "BT_WordBearers_Fast_Movers";
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

    class O_OBTWordBearers40k_WB_IW_Xiphon_Bomber_01 : AoD_Xiphon_IW_B_OCimport_02 {
        author = "[SB] Balderic Caeledis";
        scope = 2;
        scopeCurator = 2;
        displayName = "WB - IW Xiphon Bomber";
        side = 0;
        editorSubcategory = "BT_WordBearers_Fast_Movers";
    faction = "O__BT_WordBearers_40k";
        crew = "O_BTWord_Bearers_MK_6VeteranPhobos_40k_01";


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

