#include <iostream>
#include <ctime>
//тут с массивом
int main()
{
	system("chcp 1251");

	srand(time(NULL));
	int a, b, c;
	int k = 0;

	const int n = 10;
	int mas[n];

	for (int i = 0; i < n; i++) {
		a = rand() % 10 + 1;
		b = rand() % 10 + 1;

		std::cout << a << " * " << b << " = ";
		std::cin >> c;
		mas[i] = c;

		if (a * b != c) {
			k++;
			std::cout << "Error! ";
			std::cout << a << " * " << b << " = " << a * b << std::endl;
		}
	}
	std::cout << "ALL:\n";
	for (int i = 0; i < n; i++) {
		std::cout << mas[i] << std::endl;
	}

	std::cout << "Count error: " << k << std::endl;
	return 0;
}
