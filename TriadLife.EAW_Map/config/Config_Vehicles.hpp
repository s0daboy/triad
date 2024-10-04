class CarShops {
    /*
    *    ARRAY FORMAT:
    *        0: STRING (Classname)
    *        1: STRING (Condition)
    *    FORMAT:
    *        STRING (Conditions) - Must return boolean :
    *            String can contain any amount of conditions, aslong as the entire
    *            string returns a boolean. This allows you to check any levels, licenses etc,
    *            in any combination. For example:
    *                "call life_coplevel && license_civ_someLicense"
    *            This will also let you call any other function.
    *
    *   BLUFOR Vehicle classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgVehicles_WEST
    *   OPFOR Vehicle classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgVehicles_EAST
    *   Independent Vehicle classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgVehicles_GUER
    *   Civilian Vehicle classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgVehicles_CIV
    */
    class civ_car {
        side = "civ";
        conditions = "";
        vehicles[] = {
/*			
            { "LIB_GazM1_dirty", "" },
            { "LIB_GazM1", "" },
*/
            { "RDS_Old_bike_Civ_01", "" },
            { "peugeot_500cc", "" },
            { "JMSSA_veh_R75_DAK_F", "" }, //fix colors with cops too
            { "JMSSA_veh_BSA_m20_F", "" }, //add colors
            { "Cadillac1903_2seat", "" },
            { "Cadillac1903_4seat", "" },
            { "Cadillac1903_truck", "" },
            { "legano_1908", "" },
            { "legano_1908_open", "" },
            { "Renault_AG_1910_Red", "" },
            { "Peugeot_bebe_1916", "" },
            { "Peugeot_bebe_1916_blue", "" },
            { "Peugeot_bebe_1916_brown", "" },
            { "Peugeot_bebe_1916_grey", "" },
            { "Peugeot_bebe_1916_red", "" },
            { "Peugeot_bebe_1916_white", "" },
            { "Peugeot_bebe_1916_yellow", "" },
            { "Peugeot_bebe_1916_open", "" },
            { "Peugeot_bebe_1916_open_blue", "" },
            { "Peugeot_bebe_1916_open_brown", "" },
            { "Peugeot_bebe_1916_open_grey", "" },
            { "Peugeot_bebe_1916_open_red", "" },
            { "Peugeot_bebe_1916_open_white", "" },
            { "Peugeot_bebe_1916_open_yellow", "" },
            { "JMSSA_veh_fiat500_F", "" },
            { "JMSSA_veh_lanciaAprilia_F", "" },
            { "JMSSA_veh_kadett_civ_F", "" },
            { "JMSSA_veh_citroen11cv_civ_F", "" },
            { "Mercedes_race_1914", "" }
        };
    };

    class kart_shop {
        side = "civ";
        conditions = "";
        vehicles[] = {
            { "RDS_Old_bike_Civ_01", "" },
            { "charette_cheval", "" },
            { "dbo_horse", "" },
            { "dbo_horse_dark", "" },
            { "dbo_horse_snow", "" },
            { "dbo_horse_lp", "" },
            { "dbo_horse_wf", "" },
            { "dbo_horse_wp", "" }
        };
    };

    class civ_truck {
        side = "civ";
        conditions = "";
        vehicles[] = {
            { "fiat15_ter", "" },
            { "fiat15_ter_decapote", "" },
            { "fiat15_ter_tonneau", "" },
            { "fordT_truck_bache", "" },
            { "fordT_truck_benne", "" },
            { "fordT_truck_tonneau", "" },
            { "Berlier_cba", "" },
/*
            { "LIB_CIV_FFI_CitC4", "" },
            { "LIB_CIV_FFI_CitC4_2", "" },
            { "LIB_CIV_FFI_CitC4_3", "" },
*/
            { "EAW_Dodge1936_Pickup_Military_ROC", "" },
            { "EAW_Dodge1936_Pickup", "" },
            { "JMSSA_veh_chevy4109_civ_F", "" }, // 3 colors
            { "JMSSA_veh_chevy4109flat_civ_F", "" }, // 3 colors
            { "JMSSA_veh_fiat626_civ_F", "" }, // colors
            { "JMSSA_veh_fiat626_tent_civ_F", "" }, // colors
            { "EAW_Dodge1936_Pickup_Military_ROC", "" },
            { "NORTH_SOV_41_ZIS5", "" },
            { "NORTH_SOV_41_ZIS5_Open", "" },
            { "NORTH_CIV_FordV8", "" },
            { "NORTH_CIV_FordV8_Empty", "" },
            { "NORTH_CIV_FordV8_Open", "" }
        };
    };

    class civ_air {
        side = "civ";
        conditions = "";
        vehicles[] = {
            { "sab_deperdussin", "" }, //GTA dodo
            { "sab_camel_i", "" },
            { "sab_an2_c", "" },
            { "JK_C_DC3_F", "" },
            { "JK_B_Wolves_PMC_DC3_F", "" }
        };
    };

     class civ_ship {
        side = "civ";
        conditions = "";
        vehicles[] = {
/*
            { "UNS_sampan_fish1", "" },
            { "UNS_sampan_supply", "" },
            { "UNS_Sampan_Transport", "" },
*/
			{ "JMSSA_veh_boatF1_civ_F", "" }, // many colors
            { "NORTH_FIN_Syoksyvene", "" }, //better than others, should probably be limited somehow
            { "sab_nl_vessel_a", "" }, // shit
            { "sab_nl_vessel_b", "" }, // big
            { "sab_nl_vessel_c", "" }, // shit
            { "sab_nl_vessel_d", "" }, // less shit
            { "JK_C_Small_Boat_F", "" }, // maybe too new
            { "JK_C_Fishing_Boat_F", "" },
            { "sab_an2_sea", "" }, //not period accurate and new texture would be good
			{ "wwi_puffer", "" },
            { "wwi_ramona_steamer", "" }
        };
    };

    class reb_car {
        side = "civ";
        conditions = "";
        vehicles[] = {
            { "RDS_Old_bike_Civ_01", "" },
            { "peugeot_500cc", "" },
            { "JMSSA_veh_R75_DAK_F", "" }, //fix colors with cops too
            { "JMSSA_veh_BSA_m20_F", "" }, //add colors
            { "charette_cheval", "" },
/*			
            { "LIB_GazM1_dirty", "" },
            { "LIB_GazM1", "" },
*/
            { "EAW_Dodge1936_Pickup", "" }
        };
    };

    class med_shop {
        side = "med";
        conditions = "";
        vehicles[] = {
/*
            { "LIB_GazM1", "" },
            { "LIB_OpelBlitz_Ambulance_w", "" },
*/
            { "fiat15_ter_amb", "" },
            { "EAW_Dodge1936_Pickup_Military_Medical_IJA", "" },
            { "EAW_Dodge1936_Pickup_Military_Medical_ROC", "" }
        };
    };

    class med_air_hs {
        side = "med";
        conditions = "";
        vehicles[] = {
            { "sab_camel_i", "" }, 
            { "sab_an2_c", "" }, //not period accurate and new texture would be good
            { "JK_C_DC3_F", "" },
            { "JK_B_Wolves_PMC_DC3_F", "" }
        };
    };

    class cop_car {
        side = "cop";
        conditions = "";
        vehicles[] = {
/*
            { "LIB_GazM1", "" },
*/
            { "JMSSA_veh_R75kol_DAK_F", "" }, //fix colors
            { "JMSSA_veh_R75_DAK_F", "" }, //fix colors
            { "NORTH_FIN_S_41_Tempo", "" },
            { "JMSSA_veh_horch901_open_DAK_F", "" },
            { "JMSSA_veh_fiat508_F", "" }, 
            { "JMSSA_veh_fiat508_des_F", "" },
            { "JMSSA_veh_mb170v_GER43_F", "" },
            { "JMSSA_veh_horch901_open_DAK_F", "" },
            { "EAW_Dodge1936_Pickup_Military_ROC", "" },
            { "EAW_Dodge1936_Pickup_Military_Ammo_ROC", "" },
            { "EAW_Dodge1936_Pickup_Military_Fuel_ROC", "" },
            { "JMSSA_veh_opelblitz_ambul_DAK_F", "" }, //fix colors
            { "peugeot_1914", "" },
            { "JMSSA_veh_sdkfz251C4_DAK_F", "" } //probably remove - too OP/OOP
        };
    };

    class cop_air {
        side = "cop";
        conditions = "call life_coplevel >= 3";
        vehicles[] = {
            { "EAW_HawkIII", "" },
/*
            { "LIB_RAAF_P39", "" }, // needs retexture
*/
            { "sab_an2_c", "" }, //not period accurate and new texture would be good
            { "JK_B_C47_F", "" } // needs retexture
        };
    };

    class cop_ship {
        side = "cop";
        conditions = "";
        vehicles[] = {
            { "NORTH_FIN_Syoksyvene", "" },
            { "sab_nl_vessel_e", "" }, // fast but looks like shit
            { "sab_an2_sea", "" } //not period accurate and new texture would be good
        };
    };
};

