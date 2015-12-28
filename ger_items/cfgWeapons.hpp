
class cfgWeapons {
    class InventoryItem_Base_F;
    class ItemCore;
    class ItemInfo;
    class H_HelmetIA;
    class UniformItem: InventoryItem_Base_F {
        type = 801;
    };
    class Uniform_Base: ItemCore {
        scope = private;
        allowedSlots[] = {
            901
        };
        class ItemInfo: UniformItem {
            uniformModel = "-";
            uniformClass = "B_Soldier_F";
            containerClass = "Supply0";
            mass = 0;
        };
    };
    class U_B_CombatUniform_mcam;
    class U_B_CombatUniform_mcam_tshirt;
    class U_B_CombatUniform_mcam_vest;
    class VestItem;
    class Vest_Base;
    class V_Rangemaster_belt;
    class V_BandollierB_khk;
    class V_BandollierB_rgr;
    class V_BandollierB_cbr;
    class V_PlateCarrier1_rgr;
    class V_PlateCarrier1_cbr;
    class V_PlateCarrier2_rgr;
    class H_HelmetB;
    class H_HelmetB_paint;
    class H_HelmetB_light;
	class H_HelmetSpecB;
    class H_MilCap_mcamo;
    class H_Cap_headphones;
    class U_BasicBody;
    class V_PlateCarrierIA1_dgtl;
    class V_PlateCarrierIA2_dgtl;
    class H_Bandanna_surfer;
	class V_PlateCarrierGL_rgr;	
	class V_PlateCarrierSpec_rgr;	
	class V_PlateCarrierIAGL_dgtl;		
	
	class ARC_GER_Flecktarn_Uniform: Uniform_Base {
		scope = public;
		displayName = "(ARC) GER Uniform (Flecktarn)";
		picture = "\GER_items\data\Flecktarn\icon_ger_flecktarn_uniform_base.paa";
		hiddenSelections[] = {
			"Camo"
		};
		hiddenSelectionsTextures[] = {
			"\GER_items\data\Flecktarn\GER_Flecktarn_clothing.paa"
		};
		class ItemInfo: UniformItem {
			uniformModel = "-";
			uniformClass = "ARC_GER_Flecktarn_Soldier_Base";
			containerClass = "Supply40";
			mass = 80;
		};
	};
	class ARC_GER_Flecktarn_Uniform_Light: Uniform_Base {
		scope = public;
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		displayName = "(ARC) GER Uniform Light(Flecktarn)";
		picture = "\GER_items\data\Flecktarn\icon_ger_flecktarn_uniform_light.paa";
		hiddenSelections[] = {
			"Camo"
		};
		hiddenSelectionsTextures[] = {
			"\GER_items\data\Flecktarn\GER_Flecktarn_Uniform.paa"
		};
		class ItemInfo: UniformItem {
			uniformModel = "-";
			uniformClass = "ARC_GER_Flecktarn_light_Soldier_Base";
			containerClass = "Supply40";
			mass = 80;
		};
	};
	class ARC_GER_Flecktarn_Uniform_tshirt: U_B_CombatUniform_mcam_tshirt {
		picture = "\GER_items\data\Flecktarn\icon_ger_flecktarn_uniform_tshirt.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		displayName = "(ARC) GER Uniform (Flecktarn(Tshirt)";
		hiddenSelectionsTextures[] = {
			"\GER_items\data\Flecktarn\GER_Flecktarn_clothing.paa"
		};
		class ItemInfo: UniformItem {
			uniformModel = "-";
			uniformClass = "ARC_GER_Flecktarn_Soldier_01";
			containerClass = "Supply40";
			mass = 80;
		};
	};
	class ARC_GER_Flecktarn_Uniform_vest: U_B_CombatUniform_mcam_vest {
		picture = "\GER_items\data\Flecktarn\icon_ger_flecktarn_uniform_vest.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		displayName = "(ARC) GER Uniform (Flecktarn(Vest)";
		hiddenSelectionsTextures[] = {
			"\GER_items\data\Flecktarn\GER_Flecktarn_clothing.paa"
		};
		class ItemInfo: UniformItem {
			uniformModel = "-";
			uniformClass = "ARC_GER_Flecktarn_Soldier_02";
			containerClass = "Supply40";
			mass = 80;
		};
	};
	class ARC_GER_Flecktarn_Plate_Carrier: V_PlateCarrier1_rgr {
		displayName = "(ARC) GER Plate Carrier (Flecktarn)";
		picture = "\GER_items\data\Flecktarn\Icon_GER_Flecktarn_vests.paa";
		hiddenSelections[] = {
			"camo"
		};
		hiddenSelectionsTextures[] = {
			"\GER_items\data\Flecktarn\GER_Flecktarn_vests.paa"
		};
		class ItemInfo: VestItem {
			containerclass = "Supply140";
			mass = 60;
			uniformmodel = "\A3\Characters_F\BLUFOR\equip_b_vest02";
			hiddenSelections[] = {
				"camo"
			};
			class HitpointsProtectionInfo {

                class Chest {
                    HitpointName = "HitChest";
                    armor = 20;
                    PassThrough = 0.300000;
                };

                class Diaphragm {
                    HitpointName = "HitDiaphragm";
                    armor = 20;
                    PassThrough = 0.300000;
                };

                class Abdomen {
                    hitpointName = "HitAbdomen";
                    armor = 20;
                    passThrough = 0.300000;
                };

