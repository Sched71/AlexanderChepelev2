#include "trapezoid.h"

// Определение конструктора класса Trapezoid.
Trapezoid::Trapezoid(double base1, double base2, double height) : base1(base1), base2(base2), height(height) {}

// Реализация функции для вычисления площади трапеции.
double Trapezoid::Area() const {
    return 0.5 * (base1 + base2) * height;
}

// Реализация функции для вычисления периметра трапеции.
double Trapezoid::Perimeter() const {
    // Периметр трапеции не вычисляется, так как он не однозначно определен (трапеция может быть различных форм).
    return 0.0;
}

// Реализация функции для получения имени фигуры (в данном случае, "Трапеция").
std::string Trapezoid::Name() const {
    return "Трапеция";
}
