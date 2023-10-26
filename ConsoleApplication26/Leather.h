#pragma once
#include "MaterialBase.h"

class Leather final: public MaterialBase {

public:
    Leather();
    Leather(const std::string& type, const std::string& color, double hardness, double weight, double quality, double softness, double moistureContent)
        : MaterialBase(type, color, hardness, weight, quality, softness, moistureContent) {}

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