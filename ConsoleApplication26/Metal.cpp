#include "Metal.h"


Metal::Metal()
    : MaterialBase("Metal", "Gray", 160.0, 220.0, 33.0, 66.0) {
}

Metal::Metal(const std::string& type, const std::string& color, double hardness, double weight, double meltingPoint, double conductivity, double density)
    : MaterialBase(type, color, hardness, weight, meltingPoint, conductivity, density) {
}

std::string Metal::getType() const
{
    return type_;
}

std::string Metal::getColor() const
{
    return color_;
}

double Metal::getHardness() const {
    return hardness_;
}

double Metal::getWeight() const {
    return weight_;
}

double Metal::getMeltingPoint() const {
    return meltingPoint_;
}

double Metal::getConductivity() const {
    return conductivity_;
}

double Metal::getDensity() const {
    return density_;
}
