#include "Ammunition.h" 

Ammunition::Ammunition(const std::string& type, int capacity, double weight)
    : type_(type), capacity_(capacity), weight_(weight) {}

std::string Ammunition::getType() const {
    return type_;
}

int Ammunition::getCapacity() const {
    return capacity_;
}

double Ammunition::getWeight() const {
    return weight_;
}
