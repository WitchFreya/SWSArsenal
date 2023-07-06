/*
OneOf:
    L/RShoulders  - AS_[Large,Medium,ODSTCQB,ODST,Sniper,Small]L/R
    Forearm       - A_TacPad,None
    LeftHip       - AP_Canteen, AP_Smoke
    L/RKnees      - A_[Knees,KneesMar]L/R
    AmmoAbs       - AP_[AR,BR,SMG,Sniper],APO_[AR,BR,Sniper],CustomKit_Scorch
    AmmoPecs      - APO_SMG,AP_SG

All Options: https://github.com/Belhun/Armco-Halo-Mod/wiki/Armour-Breakdown-With-Pictures
    "camo",
    "camo2",
    "camo3",
    "camo4",
    "camo5",
    "A_base",
    "A_ChestArmor",
    "A_Ghillie",
    "A_KneesMarLeft",
    "A_KneesMarRight",
    "A_KneesLeft",
    "A_KneesRight",
    "A_ODST",
    "A_ShinArmorLeft",
    "A_ShinArmorRight",
    "A_TacPad",
    "A_ThighArmorLeft",
    "A_ThighArmorRight",
    "AP_AR",
    "AP_BR",
    "AP_Canteen",
    "AP_Frag",
    "AP_GL",
    "AP_MGThigh",
    "AP_Pack",
    "AP_Pistol",
    "AP_Rounds",
    "AP_SG",
    "AP_SMG",
    "AP_Smoke",
    "AP_Sniper",
    "AP_Thigh",
    "APO_AR",
    "APO_BR",
    "APO_Knife",
    "APO_SMG",
    "APO_Sniper",
    "AS_BaseLeft",
    "AS_BaseRight",
    "AS_LargeLeft",
    "AS_LargeRight",
    "AS_MediumLeft",
    "AS_MediumRight",
    "AS_ODSTCQBLeft",
    "AS_ODSTCQBRight",
    "AS_ODSTLeft",
    "AS_ODSTRight",
    "AS_ODSTSniperLeft",
    "AS_ODSTSniperRight",
    "AS_SmallLeft",
    "AS_SmallRight",
    "CustomKit_Scorch"
 */


#define VEST_SELECTIONS_BASE "camo",  \
                             "camo2", \
                             "camo3", \
                             "camo4", \
                             "camo5"

#define VEST_SELECTIONS_MARINE "A_KneesMarLeft",  \
                               "A_KneesMarRight", \
                               "AS_LargeLeft",    \
                               "AS_LargeRight",   \
                               "AS_MediumLeft",   \
                               "AS_MediumRight"

#define VEST_SELECTIONS_STANDARD VEST_SELECTIONS_BASE,   \
                                 VEST_SELECTIONS_MARINE, \
                                 "AS_LargeLeft",         \
                                 "AS_LargeRight",        \
                                 "AS_MediumLeft",        \
                                 "AS_MediumRight",       \
                                 "AS_ODSTCQBLeft",       \
                                 "AS_ODSTCQBRight",      \
                                 "AS_ODSTSniperLeft",    \
                                 "AS_ODSTSniperRight",   \
                                 "AS_SmallLeft",         \
                                 "AS_SmallRight",        \
                                 "AP_AR",                \
                                 "AP_BR",                \
                                 "AP_Canteen",           \
                                 "AP_GL",                \
                                 "AP_Knife",             \
                                 "AP_MGThigh",           \
                                 "AP_AR",                \
                                 "AP_Pack",              \
                                 "AP_Pistol",            \
                                 "AP_Rounds",            \
                                 "AP_SG",                \
                                 "AP_SMG",               \
                                 "AP_Sniper",            \
                                 "AP_Thigh",             \
                                 "AP_Frag",              \
                                 "AP_Smoke",             \
                                 "APO_AR",               \
                                 "APO_BR",               \
                                 "APO_Knife",            \
                                 "APO_SMG",              \
                                 "APO_Sniper",           \
                                 "CustomKit_Scorch"

