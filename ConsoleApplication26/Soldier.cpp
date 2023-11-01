#include <iostream>
#include <string>
#include "Soldier.h"


Soldier::Soldier(const std::string& n, int a, const std::string& r)
    : name(n), age(a), rank(r) {}

void Soldier::report() const {
    std::cout << "Soldier: " << name << std::endl;
    std::cout << "Age: " << age << " years" << std::endl;
    std::cout << "Rank: " << rank << std::endl;

}

void Soldier::performDuty()
{
    std::cout << "Soldier " << name << " is performing his duty." << std::endl;
}

void Soldier::walk() {
    std::cout << "Soldier " << name << " is walking." << std::endl;
}
void Soldier::jump() {
    std::cout << "Soldier " << name << " is jumping." << std::endl;
}
#include "resource.h"
