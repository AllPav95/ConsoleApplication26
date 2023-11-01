#pragma once
#include "MaterialBase.h"

class Leather : public MaterialBase {
public:
    Leather(
        const std::string& type = "Leather",
        const std::string& color = "Brown",
        double hardness = 2.0,
        double weight = 1.0,
        double quality = 3.0,
        double softness = 5.0,
        double moistureContent = 7.0
    );

    std::string getType() const;
    std::string getColor() const;
    double getHardness() const;
    double getWeight() const;
    double getQuality() const;
    double getSoftness() const;
    double getMoistureContent() const;
private:
    std::string type_;
    std::string color_;
    double hardness_;
    double weight_;
    double quality_;
    double softness_;
    double moistureContent_;
};