#define VEST_SELECTIONS_DEMOLITIONS VEST_SELECTIONS_BASE,   \
                                    VEST_SELECTIONS_MARINE, \
                                    "AS_ODSTLeft",          \
                                    "AS_ODSTCQBRight",      \
                                    "AS_ODSTSniperLeft",    \
                                    "AS_ODSTSniperRight",   \
                                    "AS_SmallLeft",         \
                                    "AS_SmallRight",        \
                                    "AP_AR",                \
                                    "AP_BR",                \
                                    "AP_Canteen",           \
                                    "AP_Knife",             \
                                    "AP_MGThigh",           \
                                    "AP_Pack",              \
                                    "AP_Pistol",            \
                                    "AP_Rounds",            \
                                    "AP_SG",                \
                                    "AP_SMG",               \
                                    "AP_Sniper",            \
                                    "AP_Thigh",             \
                                    "AP_Frag",              \
                                    "AP_Smoke",             \
                                    "APO_AR",               \
                                    "APO_BR",               \
                                    "APO_SMG",              \
                                    "APO_Sniper",           \
                                    "APO_Knife"

#define VEST_SELECTIONS_SNIPER VEST_SELECTIONS_BASE,   \
                               VEST_SELECTIONS_MARINE, \
                               "AS_ODSTLeft",          \
                               "AS_ODSTRight",         \
                               "AS_ODSTCQBLeft",       \
                               "AS_ODSTCQBRight",      \
                               "AS_ODSTSniperRight",   \
                               "AS_SmallLeft",         \
                               "AS_SmallRight",        \
                               "AP_AR",                \
                               "AP_BR",                \
                               "AP_Canteen",           \
                               "AP_GL",                \
                               "AP_Knife",             \
                               "AP_MGThigh",           \
                               "AP_Pack",              \
                               "AP_Rounds",            \
                               "AP_SG",                \
                               "AP_SMG",               \
                               "AP_Sniper",            \
                               "AP_Thigh",             \
                               "AP_Frag",              \
                               "AP_Smoke",             \
                               "APO_AR",               \
                               "APO_BR",               \
                               "APO_SMG",              \
                               "CustomKit_Scorch"

#define VEST_SELECTIONS_LIGHT VEST_SELECTIONS_BASE, VEST_SELECTIONS_MARINE, \
                              "AS_ODSTLeft",                                \
                              "AS_ODSTRight",                               \
                              "AS_ODSTCQBLeft",                             \
                              "AS_ODSTCQBRight",                            \
                              "AS_ODSTSniperLeft",                          \
                              "AS_ODSTSniperRight",                         \
                              "AS_SmallLeft",                               \
                              "AS_SmallRight",                              \
                              "AP_AR",                                      \
                              "AP_BR",                                      \
                              "AP_Canteen",                                 \
                              "AP_GL",                                      \
                              "AP_Knife",                                   \
                              "AP_MGThigh",                                 \
                              "AP_Pack",                                    \
                              "AP_Rounds",                                  \
                              "AP_SG",                                      \
                              "AP_SMG",                                     \
                              "AP_Sniper",                                  \
                              "AP_Frag",                                    \
                              "AP_Smoke",                                   \
                              "APO_AR",                                     \
                              "APO_BR",                                     \
                              "APO_Knife",                                  \
                              "APO_SMG",                                    \
                              "APO_Sniper",                                 \
                              "CustomKit_Scorch"

#define VEST_SELECTIONS_SCOUT VEST_SELECTIONS_BASE, VEST_SELECTIONS_MARINE, \
                              "AS_ODSTCQBLeft",                             \
                              "AS_ODSTCQBRight",                            \
                              "AS_ODSTSniperLeft",                          \
                              "AS_ODSTSniperRight",                         \
                              "AS_SmallLeft",                               \
                              "AS_SmallRight",                              \
                              "AP_AR",                                      \
                              "AP_BR",                                      \
                              "AP_Canteen",                                 \
                              "AP_GL",                                      \
                              "AP_Knife",                                   \
                              "AP_MGThigh",                                 \
                              "AP_Pack",                                    \
                              "AP_Pistol",                                  \
                              "AP_Rounds",                                  \
                              "AP_SG",                                      \
                              "AP_SMG",                                     \
                              "AP_Sniper",                                  \
                              "AP_Thigh",                                   \
                              "AP_Frag",                                    \
                              "APO_AR",                                     \
                              "APO_BR",                                     \
                              "APO_Sniper",                                 \
                              "CustomKit_Scorch"

