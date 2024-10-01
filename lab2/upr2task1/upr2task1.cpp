
#include <iostream>
#include <math.h>

int main()
{
    system("chcp 1251");

    double x, x1, x2, y;

    std::cout << "x1 = "; std::cin >> x1;
    std::cout << "x2 = "; std::cin >> x2;

    std::cout << "\tx\tsin(x)\n";

    x = x1;
    do {
        y = sin(x);

        std::cout << "\t" << x << "\t" << y << std::endl;
        x = x + 0.01;

    } while (x <= x2);

    return 0;
}

