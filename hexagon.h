#pragma once

#include "shape.h"

// �����, �������������� �������������.
class Hexagon : public Shape {
public:
    // ����������� ������ Hexagon, ��������� ����� ������� ��������������.
    Hexagon(double side);

    // ���������������� ������� ��� ���������� ������� ��������������.
    double Area() const override;

    // ���������������� ������� ��� ���������� ��������� ��������������.
    double Perimeter() const override;

    // ���������������� ������� ��� ��������� ����� ������ (� ������ ������, "�������������").
    std::string Name() const override;

private:
    double side; // ����� ������� ��������������.
};
