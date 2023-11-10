#pragma once

#include "shape.h"

// Класс, представляющий эллипс.
class Ellipse : public Shape {
public:
    // Конструктор класса Ellipse, принимает большую и малую полуоси эллипса.
    Ellipse(double majorAxis, double minorAxis);

    // Переопределенная функция для вычисления площади эллипса.
    double Area() const override;

    // Переопределенная функция для вычисления периметра эллипса (приближенно).
    double Perimeter() const override;

    // Переопределенная функция для получения имени фигуры (в данном случае, "Эллипс").
    std::string Name() const override;

private:
    double majorAxis; // Большая полуось эллипса.
    double minorAxis; // Малая полуось эллипса.
};
