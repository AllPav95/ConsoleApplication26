#include "Soldier.h"
#include <iostream>
#include <string>


Soldier::Soldier(const std::string& n, int a, const std::string& r, float x, float y)
    : name(n), age(a), rank(r), x(x), y(y) {}


void Soldier::report() const {
    std::cout << "Soldier: " << name << std::endl;
    std::cout << "Age: " << age << " years" << std::endl;
    std::cout << "Rank: " << rank << std::endl;
    std::cout << "Position: (" << x << ", " << y << ")" << std::endl;

 }
void Soldier::setWeapon(const Weapon& weapon) {
    this->weapon = weapon;
}

Weapon Soldier::getWeapon() const {
    return weapon;
}

void Soldier::setAmmunition(const Ammunition& ammunition) {
    this->ammunition = ammunition;
}

Ammunition Soldier::getAmmunition() const {
    return ammunition;
}
void Soldier::performDuty()
{
    std::cout << "Soldier " << name << " is performing his duty." << std::endl;
}

void Soldier::walk()
{
    std::cout << "Soldier " << name << " is walking." << std::endl;
}
void Soldier::jump() 
{
    std::cout << "Soldier " << name << " is jumping." << std::endl;
}
