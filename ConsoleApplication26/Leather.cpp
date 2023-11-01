#include "Leather.h"

Leather::Leather(
    const std::string& type,
    const std::string& color,
    double hardness,
    double weight,
    double quality,
    double softness,
    double moistureContent
)
    : MaterialBase(type, color, hardness, weight, quality, softness, moistureContent) {
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

double Leather::getSoftness() const
{
    return softness_;
}

double Leather::getMoistureContent() const
{
    return moistureContent_;
}
#include "resource.h"