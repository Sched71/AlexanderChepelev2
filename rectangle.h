#pragma once

#include "shape.h"

// �����, �������������� �������������.
class Rectangle : public Shape {
public:
    // ����������� ������ Rectangle, ��������� ������ � ������ ��������������.
    Rectangle(double width, double height);

    // ���������������� ������� ��� ���������� ������� ��������������.
    double Area() const override;

    // ���������������� ������� ��� ���������� ��������� ��������������.
    double Perimeter() const override;

    // ���������������� ������� ��� ��������� ����� ������ (� ������ ������, "�������������").
    std::string Name() const override;

private:
    double width;  // ������ ��������������.
    double height; // ������ ��������������.
};
