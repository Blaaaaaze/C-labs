#include <iostream>

double func1(double a) {
    return pow(a, 1.0 / 3);
}

double func2(double a) {
    double x_old = 1000000, x_new;
    x_new = a;

    while (abs(x_old - x_new) > 0.001) {
        x_old = x_new;
        x_new = (1. / 3) * ((a / (x_old * x_old)) + 2 * x_old);
    }

 
    return x_new;
}

int main()
{
    system("chcp 1251");

    double a;
    std::cout << "Введите число: "; std::cin >> a;

    double res1 = func1(a);
    double res2 = func2(a);
    std::cout << "результат первой функции: " << res1 << std::endl << "результат второй функции: " << res2 << std::endl;
    return 0;
}

