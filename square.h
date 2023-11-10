#pragma once

#include "rectangle.h"

// Класс, представляющий квадрат.
class Square : public Rectangle {
public:
    // Конструктор класса Square, принимает длину стороны квадрата.
    Square(double side);

    // Переопределенная функция для получения имени фигуры (в данном случае, "Квадрат").
    std::string Name() const override;
};
