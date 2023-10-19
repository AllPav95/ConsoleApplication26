#include "Wood.h"


Wood::Wood()
    : MaterialBase("Wood", "Brown", 55.0, 120.0, 40.0) {
}

Wood::Wood(const std::string& type, const std::string& color, double hardness, double weight, double density, double moistureContent)
    :MaterialBase(type, color, hardness, weight, moistureContent) {}


std::string Wood::getType() const
{
    return type_;
}

std::string Wood::getColor() const
{
    return color_;
}

double Wood::getHardness() const {
    return hardness_;
}
double Wood::getDensity() const {
    return density_;
}

double Wood::getMoistureContent() const {
    return moistureContent_;
}