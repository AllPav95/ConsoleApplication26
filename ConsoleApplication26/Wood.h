#pragma once
#include "MaterialBase.h"

class Wood : public MaterialBase {
private:
    std::string type_;
    std::string color_;
    double hardness_;
    double weight_;
    double density_;
    double moistureContent_;

public:
    Wood();
    Wood(const std::string& type, const std::string& color, double hardness, double weight, double density, double moistureContent)
        : MaterialBase(type, color, hardness, weight, density, moistureContent) {}

    std::string getType() const;
    std::string getColor() const;
    double getHardness() const;
    double getDensity() const;
    double getMoistureContent() const;
    
};