// task2upr3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <math.h>

int main()
{
    system("chcp 1251");

    /*double x, x1, x2, y;

    std::cout << "x1 = "; std::cin >> x1;
    std::cout << "x2 = "; std::cin >> x2;

    std::cout << "\tx\tsin(x)\n";

    x = x1;

    while (x <= x2) {
        y = sin(x);

        std::cout << "\t" << x << "\t" << y << std::endl;
        x = x + 0.01;
    }

    return 0;*/

    int a, b, temp;

    std::cout << "a = "; std::cin >> a;
    std::cout << "b = "; std::cin >> b;

    do {
        if (a > b) a -= b;
        else b -= a;
    } while (a != b);

    std::cout << "НОД = " << a << std::endl;

    return 0;

}