                class Body {
                    hitpointName = "HitBody";
                    passThrough = 0.300000;
                };
            };
		};
	};
	class ARC_GER_Flecktarn_Plate_Carrier_H: V_PlateCarrier2_rgr {
		displayName = "(ARC) GER Heavy Plate Carrier (Flecktarn)";
		picture = "\GER_items\data\Flecktarn\Icon_GER_Flecktarn_vests.paa";
		hiddenSelections[] = {
			"camo"
		};
		hiddenSelectionsTextures[] = {
			"\GER_items\data\Flecktarn\GER_Flecktarn_vests.paa"
		};
		class ItemInfo: VestItem {
			containerclass = "Supply120";
			mass = 80;
			uniformmodel = "\A3\Characters_F\BLUFOR\equip_b_vest01";
			hiddenSelections[] = {
				"camo"
			};
			class HitpointsProtectionInfo {

                class Chest {
                    HitpointName = "HitChest";
                    armor = 30;
                    PassThrough = 0.200000;
                };

                class Diaphragm {
                    HitpointName = "HitDiaphragm";
                    armor = 30;
                    PassThrough = 0.200000;
                };

                class Abdomen {
                    hitpointName = "HitAbdomen";
                    armor = 30;
                    passThrough = 0.200000;
                };

                class Body {
                    hitpointName = "HitBody";
                    passThrough = 0.200000;
                };
            };
		};
	};
	class ARC_GER_Flecktarn_rangemaster_belt: V_Rangemaster_belt {
		displayName = "(ARC) GER Rangemaster Belt (Flecktarn)";
		model = "\A3\Characters_F\BLUFOR\equip_b_belt";
		hiddenSelections[] = {
			"camo"
		};
		hiddenSelectionsTextures[] = {
			"\GER_items\data\Flecktarn\GER_Flecktarn_vests.paa"
		};
		class ItemInfo: VestItem {
			armor = 0;
			containerclass = "Supply40";
			mass = 20;
			passthrough = 1;
			uniformmodel = "\A3\Characters_F\BLUFOR\equip_b_belt";
			hiddenSelections[] = {
				"camo"
			};
		};
	};
	class ARC_GER_Flecktarn_BandollierB_rgr: V_BandollierB_rgr {
		picture = "\A3\characters_f\Data\UI\icon_V_BandollierB_CA.paa";
		model = "\A3\Characters_F\BLUFOR\equip_b_bandolier";
		displayName = "(ARC) GER Slash Bandolier (Flecktarn)";
		hiddenSelectionsTextures[] = {
			"\GER_items\data\Flecktarn\GER_Flecktarn_vests.paa"
		};
		class ItemInfo: ItemInfo {
			uniformClass = "ARC_GER_Flecktarn_Soldier_02";
			armor = 0;
			containerclass = "Supply80";
			mass = 20;
			passthrough = 1;
			
			uniformmodel = "\A3\Characters_F\BLUFOR\equip_b_bandolier.p3d";
			hiddenselections[] = {
				"camo"
			};
		};
	};
	class ARC_GER_Flecktarn_PlateCarrier_1: V_PlateCarrierIA1_dgtl {
		displayName = "(ARC) GER GA Carrier Lite (Flecktarn)";
		model = "A3\Characters_F_Beta\INDEP\equip_ia_vest01";
		hiddenSelections[] = {
			"camo"
		};
		hiddenSelectionsTextures[] = {
			"GER_items\data\Flecktarn\GER_Flecktarn_PlateCarrier.paa"
		};
		class ItemInfo: VestItem {
			containerclass = "Supply140";
			mass = 40;
			uniformmodel = "A3\Characters_F_Beta\INDEP\equip_ia_vest01";
			hiddenSelections[] = {
				"camo"
			};
			class HitpointsProtectionInfo {

				class Chest {
					hitpointName = "HitChest";
					armor = 30;
					passThrough = 0.300000;
				};

				class Diaphragm {
					hitpointName = "HitDiaphragm";
					armor = 30;
					passThrough = 0.300000;
				};

				class Abdomen {
					hitpointName = "HitAbdomen";
					armor = 30;
					passThrough = 0.300000;
				};

				class Body {
					hitpointName = "HitBody";
					passThrough = 0.300000;
				};
			};
		};
	};
	class ARC_GER_Flecktarn_PlateCarrier_2: V_PlateCarrierIA2_dgtl {
		displayName = "(ARC) GER GA Carrier Rig (Flecktarn ";
		model = "A3\Characters_F_Beta\INDEP\equip_ia_vest02";
		hiddenSelections[] = {
			"camo"
		};
		hiddenSelectionsTextures[] = {
			"GER_items\data\Flecktarn\GER_Flecktarn_PlateCarrier.paa"
		};
		class ItemInfo: VestItem {
			containerclass = "Supply140";
			mass = 60;
			uniformmodel = "A3\Characters_F_Beta\INDEP\equip_ia_vest02";
			hiddenSelections[] = {
				"camo"
			};
			class HitpointsProtectionInfo {

				class Chest {
					hitpointName = "HitChest";
					armor = 30;
					passThrough = 0.300000;
				};

				class Diaphragm {
					hitpointName = "HitDiaphragm";
					armor = 30;
					passThrough = 0.300000;
				};

