#define CLASSES_WEAPONS \
    QTERMINAL(Scarlet), \
    "SWS_Weapon_LaserDesignator", \
    "SWS_NVG_NeuralLace", \
    "SWS_NVG_NeuralLace_Maid"

class CfgWeapons {
    class B_UavTerminal;
    class LaserDesignator_Mounted;
    class OPTRE_NVG;

    class TERMINAL(Scarlet): B_UavTerminal {
        ITEM_META(2);
        CLEARANCE(SECRET/DECWHI);
        _generalMacro = QTERMINAL(Uav);
        displayName = QNAME(SCARLET);
        descriptionShort = "System Calibration and Arsenal Retasking Light Engineering Terminal.";
        model = "\a3\Props_F_Enoch\Military\Equipment\Laptop_03_F.p3d";
        picture = QPATHTOF(data\terminal_scarlet_ca.paa);
        hiddenSelectionsTextures[] = {"a3\Props_F_Enoch\Military\Equipment\data\Laptop_03_black_CO.paa"};

        ACE_explosives_triggerType = "Command";
        ACE_explosives_range = 1000;
        ace_explosives_detonator = 1;
    };

    class SWS_Weapon_LaserDesignator : LaserDesignator_Mounted {
        ITEM_META(2);
        CLEARANCE(SECRET/DECWHI);
        displayName = QNAME(Laser Designator);
        cursor = "EmptyCursor";
		cursorAim = "EmptyCursor";
		nameSound = "laserdesignator";
		minRange = 1;
		minRangeProbab = 0.01;
		midRange = 2;
		midRangeProbab = 0.01;
		maxRange = 3;
		maxRangeProbab = 0.01;
    };

    class SWS_NVG_NeuralLace : OPTRE_NVG {
        ITEM_META(2);
        CLEARANCE(RESTRICTED/DECWHI);
        displayName = QNAME(Neural Lace);
        descriptionShort = "Neural implant thermal and NVGs.";
        modelOptics = "";
        model = "";
        visionMode[] = {"Normal","NVG","TI"};
        thermalMode[] = {6};
        class ItemInfo {
            type = 616;
            uniformmodel = "";
            modelOff = "";
            mass = 0;
        };

        class XtdGearInfo {
            model = "SWS_Weapon_NVG_NeuralLace";
            clearance = "ODST";
        };
    };

    class SWS_NVG_NeuralLace_ONI : SWS_NVG_NeuralLace {
        ITEM_META(2);
        CLEARANCE(SECRET/DECWHI);
        displayName = QNAME(Neural Lace (ONI));
        descriptionShort = "ONI-classified neural implant.";
        thermalMode[] = {0};
        class XtdGearInfo : XtdGearInfo {
            clearance = "ONI";
        };
    };
};
