#include "octagon.h"

// Определение конструктора класса Octagon.
Octagon::Octagon(double side) : side(side) {}

// Реализация функции для вычисления площади восьмиугольника.
double Octagon::Area() const {
    return 2.0 * side * side * (1.0 + sqrt(2.0));
}

// Реализация функции для вычисления периметра восьмиугольника.
double Octagon::Perimeter() const {
    return 8.0 * side;
}

// Реализация функции для получения имени фигуры (в данном случае, "Восьмиугольник").
std::string Octagon::Name() const {
    return "Восьмиугольник";
}
