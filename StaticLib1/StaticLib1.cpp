#include <iostream>
#include "MaterialBase.h"
#include "Material.h"
#include "Steel.h"
#include "Metal.h"
#include "Leather.h"
#include "Wood.h"
#include <stdio.h>
#include "pch.h"
#include "framework.h"


void fnStaticLib1(
    const char* steelType, const char* steelColor, double steelHardness, double steelWeight, double steelMeltingPoint, double steelConductivity, double steelDensity,
    const char* metalType, const char* metalColor, double metalHardness, double metalWeight, double metalMeltingPoint, double metalConductivity, double metalDensity,
    const char* leatherType, const char* leatherColor, double leatherHardness, double leatherWeight, double leatherQuality, double leatherSoftness, double leatherMoistureContent,
    const char* woodType, const char* woodColor, double woodHardness, double woodWeight, double woodDensity, double woodMoistureContent
) {
    printf("Outlander properties:\n");
    printf("Steel: Type: %s, Color: %s, Hardness: %f, Weight : %f, MeltingPoint: %f, Conductivity: %f, Density: % f\n", steelType, steelColor, steelHardness, steelWeight, steelMeltingPoint, steelConductivity, steelDensity);
    printf("Metal: Type: %s, Color: %s,  Hardness: %f, Weight: %f, MeltingPoint: %f, Conductivity: %f, Density: %f g/cm^3\n", metalType, metalColor, metalHardness, metalWeight, metalMeltingPoint, metalConductivity, metalDensity);
    printf("Leather: Type: %s, Color: %s,  Hardness: %f, Weight: %f, Quality: %f, Softness: %f, MoistureContent: %f\n", leatherType, leatherColor, leatherHardness, leatherWeight, leatherQuality, leatherSoftness, leatherMoistureContent);
    printf("Wood: Type: %s, Color: %s, Hardness: %f, Weight: %f, Density: %f g/cm^3, MoistureContent: %f\n", woodType, woodColor, woodHardness, woodWeight, woodDensity, woodMoistureContent);
}