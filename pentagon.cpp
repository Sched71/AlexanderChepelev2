#include "pentagon.h"
#include <cmath>

// Определение конструктора класса Pentagon.
Pentagon::Pentagon(double side) : side(side) {}

// Реализация функции для вычисления площади пятиугольника.
double Pentagon::Area() const {
    return 0.25 * sqrt(5.0 * (5.0 + 2.0 * sqrt(5.0))) * side * side;
}

// Реализация функции для вычисления периметра пятиугольника.
double Pentagon::Perimeter() const {
    return 5.0 * side;
}

// Реализация функции для получения имени фигуры (в данном случае, "Пятиугольник").
std::string Pentagon::Name() const {
    return "Пятиугольник";
}
