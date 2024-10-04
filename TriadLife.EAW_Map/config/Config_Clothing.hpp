/*
*    ARRAY FORMAT:
*        0: STRING (Classname)
*        1: STRING (Display Name, leave as "" for default)
*        2: SCALAR (Price)
*        3: STRING (Conditions) - Must return boolean :
*            String can contain any amount of conditions, aslong as the entire
*            string returns a boolean. This allows you to check any levels, licenses etc,
*            in any combination. For example:
*                "call life_coplevel && license_civ_someLicense"
*            This will also let you call any other function.
*
*   Clothing classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Equipment
*   Backpacks/remaining classnames can be found here (TIP: Search page for "pack"): https://community.bistudio.com/wiki/Arma_3_CfgVehicles_EMPTY
*
*/
class Clothing {
    class bruce {
        title = "STR_Shops_C_Bruce";
        conditions = "";
        side = "civ";
        uniforms[] = {
            { "NONE", $STR_C_Remove_uniforms, 0, "" },
            { "EAW_Civ_1_Uniform", "", 125, "" },
            { "EAW_Civ_1_Uniform_Brown", "", 150, "" },
            { "EAW_Civ_1_Uniform_Grey", "", 150, "" },
            { "EAW_Civ_1_Uniform_Tan", "", 150, "" },
            { "EAW_Civ_1_Uniform_White", "", 150, "" },
            { "EAW_Civ_Robe_Uniform_Blue", "", 150, "" },
            { "EAW_Civ_Robe_BlueGrey", "", 150, "" },
            { "EAW_Civ_Robe_Grey", "", 150, "" },
            { "U_NORTH_CIV_Jacket_1", "", 150, "" },
            { "U_NORTH_CIV_Jacket_2", "", 150, "" },
            { "U_NORTH_CIV_Jacket_3", "", 150, "" },
            { "U_NORTH_CIV_Jacket_4", "", 150, "" },
            { "U_NORTH_CIV_Jacket_5", "", 150, "" },
            { "U_NORTH_CIV_Jacket_6", "", 150, "" },
            { "U_NORTH_CIV_Jacket_7", "", 150, "" },
            { "U_NORTH_CIV_Jacket_8", "", 150, "" },
            { "U_NORTH_CIV_Jacket_9", "", 150, "" },
            { "U_NORTH_CIV_Jacket_10", "", 150, "" },
            { "U_NORTH_CIV_Jacket_11", "", 150, "" },
            { "U_NORTH_CIV_Jacket_12", "", 150, "" },
            { "U_NORTH_CIV_Suit_1", "", 150, "" },
            { "U_NORTH_CIV_Suit_2", "", 150, "" },
            { "U_NORTH_CIV_Suit_3", "", 150, "" },
            { "U_NORTH_CIV_Suit_4", "", 150, "" },
            { "U_NORTH_CIV_Suit_5", "", 150, "" },
            { "U_NORTH_CIV_Suit_6", "", 150, "" },
            { "U_NORTH_CIV_Suit_7", "", 150, "" },
            { "U_NORTH_CIV_Suit_8", "", 150, "" },
            { "U_NORTH_CIV_Suit_9", "", 150, "" },
            { "U_NORTH_CIV_Suit_10", "", 150, "" },
            { "U_NORTH_CIV_Suit_11", "", 150, "" },
            { "U_NORTH_CIV_Suit_12", "", 150, "" },
            { "rds_uniform_Functionary1", "", 150, "" },
            { "rds_uniform_Functionary2", "", 150, "" },
            { "rds_uniform_schoolteacher", "", 150, "" },
            { "U_NORTH_CIV_Wool_1", "", 150, "" },
            { "U_NORTH_CIV_Wool_2", "", 150, "" },
            { "U_NORTH_CIV_Wool_3", "", 150, "" },
            { "U_NORTH_CIV_Wool_4", "", 150, "" },
            { "U_NORTH_CIV_Wool_5", "", 150, "" },
            { "U_NORTH_CIV_Wool_6", "", 150, "" },
            { "U_NORTH_CIV_Wool_7", "", 150, "" },
            { "JMSSA_civ_ita1_black_F_CombatUniform", "", 150, "" }, //these are fancy
            { "JMSSA_civ_ita1_blue_F_CombatUniform", "", 150, "" },
            { "JMSSA_civ_ita1_brown_F_CombatUniform", "", 150, "" },
            { "JMSSA_civ_ita1_green_F_CombatUniform", "", 150, "" },
            { "JMSSA_fra_tanker_clean_F_CombatUniform", "", 150, "" }, //maybe
            { "JMSSA_aus_NA_blue_F_CombatUniform", "", 150, "" }, //maybe
            { "JMSSA_ger_shirt_dak_sand_F_CombatUniform", "", 150, "" } //maybe
        };
        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" },
            { "EAW_SunHat", "", 120, "" },
            { "H_Bandanna_gry", "", 120, "" },
            { "H_Bandanna_blu", "", 130, "" },
            { "H_Bandanna_cbr", "", 145, "" },
            { "H_Bandanna_sgg", "", 145, "" },
            { "H_Bandanna_sand", "", 145, "" },
            { "H_Beret_blk", "", 150, "" },
            { "H_Hat_brown", "", 150, "" },
            { "H_Hat_checker", "", 150, "" },
            { "H_Hat_grey", "", 150, "" },
            { "H_Hat_tan", "", 150, "" },
            { "H_Hat_StrawHat", "", 150, "" },
            { "H_Hat_StrawHat_dark", "", 150, "" },
            { "JMSSA_civ_ascotCap_blackCh", "", 150, "" },
            { "JMSSA_civ_ascotCap_brownCh", "", 150, "" },
            { "JMSSA_civ_ascotCap_dark", "", 150, "" },
            { "JMSSA_civ_ascotCap_greenCh", "", 150, "" },
            { "JMSSA_civ_ascotCap_redCh", "", 150, "" },
            { "JMSSA_fra_beret_black", "", 150, "" },
            { "JMSSA_civ_beret_black", "", 150, "" },
            { "JMSSA_civ_beret_grey", "", 150, "" },
            { "JMSSA_civ_beret_red", "", 150, "" },
            { "JMSSA_brit_sas_scarf", "", 150, "" }, // cool head bandana
            { "JMSSA_brit_woolhat", "", 150, "" }, //beanie
            { "JMSSA_brit_commando_cap", "", 150, "" }, //beanie
            { "JMSSA_brit_commando_cap_des", "", 150, "" }, //beanie
            { "H_NORTH_Fedora_Beige", "", 150, "" },
            { "H_NORTH_Fedora_Beige_2", "", 150, "" },
            { "H_NORTH_Fedora_Blue", "", 150, "" },
            { "H_NORTH_Fedora_Black", "", 150, "" },
            { "H_NORTH_Fedora_Blue_2", "", 150, "" },
            { "H_NORTH_Fedora_Black_2", "", 150, "" },
            { "H_NORTH_Fedora_Brown", "", 150, "" },
            { "H_NORTH_Fedora_Brown_2", "", 150, "" },
            { "H_NORTH_Fedora_Grey", "", 150, "" },
            { "H_NORTH_Fedora_Olive", "", 150, "" },
            { "H_NORTH_Fedora_Olive_2", "", 150, "" },
            { "H_NORTH_Fedora_White", "", 150, "" },
            { "H_NORTH_Fedora_White_2", "", 150, "" },
            { "H_NORTH_Homburg_Black", "", 150, "" },
            { "H_NORTH_Homburg_Grey", "", 150, "" },
            { "H_NORTH_Workercap_Be", "", 150, "" },
            { "H_NORTH_Workercap_Bl", "", 150, "" },
            { "H_NORTH_Workercap", "", 150, "" },
            { "H_NORTH_Workercap_G", "", 150, "" },
            { "H_NORTH_Workercap_R", "", 150, "" },
            { "wwi_helmet_civ_chapeau_melon", "", 150, "" }, //bowler cap
            { "sab_tophat", "", 150, "" },
            { "JMSSA_ita_fez", "", 150, "" },
            { "JMSSA_ita_highfezAlt_7th", "", 150, "" },
            { "JMSSA_fra_chechia_red", "", 150, "" },
            { "JMSSA_fra_chechia_khaki", "", 150, "" },
            { "JMSSA_fra_chechia_white", "", 150, "" },
            { "JMSSA_aus_hatL2_NA", "", 150, "" }, //maybe
            { "JMSSA_aus_hatL2_brown_NA", "", 150, "" }, //maybe
            { "JMSSA_aus_hatL2_khaki_NA", "", 150, "" }, //maybe
            { "JMSSA_brit_hat2_NA", "", 150, "" }, //maybe
            { "JMSSA_brit_hat2_brown_NA", "", 150, "" }, //maybe
            { "sab_wwi_ind_cap", "", 150, "" }, //maybe
            { "rds_rocker_hair1", "", 150, "" }, //maybe
            { "rds_rocker_hair2", "", 150, "" }, //maybe
            { "rds_rocker_hair3", "", 150, "" }, //maybe
            { "rds_Woodlander_cap1", "", 150, "" }, //maybe
            { "rds_Woodlander_cap2", "", 150, "" }, //maybe
            { "rds_Woodlander_cap3", "", 150, "" }, //maybe
            { "rds_Woodlander_cap4", "", 150, "" }, //maybe
            { "sab_bughunterhat", "", 150, "" },
            { "JMSSA_fra_tartberet_black", "", 150, "" },
            { "wwi_helmet_fr_tarte_1", "", 150, "" } //maybe
        };
        goggles[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "" },
            { "EAW_Glasses", "", 1900, "" },
            { "G_JMSSA_Civ_eyeglasses", "", 1900, "" },
            { "G_NORTH_SOV_Glasses", "", 1900, "" },
            { "G_NORTH_FIN_Glasses", "", 1900, "" },
            { "G_NORTH_FIN_Glasses_2", "", 1900, "" },
            { "G_NORTH_FIN_Sunglasses", "", 1900, "" },
            { "G_NORTH_FIN_Sunglasses_2", "", 1900, "" },
            { "G_JMSSA_fra_scarf", "", 1900, "" },
            { "G_JMSSA_fra_scarf_w", "", 1900, "" },
            { "G_JMSSA_Civ_CigaretteL", "", 1900, "" },
            { "G_JMSSA_Civ_CigaretteR", "", 1900, "" },
            { "G_Aviator", "", 150, "" }
        };
        vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "" },
            { "JMSSA_fra_mle35_belt", "", 1900, "" },
            { "V_NORTH_SOV_Marine_Pouch_Imperial_1", "", 1900, "" } //fanny pack
        };
        backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "" },
            { "JMSSA_ita_bag_b", "", 1900, "" },
            { "NORTH_fin_BreadBag3", "", 1900, "" },
            { "NORTH_fin_MapBag", "", 1900, "" },
            { "JMSSA_fra_m1893_b", "", 1900, "" },
            { "JMSSA_fra_m1893_roll_b", "", 1900, "" },
            { "JMSSA_brit_p1908pack_b", "", 1900, "" },
            { "JMSSA_brit_p37pack_b", "", 1900, "" },
            { "JMSSA_brit_p37pack_khaki_b", "", 1900, "" },
            { "JMSSA_brit_p37_2pack_b", "", 1900, "" },
            { "JMSSA_brit_p37_2pack_khaki_b", "", 1900, "" },
            { "JMSSA_brit_bergen_b", "", 1900, "" },
            { "JMSSA_brit_bergen_khaki_b", "", 1900, "" },
            { "NORTH_nor_Telemark", "", 1900, "" }
        };
    };

    class cop {
        title = "STR_Shops_C_Police";
        conditions = "";
        side = "cop";
        uniforms[] = {
            { "NONE", $STR_C_Remove_uniforms, 0, "" },
            { "EAW_Chinese_Uniform_Private", $STR_C_Cop_uniforms, 25, "" },
            { "EAW_Chinese_Uniform_Sergeant", "", 25, "" },
            { "EAW_Chinese_Uniform_Major", "", 25, "" }
        };
        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" },
            { "EAW_Chinese_VisorCap_Cap_1", "", 25, "" },
            { "EAW_Chinese_Cap_2", "", 25, "" },
            { "EAW_Chinese_Winter_Cap_1", "", 25, "" },
            { "EAW_Chinese_Winter_Cap_2", "", 25, "" },
            { "EAW_M35_2", "", 25, "" }
        };
        goggles[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "" },
            { "EAW_Glasses", "", 25, "" },
            { "G_JMSSA_Civ_CigaretteL", "", 1900, "" },
            { "G_JMSSA_Civ_CigaretteR", "", 1900, "" }
        };
        vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "" },
            { "EAW_C96_Vest", "", 25, "" },
            { "EAW_Chinese_MP28_Kit", "", 25, "" },
            { "EAW_NRA_PouchesBottom_Grey", "", 25, "" },
            { "EAW_NRA_PouchesTop_Grey", "", 25, "" },
            { "EAW_Chinese_Bandolier_Rifle_Grey_Alt", "", 25, "" },
            { "EAW_Chinese_Bandolier2_Rifle_Grey", "", 25, "" },
            { "EAW_ZB_Bandolier", "", 25, "" }
        };
        backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "" },
            { "EAW_Bedroll_Blue", "", 25, "" },
            { "EAW_Bedroll_2_Blue", "", 25, "" },
            { "EAW_Train_Tornister", "", 25, "" },
            { "EAW_Chinese_Backpack_German2", "", 25, "" },
            { "EAW_Chinese_Backpack_2", "", 25, "" },
            { "EAW_Chinese_Backpack_2_2", "", 25, "" },
            { "EAW_Chinese_Backpack_3_2", "", 25, "" },
            { "EAW_Chinese_Backpack_5", "", 25, "" }
        };
    };

    class dive {
        title = "STR_Shops_C_Diving";
        conditions = "license_civ_dive";
        side = "civ";
        uniforms[] = {
            { "NONE", $STR_C_Remove_uniforms, 0, "" },
            { "U_B_Wetsuit", "", 2000, "" }
        };
        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" }
        };
        goggles[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "" },
            { "G_Diving", "", 500, "" }
        };
        vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "" },
            { "V_RebreatherB", "", 5000, "" }
        };
        backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "" }
        };
    };

    class gun_clothing {
        title = "STR_Shops_C_Gun";
        conditions = "license_civ_gun";
        side = "civ";
        uniforms[] = {
            { "NONE", $STR_C_Remove_uniforms, 0, "" }
        };
        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" }
        };
        goggles[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "" }
        };
        vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "" },
            { "JMSSA_fra_mle35rifle", "", 1900, "" },
            { "JMSSA_Fra_mle35_holster", "", 4900, "" },
            { "JMSSA_fra_mle35rifle_holster", "", 1900, "" }
        };
        backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "" }
        };
    };

    class gang_clothing {
        title = "STR_Shops_C_Gang";
        conditions = "";
        side = "civ";
        uniforms[] = {
            { "NONE", $STR_C_Remove_uniforms, 0, "" },
            { "U_NORTH_CIV_Jacket_1", "", 150, "" },
            { "U_NORTH_CIV_Jacket_2", "", 150, "" },
            { "U_NORTH_CIV_Jacket_3", "", 150, "" },
            { "U_NORTH_CIV_Jacket_4", "", 150, "" },
            { "U_NORTH_CIV_Jacket_5", "", 150, "" },
            { "U_NORTH_CIV_Jacket_6", "", 150, "" },
            { "U_NORTH_CIV_Jacket_7", "", 150, "" },
            { "U_NORTH_CIV_Jacket_8", "", 150, "" },
            { "U_NORTH_CIV_Jacket_9", "", 150, "" },
            { "U_NORTH_CIV_Jacket_10", "", 150, "" },
            { "U_NORTH_CIV_Jacket_11", "", 150, "" },
            { "U_NORTH_CIV_Jacket_12", "", 150, "" },
            { "U_NORTH_CIV_Suit_1", "", 150, "" },
            { "U_NORTH_CIV_Suit_2", "", 150, "" },
            { "U_NORTH_CIV_Suit_3", "", 150, "" },
            { "U_NORTH_CIV_Suit_4", "", 150, "" },
            { "U_NORTH_CIV_Suit_5", "", 150, "" },
            { "U_NORTH_CIV_Suit_6", "", 150, "" },
            { "U_NORTH_CIV_Suit_7", "", 150, "" },
            { "U_NORTH_CIV_Suit_8", "", 150, "" },
            { "U_NORTH_CIV_Suit_9", "", 150, "" },
            { "U_NORTH_CIV_Suit_10", "", 150, "" },
            { "U_NORTH_CIV_Suit_11", "", 150, "" },
            { "U_NORTH_CIV_Suit_12", "", 150, "" },
            { "rds_uniform_Functionary1", "", 150, "" },
            { "rds_uniform_Functionary2", "", 150, "" },
            { "U_NORTH_CIV_Wool_1", "", 150, "" },
            { "U_NORTH_CIV_Wool_2", "", 150, "" },
            { "U_NORTH_CIV_Wool_3", "", 150, "" },
            { "U_NORTH_CIV_Wool_4", "", 150, "" },
            { "U_NORTH_CIV_Wool_5", "", 150, "" },
            { "U_NORTH_CIV_Wool_6", "", 150, "" },
            { "U_NORTH_CIV_Wool_7", "", 150, "" },
            { "U_C_FormalSuit_01_black_F", "", 150, "" },
            { "U_C_FormalSuit_01_blue_F", "", 150, "" },
            { "U_C_FormalSuit_01_gray_F", "", 150, "" },
            { "U_C_FormalSuit_01_khaki_F", "", 150, "" },
            { "U_C_FormalSuit_01_tshirt_black_F", "", 150, "" },
            { "U_C_FormalSuit_01_tshirt_gray_F", "", 150, "" }
        };
        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" },
            { "H_NORTH_Fedora_Beige", "", 150, "" },
            { "H_NORTH_Fedora_Beige_2", "", 150, "" },
            { "H_NORTH_Fedora_Blue", "", 150, "" },
            { "H_NORTH_Fedora_Black", "", 150, "" },
            { "H_NORTH_Fedora_Blue_2", "", 150, "" },
            { "H_NORTH_Fedora_Black_2", "", 150, "" },
            { "H_NORTH_Fedora_Brown", "", 150, "" },
            { "H_NORTH_Fedora_Brown_2", "", 150, "" },
            { "H_NORTH_Fedora_Grey", "", 150, "" },
            { "H_NORTH_Fedora_Olive", "", 150, "" },
            { "H_NORTH_Fedora_Olive_2", "", 150, "" },
            { "H_NORTH_Fedora_White", "", 150, "" },
            { "H_NORTH_Fedora_White_2", "", 150, "" },
            { "H_NORTH_Homburg_Black", "", 150, "" },
            { "H_NORTH_Homburg_Grey", "", 150, "" },
            { "H_NORTH_Workercap_Be", "", 150, "" },
            { "H_NORTH_Workercap_Bl", "", 150, "" },
            { "H_NORTH_Workercap", "", 150, "" },
            { "H_NORTH_Workercap_G", "", 150, "" },
            { "H_NORTH_Workercap_R", "", 150, "" },
            { "JMSSA_brit_sas_scarf", "", 150, "" }, // cool head bandana
            { "JMSSA_brit_woolhat", "", 150, "" }, //beanie
            { "JMSSA_brit_commando_cap", "", 150, "" }, //beanie
            { "JMSSA_brit_commando_cap_des", "", 150, "" }, //beanie
            { "H_HeadBandage_clean_F", "", 150, "" },
            { "H_HeadBandage_stained_F", "", 150, "" },
            { "H_HeadBandage_bloody_F", "", 150, "" }
        };
        goggles[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "" },
            { "EAW_Glasses", "", 1900, "" },
            { "G_JMSSA_arab_scarf", "", 1900, "" },
            { "G_JMSSA_arab_scarfFace", "", 1900, "" },
            { "G_JMSSA_Civ_CigaretteL", "", 1900, "" },
            { "G_JMSSA_Civ_CigaretteR", "", 1900, "" },
            { "G_Bandanna_blk", "", 1900, "" },
            { "G_Bandanna_oli", "", 1900, "" },
            { "G_Bandanna_tan", "", 1900, "" },
            { "G_JMSSA_GB_scarfHigh", "", 1900, "" },
            { "G_JMSSA_GB_scarfSc", "", 1900, "" },
            { "G_JMSSA_GB_scarfSc_khaki", "", 1900, "" },
            { "G_JMSSA_GB_scarfSc_khaki_white", "", 1900, "" },
            { "G_JMSSA_GB_scarfSc_khaki_red", "", 1900, "" }
        };
        vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "" },
            { "JMSSA_fra_mle35rifle", "", 1900, "" },
            { "JMSSA_Fra_mle35_holster", "", 4900, "" },
            { "JMSSA_fra_mle35rifle_holster", "", 1900, "" },
            { "JMSSA_Fra_mle35rifle_mg", "", 4900, "" },
            { "JMSSA_fra_mle35rifle_bag", "", 1900, "" }
        };
        backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "" },
            { "JMSSA_ita_bag_b", "", 1900, "" },
            { "NORTH_fin_BreadBag3", "", 1900, "" },
            { "NORTH_fin_MapBag", "", 1900, "" },
            { "JMSSA_brit_bergen_b", "", 1900, "" },
            { "JMSSA_brit_bergen_khaki_b", "", 1900, "" },
            { "NORTH_nor_Telemark", "", 1900, "" }
        };
    };

    class med_clothing {
        title = "STR_MAR_EMS_Clothing_Shop";
        conditions = "";
        side = "med";
        uniforms[] = {
            { "NONE", $STR_C_Remove_uniforms, 0, "" },
            { "rds_uniform_doctor", $STR_C_EMS_uniforms, 50, "" }
        };
        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" }
        };
        goggles[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "" },
            { "G_NORTH_FIN_Medicalarmband", "", 10, "" }
        };
        vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "" },
            { "JMSSA_ita_VMedBag", "", 10, "" }
        };
        backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "" },
            { "JMSSA_brit_p37packMed_b", "", 1900, "" },
            { "JMSSA_brit_p37packMed_khaki_b", "", 1900, "" },
            { "JMSSA_ger_medpack_b", "", 10, "" }
        };
    };

    class reb {
        title = "STR_Shops_C_Rebel";
        conditions = "license_civ_rebel";
        side = "civ";
        uniforms[] = {
            { "NONE", $STR_C_Remove_uniforms, 0, "" },
            { "JMSSA_arab_jacket_brown_F_CombatUniform", "Peasant Clothes", 1900, "" },
            { "JMSSA_arab_jacket_grey_F_CombatUniform", "", 1900, "" },
            { "JMSSA_arab_jacket_white_F_CombatUniform", "", 1900, "" },
            { "JMSSA_arab_tunic_beige_F_CombatUniform", "", 1900, "" },
            { "JMSSA_arab_tunic_black_F_CombatUniform", "", 1900, "" },
            { "JMSSA_arab_tunic_blue_F_CombatUniform", "", 1900, "" },
            { "JMSSA_arab_tunic_red_F_CombatUniform", "", 1900, "" },
            { "JMSSA_arab_tunic_white_F_CombatUniform", "", 1900, "" },
            { "JMSSA_arab_tunic_yellow_F_CombatUniform", "", 1900, "" }
        };
        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" },
            { "H_NORTH_CIV_Koivistolainen_1", "", 150, "" },
            { "H_NORTH_CIV_Koivistolainen_5", "", 150, "" },
            { "G_JMSSA_GB_arab_scarfFace_brown", "", 1900, "" },
            { "G_JMSSA_GB_arab_scarfFace_white", "", 1900, "" },
            { "JMSSA_brit_sas_scarf", "", 150, "" }, // cool head bandana
            { "JMSSA_brit_woolhat", "", 150, "" }, //beanie
            { "JMSSA_brit_commando_cap", "", 150, "" }, //beanie
            { "JMSSA_brit_commando_cap_des", "", 150, "" } //beanie
        };
        goggles[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "" },
            { "G_JMSSA_GB_arab_scarfFace", "", 1900, "" },
        };
        vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "" },
            { "JMSSA_arab_leatstrip", "", 150, "" },
            { "JMSSA_fra_mle35rifle", "", 1900, "" },
            { "JMSSA_Fra_mle35_holster", "", 4900, "" },
            { "JMSSA_fra_mle35rifle_holster", "", 1900, "" },
            { "JMSSA_Fra_mle35rifle_mg", "", 4900, "" },
            { "JMSSA_fra_mle35rifle_bag", "", 1900, "" }
        };
        backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "" },
            { "JMSSA_ita_bag_b", "", 1900, "" },
            { "NORTH_fin_BreadBag3", "", 1900, "" },
            { "NORTH_fin_MapBag", "", 1900, "" },
            { "JMSSA_brit_bergen_b", "", 1900, "" },
            { "JMSSA_brit_bergen_khaki_b", "", 1900, "" },
            { "NORTH_nor_Telemark", "", 1900, "" }
        };
    };

    class kart {
        title = "STR_Shops_C_Kart";
        conditions = "";
        side = "civ";
        uniforms[] = {
            { "NONE", $STR_C_Remove_uniforms, 0, "" },
            { "wwi_pilot_cloth_i", "", 1500, "" },
            { "H_NORTH_CIV_Koivistolainen_1", "", 150, "" },
            { "H_NORTH_CIV_Koivistolainen_2", "", 150, "" },
            { "H_NORTH_CIV_Koivistolainen_3", "", 150, "" },
            { "H_NORTH_CIV_Koivistolainen_4", "", 150, "" },
            { "H_NORTH_CIV_Koivistolainen_5", "", 150, "" }
        };
        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" },
            { "sab_wwi_ind_cap", "", 150, "" },
            { "H_NORTH_SOV_VDV_helmet", "", 150, "" },
            { "H_NORTH_SOV_air_helmet", "", 150, "" },
            { "JMSSA_arab_scarfHat_black", "", 150, "" },
            { "JMSSA_arab_scarfHat_white", "", 150, "" }
        };
        goggles[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "" },
            { "sab_wwi_goggles", "", 150, "" },
            { "G_JMSSA_GB_des_googles_old", "", 150, "" },
            { "G_JMSSA_GB_des_googles", "", 150, "" },
            { "G_JMSSA_GB_headset", "", 150, "" }
        };
        vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "" },
            { "JMSSA_arab_leatstrip", "", 150, "" },
            { "wwi_eng_bag_1914", "", 150, "" }
        };
        backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "" },
            { "JMSSA_ita_bag_b", "", 1900, "" }
        };
    };
};
