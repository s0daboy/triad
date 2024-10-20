/*
*    FORMAT:
*        STRING (Conditions) - Must return boolean :
*            String can contain any amount of conditions, aslong as the entire
*            string returns a boolean. This allows you to check any levels, licenses etc,
*            in any combination. For example:
*                "call life_coplevel && license_civ_someLicense"
*            This will also let you call any other function.
*
*
*    ARRAY FORMAT:
*        0: STRING (Classname): Item Classname
*        1: STRING (Nickname): Nickname that will appear purely in the shop dialog
*        2: SCALAR (Buy price)
*        3: SCALAR (Sell price): To disable selling, this should be -1
*        4: STRING (Conditions): Same as above conditions string
*
*    Weapon classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Weapons
*    Item classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Items
*
*/
class WeaponShops {
    //Armory Shops
    class gun {
        name = "Gun Store";
        side = "civ";
        conditions = "license_civ_gun";
        items[] = {
            { "rds_weap_latarka_janta", "Electric Torch", 2000, 1000, "" },
            { "JMSSA_w_bino_Zeiss6x30", "", 3000, 1500, "" },
            { "WBK_BrassKnuckles", "", 4000, 2000, "" },
            { "Knife_m3", "", 7000, 3500, "" },
            { "JMSSA_mle1892_pistol", "", 20000, 10000, "" },
            { "JMSSA_Ruby_pistol", "", 35000, 17500, "" },
            { "JMSSA_pa1935apistol", "", 40000, 20000, "" },
            { "EAW_Hanyang88_Base", "", 40000, 20000, "" }
        };
        mags[] = {
            { "JMSSA_6Rnd_8x27", "", 250, 125, "" },
            { "JMSSA_9Rnd_765x17", "", 300, 150, "" },
            { "JMSSA_8Rnd_765x20", "", 300, 150, "" },
            { "EAW_Hanyang88_Magazine", "", 250, 125, "" }
        };
        accs[] = {};
    };

    class rebel {
        name = "Revolution Store";
        side = "civ";
        conditions = "license_civ_rebel";
        items[] = {
            { "rds_weap_latarka_janta", "Electric Torch", 2000, 1000, "" },
            { "JMSSA_w_bino_Zeiss6x30", "", 3000, 1500, "" },
            { "WBK_BrassKnuckles", "", 2000, 1000, "" },
            { "EAW_Dao", "Dadao", 8000, 4000, "" },
            { "WBK_survival_weapon_3", "", 5000, 2500, "" },
            { "WBK_survival_weapon_3_r", "", 5000, 2500, "" },
            { "Sashka_Russian", "Russian Saber", 100000, 50000, "" },
            { "JMSSA_mle1892_pistol", "", 20000, 10000, "" },
            { "JMSSA_Ruby_pistol", "", 35000, 17500, "" },
            { "JMSSA_pa1935apistol", "", 40000, 20000, "" },
            { "EAW_Hanyang88_Base", "", 35000, 17500, "" },
            { "JMSSA_beretta18_Rifle", "", 40000, 20000, "" },
            { "JMSSA_breda30_Rifle", "", 90000, 45000, "" }
        };
        mags[] = {
            { "JMSSA_6Rnd_8x27", "", 250, 125, "" },
            { "JMSSA_9Rnd_765x17", "", 250, 125, "" },
            { "JMSSA_8Rnd_765x20", "", 250, 125, "" },
            { "EAW_Hanyang88_Magazine", "", 250, 125, "" },
            { "JMSSA_25Rnd_9x19", "", 250, 125, "" },
            { "JMSSA_20Rnd_65x52", "", 250, 125, "" }
        };
        accs[] = {
        };
    };

