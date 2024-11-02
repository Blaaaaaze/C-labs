#pragma once
#include "Dot.h"
#include <string>

class Triangle {
private:
	Dot point1;
	Dot point2;
	Dot point3;
public:
	Triangle(Dot first, Dot second, Dot third);
	void showSidesLength(); 
	double getPerimeter();
	double getSquare();
};