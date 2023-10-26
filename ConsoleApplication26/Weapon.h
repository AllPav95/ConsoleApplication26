#pragma once
#include <string>

class Weapon {
public:
    Weapon(const std::string& type, int damage, double weight);

    virtual std::string getType() const;
    virtual int getDamage() const;
    virtual double getWeight() const;

private:
    std::string type_;
    int damage_;
    double weight_;
};
