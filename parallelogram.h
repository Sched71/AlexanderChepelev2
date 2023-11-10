#pragma once

#include "shape.h"

// �����, �������������� ��������������.
class Parallelogram : public Shape {
public:
    // ����������� ������ Parallelogram, ��������� ����� ��������� � ������ ���������������.
    Parallelogram(double base, double height);

    // ���������������� ������� ��� ���������� ������� ���������������.
    double Area() const override;

    // ���������������� ������� ��� ���������� ��������� ���������������.
    double Perimeter() const override;

    // ���������������� ������� ��� ��������� ����� ������ (� ������ ������, "��������������").
    std::string Name() const override;

private:
    double base;   // ����� ��������� ���������������.
    double height; // ������ ���������������.
};
