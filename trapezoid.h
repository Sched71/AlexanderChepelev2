#pragma once

#include "shape.h"

// �����, �������������� ��������.
class Trapezoid : public Shape {
public:
    // ����������� ������ Trapezoid, ��������� ����� ��������� � ������ ��������.
    Trapezoid(double base1, double base2, double height);

    // ���������������� ������� ��� ���������� ������� ��������.
    double Area() const override;

    // ���������������� ������� ��� ���������� ��������� ��������.
    double Perimeter() const override;

    // ���������������� ������� ��� ��������� ����� ������ (� ������ ������, "��������").
    std::string Name() const override;

private:
    double base1;  // ����� ������� ��������� ��������.
    double base2;  // ����� ������� ��������� ��������.
    double height; // ������ ��������.
};
