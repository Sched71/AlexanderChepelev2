#include "parallelogram.h"

// ����������� ������������ ������ Parallelogram.
Parallelogram::Parallelogram(double base, double height) : base(base), height(height) {}

// ���������� ������� ��� ���������� ������� ���������������.
double Parallelogram::Area() const {
    return base * height;
}

// ���������� ������� ��� ���������� ��������� ���������������.
double Parallelogram::Perimeter() const {
    return 2.0 * (base + height);
}

// ���������� ������� ��� ��������� ����� ������ (� ������ ������, "��������������").
std::string Parallelogram::Name() const {
    return "��������������";
}
