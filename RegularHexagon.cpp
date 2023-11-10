#include "RegularHexagon.h"
#include <cmath>

// ����������� ������������ ������ RegularHexagon.
RegularHexagon::RegularHexagon(double side) : side(side) {}

// ���������� ������� ��� ���������� ������� ����������� ��������������.
double RegularHexagon::Area() const {
    return (3.0 * sqrt(3.0) / 2.0) * pow(side, 2);
}

// ���������� ������� ��� ���������� ��������� ����������� ��������������.
double RegularHexagon::Perimeter() const {
    return 6.0 * side;
}

// ���������� ������� ��� ��������� ����� ������ (� ������ ������, "���������� �������������").
std::string RegularHexagon::Name() const {
    return "���������� �������������";
}
