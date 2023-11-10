#include "triangle.h"
#include <cmath>

// Определение конструктора класса Triangle.
Triangle::Triangle(double a, double b, double c) : sideA(a), sideB(b), sideC(c) {}

// Реализация функции для вычисления площади треугольника по формуле Герона.
double Triangle::Area() const {
    double s = (sideA + sideB + sideC) / 2.0;
    return sqrt(s * (s - sideA) * (s - sideB) * (s - sideC));
}

// Реализация функции для вычисления периметра треугольника.
double Triangle::Perimeter() const {
    return sideA + sideB + sideC;
}

// Реализация функции для получения имени фигуры (в данном случае, "Треугольник").
std::string Triangle::Name() const {
    return "Треугольник";
}
