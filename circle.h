#pragma once

#include "shape.h"

class Circle : public Shape {
public:
    Circle(double radius);
    double Area() const override;
    double Perimeter() const override;
    std::string Name() const override;

private:
    double radius;
};