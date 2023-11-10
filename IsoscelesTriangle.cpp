#include "IsoscelesTriangle.h"
#include <cmath>

// Определение конструктора класса IsoscelesTriangle.
IsoscelesTriangle::IsoscelesTriangle(double side, double base) : side(side), base(base) {}

// Реализация функции для вычисления площади равнобедренного треугольника.
double IsoscelesTriangle::Area() const {
    return 0.5 * base * sqrt(pow(side, 2) - pow(base / 2.0, 2));
}

// Реализация функции для вычисления периметра равнобедренного треугольника.
double IsoscelesTriangle::Perimeter() const {
    return 2.0 * side + base;
}

// Реализация функции для получения имени фигуры (в данном случае, "Равнобедренный треугольник").
std::string IsoscelesTriangle::Name() const {
    return "Равнобедренный треугольник";
}