				class Abdomen {
					hitpointName = "HitAbdomen";
					armor = 30;
					passThrough = 0.300000;
				};

				class Pelvis {
					hitpointName = "HitPelvis";
					armor = 30;
					passThrough = 0.300000;
				};

				class Body {
					hitpointName = "HitBody";
					passThrough = 0.300000;
				};
			};
		};
	};
	class ARC_GER_Flecktarn_Milcap: H_MilCap_mcamo {
		displayName = "(ARC) GER Military Cap (Flecktarn)";
		picture = "\GER_items\data\Flecktarn\Icon_GER_Flecktarn_CapPatrol.paa";
		hiddenSelections[] = {
			"camo"
		};
		hiddenselectionstextures[] = {
			"GER_items\data\Flecktarn\cappatrol_GER_Flecktarn.paa"
		};
		class ItemInfo: ItemInfo {
			allowedslots[] = {901, 701, 605};
			armor = 0;
			mass = 6;
			modelsides[] = {6};
			passthrough = 1;
			uniformmodel = "\A3\Characters_F\Common\cappatrol.p3d";
			hiddenselections[] = {
				"camo"
			};
		};
	};
	class ARC_GER_Flecktarn_Helmet: H_HelmetSpecB {
		displayName = "(ARC) GER Equipped MICH 2000 (Flecktarn)";
		picture = "\GER_items\data\Flecktarn\Icon_GER_Flecktarn_MICH.paa";
		hiddenSelections[] = {
			"camo"
		};
		hiddenSelectionsTextures[] = {
			"\GER_items\data\Flecktarn\GER_Flecktarn_equip.paa"
		};
		class ItemInfo: ItemInfo {
			mass = 50;
			modelsides[] = {3, 1};
			uniformmodel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_ballistic";
			class HitpointsProtectionInfo {

				class Head {
					hitpointName = "HitHead";
					armor = 10;
					passThrough = 0.500000;
				};
			};
		};
	};
	class ARC_GER_Flecktarn_Helmet_simple: H_HelmetB {
		displayName = "(ARC) GER MICH 2000 (Flecktarn)";
		picture = "\GER_items\data\Flecktarn\Icon_GER_Flecktarn_equip.paa";
		hiddenSelections[] = {
			"camo"
		};
		hiddenSelectionsTextures[] = {
			"\GER_items\data\Flecktarn\GER_Flecktarn_equip.paa"
		};
		class ItemInfo: ItemInfo {
			hiddenselections[] = {"camo"};
			mass = 40;
			modelsides[] = {3, 1};
			uniformmodel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_plain";
			class HitpointsProtectionInfo {

				class Head {
					hitpointName = "HitHead";
					armor = 10;
					passThrough = 0.500000;
				};
			};
		};
	};
	class ARC_GER_Flecktarn_Helmet_Light: H_HelmetB_light {
		displayName = "(ARC) GER FBJ Ops Core (Flecktarn)";
		picture = "\GER_items\data\Flecktarn\Icon_GER_Flecktarn_equip.paa";
		hiddenSelections[] = {
			"camo"
		};
		hiddenSelectionsTextures[] = {
			"\GER_items\data\Flecktarn\GER_Flecktarn_equip.paa"
		};
		class ItemInfo: ItemInfo {
			mass = 30;
			uniformmodel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_light";
			class HitpointsProtectionInfo {

				class Head {
					hitpointName = "HitHead";
					armor = 4;
					passThrough = 0.500000;
				};
			};
		};
	};
	class ARC_GER_Flecktarn_Mich: H_HelmetIA {
		displayName = "(ARC) GER PASGT (Flecktarn)";
		picture = "\GER_items\data\Flecktarn\Icon_GER_Flecktarn_MICH.paa";
		model = "\A3\Characters_F_Beta\INDEP\headgear_helmet_canvas";
		hiddenSelectionsTextures[] = {
			"\GER_items\data\Flecktarn\GER_Flecktarn_MICH.paa"
		};
		class ItemInfo: ItemInfo {
			allowedslots[] = {901, 605};
			mass = 40;
			modelsides[] = {2, 3};
			uniformmodel = "\A3\Characters_F_Beta\INDEP\headgear_helmet_canvas.p3d";
			class HitpointsProtectionInfo {

				class Head {
					hitpointName = "HitHead";
					armor = 4;
					passThrough = 0.500000;
				};
			};
		};
	};
	class ARC_GER_Flecktarn_booniehat: H_HelmetB {
		scope = public;
		weaponPoolAvailable = 1;
		displayName = "(ARC) GER booniehat (Flecktarn)";
		picture = "\GER_items\data\Flecktarn\Icon_GER_Flecktarn_Booniehat.paa";
		model = "\A3\Characters_F\Common\booniehat";
		hiddenSelections[] = {
			"camo"
		};
		hiddenSelectionsTextures[] = {
			"GER_items\data\Flecktarn\booniehat_GER_Flecktarn.paa"
		};
		class ItemInfo: ItemInfo {
			allowedslots[] = {801, 901, 701, 605};
			mass = 10;
			modelsides[] = {6};
			uniformmodel = "\A3\Characters_F\Common\booniehat";
			class HitpointsProtectionInfo {

