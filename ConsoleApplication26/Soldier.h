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

    void report() {
        std::cout << "Soldier: " << name << std::endl;
        std::cout << "Age: " << age << " years" << std::endl;
        std::cout << "Rank: " << rank << std::endl;
        std::cout << "Weapon: " << weapon_.getType() << std::endl;
        std::cout << "Weapon Damage: " << weapon_.getDamage() << std::endl;
        std::cout << "Weapon Weight: " << weapon_.getWeight() << " kg" << std::endl;
    }
};








