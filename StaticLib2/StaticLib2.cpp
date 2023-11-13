#include "pch.h"
#include <iostream>

#include <stdio.h>
#include <vector>

#include "../ConsoleApplication26/Weapon.h"

void fnStaticLib2(const std::vector<Weapon>& weapons)
{
    printf("Weapon information:\n");

    for (const Weapon& weapon : weapons) {
        printf("Weapon Type: %.2s\n", weapon.getType().c_str());
        printf("Weapon Damage: %.2d\n", weapon.getDamage());
        printf("Weapon Weight: %.2f\n", weapon.getWeight());
        printf("\n");
    }
}
