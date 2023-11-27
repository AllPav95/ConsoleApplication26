#pragma once

#include <string>


class Horse {
public:
    Horse(const std::string& name, int age, const std::string& breed, double weight, float x, float y);

    std::string getName() const;
    int getAge() const;
    std::string getBreed() const;
    double getWeight() const;
    float getX() const;
    float getY() const;

private:
    std::string name_;
    int age_;
    std::string breed_;
    double weight_;
    float x_;
    float y_;
};