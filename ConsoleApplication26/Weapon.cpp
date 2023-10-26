#include "Weapon.h"
#include <string>

    
Weapon::Weapon(const std::string& type, int damage, double weight)
    : type_(type), damage_(damage), weight_(weight) {}


std::string Weapon::getType() const {
    return type_;
}

int Weapon::getDamage() const {
    return damage_;
}
double Weapon::getWeight() const {
    return weight_;
}
#include "pch.h"