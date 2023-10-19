#include "Soldier.h"
#include "Weapon.h"

Soldier::Soldier(const std::string& n, int a, const std::string& r, const Weapon& weapon)
    : name(n), age(a), rank(r), weapon_(weapon) {}

void Soldier::report() {
    std::cout << "Soldier " << name << ", age: " << age << ", rank: " << rank << std::endl;
    std::cout << "Weapon: " << weapon_.getType() << ", Damage: " << weapon_.getDamage() << ", Weight: " << weapon_.getWeight() << " kg " << std::endl;
}
