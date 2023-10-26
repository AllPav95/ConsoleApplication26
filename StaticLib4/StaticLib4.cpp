#include <cstdio>
#include "pch.h"
#include "framework.h"
#include "../ConsoleApplication26/Weapon.h"
#include "../ConsoleApplication26/Soldier.h"
#include "SoldierActions.h"

void fnStaticLib4(const char* n, int a, const char* r, const Soldier& soldier, const Weapon& weapon) {
    printf("Soldier: %s\n", n);
    printf("Age: %d years\n", a);
    printf("Rank: %s\n", r);
    printf("Weapon: %s\n", weapon.getType().c_str());
    printf("Weapon Damage: %d\n", weapon.getDamage());
    printf("Weapon Weight: %.2f kg\n", weapon.getWeight());

}