#include "Wood.h"

Wood::Wood(
    const std::string& type,
    const std::string& color,
    double hardness,
    double weight,
    double density,
    double moistureContent,
    double state
)
    : MaterialBase(type, color, hardness, weight, density, moistureContent, state) {
}

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

double Wood::getState() const
{
    return state_;
}