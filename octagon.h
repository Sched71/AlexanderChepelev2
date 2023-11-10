#pragma once

#include "shape.h"

// Класс, представляющий восьмиугольник.
class Octagon : public Shape {
public:
    // Конструктор класса Octagon, принимает длину стороны восьмиугольника.
    Octagon(double side);

    // Переопределенная функция для вычисления площади восьмиугольника.
    double Area() const override;

    // Переопределенная функция для вычисления периметра восьмиугольника.
    double Perimeter() const override;

    // Переопределенная функция для получения имени фигуры (в данном случае, "Восьмиугольник").
    std::string Name() const override;

private:
    double side; // Длина стороны восьмиугольника.
};