				class Head {
					hitpointName = "HitHead";
					armor = 0;
					passThrough = 1;
				};
			};
		};
	};
	class ARC_GER_Flecktarn_Bandanna: H_Bandanna_surfer {
		displayName = "(ARC) GER Bandanna (Flecktarn)";
		hiddenselectionstextures[] = {
			"\GER_items\data\Flecktarn\GER_Flecktarn_bandana.paa"
		};
		class ItemInfo: ItemInfo {
			allowedslots[] = {901, 701, 605};
			mass = 8;
			modelsides[] = {6};
			uniformmodel = "\A3\Characters_F\Civil\headgear_c_bandana1.p3d";
			class HitpointsProtectionInfo {

				class Head {
					hitpointName = "HitHead";
					armor = 0;
					passThrough = 1;
				};
			};
		};
	};
	class ARC_GER_Tropentarn_Uniform: Uniform_Base {
		scope = public;
		displayName = "(ARC) GER Uniform (Tropentarn)";
		picture = "\GER_items\data\Tropentarn\icon_ger_tropentarn_uniform_base.paa";
		hiddenSelections[] = {
			"Camo"
		};
		hiddenSelectionsTextures[] = {
			"\GER_items\data\Tropentarn\GER_Tropentarn_clothing.paa"
		};
		class ItemInfo: UniformItem {
			uniformModel = "-";
			uniformClass = "ARC_GER_Tropentarn_Soldier_Base";
			containerClass = "Supply40";
			mass = 80;
		};
	};
	class ARC_GER_Tropentarn_Uniform_Light: Uniform_Base {
		scope = public;
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		displayName = "(ARC) GER Uniform Light(Tropentarn)";
		picture = "\GER_items\data\Tropentarn\icon_ger_tropentarn_uniform_light.paa";
		hiddenSelections[] = {
			"Camo"
		};
		hiddenSelectionsTextures[] = {
			"\GER_items\data\Tropentarn\GER_Tropentarn_Uniform.paa"
		};
		class ItemInfo: UniformItem {
			uniformModel = "-";
			uniformClass = "ARC_GER_Tropentarn_light_Soldier_Base";
			containerClass = "Supply40";
			mass = 80;
		};
	};
	class ARC_GER_Tropentarn_Uniform_tshirt: U_B_CombatUniform_mcam_tshirt {
		picture = "\GER_items\data\Tropentarn\icon_ger_tropentarn_uniform_tshirt.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		displayName = "(ARC) GER Uniform (Tropentarn(Tshirt)";
		hiddenSelectionsTextures[] = {
			"\GER_items\data\Tropentarn\GER_Tropentarn_clothing.paa"
		};
		class ItemInfo: UniformItem {
			uniformModel = "-";
			uniformClass = "ARC_GER_Tropentarn_Soldier_01";
			containerClass = "Supply40";
			mass = 80;
		};
	};
	class ARC_GER_Tropentarn_Uniform_vest: U_B_CombatUniform_mcam_vest {
		picture = "\GER_items\data\Tropentarn\icon_ger_tropentarn_uniform_vest.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		displayName = "(ARC) GER Uniform (Tropentarn(Vest)";
		hiddenSelectionsTextures[] = {
			"\GER_items\data\Tropentarn\GER_Tropentarn_clothing.paa"
		};
		class ItemInfo: UniformItem {
			uniformModel = "-";
			uniformClass = "ARC_GER_Tropentarn_Soldier_02";
			containerClass = "Supply40";
			mass = 80;
		};
	};
	class ARC_GER_Tropentarn_Plate_Carrier: V_PlateCarrier1_rgr {
		displayName = "(ARC) GER Plate Carrier (Tropentarn)";
		picture = "\GER_items\data\Tropentarn\Icon_GER_Tropentarn_vests.paa";
		hiddenSelections[] = {
			"camo"
		};
		hiddenSelectionsTextures[] = {
			"\GER_items\data\Tropentarn\GER_Tropentarn_vests.paa"
		};
		class ItemInfo: VestItem {
			containerclass = "Supply140";
			mass = 60;
			uniformmodel = "\A3\Characters_F\BLUFOR\equip_b_vest02";
			hiddenSelections[] = {
				"camo"
			};
			class HitpointsProtectionInfo {

				class Chest {
					HitpointName = "HitChest";
					armor = 20;
					PassThrough = 0.300000;
				};

				class Diaphragm {
					HitpointName = "HitDiaphragm";
					armor = 20;
					PassThrough = 0.300000;
				};

				class Abdomen {
					hitpointName = "HitAbdomen";
					armor = 20;
					passThrough = 0.300000;
				};

				class Body {
					hitpointName = "HitBody";
					passThrough = 0.300000;
				};
			};
		};
	};
	class ARC_GER_Tropentarn_Plate_Carrier_H: V_PlateCarrier2_rgr {
		displayName = "(ARC) GER Heavy Plate Carrier (Tropentarn)";
		picture = "\GER_items\data\Tropentarn\Icon_GER_Tropentarn_vests.paa";
		hiddenSelections[] = {
			"camo"
		};
		hiddenSelectionsTextures[] = {
			"\GER_items\data\Tropentarn\GER_Tropentarn_vests.paa"
		};
		class ItemInfo: VestItem {
			containerclass = "Supply120";
			mass = 80;
			uniformmodel = "\A3\Characters_F\BLUFOR\equip_b_vest01";
			hiddenSelections[] = {
				"camo"
			};
			class HitpointsProtectionInfo {

				class Chest {
					HitpointName = "HitChest";
					armor = 30;
					PassThrough = 0.200000;
				};

