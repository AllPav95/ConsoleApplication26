#pragma once
#include "MaterialBase.h"
#include "Material.h"

class Material : public MaterialBase {
public:
    Material(const std::string& type, const std::string& color, double hardness, double weight, double meltingPoint, double conductivity, double density, double moistureContent, double quality)
        : MaterialBase(type, color, hardness, weight, meltingPoint, conductivity, density, moistureContent, quality) {}

    std::string getType() const;
    std::string getColor() const;

    double getHardness() const;
    double getWeight() const;
    double getMeltingPoint() const;
    double getConductivity() const;
    double getDensity() const;
    double getMoistureContent() const;
    double getQuality() const;
};