class LifeCfgVehicles {
    /*
    *    Vehicle Configs (Contains textures and other stuff)
    *
    *    "price" is the price before any multipliers set in Master_Config are applied.
    *
    *    Default Multiplier Values & Calculations:
    *       Civilian [Purchase, Sell]: [1.0, 0.5]
    *       Cop [Purchase, Sell]: [0.5, 0.5]
    *       Medic [Purchase, Sell]: [0.75, 0.5]
    *       ChopShop: Payout = price * 0.25
    *       GarageSell: Payout = price * [0.5, 0.5, 0.5, -1]
    *       Cop Impound: Payout = price * 0.1
    *       Pull Vehicle from Garage: Cost = price * [1, 0.5, 0.75, -1] * [0.5, 0.5, 0.5, -1]
    *           -- Pull Vehicle & GarageSell Array Explanation = [civ,cop,medic,east]
    *
    *       1: STRING (Condition)
    *    Textures config follows { Texture Name, side, {texture(s)path}, Condition}
    *    Texture(s)path follows this format:
    *    INDEX 0: Texture Layer 0
    *    INDEX 1: Texture Layer 1
    *    INDEX 2: Texture Layer 2
    *    etc etc etc
    *
    */

    class Default {
        vItemSpace = -1;
        conditions = "";
        price = -1;
        textures[] = {};
    };
	
/*

    class UNS_sampan_fish1 {
        vItemSpace = 100;
        conditions = "";
        price = 2000;
        textures[] = {};
    };

    class UNS_sampan_supply {
        vItemSpace = 150;
        conditions = "";
        price = 3500;
        textures[] = {};
    };

    class UNS_Sampan_Transport {
        vItemSpace = 50;
        conditions = "";
        price = 3000;
        textures[] = {};
    };

*/

    class NORTH_FIN_Syoksyvene {
        vItemSpace = 100;
        conditions = "license_civ_boat || {!(playerSide isEqualTo civilian)}";
        price = 25000;
        textures[] = {
            { "Wooden", "civ", {
                "NORTH\nf_transport_light\boat\data\Syoksyvene_wood_CO.paa"
            }, "" },
            { "Green", "cop", {
                "NORTH\nf_transport_light\boat\data\Syoksyvene_CO.paa"
            }, "" },
            { "Camo", "cop", {
                "\A3\Boat_F_Exp\Boat_Transport_02\Data\Boat_Transport_02_exterior_CO.paa"
            }, "" }
        };
    };

    class wwi_puffer {
        vItemSpace = 50;
        conditions = "license_civ_boat || {!(playerSide isEqualTo civilian)}";
        price = 15000;
        textures[] = {};
    };

    class wwi_ramona_steamer {
        vItemSpace = 50;
        conditions = "license_civ_boat || {!(playerSide isEqualTo civilian)}";
        price = 100000;
        textures[] = {};
    };

    class sab_nl_vessel_a {
        vItemSpace = 50;
        conditions = "";
        price = 5000;
        textures[] = {};
    };

    class sab_nl_vessel_b {
        vItemSpace = 50;
        conditions = "license_civ_boat || {!(playerSide isEqualTo civilian)}";
        price = 20000;
        textures[] = {};
    };

    class sab_nl_vessel_c {
        vItemSpace = 50;
        conditions = "";
        price = 6000;
        textures[] = {};
    };

    class sab_nl_vessel_d {
        vItemSpace = 50;
        conditions = "";
        price = 8000;
        textures[] = {};
    };

    class sab_nl_vessel_e {
        vItemSpace = 50;
        conditions = "license_cop_cg";
        price = 15000;
        textures[] = {};
    };

    class JK_C_Small_Boat_F {
        vItemSpace = 50;
        conditions = "license_civ_boat || {!(playerSide isEqualTo civilian)}";
        price = 50000;
        textures[] = {};
    };

    class JK_C_Fishing_Boat_F {
        vItemSpace = 50;
        conditions = "license_civ_boat || {!(playerSide isEqualTo civilian)}";
        price = 60000;
        textures[] = {};
    };

    class EAW_HawkIII {
        vItemSpace = 50;
        conditions = "license_cop_cAir";
        price = 70000;
        textures[] = {};
    };

    class JK_C_DC3_F {
        vItemSpace = 50;
        conditions = "license_civ_pilot || {!(playerSide isEqualTo civilian)}";
        price = 100000;
        textures[] = {};
    };

    class JK_B_Wolves_PMC_DC3_F {
        vItemSpace = 50;
        conditions = "license_civ_pilot || {!(playerSide isEqualTo civilian)}";
        price = 100000;
        textures[] = {};
    };

    class JK_B_C47_F {
        vItemSpace = 50;
        conditions = "license_cop_cAir";
        price = 100000;
        textures[] = {};
    };

    class JK_B_Wolves_PMC_C47_F {
        vItemSpace = 50;
        conditions = "";
        price = 100000;
        textures[] = {};
    };

/*
    class LIB_RAAF_P39 {
        vItemSpace = 50;
        conditions = "license_cop_cAir";
        price = 150000;
        textures[] = {};
    };
*/

    class sab_deperdussin {
        vItemSpace = 50;
        conditions = "license_civ_pilot || {!(playerSide isEqualTo civilian)}";
        price = 50000;
        textures[] = {};
    };

