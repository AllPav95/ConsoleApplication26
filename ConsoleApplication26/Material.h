#pragma once
#include "MaterialBase.h"

class Material : public MaterialBase {
public:
    Material(const std::string& type, const std::string& color, double hardness, double weight, double meltingPoint, double conductivity, double density, double moistureContent, double quality, double softness, double state)
        : MaterialBase(type, color, hardness, weight, meltingPoint, conductivity, density, moistureContent, quality, softness, state) {}

    double getHardness() const;
    double getWeight() const;
    double getMeltingPoint() const;
    double getConductivity() const;
    double getDensity() const;
    double getMoistureContent() const;
    double getQuality() const;
    double getSoftness() const;
    double getState() const;
    std::string getType() const;
    std::string getColor() const;

private:
    std::string type_;
    std::string color_;
    double hardness_;
    double weight_;
    double meltingPoint_;
    double conductivity_;
    double density_;
    double moistureContent_;
    double quality_;
    double softness_;
    double state_;
};