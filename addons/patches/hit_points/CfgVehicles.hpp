#define ADD_ACE_HITPOINTS\
    class HitPoints {\
        class HitFace; \
        class HitNeck: HitFace {}; \
        class HitHead: HitNeck {}; \
        class HitPelvis: HitHead {}; \
        class HitAbdomen: HitPelvis {}; \
        class HitDiaphragm: HitAbdomen {}; \
        class HitChest: HitDiaphragm {}; \
        class HitBody: HitChest {}; \
        class HitArms: HitBody {}; \
        class HitHands: HitArms {}; \
        class HitLegs: HitHands {}; \
        class Incapacitated: HitLegs {}; \
        class HitLeftArm: HitHands {\
            material = -1;\
            name = "hand_l";\
            radius = 0.08;\
            visual = "injury_hands";\
            minimalHit = 0.01;\
        };\
        class HitRightArm: HitLeftArm {\
            name = "hand_r";\
        };\
        class HitLeftLeg: HitLegs {\
            material = -1;\
            name = "leg_l";\
            radius = 0.1;\
            visual = "injury_legs";\
            minimalHit = 0.01;\
        };\
        class HitRightLeg: HitLeftLeg {\
            name = "leg_r";\
        };\
        class ACE_HDBracket {\
            armor = 1;\
            material = -1;\
            name = "head";\
            passThrough = 0;\
            radius = 1;\
            explosionShielding = 1;\
            visual = "";\
            minimalHit = 0;\
            depends = "HitHead";\
        };\
    }

class CfgVehicles {
    class B_Soldier_F;

    class TCGM_f_Oshun_Flat_soldier : B_Soldier_F { ADD_ACE_HITPOINTS; };
    class TCGM_f_Selene_Flat_soldier : TCGM_f_Oshun_Flat_soldier { ADD_ACE_HITPOINTS; };
    class TCGM_f_Tanit_Flat_soldier : TCGM_f_Selene_Flat_soldier { ADD_ACE_HITPOINTS; };
    class TCGM_f_Sekhmet_Flat_soldier : TCGM_f_Oshun_Flat_soldier { ADD_ACE_HITPOINTS; };
    class TCGM_f_Parvati_Flat_soldier : TCGM_f_Oshun_Flat_soldier { ADD_ACE_HITPOINTS; };
    class TCGM_f_Hecate_Flat_soldier : TCGM_f_Oshun_Flat_soldier { ADD_ACE_HITPOINTS; };
    class TCGM_f_Kali_Flat_soldier : TCGM_f_Selene_Flat_soldier { ADD_ACE_HITPOINTS; };
    class TCGM_f_Gaia_Flat_soldier : TCGM_f_Oshun_Flat_soldier { ADD_ACE_HITPOINTS; };
    class TCGM_f_Lada_Flat_soldier : TCGM_f_Oshun_Flat_soldier { ADD_ACE_HITPOINTS; };

