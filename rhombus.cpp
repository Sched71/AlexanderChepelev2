#include "rhombus.h"

// ����������� ������������ ������ Rhombus.
Rhombus::Rhombus(double diagonal1, double diagonal2) : diagonal1(diagonal1), diagonal2(diagonal2) {}

// ���������� ������� ��� ���������� ������� �����.
double Rhombus::Area() const {
    return 0.5 * diagonal1 * diagonal2;
}

// ���������� ������� ��� ���������� ��������� �����.
double Rhombus::Perimeter() const {
    return 4.0 * sqrt(pow(diagonal1 / 2.0, 2) + pow(diagonal2 / 2.0, 2));
}

// ���������� ������� ��� ��������� ����� ������ (� ������ ������, "����").
std::string Rhombus::Name() const {
    return "����";
}
