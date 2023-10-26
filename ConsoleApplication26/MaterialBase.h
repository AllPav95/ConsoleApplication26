#pragma once
#include <string>


class MaterialBase {
public:
    virtual void initializeMaterial(const std::string& type, const std::string& color, double hardness, double weight, double meltingPoint, double conductivity, double density, double moistureContent, double quality){
        type_ = type;
        color_ = color;
        hardness_ = hardness;
        weight_ = weight;
        meltingPoint_ = meltingPoint;
        conductivity_ = conductivity;
        density_ = density;
        moistureContent_ = moistureContent;
        quality_ = quality;

 }   
    virtual const char* getInfoAsString() const;
    virtual std::string getType() const;
    virtual std::string getColor() const;
    virtual double getHardness() const;
    virtual double getWeight() const;
    virtual double getMeltingPoint() const;
    virtual double getConductivity() const;
    virtual double getDensity() const;
    virtual double getMoistureContent() const;
    virtual double getQuality() const;
    virtual void setType(const std::string& type);
    virtual void setHardness(double hardness);
    virtual void setWeight(double weight);
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
};

/* MaterialBase(const std::string & type, const std::string & color, double hardness, double weight, double meltingPoint, double conductivity, double density);
    MaterialBase(const std::string& type, const std::string& color, double hardness, double weight, double quality);
    MaterialBase(const std::string& type, const std::string& color, double hardness, double weight, double moistureContent);*/