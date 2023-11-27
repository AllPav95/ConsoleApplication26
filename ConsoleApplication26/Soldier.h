#pragma once
#include "Ammunition.h"
#include "ISoldier.h"
#include "ISoldierActions.h"
#include "Weapon.h"
#include <string>

class Soldier : public ISoldier, public ISoldierActions {
public:
    Soldier(const std::string& n, int a, const std::string& r, float x = 0.0f, float y = 0.0f);
    Soldier() = default;
    Soldier(float x, float y) : x(x), y(y){}
    void report() const;
    void performDuty() override;
    void walk() override;
    void jump() override;
    void setWeapon(const Weapon& weapon);
    Weapon getWeapon() const;

    void setAmmunition(const Ammunition& ammunition);
    Ammunition getAmmunition() const;
     

    float getX() const { return x; }
    float getY() const { return y; }

private:
    std::string name;
    int age;
    std::string rank;
    float x, y;
    Weapon weapon;
    Ammunition ammunition;
 };   
