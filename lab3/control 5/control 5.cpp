

#include <iostream>

int toBit(int n) {
    if (n == 0) return 0;
    else return n % 2 + 10 * (toBit(n / 2));
}
int main()
{
    system("chcp 1251");

    int numb;
    std::cout << "Введите число: "; std::cin >> numb;
    int res = toBit(numb);
    std::cout << "Ваше число в двоичной системе: " << res << std::endl;
}

