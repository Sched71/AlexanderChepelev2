#include "trapezoid.h"

// ����������� ������������ ������ Trapezoid.
Trapezoid::Trapezoid(double base1, double base2, double height) : base1(base1), base2(base2), height(height) {}

// ���������� ������� ��� ���������� ������� ��������.
double Trapezoid::Area() const {
    return 0.5 * (base1 + base2) * height;
}

// ���������� ������� ��� ���������� ��������� ��������.
double Trapezoid::Perimeter() const {
    // �������� �������� �� �����������, ��� ��� �� �� ���������� ��������� (�������� ����� ���� ��������� ����).
    return 0.0;
}

// ���������� ������� ��� ��������� ����� ������ (� ������ ������, "��������").
std::string Trapezoid::Name() const {
    return "��������";
}
