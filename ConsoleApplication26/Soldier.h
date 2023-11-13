#pragma once
#include <string>
#include "ISoldier.h"
#include "ISoldierActions.h"
#include "Ammunition.h"
#include "Weapon.h"

class Soldier : public ISoldier, public ISoldierActions {
public:
    Soldier(const std::string& n, int a, const std::string& r);
    
    void report() const;
    void performDuty() override;
    void walk() override;
    void jump() override;
   
    Soldier() = default;
   
private:
    std::string name;
    int age;
    std::string rank;
    
 };   