				class Diaphragm {
					HitpointName = "HitDiaphragm";
					armor = 30;
					PassThrough = 0.200000;
				};

				class Abdomen {
					hitpointName = "HitAbdomen";
					armor = 30;
					passThrough = 0.200000;
				};

				class Body {
					hitpointName = "HitBody";
					passThrough = 0.200000;
				};
			};
		};
	};
	class ARC_GER_Tropentarn_rangemaster_belt: V_Rangemaster_belt {
		displayName = "(ARC) GER Rangemaster Belt (Tropentarn)";
		model = "\A3\Characters_F\BLUFOR\equip_b_belt";
		hiddenSelections[] = {
			"camo"
		};
		hiddenSelectionsTextures[] = {
			"\GER_items\data\Tropentarn\GER_Tropentarn_vests.paa"
		};
		class ItemInfo: VestItem {
			armor = 0;
			containerclass = "Supply40";
			mass = 20;
			passthrough = 1;
			uniformmodel = "\A3\Characters_F\BLUFOR\equip_b_belt";
			hiddenSelections[] = {
				"camo"
			};
		};
	};
	class ARC_GER_Tropentarn_BandollierB_rgr: V_BandollierB_rgr {
		picture = "\A3\characters_f\Data\UI\icon_V_BandollierB_CA.paa";
		model = "\A3\Characters_F\BLUFOR\equip_b_bandolier";
		displayName = "(ARC) GER Slash Bandolier (Tropentarn)";
		hiddenSelectionsTextures[] = {
			"\GER_items\data\Tropentarn\GER_Tropentarn_vests.paa"
		};
		class ItemInfo: ItemInfo {
			uniformClass = "ARC_GER_Tropentarn_Soldier_02";
			armor = 0;
			containerclass = "Supply80";
			mass = 20;
			passthrough = 1;
			
			uniformmodel = "\A3\Characters_F\BLUFOR\equip_b_bandolier.p3d";
			hiddenselections[] = {
				"camo"
			};
		};
	};
	class ARC_GER_Tropentarn_PlateCarrier_1: V_PlateCarrierIA1_dgtl {
		displayName = "(ARC) GER GA Carrier Lite (Tropentarn)";
		model = "A3\Characters_F_Beta\INDEP\equip_ia_vest01";
		hiddenSelections[] = {
			"camo"
		};
		hiddenSelectionsTextures[] = {
			"GER_items\data\Tropentarn\GER_Tropentarn_PlateCarrier.paa"
		};
		class ItemInfo: VestItem {
			containerclass = "Supply140";
			mass = 40;
			uniformmodel = "A3\Characters_F_Beta\INDEP\equip_ia_vest01";
			hiddenSelections[] = {
				"camo"
			};
			class HitpointsProtectionInfo {

				class Chest {
					hitpointName = "HitChest";
					armor = 30;
					passThrough = 0.300000;
				};

				class Diaphragm {
					hitpointName = "HitDiaphragm";
					armor = 30;
					passThrough = 0.300000;
				};

				class Abdomen {
					hitpointName = "HitAbdomen";
					armor = 30;
					passThrough = 0.300000;
				};

				class Body {
					hitpointName = "HitBody";
					passThrough = 0.300000;
				};
			};
		};
	};
	class ARC_GER_Tropentarn_PlateCarrier_2: V_PlateCarrierIA2_dgtl {
		displayName = "(ARC) GER GA Carrier Rig (Tropentarn ";
		model = "A3\Characters_F_Beta\INDEP\equip_ia_vest02";
		hiddenSelections[] = {
			"camo"
		};
		hiddenSelectionsTextures[] = {
			"GER_items\data\Tropentarn\GER_Tropentarn_PlateCarrier.paa"
		};
		class ItemInfo: VestItem {
			containerclass = "Supply140";
			mass = 60;
			uniformmodel = "A3\Characters_F_Beta\INDEP\equip_ia_vest02";
			hiddenSelections[] = {
				"camo"
			};
			class HitpointsProtectionInfo {

				class Chest {
					hitpointName = "HitChest";
					armor = 30;
					passThrough = 0.300000;
				};

				class Diaphragm {
					hitpointName = "HitDiaphragm";
					armor = 30;
					passThrough = 0.300000;
				};

				class Abdomen {
					hitpointName = "HitAbdomen";
					armor = 30;
					passThrough = 0.300000;
				};

				class Pelvis {
					hitpointName = "HitPelvis";
					armor = 30;
					passThrough = 0.300000;
				};

				class Body {
					hitpointName = "HitBody";
					passThrough = 0.300000;
				};
			};
		};
	};
	class ARC_GER_Tropentarn_Milcap: H_MilCap_mcamo {
		displayName = "(ARC) GER Military Cap (Tropentarn)";
		picture = "\GER_items\data\Tropentarn\Icon_GER_Tropentarn_CapPatrol.paa";
		hiddenSelections[] = {
			"camo"
		};
		hiddenselectionstextures[] = {
			"GER_items\data\Tropentarn\cappatrol_GER_Tropentarn.paa"
		};
		class ItemInfo: ItemInfo {
			allowedslots[] = {901, 701, 605};
			armor = 0;
			mass = 6;
			modelsides[] = {6};
			passthrough = 1;
			uniformmodel = "\A3\Characters_F\Common\cappatrol.p3d";
			hiddenselections[] = {
				"camo"
			};
		};
	};
	class ARC_GER_Tropentarn_Helmet: H_HelmetSpecB {
		displayName = "(ARC) GER Equipped MICH 2000 (Tropentarn)";
		picture = "\GER_items\data\Tropentarn\Icon_GER_Tropentarn_MICH.paa";
		hiddenSelections[] = {
			"camo"
		};
		hiddenSelectionsTextures[] = {
			"\GER_items\data\Tropentarn\GER_Tropentarn_equip.paa"
		};
		class ItemInfo: ItemInfo {
			mass = 50;
			modelsides[] = {3, 1};
			uniformmodel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_ballistic";
			class HitpointsProtectionInfo {