    class sab_camel_i {
        vItemSpace = 50;
        conditions = "license_civ_pilot || {!(playerSide isEqualTo civilian)}";
        price = 70000;
        textures[] = {};
    };

    class sab_an2_c {
        vItemSpace = 50;
        conditions = "license_civ_pilot || {!(playerSide isEqualTo civilian)}";
        price = 85000;
        textures[] = {};
    };

    class sab_an2_sea {
        vItemSpace = 50;
        conditions = "license_civ_pilot || {!(playerSide isEqualTo civilian)}";
        price = 90000;
        textures[] = {};
    };
	


    // Apex DLC
    class C_Boat_Transport_02_F {
        vItemSpace = 100;
        conditions = "license_civ_boat || {!(playerSide isEqualTo civilian)}";
        price = 22000;
        textures[] = {
            { "Civilian", "civ", {
                "\A3\Boat_F_Exp\Boat_Transport_02\Data\Boat_Transport_02_exterior_civilian_CO.paa"
            }, "" },
            { "Black", "cop", {
                "\A3\Boat_F_Exp\Boat_Transport_02\Data\Boat_Transport_02_exterior_CO.paa"
            }, "" }
        };
    };

    // Apex DLC
    class C_Offroad_02_unarmed_F {
        vItemSpace = 65;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 12500;
        textures[] = {
            { "Black", "civ", {
                "\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_black_co.paa"
            }, "" },
            { "Blue", "civ", {
                "\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_blue_co.paa"
            }, "" },
            { "Green", "civ", {
                "\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_green_co.paa"
            }, "" },
            { "Orange", "civ", {
                "\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_orange_co.paa"
            }, "" },
            { "Red", "civ", {
                "\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_red_co.paa"
            }, "" },
            { "White", "civ", {
                "\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_white_co.paa"
            }, "" }
        };
    };

    // Apex DLC
    class C_Plane_Civil_01_F {
        vItemSpace = 75;
        conditions = "license_civ_pilot || {!(playerSide isEqualTo civilian)}";
        price = 150000;
        textures[] = {
            { "Racing (Tan Interior)", "civ", {
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_Racer_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_Racer_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_tan_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_tan_co.paa"
            }, "" },
            { "Racing", "civ", {
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_Racer_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_Racer_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_co.paa"
            }, "" },
            { "Red Line (Tan Interior)", "civ", {
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_RedLine_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_RedLine_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_tan_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_tan_co.paa"
            }, "" },
            { "Red Line", "civ", {
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_RedLine_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_RedLine_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_co.paa"
            }, "" },
            { "Tribal (Tan Interior)", "civ", {
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_Tribal_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_Tribal_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_tan_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_tan_co.paa"
            }, "" },
            { "Tribal", "civ", {
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_Tribal_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_Tribal_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_co.paa"
            }, "" },
            { "Blue Wave (Tan Interior)", "civ", {
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_Wave_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_Wave_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_tan_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_tan_co.paa"
            }, "" },
            { "Blue Wave", "civ", {
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_Wave_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_Wave_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_co.paa"
            }, "" }
        };
    };

    // Apex DLC
    class C_Scooter_Transport_01_F {
        vItemSpace = 30;
        conditions = "license_civ_boat || {!(playerSide isEqualTo civilian)}";
        price = 2500;
        textures[] = {
            { "Black", "civ", {
                "\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_Black_CO.paa",
                "\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_Black_CO.paa"
            }, "" },
            { "Blue", "civ", {
                "\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_Blue_co.paa",
                "\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_Blue_co.paa"
            }, "" },
            { "Grey", "civ", {
                "\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_Grey_co.paa",
                "\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_Grey_co.paa"
            }, "" },
            { "Green", "civ", {
                "\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_Lime_co.paa",
                "\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_Lime_co.paa"
            }, "" },
            { "Red", "civ", {
                "\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_Red_CO.paa",
                "\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_CO.paa"
            }, "" },
            { "White", "civ", {
                "\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_CO.paa",
                "\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_CO.paa"
            }, "" },
            { "Yellow", "civ", {
                "\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_Yellow_CO.paa",
                "\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_Yellow_CO.paa"
            }, "" }
        };
    };

    // Apex DLC
    class O_T_LSV_02_unarmed_F {
        vItemSpace = 100;
        conditions = "";
        price = 100000;
        textures[] = {
            { "Arid", "civ", {
                "\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_01_arid_CO.paa",
                "\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_02_arid_CO.paa",
                "\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_03_arid_CO.paa"
            }, "" },
            { "Black", "civ", {
                "\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_01_black_CO.paa",
                "\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_02_black_CO.paa",
                "\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_03_black_CO.paa"
            }, "" },
            { "Green Hex", "civ", {
                "\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_01_ghex_CO.paa",
                "\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_02_ghex_CO.paa",
                "\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_03_ghex_CO.paa"
            }, "" }
        };
    };

    class I_Truck_02_medical_F {
        vItemSpace = 150;
        conditions = "";
        price = 25000;
        textures[] = {};
    };

    class O_Truck_03_medical_F {
        vItemSpace = 200;
        conditions = "";
        price = 45000;
        textures[] = {};
    };

    class B_Truck_01_medical_F {
        vItemSpace = 250;
        conditions = "";
        price = 60000;
        textures[] = {};
    };

    class C_Rubberboat {
        vItemSpace = 45;
        conditions = "license_civ_boat || {!(playerSide isEqualTo civilian)}";
        price = 5000;
        textures[] = { };
    };

    class B_Heli_Transport_01_F {
        vItemSpace = 200;
        conditions = "license_cop_cAir || {!(playerSide isEqualTo west)}";
        price = 200000;
        textures[] = {};
    };

