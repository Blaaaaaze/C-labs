#include <iostream>

int main()
{
	system("chcp 1251");

    char op;

    std::cout << "Сделай свой выбор, собери авто своей мечты:";
    std::cin >> op;

	switch (op)
	{
	case 'S':
		std::cout << "Кондиционер хочу\n";
	case 'V':
		std::cout << "Радио играть должно\n";
	default:
		std::cout << "Колеса круглые\n";
		std::cout << "Мощный двигатель\n";
	}

	return 0;
}


