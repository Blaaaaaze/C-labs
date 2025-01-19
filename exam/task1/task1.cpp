#include <iostream>
#define _USE_MATH_DEFINES
#include <cmath>

void circle(int r) {
	const double Pi = acos(-1.0);
	std::cout << Pi * r * r;
}

void rectangle(int a, int b) {
	std::cout << a * b;
}

void triangle(int a, int b) {
	std::cout << (a * b * 0.5);
}

void square(int a) {
	std::cout << a * a;
}

int main()
{
	system("chcp 1251");
    int var;
    std::cout << "Выберите вариант: ";
    std::cin >> var;
	switch (var)
	{
	case 1:
		int a;
		std::cout << "Введите длину стороны: ";
		std::cin >> a;
		square(a);
		break;
	case 2:
		int b, c;
		std::cout << "Введите 2 стороны через пробел: ";
		std::cin >> b >> c;
		rectangle(b, c);
		break;
	case 3:
		int d,e;
		std::cout << "Введите длину 2 катетов через пробел: ";
		std::cin >> d >> e;
		triangle(d, e);
		break;
	case 4:
		int r;
		std::cout << "Введите длину радиуса: ";
		std::cin >> r;
		circle(r);
		break;
	default:
		break;
	}
	return 0;
}


