#include "Dot.h"
#include "triangle.h"
#include "triangle_ag.h"
#include <iostream>


int main() {
	system("chcp 1251");

	//Композиция
	Triangle *t1 = new Triangle(Dot(0, 2), Dot(0, 0), Dot(2, 0));
	t1->showSidesLength();
	std::cout << "периметр " << t1->getPerimeter() << " площадь " << t1->getSquare() << std::endl;

	//Агрегация
	Dot* p1 = new Dot(0, 2);
	Dot* p2 = new Dot(0, 0);
	Dot* p3 = new Dot(2, 0);
	TriangleAg *t2 = new TriangleAg(p1, p2, p3);

	t2->showSidesLength();
	std::cout << "периметр " << t2->getPerimeter() << " площадь " << t2->getSquare() << std::endl;

	delete t1;
	delete t2;

	return 0;
}