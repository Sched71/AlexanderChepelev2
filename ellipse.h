#pragma once

#include "shape.h"

// �����, �������������� ������.
class Ellipse : public Shape {
public:
    // ����������� ������ Ellipse, ��������� ������� � ����� ������� �������.
    Ellipse(double majorAxis, double minorAxis);

    // ���������������� ������� ��� ���������� ������� �������.
    double Area() const override;

    // ���������������� ������� ��� ���������� ��������� ������� (�����������).
    double Perimeter() const override;

    // ���������������� ������� ��� ��������� ����� ������ (� ������ ������, "������").
    std::string Name() const override;

private:
    double majorAxis; // ������� ������� �������.
    double minorAxis; // ����� ������� �������.
};
