#pragma once
#include <string>

class Ammunition {
public:
    Ammunition(const std::string& type, int capacity, double weight);
    Ammunition() : type_("Unknown"), capacity_(0), weight_(0.0) {}
    
    std::string getType() const;
    int getCapacity() const;
    double getWeight() const;

private:
    std::string type_;
    int capacity_;
    double weight_;
};