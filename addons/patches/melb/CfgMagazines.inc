class CfgMagazines {
	class 5000Rnd_762x51_Belt;
	class 500Rnd_127x99_Mag_Tracer_Red;
	class AGM_114K_MELB;

	class 6000Rnd_762x51_Belt_Red_MELB: 5000Rnd_762x51_Belt {
		muzzleImpulseFactor[] = {0,0.1};
	};

	class 1300Rnd_127x99_Mag_Tracer_Red_MELB: 500Rnd_127x99_Mag_Tracer_Red {
		muzzleImpulseFactor[] = {0,0.3};
	};

  /** Useless */
	class Pylon_AGM_114K_MELB: AGM_114K_MELB {
	  hardpoints[] = {"MELB_Disabled"};
	};
};
