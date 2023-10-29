#pragma once
#include "MaterialBase.h"

class Wood : public MaterialBase {
public:
    Wood(
        const std::string& type = "Wood",
        const std::string& color = "Brown",
        double hardness = 1.0,
        double weight = 0.6,
        double density = 0.7,
        double moistureContent = 10.0,
        double state = 100.0
    );

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