    // class TCGM_f_Artemis_Flat_soldier : TCGM_f_Sekhmet_Flat_soldier { ADD_ACE_HITPOINTS; };
    // class TCGM_f_Athena_Flat_soldier : TCGM_f_Sekhmet_Flat_soldier { ADD_ACE_HITPOINTS; };
    // class TCGM_f_Blodeuwedd_Flat_soldier : TCGM_f_Parvati_Flat_soldier { ADD_ACE_HITPOINTS; };
    class TCGM_f_Cloaking_Flat_soldier : TCGM_f_Hecate_Flat_soldier { ADD_ACE_HITPOINTS; };
    // class TCGM_f_Durga_Flat_soldier : TCGM_f_Kali_Flat_soldier { ADD_ACE_HITPOINTS; };
    // class TCGM_f_Iris_Flat_soldier : TCGM_f_Parvati_Flat_soldier { ADD_ACE_HITPOINTS; };
    // class TCGM_f_Kurukulla_Flat_soldier : TCGM_f_Kali_Flat_soldier { ADD_ACE_HITPOINTS; };
    // class TCGM_f_Mania_Flat_soldier : TCGM_f_Parvati_Flat_soldier { ADD_ACE_HITPOINTS; };
    // class TCGM_f_Mut_Flat_soldier : TCGM_f_Kali_Flat_soldier { ADD_ACE_HITPOINTS; };
    // class TCGM_f_Nyx_Flat_soldier : TCGM_f_Parvati_Flat_soldier { ADD_ACE_HITPOINTS; };
    // class TCGM_f_Ops_Flat_soldier : TCGM_f_Kali_Flat_soldier { ADD_ACE_HITPOINTS; };
    // class TCGM_f_Radha_Flat_soldier : TCGM_f_Kali_Flat_soldier { ADD_ACE_HITPOINTS; };
    // class TCGM_f_Raet_Tawy_Flat_soldier : TCGM_f_Sekhmet_Flat_soldier { ADD_ACE_HITPOINTS; };
    // class TCGM_f_Saraswati_Flat_soldier : TCGM_f_Kali_Flat_soldier { ADD_ACE_HITPOINTS; };
    // class TCGM_f_Sita_Flat_soldier : TCGM_f_Kali_Flat_soldier { ADD_ACE_HITPOINTS; };
    // class TCGM_f_Tara_Flat_soldier : TCGM_f_Sekhmet_Flat_soldier { ADD_ACE_HITPOINTS; };
    // class TCGM_f_Transparent_Flat_soldier : TCGM_f_Mania_Flat_soldier { ADD_ACE_HITPOINTS; };
    // class TCGM_m_Amun_Flat_soldier : TCGM_f_Mut_Flat_soldier { ADD_ACE_HITPOINTS; };
    // class TCGM_m_Apollo_Flat_soldier : TCGM_f_Athena_Flat_soldier { ADD_ACE_HITPOINTS; };
    // class TCGM_m_Argiron_Flat_soldier : TCGM_f_Selene_Flat_soldier { ADD_ACE_HITPOINTS; };
    // class TCGM_m_Dactyls_Flat_soldier : TCGM_f_Lada_Flat_soldier { ADD_ACE_HITPOINTS; };
    // class TCGM_m_Dionysus_Flat_soldier : TCGM_f_Mania_Flat_soldier { ADD_ACE_HITPOINTS; };
    // class TCGM_m_Erebus_Flat_soldier : TCGM_f_Nyx_Flat_soldier { ADD_ACE_HITPOINTS; };
    // class TCGM_m_Hanuman_Flat_soldier : TCGM_f_Durga_Flat_soldier { ADD_ACE_HITPOINTS; };
    // class TCGM_m_Hephaestus_Flat_soldier : TCGM_f_Gaia_Flat_soldier { ADD_ACE_HITPOINTS; };
    // class TCGM_m_Hermes_Flat_soldier : TCGM_f_Iris_Flat_soldier { ADD_ACE_HITPOINTS; };
    // class TCGM_m_Indra_Flat_soldier : TCGM_f_Radha_Flat_soldier { ADD_ACE_HITPOINTS; };
    // class TCGM_m_Inti_Flat_soldier : TCGM_f_Raet_Tawy_Flat_soldier { ADD_ACE_HITPOINTS; };
    // class TCGM_m_Janus_Flat_soldier : TCGM_f_Parvati_Flat_soldier { ADD_ACE_HITPOINTS; };
    // class TCGM_m_Mars_Flat_soldier : TCGM_f_Kurukulla_Flat_soldier { ADD_ACE_HITPOINTS; };
    // class TCGM_m_Melqart_Flat_soldier : TCGM_f_Tanit_Flat_soldier { ADD_ACE_HITPOINTS; };
    // class TCGM_m_Midas_Flat_soldier : TCGM_f_Oshun_Flat_soldier { ADD_ACE_HITPOINTS; };
    // class TCGM_m_Min_Flat_soldier : TCGM_f_Hecate_Flat_soldier { ADD_ACE_HITPOINTS; };
    // class TCGM_m_Osiris_Flat_soldier : TCGM_f_Artemis_Flat_soldier { ADD_ACE_HITPOINTS; };
    // class TCGM_m_Parameshvara_Flat_soldier : TCGM_f_Saraswati_Flat_soldier { ADD_ACE_HITPOINTS; };
    // class TCGM_m_Rakshasa_Flat_soldier : TCGM_f_Blodeuwedd_Flat_soldier { ADD_ACE_HITPOINTS; };
    // class TCGM_m_Rama_Flat_soldier : TCGM_f_Kali_Flat_soldier { ADD_ACE_HITPOINTS; };
    // class TCGM_m_Saturn_Flat_soldier : TCGM_f_Ops_Flat_soldier { ADD_ACE_HITPOINTS; };
    // class TCGM_m_Shiva_Flat_soldier : TCGM_f_Tara_Flat_soldier { ADD_ACE_HITPOINTS; };
    // class TCGM_m_Transparent_Flat_soldier : TCGM_f_Transparent_Flat_soldier { ADD_ACE_HITPOINTS; };
    // class TCGM_m_Vishnu_Flat_soldier : TCGM_f_Sita_Flat_soldier { ADD_ACE_HITPOINTS; };
    // class TCGM_m_Vulcan_Flat_soldier : TCGM_f_Sekhmet_Flat_soldier { ADD_ACE_HITPOINTS; };
};
