#pragma once
#include "MaterialBase.h"

class Leather final: public MaterialBase {

public:
    Leather();
    Leather(const std::string& type, const std::string& color, double hardness, double weight, double quality)
        : MaterialBase(type, color, hardness, weight, quality) {}

    std::string getType() const;
    std::string getColor() const;

    double getHardness() const;
    double getWeight() const;
    double getQuality() const;
private:
    std::string type_;
    std::string color_;
    double hardness_;
    double weight_;
    double quality_;
    
};