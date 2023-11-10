#include "square.h"

// Определение конструктора класса Square.
Square::Square(double side) : Rectangle(side, side) {}

// Реализация функции для получения имени фигуры (в данном случае, "Квадрат").
std::string Square::Name() const {
    return "Квадрат";
}
