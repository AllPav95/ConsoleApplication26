#include <iostream>
#include "Steel.h"
#include "Metal.h"
#include "Leather.h"
#include "Wood.h"
#include "MaterialBase.h"
#include "Material.h"
#include "Soldier.h"
#include "Weapon.h"

int main() {
    Weapon ak47("AK-47", 30, 4.5);
    Soldier soldier("Johnson", 25, "Private", ak47);
    Steel steel;
    Metal metal;
    Leather leather;
    Wood wood;

    std::cout << "Sabre properties:" << std::endl;

    std::cout << "Steel: Type: " << steel.getType() << ", Color: " << steel.getColor() << ", Hardness: " << steel.getHardness() << ", Weight : " << steel.getWeight() << ", MeltingPoint: " << steel.getMeltingPoint() << ", Conductivity: " << steel.getConductivity() << std::endl;
    std::cout << "Metal: Type: " << metal.getType() << ", Color: " << metal.getColor() << ",  Hardness: " << metal.getHardness() << ", Weight: " << metal.getWeight() << ", Density: " << metal.getDensity() << " g/cm^3" << std::endl;
    std::cout << "Leather: Type: " << leather.getType() << ", Color: " << leather.getColor() << ",  Hardness: " << leather.getHardness() << ", Weight: " << leather.getWeight() << ", Quality: " << leather.getQuality() << std::endl;
    std::cout << "Wood: Type: " << wood.getType() << ", Color: " << wood.getColor() << ", Hardness: " << wood.getHardness() << ", Weight: " << wood.getWeight() << ", MoistureContent: " << wood.getMoistureContent() << std::endl;
    soldier.report();

    return 0;
}