#pragma once
#include <string>

class MaterialBase {
protected:
    std::string type_;
    std::string color_;
    double hardness_;
    double weight_;
    double meltingPoint_;
    double conductivity_;
    double density_;
    double moistureContent_;
    double quality_;

public:
    MaterialBase(const std::string& type, const std::string& color, double hardness, double weight, double meltingPoint, double conductivity);
    MaterialBase(const std::string& type, const std::string& color, double hardness, double weight, double meltingPoint, double conductivity, double density);
    MaterialBase(const std::string& type, const std::string& color, double hardness, double weight, double quality);
    MaterialBase(const std::string& type, const std::string& color, double hardness, double weight, double moistureContent);

    std::string getType() const;
    std::string getColor() const;
    double getHardness() const;
    double getWeight() const;
    double getMeltingPoint() const;
    double getConductivity() const;
    double getDensity() const;
    double getMoistureContent() const;
    double getQuality() const;

    void setType(const std::string& type);
    void setHardness(double hardness);
    void setWeight(double weight);
};