    class gang {
        name = "Hideout Armament";
        side = "civ";
        conditions = "";
        items[] = {
            { "rds_weap_latarka_janta", "Electric Torch", 2000, 1000, "" },
            { "JMSSA_w_bino_Zeiss6x30", "", 3000, 1500, "" },
            { "WBK_BrassKnuckles", "", 5000, 2500, "" },
            { "Axe", "", 10000, 5000, "" },
            { "WBK_Axe", "", 15000, 7500, "" },
            { "WBK_SmallHammer", "", 12000, 6000, "" },
            { "Pipe_aluminium", "", 5000, 2500, "" },
            { "WBK_ww1_Club", "", 20000, 10000, "" },
            { "Knife_m3", "", 15000, 7500, "" },
            { "EAW_Dao", "Dadao", 15000, 7500, "" },
            { "JMSSA_M1934_pistol", "", 20000, 10000, "" },
            { "JMSSA_Glisenti1910_pistol", "", 20000, 10000, "" },
            { "JMSSA_m1911a1pistol", "", 25000, 12500, "" },
            { "EAW_Hanyang88_Base", "", 35000, 17500, "" },
            { "JMSSA_berthierCarbine_Rifle", "", 40000, 20000, "" },
            { "JMSSA_beretta18_Rifle", "", 45000, 22500, "" },
            { "JMSSA_thompson1928_rifle", "", 60000, 30000, "" },
            { "JMSSA_Lewis_Rifle", "", 80000, 40000, "" },
            { "JMSSA_breda30_Rifle", "", 85000, 42500, "" },
            { "JMSSA_mac2429_Rifle", "", 100000, 50000, "" },
            { "G_NORTH_FIN_Gloves_leather", "", 5000, 2500, "" },
            { "G_NORTH_FIN_Gloves_leather_2", "", 5000, 2500, "" },
            { "G_NORTH_FIN_Gloves", "", 3000, 1500, "" },
            { "G_NORTH_FIN_Gloves_2", "", 3000, 1500, "" },
            { "G_NORTH_FIN_Gloves_3", "", 3000, 1500, "" },
            { "G_NORTH_FIN_Gloves_4", "", 3000, 1500, "" },
            { "JMSSA_brit_scarfHigh_nvg", "", 3000, 1500, "" },
            { "JMSSA_brit_scarfSc_nvg", "", 3000, 1500, "" },
            { "JMSSA_brit_scarfScKh_nvg", "", 3000, 1500, "" },
            { "JMSSA_brit_scarfScW_nvg", "", 3000, 1500, "" },
            { "JMSSA_fra_scarf_nvg", "", 500, 250, "" },
            { "JMSSA_fra_scarf_w_nvg", "", 500, 250, "" },
            { "JMSSA_civ_CigaretteL_nvg", "", 500, 250, "" },
            { "JMSSA_civ_CigaretteR_nvg", "", 500, 250, "" }
        };
        mags[] = {
            { "JMSSA_7Rnd_9x17", "", 100, 50, "" }, //beretta m1934
            { "JMSSA_7Rnd_9x19Glis", "", 100, 50, "" }, //glisenti
            { "JMSSA_7Rnd_45ACP", "", 150, 75, "" }, //1911
            { "EAW_Hanyang88_Magazine", "", 150, 75, "" },
            { "JMSSA_5Rnd_8x50R_D", "", 150, 75, "" }, //for berthier carbine .. there are 3 other ammo types idk what they do
            { "JMSSA_25Rnd_9x19", "", 200, 100, "" }, //beretta18
            { "JMSSA_20Rnd_45ACP", "", 250, 125, "" }, //tommygun
            { "JMSSA_30Rnd_45ACP", "", 250, 125, "" }, //tommygun
            { "JMSSA_50Rnd_45ACP", "", 500, 250, "" }, //tommygun
            { "JMSSA_47Rnd_770x56", "", 500, 250, "" }, //lewis
            { "JMSSA_20Rnd_65x52", "", 250, 125, "" }, //breda
            { "JMSSA_25Rnd_750x54", "", 300, 150, "" }, //mac2429
            { "JMSSA_25Rnd_750x54_red", "", 350, 175, "" } //mac2429 ..maybe we dont want tracers tho
        };
        accs[] = {};
    };

    //Basic Shops
    class genstore {
        name = "General Store";
        side = "civ";
        conditions = "";
        items[] = {
            { "rds_weap_latarka_janta", "Electric Torch", 2000, 1000, "" },
            { "JMSSA_w_bino_Zeiss6x30", "", 3000, 1500, "" },
            { "ItemMap", "", 50, 25, "" },
            { "NORTH_FIN_Watch", "", 150, 75, "" },
            { "NORTH_SOV_Compass", "", 150, 75, "" },
            { "FirstAidKit", "", 150, 75, "" },
            { "Pipe_aluminium", "", 1000, 2500, "" }
        };
        mags[] = {};
        accs[] = {};
    };

