#include "triangle.h"
#include "Dot.h"
#include <math.h>
#include <iostream>


Triangle::Triangle(Dot first, Dot second, Dot third) {
	point1 = first;
	point2 = second;
	point3 = third;
}

void Triangle::showSidesLength() {
	std::cout << "Длина первой стороны: " << point1.distanceTo(point2) << std::endl;
	std::cout << "Длина второй стороны: " << point2.distanceTo(point3) << std::endl;
	std::cout << "Длина третьей стороны: " << point3.distanceTo(point1) << std::endl;
}

double Triangle::getPerimeter() {
	return point1.distanceTo(point2) + point2.distanceTo(point3) + point3.distanceTo(point1);
}

double Triangle::getSquare() {
	double halhP = Triangle::getPerimeter() / 2;
	return sqrt(halhP * (halhP - point1.distanceTo(point2)) *
			(halhP - point2.distanceTo(point3)) *
			(halhP - point3.distanceTo(point1)));
}