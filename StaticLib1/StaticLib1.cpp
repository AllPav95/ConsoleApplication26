#pragma once 
#include "pch.h"

#include <vector>


#include "../ConsoleApplication26/MaterialBase.h"



void fnStaticLib1(const std::vector<MaterialBase*>& materials)
{
    printf("Material information:\n");
    for (const MaterialBase* material : materials) {
        printf("Material Type: %s\n", material->getType().c_str());
        printf("Material Color: %s\n", material->getColor().c_str());
        printf("Material Hardness: %f\n", material->getHardness());
        printf("Material Weight: %f\n", material->getWeight());
        printf("Material MeltingPoint: %f\n", material->getMeltingPoint());
        printf("Material Conductivity: %f\n", material->getConductivity());
        printf("Material Density: %f\n", material->getDensity());
        printf("Material MoistureContent: %f\n", material->getMoistureContent());
        printf("Material Quality: %f\n", material->getQuality());
        printf("Material Softness: %f\n", material->getSoftness());
        printf("Material State: %f\n", material->getState());
    }
}
