#pragma once

#include "shape.h"

// Класс, представляющий правильный шестиугольник.
class RegularHexagon : public Shape {
public:
    // Конструктор класса RegularHexagon, принимает длину стороны шестиугольника.
    RegularHexagon(double side);

    // Переопределенная функция для вычисления площади правильного шестиугольника.
    double Area() const override;

    // Переопределенная функция для вычисления периметра правильного шестиугольника.
    double Perimeter() const override;

    // Переопределенная функция для получения имени фигуры (в данном случае, "Правильный шестиугольник").
    std::string Name() const override;

private:
    double side; // Длина стороны правильного шестиугольника.
};
