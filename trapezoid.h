#pragma once

#include "shape.h"

// Класс, представляющий трапецию.
class Trapezoid : public Shape {
public:
    // Конструктор класса Trapezoid, принимает длины оснований и высоту трапеции.
    Trapezoid(double base1, double base2, double height);

    // Переопределенная функция для вычисления площади трапеции.
    double Area() const override;

    // Переопределенная функция для вычисления периметра трапеции.
    double Perimeter() const override;

    // Переопределенная функция для получения имени фигуры (в данном случае, "Трапеция").
    std::string Name() const override;

private:
    double base1;  // Длина первого основания трапеции.
    double base2;  // Длина второго основания трапеции.
    double height; // Высота трапеции.
};
