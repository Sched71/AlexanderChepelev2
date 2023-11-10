#pragma once

#include "shape.h"

// Класс, представляющий параллелограмм.
class Parallelogram : public Shape {
public:
    // Конструктор класса Parallelogram, принимает длину основания и высоту параллелограмма.
    Parallelogram(double base, double height);

    // Переопределенная функция для вычисления площади параллелограмма.
    double Area() const override;

    // Переопределенная функция для вычисления периметра параллелограмма.
    double Perimeter() const override;

    // Переопределенная функция для получения имени фигуры (в данном случае, "Параллелограмм").
    std::string Name() const override;

private:
    double base;   // Длина основания параллелограмма.
    double height; // Высота параллелограмма.
};
