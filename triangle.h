#pragma once

#include "shape.h"

// Класс, представляющий треугольник.
class Triangle : public Shape {
public:
    // Конструктор класса Triangle, принимает длины трех сторон треугольника.
    Triangle(double a, double b, double c);

    // Переопределенная функция для вычисления площади треугольника.
    double Area() const override;

    // Переопределенная функция для вычисления периметра треугольника.
    double Perimeter() const override;

    // Переопределенная функция для получения имени фигуры (в данном случае, "Треугольник").
    std::string Name() const override;

private:
    double sideA; // Длина стороны A треугольника.
    double sideB; // Длина стороны B треугольника.
    double sideC; // Длина стороны C треугольника.
};
