#pragma once
#include <iostream>
#include <string>
#include "Weapon.h"

class Soldier {
private:
    std::string name;
    int age;
    std::string rank;
    Weapon weapon_;

public: 
    Soldier(const std::string& n, int a, const std::string& r, const Weapon& weapon)
        : name(n), age(a), rank(r), weapon_(weapon){}
    void report();
    
};