#include "IsoscelesTriangle.h"
#include <cmath>

// ����������� ������������ ������ IsoscelesTriangle.
IsoscelesTriangle::IsoscelesTriangle(double side, double base) : side(side), base(base) {}

// ���������� ������� ��� ���������� ������� ��������������� ������������.
double IsoscelesTriangle::Area() const {
    return 0.5 * base * sqrt(pow(side, 2) - pow(base / 2.0, 2));
}

// ���������� ������� ��� ���������� ��������� ��������������� ������������.
double IsoscelesTriangle::Perimeter() const {
    return 2.0 * side + base;
}

// ���������� ������� ��� ��������� ����� ������ (� ������ ������, "�������������� �����������").
std::string IsoscelesTriangle::Name() const {
    return "�������������� �����������";
}
