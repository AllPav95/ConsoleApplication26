#pragma once
#include "MaterialBase.h"

class Steel : public MaterialBase {
private:
    std::string type_;
    std::string color_;
    double hardness_;
    double weight_;   
    double meltingPoint_;
    double conductivity_;

public:
    Steel();
    Steel(const std::string& type, const std::string& color, double hardness, double weight, double meltingPoint, double conductivity)
        : MaterialBase(type, color, hardness, weight, meltingPoint, conductivity) {}
    
    std::string getType() const;
    std::string getColor() const;
    
    double getHardness() const;
    double getWeight() const;
    double getMeltingPoint() const;
    double getConductivity() const;
    
};