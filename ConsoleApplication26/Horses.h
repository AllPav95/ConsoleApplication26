#pragma once
#include <string>

class Horse {
public:
    Horse(const std::string& name, int age, const std::string& breed, double weight);

    std::string getName() const;
    int getAge() const;
    std::string getBreed() const;
    double getWeight() const;

private:
    std::string name_;
    int age_;
    std::string breed_;
    double weight_;
};