    class B_MRAP_01_hmg_F {
        vItemSpace = 100;
        conditions = "";
        price = 750000;
        textures[] = {
            { "Black", "cop", {
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)",
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)",
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)"
            }, "" }
        };
    };

    class B_Boat_Armed_01_minigun_F {
        vItemSpace = 175;
        conditions = "license_cop_cg || {!(playerSide isEqualTo west)}";
        price = 75000;
        textures[] = { };
    };

    class B_Boat_Transport_01_F {
        vItemSpace = 45;
        conditions = "license_cop_cg || {!(playerSide isEqualTo west)}";
        price = 3000;
        textures[] = { };
    };

    class O_Truck_03_transport_F {
        vItemSpace = 285;
        conditions = "license_civ_trucking || {!(playerSide isEqualTo civilian)}";
        price = 200000;
        textures[] = { };
    };

    class O_Truck_03_device_F {
        vItemSpace = 350;
        conditions = "license_civ_trucking || {!(playerSide isEqualTo civilian)}";
        price = 450000;
        textures[] = { };
    };

    class Land_CargoBox_V1_F {
        vItemSpace = 5000;
        conditions = "";
        price = -1;
        textures[] = {};
    };

    class Box_IND_Grenades_F {
        vItemSpace = 350;
        conditions = "";
        price = -1;
        textures[] = {};
    };

    class B_supplyCrate_F {
        vItemSpace = 700;
        conditions = "";
        price = -1;
        textures[] = {};
    };

    class B_G_Offroad_01_F {
        vItemSpace = 65;
        conditions = "";
        price = 12500;
        textures[] = { };
    };

    class B_G_Offroad_01_armed_F {
        vItemSpace = 65;
        conditions = "license_civ_rebel || {!(playerSide isEqualTo civilian)}";
        price = 750000;
        textures[] = { };
    };

    class C_Boat_Civil_01_F {
        vItemSpace = 85;
        conditions = "license_civ_boat || {!(playerSide isEqualTo civilian)}";
        price = 10000;
        textures[] = { };
    };

    class C_Boat_Civil_01_police_F {
        vItemSpace = 85;
        conditions = "license_cop_cg || {!(playerSide isEqualTo west)}";
        price = 20000;
        textures[] = { };
    };

    class B_Truck_01_box_F {
        vItemSpace = 450;
        conditions = "license_civ_trucking || {!(playerSide isEqualTo civilian)}";
        price = 350000;
        textures[] = { };
    };

    class B_Truck_01_transport_F {
        vItemSpace = 325;
        conditions = "license_civ_trucking || {!(playerSide isEqualTo civilian)}";
        price = 275000;
        textures[] = { };
    };

    class O_MRAP_02_F {
        vItemSpace = 60;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 150000;
        textures[] = { };
    };

    class C_Offroad_01_F {
        vItemSpace = 65;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 12500;
        textures[] = {
            { "Red", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa"
            }, "" },
            { "Yellow", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa"
            }, "" },
            { "White", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE02_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE02_CO.paa"
            }, "" },
            { "Blue", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE03_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE03_CO.paa"
            }, "" },
            { "Dark Red", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE04_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE04_CO.paa"
            }, "" },
            { "Blue / White", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE05_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE05_CO.paa"
            }, "" },
            { "Taxi", "civ", {
                "#(argb,8,8,3)color(0.6,0.3,0.01,1)"
            }, "" },
            { "Police", "cop", {
                "#(ai,64,64,1)Fresnel(1.3,7)"
            }, "" }
        };
    };

    class dbo_horse {
        vItemSpace = 20;
        conditions = "";
        price = 1500;
        textures[] = {};
    };
