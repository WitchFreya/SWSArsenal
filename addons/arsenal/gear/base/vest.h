#define VEST_DISPLAY_NAME(name) QUOTE([SWS] name's Armor)

class SWS_Vest_Base : OPTRE_UNSC_M52D_Armor
{
    dlc = "sws";
    author = "Maid";
    scope = 0;
    scopeCurator = 0;
    scopearsenal = 0;

    /** Armor Level is meaningless anyway... */
    descriptionShort = "Armor Level: ODST";

    hiddenSelectionsMaterials[] =
        {
            MATERIAL(Vest.rvmat),
            MATERIAL(Armor.rvmat),
            MATERIAL(Legs.rvmat),
            MATERIAL(ODST.rvmat)};
};

#define VEST(name, texVest, texArmor, texLegs, texGhillie, texAddons) \
    class SWS_Vest_##name : SWS_Vest_Base                             \
    {                                                                 \
        scope = 2;                                                    \
        scopeCurator = 2;                                             \
        scopeArsenal = 2;                                             \
        displayName = VEST_DISPLAY_NAME(name);                        \
        hiddenSelectionsTextures[] = {                                \
            texVest,                                                  \
            texArmor,                                                 \
            texLegs,                                                  \
            texGhillie,                                               \
            texAddons};                                               \
    };                                                                \
                                                                      \
    class SWS_Vest_##name##_Demolitions : SWS_Vest_##name             \
    {                                                                 \
        class ItemInfo : ItemInfo                                     \
        {                                                             \
            hiddenSelections[] =                                      \
                {                                                     \
                    "camo",                                           \
                    "camo2",                                          \
                    "camo3",                                          \
                    "camo4",                                          \
                    "camo5",                                          \
                    "A_KneesMarLeft",                                 \
                    "A_KneesMarRight",                                \
                    "A_Ghillie",                                      \
                    "A_TacPad",                                       \
                    "AS_LargeLeft",                                   \
                    "AS_LargeRight",                                  \
                    "AS_MediumLeft",                                  \
                    "AS_MediumRight",                                 \
                    "AS_ODSTLeft",                                    \
                    "AS_ODSTCQBRight",                                \
                    "AS_ODSTSniperLeft",                              \
                    "AS_ODSTSniperRight",                             \
                    "AS_SmallLeft",                                   \
                    "AS_SmallRight",                                  \
                    "AP_AR",                                          \
                    "AP_BR",                                          \
                    "AP_Canteen",                                     \
                    "AP_Knife",                                       \
                    "AP_MGThigh",                                     \
                    "AP_AR",                                          \
                    "AP_Pack",                                        \
                    "AP_Pistol",                                      \
                    "AP_Rounds",                                      \
                    "AP_SG",                                          \
                    "AP_SMG",                                         \
                    "AP_Sniper",                                      \
                    "AP_Thigh",                                       \
                    "AP_Frag",                                        \
                    "AP_Smoke",                                       \
                    "APO_AR",                                         \
                    "APO_BR",                                         \
                    "APO_Sniper",                                     \
                    "CustomKit_Scorch"};                              \
        };                                                            \
    };                                                                \
    class SWS_Vest_##name##_Sniper : SWS_Vest_##name                  \
    {                                                                 \
        class ItemInfo : ItemInfo                                     \
        {                                                             \
            hiddenSelections[] =                                      \
                {                                                     \
                    "camo",                                           \
                    "camo2",                                          \
                    "camo3",                                          \
                    "camo4",                                          \
                    "camo5",                                          \
                    "A_KneesMarLeft",                                 \
                    "A_KneesMarRight",                                \
                    "A_Ghillie",                                      \
                    "A_TacPad",                                       \
                    "AS_LargeLeft",                                   \
                    "AS_LargeRight",                                  \
                    "AS_MediumLeft",                                  \
                    "AS_MediumRight",                                 \
                    "AS_ODSTLeft",                                    \
                    "AS_ODSTRight",                                   \
                    "AS_ODSTCQBLeft",                                 \
                    "AS_ODSTCQBRight",                                \
                    "AS_ODSTSniperRight",                             \
                    "AS_SmallLeft",                                   \
                    "AS_SmallRight",                                  \
                    "AP_AR",                                          \
                    "AP_BR",                                          \
                    "AP_Canteen",                                     \
                    "AP_GL",                                          \
                    "AP_Knife",                                       \
                    "AP_MGThigh",                                     \
                    "AP_AR",                                          \
                    "AP_Pack",                                        \
                    "AP_Rounds",                                      \
                    "AP_SG",                                          \
                    "AP_SMG",                                         \
                    "AP_Sniper",                                      \
                    "AP_Thigh",                                       \
                    "AP_Frag",                                        \
                    "AP_Smoke",                                       \
                    "APO_AR",                                         \
                    "APO_BR",                                         \
                    "APO_SMG",                                        \
                    "CustomKit_Scorch"};                              \
        };                                                            \
    };                                                                \
    class SWS_Vest_##name##_Light : SWS_Vest_##name                   \
    {                                                                 \
        class ItemInfo : ItemInfo                                     \
        {                                                             \
            hiddenSelections[] =                                      \
                {                                                     \
                    "camo",                                           \
                    "camo2",                                          \
                    "camo3",                                          \
                    "camo4",                                          \
                    "camo5",                                          \
                    "A_KneesMarLeft",                                 \
                    "A_KneesMarRight",                                \
                    "A_Ghillie",                                      \
                    "AS_LargeLeft",                                   \
                    "AS_LargeRight",                                  \
                    "AS_MediumLeft",                                  \
                    "AS_MediumRight",                                 \
                    "AS_ODSTLeft",                                    \
                    "AS_ODSTRight",                                   \
                    "AS_ODSTCQBLeft",                                 \
                    "AS_ODSTCQBRight",                                \
                    "AS_ODSTSniperLeft",                              \
                    "AS_ODSTSniperRight",                             \
                    "AS_SmallLeft",                                   \
                    "AS_SmallRight",                                  \
                    "AP_AR",                                          \
                    "AP_BR",                                          \
                    "AP_Canteen",                                     \
                    "AP_GL",                                          \
                    "AP_Knife",                                       \
                    "AP_MGThigh",                                     \
                    "AP_AR",                                          \
                    "AP_Pack",                                        \
                    "AP_Rounds",                                      \
                    "AP_SG",                                          \
                    "AP_SMG",                                         \
                    "AP_Sniper",                                      \
                    "AP_Frag",                                        \
                    "AP_Smoke",                                       \
                    "APO_AR",                                         \
                    "APO_BR",                                         \
                    "APO_Knife",                                      \
                    "APO_SMG",                                        \
                    "APO_Sniper",                                     \
                    "CustomKit_Scorch"};                              \
        };                                                            \
    };                                                                \
    class SWS_Vest_##name##_Scout : SWS_Vest_##name                   \
    {                                                                 \
        class ItemInfo : ItemInfo                                     \
        {                                                             \
            hiddenSelections[] =                                      \
                {                                                     \
                    "camo",                                           \
                    "camo2",                                          \
                    "camo3",                                          \
                    "camo4",                                          \
                    "camo5",                                          \
                    "A_KneesMarLeft",                                 \
                    "A_KneesMarRight",                                \
                    "A_Ghillie",                                      \
                    "A_TacPad",                                       \
                    "AS_LargeLeft",                                   \
                    "AS_LargeRight",                                  \
                    "AS_MediumLeft",                                  \
                    "AS_MediumRight",                                 \
                    "AS_ODSTCQBLeft",                                 \
                    "AS_ODSTCQBRight",                                \
                    "AS_ODSTSniperLeft",                              \
                    "AS_ODSTSniperRight",                             \
                    "AS_SmallLeft",                                   \
                    "AS_SmallRight",                                  \
                    "AP_AR",                                          \
                    "AP_BR",                                          \
                    "AP_Canteen",                                     \
                    "AP_GL",                                          \
                    "AP_Knife",                                       \
                    "AP_MGThigh",                                     \
                    "AP_AR",                                          \
                    "AP_Pack",                                        \
                    "AP_Pistol",                                      \
                    "AP_Rounds",                                      \
                    "AP_SG",                                          \
                    "AP_SMG",                                         \
                    "AP_Sniper",                                      \
                    "AP_Thigh",                                       \
                    "AP_Frag",                                        \
                    "APO_AR",                                         \
                    "APO_BR",                                         \
                    "APO_Sniper",                                     \
                    "CustomKit_Scorch"};                              \
        };                                                            \
    };                                                                \
    class SWS_Vest_##name##_Rifleman : SWS_Vest_##name                \
    {                                                                 \
        class ItemInfo : ItemInfo                                     \
        {                                                             \
            hiddenSelections[] =                                      \
                {                                                     \
                    "camo",                                           \
                    "camo2",                                          \
                    "camo3",                                          \
                    "camo4",                                          \
                    "camo5",                                          \
                    "A_KneesMarLeft",                                 \
                    "A_KneesMarRight",                                \
                    "A_Ghillie",                                      \
                    "A_TacPad",                                       \
                    "AS_LargeLeft",                                   \
                    "AS_LargeRight",                                  \
                    "AS_MediumLeft",                                  \
                    "AS_MediumRight",                                 \
                    "AS_ODSTCQBLeft",                                 \
                    "AS_ODSTCQBRight",                                \
                    "AS_ODSTSniperLeft",                              \
                    "AS_ODSTSniperRight",                             \
                    "AS_SmallLeft",                                   \
                    "AS_SmallRight",                                  \
                    "AP_AR",                                          \
                    "AP_BR",                                          \
                    "AP_Canteen",                                     \
                    "AP_GL",                                          \
                    "AP_Knife",                                       \
                    "AP_MGThigh",                                     \
                    "AP_AR",                                          \
                    "AP_Pack",                                        \
                    "AP_Pistol",                                      \
                    "AP_Rounds",                                      \
                    "AP_SG",                                          \
                    "AP_SMG",                                         \
                    "AP_Sniper",                                      \
                    "AP_Thigh",                                       \
                    "APO_BR",                                         \
                    "APO_Knife",                                      \
                    "APO_SMG",                                        \
                    "APO_Sniper",                                     \
                    "CustomKit_Scorch"};                              \
        };                                                            \
    };                                                                \
    class SWS_Vest_##name##_Marksman : SWS_Vest_##name                \
    {                                                                 \
        class ItemInfo : ItemInfo                                     \
        {                                                             \
            hiddenSelections[] =                                      \
                {                                                     \
                    "camo",                                           \
                    "camo2",                                          \
                    "camo3",                                          \
                    "camo4",                                          \
                    "camo5",                                          \
                    "A_KneesMarLeft",                                 \
                    "A_KneesMarRight",                                \
                    "A_Ghillie",                                      \
                    "A_TacPad",                                       \
                    "AS_LargeLeft",                                   \
                    "AS_LargeRight",                                  \
                    "AS_MediumLeft",                                  \
                    "AS_MediumRight",                                 \
                    "AS_ODSTCQBLeft",                                 \
                    "AS_ODSTCQBRight",                                \
                    "AS_ODSTSniperLeft",                              \
                    "AS_ODSTSniperRight",                             \
                    "AS_SmallLeft",                                   \
                    "AS_SmallRight",                                  \
                    "AP_AR",                                          \
                    "AP_BR",                                          \
                    "AP_Canteen",                                     \
                    "AP_GL",                                          \
                    "AP_Knife",                                       \
                    "AP_MGThigh",                                     \
                    "AP_AR",                                          \
                    "AP_Pack",                                        \
                    "AP_Pistol",                                      \
                    "AP_Rounds",                                      \
                    "AP_SG",                                          \
                    "AP_SMG",                                         \
                    "AP_Sniper",                                      \
                    "APO_AR",                                         \
                    "APO_SMG",                                        \
                    "APO_Sniper",                                     \
                    "CustomKit_Scorch"};                              \
        };                                                            \
    }
