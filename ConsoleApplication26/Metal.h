#pragma once
#include "MaterialBase.h"
#include "../StaticLib1/StaticLib1.cpp"

class Metal : public MaterialBase {
public:
    Metal(
        const std::string& type = "Metal",
        const std::string& color = "Gray",
        double hardness = 60.0,
        double weight = 2.7,
        double meltingPoint = 660.0,
        double conductivity = 62.0,
        double density = 7.0
    );

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
    