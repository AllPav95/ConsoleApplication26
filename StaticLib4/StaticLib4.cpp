#include <cstdio>
#include "pch.h"
#include "framework.h"
#include "../ConsoleApplication26/Soldier.h"


void fnStaticLib4(const char* n, int a, const char* r, const Soldier& soldier) {
    printf("Soldier: %s\n", n);
    printf("Age: %d years\n", a);
    printf("Rank: %s\n", r);
   
}