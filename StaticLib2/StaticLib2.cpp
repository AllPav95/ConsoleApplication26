#include <stdio.h>
#include <vector>
#include "pch.h"
#include "framework.h"
#include "../ConsoleApplication26/Weapon.h"

void fnStaticLib2(const std::vector<Weapon>& weapons)
{
    printf("Weapon information:\n");

    for (const Weapon& weapon : weapons) {
        printf("Weapon Type: %s\n", weapon.getType().c_str());
        printf("Weapon Damage: %d\n", weapon.getDamage());
        printf("Weapon Weight: %f\n", weapon.getWeight());
        printf("\n");
    }
}