#include <cstdio>
#include "StaticLib3.h"


void fnStaticLib3(const std::string& type, int capacity, double weight, const Weapon& weapon) {
    printf("Ammunition Type: %s\n", type.c_str());
    printf("Capacity: %d\n", capacity);
    printf("Weight: %.2f kg\n", weight);
    printf("Weapon: %s\n", weapon.getType().c_str());
    printf("Weapon Damage: %d\n", weapon.getDamage());
    printf("Weapon Weight: %.2f kg\n", weapon.getWeight());
}
