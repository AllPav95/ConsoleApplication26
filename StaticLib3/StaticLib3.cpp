#include "pch.h"
#include <iostream>
#include <cstdio>
#include <vector>

#include "../ConsoleApplication26/Ammunition.h"
#include "../ConsoleApplication26/Weapon.h"


void fnStaticLib3(const std::vector <Ammunition>& ammunition, const std::vector<Weapon> weapons) { 
    printf("Ammunition information: \n");
    for (const Ammunition& ammo : ammunition) {
        printf("Ammunition Type: %s\n", ammo.getType().c_str());
        printf("Ammunition Capacity: %d\n", ammo.getCapacity());
        printf("Ammunition Weight: %f\n", ammo.getWeight());
    }
    printf("Weapon information: \n");
    for (const Weapon& weapon : weapons) {
        printf("Weapon Type: %s\n", weapon.getType().c_str());
        printf("Weapon Damage: %d\n", weapon.getDamage());
        printf("Weapon Weight: %f\n", weapon.getWeight());
    }
}