				class Head {
					hitpointName = "HitHead";
					armor = 10;
					passThrough = 0.500000;
				};
			};
		};
	};
	class ARC_GER_Tropentarn_Helmet_simple: H_HelmetB {
		displayName = "(ARC) GER MICH 2000 (Tropentarn)";
		picture = "\GER_items\data\Tropentarn\Icon_GER_Tropentarn_equip.paa";
		hiddenSelections[] = {
			"camo"
		};
		hiddenSelectionsTextures[] = {
			"\GER_items\data\Tropentarn\GER_Tropentarn_equip.paa"
		};
		class ItemInfo: ItemInfo {
			hiddenselections[] = {"camo"};
			mass = 40;
			modelsides[] = {3, 1};
			uniformmodel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_plain";
			class HitpointsProtectionInfo {

				class Head {
					hitpointName = "HitHead";
					armor = 10;
					passThrough = 0.500000;
				};
			};
		};
	};
	class ARC_GER_Tropentarn_Helmet_Light: H_HelmetB_light {
		displayName = "(ARC) GER FBJ Ops Core (Tropentarn)";
		picture = "\GER_items\data\Tropentarn\Icon_GER_Tropentarn_equip.paa";
		hiddenSelections[] = {
			"camo"
		};
		hiddenSelectionsTextures[] = {
			"\GER_items\data\Tropentarn\GER_Tropentarn_equip.paa"
		};
		class ItemInfo: ItemInfo {
			mass = 30;
			uniformmodel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_light";
			class HitpointsProtectionInfo {

				class Head {
					hitpointName = "HitHead";
					armor = 4;
					passThrough = 0.500000;
				};
			};
		};
	};
	class ARC_GER_Tropentarn_Mich: H_HelmetIA {
		displayName = "(ARC) GER PASGT (Tropentarn)";
		picture = "\GER_items\data\Tropentarn\Icon_GER_Tropentarn_MICH.paa";
		model = "\A3\Characters_F_Beta\INDEP\headgear_helmet_canvas";
		hiddenSelectionsTextures[] = {
			"\GER_items\data\Tropentarn\GER_Tropentarn_MICH.paa"
		};
		class ItemInfo: ItemInfo {
			allowedslots[] = {901, 605};
			mass = 40;
			modelsides[] = {2, 3};
			uniformmodel = "\A3\Characters_F_Beta\INDEP\headgear_helmet_canvas.p3d";
			class HitpointsProtectionInfo {

				class Head {
					hitpointName = "HitHead";
					armor = 4;
					passThrough = 0.500000;
				};
			};
		};
	};
	class ARC_GER_Tropentarn_booniehat: H_HelmetB {
		scope = public;
		weaponPoolAvailable = 1;
		displayName = "(ARC) GER booniehat (Tropentarn)";
		picture = "\GER_items\data\Tropentarn\Icon_GER_Tropentarn_Booniehat.paa";
		model = "\A3\Characters_F\Common\booniehat";
		hiddenSelections[] = {
			"camo"
		};
		hiddenSelectionsTextures[] = {
			"GER_items\data\Tropentarn\booniehat_GER_Tropentarn.paa"
		};
		class ItemInfo: ItemInfo {
			allowedslots[] = {801, 901, 701, 605};
			mass = 10;
			modelsides[] = {6};
			uniformmodel = "\A3\Characters_F\Common\booniehat";
						class HitpointsProtectionInfo {

				class Head {
					hitpointName = "HitHead";
					armor = 0;
					passThrough = 1.000000;
				};
			};
		};
	};
	class ARC_GER_Tropentarn_Bandanna: H_Bandanna_surfer {
		displayName = "(ARC) GER Bandanna (Tropentarn)";
		hiddenselectionstextures[] = {
			"\GER_items\data\Tropentarn\GER_Tropentarn_bandana.paa"
		};
		class ItemInfo: ItemInfo {
			allowedslots[] = {901, 701, 605};
			armor = 0;
			mass = 8;
			modelsides[] = {6};
			passthrough = 1;
			uniformmodel = "\A3\Characters_F\Civil\headgear_c_bandana1.p3d";
		};
	};

///// Officers

	class GER_Flecktarn_Officer_Uniform : Uniform_Base {
		scope = public;	
		author = "=ARC=";
		displayName = "(ARC) GER Officer Uniform (Flecktarn)";		
		picture = "\GER_items\data\Flecktarn\icon_ger_flecktarn_uniform_officer.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		hiddenSelections[] = {"Camo1", "camo2", "insignia"};
		hiddenSelectionsTextures[] = {"\GER_items\data\Flecktarn\officer_GER_Flecktarn.paa", "\GER_items\data\Flecktarn\GER_Flecktarn_Uniform.paa"};
		
