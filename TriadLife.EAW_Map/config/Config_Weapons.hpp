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
            { "WBK_BrassKnuckles", "", 10000, 5000, "" },
            { "Knife_m3", "", 15000, 7500, "" },
            { "JMSSA_mle1892_pistol", "", 25000, 12500, "" },
            { "JMSSA_Ruby_pistol", "", 40000, 20000, "" },
            { "JMSSA_pa1935apistol", "", 45000, 22500, "" },
            { "EAW_Hanyang88_Base", "", 50000, 25000, "" }
        };
        mags[] = {
            { "JMSSA_6Rnd_8x27", "", 250, 125, "" },
            { "JMSSA_9Rnd_765x17", "", 250, 125, "" },
            { "JMSSA_8Rnd_765x20", "", 250, 125, "" },
            { "EAW_Hanyang88_Magazine", "", 250, 125, "" }
        };
        accs[] = {};
    };

    class rebel {
        name = "Revolution Store";
        side = "civ";
        conditions = "license_civ_rebel";
        items[] = {
            { "WBK_BrassKnuckles", "", 10000, 5000, "" },
            { "EAW_Dao", "", 15000, 7500, "" },
            { "WBK_survival_weapon_3", "", 5000, 2500, "" },
            { "WBK_survival_weapon_3_r", "", 5000, 2500, "" },
            { "Sashka_Russian", "", 100000, 50000, "" },
            { "JMSSA_mle1892_pistol", "", 25000, 12500, "" },
            { "JMSSA_Ruby_pistol", "", 40000, 20000, "" },
            { "JMSSA_pa1935apistol", "", 45000, 22500, "" },
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
            { "WBK_BrassKnuckles", "", 10000, 5000, "" },
            { "Axe", "", 10000, 5000, "" },
            { "WBK_Axe", "", 15000, 7500, "" },
            { "WBK_SmallHammer", "", 12000, 6000, "" },
            { "Pipe_aluminium", "", 5000, 2500, "" },
            { "WBK_ww1_Club", "", 20000, 10000, "" },
            { "Knife_m3", "", 15000, 7500, "" },
            { "EAW_Dao", "", 15000, 7500, "" },
            { "JMSSA_M1934_pistol", "", 30000, 15000, "" },
            { "JMSSA_Glisenti1910_pistol", "", 25000, 12500, "" },
            { "JMSSA_m1911a1pistol", "", 30000, 15000, "" },
            { "EAW_Hanyang88_Base", "", 35000, 17500, "" },
            { "JMSSA_berthierCarbine_Rifle", "", 45000, 22500, "" },
            { "JMSSA_beretta18_Rifle", "", 40000, 20000, "" },
            { "JMSSA_thompson1928_rifle", "", 50000, 25000, "" },
            { "JMSSA_Lewis_Rifle", "", 100000, 50000, "" },
            { "JMSSA_breda30_Rifle", "", 100000, 50000, "" },
            { "JMSSA_mac2429_Rifle", "", 100000, 50000, "" }
        };
        mags[] = {
            { "JMSSA_7Rnd_9x17", "", 250, 125, "" }, //beretta m1934
            { "JMSSA_7Rnd_9x19Glis", "", 250, 125, "" }, //glisenti
            { "JMSSA_7Rnd_45ACP", "", 250, 125, "" }, //1911
            { "EAW_Hanyang88_Magazine", "", 250, 125, "" },
            { "JMSSA_5Rnd_8x50R_D", "", 250, 125, "" }, //for berthier carbine .. there are 3 other ammo types idk what they do
            { "JMSSA_25Rnd_9x19", "", 250, 125, "" }, //beretta18
            { "ThompsonM1_20rnd_mags", "", 250, 125, "" }, //tommygun
            { "ThompsonM1_30rnd_mags", "", 250, 125, "" }, //tommygun
            { "ThompsonM1_50rnd_mags", "", 250, 125, "" }, //tommygun
            { "JMSSA_47Rnd_770x56", "", 250, 125, "" }, //lewis
            { "JMSSA_20Rnd_65x52", "", 250, 125, "" }, //breda
            { "JMSSA_25Rnd_750x54", "", 250, 125, "" }, //mac2429
            { "JMSSA_25Rnd_750x54_red", "", 250, 125, "" } //mac2429 ..maybe we dont want tracers tho
        };
        accs[] = {};
    };

    //Basic Shops
    class genstore {
        name = "General Store";
        side = "civ";
        conditions = "";
        items[] = {
            { "Pipe_aluminium", "", 5000, 2500, "" },
            { "Binocular", "", 150, 75, "" },
            { "ItemGPS", "", 100, 50, "" },
            { "ItemMap", "", 50, 25, "" },
            { "ItemCompass", "", 50, 25, "" },
            { "ItemWatch", "", 50, 25, "" },
            { "FirstAidKit", "", 150, 75, "" }
        };
        mags[] = {};
        accs[] = {};
    };

    class f_station_store {
        name = "Altis Fuel Station Store";
        side = "";
        conditions = "";
        items[] = {
            { "Pipe_aluminium", "", 5000, 2500, "" },
            { "Binocular", "", 750, 75, "" },
            { "ItemGPS", "", 500, 50, "" },
            { "ItemMap", "", 250, 25, "" },
            { "ItemCompass", "", 250, 25, "" },
            { "ItemWatch", "", 250, 25, "" },
            { "FirstAidKit", "", 750, 75, "" }
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
            { "Binocular", "", 150, 75, "" },
            { "ItemGPS", "", 100, 50, "" },
            { "FirstAidKit", "", 150, 75, "" },
            { "WBK_BrassKnuckles", "", 10000, 5000, "" },
            { "Police_Bat", "", 10000, 5000, "" },
            { "EAW_C96_Carbine", "", 35000, 17500, "" }, // call life_coplevel >= 1
            { "JMSSA_WebleyVI_pistol", "", 35000, 17500, "" }, // call life_coplevel >= 1 
            { "JMSSA_lugerP08a1pistol", "", 30000, 15000, "" }, // call life_coplevel >= 1
            { "EAW_Hanyang_Bayonet", "", 15000, 7500, "" }, // call life_coplevel >= 1
            { "EAW_Hanyang88_Base", "", 35000, 17500, "" }, // call life_coplevel >= 1
            { "JMSSA_emp35_Rifle", "", 40000, 20000, "" }, // call life_coplevel >= 1
            { "EAW_Type24_Rifle_Base", "", 35000, 17500, "" }, // call life_coplevel >= 2
            { "EAW_C96_Auto", "", 35000, 17500, "" }, // call life_coplevel >= 2
            { "EAW_C96_Auto_Carbine", "", 35000, 17500, "" }, // call life_coplevel >= 2
            { "EAW_MP28", "", 35000, 17500, "" }, // call life_coplevel >= 2
            { "EAW_FN30_Base", "", 35000, 17500, "" }, // call life_coplevel >= 2
            { "JMSSA_mp40_Rifle", "", 70000, 35000, "" }, // call life_coplevel >= 3
            { "EAW_ZB26_Base", "", 100000, 50000, "" }, // call life_coplevel >= 3
            { "EAW_Type95", "", 100000, 50000, "" }, // call life_coplevel >= 3
            { "JMSSA_MG34_Rifle", "", 150000, 75000, "" } // call life_coplevel >= 3
        };
        mags[] = {
            { "JMSSA_6Rnd_455", "", 250, 125, "" }, //webley vi
            { "EAW_C96_Magazine", "", 250, 125, "" },
            { "EAW_C96_Auto10_Magazine", "", 250, 125, "" },
            { "EAW_C96_Auto20_Magazine", "", 250, 125, "" },
            { "EAW_MP28_20_Magazine", "", 250, 125, "" },
            { "JMSSA_8Rnd_9x19", "", 250, 125, "" }, //luger
            { "EAW_Hanyang88_Magazine", "", 250, 125, "" },
            { "JMSSA_32Rnd_9x19_mp40", "", 250, 125, "" }, //emp35 and mp40, also has tracers
            { "EAW_FN30_Magazine", "", 250, 125, "" },
            { "EAW_ZB26_Magazine", "", 250, 125, "" },
            { "MG34_50rnd_mags", "", 250, 125, "" } //mg34, also has tracers
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
            { "Police_Bat", "", 10000, 5000, "" },
            { "ItemGPS", "", 100, 50, "" },
            { "Binocular", "", 150, 75, "" },
            { "FirstAidKit", "", 150, 75, "" }
        };
        mags[] = {};
        accs[] = {};
    };
};
