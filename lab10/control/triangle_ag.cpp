#include "triangle_ag.h"
#include "Dot.h"
#include <cmath> // Используйте <cmath> вместо <math.h> в C++
#include <iostream>

TriangleAg::TriangleAg(Dot* first, Dot* second, Dot* third) {
    point1 = first;
    point2 = second;
    point3 = third;
}

void TriangleAg::showSidesLength() {
    std::cout << "Длина первой стороны: " << point1->distanceTo(*point2) << std::endl;
    std::cout << "Длина второй стороны: " << point2->distanceTo(*point3) << std::endl;
    std::cout << "Длина третьей стороны: " << point3->distanceTo(*point1) << std::endl;
}

double TriangleAg::getPerimeter() {
    return point1->distanceTo(*point2) + point2->distanceTo(*point3) + point3->distanceTo(*point1);
}

double TriangleAg::getSquare() {
    double semiPerimeter = getPerimeter() / 2; 
    return sqrt(semiPerimeter * (semiPerimeter - point1->distanceTo(*point2)) *
        (semiPerimeter - point2->distanceTo(*point3)) *
        (semiPerimeter - point3->distanceTo(*point1)));
}