/*
To edit another information in this classes you can use this exemple.
class C_Kart_01_Fuel_F : dbo_horse{
    vItemSpace = 40;
    price = ;
};

will modify the virtual space and the price of the vehicle, but other information such as license and textures will pick up the vehicle declare at : Vehicle {};
*/
    class dbo_horse_dark : dbo_horse{}; // Get all information of dbo_horse
    class dbo_horse_snow : dbo_horse{};
    class dbo_horse_lp : dbo_horse{};
    class dbo_horse_wf : dbo_horse{};
    class dbo_horse_wp : dbo_horse{};


    class Peugeot_bebe_1916 {
        vItemSpace = 70;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 20000;
        textures[] = {};
    };
	
    class Peugeot_bebe_1916_blue : Peugeot_bebe_1916{};
    class Peugeot_bebe_1916_brown : Peugeot_bebe_1916{};
    class Peugeot_bebe_1916_grey : Peugeot_bebe_1916{};
    class Peugeot_bebe_1916_red : Peugeot_bebe_1916{};
    class Peugeot_bebe_1916_white : Peugeot_bebe_1916{};
    class Peugeot_bebe_1916_yellow : Peugeot_bebe_1916{};
    class Peugeot_bebe_1916_open : Peugeot_bebe_1916{};
    class Peugeot_bebe_1916_open_blue : Peugeot_bebe_1916{};
    class Peugeot_bebe_1916_open_brown : Peugeot_bebe_1916{};
    class Peugeot_bebe_1916_open_grey : Peugeot_bebe_1916{};
    class Peugeot_bebe_1916_open_red : Peugeot_bebe_1916{};
    class Peugeot_bebe_1916_open_white : Peugeot_bebe_1916{};
    class Peugeot_bebe_1916_open_yellow : Peugeot_bebe_1916{};

    class RDS_Old_bike_Civ_01 {
        vItemSpace = 10;
        conditions = "";
        price = 500;
        textures[] = {};
    };

    class charette_cheval {
        vItemSpace = 80;
        conditions = "";
        price = 3000;
        textures[] = {};
    };

    class peugeot_500cc {
        vItemSpace = 15;
        conditions = "";
        price = 5000;
        textures[] = {};
    };

    class Cadillac1903_2seat {
        vItemSpace = 50;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 10000;
        textures[] = {};
    };

    class Cadillac1903_4seat {
        vItemSpace = 80;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 14000;
        textures[] = {};
    };

    class legano_1908 {
        vItemSpace = 50;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 12000;
        textures[] = {};
    };

    class legano_1908_open {
        vItemSpace = 50;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 12000;
        textures[] = {};
    };

    class Renault_AG_1910_Red {
        vItemSpace = 60;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 10000;
        textures[] = {};
    };

    class Mercedes_race_1914 {
        vItemSpace = 30;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 150000;
        textures[] = {};
    };

    class NORTH_FIN_S_41_Tempo {
        vItemSpace = 20;
        conditions = "playerSide isEqualTo west";
        price = 30000;
        textures[] = {};
    };

    class fiat15_ter_amb {
        vItemSpace = 150;
        conditions = "playerSide isEqualTo independent";
        price = 40000;
        textures[] = {};
    };

    class Cadillac1903_truck {
        vItemSpace = 120;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 18000;
        textures[] = {};
    };

    class fiat15_ter {
        vItemSpace = 250;
        conditions = "license_civ_trucking || {!(playerSide isEqualTo civilian)}";
        price = 30000;
        textures[] = {};
    };
	
    class fiat15_ter_decapote : fiat15_ter{};
    class fiat15_ter_tonneau : fiat15_ter{};

    class fordT_truck_bache {
        vItemSpace = 350;
        conditions = "license_civ_trucking || {!(playerSide isEqualTo civilian)}";
        price = 40000;
        textures[] = {};
    };
	
    class fordT_truck_benne : fordT_truck_bache{};
    class fordT_truck_tonneau : fordT_truck_bache{};

    class JMSSA_veh_chevy4109_civ_F {
        vItemSpace = 450;
        conditions = "license_civ_trucking || {!(playerSide isEqualTo civilian)}";
        price = 70000;
        textures[] = {
            { "Blue", "civ", {
                "\JMSSA_veh_gr\chevy30cwt\data\wheels_civ_black_co.paa",
                "\JMSSA_veh_gr\chevy30cwt\data\cabin_civ_blue_co.paa",
                "\JMSSA_veh_gr\chevy30cwt\data\cargo_wood_co.paa"
            }, "" },
            { "Green", "civ", {
                "\JMSSA_veh_gr\chevy30cwt\data\wheels_civ_black_co.paa",
                "\JMSSA_veh_gr\chevy30cwt\data\cabin_civ_green_co.paa",
                "\JMSSA_veh_gr\chevy30cwt\data\cargo_wood_co.paa"
            }, "" },
            { "Red", "civ", {
                "\JMSSA_veh_gr\chevy30cwt\data\wheels_civ_red_co.paa",
                "\JMSSA_veh_gr\chevy30cwt\data\cabin_civ_red_co.paa",
                "\JMSSA_veh_gr\chevy30cwt\data\cargo_wood_co.paa"
            }, "" }
		};
    };
	
    class JMSSA_veh_chevy4109flat_civ_F : JMSSA_veh_chevy4109_civ_F{};

    class JMSSA_veh_fiat626_civ_F {
        vItemSpace = 450;
        conditions = "license_civ_trucking || {!(playerSide isEqualTo civilian)}";
        price = 80000;
        textures[] = {
            { "Blue", "civ", {
                "\JMSSA_veh_gr\fiat626\data\cabin_civ_co.paa",
                "\JMSSA_veh_gr\fiat626\data\cargo_civ_co.paa",
                "\JMSSA_veh_gr\fiat626\data\wheels_civ_co.paa"
            }, "" },
            { "Red", "civ", {
                "\JMSSA_veh_gr\fiat626\data\cabin_civRed_co.paa",
                "\JMSSA_veh_gr\fiat626\data\cargo_civRed_co.paa",
                "\JMSSA_veh_gr\fiat626\data\wheels_civRed_co.paa"
            }, "" },
            { "Tan", "civ", {
                "\JMSSA_veh_gr\fiat626\data\cabin_des_co.paa",
                "\JMSSA_veh_gr\fiat626\data\cargo_des_co.paa",
                "\JMSSA_veh_gr\fiat626\data\wheels_des_co.paa"
            }, "" }
		};
    };

    class JMSSA_veh_fiat626_tent_civ_F {
        vItemSpace = 450;
        conditions = "license_civ_trucking || {!(playerSide isEqualTo civilian)}";
        price = 80000;
        textures[] = {
            { "Blue", "civ", {
                "\JMSSA_veh_gr\fiat626\data\cabin_civ_co.paa",
                "\JMSSA_veh_gr\fiat626\data\cargo_civ_co.paa",
                "\JMSSA_veh_gr\fiat626\data\wheels_civ_co.paa",
                "\JMSSA_veh_gr\fiat626\data\tent_co.paa"
            }, "" },
            { "Red", "civ", {
                "\JMSSA_veh_gr\fiat626\data\cabin_civRed_co.paa",
                "\JMSSA_veh_gr\fiat626\data\cargo_civRed_co.paa",
                "\JMSSA_veh_gr\fiat626\data\wheels_civRed_co.paa",
                "\JMSSA_veh_gr\fiat626\data\tent_co.paa"
            }, "" },
            { "Tan", "civ", {
                "\JMSSA_veh_gr\fiat626\data\cabin_des_co.paa",
                "\JMSSA_veh_gr\fiat626\data\cargo_des_co.paa",
                "\JMSSA_veh_gr\fiat626\data\wheels_des_co.paa"
            }, "" }
		};
    };
	
    class JMSSA_veh_boatF1_civ_F {
        vItemSpace = 50;
        conditions = "license_civ_boat || {!(playerSide isEqualTo civilian)}";
        price = 2500;
        textures[] = {
            { "Blue", "civ", {
                "\JMSSA_veh_sh\boatF1\data\boatF1_blue_co.paa"
            }, "" },
            { "Brown", "civ", {
                "\JMSSA_veh_sh\boatF1\data\boatF1_brown_co.paa"
            }, "" },
            { "Red", "civ", {
                "\JMSSA_veh_sh\boatF1\data\boatF1_red_co.paa"
            }, "" },
            { "White", "civ", {
                "\JMSSA_veh_sh\boatF1\data\boatF1_white_co.paa"
            }, "" },
            { "White/Black", "civ", {
                "\JMSSA_veh_sh\boatF1\data\boatF1_whiteBlack_co.paa"
            }, "" },
            { "White/Red", "civ", {
                "\JMSSA_veh_sh\boatF1\data\boatF1_whiteRed_co.paa"
            }, "" }
        };
    };

    class JMSSA_veh_mb170v_GER43_F {
        vItemSpace = 70;
        conditions = "playerSide isEqualTo west";
        price = 70000;
        textures[] = {
            { "Gray", "cop", {
                "\JMSSA_veh_gr\ger_staffCar\data\mb170v_wh1_co.paa",
				"\JMSSA_veh_gr\ger_staffCar\data\mb170v_dno_co.paa"
            }, "" }/*,
            { "White", "cop", {
                "\JMSSA_veh_gr\ger_staffCar\data\mb170v_wh_win_co.paa",
				"\JMSSA_veh_gr\ger_staffCar\data\mb170v_dno_win_co.paa"
            }, "" }*/
		};
    };

    class JMSSA_veh_horch901_open_DAK_F {
        vItemSpace = 70;
        conditions = "playerSide isEqualTo west";
        price = 60000;
        textures[] = {
            { "Gray", "cop", {
                "\JMSSA_veh_gr\kfz_cars\data\horch901_kfz15_grey_co.paa",
				"\JMSSA_veh_gr\kfz_cars\data\horch901_kfz15_wheels_grey_co.paa"
            }, "" },
            { "Gray w/Reflectors", "cop", {
                "\JMSSA_veh_gr\kfz_cars\data\horch901_kfz15_grey2_co.paa",
				"\JMSSA_veh_gr\kfz_cars\data\horch901_kfz15_wheels_grey_co.paa"
            }, "" }/*,
            { "White", "cop", {
                "\JMSSA_veh_gr\kfz_cars\data\horch901_kfz15_win_co.paa",
				"\JMSSA_veh_gr\kfz_cars\data\horch901_kfz15_wheels_win_co.paa"
            }, "" }*/
		};
    };

    class JMSSA_veh_R75_DAK_F {
        vItemSpace = 15;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 12000;
        textures[] = {
            { "Dark Yellow", "civ", {
                "\JMSSA_veh_gr\motobike\data\r75_sand_co.paa"
            }, "" },
            { "Yellow", "civ", {
                "\JMSSA_veh_gr\motobike\data\r75_sandL_co.paa"
            }, "" },
            { "Gray", "cop", {
                "\JMSSA_veh_gr\motobike\data\r75_wh_co.paa"
            }, "" }/*,
            { "White", "cop", {
                "\JMSSA_veh_gr\motobike\data\r75_win_co.paa"
            }, "" },
            { "Tan", "cop", {
                "\JMSSA_veh_gr\motobike\data\r75_tan_co.paa"
            }, "" }*/
		};
    };

    class JMSSA_veh_R75kol_DAK_F {
        vItemSpace = 30;
        conditions = "playerSide isEqualTo west";
        price = 15000;
        textures[] = {
            { "Gray", "cop", {
                "\JMSSA_veh_gr\motobike\data\r75_wh_co.paa"
            }, "" }/*,
            { "White", "cop", {
                "\JMSSA_veh_gr\motobike\data\r75_win_co.paa"
            }, "" },
            { "Tah", "cop", {
                "\JMSSA_veh_gr\motobike\data\r75_tan_co.paa"
            }, "" }*/
		};
    };

    class JMSSA_veh_BSA_m20_F {
        vItemSpace = 20;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 10000;
        textures[] = {
            { "Blue", "civ", {
                "\JMSSA_veh_gr\motobike\data\BSA_m20_hull_raf_co.paa",
				"\JMSSA_veh_gr\motobike\data\BSA_m20_eng_raf_co.paa"
            }, "" },
            { "Tan", "civ", {
                "\JMSSA_veh_gr\motobike\data\BSA_m20_hull_des_co.paa",
				"\JMSSA_veh_gr\motobike\data\BSA_m20_eng_des_co.paa"
            }, "" },
            { "Green", "civ", {
                "\JMSSA_veh_gr\motobike\data\BSA_m20_hull_green_co.paa",
				"\JMSSA_veh_gr\motobike\data\BSA_m20_eng_green_co.paa"
            }, "" }
		};
    };

    class JMSSA_veh_fiat508_F {
        vItemSpace = 70;
        conditions = "playerSide isEqualTo west";
        price = 50000;
        textures[] = {
            { "Gray", "cop", {
                "\JMSSA_veh_gr\fiat508\data\fiat508_green_co.paa",
				"\JMSSA_veh_gr\fiat508\data\fiat508_wheels_green_co.paa",
				"\JMSSA_veh_gr\data\cans_green_co.paa"
            }, "" }/*,
            { "Tan", "cop", {
                "\JMSSA_veh_gr\fiat508\data\fiat508_desert_co.paa",
				"\JMSSA_veh_gr\fiat508\data\fiat508_wheels_desert_co.paa",
				"\JMSSA_veh_gr\data\cans_des_co.paa"
            }, "" }*/
		};
    };
	
    class JMSSA_veh_fiat508_des_F : JMSSA_veh_fiat508_F{};
	
    class JMSSA_veh_opelblitz_ambul_DAK_F {
        vItemSpace = 250;
        conditions = "playerSide isEqualTo west";
        price = 100000;
        textures[] = {
            { "Gray", "cop", {
				"\JMSSA_veh_gr\opelblitz\data\box_ins_grey_med_co.paa",
				"\JMSSA_veh_gr\opelblitz\data\hull_grey_med_co.paa",
				"\JMSSA_veh_gr\opelblitz\data\box_grey_med_co.paa",
				"\JMSSA_veh_gr\opelblitz\data\wheels_grey_co.paa",
				"\JMSSA_veh_gr\opelblitz\data\hull_grey_med_co.paa"
            }, "" },
            { "Gray F", "cop", {
                "\JMSSA_veh_gr\opelblitz\data\box_ins_grey_med2_co.paa",
				"\JMSSA_veh_gr\opelblitz\data\hull_grey_med_co.paa",
				"\JMSSA_veh_gr\opelblitz\data\box_grey_med2_co.paa",
				"\JMSSA_veh_gr\opelblitz\data\wheels_grey_co.paa",
				"\JMSSA_veh_gr\opelblitz\data\hull_grey_med_co.paa"
            }, "" }
		};
    };

    class JMSSA_veh_fiat500_F {
        vItemSpace = 100;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 60000;
        textures[] = {
            { "Black", "civ", {
				"\JMSSA_veh_gr\fiat500\data\fiat500a_black_co.paa"
            }, "" },
            { "Blue", "civ", {
				"\JMSSA_veh_gr\fiat500\data\fiat500a_blue_co.paa"
            }, "" },
            { "Green", "civ", {
				"\JMSSA_veh_gr\fiat500\data\fiat500a_green_co.paa"
            }, "" },
            { "Red", "civ", {
				"\JMSSA_veh_gr\fiat500\data\fiat500a_red_co.paa"
            }, "" },
            { "White", "civ", {
				"\JMSSA_veh_gr\fiat500\data\fiat500a_white_co.paa"
            }, "" }
		};
    };

    class JMSSA_veh_kadett_civ_F {
        vItemSpace = 75;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 55000;
        textures[] = {
            { "Black", "civ", {
				"\JMSSA_veh_gr\ger_staffCar\data\kadett_black_co.paa",
				"\JMSSA_veh_gr\ger_staffCar\data\kadett_black_co.paa"
            }, "" },
            { "Blue", "civ", {
				"\JMSSA_veh_gr\ger_staffCar\data\kadett_blue_co.paa",
				"\JMSSA_veh_gr\ger_staffCar\data\kadett_blue_co.paa"
            }, "" },
            { "Brown", "civ", {
				"\JMSSA_veh_gr\ger_staffCar\data\kadett_brown_co.paa",
				"\JMSSA_veh_gr\ger_staffCar\data\kadett_brown_co.paa"
            }, "" },
            { "Green", "civ", {
				"\JMSSA_veh_gr\ger_staffCar\data\kadett_green_co.paa",
				"\JMSSA_veh_gr\ger_staffCar\data\kadett_green_co.paa"
            }, "" },
            { "Gray", "civ", {
				"\JMSSA_veh_gr\ger_staffCar\data\kadett_grey_co.paa",
				"\JMSSA_veh_gr\ger_staffCar\data\kadett_grey_co.paa"
            }, "" }
		};
    };

    class JMSSA_veh_lanciaAprilia_F {
        vItemSpace = 85;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 65000;
        textures[] = {
            { "Black", "civ", {
				"\JMSSA_veh_gr\fiat500\data\lanciaAprilia_1_Black_co.paa",
				"\JMSSA_veh_gr\fiat500\data\lanciaAprilia_2_Black_co.paa"
            }, "" },
            { "Blue", "civ", {
				"\JMSSA_veh_gr\fiat500\data\lanciaAprilia_1_blue_co.paa",
				"\JMSSA_veh_gr\fiat500\data\lanciaAprilia_2_blue_co.paa"
            }, "" },
            { "Dark Blue", "civ", {
				"\JMSSA_veh_gr\fiat500\data\lanciaAprilia_1_Dblue_co.paa",
				"\JMSSA_veh_gr\fiat500\data\lanciaAprilia_2_Dblue_co.paa"
            }, "" },
            { "Dark Red", "civ", {
				"\JMSSA_veh_gr\fiat500\data\lanciaAprilia_1_Dred_co.paa",
				"\JMSSA_veh_gr\fiat500\data\lanciaAprilia_2_Dred_co.paa"
            }, "" },
            { "Red", "civ", {
				"\JMSSA_veh_gr\fiat500\data\lanciaAprilia_1_red_co.paa",
				"\JMSSA_veh_gr\fiat500\data\lanciaAprilia_2_red_co.paa"
            }, "" }
		};
    };

    class JMSSA_veh_citroen11cv_civ_F {
        vItemSpace = 80;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 75000;
        textures[] = {
            { "Black", "civ", {
				"\JMSSA_veh_gr\ger_staffCar\data\citroen_11cv_co.paa",
				"\JMSSA_veh_gr\ger_staffCar\data\citroen_11cv_hull_black_co.paa"
            }, "" },
            { "Blue", "civ", {
				"\JMSSA_veh_gr\ger_staffCar\data\citroen_11cv_black_co.paa",
				"\JMSSA_veh_gr\ger_staffCar\data\citroen_11cv_hull_blue_co.paa"
            }, "" },
            { "Cream", "civ", {
				"\JMSSA_veh_gr\ger_staffCar\data\citroen_11cv_black_co.paa",
				"\JMSSA_veh_gr\ger_staffCar\data\citroen_11cv_hull_cream_co.paa"
            }, "" },
            { "Dark Blue", "civ", {
				"\JMSSA_veh_gr\ger_staffCar\data\citroen_11cv_co.paa",
				"\JMSSA_veh_gr\ger_staffCar\data\citroen_11cv_hull_Dblue_co.paa"
            }, "" },
            { "Red", "civ", {
				"\JMSSA_veh_gr\ger_staffCar\data\citroen_11cv_co.paa",
				"\JMSSA_veh_gr\ger_staffCar\data\citroen_11cv_hull_red_co.paa"
            }, "" },
            { "White", "civ", {
				"\JMSSA_veh_gr\ger_staffCar\data\citroen_11cv_co.paa",
				"\JMSSA_veh_gr\ger_staffCar\data\citroen_11cv_hull_white_co.paa"
            }, "" }
		};
    };

    class peugeot_1914 {
        vItemSpace = 100;
        conditions = "playerSide isEqualTo west";
        price = 250000;
        textures[] = {};
    };

    class JMSSA_veh_sdkfz251C4_DAK_F {
        vItemSpace = 200;
        conditions = "playerSide isEqualTo west";
        price = 750000;
        textures[] = {
            { "Grey", "cop", {
				"\JMSSA_veh_gr\sdkfz251\data\hull_L_grey_co.paa",
                "\JMSSA_veh_gr\sdkfz251\data\hull_R_grey_co.paa",
                "\JMSSA_veh_gr\sdkfz251\data\int_grey_co.paa",
                "\JMSSA_veh_gr\sdkfz251\data\wheel_grey_co.paa"
            }, "" }
		};
    };


    class Berlier_cba {
        vItemSpace = 450;
        conditions = "license_civ_trucking || {!(playerSide isEqualTo civilian)}";
        price = 50000;
        textures[] = {};
    };
	
