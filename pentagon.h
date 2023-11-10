#pragma once

#include "shape.h"

// �����, �������������� ������������.
class Pentagon : public Shape {
public:
    // ����������� ������ Pentagon, ��������� ����� ������� �������������.
    Pentagon(double side);

    // ���������������� ������� ��� ���������� ������� �������������.
    double Area() const override;

    // ���������������� ������� ��� ���������� ��������� �������������.
    double Perimeter() const override;

    // ���������������� ������� ��� ��������� ����� ������ (� ������ ������, "������������").
    std::string Name() const override;

private:
    double side; // ����� ������� �������������.
};
