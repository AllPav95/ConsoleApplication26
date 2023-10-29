#pragma once
#include "MaterialBase.h"

class Steel : public MaterialBase {
public:
    Steel(
        const std::string& type = "Steel",
        const std::string& color = "Gray",
        double hardness = 200.0,
        double weight = 7.8,
        double meltingPoint = 1510.0,
        double conductivity = 45.0,
        double density = 10.0);
   
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