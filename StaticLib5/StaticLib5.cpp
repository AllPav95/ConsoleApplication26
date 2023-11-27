#include "pch.h"
#include <iostream>
#include <cstdio>

#include "../ConsoleApplication26/Horses.h"

void fnStaticLib5(const std::string & name, int age, const std::string & breed, double weight){
    printf("Horse Name: %s\n", name.c_str());
    printf("Age: %d years\n", age);
    printf("Breed: %s\n", breed.c_str());
    printf("Weight: %.2f kg\n", weight);
          
 }