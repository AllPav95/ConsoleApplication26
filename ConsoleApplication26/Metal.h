#pragma once
#include "MaterialBase.h"
#include "../StaticLib1/StaticLib1.cpp"

class Metal : public MaterialBase {
public:
    Metal();
    Metal(const std::string& type, const std::string& color, double hardness, double weight, double meltingPoint, double conductivity, double density)
    : MaterialBase(type, color, hardness, weight, meltingPoint, conductivity, density) {} 
    
    std::string getType() const;
    std::string getColor() const;

    double getHardness() const;
    double getWeight() const;
    double getMeltingPoint() const;
    double getConductivity() const;
    double getDensity() const;

 private:
    std::string type_;
    std::string color_;
    double hardness_;
    double weight_;
    double meltingPoint_;
    double conductivity_;
    double density_;
      
};
    