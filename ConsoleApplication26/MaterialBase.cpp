
#include "MaterialBase.h"

MaterialBase::MaterialBase(const std::string& type, const std::string& color, double hardness, double weight, double meltingPoint, double conductivity, double density, double softness, double state)
    : type_(type), color_(color), hardness_(hardness), weight_(weight), meltingPoint_(meltingPoint), conductivity_(conductivity), density_(density), moistureContent_(0), quality_(0), softness_(softness), state_(state) {}

std::string MaterialBase::getType() const {
    return type_;
}

std::string MaterialBase::getColor() const {
    return color_;
}

double MaterialBase::getHardness() const {
    return hardness_;
}

double MaterialBase::getWeight() const {
    return weight_;
}

double MaterialBase::getMeltingPoint() const {
    return meltingPoint_;
}

double MaterialBase::getConductivity() const {
    return conductivity_;
}

double MaterialBase::getDensity() const {
    return density_;
}

double MaterialBase::getMoistureContent() const {
    return moistureContent_;
}

double MaterialBase::getQuality() const {
    return quality_;
}
double MaterialBase::getSoftness() const
{
    return softness_;
}

double MaterialBase::getState() const
{
    return state_;
}

inline void MaterialBase::setType(const std::string& type)
{
    type_ = type;
}

inline void MaterialBase::setHardness(double hardness)
{
    hardness_ = hardness;
}

inline void MaterialBase::setWeight(double weight)
{
    weight_ = weight;
}
