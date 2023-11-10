#pragma once

#include "shape.h"

// Класс, представляющий равнобедренный треугольник.
class IsoscelesTriangle : public Shape {
public:
    // Конструктор класса IsoscelesTriangle, принимает длины боковых сторон и основания.
    IsoscelesTriangle(double side, double base);

    // Переопределенная функция для вычисления площади равнобедренного треугольника.
    double Area() const override;

    // Переопределенная функция для вычисления периметра равнобедренного треугольника.
    double Perimeter() const override;

    // Переопределенная функция для получения имени фигуры (в данном случае, "Равнобедренный треугольник").
    std::string Name() const override;

private:
    double side; // Длина боковых сторон равнобедренного треугольника.
    double base; // Длина основания равнобедренного треугольника.
};
