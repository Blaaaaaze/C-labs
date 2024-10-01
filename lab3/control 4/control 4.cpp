#include <iostream>

long sumRow(int n) {
    if (n == 1) return 5;
    else return n*5 + sumRow(n - 1);
}

int main()
{
    system("chcp 1251");

    int numb;
    std::cout << "Введите число: "; std::cin >> numb;

    long S = sumRow(numb);
    std::cout << "Результат: " << S << std::endl;
    return 0;
}

