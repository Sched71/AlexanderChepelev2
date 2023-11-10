#pragma once

#include "shape.h"

// �����, �������������� �����������.
class Triangle : public Shape {
public:
    // ����������� ������ Triangle, ��������� ����� ���� ������ ������������.
    Triangle(double a, double b, double c);

    // ���������������� ������� ��� ���������� ������� ������������.
    double Area() const override;

    // ���������������� ������� ��� ���������� ��������� ������������.
    double Perimeter() const override;

    // ���������������� ������� ��� ��������� ����� ������ (� ������ ������, "�����������").
    std::string Name() const override;

private:
    double sideA; // ����� ������� A ������������.
    double sideB; // ����� ������� B ������������.
    double sideC; // ����� ������� C ������������.
};
