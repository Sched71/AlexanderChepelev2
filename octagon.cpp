#include "octagon.h"

// ����������� ������������ ������ Octagon.
Octagon::Octagon(double side) : side(side) {}

// ���������� ������� ��� ���������� ������� ���������������.
double Octagon::Area() const {
    return 2.0 * side * side * (1.0 + sqrt(2.0));
}

// ���������� ������� ��� ���������� ��������� ���������������.
double Octagon::Perimeter() const {
    return 8.0 * side;
}

// ���������� ������� ��� ��������� ����� ������ (� ������ ������, "��������������").
std::string Octagon::Name() const {
    return "��������������";
}
