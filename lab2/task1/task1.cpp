
#include <iostream>

int main()
{
    system("chcp 1251");

    double x, y;
    std::cout << "Введите координату по оси х: \n";
    std::cin >> x;

    std::cout << "Введите координату по оси y: \n";
    std::cin >> y;

    if (x * x + y * y < 9 && y > 0) {
        std::cout << "Внутри";
    }
    else if (x * x + y * y > 9 || y < 0) {
        std::cout << "Снаружи";
    }
    else {
        std::cout << "На границе";
    }

    return 0;
}


