#include <iostream>
#include "MaterialBase.h"
#include "Material.h"
#include "Steel.h"
#include "Metal.h"
#include "Leather.h"
#include "Wood.h"
#include "Ammunition.h"
#include "Weapon.h"
#include "Soldier.h"
#include "Horses.h"
#include <vector>
#include "../StaticLib1/StaticLib1.cpp"
#include "../StaticLib2/StaticLib2.cpp"
#include "../StaticLib3/StaticLib3.cpp"
#include "../StaticLib4/StaticLib4.cpp"
#include "../StaticLib5/StaticLib5.cpp"
#include "SoldierActions.h"

int main() {
    Material steel("Steel", "Gray", 200.0, 7.8, 1510.0, 45.0, 10.0);
    Material metal("Metal", "Silver", 60.0, 2.7, 660.0, 62.0, 7.0);
    Material leather("Leather", "Brown", 2.0, 1.0, 3.0, 5.0, 7.0);
    Material wood("Wood", "Brown", 1.0, 0.6, 0.7, 10.0, 100.0);
    
    std::vector<MaterialBase*> materials;
    std::vector<MaterialBase*> materials;
    materials.push_back(&steel);
    materials.push_back(&metal);
    materials.push_back(&leather);
    materials.push_back(&wood);
   
    fnStaticLib1(materials);
    
    std::vector<Weapon> weapons;
    weapons.push_back(Weapon("AK-47", 30, 4.5));
    weapons.push_back(Weapon("M16", 20, 4.0));

    fnStaticLib2(weapons);

    std::vector<Ammunition> ammunition;
    
    fnStaticLib3(ammunition, weapons);

    std::vector<Soldier> soldiers;
    soldiers.push_back(Soldier("Johnson", 25, "Private", weapons[0]));
    soldiers.push_back(Soldier("Smith", 30, "Sergeant", weapons[1]));
    for (const Soldier& soldier : soldiers) {
        soldier.report();
    }
    Soldier soldier("John", 35, "Captain", weapons[2]);

    SoldierActions* soldierPtr = &soldier;
    soldierPtr->walk();

    fnStaticLib4("John", 35, "Captain", soldiers[0]);
    fnStaticLib5("HorseName", 5, "Breed", 600.0, Horse("HorseName", 5, "Breed", 600.0));

    for (MaterialBase* material : materials) {
        delete material;
    }

    return 0;
}