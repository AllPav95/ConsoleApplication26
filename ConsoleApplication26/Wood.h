#pragma once
#include "MaterialBase.h"

class Wood : public MaterialBase {
public:
    Wood();
    Wood(const std::string& type, const std::string& color, double hardness, double weight, double density, double moistureContent, double state)
        : MaterialBase(type, color, hardness, weight, density, moistureContent, state) {}

    std::string getType() const;
    std::string getColor() const;
    double getHardness() const;
    double getDensity() const;
    double getMoistureContent() const;
    double getState() const;
 private:
    std::string type_;
    std::string color_;
    double hardness_;
    double weight_;
    double density_;
    double moistureContent_;
    double state_;
};