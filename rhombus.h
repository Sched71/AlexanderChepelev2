#pragma once

#include "shape.h"

// Класс, представляющий ромб.
class Rhombus : public Shape {
public:
    // Конструктор класса Rhombus, принимает длину диагоналей ромба.
    Rhombus(double diagonal1, double diagonal2);

    // Переопределенная функция для вычисления площади ромба.
    double Area() const override;

    // Переопределенная функция для вычисления периметра ромба.
    double Perimeter() const override;

    // Переопределенная функция для получения имени фигуры (в данном случае, "Ромб").
    std::string Name() const override;

private:
    double diagonal1; // Длина первой диагонали ромба.
    double diagonal2; // Длина второй диагонали ромба.
};

