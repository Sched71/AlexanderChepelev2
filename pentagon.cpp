#include "pentagon.h"
#include <cmath>

// ����������� ������������ ������ Pentagon.
Pentagon::Pentagon(double side) : side(side) {}

// ���������� ������� ��� ���������� ������� �������������.
double Pentagon::Area() const {
    return 0.25 * sqrt(5.0 * (5.0 + 2.0 * sqrt(5.0))) * side * side;
}

// ���������� ������� ��� ���������� ��������� �������������.
double Pentagon::Perimeter() const {
    return 5.0 * side;
}

// ���������� ������� ��� ��������� ����� ������ (� ������ ������, "������������").
std::string Pentagon::Name() const {
    return "������������";
}
