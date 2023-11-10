#include "parallelogram.h"

// Определение конструктора класса Parallelogram.
Parallelogram::Parallelogram(double base, double height) : base(base), height(height) {}

// Реализация функции для вычисления площади параллелограмма.
double Parallelogram::Area() const {
    return base * height;
}

// Реализация функции для вычисления периметра параллелограмма.
double Parallelogram::Perimeter() const {
    return 2.0 * (base + height);
}

// Реализация функции для получения имени фигуры (в данном случае, "Параллелограмм").
std::string Parallelogram::Name() const {
    return "Параллелограмм";
}
