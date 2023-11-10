#pragma once

#include "shape.h"

// Класс, представляющий прямоугольник.
class Rectangle : public Shape {
public:
    // Конструктор класса Rectangle, принимает ширину и высоту прямоугольника.
    Rectangle(double width, double height);

    // Переопределенная функция для вычисления площади прямоугольника.
    double Area() const override;

    // Переопределенная функция для вычисления периметра прямоугольника.
    double Perimeter() const override;

    // Переопределенная функция для получения имени фигуры (в данном случае, "Прямоугольник").
    std::string Name() const override;

private:
    double width;  // Ширина прямоугольника.
    double height; // Высота прямоугольника.
};
