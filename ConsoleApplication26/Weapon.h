#pragma once

#include <string>

class Weapon {
public:
    Weapon(const std::string& type, int damage, double weight);

    std::string getType() const;
    int getDamage() const;
    double getWeight() const;

private:
    std::string type_;
    int damage_;
    double weight_;
};
