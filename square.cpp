#include "square.h"

// ����������� ������������ ������ Square.
Square::Square(double side) : Rectangle(side, side) {}

// ���������� ������� ��� ��������� ����� ������ (� ������ ������, "�������").
std::string Square::Name() const {
    return "�������";
}
