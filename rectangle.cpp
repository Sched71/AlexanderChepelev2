#include "rectangle.h"

// ����������� ������������ ������ Rectangle.
Rectangle::Rectangle(double width, double height) : width(width), height(height) {}

// ���������� ������� ��� ���������� ������� ��������������.
double Rectangle::Area() const {
    return width * height;
}

// ���������� ������� ��� ���������� ��������� ��������������.
double Rectangle::Perimeter() const {
    return 2.0 * (width + height);
}

// ���������� ������� ��� ��������� ����� ������ (� ������ ������, "�������������").
std::string Rectangle::Name() const {
    return "�������������";
}
