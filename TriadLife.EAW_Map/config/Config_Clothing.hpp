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
            { "EAW_Civ_1_Uniform", "", 500, "" },
            { "EAW_Civ_1_Uniform_Brown", "", 500, "" },
            { "EAW_Civ_1_Uniform_Grey", "", 500, "" },
            { "EAW_Civ_1_Uniform_Tan", "", 500, "" },
            { "EAW_Civ_1_Uniform_White", "", 500, "" },
            { "EAW_Civ_Robe_Uniform_Blue", "", 1000, "" },
            { "EAW_Civ_Robe_BlueGrey", "", 1000, "" },
            { "EAW_Civ_Robe_Grey", "", 1000, "" },
            { "ff_civ_overal", "", 1000, "" },
            { "U_NORTH_CIV_Jacket_1", "", 1500, "" },
            { "U_NORTH_CIV_Jacket_2", "", 1500, "" },
            { "U_NORTH_CIV_Jacket_3", "", 1500, "" },
            { "U_NORTH_CIV_Jacket_4", "", 1500, "" },
            { "U_NORTH_CIV_Jacket_5", "", 1500, "" },
            { "U_NORTH_CIV_Jacket_6", "", 1500, "" },
            { "U_NORTH_CIV_Jacket_7", "", 1500, "" },
            { "U_NORTH_CIV_Jacket_8", "", 1500, "" },
            { "U_NORTH_CIV_Jacket_9", "", 1500, "" },
            { "U_NORTH_CIV_Jacket_10", "", 1500, "" },
            { "U_NORTH_CIV_Jacket_11", "", 1500, "" },
            { "U_NORTH_CIV_Jacket_12", "", 1500, "" },
            { "U_NORTH_CIV_Suit_1", "", 1500, "" },
            { "U_NORTH_CIV_Suit_2", "", 1500, "" },
            { "U_NORTH_CIV_Suit_3", "", 1500, "" },
            { "U_NORTH_CIV_Suit_4", "", 1500, "" },
            { "U_NORTH_CIV_Suit_5", "", 1500, "" },
            { "U_NORTH_CIV_Suit_6", "", 1500, "" },
            { "U_NORTH_CIV_Suit_7", "", 1500, "" },
            { "U_NORTH_CIV_Suit_8", "", 1500, "" },
            { "U_NORTH_CIV_Suit_9", "", 1500, "" },
            { "U_NORTH_CIV_Suit_10", "", 1500, "" },
            { "U_NORTH_CIV_Suit_11", "", 1500, "" },
            { "U_NORTH_CIV_Suit_12", "", 1500, "" },
            { "rds_uniform_schoolteacher", "Scholar Clothes", 2500, "" },
            { "ff_suit", "All-Black Suit", 10000, "" },
            { "ff_suit_02", "Brown Suit Black Pants", 10000, "" },
            { "ff_suit_03", "Black Suit Brown Pants", 10000, "" },
            { "ff_suit_04", "Gray Suit Black Pants", 10000, "" },
            { "ff_suit_05", "Brown Suit Black Pants", 10000, "" },
            { "ff_suit_06", "All-Brown Suit", 10000, "" },
            { "ff_suit_07", "Brown Suit Gray Pants", 10000, "" },
            { "ff_suit_08", "All-Gray Suit", 10000, "" },
            { "ff_suit_09", "Gray Suit Brown Pants", 10000, "" },
            { "ff_suit_10", "Checkered Suit", 10000, "" },
            { "ff_suit_11", "All-Beige Suit", 10000, "" },
            { "rds_uniform_Functionary1", "Black Suit Red Tie", 10000, "" },
            { "rds_uniform_Functionary2", "Brown Suit Blue Tie", 10000, "" },
            { "ff_farmer", "", 2500, "" },
            { "ff_farmer_2", "", 2500, "" },
            { "ff_profit", "", 3000, "" },
            { "ff_profit_2", "", 3000, "" },
            { "ff_profit_3", "", 3000, "" },
            { "ff_profit_4", "", 3000, "" },
            { "ff_profit_5", "", 3000, "" },
            { "U_NORTH_CIV_Wool_1", "", 5000, "" },
            { "U_NORTH_CIV_Wool_2", "", 5000, "" },
            { "U_NORTH_CIV_Wool_3", "", 5000, "" },
            { "U_NORTH_CIV_Wool_4", "", 5000, "" },
            { "U_NORTH_CIV_Wool_5", "", 5000, "" },
            { "U_NORTH_CIV_Wool_6", "", 5000, "" },
            { "U_NORTH_CIV_Wool_7", "", 5000, "" },
            { "JMSSA_civ_ita1_black_F_CombatUniform", "", 7500, "" }, //these are fancy
            { "JMSSA_civ_ita1_blue_F_CombatUniform", "", 7500, "" },
            { "JMSSA_civ_ita1_brown_F_CombatUniform", "", 7500, "" },
            { "JMSSA_civ_ita1_green_F_CombatUniform", "", 7500, "" },
            { "JMSSA_fra_tanker_clean_F_CombatUniform", "", 5000, "" }, //maybe
            { "JMSSA_aus_NA_blue_F_CombatUniform", "", 5000, "" }, //maybe
            { "JMSSA_ger_shirt_dak_sand_F_CombatUniform", "", 5000, "" } //maybe
        };
        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" },
            { "EAW_SunHat", "", 500, "" },
            // { "H_Hat_brown", "", 1000, "" }, boooooringgg
            // { "H_Hat_checker", "", 1000, "" },
            // { "H_Hat_grey", "", 1000, "" },
            // { "H_Hat_tan", "", 1000, "" },
            // { "H_StrawHat", "Straw Hat", 1000, "" },
            // { "H_StrawHat_dark", "Dark Straw Hat", 1000, "" },
            { "JMSSA_civ_ascotCap_blackCh", "", 1000, "" },
            { "JMSSA_civ_ascotCap_brownCh", "", 1000, "" },
            { "JMSSA_civ_ascotCap_dark", "", 1000, "" },
            { "JMSSA_civ_ascotCap_greenCh", "", 1000, "" },
            { "JMSSA_civ_ascotCap_redCh", "", 1000, "" },
            { "JMSSA_fra_beret_black", "", 1000, "" },
            { "JMSSA_civ_beret_black", "", 1000, "" },
            { "JMSSA_civ_beret_grey", "", 1000, "" },
            { "JMSSA_civ_beret_red", "", 1000, "" },
            { "JMSSA_brit_sas_scarf", "", 1000, "" }, // cool head bandana
            { "JMSSA_brit_woolhat", "", 1000, "" }, //beanie
            { "JMSSA_brit_commando_cap", "", 1000, "" }, //beanie
            { "JMSSA_brit_commando_cap_des", "", 1000, "" }, //beanie
            { "H_NORTH_Fedora_Beige", "", 5000, "" },
            { "H_NORTH_Fedora_Beige_2", "", 5000, "" },
            { "H_NORTH_Fedora_Blue", "", 5000, "" },
            { "H_NORTH_Fedora_Black", "", 5000, "" },
            { "H_NORTH_Fedora_Blue_2", "", 5000, "" },
            { "H_NORTH_Fedora_Black_2", "", 5000, "" },
            { "H_NORTH_Fedora_Brown", "", 5000, "" },
            { "H_NORTH_Fedora_Brown_2", "", 5000, "" },
            { "H_NORTH_Fedora_Grey", "", 5000, "" },
            { "H_NORTH_Fedora_Olive", "", 5000, "" },
            { "H_NORTH_Fedora_Olive_2", "", 5000, "" },
            { "H_NORTH_Fedora_White", "", 5000, "" },
            { "H_NORTH_Fedora_White_2", "", 5000, "" },
            { "H_NORTH_Homburg_Black", "", 7500, "" },
            { "H_NORTH_Homburg_Grey", "", 7500, "" },
            { "H_NORTH_Workercap_Be", "", 2000, "" },
            { "H_NORTH_Workercap_Bl", "", 2000, "" },
            { "H_NORTH_Workercap", "", 2000, "" },
            { "H_NORTH_Workercap_G", "", 2000, "" },
            { "H_NORTH_Workercap_R", "", 2000, "" },
            { "wwi_helmet_civ_chapeau_melon", "Bowler Hat", 5000, "" }, //bowler cap
            { "sab_tophat", "", 100000, "" },
            { "H_Beret_blk", "", 5000, "" },
            { "JMSSA_ita_fez", "", 6000, "" },
            { "JMSSA_ita_highfezAlt_7th", "", 8000, "" },
            { "JMSSA_fra_chechia_red", "", 12000, "" },
            { "JMSSA_fra_chechia_khaki", "", 15000, "" },
            { "JMSSA_fra_chechia_white", "", 15000, "" },
            { "JMSSA_aus_hatL2_NA", "", 3000, "" }, //maybe
            { "JMSSA_aus_hatL2_brown_NA", "", 3000, "" }, //maybe
            { "JMSSA_aus_hatL2_khaki_NA", "", 3000, "" }, //maybe
            { "JMSSA_brit_hat2_NA", "", 4000, "" }, //maybe
            { "JMSSA_brit_hat2_brown_NA", "", 4000, "" }, //maybe
            { "H_Hat_Safari_olive_F", "", 4000, "" }, //maybe
            { "H_Hat_Safari_sand_F", "", 4000, "" }, //maybe
            { "sab_wwi_ind_cap", "", 3000, "" }, //maybe
            { "rds_rocker_hair1", "", 15000, "" }, //maybe
            { "rds_rocker_hair2", "", 15000, "" }, //maybe
            { "rds_rocker_hair3", "", 15000, "" }, //maybe
            { "rds_Woodlander_cap1", "", 1000, "" }, //maybe
            { "rds_Woodlander_cap2", "", 1000, "" }, //maybe
            { "rds_Woodlander_cap3", "", 1000, "" }, //maybe
            { "rds_Woodlander_cap4", "", 1000, "" }, //maybe
            { "sab_bughunterhat", "", 15000, "" },
            { "JMSSA_fra_tartberet_black", "", 5000, "" },
            { "wwi_helmet_fr_tarte_1", "", 5000, "" } //maybe
        };
        goggles[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "" },
            { "EAW_Glasses", "", 1000, "" },
            { "G_JMSSA_Civ_eyeglasses", "", 2000, "" },
            { "G_NORTH_SOV_Glasses", "", 2500, "" },
            { "G_NORTH_FIN_Glasses", "", 3000, "" },
            { "G_NORTH_FIN_Glasses_2", "", 3000, "" },
            { "G_NORTH_FIN_Sunglasses", "", 3500, "" },
            { "G_NORTH_FIN_Sunglasses_2", "", 3500, "" },
            { "G_JMSSA_fra_scarf", "", 5000, "" },
            { "G_JMSSA_fra_scarf_w", "", 5000, "" },
            { "G_JMSSA_Civ_CigaretteL", "", 500, "" },
            { "G_JMSSA_Civ_CigaretteR", "", 500, "" }
            // { "G_Aviator", "", 150, "" } //too familiar
        };
        vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "" },
            { "ff_nbs_riem", "", 1000, "" },
            { "JMSSA_fra_mle35_belt", "", 1500, "" },
            { "V_NORTH_SOV_Marine_Pouch_Imperial_1", "", 2000, "" } //fanny pack
        };
        backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "" },
            { "JMSSA_ita_bag_b", "", 3000, "" },
            { "NORTH_fin_BreadBag3", "", 2000, "" },
            { "NORTH_fin_MapBag", "", 2500, "" },
            { "EAW_Bedroll_Brown", "", 1500, "" },
            { "EAW_Bedroll_Green", "", 1500, "" },
            { "EAW_Bedroll_Tan", "", 1500, "" },
            { "EAW_Bedroll_2_Brown", "", 1500, "" },
            { "EAW_Bedroll_2_Green", "", 1500, "" },
            { "EAW_Bedroll_2_Tan", "", 1500, "" },
            { "JMSSA_fra_m1893_b", "", 2500, "" },
            { "JMSSA_fra_m1893_roll_b", "", 2750, "" },
            { "JMSSA_brit_p1908pack_b", "", 3000, "" },
            { "JMSSA_brit_p37pack_b", "", 3500, "" },
            { "JMSSA_brit_p37pack_khaki_b", "", 3500, "" },
            { "JMSSA_brit_p37_2pack_b", "", 3750, "" },
            { "JMSSA_brit_p37_2pack_khaki_b", "", 3750, "" },
            { "JMSSA_brit_bergen_b", "", 7500, "" },
            { "JMSSA_brit_bergen_khaki_b", "", 7500, "" },
            { "NORTH_nor_Telemark", "", 10000, "" }
        };
    };

    class cop {
        title = "STR_Shops_C_Police";
        conditions = "";
        side = "cop";
        uniforms[] = {
            { "NONE", $STR_C_Remove_uniforms, 0, "" },
            { "EAW_Chinese_Uniform_Private", $STR_C_Cop_uniforms, 1000, "" },
            { "EAW_Chinese_Uniform_Sergeant", "", 2500, "" },
            { "EAW_Chinese_Uniform_Major", "", 7500, "" }
        };
        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" },
            { "EAW_Chinese_VisorCap_Blue", "", 1000, "" },
            { "EAW_Chinese_Cap_2", "", 500, "" },
            { "EAW_Chinese_Winter_Cap_1", "", 750, "" },
            { "EAW_Chinese_Winter_Cap_2", "", 750, "" },
            { "EAW_M35_2", "", 12500, "" }
        };
        goggles[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "" },
            { "EAW_Glasses", "", 1000, "" },
            { "G_JMSSA_Civ_CigaretteL", "", 500, "" },
            { "G_JMSSA_Civ_CigaretteR", "", 500, "" },
            { "G_JMSSA_ITA_t35_gasmask", "", 6000, "" }
        };
        vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "" },
            { "sab_wwi_pilot_holster", "", 500, "" },
            { "rds_pistol_holster", "", 1500, "" },
            { "EAW_C96_Vest", "", 3000, "" },
            { "EAW_C96_Vest_Dao", "", 4000, "" },
            { "EAW_Chinese_MP28_Kit", "", 4000, "" },
            { "EAW_Chinese_MP28_Kit_Dao", "", 4000, "" },
            { "EAW_NRA_PouchesBottom_Grey", "", 2500, "" },
            { "EAW_NRA_PouchesTop_Grey", "", 2500, "" },
            { "EAW_Chinese_Bandolier_Rifle_Grey_Alt", "", 3500, "" },
            { "EAW_Chinese_Bandolier2_Rifle_Grey", "", 3500, "" },
            { "EAW_ZB_Bandolier", "", 5000, "" },
            { "GoG_HolsterSwordVest", "", 1000, "" },
            { "GoG_HolsterSwordVestBack", "", 1000, "" }
        };
        backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "" },
            { "EAW_Bedroll_Blue", "", 1500, "" },
            { "EAW_Bedroll_2_Blue", "", 1500, "" },
            { "EAW_Train_Tornister", "", 2500, "" },
            { "EAW_Chinese_Backpack_German2", "", 2500, "" },
            { "EAW_Chinese_Backpack_2", "", 2500, "" },
            { "EAW_Chinese_Backpack_2_2", "", 2500, "" },
            { "EAW_Chinese_Backpack_3_2", "", 2500, "" },
            { "EAW_Chinese_Backpack_5", "", 2500, "" }
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
            { "sab_wwi_pilot_holster", "", 1500, "" },
            { "JMSSA_fra_mle35rifle_light", "", 2500, "" },
            { "JMSSA_Fra_mle35_holster", "", 3000, "" },
            { "JMSSA_fra_mle35rifle_holster", "", 3000, "" }
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
            { "U_NORTH_CIV_Jacket_1", "", 1500, "" },
            { "U_NORTH_CIV_Jacket_2", "", 1500, "" },
            { "U_NORTH_CIV_Jacket_3", "", 1500, "" },
            { "U_NORTH_CIV_Jacket_4", "", 1500, "" },
            { "U_NORTH_CIV_Jacket_5", "", 1500, "" },
            { "U_NORTH_CIV_Jacket_6", "", 1500, "" },
            { "U_NORTH_CIV_Jacket_7", "", 1500, "" },
            { "U_NORTH_CIV_Jacket_8", "", 1500, "" },
            { "U_NORTH_CIV_Jacket_9", "", 1500, "" },
            { "U_NORTH_CIV_Jacket_10", "", 1500, "" },
            { "U_NORTH_CIV_Jacket_11", "", 1500, "" },
            { "U_NORTH_CIV_Jacket_12", "", 1500, "" },
            { "U_NORTH_CIV_Suit_1", "", 1500, "" },
            { "U_NORTH_CIV_Suit_2", "", 1500, "" },
            { "U_NORTH_CIV_Suit_3", "", 1500, "" },
            { "U_NORTH_CIV_Suit_4", "", 1500, "" },
            { "U_NORTH_CIV_Suit_5", "", 1500, "" },
            { "U_NORTH_CIV_Suit_6", "", 1500, "" },
            { "U_NORTH_CIV_Suit_7", "", 1500, "" },
            { "U_NORTH_CIV_Suit_8", "", 1500, "" },
            { "U_NORTH_CIV_Suit_9", "", 1500, "" },
            { "U_NORTH_CIV_Suit_10", "", 1500, "" },
            { "U_NORTH_CIV_Suit_11", "", 1500, "" },
            { "U_NORTH_CIV_Suit_12", "", 1500, "" },
            { "ff_suit", "All-Black Suit", 10000, "" },
            { "ff_suit_02", "Brown Suit Black Pants", 10000, "" },
            { "ff_suit_03", "Black Suit Brown Pants", 10000, "" },
            { "ff_suit_04", "Gray Suit Black Pants", 10000, "" },
            { "ff_suit_05", "Brown Suit Black Pants", 10000, "" },
            { "ff_suit_06", "All-Brown Suit", 10000, "" },
            { "ff_suit_07", "Brown Suit Gray Pants", 10000, "" },
            { "ff_suit_08", "All-Gray Suit", 10000, "" },
            { "ff_suit_09", "Gray Suit Brown Pants", 10000, "" },
            { "ff_suit_10", "Checkered Suit", 10000, "" },
            { "ff_suit_11", "All-Beige Suit", 10000, "" },
            { "rds_uniform_Functionary1", "Black Suit Red Tie", 10000, "" },
            { "rds_uniform_Functionary2", "Brown Suit Blue Tie", 10000, "" },
            { "U_NORTH_CIV_Wool_1", "", 5000, "" },
            { "U_NORTH_CIV_Wool_2", "", 5000, "" },
            { "U_NORTH_CIV_Wool_3", "", 5000, "" },
            { "U_NORTH_CIV_Wool_4", "", 5000, "" },
            { "U_NORTH_CIV_Wool_5", "", 5000, "" },
            { "U_NORTH_CIV_Wool_6", "", 5000, "" },
            { "U_NORTH_CIV_Wool_7", "", 5000, "" },
            { "U_C_FormalSuit_01_black_F", "Tailored Suit", 25000, "" },
            { "U_C_FormalSuit_01_blue_F", "Tailored Suit", 25000, "" },
            { "U_C_FormalSuit_01_gray_F", "Tailored Suit", 25000, "" },
            { "U_C_FormalSuit_01_khaki_F", "Tailored Suit", 25000, "" },
            { "U_C_FormalSuit_01_tshirt_black_F", "Suit Jacket", 25000, "" },
            { "U_C_FormalSuit_01_tshirt_gray_F", "Suit Jacket", 25000, "" }
        };
        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" },
            { "H_Bandanna_gry", "", 1000, "" },
            { "H_Bandanna_blu", "", 1000, "" },
            { "H_Bandanna_cbr", "", 1000, "" },
            { "H_Bandanna_sgg", "", 1000, "" },
            { "H_Bandanna_sand", "", 1000, "" },
            { "H_NORTH_Fedora_Beige", "", 5000, "" },
            { "H_NORTH_Fedora_Beige_2", "", 5000, "" },
            { "H_NORTH_Fedora_Blue", "", 5000, "" },
            { "H_NORTH_Fedora_Black", "", 5000, "" },
            { "H_NORTH_Fedora_Blue_2", "", 5000, "" },
            { "H_NORTH_Fedora_Black_2", "", 5000, "" },
            { "H_NORTH_Fedora_Brown", "", 5000, "" },
            { "H_NORTH_Fedora_Brown_2", "", 5000, "" },
            { "H_NORTH_Fedora_Grey", "", 5000, "" },
            { "H_NORTH_Fedora_Olive", "", 5000, "" },
            { "H_NORTH_Fedora_Olive_2", "", 5000, "" },
            { "H_NORTH_Fedora_White", "", 5000, "" },
            { "H_NORTH_Fedora_White_2", "", 5000, "" },
            { "H_NORTH_Homburg_Black", "", 8000, "" },
            { "H_NORTH_Homburg_Grey", "", 8000, "" },
            { "H_NORTH_Workercap_Be", "", 2000, "" },
            { "H_NORTH_Workercap_Bl", "", 2000, "" },
            { "H_NORTH_Workercap", "", 2000, "" },
            { "H_NORTH_Workercap_G", "", 2000, "" },
            { "H_NORTH_Workercap_R", "", 2000, "" },
            { "FF_BasherCap", "", 2000, "" },
            { "FF_BasherCap2", "", 2000, "" },
            { "FF_BasherCap3", "", 2000, "" },
            { "FF_BasherCap4", "", 2000, "" },
            { "FF_BasherCap5", "", 2000, "" },
            { "FF_BasherCap6", "", 2000, "" },
            { "JMSSA_brit_sas_scarf", "", 1500, "" }, // cool head bandana
            { "JMSSA_brit_woolhat", "", 1500, "" }, //beanie
            { "JMSSA_brit_commando_cap", "", 1500, "" }, //beanie
            { "JMSSA_brit_commando_cap_des", "", 1500, "" }, //beanie
            { "FF_Fedora", "", 10000, "" },
            { "FF_Fedora2", "", 10000, "" },
            { "FF_Fedora3", "", 10000, "" },
            { "FF_Fedora4", "", 10000, "" },
            { "FF_Fedora_Right", "", 10000, "" },
            { "FF_Fedora_Right2", "", 10000, "" },
            { "FF_Fedora_Right3", "", 10000, "" },
            { "FF_Fedora_Right4", "", 10000, "" },
            { "H_HeadBandage_clean_F", "", 250, "" },
            { "H_HeadBandage_stained_F", "", 250, "" },
            { "H_HeadBandage_bloody_F", "", 250, "" }
        };
        goggles[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "" },
            { "EAW_Glasses", "", 1000, "" },
            { "G_JMSSA_arab_scarf", "", 1500, "" },
            { "G_JMSSA_arab_scarfFace", "", 1500, "" },
            { "G_JMSSA_Civ_CigaretteL", "", 500, "" },
            { "G_JMSSA_Civ_CigaretteR", "", 500, "" },
            { "FF_Pijp_2", "", 2000, "" },
            { "FF_Pijp", "", 1000, "" },
            { "FF_Bril", "", 1000, "" },
            { "FF_Bril_2", "", 1000, "" },
            { "FF_Bril_3", "", 1000, "" },
            { "FF_Bril_4", "", 1000, "" },
            { "G_Bandanna_blk", "", 1000, "" },
            { "G_Bandanna_oli", "", 1000, "" },
            { "G_Bandanna_tan", "", 1000, "" },
            { "G_JMSSA_GB_scarfHigh", "", 1500, "" },
            { "G_JMSSA_GB_scarfSc", "", 2500, "" },
            { "G_JMSSA_GB_scarfSc_khaki", "", 2500, "" },
            { "G_JMSSA_GB_scarfSc_white", "", 2500, "" },
            { "G_JMSSA_GB_scarfSc_red", "", 2500, "" }
        };
        vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "" },
            { "sab_wwi_pilot_holster", "", 500, "" },
            { "rds_pistol_holster", "Pistol holster", 1500, "" },
            { "V_NORTH_FIN_Officer_2", "", 3000, "" },
            { "V_NORTH_FIN_Generic_1", "", 3000, "" },
            { "ff_fra_m36", "", 4000, "" },
            { "JMSSA_fra_mle35rifle_light", "", 3500, "" },
            { "JMSSA_fra_mle35rifle_light", "", 3500, "" },
            { "JMSSA_Fra_mle35_holster", "", 3500, "" },
            { "JMSSA_Fra_mle35web", "", 3000, "" },
            { "JMSSA_fra_mle35rifle_holster", "", 3500, "" },
            { "JMSSA_Fra_mle35rifle_mg", "", 4000, "" },
            { "JMSSA_fra_mle35rifle_bag", "", 4500, "" },
            { "GoG_HolsterSwordVest", "", 1000, "" },
            { "GoG_HolsterSwordVestBack", "", 1000, "" }
        };
        backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "" },
            { "JMSSA_ita_bag_b", "", 3000, "" },
            { "NORTH_fin_BreadBag3", "", 2000, "" },
            { "NORTH_fin_MapBag", "", 2500, "" },
            { "EAW_Bedroll_Brown", "", 1500, "" },
            { "EAW_Bedroll_Green", "", 1500, "" },
            { "EAW_Bedroll_Tan", "", 1500, "" },
            { "EAW_Bedroll_2_Brown", "", 1500, "" },
            { "EAW_Bedroll_2_Green", "", 1500, "" },
            { "EAW_Bedroll_2_Tan", "", 1500, "" },
            { "JMSSA_brit_bergen_b", "", 3500, "" },
            { "JMSSA_brit_bergen_khaki_b", "", 3500, "" },
            { "NORTH_nor_Telemark", "", 10000, "" }
        };
    };

    class med_clothing {
        title = "STR_MAR_EMS_Clothing_Shop";
        conditions = "";
        side = "med";
        uniforms[] = {
            { "NONE", $STR_C_Remove_uniforms, 0, "" },
            { "rds_uniform_doctor", $STR_C_EMS_uniforms, 3500, "" }
        };
        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" }
        };
        goggles[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "" },
            { "G_NORTH_FIN_Medicalarmband", "", 500, "" }
        };
        vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "" },
            { "JMSSA_ita_VMedBag", "", 1000, "" }
        };
        backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "" },
            { "JMSSA_brit_p37packMed_b", "", 2500, "" },
            { "JMSSA_brit_p37packMed_khaki_b", "", 2500, "" },
            { "JMSSA_ger_medpack_b", "", 4000, "" }
        };
    };

    class reb {
        title = "STR_Shops_C_Rebel";
        conditions = "license_civ_rebel";
        side = "civ";
        uniforms[] = {
            { "NONE", $STR_C_Remove_uniforms, 0, "" },
            { "JMSSA_arab_jacket_brown_F_CombatUniform", "Peasant Clothes", 1000, "" },
            { "JMSSA_arab_jacket_grey_F_CombatUniform", "Peasant Clothes", 1000, "" },
            { "JMSSA_arab_jacket_white_F_CombatUniform", "Peasant Clothes", 1000, "" },
            { "JMSSA_arab_tunic_beige_F_CombatUniform", "Peasant Clothes", 1500, "" },
            { "JMSSA_arab_tunic_black_F_CombatUniform", "Peasant Clothes", 1500, "" },
            { "JMSSA_arab_tunic_blue_F_CombatUniform", "Peasant Clothes", 1500, "" },
            { "JMSSA_arab_tunic_red_F_CombatUniform", "Peasant Clothes", 1500, "" },
            { "JMSSA_arab_tunic_white_F_CombatUniform", "Peasant Clothes", 1500, "" },
            { "JMSSA_arab_tunic_yellow_F_CombatUniform", "Peasant Clothes", 1500, "" }
        };
        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" },
            { "H_NORTH_CIV_Koivistolainen_1", "Peasant Hat", 500, "" },
            { "H_NORTH_CIV_Koivistolainen_5", "Peasant Hat", 500, "" },
            { "JMSSA_arab_scarfFace_brown", "Brown Scarf", 1250, "" },
            { "JMSSA_arab_scarfFace_white", "White Scarf", 1250, "" },
            { "JMSSA_arab_scarfFace_white", "White Scarf", 1250, "" },
            { "JMSSA_brit_sas_scarf", "", 1500, "" }, // cool head bandana
            { "JMSSA_brit_woolhat", "", 1500, "" }, //beanie
            { "JMSSA_brit_commando_cap", "", 1500, "" }, //beanie
            { "JMSSA_brit_commando_cap_des", "", 1500, "" } //beanie
        };
        goggles[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "" },
            { "G_JMSSA_GB_scarfHigh", "", 1500, "" },
            { "G_JMSSA_arab_scarf", "", 1500, "" },
            { "G_JMSSA_arab_scarfFace", "", 1500, "" }
        };
        vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "" },
            { "JMSSA_arab_leatstrip", "", 1500, "" },
            { "JMSSA_fra_mle35rifle", "", 2500, "" },
            { "JMSSA_fra_mle35rifle16", "", 2500, "" },
            { "JMSSA_Fra_mle35_holster", "", 3500, "" },
            { "JMSSA_fra_mle35rifle_holster", "", 3500, "" },
            { "JMSSA_Fra_mle35rifle_mg", "", 4000, "" },
            { "JMSSA_fra_mle35rifle_bag", "", 3000, "" },
            { "GoG_HolsterSwordVest", "", 1000, "" },
            { "GoG_HolsterSwordVestBack", "", 1000, "" }
        };
        backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "" },
            { "JMSSA_ita_bag_b", "", 2500, "" },
            { "NORTH_fin_BreadBag3", "", 1500, "" },
            { "NORTH_fin_MapBag", "", 2500, "" },
            { "EAW_Bedroll_Brown", "", 1500, "" },
            { "EAW_Bedroll_Green", "", 1500, "" },
            { "EAW_Bedroll_Tan", "", 1500, "" },
            { "EAW_Bedroll_2_Brown", "", 1500, "" },
            { "EAW_Bedroll_2_Green", "", 1500, "" },
            { "EAW_Bedroll_2_Tan", "", 1500, "" },
            { "JMSSA_brit_bergen_b", "", 3500, "" },
            { "JMSSA_brit_bergen_khaki_b", "", 3500, "" },
            { "NORTH_nor_Telemark", "", 10000, "" }
        };
    };

    class kart {
        title = "STR_Shops_C_Kart";
        conditions = "";
        side = "civ";
        uniforms[] = {
            { "NONE", $STR_C_Remove_uniforms, 0, "" },
            { "wwi_pilot_cloth_i", "", 1500, "" }
        };
        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" },
            { "sab_wwi_ind_cap", "", 4000, "" },
            { "H_NORTH_SOV_VDV_helmet", "", 5000, "" },
            { "H_NORTH_SOV_air_helmet", "", 5000, "" },
            { "H_NORTH_CIV_Koivistolainen_1", "", 500, "" },
            { "H_NORTH_CIV_Koivistolainen_2", "", 500, "" },
            { "H_NORTH_CIV_Koivistolainen_3", "", 500, "" },
            { "H_NORTH_CIV_Koivistolainen_4", "", 500, "" },
            { "H_NORTH_CIV_Koivistolainen_5", "", 500, "" },
            { "JMSSA_arab_scarfHat_black", "", 3000, "" },
            { "JMSSA_arab_scarfHat_white", "", 3000, "" }
        };
        goggles[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "" },
            { "sab_wwi_goggles", "", 1000, "" },
            { "G_JMSSA_fra_des_googles", "", 1500, "" },
            { "G_JMSSA_GB_des_googles_old", "", 2500, "" },
            { "G_JMSSA_GB_des_googles", "", 3500, "" },
            { "G_JMSSA_GB_headset", "", 3000, "" }
        };
        vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "" },
            { "JMSSA_arab_leatstrip", "", 1500, "" },
            { "wwi_eng_bag_1914", "", 4500, "" }
        };
        backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "" },
            { "JMSSA_ita_bag_b", "", 2500, "" }
        };
    };
};
