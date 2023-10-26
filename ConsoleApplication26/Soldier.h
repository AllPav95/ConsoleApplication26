#pragma once
#include <iostream>
#include <string>
#include "Weapon.h"
#include "SoldierActions.h"

class Soldier : public SoldierActions {
public:
    Soldier(const std::string& n, int a, const std::string& r, const Weapon& weapon)
        : name(n), age(a), rank(r), weapon_(weapon) {}

    void report() const;

    void walk() override {
        std::cout << "Soldier " << name << " is walking." << std::endl;
    }

private:
    std::string name;
    int age;
    std::string rank;
    Weapon weapon_;
public:

    Soldier() = default;
};