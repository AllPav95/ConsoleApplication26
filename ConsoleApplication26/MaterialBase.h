#pragma once
#include <string>

class MaterialBase {
public:
    MaterialBase(const std::string& type = "Unknown", const std::string& color = "Unknown", double hardness = 0.0, double weight = 0.0, double meltingPoint = -1.0, double conductivity = 0.0, double density = 0.0, double softness = 0.0, double state = 0.0);
   
    std::string getType() const;
    std::string getColor() const;
    double getHardness() const;
    double getWeight() const;
    double getMeltingPoint() const;
    double getConductivity() const;
    double getDensity() const;
    double getMoistureContent() const;
    double getQuality() const;
    double getSoftness() const;
    double getState() const;
    void setType(const std::string& type);
    void setHardness(double hardness);
    void setWeight(double weight);
private:
    std::string type_;
    std::string color_;
    double hardness_;
    double weight_;
    double meltingPoint_;
    double conductivity_;
    double density_;
    double moistureContent_;
    double quality_;
    double softness_;
    double state_;
};