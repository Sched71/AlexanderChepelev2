#include "shape.h"
#include "Parallelogram.h"
#include "circle.h"
#include "rectangle.h"
#include "triangle.h"
#include "square.h"
#include "ellipse.h"
#include "pentagon.h"
#include "hexagon.h"
#include "octagon.h"
#include "RegularHexagon.h"
#include "trapezoid.h"
#include "Rhombus.h"
#include "IsoscelesTriangle.h"
#include <iostream>
#include <vector>

void PrintShapeInfo(const Shape* shape) {
    std::cout << "������: " << shape->Name() << std::endl;
    std::cout << "�������: " << shape->Area() << std::endl;
    std::cout << "��������: " << shape->Perimeter() << std::endl;
    std::cout << "---------------------" << std::endl;
}

int main() {
    setlocale(LC_ALL, "Russian");
    std::cout << "�������� ������:" << std::endl;
    std::cout << "1. ����" << std::endl;
    std::cout << "2. �������������" << std::endl;
    std::cout << "3. �����������" << std::endl;
    std::cout << "4. �������" << std::endl;
    std::cout << "5. ������" << std::endl;
    std::cout << "6. ������������" << std::endl;
    std::cout << "7. �������������" << std::endl;
    std::cout << "8. ��������������" << std::endl;
    std::cout << "9. ����" << std::endl;
    std::cout << "10. ��������������" << std::endl;
    std::cout << "11. ��������" << std::endl;
    std::cout << "12. �������������� �����������" << std::endl;
    std::cout << "13. �������������� �������������" << std::endl;

    int choice;
    std::cin >> choice;

    Shape* selectedShape = nullptr;

    switch (choice) {
    case 1: {
        double radius;
        std::cout << "������� ������ �����: ";
        std::cin >> radius;
        selectedShape = new Circle(radius);
        break;
    }
    case 2: {
        double width, height;
        std::cout << "������� ������ � ������ ��������������: ";
        std::cin >> width >> height;
        selectedShape = new Rectangle(width, height);
        break;
    }
    case 3: {
        double a, b, c;
        std::cout << "������� ����� ���� ������ ������������: ";
        std::cin >> a >> b >> c;
        selectedShape = new Triangle(a, b, c);
        break;
    }
    case 4: {
        double side;
        std::cout << "������� ����� ������� ��������: ";
        std::cin >> side;
        selectedShape = new Square(side);
        break;
    }
    case 5: {
        double semiMajorAxis, semiMinorAxis;
        std::cout << "������� ������� � ����� ������� �������: ";
        std::cin >> semiMajorAxis >> semiMinorAxis;
        selectedShape = new Ellipse(semiMajorAxis, semiMinorAxis);
        break;
    }
    case 6: {
        double side;
        std::cout << "������� ����� ������� �������������: ";
        std::cin >> side;
        selectedShape = new Pentagon(side);
        break;
    }
    case 7: {
        double side;
        std::cout << "������� ����� ������� ��������������: ";
        std::cin >> side;
        selectedShape = new Hexagon(side);
        break;
    }
    case 8: {
        double side;
        std::cout << "������� ����� ������� ���������������: ";
        std::cin >> side;
        selectedShape = new Octagon(side);
        break;
    }
    case 9: {
        double side, angle;
        std::cout << "������� ����� ������� � ���� � �����: ";
        std::cin >> side >> angle;
        selectedShape = new Rhombus(side, angle);
        break;
    }
    case 10: {
        double base, height;
        std::cout << "������� ����� ��������� � ������ ���������������: ";
        std::cin >> base >> height;
        selectedShape = new Parallelogram(base, height);
        break;
    }
    case 11: {
        double a, b, height;
        std::cout << "������� ����� ���� ������������ ������ � ������ ��������: ";
        std::cin >> a >> b >> height;
        selectedShape = new Trapezoid(a, b, height);
        break;
    }
    case 12: {
        double base, sides;
        std::cout << "������� ����� ��������� � ����� ���� ������ ������ ��������������� ������������: ";
        std::cin >> base >> sides;
        selectedShape = new IsoscelesTriangle(base, sides);
        break;
    }
    case 13: {
        double side;
        std::cout << "������� ����� ������� ��������������� ��������������: ";
        std::cin >> side;
        selectedShape = new RegularHexagon(side);
        break;
    }
    default:
        std::cout << "�������� �����." << std::endl;
        return 1;
    }

    PrintShapeInfo(selectedShape);

    delete selectedShape; // ����������� ������.

    return 0;
}