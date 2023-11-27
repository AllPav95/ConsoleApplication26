#include "Horses.h"

Horse::Horse(const std::string& name, int age, const std::string& breed, double weight, float x, float y)
    : name_(name), age_(age), breed_(breed), weight_(weight), x_(x), y_(y) {}

std::string Horse::getName() const {
    return name_;
}

int Horse::getAge() const {
    return age_;
}

std::string Horse::getBreed() const {
    return breed_;
}

double Horse::getWeight() const {
    return weight_;
}

float Horse::getX() const {
    return x_;
}

float Horse::getY() const {
    return y_;
}
