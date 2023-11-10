#pragma once

#include "shape.h"

// Класс, представляющий пятиугольник.
class Pentagon : public Shape {
public:
    // Конструктор класса Pentagon, принимает длину стороны пятиугольника.
    Pentagon(double side);

    // Переопределенная функция для вычисления площади пятиугольника.
    double Area() const override;

    // Переопределенная функция для вычисления периметра пятиугольника.
    double Perimeter() const override;

    // Переопределенная функция для получения имени фигуры (в данном случае, "Пятиугольник").
    std::string Name() const override;

private:
    double side; // Длина стороны пятиугольника.
};
