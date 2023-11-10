#pragma once

#include "shape.h"

// Класс, представляющий шестиугольник.
class Hexagon : public Shape {
public:
    // Конструктор класса Hexagon, принимает длину стороны шестиугольника.
    Hexagon(double side);

    // Переопределенная функция для вычисления площади шестиугольника.
    double Area() const override;

    // Переопределенная функция для вычисления периметра шестиугольника.
    double Perimeter() const override;

    // Переопределенная функция для получения имени фигуры (в данном случае, "Шестиугольник").
    std::string Name() const override;

private:
    double side; // Длина стороны шестиугольника.
};
