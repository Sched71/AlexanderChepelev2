#include "rectangle.h"

// Определение конструктора класса Rectangle.
Rectangle::Rectangle(double width, double height) : width(width), height(height) {}

// Реализация функции для вычисления площади прямоугольника.
double Rectangle::Area() const {
    return width * height;
}

// Реализация функции для вычисления периметра прямоугольника.
double Rectangle::Perimeter() const {
    return 2.0 * (width + height);
}

// Реализация функции для получения имени фигуры (в данном случае, "Прямоугольник").
std::string Rectangle::Name() const {
    return "Прямоугольник";
}