    class f_station_store {
        name = "Altis Fuel Station Store";
        side = "";
        conditions = "";
        items[] = {
            { "rds_weap_latarka_janta", "Electric Torch", 2000, 1000, "" },
            { "JMSSA_w_bino_Zeiss6x30", "", 3000, 1500, "" },
            { "ItemMap", "", 250, 25, "" },
            { "NORTH_FIN_Watch", "", 150, 75, "" },
            { "NORTH_SOV_Compass", "", 150, 75, "" },
            { "FirstAidKit", "", 750, 75, "" },
            { "Pipe_aluminium", "", 1000, 2500, "" }
        };
        mags[] = {};
        accs[] = {};
    };

    //Cop Shops
    class cop_basic {
        name = "Cop Shop";
        side = "cop";
        conditions = "";
        items[] = {
            { "ItemMap", "", 250, 25, "" },
            { "NORTH_FIN_Watch", "", 150, 75, "" },
            { "NORTH_SOV_Compass", "", 150, 75, "" },
            { "FirstAidKit", "", 150, 75, "" },
            { "rds_weap_latarka_janta", "Electric Torch", 1000, 500, "" },
            { "NORTH_Binocular_Huet", "", 3000, 1500, "" },
            { "Police_Bat", "", 2500, 1250, "" },
            { "EAW_Hanyang_Bayonet", "", 5000, 2500, "" }, // call life_coplevel >= 1
            { "EAW_Dao", "Dadao", 15000, 7500, "" },
            { "EAW_C96_Carbine", "", 20000, 10000, "" }, // call life_coplevel >= 1
            { "JMSSA_WebleyVI_pistol", "", 25000, 12500, "" }, // call life_coplevel >= 1 
            { "JMSSA_lugerP08a1pistol", "", 30000, 15000, "" }, // call life_coplevel >= 1
            { "EAW_Hanyang88_Base", "", 35000, 17500, "" }, // call life_coplevel >= 1
            { "JMSSA_emp35_Rifle", "", 50000, 25000, "" }, // call life_coplevel >= 1
            { "EAW_Type24_Rifle_Base", "", 40000, 20000, "" }, // call life_coplevel >= 2
            { "EAW_C96_Auto", "", 35000, 17500, "" }, // call life_coplevel >= 2
            { "EAW_C96_Auto_Carbine", "", 35000, 17500, "" }, // call life_coplevel >= 2
            { "EAW_MP28", "", 55000, 27500, "" }, // call life_coplevel >= 2
            { "EAW_FN30_Base", "", 65000, 32500, "" }, // call life_coplevel >= 2
            { "JMSSA_mp40_Rifle", "", 70000, 35000, "" }, // call life_coplevel >= 3
            { "EAW_ZB26_Base", "", 100000, 50000, "" }, // call life_coplevel >= 3
            { "EAW_Type95", "Officer Sword", 100000, 50000, "" }, // call life_coplevel >= 3
            { "JMSSA_MG34_Rifle", "", 150000, 75000, "" } // call life_coplevel >= 3
        };
        mags[] = {
            { "JMSSA_6Rnd_455", "", 100, 50, "" }, //webley vi
            { "EAW_C96_Magazine", "", 150, 75, "" },
            { "EAW_C96_Auto10_Magazine", "", 200, 100, "" },
            { "EAW_C96_Auto20_Magazine", "", 250, 125, "" },
            { "EAW_MP28_20_Magazine", "", 300, 150, "" },
            { "JMSSA_8Rnd_9x19", "", 200, 100, "" }, //luger
            { "EAW_Hanyang88_Magazine", "", 250, 125, "" },
            { "JMSSA_32Rnd_9x19_mp40", "", 350, 175, "" }, //emp35 and mp40, also has tracers
            { "EAW_FN30_Magazine", "", 300, 150, "" },
            { "EAW_ZB26_Magazine", "", 400, 200, "" },
            { "MG34_50rnd_mags", "", 500, 250, "" } //mg34, also has tracers
        };
        accs[] = {
        };
    };

    //Medic Shops
    class med_basic {
        name = "store";
        side = "med";
        conditions = "";
        items[] = {
            { "rds_weap_latarka_janta", "Electric Torch", 2000, 1000, "" },
            { "JMSSA_w_bino_Zeiss6x30", "", 3000, 1500, "" },
            { "ItemMap", "", 250, 25, "" },
            { "NORTH_FIN_Watch", "", 150, 75, "" },
            { "NORTH_SOV_Compass", "", 150, 75, "" },
            { "FirstAidKit", "", 150, 75, "" },
            { "Pipe_aluminium", "", 1000, 500, "" }
        };
        mags[] = {};
        accs[] = {};
    };
};
