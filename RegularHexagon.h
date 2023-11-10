#pragma once

#include "shape.h"

// �����, �������������� ���������� �������������.
class RegularHexagon : public Shape {
public:
    // ����������� ������ RegularHexagon, ��������� ����� ������� ��������������.
    RegularHexagon(double side);

    // ���������������� ������� ��� ���������� ������� ����������� ��������������.
    double Area() const override;

    // ���������������� ������� ��� ���������� ��������� ����������� ��������������.
    double Perimeter() const override;

    // ���������������� ������� ��� ��������� ����� ������ (� ������ ������, "���������� �������������").
    std::string Name() const override;

private:
    double side; // ����� ������� ����������� ��������������.
};
