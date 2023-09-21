#include "faction.inc"

class CfgPatches {
    class O_CLA {
              units[] = {
            "O_CLA_Rifleman_01",
            "O_CLA_Teamlead_01",
            "O_CLA_Medic_01",
            "O_CLA_Breacher_01",
            "O_CLA_Rifleperson_01",
            "O_CLA_Autorifle_01",
            "O_CLA_Sniper_01",
            "O_CLA_Rifleperson_02",
            "O_CLA_Grenadier_01",
            "O_CLA_Elite_Rifleperson_01",
            "O_CLA_Elite_Rifleperson_02",
            "O_CLA_Elite_Teamlead_01",
            "O_CLA_Elite_Breacher_01",
            "O_CLA_Elite_AnitArmor_01",
            "O_CLA_Elite_Medic_01",
            "O_CLA_Elite_Autorifle_01",
            "O_CLA_Crew_01",
            "O_CLA_Crew_02",
            "O_CLA_Reaper_01",
            "O_CLA_Reaper_Teamlead_01",
            "O_CLA_Reaper_Autorifle_01",
            "O_CLA_Reaper_AntiArmor_01",
            "O_CLA_Puma_01",
            "O_CLA_Reaper_Sniper_01",
            "O_CLA_Reaper_Breacher_01",
            "O_CLA_Reaper_AntiAir_01",
            "O_CLA_Reaper_Medic_01",
            "O_CLA_Disassembeled_MG_01",
            "O_CLA_Warthog_FAV_01",
            "O_CLA_Oryx_IFV_01",
            "O_CLA_Truck_01",
            "O_OCLA_Ozelot_AA_01",
            "O_CLA_Warthog_APC_01",
            "O_CLA_SWS_Ferret_01",
            "O_CLA_Warthog_MG_01",
            "O_CLA_Recluse_MBT_01",
            "O_CLA_Falcon_01",
            "O_OCLA_Falcon_02",
            "O_CLA_Salamander_GMG_01",
            "O_CLA_Pelican_01",
            "O_CLA_HMG_Raised_01",
            "O_CLA_Mortar_01",
            "O_CLA_Tarantula_01",
            "O_CLA_Wyvern_01",
            "O_CLA_Mortar_Tube_01",
            "O_CLA_Mortar_Bipod_01",
            "O_CLA_Rooikat_01",
            "O_CLA_Rooikat_UP_01",
            "O_CLA_Sholef_01",
            "O_CLA_Seara_01",
            "O_CLA_Minigun_01",
            "O_CLA_Beetle_MBT_01",
            "O_CLA_Reaper_Demolitionist_01",
            "O_CLA_Puma_AT_01",
            "O_CLA_Wyvern_VT_01",
            "O_CLA_T14_MBT_01",
            "O_CLA_T14k_01",
            "O_CLA_T100X_MBT_01",
            "O_CLA_Pelican_70mm_01",
            "O_CLA_MG_Tripod_01",
            "O_CLA_Assault_Boat_01",
            "O_CLA_Gryphon_01",
            "O_CLA_Otokar_01"
        };
        weapons[] = {};
        requiredVersion = 1.62;
        requiredAddons[] = {
            "OPTRE_Ins_Units_URF",
            "OPTRE_UNSC_Units",
            "19thArmor",
            "19thODSTArmor",
            "A3_Characters_F",
            "DMNS_Units",
            "lambs_danger",
            "aceax_ingame",
            "A3_Sounds_F",
            "A3_Sounds_F_Exp",
            "jsrs_soundmod_complete_edition",
            "tfar_core",
            "ace_gforces",
            "ace_movement",
            "ace_medical_feedback",
            "A3_Data_F",
            "A3_Data_F_Curator",
            "A3_Air_F_Heli",
            "lambs_range",
            "ace_thermals",
            "lambs_formations",
            "zen_attributes",
            "ace_refuel",
            "CUP_Core",
            "cba_xeh",
            "OPTRE_Ins_Units_IND",
            "OPTRE_Plus",
            "A3_Soft_F_Exp_LSV_02",
            "ace_realisticnames",
            "A3_Soft_F",
            "A3_Soft_F_Gamma_Hatchback_01",
            "A3_Soft_F_Exp_Offroad_02",
            "A3_Data_F_ParticleEffects",
            "babe_int_EHs",
            "emr_main",
            "ace_interaction",
            "ace_tagging",
            "ace_vehicles",
            "ace_cargo",
            "A3_Armor_F_Beta",
            "OPTRE_Vehicles_Warthog",
            "OPTRE_JSRS_Sounds",
            "OPTRE_Vehicles_M494",
            "A3_Armor_F_EPB_APC_Tracked_03",
            "tfar_external_intercom",
            "ace_vehicle_damage",
            "A3_Armor_F_Beta_APC_Tracked_01",
            "A3_Armor_F_Beta_APC_Tracked_02",
            "A3_Armor_F_Gamma_MBT_01",
            "A3_Armor_F_Gamma_MBT_02",
            "Jbad_ConstructionCrane",
            "A3_Armor_F_EPB_MBT_03",
            "A3_Armor_F_Tank_LT_01",
            "A3_Armor_F_Tank_MBT_04",
            "A3_Soft_F_Enoch_UGV_02",
            "ace_cookoff",
            "ace_logistics_uavbattery",
            "OPTRE_Vehicles_Elephant",
            "OPTRE_Vehicles_Misc",
            "A3_Soft_F_Beta_Truck_02",
            "A3_Soft_F_Gamma_Truck_02",
            "A3_Soft_F_Enoch_Truck_02",
            "A3_Soft_F_Beta_Truck_01",
            "A3_Soft_F_Gamma_Truck_01",
            "A3_Soft_F_Gamma_Van_01",
            "A3_Soft_F_EPC_Truck_03",
            "Jbad_Cat_Dumper",
            "Jbad_Forklift",
            "A3_Soft_F_Orange_Van_02",
            "ace_repair",
            "EMP_Greystone_PMC",
            "A3_Sounds_F_Tank",
            "A3_Armor_F_Beta_APC_Wheeled_01",
            "TFAR_IntercomDummy",
            "A3_Armor_F_Beta_APC_Wheeled_02",
            "A3_Armor_F_Gamma_APC_Wheeled_03",
            "A3_Armor_F_Tank_AFV_Wheeled_01",
            "OPTRE_Vehicles_Wildebeest",
            "LM_OPCAN_URA",
            "A3_Armor_F_EPC_MBT_01",
            "OPTRE_FC_Vehicles_Locust",
            "ace_viewports",
            "OPTRE_Vehicles_M808B2",
            "OPTRE_Vehicles_M808S",
            "OPTRE_Vehicles_Scorpion",
            "OPTRE_Vehicles_Grizzly",
            "OPTRE_FC_Vehicles_T32_Ghost",
            "OPTRE_FC_Vehicles_M808L",
            "OPTRE_FC_Vehicles_Spectre",
            "OPTRE_FC_Vehicles_T26",
            "ace_hunterkiller",
            "OPTRE_Vehicles_Air_Falcon",
            "A3_Air_F",
            "A3_Air_F_Heli_Light_01",
            "A3_Air_F_Heli_Light_02",
            "A3_Air_F_Beta_Heli_Transport_01",
            "MELB",
            "Splits_Vehicles_Air_Pelican",
            "DMNS_Vehicles_Nightingale",
            "OPTRE_Vehicles_Hornet",
            "OPTRE_Vehicles_SOCOM_Pelican",
            "OPTRE_Vehicles_Pelican",
            "OPTRE_Vehicles_Sparrowhawk",
            "OPAEX_Pelican",
            "OPAEX_Sparrowhawk",
            "SAG6_Pelicans",
            "SAG6_Pelican_VTOL",
            "A3_Soft_F_Beta_MRAP_03",
            "SWS_Patches_EventHandlers",
            "A3_Static_F_HMG_02",
            "ace_csw",
            "A3_Static_F",
            "A3_Static_F_AA_01",
            "A3_Static_F_AT_01",
            "CUP_WarfareBuildings",
            "ace_dragging",
            "A3_Static_F_Mortar_01",
            "ace_mk6mortar",
            "ace_artillerytables",
            "A3_Air_F_Exp_VTOL_02",
            "A3_Air_F_Exp",
            "A3_Air_F_Exp_VTOL_01",
            "A3_Air_F_Beta",
            "A3_Air_F_Gamma_Plane_Fighter_03",
            "A3_Air_F_EPC_Plane_CAS_01",
            "A3_Air_F_EPC_Plane_CAS_02",
            "A3_Air_F_Exp_Plane_Civil_01",
            "A3_Air_F_Jets_Plane_Fighter_01",
            "A3_Air_F_Jets_Plane_Fighter_02",
            "A3_Air_F_Jets_Plane_Fighter_04",
            "A3_Air_F_Jets_UAV_05",
            "OPTRE_Plus_Longsword",
            "OPTRE_Vehicles_Longsword",
            "DMNS_Shortsword_F",
            "OPTRE_Vehicles_Pod",
            "OPTRE_Vehicles_Sabre",
            "OPTRE_FC_Vehicles_Banshee",
            "LM_OPCAN_KOS_VEH",
            "A3_Armor_F_Decade_MBT_02",
            "A3_Boat_F_Exp_Boat_Armed_01",
            "A3_Boat_F_Boat_Armed_01",
            "A3_Boat_F"
        };
        author = "Bernard ""Egg"" Teller";
        authors[] = {"Bernard ""Egg"" Teller"};
        addonRootClass = "SWS_Units";
    };
};
