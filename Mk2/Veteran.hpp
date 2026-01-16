class O_BTWord_Bearers_MK_2VeteranHeavy_Bolter_40k_01 : TIOW_Tactical_WB_7_OCimport_02 {
    author = "Elf Supremacist";
    scope = 2;
    scopeCurator = 2;
    displayName = "MK.2 Veteran Heavy Bolter";
    side = 0;
    faction = "O__BT_WordBearers_40k";
    editorSubcategory = "BT_WordBearers_MkII_Veteran";
    identityTypes[] = {"TIOW_Marine_Head","LanguageENGVR_F","NoGlasses"};

    uniformClass = "30k_steve_armour_mk_2_Vet_WB";

    linkedItems[] = {"WBA_ChaosPaul9_2","30k_steve_helmet_mk_2_2_WB","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","AOD_INVS_NVG"};
    respawnlinkedItems[] = {"WBA_ChaosPaul9_2","30k_steve_helmet_mk_2_2_WB","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","AOD_INVS_NVG"};

    weapons[] = {"AoD_Heavy_Boltgun_Basic","Web_Melee_Chain_Test","ic_cad_magnoculars"};
    respawnWeapons[] = {"AoD_Heavy_Boltgun_Basic","Web_Melee_Chain_Test","ic_cad_magnoculars"};

    magazines[] = {"AoD_Heavy_Boltgun_Mag","Laserbatteries","AoD_Heavy_Boltgun_Mag","Laserbatteries"};
    respawnMagazines[] = {"AoD_Heavy_Boltgun_Mag","Laserbatteries","AoD_Heavy_Boltgun_Mag","Laserbatteries"};

    backpack = "tiow_chaos1powerpack_WB";

    ALiVE_orbatCreator_loadout[] = {{"AoD_Heavy_Boltgun_Basic","","","",{"AoD_Heavy_Boltgun_Mag",85},{},""},{},{"Web_Melee_Chain_Test","","","",{},{},""},{"30k_steve_armour_mk_2_Vet_WB",{{"ACE_elasticBandage",20},{"ACE_tourniquet",7},{"ACE_fieldDressing",3},{"ACE_packingBandage",3},{"ACE_morphine",3},{"TIOW_sm_frag_grenade_mag",1,1},{"BT_Frag_Grenade_Alt_Mag",5,1},{"BT_Krak_Grenade_Mag",5,1},{"BT_Smoke_Grenade_Mag",5,1}}},{"WBA_ChaosPaul9_2",{{"AoD_Heavy_Boltgun_Mag",2,85}}},{"tiow_chaos1powerpack_WB",{{"AoD_Heavy_Boltgun_Mag",7,85}}},"30k_steve_helmet_mk_2_2_WB","",{"ic_cad_magnoculars","","","",{"Laserbatteries",1},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","AOD_INVS_NVG"}};


    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class O_BTWord_Bearers_Mk_2VeteranLascannon_Hip_40k_01 : O_BTWord_Bearers_MK_2VeteranHeavy_Bolter_40k_01 {
    author = "Elf Supremacist";
    scope = 2;
    scopeCurator = 2;
    displayName = "Mk.2 Veteran Lascannon Hip";
    side = 0;
    faction = "O__BT_WordBearers_40k";
    editorSubcategory = "BT_WordBearers_MkII_Veteran";
    identityTypes[] = {"TIOW_Marine_Head","LanguageENGVR_F","NoGlasses"};

    uniformClass = "30k_steve_armour_mk_2_Vet_WB";

    linkedItems[] = {"WBA_ChaosPaul9_2","30k_steve_helmet_mk_2_2_WB","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","AOD_INVS_NVG"};
    respawnlinkedItems[] = {"WBA_ChaosPaul9_2","30k_steve_helmet_mk_2_2_WB","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","AOD_INVS_NVG"};

    weapons[] = {"AoD_LasCannon_NoShoulder","Web_Melee_Chain_Test","ic_cad_magnoculars"};
    respawnWeapons[] = {"AoD_LasCannon_NoShoulder","Web_Melee_Chain_Test","ic_cad_magnoculars"};

    magazines[] = {"AoD_LasCannon_Mag","Laserbatteries","AoD_LasCannon_Mag","Laserbatteries"};
    respawnMagazines[] = {"AoD_LasCannon_Mag","Laserbatteries","AoD_LasCannon_Mag","Laserbatteries"};

    backpack = "tiow_chaos1powerpack_WB";

    ALiVE_orbatCreator_loadout[] = {{"AoD_LasCannon_NoShoulder","","","",{"AoD_LasCannon_Mag",30},{},""},{},{"Web_Melee_Chain_Test","","","",{},{},""},{"30k_steve_armour_mk_2_Vet_WB",{{"ACE_elasticBandage",20},{"ACE_tourniquet",7},{"ACE_fieldDressing",3},{"ACE_packingBandage",3},{"ACE_morphine",3},{"TIOW_sm_frag_grenade_mag",1,1},{"BT_Frag_Grenade_Alt_Mag",5,1},{"BT_Krak_Grenade_Mag",5,1},{"BT_Smoke_Grenade_Mag",5,1}}},{"WBA_ChaosPaul9_2",{{"AoD_LasCannon_Mag",2,30}}},{"tiow_chaos1powerpack_WB",{{"AoD_LasCannon_Mag",7,30}}},"30k_steve_helmet_mk_2_2_WB","",{"ic_cad_magnoculars","","","",{"Laserbatteries",1},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","AOD_INVS_NVG"}};


    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class O_BTWord_Bearers_Mk_2VeteranLascannon_Shoulder_40k_01 : O_BTWord_Bearers_Mk_2VeteranLascannon_Hip_40k_01 {
    author = "Elf Supremacist";
    scope = 2;
    scopeCurator = 2;
    displayName = "Mk.2 Veteran Lascannon Shoulder";
    side = 0;
    faction = "O__BT_WordBearers_40k";
    editorSubcategory = "BT_WordBearers_MkII_Veteran";
    identityTypes[] = {"TIOW_Marine_Head","LanguageENGVR_F","NoGlasses"};

    uniformClass = "30k_steve_armour_mk_2_Vet_WB";

    linkedItems[] = {"WBA_ChaosPaul9_2","30k_steve_helmet_mk_2_2_WB","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","AOD_INVS_NVG"};
    respawnlinkedItems[] = {"WBA_ChaosPaul9_2","30k_steve_helmet_mk_2_2_WB","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","AOD_INVS_NVG"};

    weapons[] = {"AoD_LasCannon_Basic","Web_Melee_Chain_Test","ic_cad_magnoculars"};
    respawnWeapons[] = {"AoD_LasCannon_Basic","Web_Melee_Chain_Test","ic_cad_magnoculars"};

    magazines[] = {"AoD_LasCannon_Mag","Laserbatteries","AoD_LasCannon_Mag","Laserbatteries"};
    respawnMagazines[] = {"AoD_LasCannon_Mag","Laserbatteries","AoD_LasCannon_Mag","Laserbatteries"};

    backpack = "tiow_chaos1powerpack_WB";

    ALiVE_orbatCreator_loadout[] = {{"AoD_LasCannon_Basic","","","",{"AoD_LasCannon_Mag",30},{},""},{},{"Web_Melee_Chain_Test","","","",{},{},""},{"30k_steve_armour_mk_2_Vet_WB",{{"ACE_elasticBandage",20},{"ACE_tourniquet",7},{"ACE_fieldDressing",3},{"ACE_packingBandage",3},{"ACE_morphine",3},{"TIOW_sm_frag_grenade_mag",1,1},{"BT_Frag_Grenade_Alt_Mag",5,1},{"BT_Krak_Grenade_Mag",5,1},{"BT_Smoke_Grenade_Mag",5,1}}},{"WBA_ChaosPaul9_2",{{"AoD_LasCannon_Mag",2,30}}},{"tiow_chaos1powerpack_WB",{{"AoD_LasCannon_Mag",7,30}}},"30k_steve_helmet_mk_2_2_WB","",{"ic_cad_magnoculars","","","",{"Laserbatteries",1},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","AOD_INVS_NVG"}};


    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class O_BTWord_Bearers_Mk_2VeteranLascutter_40k_01 : O_BTWord_Bearers_Mk_2VeteranLascannon_Shoulder_40k_01 {
    author = "Elf Supremacist";
    scope = 2;
    scopeCurator = 2;
    displayName = "Mk.2 Veteran Lascutter";
    side = 0;
    faction = "O__BT_WordBearers_40k";
    editorSubcategory = "BT_WordBearers_MkII_Veteran";
    identityTypes[] = {"TIOW_Marine_Head","LanguageENGVR_F","NoGlasses"};

    uniformClass = "30k_steve_armour_mk_2_Vet_WB";

    linkedItems[] = {"WBA_ChaosPaul9_2","30k_steve_helmet_mk_2_2_WB","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","AOD_INVS_NVG"};
    respawnlinkedItems[] = {"WBA_ChaosPaul9_2","30k_steve_helmet_mk_2_2_WB","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","AOD_INVS_NVG"};

    weapons[] = {"AoD_Lascutter_Basic","Web_Melee_Chain_Test","ic_cad_magnoculars"};
    respawnWeapons[] = {"AoD_Lascutter_Basic","Web_Melee_Chain_Test","ic_cad_magnoculars"};

    magazines[] = {"AoD_Lascutter_Mag","Laserbatteries","AoD_Lascutter_Mag","Laserbatteries"};
    respawnMagazines[] = {"AoD_Lascutter_Mag","Laserbatteries","AoD_Lascutter_Mag","Laserbatteries"};

    backpack = "tiow_chaos1powerpack_WB";

    ALiVE_orbatCreator_loadout[] = {{"AoD_Lascutter_Basic","","","",{"AoD_Lascutter_Mag",10},{},""},{},{"Web_Melee_Chain_Test","","","",{},{},""},{"30k_steve_armour_mk_2_Vet_WB",{{"ACE_elasticBandage",20},{"ACE_tourniquet",7},{"ACE_fieldDressing",3},{"ACE_packingBandage",3},{"ACE_morphine",3},{"TIOW_sm_frag_grenade_mag",1,1},{"BT_Frag_Grenade_Alt_Mag",5,1},{"BT_Krak_Grenade_Mag",5,1},{"BT_Smoke_Grenade_Mag",5,1}}},{"WBA_ChaosPaul9_2",{{"AoD_Lascutter_Mag",7,10}}},{"tiow_chaos1powerpack_WB",{{"AoD_Lascutter_Mag",10,10}}},"30k_steve_helmet_mk_2_2_WB","",{"ic_cad_magnoculars","","","",{"Laserbatteries",1},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","AOD_INVS_NVG"}};


    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class O_BTWord_Bearers_Mk_2VeteranLascutter_Shield_40k_01 : O_BTWord_Bearers_Mk_2VeteranLascutter_40k_01 {
    author = "Elf Supremacist";
    scope = 2;
    scopeCurator = 2;
    displayName = "Mk.2 Veteran Lascutter Shield";
    side = 0;
    faction = "O__BT_WordBearers_40k";
    editorSubcategory = "BT_WordBearers_MkII_Veteran";
    identityTypes[] = {"TIOW_Marine_Head","LanguageENGVR_F","NoGlasses"};

    uniformClass = "30k_steve_armour_mk_2_Vet_WB";

    linkedItems[] = {"WBA_ChaosPaul9_2","30k_steve_helmet_mk_2_2_WB","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","AOD_INVS_NVG"};
    respawnlinkedItems[] = {"WBA_ChaosPaul9_2","30k_steve_helmet_mk_2_2_WB","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","AOD_INVS_NVG"};

    weapons[] = {"AoD_Lascutter_Shield_Basic","Web_Melee_Chain_Test","ic_cad_magnoculars"};
    respawnWeapons[] = {"AoD_Lascutter_Shield_Basic","Web_Melee_Chain_Test","ic_cad_magnoculars"};

    magazines[] = {"AoD_Lascutter_Mag","Laserbatteries","AoD_Lascutter_Mag","Laserbatteries"};
    respawnMagazines[] = {"AoD_Lascutter_Mag","Laserbatteries","AoD_Lascutter_Mag","Laserbatteries"};

    backpack = "tiow_chaos1powerpack_WB";

    ALiVE_orbatCreator_loadout[] = {{"AoD_Lascutter_Shield_Basic","","","",{"AoD_Lascutter_Mag",10},{},""},{},{"Web_Melee_Chain_Test","","","",{},{},""},{"30k_steve_armour_mk_2_Vet_WB",{{"ACE_elasticBandage",20},{"ACE_tourniquet",7},{"ACE_fieldDressing",3},{"ACE_packingBandage",3},{"ACE_morphine",3},{"TIOW_sm_frag_grenade_mag",1,1},{"BT_Frag_Grenade_Alt_Mag",5,1},{"BT_Krak_Grenade_Mag",5,1},{"BT_Smoke_Grenade_Mag",5,1}}},{"WBA_ChaosPaul9_2",{{"AoD_Lascutter_Mag",7,10}}},{"tiow_chaos1powerpack_WB",{{"AoD_Lascutter_Mag",10,10}}},"30k_steve_helmet_mk_2_2_WB","",{"ic_cad_magnoculars","","","",{"Laserbatteries",1},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","AOD_INVS_NVG"}};


    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class O_BTWord_Bearers_Mk_2VeteranMulti_Melta_40k_01 : O_BTWord_Bearers_Mk_2VeteranLascutter_Shield_40k_01 {
    author = "Elf Supremacist";
    scope = 2;
    scopeCurator = 2;
    displayName = "Mk.2 Veteran Multi Melta";
    side = 0;
    faction = "O__BT_WordBearers_40k";
    editorSubcategory = "BT_WordBearers_MkII_Veteran";
    identityTypes[] = {"TIOW_Marine_Head","LanguageENGVR_F","NoGlasses"};

    uniformClass = "30k_steve_armour_mk_2_Vet_WB";

    linkedItems[] = {"WBA_ChaosPaul9_2","30k_steve_helmet_mk_2_2_WB","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","AOD_INVS_NVG"};
    respawnlinkedItems[] = {"WBA_ChaosPaul9_2","30k_steve_helmet_mk_2_2_WB","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","AOD_INVS_NVG"};

    weapons[] = {"AoD_Multi_Melta_Basic","Web_Melee_Chain_Test","ic_cad_magnoculars"};
    respawnWeapons[] = {"AoD_Multi_Melta_Basic","Web_Melee_Chain_Test","ic_cad_magnoculars"};

    magazines[] = {"AoD_Multi_Melta_Mag","Laserbatteries","AoD_Multi_Melta_Mag","Laserbatteries"};
    respawnMagazines[] = {"AoD_Multi_Melta_Mag","Laserbatteries","AoD_Multi_Melta_Mag","Laserbatteries"};

    backpack = "tiow_chaos1powerpack_WB";

    ALiVE_orbatCreator_loadout[] = {{"AoD_Multi_Melta_Basic","","","",{"AoD_Multi_Melta_Mag",20},{},""},{},{"Web_Melee_Chain_Test","","","",{},{},""},{"30k_steve_armour_mk_2_Vet_WB",{{"ACE_elasticBandage",20},{"ACE_tourniquet",7},{"ACE_fieldDressing",3},{"ACE_packingBandage",3},{"ACE_morphine",3},{"TIOW_sm_frag_grenade_mag",1,1},{"BT_Frag_Grenade_Alt_Mag",5,1},{"BT_Krak_Grenade_Mag",5,1},{"BT_Smoke_Grenade_Mag",5,1}}},{"WBA_ChaosPaul9_2",{{"AoD_Multi_Melta_Mag",3,20}}},{"tiow_chaos1powerpack_WB",{{"AoD_Multi_Melta_Mag",8,20}}},"30k_steve_helmet_mk_2_2_WB","",{"ic_cad_magnoculars","","","",{"Laserbatteries",1},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","AOD_INVS_NVG"}};


    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class O_BTWord_Bearers_Mk_2VeteranPhobos_40k_01 : O_BTWord_Bearers_Mk_2VeteranMulti_Melta_40k_01 {
    author = "Elf Supremacist";
    scope = 2;
    scopeCurator = 2;
    displayName = "Mk.2 Veteran Phobos";
    side = 0;
    faction = "O__BT_WordBearers_40k";
    editorSubcategory = "BT_WordBearers_MkII_Veteran";
    identityTypes[] = {"TIOW_Marine_Head","LanguageENGVR_F","NoGlasses"};

    uniformClass = "30k_steve_armour_mk_2_Vet_WB";

    linkedItems[] = {"WBA_ChaosPaul9_2","30k_steve_helmet_mk_2_2_WB","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","AOD_INVS_NVG"};
    respawnlinkedItems[] = {"WBA_ChaosPaul9_2","30k_steve_helmet_mk_2_2_WB","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","AOD_INVS_NVG"};

    weapons[] = {"AoD_Phobos_Boltgun_Basic","Web_Melee_Chain_Test","ic_cad_magnoculars"};
    respawnWeapons[] = {"AoD_Phobos_Boltgun_Basic","Web_Melee_Chain_Test","ic_cad_magnoculars"};

    magazines[] = {"AoD_Phobos_Bolt_Mag","Laserbatteries","AoD_Phobos_Bolt_Mag","Laserbatteries"};
    respawnMagazines[] = {"AoD_Phobos_Bolt_Mag","Laserbatteries","AoD_Phobos_Bolt_Mag","Laserbatteries"};

    backpack = "tiow_chaos1powerpack_WB";

    ALiVE_orbatCreator_loadout[] = {{"AoD_Phobos_Boltgun_Basic","","","",{"AoD_Phobos_Bolt_Mag",30},{},""},{},{"Web_Melee_Chain_Test","","","",{},{},""},{"30k_steve_armour_mk_2_Vet_WB",{{"ACE_elasticBandage",20},{"ACE_tourniquet",7},{"ACE_fieldDressing",3},{"ACE_packingBandage",3},{"ACE_morphine",3},{"TIOW_sm_frag_grenade_mag",1,1},{"BT_Frag_Grenade_Alt_Mag",5,1},{"BT_Krak_Grenade_Mag",5,1},{"BT_Smoke_Grenade_Mag",5,1}}},{"WBA_ChaosPaul9_2",{{"AoD_Phobos_Bolt_Mag",4,30}}},{"tiow_chaos1powerpack_WB",{{"AoD_Phobos_Bolt_Mag",10,30}}},"30k_steve_helmet_mk_2_2_WB","",{"ic_cad_magnoculars","","","",{"Laserbatteries",1},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","AOD_INVS_NVG"}};


    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class O_BTWord_Bearers_Mk_2VeteranPhobos_Atrox_40k_01 : O_BTWord_Bearers_Mk_2VeteranPhobos_40k_01 {
    author = "Elf Supremacist";
    scope = 2;
    scopeCurator = 2;
    displayName = "Mk.2 Veteran Phobos Atrox";
    side = 0;
    faction = "O__BT_WordBearers_40k";
    editorSubcategory = "BT_WordBearers_MkII_Veteran";
    identityTypes[] = {"TIOW_Marine_Head","LanguageENGVR_F","NoGlasses"};

    uniformClass = "30k_steve_armour_mk_2_Vet_WB";

    linkedItems[] = {"WBA_ChaosPaul9_2","30k_steve_helmet_mk_2_2_WB","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","AOD_INVS_NVG"};
    respawnlinkedItems[] = {"WBA_ChaosPaul9_2","30k_steve_helmet_mk_2_2_WB","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","AOD_INVS_NVG"};

    weapons[] = {"AoD_Atrox_Basic","Web_Melee_Chain_Test","ic_cad_magnoculars"};
    respawnWeapons[] = {"AoD_Atrox_Basic","Web_Melee_Chain_Test","ic_cad_magnoculars"};

    magazines[] = {"AoD_Atrox_Bolt_Mag","Laserbatteries","AoD_Atrox_Bolt_Mag","Laserbatteries"};
    respawnMagazines[] = {"AoD_Atrox_Bolt_Mag","Laserbatteries","AoD_Atrox_Bolt_Mag","Laserbatteries"};

    backpack = "tiow_chaos1powerpack_WB";

    ALiVE_orbatCreator_loadout[] = {{"AoD_Atrox_Basic","","","",{"AoD_Atrox_Bolt_Mag",15},{},""},{},{"Web_Melee_Chain_Test","","","",{},{},""},{"30k_steve_armour_mk_2_Vet_WB",{{"ACE_elasticBandage",20},{"ACE_tourniquet",7},{"ACE_fieldDressing",3},{"ACE_packingBandage",3},{"ACE_morphine",3},{"TIOW_sm_frag_grenade_mag",1,1},{"BT_Frag_Grenade_Alt_Mag",5,1},{"BT_Krak_Grenade_Mag",5,1},{"BT_Smoke_Grenade_Mag",5,1}}},{"WBA_ChaosPaul9_2",{{"AoD_Atrox_Bolt_Mag",4,15}}},{"tiow_chaos1powerpack_WB",{{"AoD_Atrox_Bolt_Mag",10,15}}},"30k_steve_helmet_mk_2_2_WB","",{"ic_cad_magnoculars","","","",{"Laserbatteries",1},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","AOD_INVS_NVG"}};


    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class O_BTWord_Bearers_Mk_2VeteranPhobos_Combi_Bolter_40k_01 : O_BTWord_Bearers_Mk_2VeteranPhobos_Atrox_40k_01 {
    author = "Elf Supremacist";
    scope = 2;
    scopeCurator = 2;
    displayName = "Mk.2 Veteran Phobos Combi Bolter";
    side = 0;
    faction = "O__BT_WordBearers_40k";
    editorSubcategory = "BT_WordBearers_MkII_Veteran";
    identityTypes[] = {"TIOW_Marine_Head","LanguageENGVR_F","NoGlasses"};

    uniformClass = "30k_steve_armour_mk_2_Vet_WB";

    linkedItems[] = {"WBA_ChaosPaul9_2","30k_steve_helmet_mk_2_2_WB","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","AOD_INVS_NVG"};
    respawnlinkedItems[] = {"WBA_ChaosPaul9_2","30k_steve_helmet_mk_2_2_WB","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","AOD_INVS_NVG"};

    weapons[] = {"AoD_Pcombi_Basic","Web_Melee_Chain_Test","ic_cad_magnoculars"};
    respawnWeapons[] = {"AoD_Pcombi_Basic","Web_Melee_Chain_Test","ic_cad_magnoculars"};

    magazines[] = {"AoD_Pcombi_Bolt_Mag","Laserbatteries","AoD_Pcombi_Bolt_Mag","Laserbatteries"};
    respawnMagazines[] = {"AoD_Pcombi_Bolt_Mag","Laserbatteries","AoD_Pcombi_Bolt_Mag","Laserbatteries"};

    backpack = "tiow_chaos1powerpack_WB";

    ALiVE_orbatCreator_loadout[] = {{"AoD_Pcombi_Basic","","","",{"AoD_Pcombi_Bolt_Mag",60},{},""},{},{"Web_Melee_Chain_Test","","","",{},{},""},{"30k_steve_armour_mk_2_Vet_WB",{{"ACE_elasticBandage",20},{"ACE_tourniquet",7},{"ACE_fieldDressing",3},{"ACE_packingBandage",3},{"ACE_morphine",3},{"TIOW_sm_frag_grenade_mag",1,1},{"BT_Frag_Grenade_Alt_Mag",5,1},{"BT_Krak_Grenade_Mag",5,1},{"BT_Smoke_Grenade_Mag",5,1}}},{"WBA_ChaosPaul9_2",{{"AoD_Pcombi_Bolt_Mag",2,60}}},{"tiow_chaos1powerpack_WB",{{"AoD_Pcombi_Bolt_Mag",5,60}}},"30k_steve_helmet_mk_2_2_WB","",{"ic_cad_magnoculars","","","",{"Laserbatteries",1},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","AOD_INVS_NVG"}};


    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class O_BTWord_Bearers_Mk_2VeteranPhobos_Shield_40k_01 : O_BTWord_Bearers_Mk_2VeteranPhobos_Combi_Bolter_40k_01 {
    author = "Elf Supremacist";
    scope = 2;
    scopeCurator = 2;
    displayName = "Mk.2 Veteran Phobos Shield";
    side = 0;
    faction = "O__BT_WordBearers_40k";
    editorSubcategory = "BT_WordBearers_MkII_Veteran";
    identityTypes[] = {"TIOW_Marine_Head","LanguageENGVR_F","NoGlasses"};

    uniformClass = "30k_steve_armour_mk_2_Vet_WB";

    linkedItems[] = {"WBA_ChaosPaul9_2","30k_steve_helmet_mk_2_2_WB","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","AOD_INVS_NVG"};
    respawnlinkedItems[] = {"WBA_ChaosPaul9_2","30k_steve_helmet_mk_2_2_WB","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","AOD_INVS_NVG"};

    weapons[] = {"AoD_Phobos_Shield_Basic","Web_Melee_Chain_Test","ic_cad_magnoculars"};
    respawnWeapons[] = {"AoD_Phobos_Shield_Basic","Web_Melee_Chain_Test","ic_cad_magnoculars"};

    magazines[] = {"AoD_Phobos_Bolt_Mag","Laserbatteries","AoD_Phobos_Bolt_Mag","Laserbatteries"};
    respawnMagazines[] = {"AoD_Phobos_Bolt_Mag","Laserbatteries","AoD_Phobos_Bolt_Mag","Laserbatteries"};

    backpack = "tiow_chaos1powerpack_WB";

    ALiVE_orbatCreator_loadout[] = {{"AoD_Phobos_Shield_Basic","","","",{"AoD_Phobos_Bolt_Mag",30},{},""},{},{"Web_Melee_Chain_Test","","","",{},{},""},{"30k_steve_armour_mk_2_Vet_WB",{{"ACE_elasticBandage",20},{"ACE_tourniquet",7},{"ACE_fieldDressing",3},{"ACE_packingBandage",3},{"ACE_morphine",3},{"TIOW_sm_frag_grenade_mag",1,1},{"BT_Frag_Grenade_Alt_Mag",5,1},{"BT_Krak_Grenade_Mag",5,1},{"BT_Smoke_Grenade_Mag",5,1}}},{"WBA_ChaosPaul9_2",{{"AoD_Phobos_Bolt_Mag",4,30}}},{"tiow_chaos1powerpack_WB",{{"AoD_Phobos_Bolt_Mag",10,30}}},"30k_steve_helmet_mk_2_2_WB","",{"ic_cad_magnoculars","","","",{"Laserbatteries",1},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","AOD_INVS_NVG"}};


    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class O_BTWord_Bearers_Mk_2VeteranPlasma_Cannon_Hip_40k_01 : O_BTWord_Bearers_Mk_2VeteranPhobos_Shield_40k_01 {
    author = "Elf Supremacist";
    scope = 2;
    scopeCurator = 2;
    displayName = "Mk.2 Veteran Plasma Cannon Hip";
    side = 0;
    faction = "O__BT_WordBearers_40k";
    editorSubcategory = "BT_WordBearers_MkII_Veteran";
    identityTypes[] = {"TIOW_Marine_Head","LanguageENGVR_F","NoGlasses"};

    uniformClass = "30k_steve_armour_mk_2_Vet_WB";

    linkedItems[] = {"WBA_ChaosPaul9_2","30k_steve_helmet_mk_2_2_WB","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","AOD_INVS_NVG"};
    respawnlinkedItems[] = {"WBA_ChaosPaul9_2","30k_steve_helmet_mk_2_2_WB","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","AOD_INVS_NVG"};

    weapons[] = {"AoD_Plasma_Cannon_Under","Web_Melee_Chain_Test","ic_cad_magnoculars"};
    respawnWeapons[] = {"AoD_Plasma_Cannon_Under","Web_Melee_Chain_Test","ic_cad_magnoculars"};

    magazines[] = {"AoD_Plasma_Cannon_Mag","Laserbatteries","AoD_Plasma_Cannon_Mag","Laserbatteries"};
    respawnMagazines[] = {"AoD_Plasma_Cannon_Mag","Laserbatteries","AoD_Plasma_Cannon_Mag","Laserbatteries"};

    backpack = "tiow_chaos1powerpack_WB";

    ALiVE_orbatCreator_loadout[] = {{"AoD_Plasma_Cannon_Under","","","",{"AoD_Plasma_Cannon_Mag",15},{},""},{},{"Web_Melee_Chain_Test","","","",{},{},""},{"30k_steve_armour_mk_2_Vet_WB",{{"ACE_elasticBandage",20},{"ACE_tourniquet",7},{"ACE_fieldDressing",3},{"ACE_packingBandage",3},{"ACE_morphine",3},{"TIOW_sm_frag_grenade_mag",1,1},{"BT_Frag_Grenade_Alt_Mag",5,1},{"BT_Krak_Grenade_Mag",5,1},{"BT_Smoke_Grenade_Mag",5,1}}},{"WBA_ChaosPaul9_2",{{"AoD_Plasma_Cannon_Mag",2,15}}},{"tiow_chaos1powerpack_WB",{{"AoD_Plasma_Cannon_Mag",5,15}}},"30k_steve_helmet_mk_2_2_WB","",{"ic_cad_magnoculars","","","",{"Laserbatteries",1},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","AOD_INVS_NVG"}};


    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class O_BTWord_Bearers_Mk_2VeteranPlasma_Cannon_Shoulder_40k_01 : O_BTWord_Bearers_Mk_2VeteranPlasma_Cannon_Hip_40k_01 {
    author = "Elf Supremacist";
    scope = 2;
    scopeCurator = 2;
    displayName = "Mk.2 Veteran Plasma Cannon Shoulder";
    side = 0;
    faction = "O__BT_WordBearers_40k";
    editorSubcategory = "BT_WordBearers_MkII_Veteran";
    identityTypes[] = {"TIOW_Marine_Head","LanguageENGVR_F","NoGlasses"};

    uniformClass = "30k_steve_armour_mk_2_Vet_WB";

    linkedItems[] = {"WBA_ChaosPaul9_2","30k_steve_helmet_mk_2_2_WB","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","AOD_INVS_NVG"};
    respawnlinkedItems[] = {"WBA_ChaosPaul9_2","30k_steve_helmet_mk_2_2_WB","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","AOD_INVS_NVG"};

    weapons[] = {"AoD_Plasma_Cannon_Basic","Web_Melee_Chain_Test","ic_cad_magnoculars"};
    respawnWeapons[] = {"AoD_Plasma_Cannon_Basic","Web_Melee_Chain_Test","ic_cad_magnoculars"};

    magazines[] = {"AoD_Plasma_Cannon_Mag","Laserbatteries","AoD_Plasma_Cannon_Mag","Laserbatteries"};
    respawnMagazines[] = {"AoD_Plasma_Cannon_Mag","Laserbatteries","AoD_Plasma_Cannon_Mag","Laserbatteries"};

    backpack = "tiow_chaos1powerpack_WB";

    ALiVE_orbatCreator_loadout[] = {{"AoD_Plasma_Cannon_Basic","","","",{"AoD_Plasma_Cannon_Mag",15},{},""},{},{"Web_Melee_Chain_Test","","","",{},{},""},{"30k_steve_armour_mk_2_Vet_WB",{{"ACE_elasticBandage",20},{"ACE_tourniquet",7},{"ACE_fieldDressing",3},{"ACE_packingBandage",3},{"ACE_morphine",3},{"TIOW_sm_frag_grenade_mag",1,1},{"BT_Frag_Grenade_Alt_Mag",5,1},{"BT_Krak_Grenade_Mag",5,1},{"BT_Smoke_Grenade_Mag",5,1}}},{"WBA_ChaosPaul9_2",{{"AoD_Plasma_Cannon_Mag",2,15}}},{"tiow_chaos1powerpack_WB",{{"AoD_Plasma_Cannon_Mag",5,15}}},"30k_steve_helmet_mk_2_2_WB","",{"ic_cad_magnoculars","","","",{"Laserbatteries",1},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","AOD_INVS_NVG"}};


    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class O_BTWord_Bearers_Mk_2VeteranPrimus_Melta_40k_01 : O_BTWord_Bearers_Mk_2VeteranPlasma_Cannon_Shoulder_40k_01 {
    author = "Elf Supremacist";
    scope = 2;
    scopeCurator = 2;
    displayName = "Mk.2 Veteran Primus Melta";
    side = 0;
    faction = "O__BT_WordBearers_40k";
    editorSubcategory = "BT_WordBearers_MkII_Veteran";
    identityTypes[] = {"TIOW_Marine_Head","LanguageENGVR_F","NoGlasses"};

    uniformClass = "30k_steve_armour_mk_2_Vet_WB";

    linkedItems[] = {"WBA_ChaosPaul9_2","30k_steve_helmet_mk_2_2_WB","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","AOD_INVS_NVG"};
    respawnlinkedItems[] = {"WBA_ChaosPaul9_2","30k_steve_helmet_mk_2_2_WB","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","AOD_INVS_NVG"};

    weapons[] = {"AoD_Meltagun_Basic","Web_Melee_Chain_Test","ic_cad_magnoculars"};
    respawnWeapons[] = {"AoD_Meltagun_Basic","Web_Melee_Chain_Test","ic_cad_magnoculars"};

    magazines[] = {"AoD_Meltagun_Mag","Laserbatteries","AoD_Meltagun_Mag","Laserbatteries"};
    respawnMagazines[] = {"AoD_Meltagun_Mag","Laserbatteries","AoD_Meltagun_Mag","Laserbatteries"};

    backpack = "tiow_chaos1powerpack_WB";

    ALiVE_orbatCreator_loadout[] = {{"AoD_Meltagun_Basic","","","",{"AoD_Meltagun_Mag",10},{},""},{},{"Web_Melee_Chain_Test","","","",{},{},""},{"30k_steve_armour_mk_2_Vet_WB",{{"ACE_elasticBandage",20},{"ACE_tourniquet",7},{"ACE_fieldDressing",3},{"ACE_packingBandage",3},{"ACE_morphine",3},{"TIOW_sm_frag_grenade_mag",1,1},{"BT_Frag_Grenade_Alt_Mag",5,1},{"BT_Krak_Grenade_Mag",5,1},{"BT_Smoke_Grenade_Mag",5,1}}},{"WBA_ChaosPaul9_2",{{"AoD_Meltagun_Mag",7,10}}},{"tiow_chaos1powerpack_WB",{{"AoD_Meltagun_Mag",17,10}}},"30k_steve_helmet_mk_2_2_WB","",{"ic_cad_magnoculars","","","",{"Laserbatteries",1},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","AOD_INVS_NVG"}};


    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class O_BTWord_Bearers_Mk_2VeteranProteus_Missile_Hip_40k_01 : O_BTWord_Bearers_Mk_2VeteranPrimus_Melta_40k_01 {
    author = "Elf Supremacist";
    scope = 2;
    scopeCurator = 2;
    displayName = "Mk.2 Veteran Proteus Missile Hip";
    side = 0;
    faction = "O__BT_WordBearers_40k";
    editorSubcategory = "BT_WordBearers_MkII_Veteran";
    identityTypes[] = {"TIOW_Marine_Head","LanguageENGVR_F","NoGlasses"};

    uniformClass = "30k_steve_armour_mk_2_Vet_WB";

    linkedItems[] = {"WBA_ChaosPaul9_2","30k_steve_helmet_mk_2_2_WB","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","AOD_INVS_NVG"};
    respawnlinkedItems[] = {"WBA_ChaosPaul9_2","30k_steve_helmet_mk_2_2_WB","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","AOD_INVS_NVG"};

    weapons[] = {"Steve_SM_MissL_02_New","Web_Melee_Chain_Test","ic_cad_magnoculars"};
    respawnWeapons[] = {"Steve_SM_MissL_02_New","Web_Melee_Chain_Test","ic_cad_magnoculars"};

    magazines[] = {"STEVE_30k_Rocket_Krak_Mag_NEW","Laserbatteries","STEVE_30k_Rocket_Krak_Mag_NEW","Laserbatteries"};
    respawnMagazines[] = {"STEVE_30k_Rocket_Krak_Mag_NEW","Laserbatteries","STEVE_30k_Rocket_Krak_Mag_NEW","Laserbatteries"};

    backpack = "tiow_chaos1powerpack_WB";

    ALiVE_orbatCreator_loadout[] = {{"Steve_SM_MissL_02_New","","","",{"STEVE_30k_Rocket_Krak_Mag_NEW",8},{},""},{},{"Web_Melee_Chain_Test","","","",{},{},""},{"30k_steve_armour_mk_2_Vet_WB",{{"ACE_elasticBandage",20},{"ACE_tourniquet",7},{"ACE_fieldDressing",3},{"ACE_packingBandage",3},{"ACE_morphine",3},{"TIOW_sm_frag_grenade_mag",1,1},{"BT_Frag_Grenade_Alt_Mag",5,1},{"BT_Krak_Grenade_Mag",5,1},{"BT_Smoke_Grenade_Mag",5,1}}},{"WBA_ChaosPaul9_2",{{"STEVE_30k_Rocket_Frag_Mag_NEW",2,8}}},{"tiow_chaos1powerpack_WB",{{"STEVE_30k_Rocket_Frag_Mag_NEW",2,8},{"STEVE_30k_Rocket_Krak_Mag_NEW",5,8}}},"30k_steve_helmet_mk_2_2_WB","",{"ic_cad_magnoculars","","","",{"Laserbatteries",1},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","AOD_INVS_NVG"}};


    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class O_BTWord_Bearers_Mk_2VeteranProteus_Missile_Shoulder_40k_01 : O_BTWord_Bearers_Mk_2VeteranProteus_Missile_Hip_40k_01 {
    author = "Elf Supremacist";
    scope = 2;
    scopeCurator = 2;
    displayName = "Mk.2 Veteran Proteus Missile Shoulder";
    side = 0;
    faction = "O__BT_WordBearers_40k";
    editorSubcategory = "BT_WordBearers_MkII_Veteran";
    identityTypes[] = {"TIOW_Marine_Head","LanguageENGVR_F","NoGlasses"};

    uniformClass = "30k_steve_armour_mk_2_Vet_WB";

    linkedItems[] = {"WBA_ChaosPaul9_2","30k_steve_helmet_mk_2_2_WB","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","AOD_INVS_NVG"};
    respawnlinkedItems[] = {"WBA_ChaosPaul9_2","30k_steve_helmet_mk_2_2_WB","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","AOD_INVS_NVG"};

    weapons[] = {"Steve_SM_MissL_01_New","Web_Melee_Chain_Test","ic_cad_magnoculars"};
    respawnWeapons[] = {"Steve_SM_MissL_01_New","Web_Melee_Chain_Test","ic_cad_magnoculars"};

    magazines[] = {"STEVE_30k_Rocket_Krak_Mag_NEW","Laserbatteries","STEVE_30k_Rocket_Krak_Mag_NEW","Laserbatteries"};
    respawnMagazines[] = {"STEVE_30k_Rocket_Krak_Mag_NEW","Laserbatteries","STEVE_30k_Rocket_Krak_Mag_NEW","Laserbatteries"};

    backpack = "tiow_chaos1powerpack_WB";

    ALiVE_orbatCreator_loadout[] = {{"Steve_SM_MissL_01_New","","","",{"STEVE_30k_Rocket_Krak_Mag_NEW",8},{},""},{},{"Web_Melee_Chain_Test","","","",{},{},""},{"30k_steve_armour_mk_2_Vet_WB",{{"ACE_elasticBandage",20},{"ACE_tourniquet",7},{"ACE_fieldDressing",3},{"ACE_packingBandage",3},{"ACE_morphine",3},{"TIOW_sm_frag_grenade_mag",1,1},{"BT_Frag_Grenade_Alt_Mag",5,1},{"BT_Krak_Grenade_Mag",5,1},{"BT_Smoke_Grenade_Mag",5,1}}},{"WBA_ChaosPaul9_2",{{"STEVE_30k_Rocket_Frag_Mag_NEW",2,8}}},{"tiow_chaos1powerpack_WB",{{"STEVE_30k_Rocket_Frag_Mag_NEW",2,8},{"STEVE_30k_Rocket_Krak_Mag_NEW",5,8}}},"30k_steve_helmet_mk_2_2_WB","",{"ic_cad_magnoculars","","","",{"Laserbatteries",1},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","AOD_INVS_NVG"}};


    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class O_BTWord_Bearers_Mk_2VeteranRotor_Cannon_40k_01 : O_BTWord_Bearers_Mk_2VeteranProteus_Missile_Shoulder_40k_01 {
    author = "Elf Supremacist";
    scope = 2;
    scopeCurator = 2;
    displayName = "Mk.2 Veteran Rotor Cannon";
    side = 0;
    faction = "O__BT_WordBearers_40k";
    editorSubcategory = "BT_WordBearers_MkII_Veteran";
    identityTypes[] = {"TIOW_Marine_Head","LanguageENGVR_F","NoGlasses"};

    uniformClass = "30k_steve_armour_mk_2_Vet_WB";

    linkedItems[] = {"WBA_ChaosPaul9_2","30k_steve_helmet_mk_2_2_WB","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","AOD_INVS_NVG"};
    respawnlinkedItems[] = {"WBA_ChaosPaul9_2","30k_steve_helmet_mk_2_2_WB","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","AOD_INVS_NVG"};

    weapons[] = {"AoD_Rotor_Cannon_Basic","Web_Melee_Chain_Test","ic_cad_magnoculars"};
    respawnWeapons[] = {"AoD_Rotor_Cannon_Basic","Web_Melee_Chain_Test","ic_cad_magnoculars"};

    magazines[] = {"AoD_Rotor_Cannon_Mag","Laserbatteries","AoD_Rotor_Cannon_Mag","Laserbatteries"};
    respawnMagazines[] = {"AoD_Rotor_Cannon_Mag","Laserbatteries","AoD_Rotor_Cannon_Mag","Laserbatteries"};

    backpack = "tiow_chaos1powerpack_WB";

    ALiVE_orbatCreator_loadout[] = {{"AoD_Rotor_Cannon_Basic","","","",{"AoD_Rotor_Cannon_Mag",500},{},""},{},{"Web_Melee_Chain_Test","","","",{},{},""},{"30k_steve_armour_mk_2_Vet_WB",{{"ACE_elasticBandage",20},{"ACE_tourniquet",7},{"ACE_fieldDressing",3},{"ACE_packingBandage",3},{"ACE_morphine",3},{"TIOW_sm_frag_grenade_mag",1,1},{"BT_Frag_Grenade_Alt_Mag",5,1},{"BT_Krak_Grenade_Mag",5,1},{"BT_Smoke_Grenade_Mag",5,1}}},{"WBA_ChaosPaul9_2",{{"AoD_Rotor_Cannon_Mag",2,500}}},{"tiow_chaos1powerpack_WB",{{"AoD_Rotor_Cannon_Mag",7,500}}},"30k_steve_helmet_mk_2_2_WB","",{"ic_cad_magnoculars","","","",{"Laserbatteries",1},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","AOD_INVS_NVG"}};


    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class O_BTWord_Bearers_Mk_2VeteranRyza_Plasma_Gun_40k_01 : O_BTWord_Bearers_Mk_2VeteranRotor_Cannon_40k_01 {
    author = "Elf Supremacist";
    scope = 2;
    scopeCurator = 2;
    displayName = "Mk.2 Veteran Ryza Plasma Gun";
    side = 0;
    faction = "O__BT_WordBearers_40k";
    editorSubcategory = "BT_WordBearers_MkII_Veteran";
    identityTypes[] = {"TIOW_Marine_Head","LanguageENGVR_F","NoGlasses"};

    uniformClass = "30k_steve_armour_mk_2_Vet_WB";

    linkedItems[] = {"WBA_ChaosPaul9_2","30k_steve_helmet_mk_2_2_WB","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","AOD_INVS_NVG"};
    respawnlinkedItems[] = {"WBA_ChaosPaul9_2","30k_steve_helmet_mk_2_2_WB","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","AOD_INVS_NVG"};

    weapons[] = {"AoD_Ryza_Plasma_Basic","Web_Melee_Chain_Test","ic_cad_magnoculars"};
    respawnWeapons[] = {"AoD_Ryza_Plasma_Basic","Web_Melee_Chain_Test","ic_cad_magnoculars"};

    magazines[] = {"AoD_Ryza_Plasma_Mag","Laserbatteries","AoD_Ryza_Plasma_Mag","Laserbatteries"};
    respawnMagazines[] = {"AoD_Ryza_Plasma_Mag","Laserbatteries","AoD_Ryza_Plasma_Mag","Laserbatteries"};

    backpack = "tiow_chaos1powerpack_WB";

    ALiVE_orbatCreator_loadout[] = {{"AoD_Ryza_Plasma_Basic","","","",{"AoD_Ryza_Plasma_Mag",30},{},""},{},{"Web_Melee_Chain_Test","","","",{},{},""},{"30k_steve_armour_mk_2_Vet_WB",{{"ACE_elasticBandage",20},{"ACE_tourniquet",7},{"ACE_fieldDressing",3},{"ACE_packingBandage",3},{"ACE_morphine",3},{"TIOW_sm_frag_grenade_mag",1,1},{"BT_Frag_Grenade_Alt_Mag",5,1},{"BT_Krak_Grenade_Mag",5,1},{"BT_Smoke_Grenade_Mag",5,1}}},{"WBA_ChaosPaul9_2",{{"AoD_Ryza_Plasma_Mag",2,30}}},{"tiow_chaos1powerpack_WB",{{"AoD_Ryza_Plasma_Mag",4,30},{"AoD_Ryza_OC_Mag",3,6}}},"30k_steve_helmet_mk_2_2_WB","",{"ic_cad_magnoculars","","","",{"Laserbatteries",1},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","AOD_INVS_NVG"}};


    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class O_BTWord_Bearers_Mk_2VeteranTigrus_Bolter_40k_01 : O_BTWord_Bearers_Mk_2VeteranRyza_Plasma_Gun_40k_01 {
    author = "Elf Supremacist";
    scope = 2;
    scopeCurator = 2;
    displayName = "Mk.2 Veteran Tigrus";
    side = 0;
    faction = "O__BT_WordBearers_40k";
    editorSubcategory = "BT_WordBearers_MkII_Veteran";
    identityTypes[] = {"TIOW_Marine_Head","LanguageENGVR_F","NoGlasses"};

    uniformClass = "30k_steve_armour_mk_2_Vet_WB";

    linkedItems[] = {"WBA_ChaosPaul9_2","30k_steve_helmet_mk_2_2_WB","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","AOD_INVS_NVG"};
    respawnlinkedItems[] = {"WBA_ChaosPaul9_2","30k_steve_helmet_mk_2_2_WB","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","AOD_INVS_NVG"};

    weapons[] = {"AoD_Tigrus_Boltgun_Basic","Web_Melee_Chain_Test","ic_cad_magnoculars"};
    respawnWeapons[] = {"AoD_Tigrus_Boltgun_Basic","Web_Melee_Chain_Test","ic_cad_magnoculars"};

    magazines[] = {"AoD_Tigrus_Bolt_Mag","Laserbatteries","AoD_Tigrus_Bolt_Mag","Laserbatteries"};
    respawnMagazines[] = {"AoD_Tigrus_Bolt_Mag","Laserbatteries","AoD_Tigrus_Bolt_Mag","Laserbatteries"};

    backpack = "tiow_chaos1powerpack_WB";

    ALiVE_orbatCreator_loadout[] = {{"AoD_Tigrus_Boltgun_Basic","","","",{"AoD_Tigrus_Bolt_Mag",50},{},""},{},{"Web_Melee_Chain_Test","","","",{},{},""},{"30k_steve_armour_mk_2_Vet_WB",{{"ACE_elasticBandage",20},{"ACE_tourniquet",7},{"ACE_fieldDressing",3},{"ACE_packingBandage",3},{"ACE_morphine",3},{"TIOW_sm_frag_grenade_mag",1,1},{"BT_Frag_Grenade_Alt_Mag",5,1},{"BT_Krak_Grenade_Mag",5,1},{"BT_Smoke_Grenade_Mag",5,1}}},{"WBA_ChaosPaul9_2",{{"AoD_Tigrus_Bolt_Mag",5,50}}},{"tiow_chaos1powerpack_WB",{{"AoD_Tigrus_Bolt_Mag",10,50}}},"30k_steve_helmet_mk_2_2_WB","",{"ic_cad_magnoculars","","","",{"Laserbatteries",1},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","AOD_INVS_NVG"}};


    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class O_BTWord_Bearers_Mk_2VeteranTigrus_Combi_Bolter_40k_01 : O_BTWord_Bearers_Mk_2VeteranTigrus_Bolter_40k_01 {
    author = "Elf Supremacist";
    scope = 2;
    scopeCurator = 2;
    displayName = "Mk.2 Veteran Tigrus Combi Bolter";
    side = 0;
    faction = "O__BT_WordBearers_40k";
    editorSubcategory = "BT_WordBearers_MkII_Veteran";
    identityTypes[] = {"TIOW_Marine_Head","LanguageENGVR_F","NoGlasses"};

    uniformClass = "30k_steve_armour_mk_2_Vet_WB";

    linkedItems[] = {"WBA_ChaosPaul9_2","30k_steve_helmet_mk_2_2_WB","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","AOD_INVS_NVG"};
    respawnlinkedItems[] = {"WBA_ChaosPaul9_2","30k_steve_helmet_mk_2_2_WB","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","AOD_INVS_NVG"};

    weapons[] = {"AoD_Tcombi_Basic","Web_Melee_Chain_Test","ic_cad_magnoculars"};
    respawnWeapons[] = {"AoD_Tcombi_Basic","Web_Melee_Chain_Test","ic_cad_magnoculars"};

    magazines[] = {"AoD_Tcombi_Bolt_Mag","Laserbatteries","AoD_Tcombi_Bolt_Mag","Laserbatteries"};
    respawnMagazines[] = {"AoD_Tcombi_Bolt_Mag","Laserbatteries","AoD_Tcombi_Bolt_Mag","Laserbatteries"};

    backpack = "tiow_chaos1powerpack_WB";

    ALiVE_orbatCreator_loadout[] = {{"AoD_Tcombi_Basic","","","",{"AoD_Tcombi_Bolt_Mag",100},{},""},{},{"Web_Melee_Chain_Test","","","",{},{},""},{"30k_steve_armour_mk_2_Vet_WB",{{"ACE_elasticBandage",20},{"ACE_tourniquet",7},{"ACE_fieldDressing",3},{"ACE_packingBandage",3},{"ACE_morphine",3},{"TIOW_sm_frag_grenade_mag",1,1},{"BT_Frag_Grenade_Alt_Mag",5,1},{"BT_Krak_Grenade_Mag",5,1},{"BT_Smoke_Grenade_Mag",5,1}}},{"WBA_ChaosPaul9_2",{{"AoD_Tcombi_Bolt_Mag",2,100}}},{"tiow_chaos1powerpack_WB",{{"AoD_Tcombi_Bolt_Mag",7,100}}},"30k_steve_helmet_mk_2_2_WB","",{"ic_cad_magnoculars","","","",{"Laserbatteries",1},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","AOD_INVS_NVG"}};


    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class O_BTWord_Bearers_Mk_2VeteranTigrus_Combi_Melta_40k_01 : O_BTWord_Bearers_Mk_2VeteranTigrus_Combi_Bolter_40k_01 {
    author = "Elf Supremacist";
    scope = 2;
    scopeCurator = 2;
    displayName = "Mk.2 Veteran Tigrus Combi Melta";
    side = 0;
    faction = "O__BT_WordBearers_40k";
    editorSubcategory = "BT_WordBearers_MkII_Veteran";
    identityTypes[] = {"TIOW_Marine_Head","LanguageENGVR_F","NoGlasses"};

    uniformClass = "30k_steve_armour_mk_2_Vet_WB";

    linkedItems[] = {"WBA_ChaosPaul9_2","30k_steve_helmet_mk_2_2_WB","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","AOD_INVS_NVG"};
    respawnlinkedItems[] = {"WBA_ChaosPaul9_2","30k_steve_helmet_mk_2_2_WB","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","AOD_INVS_NVG"};

    weapons[] = {"AoD_Tigrus_Seek_Melta","Web_Melee_Chain_Test","ic_cad_magnoculars"};
    respawnWeapons[] = {"AoD_Tigrus_Seek_Melta","Web_Melee_Chain_Test","ic_cad_magnoculars"};

    magazines[] = {"AoD_Tigrus_Bolt_Mag","Laserbatteries","AoD_Tigrus_Bolt_Mag","Laserbatteries"};
    respawnMagazines[] = {"AoD_Tigrus_Bolt_Mag","Laserbatteries","AoD_Tigrus_Bolt_Mag","Laserbatteries"};

    backpack = "tiow_chaos1powerpack_WB";

    ALiVE_orbatCreator_loadout[] = {{"AoD_Tigrus_Seek_Melta","","","",{"AoD_Tigrus_Bolt_Mag",50},{},""},{},{"Web_Melee_Chain_Test","","","",{},{},""},{"30k_steve_armour_mk_2_Vet_WB",{{"ACE_elasticBandage",20},{"ACE_tourniquet",7},{"ACE_fieldDressing",3},{"ACE_packingBandage",3},{"ACE_morphine",3},{"TIOW_sm_frag_grenade_mag",1,1},{"BT_Frag_Grenade_Alt_Mag",5,1},{"BT_Krak_Grenade_Mag",5,1},{"BT_Smoke_Grenade_Mag",5,1}}},{"WBA_ChaosPaul9_2",{{"AoD_Tigrus_Bolt_Mag",5,50},{"AoD_Tigrus_Seek_Melta_Under_Mag",3,3}}},{"tiow_chaos1powerpack_WB",{{"AoD_Tigrus_Bolt_Mag",10,50},{"AoD_Tigrus_Seek_Melta_Under_Mag",10,3}}},"30k_steve_helmet_mk_2_2_WB","",{"ic_cad_magnoculars","","","",{"Laserbatteries",1},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","AOD_INVS_NVG"}};


    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class O_BTWord_Bearers_Mk_2VeteranTigrus_Combi_Plasma_40k_01 : O_BTWord_Bearers_Mk_2VeteranTigrus_Combi_Melta_40k_01 {
    author = "Elf Supremacist";
    scope = 2;
    scopeCurator = 2;
    displayName = "Mk.2 Veteran Tigrus Combi Plasma";
    side = 0;
    faction = "O__BT_WordBearers_40k";
    editorSubcategory = "BT_WordBearers_MkII_Veteran";
    identityTypes[] = {"TIOW_Marine_Head","LanguageENGVR_F","NoGlasses"};

    uniformClass = "30k_steve_armour_mk_2_Vet_WB";

    linkedItems[] = {"WBA_ChaosPaul9_2","30k_steve_helmet_mk_2_2_WB","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","AOD_INVS_NVG"};
    respawnlinkedItems[] = {"WBA_ChaosPaul9_2","30k_steve_helmet_mk_2_2_WB","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","AOD_INVS_NVG"};

    weapons[] = {"AoD_Tigrus_Seek_Plasma","Web_Melee_Chain_Test","ic_cad_magnoculars"};
    respawnWeapons[] = {"AoD_Tigrus_Seek_Plasma","Web_Melee_Chain_Test","ic_cad_magnoculars"};

    magazines[] = {"AoD_Tigrus_Bolt_Mag","Laserbatteries","AoD_Tigrus_Bolt_Mag","Laserbatteries"};
    respawnMagazines[] = {"AoD_Tigrus_Bolt_Mag","Laserbatteries","AoD_Tigrus_Bolt_Mag","Laserbatteries"};

    backpack = "tiow_chaos1powerpack_WB";

    ALiVE_orbatCreator_loadout[] = {{"AoD_Tigrus_Seek_Plasma","","","",{"AoD_Tigrus_Bolt_Mag",50},{},""},{},{"Web_Melee_Chain_Test","","","",{},{},""},{"30k_steve_armour_mk_2_Vet_WB",{{"ACE_elasticBandage",20},{"ACE_tourniquet",7},{"ACE_fieldDressing",3},{"ACE_packingBandage",3},{"ACE_morphine",3},{"TIOW_sm_frag_grenade_mag",1,1},{"BT_Frag_Grenade_Alt_Mag",5,1},{"BT_Krak_Grenade_Mag",5,1},{"BT_Smoke_Grenade_Mag",5,1},{"AoD_Tigrus_Seek_Plasma_Under_OC_Mag",1,1}}},{"WBA_ChaosPaul9_2",{{"AoD_Tigrus_Bolt_Mag",5,50},{"AoD_Tigrus_Seek_Plasma_Under_Mag",1,10}}},{"tiow_chaos1powerpack_WB",{{"AoD_Tigrus_Bolt_Mag",8,50},{"AoD_Tigrus_Seek_Plasma_Under_Mag",5,10},{"AoD_Tigrus_Seek_Plasma_Under_OC_Mag",2,1}}},"30k_steve_helmet_mk_2_2_WB","",{"ic_cad_magnoculars","","","",{"Laserbatteries",1},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","AOD_INVS_NVG"}};


    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class O_BTWord_Bearers_Mk_2VeteranTigrus_Exitus_40k_01 : O_BTWord_Bearers_Mk_2VeteranTigrus_Combi_Plasma_40k_01 {
    author = "Elf Supremacist";
    scope = 2;
    scopeCurator = 2;
    displayName = "Mk.2 Veteran Tigrus Exitus";
    side = 0;
    faction = "O__BT_WordBearers_40k";
    editorSubcategory = "BT_WordBearers_MkII_Veteran";
    identityTypes[] = {"TIOW_Marine_Head","LanguageENGVR_F","NoGlasses"};

    uniformClass = "30k_steve_armour_mk_2_Vet_WB";

    linkedItems[] = {"WBA_ChaosPaul9_2","30k_steve_helmet_mk_2_2_WB","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","AOD_INVS_NVG"};
    respawnlinkedItems[] = {"WBA_ChaosPaul9_2","30k_steve_helmet_mk_2_2_WB","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","AOD_INVS_NVG"};

    weapons[] = {"AoD_Exitus_Basic","Web_Melee_Chain_Test","ic_cad_magnoculars"};
    respawnWeapons[] = {"AoD_Exitus_Basic","Web_Melee_Chain_Test","ic_cad_magnoculars"};

    magazines[] = {"AoD_Exitus_Bolt_Mag","Laserbatteries","AoD_Exitus_Bolt_Mag","Laserbatteries"};
    respawnMagazines[] = {"AoD_Exitus_Bolt_Mag","Laserbatteries","AoD_Exitus_Bolt_Mag","Laserbatteries"};

    backpack = "tiow_chaos1powerpack_WB";

    ALiVE_orbatCreator_loadout[] = {{"AoD_Exitus_Basic","","","",{"AoD_Exitus_Bolt_Mag",20},{},""},{},{"Web_Melee_Chain_Test","","","",{},{},""},{"30k_steve_armour_mk_2_Vet_WB",{{"ACE_elasticBandage",20},{"ACE_tourniquet",7},{"ACE_fieldDressing",3},{"ACE_packingBandage",3},{"ACE_morphine",3},{"TIOW_sm_frag_grenade_mag",1,1},{"BT_Frag_Grenade_Alt_Mag",5,1},{"BT_Krak_Grenade_Mag",5,1},{"BT_Smoke_Grenade_Mag",5,1}}},{"WBA_ChaosPaul9_2",{{"AoD_Exitus_Bolt_Mag",5,20}}},{"tiow_chaos1powerpack_WB",{{"AoD_Exitus_Bolt_Mag",14,20}}},"30k_steve_helmet_mk_2_2_WB","",{"ic_cad_magnoculars","","","",{"Laserbatteries",1},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","AOD_INVS_NVG"}};


    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class O_BTWord_Bearers_Mk_2VeteranTigrus_Shield_40k_01 : O_BTWord_Bearers_Mk_2VeteranTigrus_Exitus_40k_01 {
    author = "Elf Supremacist";
    scope = 2;
    scopeCurator = 2;
    displayName = "Mk.2 Veteran Tigrus Shield";
    side = 0;
    faction = "O__BT_WordBearers_40k";
    editorSubcategory = "BT_WordBearers_MkII_Veteran";
    identityTypes[] = {"TIOW_Marine_Head","LanguageENGVR_F","NoGlasses"};

    uniformClass = "30k_steve_armour_mk_2_Vet_WB";

    linkedItems[] = {"WBA_ChaosPaul9_2","30k_steve_helmet_mk_2_2_WB","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","AOD_INVS_NVG"};
    respawnlinkedItems[] = {"WBA_ChaosPaul9_2","30k_steve_helmet_mk_2_2_WB","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","AOD_INVS_NVG"};

    weapons[] = {"AoD_Tigrus_Shield_Basic","Web_Melee_Chain_Test","ic_cad_magnoculars"};
    respawnWeapons[] = {"AoD_Tigrus_Shield_Basic","Web_Melee_Chain_Test","ic_cad_magnoculars"};

    magazines[] = {"AoD_Tigrus_Bolt_Mag","Laserbatteries","AoD_Tigrus_Bolt_Mag","Laserbatteries"};
    respawnMagazines[] = {"AoD_Tigrus_Bolt_Mag","Laserbatteries","AoD_Tigrus_Bolt_Mag","Laserbatteries"};

    backpack = "tiow_chaos1powerpack_WB";

    ALiVE_orbatCreator_loadout[] = {{"AoD_Tigrus_Shield_Basic","","","",{"AoD_Tigrus_Bolt_Mag",50},{},""},{},{"Web_Melee_Chain_Test","","","",{},{},""},{"30k_steve_armour_mk_2_Vet_WB",{{"ACE_elasticBandage",20},{"ACE_tourniquet",7},{"ACE_fieldDressing",3},{"ACE_packingBandage",3},{"ACE_morphine",3},{"TIOW_sm_frag_grenade_mag",1,1},{"BT_Frag_Grenade_Alt_Mag",5,1},{"BT_Krak_Grenade_Mag",5,1},{"BT_Smoke_Grenade_Mag",5,1}}},{"WBA_ChaosPaul9_2",{{"AoD_Tigrus_Bolt_Mag",5,50}}},{"tiow_chaos1powerpack_WB",{{"AoD_Tigrus_Bolt_Mag",10,50}}},"30k_steve_helmet_mk_2_2_WB","",{"ic_cad_magnoculars","","","",{"Laserbatteries",1},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","AOD_INVS_NVG"}};


    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class O_BTWord_Bearers_Mk_2VeteranVolkite_Caliver_40k_01 : O_BTWord_Bearers_Mk_2VeteranTigrus_Shield_40k_01 {
    author = "Elf Supremacist";
    scope = 2;
    scopeCurator = 2;
    displayName = "Mk.2 Veteran Volkite Caliver";
    side = 0;
    faction = "O__BT_WordBearers_40k";
    editorSubcategory = "BT_WordBearers_MkII_Veteran";
    identityTypes[] = {"TIOW_Marine_Head","LanguageENGVR_F","NoGlasses"};

    uniformClass = "30k_steve_armour_mk_2_Vet_WB";

    linkedItems[] = {"WBA_ChaosPaul9_2","30k_steve_helmet_mk_2_2_WB","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","AOD_INVS_NVG"};
    respawnlinkedItems[] = {"WBA_ChaosPaul9_2","30k_steve_helmet_mk_2_2_WB","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","AOD_INVS_NVG"};

    weapons[] = {"AoD_Volkite_Caliver","Web_Melee_Chain_Test","ic_cad_magnoculars"};
    respawnWeapons[] = {"AoD_Volkite_Caliver","Web_Melee_Chain_Test","ic_cad_magnoculars"};

    magazines[] = {"AoD_Volkite_Caliver_Mag","Laserbatteries","AoD_Volkite_Caliver_Mag","Laserbatteries"};
    respawnMagazines[] = {"AoD_Volkite_Caliver_Mag","Laserbatteries","AoD_Volkite_Caliver_Mag","Laserbatteries"};

    backpack = "tiow_chaos1powerpack_WB";

    ALiVE_orbatCreator_loadout[] = {{"AoD_Volkite_Caliver","","","",{"AoD_Volkite_Caliver_Mag",60},{},""},{},{"Web_Melee_Chain_Test","","","",{},{},""},{"30k_steve_armour_mk_2_Vet_WB",{{"ACE_elasticBandage",20},{"ACE_tourniquet",7},{"ACE_fieldDressing",3},{"ACE_packingBandage",3},{"ACE_morphine",3},{"TIOW_sm_frag_grenade_mag",1,1},{"BT_Frag_Grenade_Alt_Mag",5,1},{"BT_Krak_Grenade_Mag",5,1},{"BT_Smoke_Grenade_Mag",5,1}}},{"WBA_ChaosPaul9_2",{{"AoD_Volkite_Caliver_Mag",2,60}}},{"tiow_chaos1powerpack_WB",{{"AoD_Volkite_Caliver_Mag",7,60}}},"30k_steve_helmet_mk_2_2_WB","",{"ic_cad_magnoculars","","","",{"Laserbatteries",1},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","AOD_INVS_NVG"}};


    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class O_BTWord_Bearers_Mk_2VeteranVolkite_Charger_40k_01 : O_BTWord_Bearers_Mk_2VeteranVolkite_Caliver_40k_01 {
    author = "Elf Supremacist";
    scope = 2;
    scopeCurator = 2;
    displayName = "Mk.2 Veteran Volkite Charger";
    side = 0;
    faction = "O__BT_WordBearers_40k";
    editorSubcategory = "BT_WordBearers_MkII_Veteran";
    identityTypes[] = {"TIOW_Marine_Head","LanguageENGVR_F","NoGlasses"};

    uniformClass = "30k_steve_armour_mk_2_Vet_WB";

    linkedItems[] = {"WBA_ChaosPaul9_2","30k_steve_helmet_mk_2_2_WB","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","AOD_INVS_NVG"};
    respawnlinkedItems[] = {"WBA_ChaosPaul9_2","30k_steve_helmet_mk_2_2_WB","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","AOD_INVS_NVG"};

    weapons[] = {"AoD_Volkite_Charger","Web_Melee_Chain_Test","ic_cad_magnoculars"};
    respawnWeapons[] = {"AoD_Volkite_Charger","Web_Melee_Chain_Test","ic_cad_magnoculars"};

    magazines[] = {"AoD_Volkite_Charger_Mag","Laserbatteries","AoD_Volkite_Charger_Mag","Laserbatteries"};
    respawnMagazines[] = {"AoD_Volkite_Charger_Mag","Laserbatteries","AoD_Volkite_Charger_Mag","Laserbatteries"};

    backpack = "tiow_chaos1powerpack_WB";

    ALiVE_orbatCreator_loadout[] = {{"AoD_Volkite_Charger","","","",{"AoD_Volkite_Charger_Mag",30},{},""},{},{"Web_Melee_Chain_Test","","","",{},{},""},{"30k_steve_armour_mk_2_Vet_WB",{{"ACE_elasticBandage",20},{"ACE_tourniquet",7},{"ACE_fieldDressing",3},{"ACE_packingBandage",3},{"ACE_morphine",3},{"TIOW_sm_frag_grenade_mag",1,1},{"BT_Frag_Grenade_Alt_Mag",5,1},{"BT_Krak_Grenade_Mag",5,1},{"BT_Smoke_Grenade_Mag",5,1}}},{"WBA_ChaosPaul9_2",{{"AoD_Volkite_Charger_Mag",4,30}}},{"tiow_chaos1powerpack_WB",{{"AoD_Volkite_Charger_Mag",10,30}}},"30k_steve_helmet_mk_2_2_WB","",{"ic_cad_magnoculars","","","",{"Laserbatteries",1},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","AOD_INVS_NVG"}};


    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class O_BTWord_Bearers_Mk_2VeteranVolkite_Culverin_40k_01 : O_BTWord_Bearers_Mk_2VeteranVolkite_Charger_40k_01 {
    author = "Elf Supremacist";
    scope = 2;
    scopeCurator = 2;
    displayName = "Mk.2 Veteran Volkite Culverin";
    side = 0;
    faction = "O__BT_WordBearers_40k";
    editorSubcategory = "BT_WordBearers_MkII_Veteran";
    identityTypes[] = {"TIOW_Marine_Head","LanguageENGVR_F","NoGlasses"};

    uniformClass = "30k_steve_armour_mk_2_Vet_WB";

    linkedItems[] = {"WBA_ChaosPaul9_2","30k_steve_helmet_mk_2_2_WB","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","AOD_INVS_NVG"};
    respawnlinkedItems[] = {"WBA_ChaosPaul9_2","30k_steve_helmet_mk_2_2_WB","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","AOD_INVS_NVG"};

    weapons[] = {"AoD_Volkite_Culverin","Web_Melee_Chain_Test","ic_cad_magnoculars"};
    respawnWeapons[] = {"AoD_Volkite_Culverin","Web_Melee_Chain_Test","ic_cad_magnoculars"};

    magazines[] = {"AoD_Volkite_Culverin_Mag","Laserbatteries","AoD_Volkite_Culverin_Mag","Laserbatteries"};
    respawnMagazines[] = {"AoD_Volkite_Culverin_Mag","Laserbatteries","AoD_Volkite_Culverin_Mag","Laserbatteries"};

    backpack = "tiow_chaos1powerpack_WB";

    ALiVE_orbatCreator_loadout[] = {{"AoD_Volkite_Culverin","","","",{"AoD_Volkite_Culverin_Mag",30},{},""},{},{"Web_Melee_Chain_Test","","","",{},{},""},{"30k_steve_armour_mk_2_Vet_WB",{{"ACE_elasticBandage",20},{"ACE_tourniquet",7},{"ACE_fieldDressing",3},{"ACE_packingBandage",3},{"ACE_morphine",3},{"TIOW_sm_frag_grenade_mag",1,1},{"BT_Frag_Grenade_Alt_Mag",5,1},{"BT_Krak_Grenade_Mag",5,1},{"BT_Smoke_Grenade_Mag",5,1}}},{"WBA_ChaosPaul9_2",{{"AoD_Volkite_Culverin_Mag",2,30}}},{"tiow_chaos1powerpack_WB",{{"AoD_Volkite_Culverin_Mag",7,30}}},"30k_steve_helmet_mk_2_2_WB","",{"ic_cad_magnoculars","","","",{"Laserbatteries",1},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","AOD_INVS_NVG"}};


    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class O_BTWord_Bearers_Mk_2VeteranUmbra_Bolter_40k_01 : O_BTWord_Bearers_Mk_2VeteranVolkite_Culverin_40k_01 {
    author = "[SB] Balderic Caeledis";
    scope = 2;
    scopeCurator = 2;
    displayName = "Mk.2 Veteran Umbra";
    side = 0;
    faction = "O__BT_WordBearers_40k";
    editorSubcategory = "BT_WordBearers_MkII_Veteran";
    identityTypes[] = {"TIOW_Marine_Head","LanguageENGVR_F","NoGlasses"};

    uniformClass = "30k_steve_armour_mk_2_Vet_WB";

    linkedItems[] = {"WBA_ChaosPaul9_2","30k_steve_helmet_mk_2_2_WB","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","AOD_INVS_NVG"};
    respawnlinkedItems[] = {"WBA_ChaosPaul9_2","30k_steve_helmet_mk_2_2_WB","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","AOD_INVS_NVG"};

    weapons[] = {"AoD_Umbra_Boltgun_Basic","Web_Melee_Chain_Test","ic_cad_magnoculars"};
    respawnWeapons[] = {"AoD_Umbra_Boltgun_Basic","Web_Melee_Chain_Test","ic_cad_magnoculars"};

    magazines[] = {"AoD_Umbra_Bolt_Mag","Laserbatteries","AoD_Umbra_Bolt_Mag","Laserbatteries"};
    respawnMagazines[] = {"AoD_Umbra_Bolt_Mag","Laserbatteries","AoD_Umbra_Bolt_Mag","Laserbatteries"};

    backpack = "tiow_chaos1powerpack_WB";

    ALiVE_orbatCreator_loadout[] = {{"AoD_Umbra_Boltgun_Basic","","","",{"AoD_Umbra_Bolt_Mag",75},{},""},{},{"Web_Melee_Chain_Test","","","",{},{},""},{"30k_steve_armour_mk_2_Vet_WB",{{"ACE_elasticBandage",20},{"ACE_tourniquet",7},{"ACE_fieldDressing",3},{"ACE_packingBandage",3},{"ACE_morphine",3},{"TIOW_sm_frag_grenade_mag",1,1},{"BT_Frag_Grenade_Alt_Mag",5,1},{"BT_Krak_Grenade_Mag",5,1},{"BT_Smoke_Grenade_Mag",5,1},{"AoD_Umbra_Bolt_Mag",3,75}}},{"WBA_ChaosPaul9_2",{{"AoD_Umbra_Bolt_Mag",5,75}}},{"tiow_chaos1powerpack_WB",{{"AoD_Umbra_Bolt_Mag",13,75}}},"30k_steve_helmet_mk_2_2_WB","",{"ic_cad_magnoculars","","","",{"Laserbatteries",1},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","AOD_INVS_NVG"}};


    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class O_BTWord_Bearers_Mk_2VeteranAutocannon_01 : O_BTWord_Bearers_Mk_2VeteranUmbra_Bolter_40k_01 {
    author = "[SB] Balderic Caeledis";
    scope = 2;
    scopeCurator = 2;
    displayName = "Mk.2 Veteran Autocannon";
    side = 0;
    faction = "O__BT_WordBearers_40k";
    editorSubcategory = "BT_WordBearers_MkII_Veteran";
    identityTypes[] = {"TIOW_Marine_Head","LanguageENGVR_F","NoGlasses"};

    uniformClass = "30k_steve_armour_mk_2_Vet_WB";

    linkedItems[] = {"WBA_ChaosPaul9_2","30k_steve_helmet_mk_2_2_WB","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","AOD_INVS_NVG"};
    respawnlinkedItems[] = {"WBA_ChaosPaul9","30k_steve_helmet_mk_2_2_WB","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","AOD_INVS_NVG"};

    weapons[] = {"AoD_Autocannon_Basic","Web_Melee_Chain_Test","ic_cad_magnoculars"};
    respawnWeapons[] = {"AoD_Autocannon_Basic","Web_Melee_Chain_Test","ic_cad_magnoculars"};

    magazines[] = {"AoD_Autocannon_Mag","Laserbatteries","AoD_Autocannon_Mag","Laserbatteries"};
    respawnMagazines[] = {"AoD_Autocannon_Mag","Laserbatteries","AoD_Autocannon_Mag","Laserbatteries"};

    backpack = "tiow_chaos1powerpack_WB";

    ALiVE_orbatCreator_loadout[] = {{"AoD_Autocannon_Basic","","","",{"AoD_Autocannon_Mag",16},{},""},{},{"Web_Melee_Chain_Test","","","",{},{},""},{"30k_steve_armour_mk_2_Vet_WB",{{"ACE_elasticBandage",20},{"ACE_tourniquet",7},{"ACE_fieldDressing",3},{"ACE_packingBandage",3},{"ACE_morphine",3},{"TIOW_sm_frag_grenade_mag",1,1},{"BT_Frag_Grenade_Alt_Mag",5,1},{"BT_Krak_Grenade_Mag",5,1},{"BT_Smoke_Grenade_Mag",5,1},{"AoD_Autocannon_Mag",1,16}}},{"WBA_ChaosPaul9",{{"AoD_Autocannon_Mag",2,16}}},{"tiow_chaos1powerpack_WB",{{"AoD_Autocannon_Mag",5,16}}},"30k_steve_helmet_mk_2_2_WB","",{"ic_cad_magnoculars","","","",{"Laserbatteries",1},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","AOD_INVS_NVG"}};


    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};