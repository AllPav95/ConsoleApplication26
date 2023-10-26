#include "Wood.h"

Wood::Wood()
    : MaterialBase("Wood", "Brown", 1.0, 0.6, 0.7, 10.0) {
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
#include "pch.h"