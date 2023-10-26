#include <stdio.h>
#include "pch.h"
#include "framework.h"
#include "../ConsoleApplication26/Weapon.h"


void fnStaticLib2(const Weapon& weapon)
{
    printf("Weapon: %s\n", weapon.getType().c_str());
    printf("Damage: %d\n", weapon.getDamage());
    printf("Weight: %.2f kg\n", weapon.getWeight());
}