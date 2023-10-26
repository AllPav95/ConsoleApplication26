#pragma once
#include <string>

class Ammunition {
public:
    Ammunition(const std::string& type, int capacity, double weight);

    std::string getType() const;
    int getCapacity() const;
    double getWeight() const;

private:
    std::string type_;
    int capacity_;
    double weight_;
};