#pragma once

#include <string>

class Shape {
public:
    virtual double Area() const = 0;
    virtual double Perimeter() const = 0;
    virtual std::string Name() const = 0;
    virtual ~Shape() {}
};
