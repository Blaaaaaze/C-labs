// task2upr2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

int main()
{
	system("chcp 1251");

	int a, b, temp;

	std::cout << "a = "; std::cin >> a;
	std::cout << "b = "; std::cin >> b;

	while (a != b) {
		if (a > b) {
			a -= b;
		}
		else { 
			b -= a;
		}
	}

	std::cout << "НОД = " << a << std::endl;

	return 0;
}


