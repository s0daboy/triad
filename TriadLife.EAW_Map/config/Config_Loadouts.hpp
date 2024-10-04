/*
    class PLAYERSIDE { // PLAYERSIDE can be: WEST (for cops), CIV (for civ/reb), GUER (for medics), EAST (for opfor)
        // NOTES:
        //     empty array means that nothing will be add on players
        //     if you put more than a uniform on the CIV's class, they will be selected randonly,
        //         otherwise, for the other teams, player will get the uniform related to his level

        itemType[] = { // itemType can be: uniform, headgear, vest, backpack, weapon, items or linkedItems
            { "classname", "conditions" }
        };
    };
*/
class Loadouts {
    // COP
    class WEST {
        uniform[] = {
            {"EAW_Chinese_Uniform_Major", "call life_copLevel >= 0"}
        };
        headgear[] = {
            {"EAW_Chinese_VisorCap_Blue", "call life_copLevel >= 0"}
        };
        vest[] = {
            {"EAW_NRA_PouchesBottom_Grey", "call life_copLevel >= 0"}
        };
        backpack[] = {};
        weapon[] = {
            {"EAW_C96", "call life_copLevel >= 0"}
        };
        mags[] = {
            {"EAW_C96_Magazine", 6, "call life_copLevel >= 0"}
        };
        items[] = {};
        linkedItems[] = {
            {"ItemMap", "call life_copLevel >= 0"},
            {"NORTH_SOV_Compass", "call life_copLevel >= 0"},
            {"NORTH_FIN_Watch", "call life_copLevel >= 0"}
        };
    };

    // CIV
    class CIV {
        uniform[] = {
            {"EAW_Civ_1_Uniform", "!life_is_arrested"},
            {"EAW_Civ_1_Uniform_Brown", "!life_is_arrested"},
            {"EAW_Civ_1_Uniform_Grey", "!life_is_arrested"},
            {"EAW_Civ_1_Uniform_Tan", "!life_is_arrested"},
            {"EAW_Civ_1_Uniform_White", "!life_is_arrested"},
            {"EAW_Civ_Robe_Uniform_Blue", "!life_is_arrested"},
            {"EAW_Civ_Robe_Uniform_BlueGrey", "!life_is_arrested"},
            {"EAW_Civ_Robe_Uniform_Grey", "!life_is_arrested"}
        };
        headgear[] = {};
        vest[] = {};
        backpack[] = {};
        weapon[] = {};
        mags[] = {};
        items[] = {};
        linkedItems[] = {
            {"ItemMap", ""},
            {"NORTH_SOV_Compass", ""},
            {"NORTH_FIN_Watch", ""}
        };
    };

    // MED
    class GUER {
        uniform[] = {
            {"rds_uniform_assistant", "call life_medicLevel >= 1"}
        };
        headgear[] = {};
        vest[] = {};
        backpack[] = {};
        weapon[] = {};
        mags[] = {};
        items[] = {
            {"FirstAidKit", 2, "call life_medicLevel >= 1"}
        };
        linkedItems[] = {
            {"ItemMap", "call life_medicLevel >= 1"},
            {"NORTH_SOV_Compass", "call life_medicLevel >= 1"},
            {"NORTH_FIN_Watch", "call life_medicLevel >= 1"}
        };
    };
};