#define VEST_SELECTIONS_RIFLEMAN VEST_SELECTIONS_BASE, VEST_SELECTIONS_MARINE, \
                                 "AS_ODSTCQBLeft",                             \
                                 "AS_ODSTCQBRight",                            \
                                 "AS_ODSTSniperLeft",                          \
                                 "AS_ODSTSniperRight",                         \
                                 "AS_SmallLeft",                               \
                                 "AS_SmallRight",                              \
                                 "AP_AR",                                      \
                                 "AP_BR",                                      \
                                 "AP_Canteen",                                 \
                                 "AP_GL",                                      \
                                 "AP_Knife",                                   \
                                 "AP_MGThigh",                                 \
                                 "AP_Pack",                                    \
                                 "AP_Pistol",                                  \
                                 "AP_Rounds",                                  \
                                 "AP_SG",                                      \
                                 "AP_SMG",                                     \
                                 "AP_Sniper",                                  \
                                 "AP_Thigh",                                   \
                                 "APO_BR",                                     \
                                 "APO_Knife",                                  \
                                 "APO_SMG",                                    \
                                 "APO_Sniper",                                 \
                                 "CustomKit_Scorch"

#define VEST_SELECTIONS_MARKSMAN VEST_SELECTIONS_BASE, VEST_SELECTIONS_MARINE, \
                                 "AS_ODSTCQBLeft",                             \
                                 "AS_ODSTCQBRight",                            \
                                 "AS_ODSTSniperLeft",                          \
                                 "AS_ODSTSniperRight",                         \
                                 "AS_SmallLeft",                               \
                                 "AS_SmallRight",                              \
                                 "AP_AR",                                      \
                                 "AP_BR",                                      \
                                 "AP_Canteen",                                 \
                                 "AP_GL",                                      \
                                 "AP_Knife",                                   \
                                 "AP_MGThigh",                                 \
                                 "AP_Pack",                                    \
                                 "AP_Pistol",                                  \
                                 "AP_Rounds",                                  \
                                 "AP_SG",                                      \
                                 "AP_SMG",                                     \
                                 "AP_Sniper",                                  \
                                 "APO_AR",                                     \
                                 "APO_SMG",                                    \
                                 "APO_Sniper",                                 \
                                 "CustomKit_Scorch"

#define C_VEST_GHILLIE(varName,varSelections)                 \
    class DOUBLES(VEST(varName),Ghillie): VEST(varName) {   \
        class ItemInfo: ItemInfo {                          \
            hiddenSelections[] = {varSelections};           \
        };                                                  \
    }

#define C_VEST_BASE(varName,varTextures)                        \
    class VEST(varName) : VEST(Base) {                          \
        SCOPE(2);                                               \
        displayName = NAME(Vest (varName));                     \
        hiddenSelectionsTextures[] = { varTextures };           \
    };                                                          \
    C_VEST_GHILLIE(varName,VEST_SELECTIONS_STANDARD)

#define C_VEST_VARIANT(varName,varVariant,selections)               \
    class DOUBLES(VEST(varName),varVariant): VEST(varName) {        \
        class ItemInfo: ItemInfo {                                  \
            hiddenSelections[] = {ARR_2(selections,"A_Ghillie")};   \
        };                                                          \
    };                                                              \
    C_VEST_GHILLIE(DOUBLES(varName,varVariant),selections)

#define C_VEST(varName)                                     \
    C_VEST_BASE(varName, ARR_5(                             \
        TEXTURE(vest,rifleman),                             \
        TEXTURE(armor,rifleman),                            \
        TEXTURE(legs,varName),                              \
        "optre_unsc_units\army\data\ghillie_desert_co.paa", \
        TEXTURE(odst_addons,varName)                        \
    ));                                                               \
    C_VEST_VARIANT(varName,Demolitions,VEST_SELECTIONS_DEMOLITIONS);  \
    C_VEST_VARIANT(varName,Sniper,VEST_SELECTIONS_SNIPER);            \
    C_VEST_VARIANT(varName,Light,VEST_SELECTIONS_LIGHT);              \
    C_VEST_VARIANT(varName,Scout,VEST_SELECTIONS_SCOUT);              \
    C_VEST_VARIANT(varName,Rifleman,VEST_SELECTIONS_RIFLEMAN);        \
    C_VEST_VARIANT(varName,Marksman,VEST_SELECTIONS_MARKSMAN)


class VEST(Base) : SWS_OPTRE_UNSC_M52D_Armor
{
    ITEM_META(0);

    /** Armor Level is meaningless anyway... */
    descriptionShort = "Armor Level: ODST";

    hiddenSelectionsMaterials[] = {
        MATERIAL(Vest),
        MATERIAL(Armor),
        MATERIAL(Legs),
        MATERIAL(ODST)};

    class ItemInfo : ItemInfo {
        hiddenSelections[] = {VEST_SELECTIONS_STANDARD, "A_Ghillie"};
    };
};
