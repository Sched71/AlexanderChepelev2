#include "circle.h"

Circle::Circle(double radius) : radius(radius) {}

double Circle::Area() const {
    return 3.141592653589793238 * radius * radius;
}

double Circle::Perimeter() const {
    return 2.0 * 3.141592653589793238 * radius;
}

std::string Circle::Name() const {
    return "Круг";
}