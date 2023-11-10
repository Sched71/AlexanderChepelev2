#include "hexagon.h"

// Определение конструктора класса Hexagon.
Hexagon::Hexagon(double side) : side(side) {}

// Реализация функции для вычисления площади шестиугольника.
double Hexagon::Area() const {
    return 1.5 * sqrt(3.0) * side * side;
}

// Реализация функции для вычисления периметра шестиугольника.
double Hexagon::Perimeter() const {
    return 6.0 * side;
}

// Реализация функции для получения имени фигуры (в данном случае, "Шестиугольник").
std::string Hexagon::Name() const {
    return "Шестиугольник";
}
