#include "triangle.h"
#include <cmath>

// ����������� ������������ ������ Triangle.
Triangle::Triangle(double a, double b, double c) : sideA(a), sideB(b), sideC(c) {}

// ���������� ������� ��� ���������� ������� ������������ �� ������� ������.
double Triangle::Area() const {
    double s = (sideA + sideB + sideC) / 2.0;
    return sqrt(s * (s - sideA) * (s - sideB) * (s - sideC));
}

// ���������� ������� ��� ���������� ��������� ������������.
double Triangle::Perimeter() const {
    return sideA + sideB + sideC;
}

// ���������� ������� ��� ��������� ����� ������ (� ������ ������, "�����������").
std::string Triangle::Name() const {
    return "�����������";
}
