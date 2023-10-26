#include "Soldier.h"
#include "Weapon.h"

Soldier::Soldier(const std::string& n, int a, const std::string& r, const Weapon& weapon)
    : name(n), age(a), rank(r), weapon_(weapon) {}

void Soldier::report() const {
    std::cout << "Soldier: " << name << std::endl;
    std::cout << "Age: " << age << " years" << std::endl;
    std::cout << "Rank: " << rank << std::endl;
    std::cout << "Weapon: " << weapon_.getType() << std::endl;
    std::cout << "Weapon Damage: " << weapon_.getDamage() << std::endl;
    std::cout << "Weapon Weight: " << weapon_.getWeight() << " kg" << std::endl;
    
}
void Soldier::walk() {
    std::cout << "Soldier " << name << " is walking." << std::endl;
}
#include "pch.h"