#pragma once

#include "shape.h"

// �����, �������������� ����.
class Rhombus : public Shape {
public:
    // ����������� ������ Rhombus, ��������� ����� ���������� �����.
    Rhombus(double diagonal1, double diagonal2);

    // ���������������� ������� ��� ���������� ������� �����.
    double Area() const override;

    // ���������������� ������� ��� ���������� ��������� �����.
    double Perimeter() const override;

    // ���������������� ������� ��� ��������� ����� ������ (� ������ ������, "����").
    std::string Name() const override;

private:
    double diagonal1; // ����� ������ ��������� �����.
    double diagonal2; // ����� ������ ��������� �����.
};

