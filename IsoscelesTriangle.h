#pragma once

#include "shape.h"

// �����, �������������� �������������� �����������.
class IsoscelesTriangle : public Shape {
public:
    // ����������� ������ IsoscelesTriangle, ��������� ����� ������� ������ � ���������.
    IsoscelesTriangle(double side, double base);

    // ���������������� ������� ��� ���������� ������� ��������������� ������������.
    double Area() const override;

    // ���������������� ������� ��� ���������� ��������� ��������������� ������������.
    double Perimeter() const override;

    // ���������������� ������� ��� ��������� ����� ������ (� ������ ������, "�������������� �����������").
    std::string Name() const override;

private:
    double side; // ����� ������� ������ ��������������� ������������.
    double base; // ����� ��������� ��������������� ������������.
};
