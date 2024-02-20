#define CATEGORY QNAME(Medical)
#define SUBCATEGORY "Common"

[
  QGVAR(biofoamTreatmentTime),
  "SLIDER",
  ["Biofoam Treatment Time", "Time, in seconds, required to inject biofoam into a patient."],
  [CATEGORY, SUBCATEGORY],
  [0.1, 60, 6, 1],
  true
] call CBA_fnc_addSetting;

[
  QGVAR(medigelTreatmentTime),
  "SLIDER",
  ["Medigel Treatment Time", "Time, in seconds, required to apply medigel to a patient."],
  [CATEGORY, SUBCATEGORY],
  [0.1, 60, 2, 1],
  true
] call CBA_fnc_addSetting;
