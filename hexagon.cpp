#include "hexagon.h"

// ����������� ������������ ������ Hexagon.
Hexagon::Hexagon(double side) : side(side) {}

// ���������� ������� ��� ���������� ������� ��������������.
double Hexagon::Area() const {
    return 1.5 * sqrt(3.0) * side * side;
}

// ���������� ������� ��� ���������� ��������� ��������������.
double Hexagon::Perimeter() const {
    return 6.0 * side;
}

// ���������� ������� ��� ��������� ����� ������ (� ������ ������, "�������������").
std::string Hexagon::Name() const {
    return "�������������";
}