/*
    class LIB_OpelBlitz_Ambulance_w {
        vItemSpace = 250;
        conditions = "playerSide isEqualTo independent";
        price = 70000;
        textures[] = {};
    };
	
    class LIB_GazM1 {
        vItemSpace = 100;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 40000;
        textures[] = {};
    };

    class LIB_GazM1_dirty {
        vItemSpace = 100;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 35000;
        textures[] = {};
    };
	
	
    class LIB_CIV_FFI_CitC4 {
        vItemSpace = 400;
        conditions = "license_civ_trucking || {!(playerSide isEqualTo civilian)}";
        price = 45000;
        textures[] = {};
    };
	
    class LIB_CIV_FFI_CitC4_2 : LIB_CIV_FFI_CitC4{};
    class LIB_CIV_FFI_CitC4_3 : LIB_CIV_FFI_CitC4{};
*/

    class NORTH_FIN_S_41_R75 {
        vItemSpace = 20;
        conditions = "";
        price = 10000;
        textures[] = {};
    };

    class NORTH_SOV_41_ZIS5 {
        vItemSpace = 350;
        conditions = "license_civ_trucking || {!(playerSide isEqualTo civilian)}";
        price = 40000;
        textures[] = {};
    };
	
    class NORTH_SOV_41_ZIS5_Open : NORTH_SOV_41_ZIS5{};

    class NORTH_CIV_FordV8 {
        vItemSpace = 500;
        conditions = "license_civ_trucking || {!(playerSide isEqualTo civilian)}";
        price = 80000;
        textures[] = {};
    };
	
    class NORTH_CIV_FordV8_Empty : NORTH_CIV_FordV8{};
    class NORTH_CIV_FordV8_Open : NORTH_CIV_FordV8{};

    class EAW_Dodge1936_Pickup {
        vItemSpace = 550;
        conditions = "license_civ_trucking || {!(playerSide isEqualTo civilian)}";
        price = 90000;
        textures[] = {
            { "Black", "civ", {
                "eaw_cars\data\eaw_dodge1936_cab_black_co.paa"
            }, "" },
            { "Blue", "civ", {
                "eaw_cars\data\eaw_dodge1936_cab_co.paa"
            }, "" },
            { "Green", "civ", {
                "eaw_cars\data\eaw_dodge1936_cab_green_co.paa"
            }, "" },
            { "Red", "civ", {
                "eaw_cars\data\eaw_dodge1936_cab_red_co.paa"
            }, "" },
            { "White", "civ", {
                "eaw_cars\data\eaw_dodge1936_cab_white_co.paa"
            }, "" },
            { "Yellow", "civ", {
                "eaw_cars\data\eaw_dodge1936_cab_yellow_co.paa"
            }, "" }
		};
    };

    class EAW_Dodge1936_Pickup_Military_ROC {
        vItemSpace = 550;
        conditions = "license_civ_trucking || {!(playerSide isEqualTo civilian)}";
        price = 90000;
        textures[] = {};
    };
	
    class EAW_Dodge1936_Pickup_Military_Ammo_ROC : EAW_Dodge1936_Pickup_Military_ROC{};
    class EAW_Dodge1936_Pickup_Military_Fuel_ROC : EAW_Dodge1936_Pickup_Military_ROC{};

    class EAW_Dodge1936_Pickup_Military_Medical_ROC {
        vItemSpace = 400;
        conditions = "playerSide isEqualTo independent";
        price = 70000;
        textures[] = {};
    };

    class EAW_Dodge1936_Pickup_Military_Medical_IJA {
        vItemSpace = 400;
        conditions = "playerSide isEqualTo independent";
        price = 70000;
        textures[] = {};
    };

    class B_Quadbike_01_F {
        vItemSpace = 25;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 2500;
        textures[] = {
            { "Brown", "cop", {
                "\A3\Soft_F\Quadbike_01\Data\Quadbike_01_co.paa"
            }, "" },
            { "Digi Desert", "reb", {
                "\A3\Soft_F\Quadbike_01\Data\quadbike_01_opfor_co.paa"
            }, "" },
            { "Black", "civ", {
                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_black_co.paa"
            }, "" },
            { "Blue", "civ", {
                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_blue_co.paa"
            }, "" },
            { "Red", "civ", {
                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_red_co.paa"
            }, "" },
            { "White", "civ", {
                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_white_co.paa"
            }, "" },
            { "Digi Green", "civ", {
                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_indp_co.paa"
            }, "" },
            { "Hunter Camo", "civ", {
                "\a3\soft_f_gamma\Quadbike_01\data\quadbike_01_indp_hunter_co.paa"
            }, "" },
            { "Rebel Camo", "reb", {
                "\a3\soft_f_gamma\Quadbike_01\data\quadbike_01_indp_hunter_co.paa"
            }, "" }
        };
    };

    class I_Truck_02_covered_F {
        vItemSpace = 250;
        conditions = "license_civ_trucking || {!(playerSide isEqualTo civilian)}";
        price = 100000;
        textures[] = {
            { "Orange", "civ", {
                "\A3\Soft_F_Beta\Truck_02\data\truck_02_kab_co.paa",
                "\a3\soft_f_beta\Truck_02\data\truck_02_kuz_co.paa"
            }, "" },
            { "Black", "cop", {
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)"
            }, "" }
        };
    };

    class I_Truck_02_transport_F {
        vItemSpace = 200;
        conditions = "license_civ_trucking || {!(playerSide isEqualTo civilian)}";
        price = 75000;
        textures[] = {
            { "Orange", "civ", {
                "\A3\Soft_F_Beta\Truck_02\data\truck_02_kab_co.paa",
                "\a3\soft_f_beta\Truck_02\data\truck_02_kuz_co.paa"
            }, "" },
            { "Black", "cop", {
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)"
            }, "" }
        };
    };

    class O_Truck_03_covered_F {
        vItemSpace = 300;
        conditions = "license_civ_trucking || {!(playerSide isEqualTo civilian)}";
        price = 250000;
        textures[] = {};
    };

    class C_Hatchback_01_F {
        vItemSpace = 40;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 9500;
        textures[] = {
            { "Beige", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base01_co.paa"
            }, "" },
            { "Green", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base02_co.paa"
            }, "" },
            { "Blue", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base03_co.paa"
            }, "" },
            { "Dark Blue", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base04_co.paa"
            }, "" },
            { "Yellow", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base06_co.paa"
            }, "" },
            { "White", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base07_co.paa"
            }, "" },
            { "Grey", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base08_co.paa"
            }, "" },
            { "Black", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base09_co.paa"
            }, "" }
        };
    };

    class C_SUV_01_F {
        vItemSpace = 50;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 30000;
        textures[] = {
            { "Dark Red", "civ", {
                "\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_co.paa"
            }, "" },
            { "Silver", "civ", {
                "\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_03_co.paa"
            }, "" },
            { "Orange", "civ", {
                "\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_04_co.paa"
            }, "" },
            { "Police", "cop", {
                "\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_02_co.paa"
            }, "" }
        };
    };

    class C_Van_01_transport_F {
        vItemSpace = 100;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 45000;
        textures[] = {
            { "White", "civ", {
                "\a3\soft_f_gamma\Van_01\Data\van_01_ext_co.paa"
            }, "" },
            { "Red", "civ", {
                "\a3\soft_f_gamma\Van_01\Data\van_01_ext_red_co.paa"
            }, "" }
        };
    };

    class C_Van_01_box_F {
        vItemSpace = 150;
        conditions = "license_civ_trucking || {!(playerSide isEqualTo civilian)}";
        price = 60000;
        textures[] = {
            { "White", "civ", {
                "\a3\soft_f_gamma\Van_01\Data\van_01_ext_co.paa"
            }, "" },
            { "Red", "civ", {
                "\a3\soft_f_gamma\Van_01\Data\van_01_ext_red_co.paa"
            }, "" }
        };
    };

    class B_MRAP_01_F {
        vItemSpace = 65;
        conditions = "";
        price = 30000;
        textures[] = {
            { "Black", "cop", {
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)",
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)"
            }, "" }
        };
    };

     class B_Heli_Light_01_stripped_F {
        vItemSpace = 90;
        conditions = "";
        price = 275000;
        textures[] = {
            { "Rebel Digital", "reb", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_digital_co.paa"
            }, "" }
        };
    };

    class B_Heli_Light_01_F {
        vItemSpace = 90;
        conditions = "license_civ_pilot || {license_cop_cAir} || {license_med_mAir}";
        price = 245000;
        textures[] = {
            { "Police", "cop", {
                "\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_ion_co.paa"
            }, "" },
            { "Sheriff", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_sheriff_co.paa"
            }, "" },
            { "Civ Blue", "civ", {
                "\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_blue_co.paa"
            }, "" },
            { "Civ Red", "civ", {
                "\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_co.paa"
            }, "" },
            { "Blueline", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_blueline_co.paa"
            }, "" },
            { "Elliptical", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_elliptical_co.paa"
            }, "" },
            { "Furious", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_furious_co.paa"
            }, "" },
            { "Jeans Blue", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_jeans_co.paa"
            }, "" },
            { "Speedy Redline", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_speedy_co.paa"
            }, "" },
            { "Sunset", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_sunset_co.paa"
            }, "" },
            { "Vrana", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_vrana_co.paa"
            }, "" },
            { "Waves Blue", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_wave_co.paa"
            }, "" },
            { "Rebel Digital", "reb", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_digital_co.paa"
            }, "" },
            { "Digi Green", "reb", {
                "\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_indp_co.paa"
            }, "" },
            { "EMS White", "med", {
                "#(argb,8,8,3)color(1,1,1,0.8)"
            }, "" }
        };
    };

    class C_Heli_Light_01_civil_F : B_Heli_Light_01_F {
        vItemSpace = 75;
        price = 245000;
    };

    class O_Heli_Light_02_unarmed_F {
        vItemSpace = 210;
        conditions = "license_civ_pilot || {license_med_mAir} || {(playerSide isEqualTo west)}";
        price = 750000;
        textures[] = {
            { "Black", "cop", {
                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_co.paa"
            }, "" },
            { "White / Blue", "civ", {
                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_civilian_co.paa"
            }, "" },
            { "Digi Green", "civ", {
                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_indp_co.paa"
            }, "" },
            { "Desert Digi", "reb", {
                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_opfor_co.paa"
            }, "" },
            { "EMS White", "med", {
                "#(argb,8,8,3)color(1,1,1,0.8)"
            }, "" }
        };
    };

    class B_SDV_01_F {
        vItemSpace = 50;
        conditions = "license_civ_boat || {license_cop_cg} || {(playerSide isEqualTo independent)}";
        price = 150000;
        textures[] = {};
    };

    class C_Van_01_fuel_F {
        vItemSpace = 20;
        vFuelSpace = 19500;
        conditions = "license_civ_trucking || {!(playerSide isEqualTo civilian)}";
        price = 120000;
        textures[] = {
            { "White", "civ", {
                "\A3\soft_f_gamma\Van_01\data\van_01_ext_co.paa",
                "\A3\soft_f_gamma\Van_01\data\van_01_tank_co.paa"
            }, "" },
            { "Red", "civ", {
                "\A3\soft_f_gamma\Van_01\data\van_01_ext_red_co.paa",
                "\A3\soft_f_gamma\Van_01\data\van_01_tank_red_co.paa"
            }, "" }
        };
    };

    class I_Truck_02_fuel_F {
        vItemSpace = 40;
        vFuelSpace = 42000;
        conditions = "license_civ_trucking || {!(playerSide isEqualTo civilian)}";
        price = 200000;
        textures[] = {
            { "White", "civ", {
                "\A3\Soft_F_Beta\Truck_02\data\truck_02_kab_co.paa",
                "\A3\Soft_F_Beta\Truck_02\data\truck_02_fuel_co.paa"
            }, "" }
        };
    };

    class B_Truck_01_fuel_F {
        vItemSpace = 50;
        vFuelSpace = 50000;
        conditions = "license_civ_trucking || {!(playerSide isEqualTo civilian)}";
        price = 250000;
        textures[] = {};
    };
};
