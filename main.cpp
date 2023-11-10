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
    std::cout << "Фигура: " << shape->Name() << std::endl;
    std::cout << "Площадь: " << shape->Area() << std::endl;
    std::cout << "Периметр: " << shape->Perimeter() << std::endl;
    std::cout << "---------------------" << std::endl;
}

int main() {
    setlocale(LC_ALL, "Russian");
    std::cout << "Выберите фигуру:" << std::endl;
    std::cout << "1. Круг" << std::endl;
    std::cout << "2. Прямоугольник" << std::endl;
    std::cout << "3. Треугольник" << std::endl;
    std::cout << "4. Квадрат" << std::endl;
    std::cout << "5. Эллипс" << std::endl;
    std::cout << "6. Пятиугольник" << std::endl;
    std::cout << "7. Шестиугольник" << std::endl;
    std::cout << "8. Восьмиугольник" << std::endl;
    std::cout << "9. Ромб" << std::endl;
    std::cout << "10. Параллелограмм" << std::endl;
    std::cout << "11. Трапеция" << std::endl;
    std::cout << "12. Равнобедренный треугольник" << std::endl;
    std::cout << "13. Равносторонний шестиугольник" << std::endl;

    int choice;
    std::cin >> choice;

    Shape* selectedShape = nullptr;

    switch (choice) {
    case 1: {
        double radius;
        std::cout << "Введите радиус круга: ";
        std::cin >> radius;
        selectedShape = new Circle(radius);
        break;
    }
    case 2: {
        double width, height;
        std::cout << "Введите ширину и высоту прямоугольника: ";
        std::cin >> width >> height;
        selectedShape = new Rectangle(width, height);
        break;
    }
    case 3: {
        double a, b, c;
        std::cout << "Введите длины трех сторон треугольника: ";
        std::cin >> a >> b >> c;
        selectedShape = new Triangle(a, b, c);
        break;
    }
    case 4: {
        double side;
        std::cout << "Введите длину стороны квадрата: ";
        std::cin >> side;
        selectedShape = new Square(side);
        break;
    }
    case 5: {
        double semiMajorAxis, semiMinorAxis;
        std::cout << "Введите большую и малую полуоси эллипса: ";
        std::cin >> semiMajorAxis >> semiMinorAxis;
        selectedShape = new Ellipse(semiMajorAxis, semiMinorAxis);
        break;
    }
    case 6: {
        double side;
        std::cout << "Введите длину стороны пятиугольника: ";
        std::cin >> side;
        selectedShape = new Pentagon(side);
        break;
    }
    case 7: {
        double side;
        std::cout << "Введите длину стороны шестиугольника: ";
        std::cin >> side;
        selectedShape = new Hexagon(side);
        break;
    }
    case 8: {
        double side;
        std::cout << "Введите длину стороны восьмиугольника: ";
        std::cin >> side;
        selectedShape = new Octagon(side);
        break;
    }
    case 9: {
        double side, angle;
        std::cout << "Введите длину стороны и угол в ромбе: ";
        std::cin >> side >> angle;
        selectedShape = new Rhombus(side, angle);
        break;
    }
    case 10: {
        double base, height;
        std::cout << "Введите длину основания и высоту параллелограмма: ";
        std::cin >> base >> height;
        selectedShape = new Parallelogram(base, height);
        break;
    }
    case 11: {
        double a, b, height;
        std::cout << "Введите длины двух параллельных сторон и высоту трапеции: ";
        std::cin >> a >> b >> height;
        selectedShape = new Trapezoid(a, b, height);
        break;
    }
    case 12: {
        double base, sides;
        std::cout << "Введите длину основания и длину двух равных сторон равнобедренного треугольника: ";
        std::cin >> base >> sides;
        selectedShape = new IsoscelesTriangle(base, sides);
        break;
    }
    case 13: {
        double side;
        std::cout << "Введите длину стороны равностороннего шестиугольника: ";
        std::cin >> side;
        selectedShape = new RegularHexagon(side);
        break;
    }
    default:
        std::cout << "Неверный выбор." << std::endl;
        return 1;
    }

    PrintShapeInfo(selectedShape);

    delete selectedShape; // Освобождаем память.

    return 0;
}