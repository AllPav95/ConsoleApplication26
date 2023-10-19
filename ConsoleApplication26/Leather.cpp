
#include "Leather.h"


Leather::Leather()
    : MaterialBase("Leather", "Brown", 50.0, 60.0, 5.0) {
}

Leather::Leather(const std::string& type, const std::string& color, double hardness, double weight, double quality)
    : MaterialBase(type, color, hardness, weight, quality) {
}

std::string Leather::getType() const
{
    return type_;
}

std::string Leather::getColor() const
{
    return color_;
}

double Leather::getHardness() const {
    return hardness_;
}

double Leather::getWeight() const {
    return weight_;
}


double Leather::getQuality() const {
    return quality_;
}