		class ItemInfo : UniformItem {
		 	uniformModel = "-";
			uniformClass = "GER_Flecktarn_Officer";			
			containerClass = "Supply40";
			mass = 40;
		};
	}; 
	
	class GER_Tropentarn_Officer_Uniform : Uniform_Base {
		scope = public;	
		author = "=ARC=";
		displayName = "(ARC) GER Officer Uniform (Tropentarn)";		
		picture = "\GER_items\data\Tropentarn\icon_ger_tropentarn_uniform_officer.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		hiddenSelections[] = {"Camo1", "camo2", "insignia"};
		hiddenSelectionsTextures[] = {"\GER_items\data\Tropentarn\officer_GER_Tropentarn.paa", "\GER_items\data\Tropentarn\GER_Tropentarn_Uniform.paa"};
		
		class ItemInfo : UniformItem {
		 	uniformModel = "-";
			uniformClass = "GER_Tropentarn_Officer";			
			containerClass = "Supply40";
			mass = 40;
		};
	}; 
	
	////// HPC
	//
	class ARC_GER_Flecktarn_HPC_GL : V_PlateCarrierGL_rgr {
		author = "Soronelite";
		displayName = "(ARC) GER HPC GL (Flecktarn)";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"GER_items\data\Flecktarn\GER_Flecktarn_HPC.paa"};
		
		class ItemInfo : ItemInfo {
			containerClass = "Supply160";
			hiddenSelections[] = {"camo"};
			mass = 90;
			uniformModel = "\A3\Characters_F\BLUFOR\equip_b_carrier_gl_rig.p3d";
			class HitpointsProtectionInfo {

				class Neck {
					hitpointName = "HitNeck";
					armor = 8;
					passThrough = 0.500000;
				};

				class Arms {
					hitpointName = "HitArms";
					armor = 8;
					passThrough = 0.500000;
				};

				class Chest {
					hitpointName = "HitChest";
					armor = 78;
					passThrough = 0.600000;
				};

				class Diaphragm {
					hitpointName = "HitDiaphragm";
					armor = 78;
					passThrough = 0.600000;
				};

				class Abdomen {
					hitpointName = "HitAbdomen";
					armor = 16;
					passThrough = 0.300000;
				};

				class Pelvis {
					hitpointName = "HitPelvis";
					armor = 16;
					passThrough = 0.300000;
				};

				class Body {
					hitpointName = "HitBody";
					passThrough = 0.600000;
				};
			};
		};
	};
	class ARC_GER_Flecktarn_HPC : V_PlateCarrierSpec_rgr {
		author = "Soronelite";
		displayName = "(ARC) GER HPC (Flecktarn)";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"GER_items\data\Flecktarn\GER_Flecktarn_HPC.paa"};
		
		class ItemInfo : ItemInfo {
			containerClass = "Supply140";
			hiddenSelections[] = {"camo"};
			mass = 60;
			uniformModel = "\A3\Characters_F\BLUFOR\equip_b_carrier_spec_rig.p3d";
			class HitpointsProtectionInfo {

				class Neck {
					hitpointName = "HitNeck";
					armor = 8;
					passThrough = 0.500000;
				};

				class Arms {
					hitpointName = "HitArms";
					armor = 8;
					passThrough = 0.500000;
				};

				class Chest {
					hitpointName = "HitChest";
					armor = 24;
					passThrough = 0.100000;
				};

				class Diaphragm {
					hitpointName = "HitDiaphragm";
					armor = 24;
					passThrough = 0.100000;
				};

				class Abdomen {
					hitpointName = "HitAbdomen";
					armor = 24;
					passThrough = 0.100000;
				};

				class Body {
					hitpointName = "HitBody";
					passThrough = 0.100000;
				};
			};
		};
	};	
	class ARC_GER_Flecktarn_HPC_GA : V_PlateCarrierIAGL_dgtl {
		author = "Soronelite";
		displayname = "(ARC) GER GA HPC (Flecktarn)";
		model = "A3\Characters_F_Beta\INDEP\equip_ia_ga_carrier_gl_rig";
		picture = "\A3\Characters_F_Mark\Data\UI\icon_ga_carrier_gl_rig_digi.paa";
		scope = public;
		hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] = {"GER_items\data\Flecktarn\GER_Flecktarn_PlateCarrier.paa", "GER_items\data\Flecktarn\GER_Flecktarn_HPC_G.paa"};
		
		class ItemInfo : ItemInfo {
			uniformModel = "\A3\Characters_F_Beta\INDEP\equip_ia_ga_carrier_gl_rig.p3d";
			containerClass = "Supply150";
			mass = 80;
			hiddenSelections[] = {"camo1", "camo2"};
			class HitpointsProtectionInfo {

				class Neck {
					hitpointName = "HitNeck";
					armor = 8;
					passThrough = 0.500000;
				};

				class Arms {
					hitpointName = "HitArms";
					armor = 8;
					passThrough = 0.500000;
				};

				class Chest {
					hitpointName = "HitChest";
					armor = 78;
					passThrough = 0.600000;
				};

				class Diaphragm {
					hitpointName = "HitDiaphragm";
					armor = 78;
					passThrough = 0.600000;
				};

				class Abdomen {
					hitpointName = "HitAbdomen";
					armor = 16;
					passThrough = 0.300000;
				};

