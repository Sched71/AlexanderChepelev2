#include "ellipse.h"
#include <cmath>

// ќпределение конструктора класса Ellipse.
Ellipse::Ellipse(double majorAxis, double minorAxis) : majorAxis(majorAxis), minorAxis(minorAxis) {}

// –еализаци€ функции дл€ вычислени€ площади эллипса.
double Ellipse::Area() const {
    return 3.141592653589793238 * majorAxis * minorAxis;
}

// –еализаци€ функции дл€ вычислени€ периметра эллипса (приближенно).
double Ellipse::Perimeter() const {
    return 2.0 * 3.141592653589793238 * sqrt((majorAxis * majorAxis + minorAxis * minorAxis) / 2.0);
}

// –еализаци€ функции дл€ получени€ имени фигуры (в данном случае, "Ёллипс").
std::string Ellipse::Name() const {
    return "Ёллипс";
}
