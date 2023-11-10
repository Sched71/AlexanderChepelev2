#include "ellipse.h"
#include <cmath>

// ����������� ������������ ������ Ellipse.
Ellipse::Ellipse(double majorAxis, double minorAxis) : majorAxis(majorAxis), minorAxis(minorAxis) {}

// ���������� ������� ��� ���������� ������� �������.
double Ellipse::Area() const {
    return 3.141592653589793238 * majorAxis * minorAxis;
}

// ���������� ������� ��� ���������� ��������� ������� (�����������).
double Ellipse::Perimeter() const {
    return 2.0 * 3.141592653589793238 * sqrt((majorAxis * majorAxis + minorAxis * minorAxis) / 2.0);
}

// ���������� ������� ��� ��������� ����� ������ (� ������ ������, "������").
std::string Ellipse::Name() const {
    return "������";
}
