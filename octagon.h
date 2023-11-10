#pragma once

#include "shape.h"

// �����, �������������� ��������������.
class Octagon : public Shape {
public:
    // ����������� ������ Octagon, ��������� ����� ������� ���������������.
    Octagon(double side);

    // ���������������� ������� ��� ���������� ������� ���������������.
    double Area() const override;

    // ���������������� ������� ��� ���������� ��������� ���������������.
    double Perimeter() const override;

    // ���������������� ������� ��� ��������� ����� ������ (� ������ ������, "��������������").
    std::string Name() const override;

private:
    double side; // ����� ������� ���������������.
};
