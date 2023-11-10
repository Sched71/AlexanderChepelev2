#include "rhombus.h"

// Определение конструктора класса Rhombus.
Rhombus::Rhombus(double diagonal1, double diagonal2) : diagonal1(diagonal1), diagonal2(diagonal2) {}

// Реализация функции для вычисления площади ромба.
double Rhombus::Area() const {
    return 0.5 * diagonal1 * diagonal2;
}

// Реализация функции для вычисления периметра ромба.
double Rhombus::Perimeter() const {
    return 4.0 * sqrt(pow(diagonal1 / 2.0, 2) + pow(diagonal2 / 2.0, 2));
}

// Реализация функции для получения имени фигуры (в данном случае, "Ромб").
std::string Rhombus::Name() const {
    return "Ромб";
}
