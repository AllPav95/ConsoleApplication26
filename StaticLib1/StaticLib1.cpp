#pragma once 
#include "pch.h"

#include <vector>


#include "../ConsoleApplication26/MaterialBase.h"



void fnStaticLib1(const std::vector<MaterialBase*>& materials)
{
    printf("Material information:\n");
    for (const MaterialBase* material : materials) {
        printf("Material Type: %.2s\n", material->getType().c_str());
        printf("Material Color: %.2s\n", material->getColor().c_str());
        printf("Material Hardness: %.2f\n", material->getHardness());
        printf("Material Weight: %.2f\n", material->getWeight());
        printf("Material MeltingPoint: %.2f\n", material->getMeltingPoint());
        printf("Material Conductivity: %.2f\n", material->getConductivity());
        printf("Material Density: %.2f\n", material->getDensity());
        printf("Material MoistureContent: %.2f\n", material->getMoistureContent());
        printf("Material Quality: %.2f\n", material->getQuality());
        printf("Material Softness: %.2f\n", material->getSoftness());
        printf("Material State: %.2f\n", material->getState());
    }
}
