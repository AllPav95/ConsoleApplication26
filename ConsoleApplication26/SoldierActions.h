#pragma once
#include "Soldier.h"

class SoldierActions :
    public Soldier
{
   
public:
    virtual void walk() = 0;
    virtual void jump() = 0;
};