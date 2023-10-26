#include "Steel.h"

Steel::Steel()
    : MaterialBase("Steel", "Gray", 200.0, 7.8, 1510.0, 45.0, 10.0) {
}

Steel::Steel(const std::string& type, const std::string& color, double hardness, double weight, double meltingPoint, double conductivity)
    : MaterialBase(type, color, hardness, weight, meltingPoint, conductivity, density) {
}


std::string Steel::getType() const
{
    return type_;
}

std::string Steel::getColor() const
{
    return color_;
}

double Steel::getHardness() const {
    return hardness_;
}

double Steel::getWeight() const {
    return weight_;
}

double Steel::getMeltingPoint() const {
    return meltingPoint_;
}

double Steel::getConductivity() const {
    return conductivity_;
}
double Steel::getDensity() const
{
    return density_;
}
#include "pch.h"