				class Pelvis {
					hitpointName = "HitPelvis";
					armor = 16;
					passThrough = 0.300000;
				};

				class Body {
					hitpointName = "HitBody";
					passThrough = 0.600000;
				};
			};
		};
	};		
	//
	class ARC_GER_Tropentarn_HPC_GL : V_PlateCarrierGL_rgr {
		author = "Soronelite";
		displayName = "(ARC) GER HPC GL (Tropentarn)";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"GER_items\data\Tropentarn\GER_Tropentarn_HPC.paa"};
		
		class ItemInfo : ItemInfo {
			containerClass = "Supply160";
			hiddenSelections[] = {"camo"};
			mass = 90;
			uniformModel = "\A3\Characters_F\BLUFOR\equip_b_carrier_gl_rig.p3d";
			class HitpointsProtectionInfo {

				class Neck {
					hitpointName = "HitNeck";
					armor = 8;
					passThrough = 0.500000;
				};

				class Arms {
					hitpointName = "HitArms";
					armor = 8;
					passThrough = 0.500000;
				};

				class Chest {
					hitpointName = "HitChest";
					armor = 78;
					passThrough = 0.600000;
				};

				class Diaphragm {
					hitpointName = "HitDiaphragm";
					armor = 78;
					passThrough = 0.600000;
				};

				class Abdomen {
					hitpointName = "HitAbdomen";
					armor = 16;
					passThrough = 0.300000;
				};

				class Pelvis {
					hitpointName = "HitPelvis";
					armor = 16;
					passThrough = 0.300000;
				};

				class Body {
					hitpointName = "HitBody";
					passThrough = 0.600000;
				};
			};
		};
	};
	class ARC_GER_Tropentarn_HPC : V_PlateCarrierSpec_rgr {
		author = "Soronelite";
		displayName = "(ARC) GER HPC (Tropentarn)";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"GER_items\data\Tropentarn\GER_Tropentarn_HPC.paa"};
		
		class ItemInfo : ItemInfo {
			containerClass = "Supply140";
			hiddenSelections[] = {"camo"};
			mass = 60;
			uniformModel = "\A3\Characters_F\BLUFOR\equip_b_carrier_spec_rig.p3d";
			class HitpointsProtectionInfo {

				class Neck {
					hitpointName = "HitNeck";
					armor = 8;
					passThrough = 0.500000;
				};

				class Arms {
					hitpointName = "HitArms";
					armor = 8;
					passThrough = 0.500000;
				};

				class Chest {
					hitpointName = "HitChest";
					armor = 24;
					passThrough = 0.100000;
				};

				class Diaphragm {
					hitpointName = "HitDiaphragm";
					armor = 24;
					passThrough = 0.100000;
				};

				class Abdomen {
					hitpointName = "HitAbdomen";
					armor = 24;
					passThrough = 0.100000;
				};

				class Body {
					hitpointName = "HitBody";
					passThrough = 0.100000;
				};
			};
		};
	};	
	class ARC_GER_Tropentarn_HPC_GA : V_PlateCarrierIAGL_dgtl {
		author = "Soronelite";
		displayname = "(ARC) GER GA HPC (Tropentarn)";
		model = "A3\Characters_F_Beta\INDEP\equip_ia_ga_carrier_gl_rig";
		picture = "\A3\Characters_F_Mark\Data\UI\icon_ga_carrier_gl_rig_digi.paa";
		scope = public;
		hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] = {"GER_items\data\Tropentarn\GER_Tropentarn_PlateCarrier.paa", "GER_items\data\Tropentarn\GER_Tropentarn_HPC_G.paa"};
		
		class ItemInfo : ItemInfo {
			uniformModel = "\A3\Characters_F_Beta\INDEP\equip_ia_ga_carrier_gl_rig.p3d";
			containerClass = "Supply150";
			mass = 80;
			hiddenSelections[] = {"camo1", "camo2"};
			class HitpointsProtectionInfo {

				class Neck {
					hitpointName = "HitNeck";
					armor = 8;
					passThrough = 0.500000;
				};

				class Arms {
					hitpointName = "HitArms";
					armor = 8;
					passThrough = 0.500000;
				};

				class Chest {
					hitpointName = "HitChest";
					armor = 78;
					passThrough = 0.600000;
				};

				class Diaphragm {
					hitpointName = "HitDiaphragm";
					armor = 78;
					passThrough = 0.600000;
				};

				class Abdomen {
					hitpointName = "HitAbdomen";
					armor = 16;
					passThrough = 0.300000;
				};

				class Pelvis {
					hitpointName = "HitPelvis";
					armor = 16;
					passThrough = 0.300000;
				};

				class Body {
					hitpointName = "HitBody";
					passThrough = 0.600000;
				};
			};
		};
	};		
	/////////// Pull
	
	class GER_Flecktarn_Pullover : Uniform_Base {
		author = "Soronelite";
		scope = 2;
		displayName = (ARC) GER Pullover (Flecktarn);
		picture = "\A3\characters_f_bootcamp\data\ui\icon_U_G_guerrilla_6_1_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\GER_items\data\Flecktarn\GER_Flecktarn_Uniform_Pull.paa"};
		
		class ItemInfo : UniformItem {
			uniformModel = "-";
			uniformClass = "GER_Flecktarn_Unit_Pullover";
			containerClass = "Supply40";
			mass = 30;
		};
	};	
	
	
	
};
