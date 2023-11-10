#include "RegularHexagon.h"
#include <cmath>

// Определение конструктора класса RegularHexagon.
RegularHexagon::RegularHexagon(double side) : side(side) {}

// Реализация функции для вычисления площади правильного шестиугольника.
double RegularHexagon::Area() const {
    return (3.0 * sqrt(3.0) / 2.0) * pow(side, 2);
}

// Реализация функции для вычисления периметра правильного шестиугольника.
double RegularHexagon::Perimeter() const {
    return 6.0 * side;
}

// Реализация функции для получения имени фигуры (в данном случае, "Правильный шестиугольник").
std::string RegularHexagon::Name() const {
    return "Правильный шестиугольник";
}
