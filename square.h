#pragma once

#include "rectangle.h"

// �����, �������������� �������.
class Square : public Rectangle {
public:
    // ����������� ������ Square, ��������� ����� ������� ��������.
    Square(double side);

    // ���������������� ������� ��� ��������� ����� ������ (� ������ ������, "�������").
    std::string Name() const override;
};
