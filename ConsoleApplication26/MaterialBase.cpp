#include "MaterialBase.h"
#include "Material.h"
#include "Steel.h"
#include "Metal.h"
#include "Leather.h"
#include "Wood.h"

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

const char* MaterialBase::getInfoAsString() const
{
    return "MaterialBase Info";
}

double MaterialBase::getQuality() const {
    return quality_;
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
#include "pch.h"


/*
MaterialBase::MaterialBase(const std::string& type, const std::string& color, double hardness, double weight, double meltingPoint, double conductivity)
    : type_(type), color_(color), hardness_(hardness), weight_(weight), meltingPoint_(meltingPoint), conductivity_(conductivity) {}

MaterialBase::MaterialBase(const std::string& type, const std::string& color, double hardness, double weight, double meltingPoint, double conductivity, double density)
    : type_(type), color_(color), hardness_(hardness), weight_(weight), meltingPoint_(meltingPoint), conductivity_(conductivity), density_(density) {}

MaterialBase::MaterialBase(const std::string& type, const std::string& color, double hardness, double weight, double quality)
    : type_(type), color_(color), hardness_(hardness), weight_(weight), quality_(quality) {}

MaterialBase::MaterialBase(const std::string& type, const std::string& color, double hardness, double weight, double moistureContent)
    : type_(type), color_(color), hardness_(hardness), weight_(weight), moistureContent_(moistureContent) {}*/
